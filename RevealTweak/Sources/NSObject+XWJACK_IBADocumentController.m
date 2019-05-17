//
//  NSObject+XWJACK_IBADocumentController.m
//  RevealTweak
//
//  Created by Jack on 2019/4/17.
//  Copyright © 2019 XWJACK. All rights reserved.
//

#import "NSObject+XWJACK_IBADocumentController.h"
#import "ReverseMethodHelper.h"
#import <JRSwizzle/JRSwizzle.h>
#import <AppKit/AppKit.h>

@implementation NSObject (XWJACK_IBADocumentController)
- (BOOL)hook_validateMenuItem:(NSMenuItem *)item {

    return [self hook_validateMenuItem:item];
}

+ (void)load {
    Class hook_class = objc_getClass("IBADocumentController");
    xwjack_hookMethod(hook_class, @selector(validateMenuItem:), self.class, @selector(hook_validateMenuItem:));
}
@end
