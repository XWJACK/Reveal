//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IBARepresentedAttributeDelegate-Protocol.h"

@class IBARepresentedClass, IBARepresentedObjectIdentifier, IBARepresentedObjectModel, IBARepresentedView, NSDictionary, NSMutableDictionary, NSString;
@protocol IBARepresentedObjectDelegate;

@interface IBARepresentedObject : NSObject <IBARepresentedAttributeDelegate>
{
    NSMutableDictionary *_attributeMap;
    id <IBARepresentedObjectDelegate> _delegate;
    IBARepresentedObjectIdentifier *_identifier;
    IBARepresentedClass *_representedClass;
    NSString *_objectAddress;
    IBARepresentedObjectModel *_objectModel;
}

@property __weak IBARepresentedObjectModel *objectModel; // @synthesize objectModel=_objectModel;
@property(copy) NSString *objectAddress; // @synthesize objectAddress=_objectAddress;
@property(readonly) IBARepresentedClass *representedClass; // @synthesize representedClass=_representedClass;
@property(readonly) IBARepresentedObjectIdentifier *identifier; // @synthesize identifier=_identifier;
@property __weak id <IBARepresentedObjectDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)representedAttribute:(id)arg1 didChangeFromValue:(id)arg2 toValue:(id)arg3;
- (BOOL)representedClassIsSubclassOfClassNamed:(id)arg1;
- (id)valueForSyntheticAttributeWithKeyPath:(id)arg1;
- (void)addAttribute:(id)arg1;
- (id)attributesWithKeyPaths:(id)arg1;
- (BOOL)setAttributeValue:(id)arg1 forKeyPath:(id)arg2;
- (id)attributeForKeyPath:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *attributes;
- (id)attributeMap;
@property(readonly, copy) NSString *debugDescription;
- (id)initWithIdentifier:(id)arg1 representedClass:(id)arg2;
@property(nonatomic, readonly) IBARepresentedView *layoutGuideOwningView;
@property(nonatomic, readonly) BOOL layoutConstraintIsBroken;
@property(nonatomic, readonly) NSString *layoutConstraintIdentifier;
@property(nonatomic, readonly) IBARepresentedObjectIdentifier *layoutConstraintSecondItemIdentifier;
@property(nonatomic, readonly) IBARepresentedObjectIdentifier *layoutConstraintFirstItemIdentifier;
@property(nonatomic, readonly) IBARepresentedObject *layoutConstraintSecondItem;
@property(nonatomic, readonly) IBARepresentedObject *layoutConstraintFirstItem;
- (BOOL)isConstraintItemDescendentOfConstraintItem:(id)arg1;
@property(readonly, nonatomic) BOOL isGestureRecognizer;
@property(readonly, nonatomic) BOOL isLayoutGuide;
@property(readonly, nonatomic) BOOL isScreen;
@property(readonly, nonatomic) BOOL isWindow;
@property(readonly, nonatomic) BOOL isLayoutConstraint;
@property(readonly, nonatomic) BOOL isLayer;
@property(readonly, nonatomic) BOOL isView;
- (unsigned long long)countOfAttributes;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

