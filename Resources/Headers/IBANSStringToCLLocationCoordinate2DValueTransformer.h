//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IBAValueTransformer.h"

#import "IBASerializerValueTransforming-Protocol.h"

@class NSString;

@interface IBANSStringToCLLocationCoordinate2DValueTransformer : IBAValueTransformer <IBASerializerValueTransforming>
{
}

+ (Class)reverseTransformedValueClass;
+ (Class)transformedValueClass;
+ (id)reverseTransformableValueTypes;
+ (id)transformableValueTypes;
+ (BOOL)allowsReverseTransformation;
- (id)reverseTransformedValue:(id)arg1 error:(id *)arg2;
- (id)transformedValue:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

