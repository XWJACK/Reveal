//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IBAInspectorStackViewController, NSIndexPath, NSString;

@protocol IBAInspectorStackViewControllerDataSource <NSObject>
- (id)inspectorStackViewController:(IBAInspectorStackViewController *)arg1 objectValueForInspectorAtIndexPath:(NSIndexPath *)arg2;
- (NSString *)inspectorStackViewController:(IBAInspectorStackViewController *)arg1 titleOfSectionAtIndexPath:(NSIndexPath *)arg2;
- (unsigned long long)inspectorStackViewController:(IBAInspectorStackViewController *)arg1 numberOfItemsInSubSectionAtIndexPath:(NSIndexPath *)arg2;
- (unsigned long long)inspectorStackViewController:(IBAInspectorStackViewController *)arg1 numberOfSubSectionsInSection:(unsigned long long)arg2;
- (unsigned long long)numberOfSectionsInInspectorStackViewController:(IBAInspectorStackViewController *)arg1;
@end

