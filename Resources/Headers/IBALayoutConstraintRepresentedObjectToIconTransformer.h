//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSValueTransformer.h>

@class IBARepresentedSystemConstraintClassifier, NSDictionary;

@interface IBALayoutConstraintRepresentedObjectToIconTransformer : NSValueTransformer
{
    NSDictionary *_constraintMapping;
    IBARepresentedSystemConstraintClassifier *_systemConstraintClassifier;
}

+ (long long)basicLayoutAttributeFromLayoutAttributeValue:(long long)arg1;
+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;
@property(readonly, nonatomic) IBARepresentedSystemConstraintClassifier *systemConstraintClassifier; // @synthesize systemConstraintClassifier=_systemConstraintClassifier;
@property(readonly, copy, nonatomic) NSDictionary *constraintMapping; // @synthesize constraintMapping=_constraintMapping;
- (void).cxx_destruct;
- (id)iconKeyForConstraintWithFirstAttribute:(id)arg1 secondAttribute:(id)arg2 parentChildRelationship:(BOOL)arg3;
- (id)iconNameForConstraintRepresentedObject:(id)arg1;
- (id)iconImageForConstraintRepresentedObject:(id)arg1;
- (id)transformedValue:(id)arg1;
- (id)init;

@end

