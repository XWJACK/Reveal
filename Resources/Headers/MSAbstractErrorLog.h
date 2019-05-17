//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  4 2018 10:55:41).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSLogWithProperties.h"

@class NSDate, NSNumber, NSString;

@interface MSAbstractErrorLog : MSLogWithProperties
{
    BOOL _fatal;
    NSString *_id;
    NSNumber *_processId;
    NSString *_processName;
    NSNumber *_parentProcessId;
    NSString *_parentProcessName;
    NSNumber *_errorThreadId;
    NSString *_errorThreadName;
    NSDate *_appLaunchTimestamp;
    NSString *_architecture;
}

@property(copy, nonatomic) NSString *architecture; // @synthesize architecture=_architecture;
@property(retain, nonatomic) NSDate *appLaunchTimestamp; // @synthesize appLaunchTimestamp=_appLaunchTimestamp;
@property(nonatomic) BOOL fatal; // @synthesize fatal=_fatal;
@property(copy, nonatomic) NSString *errorThreadName; // @synthesize errorThreadName=_errorThreadName;
@property(retain, nonatomic) NSNumber *errorThreadId; // @synthesize errorThreadId=_errorThreadId;
@property(copy, nonatomic) NSString *parentProcessName; // @synthesize parentProcessName=_parentProcessName;
@property(retain, nonatomic) NSNumber *parentProcessId; // @synthesize parentProcessId=_parentProcessId;
@property(copy, nonatomic) NSString *processName; // @synthesize processName=_processName;
@property(retain, nonatomic) NSNumber *processId; // @synthesize processId=_processId;
@property(copy, nonatomic) NSString *errorId; // @synthesize errorId=_id;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isValid;
- (id)serializeToDictionary;

@end

