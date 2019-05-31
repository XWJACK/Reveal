//
//  NSObject+XWJACK_NSApplication.m
//  RevealTweak
//
//  Created by Jack on 2018/12/11.
//  Copyright © 2018 XWJACK. All rights reserved.
//

#import "NSObject+XWJACK_NSApplication.h"
#import "ReverseMethodHelper.h"
#import <JRSwizzle/JRSwizzle.h>

@implementation NSObject (XWJACK_NSApplication)

+ (void)hook_setPublicKeyWithString:(id)arg1 {
    NSLog(@"🍇 XWJACK %s \n%@", _cmd, arg1);
    [self hook_setPublicKeyWithString:arg1];
}

- (NSDictionary *)hook_MYJh8blWOIN1X2 {
    NSDictionary *hook_result = [self hook_MYJh8blWOIN1X2];
    NSLog(@"🍇 XWJACK %s %@", _cmd, hook_result);
    return hook_result;
}

- (BOOL)hook_IcSU9NLYZQKD4gE {
    BOOL hook_result = [self hook_IcSU9NLYZQKD4gE];
    NSLog(@"🍇 XWJACK %s %@", _cmd, hook_result);
    return hook_result;
}
+ (void)load {
//    Class H_NSApplication = objc_getClass("NSApplication");
//    xwjack_hookClassMethod(H_NSApplication, @selector(setPublicKeyWithString:), self.class, @selector(hook_setPublicKeyWithString:));
//    xwjack_hookMethod(H_NSApplication, @selector(MYJh8blWOIN1X2), self.class, @selector(hook_MYJh8blWOIN1X2));
//    xwjack_hookMethod(H_NSApplication, @selector(IcSU9NLYZQKD4gE), self.class, @selector(hook_IcSU9NLYZQKD4gE));
}
@end
