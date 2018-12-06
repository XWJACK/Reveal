//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IBAGCDAsyncSocketDelegate-Protocol.h"

@class IBAGCDAsyncSocket;
@protocol IBAUSBServiceTunnelDelegate;

@interface IBAUSBServiceTunnel : NSObject <IBAGCDAsyncSocketDelegate>
{
    BOOL _isValid;
    IBAGCDAsyncSocket *_incomingSocket;
    IBAGCDAsyncSocket *_outgoingSocket;
    id <IBAUSBServiceTunnelDelegate> _delegate;
}

@property BOOL isValid; // @synthesize isValid=_isValid;
@property __weak id <IBAUSBServiceTunnelDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) IBAGCDAsyncSocket *outgoingSocket; // @synthesize outgoingSocket=_outgoingSocket;
@property(readonly, nonatomic) IBAGCDAsyncSocket *incomingSocket; // @synthesize incomingSocket=_incomingSocket;
- (void).cxx_destruct;
- (void)socketDidDisconnect:(id)arg1 withError:(id)arg2;
- (void)socket:(id)arg1 didReadData:(id)arg2 withTag:(long long)arg3;
- (id)initWithIncomingSocket:(id)arg1 outgoingSocket:(id)arg2 delegate:(id)arg3;

@end

