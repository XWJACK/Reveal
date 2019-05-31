//
//  NSObject+DocumentWindowController.m
//  RevealTweak
//
//  Created by Jack on 2019/5/18.
//  Copyright © 2019 XWJACK. All rights reserved.
//

#import "NSObject+DocumentWindowController.h"
#import "ReverseMethodHelper.h"
#import <JRSwizzle/JRSwizzle.h>
#import <AppKit/AppKit.h>

@implementation NSObject (DocumentWindowController)
- (BOOL)hook_validateMenuItem:(id)item {
    BOOL ori_result = [self hook_validateMenuItem:item];
    return ori_result;
}
+ (void)load {
    xwjack_hookMethod(objc_getClass("Reveal.DocumentWindowController"), @selector(validateMenuItem:), self.class, @selector(hook_validateMenuItem:));
}
@end
