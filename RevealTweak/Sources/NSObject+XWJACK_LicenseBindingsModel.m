//
//  NSObject+XWJACK_LicenseBindingsModel.m
//  RevealTweak
//
//  Created by Jack on 2018/12/6.
//  Copyright © 2018 XWJACK. All rights reserved.
//

#import "NSObject+XWJACK_LicenseBindingsModel.h"
#import "MethodHelper.h"
#import <objc/objc.h>

@implementation NSObject (XWJACK_LicenseBindingsModel)

- (BOOL)hook_isCommercialLicense {
    return YES;
}

- (BOOL)hook_licensePeriodExpired {
    return NO;
}

- (BOOL)hook_upgradeLicenseMenuItemVisible {
    return NO;
}

- (NSString *)hook_licenseEmail {
    return @"xwjack@xwjack.com";
}

- (NSString *)hook_licenseName {
    return @"xwjack";
}

+ (void)load {
    NSLog(@"XWJACK Begin hook LicenseBindingsModel");
    Class hookClass = objc_getClass("Reveal.LicenseBindingsModel");
    xwjack_hookMethod(hookClass, @selector(isCommercialLicense), self.class, @selector(hook_isCommercialLicense));
    xwjack_hookMethod(hookClass, @selector(licensePeriodExpired), self.class, @selector(hook_licensePeriodExpired));
    xwjack_hookMethod(hookClass, @selector(upgradeLicenseMenuItemVisible), self.class, @selector(hook_upgradeLicenseMenuItemVisible));
    xwjack_hookMethod(hookClass, @selector(licenseEmail), self.class, @selector(hook_licenseEmail));
    xwjack_hookMethod(hookClass, @selector(licenseName), self.class, @selector(hook_licenseName));
}

@end
