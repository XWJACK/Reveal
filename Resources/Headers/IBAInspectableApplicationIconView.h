//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  4 2018 10:55:41).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSImageView.h>

@class NSImage;

@interface IBAInspectableApplicationIconView : NSImageView
{
    // Error parsing type: , name: platformType
    // Error parsing type: , name: sourceImage
    // Error parsing type: , name: compositedImage
    // Error parsing type: , name: selectedImage
}

- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic, copy) id objectValue;
@property(nonatomic, retain) NSImage *image;
@property(nonatomic) BOOL highlighted;
- (BOOL)isHighlighted;

@end

