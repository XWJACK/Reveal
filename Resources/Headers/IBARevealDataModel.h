//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IBARepresentedObjectImageStore, IBARepresentedObjectModel, IBARevealDataModelRepresentedRoots, IBARevealDataModelStaticData, IBASyntheticAttributesModel, IBAViewHierarchy, NSDictionary;
@protocol IBARevealDataModelDelegate;

@interface IBARevealDataModel : NSObject
{
    // Error parsing type: , name: delegate
    // Error parsing type: , name: objectModel
    // Error parsing type: , name: syntheticAttributesModel
    // Error parsing type: , name: imageStore
    // Error parsing type: , name: viewHierarchy
    // Error parsing type: , name: representedRoots
    // Error parsing type: , name: staticData
    // Error parsing type: , name: dictionaryRepresentation
    // Error parsing type: , name: viewHierarchyNodeUpdater
    // Error parsing type: , name: objectModelChangeObserver
    // Error parsing type: , name: syntheticAttributesObservationProxy
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (BOOL)updateWithDeserializer:(id)arg1 error:(id *)arg2;
- (id)initWithObjectModel:(id)arg1 imageStore:(id)arg2 viewHierarchy:(id)arg3 representedRoots:(id)arg4 staticData:(id)arg5 dictionaryRepresentation:(id)arg6;
@property(nonatomic, copy) NSDictionary *dictionaryRepresentation; // @synthesize dictionaryRepresentation;
@property(nonatomic, readonly) IBARevealDataModelStaticData *staticData; // @synthesize staticData;
@property(nonatomic, readonly) IBARevealDataModelRepresentedRoots *representedRoots; // @synthesize representedRoots;
@property(nonatomic, readonly) IBAViewHierarchy *viewHierarchy; // @synthesize viewHierarchy;
@property(nonatomic, readonly) IBARepresentedObjectImageStore *imageStore; // @synthesize imageStore;
@property(nonatomic, readonly) IBASyntheticAttributesModel *syntheticAttributesModel; // @synthesize syntheticAttributesModel;
@property(nonatomic, readonly) IBARepresentedObjectModel *objectModel; // @synthesize objectModel;
@property(nonatomic) __weak id <IBARevealDataModelDelegate> delegate; // @synthesize delegate;

@end

