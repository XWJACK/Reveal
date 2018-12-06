#!/usr/bin/python

import lldb
import sys
import os
import shlex
import argparse


# Global constants
# This path assumes that the script is stored in Contents/SharedSupport/Scripts inside Reveal bundle.
revealLocalSharedSupportPath = os.path.dirname(os.path.dirname(__file__))


# Entry point
def __lldb_init_module(debugger, internal_dict):
    # Make the options parser so we can generate the help text for the LLDB command prior to registering it below
    HandleRevealCommand.__doc__ = CreateRevealCommandOptionsParser().format_help()
    # Install the debugger command
    debugger.HandleCommand("command script add -f {0}.HandleRevealCommand reveal".format(__name__))


# Command options parsing
def CreateRevealCommandOptionsParser():
    subcommands = {}
    subcommands["load"] = { "func" : HandleRevealLoadCommand, "help" : "Load the Reveal Server library." }
    subcommands["start"] = { "func" : HandleRevealStartCommand, "help" : "Start Reveal Server, if it's loaded." }
    subcommands["stop"] = { "func" : HandleRevealStopCommand, "help" : "Stop Reveal Server." }
    subcommands["status"] = { "func" : HandleRevealStatusCommand, "help" : "Print the current status of Reveal Server." }
    
    description = "Commands for loading and controlling Reveal Server in the current debugging session."
    parser = argparse.ArgumentParser(prog="reveal", description=description)
    subparsers = parser.add_subparsers(title="Available actions", metavar="action")
    
    subparsersMap = {}
    for key, info in subcommands.iteritems():
        subparser = subparsers.add_parser(key, help=info["help"])
        subparser.set_defaults(func=info["func"])
        subparsersMap[key] = subparser
    
    subparsersMap["load"].add_argument("-a", "--autostart", action="store_true", help="Automatically start Reveal Server after loading.")
    
    return parser


# Command handlers
def HandleRevealCommand(debugger, command, exe_ctx, result, internal_dict):
    # Parse the command
    parser = CreateRevealCommandOptionsParser()
    commandArgs = shlex.split(command)
    
    if len(commandArgs) == 0:
        parser.print_help()
        return
    
    try:
        args = parser.parse_args(commandArgs)
    except:
        return
    
    # Bail out if running an incompatible target
    target = exe_ctx.target
    if TargetIsCompatible(target) == False:
        result.SetError("target {0} is not supported by Reveal Server.".format(target.triple))
        return
    
    # Check that process is already in the right state
    process = exe_ctx.process
    if lldb.SBDebugger.StateIsStoppedState(process.state) == False:
        result.SetError("process must be paused to execute Reveal Server commands.")
        return

    if ProcessMainThreadContainsFrameWithName(process, "UIApplicationMain") == False:
        if ProcessMainThreadContainsFrameWithName(process, "NSExtensionMain") == False:
            result.SetError("process is not yet ready to execute Reveal Server commands.")
        else:
            result.SetError("process is running an unsupported application extension.")
        return
    
    # Create a loader object with main thread's current frame and execute the command with it
    mainThreadFrame = process.GetThreadAtIndex(0).GetSelectedFrame()
    loader = RevealLoader(mainThreadFrame)
    args.func(loader, result, args)

def HandleRevealLoadCommand(loader, result, args):
    # If target is running locally (i.e. in the Simulator or UIKit Host), load local Reveal Server
    if TargetIsLocal(loader.process.target):
        binaryPath = loader.localRevealServerBinaryPath()
        loader.injectServer(binaryPath, result)
    else:
        # If target is running on device, check if Reveal Server framework is included in the bundle and try loading it if it exists
        remoteServerBinaryPath = loader.remoteRevealServerBinaryPath()
        if loader.remoteFileExists(remoteServerBinaryPath):
            loader.injectServer(remoteServerBinaryPath, result)
        else:
            # Otherwise, can't load Reveal
            result.SetError("failed to load Reveal Server because it was not found in the application bundle. For information about debugging apps with Reveal on device, please refer to the Integration Guide.")
            return
    
    # If injection succeeded and autostart option is specified, start the Server
    if result.Succeeded() and args.autostart == True:
        loader.startServer()


def HandleRevealStartCommand(loader, result, args):
    if loader.isRevealServerLoaded():
        loader.startServer()
    else:
        result.SetError("Reveal Server is not loaded. Use `reveal load` command first.")

