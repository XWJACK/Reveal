//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IBACrashReportService.h"

#import "DMIssuesControllerDelegate-Protocol.h"

@interface IBACrashReportService (Reveal) <DMIssuesControllerDelegate>
- (BOOL)controller:(id)arg1 shouldAddIssueToReport:(id)arg2;
- (BOOL)controller:(id)arg1 shouldReportIssue:(id)arg2;
- (void)reporterWillRestartApplication:(id)arg1;
@end

