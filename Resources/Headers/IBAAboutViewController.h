//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class IBAHyperlinkButton, NSButton;

@interface IBAAboutViewController : NSViewController
{
    // Error parsing type: , name: acknowledgementsButton
    // Error parsing type: , name: versionButton
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)companyLogoClicked:(id)arg1;
- (void)acknowledgementsClicked:(id)arg1;
- (void)versionClicked:(id)arg1;
- (void)viewDidLoad;
@property(nonatomic, retain) NSButton *versionButton; // @synthesize versionButton;
@property(nonatomic, retain) IBAHyperlinkButton *acknowledgementsButton; // @synthesize acknowledgementsButton;

@end