def HandleRevealStopCommand(loader, result, args):
    if loader.isRevealServerLoaded():
        loader.stopServer()
    else:
        result.AppendWarning("Reveal Server is not loaded, there's nothing to stop.")
        
def HandleRevealStatusCommand(loader, result, args):
    if loader.isRevealServerLoaded():
        version = loader.getRevealServerProtocolVersion()
        if loader.isRevealServerRunning():
            result.AppendMessage("Reveal Server (protocol version {0}) is loaded and running.".format(version))
        else:
            result.AppendMessage("Reveal Server (protocol version {0}) is loaded, but not running.".format(version))
    else:
        result.AppendMessage("Reveal Server is not loaded.")


# Reveal Loader
class RevealLoader(object):
    def __init__(self, frame):
        self.frame = frame
        self.process = frame.thread.process

    def localRevealServerBinaryPath(self):
        if "apple-tvos" in self.process.target.triple:
            librariesDirectory = "tvOS-Libraries"
        else:
            # iOS or watchOS
            librariesDirectory = "iOS-Libraries"
        
        return os.path.join(revealLocalSharedSupportPath, librariesDirectory, "RevealServer.framework/RevealServer")
        
    def remoteRevealServerBinaryPath(self):
        expression = "(id)[[objc_getClass(\"NSBundle\") mainBundle] pathForResource:@\"RevealServer\" ofType:@\"framework\"]"
        revealServerFrameworkPath = self.frame.EvaluateExpression(expression, GetCommonExpressionOptions()).GetObjectDescription()
        if revealServerFrameworkPath is not None and revealServerFrameworkPath != "nil":
            return os.path.join(revealServerFrameworkPath, "RevealServer")
        else:
            return ""
        
    def remoteFileExists(self, remoteFilePath):
        expression = "(BOOL)[[objc_getClass(\"NSFileManager\") defaultManager] fileExistsAtPath:@\"{0}\"] != NO".format(remoteFilePath)
        return self.frame.EvaluateExpression(expression, GetCommonExpressionOptions()).value == "true"

    def isRevealServerLoaded(self):
        expression = "(void*)dlsym((void*)-2, \"OBJC_CLASS_$_IBARevealLoader\")"
        value = self.frame.EvaluateExpression(expression, GetCommonExpressionOptions()).value
        pointerValue = int(value, 16)
        return pointerValue != 0
    
    def getRevealServerProtocolVersion(self):
        expression = "(int)[objc_getClass(\"IBARevealProtocol\") protocolVersion]"
        return self.frame.EvaluateExpression(expression, GetCommonExpressionOptions()).signed

    def injectServer(self, path, result):
        # Check that Reveal Server is already loaded first
        if self.isRevealServerLoaded():
            result.AppendWarning("not loading Reveal Server, it's already loaded.")
            return
        
        # Load Reveal Server image from the specified path
        print("Loading Reveal Server from {0}...".format(path))
        error = lldb.SBError()
        self.process.LoadImage(lldb.SBFileSpec(path), error)
        
        if error.fail:
            result.SetError(error)
        else:
            result.AppendMessage("Reveal Server was loaded successfully.")

    def isRevealServerRunning(self):
        expression = "(BOOL)[[[objc_getClass(\"IBARevealServer\") sharedServer] httpServer] isRunning] != NO"
        return self.frame.EvaluateExpression(expression, GetCommonExpressionOptions()).value == "true"

    def startServer(self):
        self.frame.EvaluateExpression("(void)[objc_getClass(\"IBARevealLoader\") startServer]", GetCommonExpressionOptions())

    def stopServer(self):
        self.frame.EvaluateExpression("(void)[objc_getClass(\"IBARevealLoader\") stopServer]", GetCommonExpressionOptions())


# Target info utilities
def TargetIsCompatible(target):
    architecture = target.triple
    return "apple-ios" in architecture or "apple-tvos" in architecture or "apple-watchos" in architecture

def TargetIsLocal(target):
    platformName = target.platform.GetName()
    return platformName.endswith("simulator") or platformName.endswith("host")


# Process info utilities
def ProcessMainThreadContainsFrameWithName(process, frameName):
    mainThreadFrames = process.GetThreadAtIndex(0).frames
    for frame in mainThreadFrames:
        if frame.name == frameName:
            return True
    
    return False


# Debugger utilities
def GetCommonExpressionOptions():
    options = lldb.SBExpressionOptions()
    options.SetLanguage(lldb.eLanguageTypeObjC)
    options.SetSuppressPersistentResult(True)
    return options
