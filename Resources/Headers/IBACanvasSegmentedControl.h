//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSSegmentedControl.h>

@protocol IBASegmentedControlHoverDelegate;

@interface IBACanvasSegmentedControl : NSSegmentedControl
{
    // Error parsing type: , name: hoverAspect
    // Error parsing type: , name: hoverDelegate
}

+ (void)setCellClass:(Class)arg1;
+ (Class)cellClass;
- (CDUnknownBlockType).cxx_destruct;
@property(nonatomic) __weak id <IBASegmentedControlHoverDelegate> hoverDelegate; // @synthesize hoverDelegate;
@property(nonatomic, readonly) BOOL allowsVibrancy;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

