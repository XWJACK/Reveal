//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSEvent, NSSegmentedControl;

@protocol IBASegmentedControlHoverDelegate

@optional
- (void)hoverableSegmentedControl:(NSSegmentedControl *)arg1 mouseDidExitAtSegment:(long long)arg2 withEvent:(NSEvent *)arg3;
- (void)hoverableSegmentedControl:(NSSegmentedControl *)arg1 mouseDidMoveToSegment:(long long)arg2 withEvent:(NSEvent *)arg3;
- (void)hoverableSegmentedControl:(NSSegmentedControl *)arg1 mouseDidEnterAtSegment:(long long)arg2 withEvent:(NSEvent *)arg3;
@end

