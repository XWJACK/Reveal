//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IBAInspectorViewModel.h"

@class IBARepresentedObjectModel, NSNumber;

@interface IBATransformationMatrixInspectorViewModel : IBAInspectorViewModel
{
    NSNumber *_a;
    NSNumber *_b;
    NSNumber *_c;
    NSNumber *_d;
    NSNumber *_tx;
    NSNumber *_ty;
    id _attributeObserver;
    IBARepresentedObjectModel *_representedObjectModel;
}

+ (BOOL)canModelRepresentedType:(id)arg1;
+ (void)load;
@property(readonly, nonatomic) IBARepresentedObjectModel *representedObjectModel; // @synthesize representedObjectModel=_representedObjectModel;
@property(readonly, nonatomic) id attributeObserver; // @synthesize attributeObserver=_attributeObserver;
@property(retain, nonatomic) NSNumber *ty; // @synthesize ty=_ty;
@property(retain, nonatomic) NSNumber *tx; // @synthesize tx=_tx;
@property(retain, nonatomic) NSNumber *d; // @synthesize d=_d;
@property(retain, nonatomic) NSNumber *c; // @synthesize c=_c;
@property(retain, nonatomic) NSNumber *b; // @synthesize b=_b;
@property(retain, nonatomic) NSNumber *a; // @synthesize a=_a;
- (void).cxx_destruct;
@property(nonatomic) struct CGAffineTransform transformValue;
- (id)description;
- (id)tyMax;
- (id)tyMin;
- (id)txMax;
- (id)txMin;
- (id)dMax;
- (id)dMin;
- (id)cMax;
- (id)cMin;
- (id)bMax;
- (id)bMin;
- (id)aMax;
- (id)aMin;
- (BOOL)isEditable;
- (void)dealloc;
- (id)initWithRepresentedAttribute:(id)arg1;
- (Class)representingInspectorViewControllerClass;

@end

