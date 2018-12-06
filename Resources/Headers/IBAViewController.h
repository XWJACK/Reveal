//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSDocument, NSMutableArray, NSWindowController;

@interface IBAViewController : NSViewController
{
    NSMutableArray *_containerConstraints;
}

+ (id)keyPathsForValuesAffectingDocument;
+ (id)viewController;
- (void).cxx_destruct;
- (void)updateConstraintsWithContainer:(id)arg1 view:(id)arg2;
- (void)iba_transitionToInitialViewController:(id)arg1 withContainerView:(id)arg2;
- (void)iba_transitionToInitialViewController:(id)arg1;
- (void)iba_transitionFromViewController:(id)arg1 toViewController:(id)arg2 options:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) __weak NSDocument *document;
@property(readonly, nonatomic) NSWindowController *windowController;

@end

