//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  4 2018 10:55:41).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MSPLCrashSignalHandler : NSObject
{
    struct __darwin_sigaltstack {
        void *ss_sp;
        unsigned long long ss_size;
        int ss_flags;
    } _sigstk;
}

+ (void)resetHandlers;
+ (id)sharedHandler;
+ (void)initialize;
- (BOOL)registerHandlerForSignal:(int)arg1 callback:(CDUnknownFunctionPointerType)arg2 context:(void *)arg3 error:(id *)arg4;
- (BOOL)registerHandlerWithSignal:(int)arg1 error:(id *)arg2;
- (id)init;

@end

