//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IBACanvasTreeAdapter, IBARepresentedObjectIdentifier, NSImage;

@protocol IBACanvasTreeAdapterDataSource <NSObject>
- (unsigned long long)canvasTreeAdapter:(IBACanvasTreeAdapter *)arg1 bitmapStateForImage:(NSImage *)arg2;
- (NSImage *)canvasTreeAdapter:(IBACanvasTreeAdapter *)arg1 imageWithoutSubviewsForIdentifier:(IBARepresentedObjectIdentifier *)arg2 error:(id *)arg3;
- (NSImage *)canvasTreeAdapter:(IBACanvasTreeAdapter *)arg1 imageForIdentifier:(IBARepresentedObjectIdentifier *)arg2 error:(id *)arg3;
@end

