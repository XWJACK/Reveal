//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  4 2018 10:55:41).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC6Reveal23InspectorViewController.h"

@class NSMenuItem, NSPopUpButton, NSSegmentedControl, NSTextField, _TtC6Reveal18InspectorViewModel;

@interface _TtC6Reveal28ColorInspectorViewController : _TtC6Reveal23InspectorViewController
{
    // Error parsing type: , name: colorCodeTextField
    // Error parsing type: , name: colorCodeFormatPicker
    // Error parsing type: , name: colorsPopupButton
    // Error parsing type: , name: defaultColorMenuItem
    // Error parsing type: , name: currentColorMenuItem
    // Error parsing type: , name: chooseCustomColorMenuItem
    // Error parsing type: , name: isCustomColorVisible
    // Error parsing type: , name: previouslySelectedItem
    // Error parsing type: , name: viewModelDisposeBag
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)colorPanelDidChangeColor:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)sendColorCode:(id)arg1;
- (void)selectCustomColor:(id)arg1;
- (void)selectPredefinedColor:(id)arg1;
- (void)selectColorFormat:(id)arg1;
@property(nonatomic) BOOL isCustomColorVisible; // @synthesize isCustomColorVisible;
@property(nonatomic, retain) _TtC6Reveal18InspectorViewModel *viewModel;
@property(nonatomic, retain) NSMenuItem *chooseCustomColorMenuItem; // @synthesize chooseCustomColorMenuItem;
@property(nonatomic, retain) NSMenuItem *currentColorMenuItem; // @synthesize currentColorMenuItem;
@property(nonatomic, retain) NSMenuItem *defaultColorMenuItem; // @synthesize defaultColorMenuItem;
@property(nonatomic, retain) NSPopUpButton *colorsPopupButton; // @synthesize colorsPopupButton;
@property(nonatomic, retain) NSSegmentedControl *colorCodeFormatPicker; // @synthesize colorCodeFormatPicker;
@property(nonatomic, retain) NSTextField *colorCodeTextField; // @synthesize colorCodeTextField;

@end

