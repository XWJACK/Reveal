//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IBAInspectorViewModel.h"

@class IBARepresentedObjectModel, NSNumber;

@interface IBAOffsetInspectorViewModel : IBAInspectorViewModel
{
    NSNumber *_horizontal;
    NSNumber *_vertical;
    id _attributeObserver;
    IBARepresentedObjectModel *_representedObjectModel;
}

+ (BOOL)canModelRepresentedType:(id)arg1;
+ (void)load;
@property(readonly, nonatomic) IBARepresentedObjectModel *representedObjectModel; // @synthesize representedObjectModel=_representedObjectModel;
@property(readonly, nonatomic) id attributeObserver; // @synthesize attributeObserver=_attributeObserver;
@property(retain, nonatomic) NSNumber *vertical; // @synthesize vertical=_vertical;
@property(retain, nonatomic) NSNumber *horizontal; // @synthesize horizontal=_horizontal;
- (void).cxx_destruct;
@property(nonatomic) struct _IBAOffset offsetValue;
@property(readonly, nonatomic) NSNumber *verticalMax;
@property(readonly, nonatomic) NSNumber *verticalMin;
@property(readonly, nonatomic) NSNumber *horizontalMax;
@property(readonly, nonatomic) NSNumber *horizontalMin;
- (id)description;
- (void)dealloc;
- (id)initWithRepresentedAttribute:(id)arg1;
- (Class)representingInspectorViewControllerClass;

@end

