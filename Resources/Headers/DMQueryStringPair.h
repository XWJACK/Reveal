//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  4 2018 10:55:41).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DMQueryStringPair : NSObject
{
    id _field;
    id _value;
}

+ (id)pairWithField:(id)arg1 value:(id)arg2;
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(retain, nonatomic) id field; // @synthesize field=_field;
- (void).cxx_destruct;
- (id)URLEncodedStringValue;
- (id)initWithField:(id)arg1 value:(id)arg2;

@end

