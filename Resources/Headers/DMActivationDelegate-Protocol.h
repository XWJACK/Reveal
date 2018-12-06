//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DMActivationController, NSDictionary, NSWindow;

@protocol DMActivationDelegate <NSObject>

@optional
- (NSDictionary *)additionalStoreURLParameters:(DMActivationController *)arg1;
- (BOOL)activationController:(DMActivationController *)arg1 shouldTerminateAppWithReason:(unsigned long long)arg2;
- (BOOL)activationController:(DMActivationController *)arg1 shouldShowDialogForReason:(unsigned long long)arg2 withAdditionalInfo:(NSDictionary *)arg3 proposedActivationMode:(unsigned long long *)arg4 completionHandlerSetter:(void (^)(void (^)(unsigned long long)))arg5;
- (NSDictionary *)activationController:(DMActivationController *)arg1 activationInfoWithProposedInfo:(NSDictionary *)arg2;
- (void)activationControllerDidChangeActivationStep:(DMActivationController *)arg1;
- (void)activationControllerWillChangeActivationStep:(DMActivationController *)arg1;
- (long long)activationController:(DMActivationController *)arg1 activationStepForProposedStep:(long long)arg2;
- (NSWindow *)activationController:(DMActivationController *)arg1 parentWindowForActivationMode:(unsigned long long)arg2;
@end

