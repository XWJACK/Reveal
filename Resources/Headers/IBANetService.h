//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  4 2018 10:55:41).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString, NSTimer;
@protocol IBANetServiceDelegate;

@interface IBANetService : NSObject
{
    struct _DNSServiceRef_t *_dnsServiceRef;
    unsigned short _port;
    unsigned int _interfaceIndex;
    NSString *_domain;
    NSString *_type;
    NSString *_name;
    NSString *_hostName;
    NSData *_TXTRecordData;
    id <IBANetServiceDelegate> _delegate;
    NSTimer *_resolveTimeoutTimer;
}

+ (id)dataFromTXTRecordDictionary:(id)arg1;
@property(retain, nonatomic) NSTimer *resolveTimeoutTimer; // @synthesize resolveTimeoutTimer=_resolveTimeoutTimer;
@property(nonatomic) __weak id <IBANetServiceDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSData *TXTRecordData; // @synthesize TXTRecordData=_TXTRecordData;
@property(nonatomic) unsigned int interfaceIndex; // @synthesize interfaceIndex=_interfaceIndex;
@property(nonatomic) unsigned short port; // @synthesize port=_port;
@property(copy, nonatomic) NSString *hostName; // @synthesize hostName=_hostName;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (void).cxx_destruct;
- (void)resolveTimeoutTimerFired:(id)arg1;
- (id)failureReasonForErrorType:(int)arg1;
- (void)didStop;
- (void)didNotResolve:(int)arg1;
- (void)netServiceDidResolve;
- (void)willResolve;
- (void)didNotPublish:(int)arg1;
- (void)netServiceDidPublish;
- (void)willPublish;
- (void)stop;
- (void)resolveWithTimeout:(double)arg1;
- (void)publish;
- (void)dealloc;
- (id)initWithDomain:(id)arg1 type:(id)arg2 name:(id)arg3 hostName:(id)arg4 port:(unsigned short)arg5 interface:(unsigned int)arg6;

@end

