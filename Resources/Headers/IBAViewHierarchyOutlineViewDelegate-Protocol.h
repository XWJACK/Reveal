//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IBAViewHierarchyOutlineView;

@protocol IBAViewHierarchyOutlineViewDelegate <NSObject>

@optional
- (void)outlineViewDidEndExpansionUpdates:(IBAViewHierarchyOutlineView *)arg1;
- (void)outlineViewWillBeginExpansionUpdates:(IBAViewHierarchyOutlineView *)arg1;
- (void)outlineViewDidReloadData:(IBAViewHierarchyOutlineView *)arg1;
- (void)outlineViewWillReloadData:(IBAViewHierarchyOutlineView *)arg1;
- (void)outlineView:(IBAViewHierarchyOutlineView *)arg1 didHighlightRow:(long long)arg2;
- (BOOL)outlineView:(IBAViewHierarchyOutlineView *)arg1 shouldHighlightRow:(long long)arg2;
@end

