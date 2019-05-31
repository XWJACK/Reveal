//
//  RevealTweak.m
//  RevealTweak
//
//  Created by Jack on 2018/12/6.
//  Copyright © 2018 XWJACK. All rights reserved.
//
#import <Foundation/Foundation.h>
#import "substrate.h"
#import <mach-o/dyld.h>

static int (*ori_sub_1004b0a82)(void);
static int hook_sub_1004b0a82() {
    NSLog(@"🍇 XWJACK Hook sign check.");
    return 1;
}

static void* (*ori_sub_1003bc8d0)(void);
static void* hook_sub_1003bc8d0() {
//    return nil;
    return ori_sub_1003bc8d0();
//    return ori_result;
//    return @{
//             @"activation_date": @"2019-05-18 04:08:56 +0000",
//             @"activation_number": @"id895446752058odr",
//             @"activation_tag": @"personal, trial",
//             @"beta_only": @0,
//             @"email": @"spvcix18356@chacuo.net",
//             @"expiration_date": @"2019-06-01 04:08:56 +0000",
//             @"hash": @"0923f652faa382a4931e8b1df12f40ce8e20d66f",
//             @"hash2": @"67972e5a2fbd869b5993a9cd0a9fbf35998776ef2e4fa62625d55635e52f9888",
//             @"last_connection_date": @"2019-05-18 04:09:10 +0000",
//             @"license_id": @"190518039912",
//             @"name": @"spvcix18356 spvcix18356",
//             @"order_date": @"2019-05-17 07:32:23 +0000",
//             @"subscription": @0,
//             };
}


//static int (*ori_sub_100275620)(int arg0);
//static int hook_sub_100275620(int arg0) {
//    int ori_result = ori_sub_100275620(arg0);
//    return ori_result;
//}

static void __attribute__((constructor)) initialize(void) {
    intptr_t offset = _dyld_get_image_vmaddr_slide(0);
    MSHookFunction((void*)(0x00000001004b0a82 +offset), (void *)&hook_sub_1004b0a82, (void *)&ori_sub_1004b0a82);
    
    MSHookFunction((void *)0x00000001003bc8d0 + offset, (void *)&hook_sub_1003bc8d0, (void *)&ori_sub_1003bc8d0);
    
    
//    MSHookFunction((void *)0x0000000100275620 + offset, (void *)&hook_sub_100275620, (void *)&ori_sub_100275620);

    /// To make frida-trace enabled.
//    sleep(10);
}
