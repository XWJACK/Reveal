//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  4 2018 10:55:41).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSChannelProtocol-Protocol.h"

@class MSChannelUnitConfiguration, NSString;
@protocol MSChannelUnitProtocol, MSIngestionProtocol;

@protocol MSChannelGroupProtocol <MSChannelProtocol>
- (id <MSChannelUnitProtocol>)channelUnitForGroupId:(NSString *)arg1;
- (void)setMaxStorageSize:(long long)arg1 completionHandler:(void (^)(BOOL))arg2;
- (void)setAppSecret:(NSString *)arg1;
- (void)setLogUrl:(NSString *)arg1;
- (id <MSChannelUnitProtocol>)addChannelUnitWithConfiguration:(MSChannelUnitConfiguration *)arg1 withIngestion:(id <MSIngestionProtocol>)arg2;
- (id <MSChannelUnitProtocol>)addChannelUnitWithConfiguration:(MSChannelUnitConfiguration *)arg1;
@end

