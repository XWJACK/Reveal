//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableRowView.h>

#import "IBAViewHierarchyOutlineExpandable-Protocol.h"
#import "IBAViewHierarchyOutlineHighlightable-Protocol.h"

@class IBAOutlineViewTreeItem;

@interface IBAViewHierarchyOutlineRowView : NSTableRowView <IBAViewHierarchyOutlineHighlightable, IBAViewHierarchyOutlineExpandable>
{
    // Error parsing type: , name: treeItem
    // Error parsing type: , name: matchesCurrentFilter
    // Error parsing type: , name: isHighlighted
    // Error parsing type: , name: isExpanded
    // Error parsing type: , name: filteredGradient
    // Error parsing type: , name: defaultGradient
    // Error parsing type: , name: issueButton
    // Error parsing type: , name: issueContainer
    // Error parsing type: , name: layoutIssueDisposables
    // Error parsing type: , name: filterMatchDisposables
    // Error parsing type: , name: notificationDisposables
}

- (CDUnknownBlockType).cxx_destruct;
- (void)drawSelectionInRect:(struct CGRect)arg1;
- (void)drawBackgroundInRect:(struct CGRect)arg1;
@property(nonatomic, readonly) long long interiorBackgroundStyle;
- (BOOL)isOpaque;
- (void)viewDidChangeEffectiveAppearance;
- (void)layout;
- (void)didAddSubview:(id)arg1;
- (void)viewDidMoveToSuperview;
- (void)viewWillMoveToSuperview:(id)arg1;
- (void)prepareForReuse;
@property(nonatomic) BOOL expanded; // @synthesize expanded=isExpanded;
@property(nonatomic) BOOL selected;
- (BOOL)isSelected;
@property(nonatomic) BOOL highlighted; // @synthesize highlighted=isHighlighted;
@property(nonatomic) BOOL matchesCurrentFilter; // @synthesize matchesCurrentFilter;
@property(nonatomic, retain) IBAOutlineViewTreeItem *treeItem; // @synthesize treeItem;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic, readonly) BOOL opaque;

@end

