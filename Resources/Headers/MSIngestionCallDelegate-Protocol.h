//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  4 2018 10:55:41).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MSIngestionCall;

@protocol MSIngestionCallDelegate <NSObject>
- (void)call:(MSIngestionCall *)arg1 completedWithResult:(long long)arg2;
- (void)sendCallAsync:(MSIngestionCall *)arg1;
@end

