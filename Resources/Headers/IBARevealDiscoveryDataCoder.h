//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSString;

@interface IBARevealDiscoveryDataCoder : NSObject
{
    NSData *_encodedData;
    NSDictionary *_decodedDictionary;
}

@property(copy, nonatomic) NSDictionary *decodedDictionary; // @synthesize decodedDictionary=_decodedDictionary;
@property(copy, nonatomic) NSData *encodedData; // @synthesize encodedData=_encodedData;
- (void).cxx_destruct;
- (id)recordStringForKey:(id)arg1;
@property(readonly, nonatomic) long long protocolVersion;
@property(readonly, nonatomic, getter=isSimulator) BOOL simulator;
@property(readonly, nonatomic) NSString *applicationExtensionTypeIdentifier;
@property(readonly, nonatomic, getter=isApplicationExtension) BOOL applicationExtension;
@property(readonly, nonatomic) NSString *bundleIdentifier;
@property(readonly, nonatomic) NSString *applicationShortVersion;
@property(readonly, nonatomic) NSString *applicationVersion;
@property(readonly, nonatomic) NSString *applicationName;
@property(readonly, nonatomic) NSString *deviceLocalizedModel;
@property(readonly, nonatomic) NSString *deviceModel;
@property(readonly, nonatomic) NSString *deviceSystemVersion;
@property(readonly, nonatomic) NSString *deviceSystemName;
@property(readonly, nonatomic) NSString *deviceName;
@property(readonly, nonatomic) NSString *deviceIdentifier;
- (id)initWithDictionary:(id)arg1;
- (id)initWithData:(id)arg1;

@end

