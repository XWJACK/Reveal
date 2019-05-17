//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  4 2018 10:55:41).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MSSerializableObject-Protocol.h"

@class NSArray, NSString;

@interface MSException : NSObject <MSSerializableObject>
{
    NSString *_type;
    NSString *_message;
    NSString *_stackTrace;
    NSArray *_frames;
    NSArray *_innerExceptions;
    NSString *_wrapperSdkName;
}

@property(copy, nonatomic) NSString *wrapperSdkName; // @synthesize wrapperSdkName=_wrapperSdkName;
@property(retain, nonatomic) NSArray *innerExceptions; // @synthesize innerExceptions=_innerExceptions;
@property(retain, nonatomic) NSArray *frames; // @synthesize frames=_frames;
@property(copy, nonatomic) NSString *stackTrace; // @synthesize stackTrace=_stackTrace;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isValid;
- (id)serializeToDictionary;

@end

