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

static int (*ori_sub_1003a4c76)(void);
static int hook_sub_1003a4c76() {
    NSLog(@"XWJACK Hook sign check.");
    return 1;
}

//static int (*ori_sub_1001fe2a0)(int arg0);
//static int hook_sub_1001fe2a0(int arg0) {
//    return ori_sub_1001fe2a0(arg0);
//}

static void __attribute__((constructor)) initialize(void) {
    NSLog(@"XWJACK Begin hook c function");
    
    MSHookFunction((void*)(0x00000001003a4c76 + _dyld_get_image_vmaddr_slide(0)), (void *)&hook_sub_1003a4c76, (void *)&ori_sub_1003a4c76);
    
//    MSHookFunction((void*)(0x00000001001fe2a0 + _dyld_get_image_vmaddr_slide(0)), (void *)&hook_sub_1001fe2a0, (void *)&ori_sub_1001fe2a0);
}
