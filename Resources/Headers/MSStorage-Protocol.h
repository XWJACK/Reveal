//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  4 2018 10:55:41).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;
@protocol MSLog;

@protocol MSStorage <NSObject>
- (void)setMaxStorageSize:(long long)arg1 completionHandler:(void (^)(BOOL))arg2;
- (BOOL)loadLogsWithGroupId:(NSString *)arg1 limit:(unsigned long long)arg2 excludedTargetKeys:(NSArray *)arg3 completionHandler:(void (^)(NSArray *, NSString *))arg4;
- (void)deleteLogsWithBatchId:(NSString *)arg1 groupId:(NSString *)arg2;
- (NSArray *)deleteLogsWithGroupId:(NSString *)arg1;
- (unsigned long long)countLogs;
- (BOOL)saveLog:(id <MSLog>)arg1 withGroupId:(NSString *)arg2 flags:(unsigned long long)arg3;
@end

