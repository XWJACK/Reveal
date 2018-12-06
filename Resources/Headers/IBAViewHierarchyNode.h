//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IBARepresentedObject, IBARepresentedObjectIdentifier, NSArray, NSMutableArray;

@interface IBAViewHierarchyNode : NSObject
{
    NSMutableArray *_childNodes;
    IBAViewHierarchyNode *_parentNode;
    IBARepresentedObject *_representedObject;
}

+ (id)nodeGroupKinds;
@property(readonly, nonatomic) __weak IBAViewHierarchyNode *parentNode; // @synthesize parentNode=_parentNode;
@property(readonly) IBARepresentedObject *representedObject; // @synthesize representedObject=_representedObject;
- (void).cxx_destruct;
- (id)objectInChildNodesAtIndex:(unsigned long long)arg1;
- (id)nodesPassingTest:(CDUnknownBlockType)arg1;
- (void)enumerateNodesDepthFirstInPreOrderSkippingDescendantsWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateNodesDepthFirstInPreOrderWithBlock:(CDUnknownBlockType)arg1;
- (void)recursivelyEnumerateParentNodesWithBlock:(CDUnknownBlockType)arg1;
- (void)_removeFromParentNode;
- (void)_removeAllChildNodes;
- (void)_removeChildNode:(id)arg1;
- (void)_removeChildNodesAtIndexes:(id)arg1;
- (void)_removeChildNodeAtIndex:(unsigned long long)arg1;
- (void)_insertChildNodes:(id)arg1 atIndexes:(id)arg2;
- (void)_insertChildNode:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_replaceChildNodeAtIndex:(unsigned long long)arg1 withNode:(id)arg2;
- (void)_addChildNodesFromArray:(id)arg1;
- (void)_addChildNode:(id)arg1;
- (BOOL)isSubclassOrDescendentOfRepresentedClassNamed:(id)arg1;
- (BOOL)hasAncestorNodeWithRepresentedClassNamed:(id)arg1;
- (id)parentNodes;
- (id)childNodesOfKinds:(id)arg1;
- (id)childNodesOfKind:(id)arg1;
- (id)childNodeAtIndex:(unsigned long long)arg1;
- (unsigned long long)countOfChildNodes;
- (unsigned long long)indexOfChildNode:(id)arg1;
@property(readonly, copy) NSArray *childNodes;
- (void)nodeDidMoveToParentNode;
- (void)nodeWillMoveToParentNode:(id)arg1;
- (id)debugDescription;
@property(readonly, nonatomic) IBARepresentedObjectIdentifier *identifier;
- (void)dealloc;
- (id)initWithRepresentedObject:(id)arg1 childNodes:(id)arg2;
- (id)initWithRepresentedObject:(id)arg1;
- (id)subtreeNodes;
@property(readonly, copy, nonatomic) NSArray *childNodesReorderingConstraintsLast;
@property(copy, nonatomic) NSArray *canvasTreeItems;
- (id)nodeGroupOfKind:(id)arg1;
- (id)identifiersForParentNodeGroups;
- (id)nodeGroupIdentifiers;

@end

