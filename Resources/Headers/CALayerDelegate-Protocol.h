//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  4 2018 10:55:41).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CALayer, NSString;
@protocol CAAction;

@protocol CALayerDelegate <NSObject>

@optional
- (id <CAAction>)actionForLayer:(CALayer *)arg1 forKey:(NSString *)arg2;
- (void)layoutSublayersOfLayer:(CALayer *)arg1;
- (void)layerWillDraw:(CALayer *)arg1;
- (void)drawLayer:(CALayer *)arg1 inContext:(struct CGContext *)arg2;
- (void)displayLayer:(CALayer *)arg1;
@end

