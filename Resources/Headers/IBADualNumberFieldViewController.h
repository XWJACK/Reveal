//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IBAInspectorViewController.h"

@class IBAInspectorTextField, NSStepper;

@interface IBADualNumberFieldViewController : IBAInspectorViewController
{
    IBAInspectorTextField *_firstTextField;
    IBAInspectorTextField *_secondTextField;
    NSStepper *_firstStepper;
    NSStepper *_secondStepper;
}

+ (id)viewController;
@property(nonatomic) __weak NSStepper *secondStepper; // @synthesize secondStepper=_secondStepper;
@property(nonatomic) __weak NSStepper *firstStepper; // @synthesize firstStepper=_firstStepper;
@property(nonatomic) __weak IBAInspectorTextField *secondTextField; // @synthesize secondTextField=_secondTextField;
@property(nonatomic) __weak IBAInspectorTextField *firstTextField; // @synthesize firstTextField=_firstTextField;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end

