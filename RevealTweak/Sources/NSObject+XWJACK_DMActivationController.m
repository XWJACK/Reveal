//
//  NSObject+XWJACK_DMActivationController.m
//  RevealTweak
//
//  Created by Jack on 2018/12/11.
//  Copyright © 2018 XWJACK. All rights reserved.
//

#import "NSObject+XWJACK_DMActivationController.h"
#import "ReverseMethodHelper.h"
#import <JRSwizzle/JRSwizzle.h>
#import <AppKit/AppKit.h>

@implementation NSObject (XWJACK_DMActivationController)
- (void)hook_showActivationWindowIfNeeds {
    NSLog(@"🍇 XWJACK Prevent %s", _cmd);
//    [self hook_showActivationWindowIfNeeds];
    
}

- (long long)hook_currentStep {
    long long hook_currentStep = [self hook_currentStep];
    return hook_currentStep;
//    [self setCurrentStep:-1];
}

+ (void)load {
    Class H_DMActivationController = objc_getClass("DMActivationController");
    xwjack_hookMethod(H_DMActivationController, @selector(showActivationWindowIfNeeds), self.class, @selector(hook_showActivationWindowIfNeeds));
    xwjack_hookMethod(H_DMActivationController, @selector(currentStep), self.class, @selector(hook_currentStep));
}
@end
