//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  4 2018 10:55:41).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSException.h>

@interface MSCrashesCXXExceptionWrapperException : NSException
{
    const CDStruct_3098c0ae *_info;
}

@property(readonly, nonatomic) const CDStruct_3098c0ae *info; // @synthesize info=_info;
- (id)callStackReturnAddresses;
- (id)initWithCXXExceptionInfo:(const CDStruct_3098c0ae *)arg1;

@end

