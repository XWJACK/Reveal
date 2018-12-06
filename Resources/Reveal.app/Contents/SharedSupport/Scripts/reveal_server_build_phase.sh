#!/bin/bash

if [ "${CONFIGURATION}" != "Debug" ]; then
    echo "Reveal Server not loaded: Current build configuration is not 'Debug'."
    exit 0
fi

if [ "${PLATFORM_NAME}" == "appletvos" ]; then
    REVEAL_LIB_DIR="tvOS-Libraries"
else
    REVEAL_LIB_DIR="iOS-Libraries"
fi

REVEAL_SCRIPTS_DIR="${0%/*}"
REVEAL_SERVER_FILENAME="RevealServer.framework"
REVEAL_SERVER_PATH="${REVEAL_SCRIPTS_DIR}/../${REVEAL_LIB_DIR}/${REVEAL_SERVER_FILENAME}"

if [ -e "${REVEAL_SERVER_PATH}" ]; then
    cp -Rf "$REVEAL_SERVER_PATH" "${CODESIGNING_FOLDER_PATH}/"
    if [ -n "${EXPANDED_CODE_SIGN_IDENTITY}" ]; then
      codesign -fs "${EXPANDED_CODE_SIGN_IDENTITY}" "${CODESIGNING_FOLDER_PATH}/${REVEAL_SERVER_FILENAME}"
    fi
    echo "${REVEAL_SERVER_FILENAME} is included in this build, and has been copied to $CODESIGNING_FOLDER_PATH"

    LLDB_INIT_FILE=~/.lldbinit
    LLDB_INIT_MAGIC_STRING="### Reveal LLDB commands support"

    if [ ! -e "${LLDB_INIT_FILE}" ] || ! grep -q "${LLDB_INIT_MAGIC_STRING}" "${LLDB_INIT_FILE}"; then
        echo "Note: it looks like Reveal Server debugger commands are not installed. Please refer to 'Loading the Reveal Server via an Xcode Breakpoint' section of the Integration Guide for information about loading Reveal Server included in this build."
    fi
else
  echo "Reveal Server not loaded: RevealServer.framework could not be found."
fi
