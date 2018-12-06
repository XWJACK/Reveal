//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DMIssuesController;
@protocol DMIssue;

@protocol DMIssuesControllerDelegate <NSObject>

@optional
- (BOOL)shouldReportCrashProblem:(DMIssuesController *)arg1;
- (BOOL)shouldReportExceptionProblem:(DMIssuesController *)arg1;
- (BOOL)controller:(DMIssuesController *)arg1 shouldAddIssueToReport:(id <DMIssue>)arg2;
- (BOOL)controller:(DMIssuesController *)arg1 shouldReportIssue:(id <DMIssue>)arg2;
- (void)reporterWillRestartApplication:(DMIssuesController *)arg1;
@end

