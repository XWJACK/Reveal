//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  4 2018 10:55:41).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@interface IBARepresentedObjectIdentifier : NSObject <NSCoding>
{
    long long _value;
}

@property(readonly, nonatomic) long long value; // @synthesize value=_value;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqualToIdentifier:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugDescription;
- (id)description;
- (id)stringValue;
- (id)initWithNumber:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)initWithValue:(long long)arg1;

@end

