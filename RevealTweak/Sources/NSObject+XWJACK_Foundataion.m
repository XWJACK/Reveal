//
//  NSObject+XWJACK_Foundataion.m
//  RevealTweak
//
//  Created by Jack on 2018/12/6.
//  Copyright © 2018 XWJACK. All rights reserved.
//

#import "NSObject+XWJACK_Foundataion.h"
#import "MethodHelper.h"
#import <JRSwizzle/JRSwizzle.h>

@implementation NSObject (XWJACK_Foundataion)

+ (NSData *)hook_sendSynchronousRequest:(NSURLRequest *)request returningResponse:(NSURLResponse * _Nullable *)response error:(NSError * _Nullable *)error {
    
    NSLog(@"XWJACK Hook %@ %@", request.HTTPMethod, request.URL);
    NSLog(@"%@", request.allHTTPHeaderFields);
    NSLog(@"%@", [[NSString alloc] initWithData:request.HTTPBody encoding:NSUTF8StringEncoding]);
    
    NSURLResponse *hook_response;
    NSError *hook_error;
    NSData *hook_data = [self hook_sendSynchronousRequest:request returningResponse:&hook_response error:&hook_error];
    
    NSLog(@"XWJACK Receive response %@", hook_data);
    
    *error = hook_error;
    *response = hook_response;
    
    return hook_data;
}

//- (NSString *)hook_initWithBytesNoCopy:(void *)bytes length:(NSUInteger)len encoding:(NSStringEncoding)encoding freeWhenDone:(BOOL)freeBuffer {
//    NSString *hook_string = [self hook_initWithBytesNoCopy:bytes length:len encoding:encoding freeWhenDone:freeBuffer];
//    NSLog(@"%@", hook_string);
//    return hook_string;
//}
+ (void)load {
    NSLog(@"XWJACK Begin hook Foundation");
    
//    xwjack_hookMethod(objc_getClass("NSString"), @selector(initWithBytesNoCopy:length:encoding:freeWhenDone:), self.class, @selector(hook_initWithBytesNoCopy:length:encoding:freeWhenDone:));
    
//    [NSString jr_swizzleMethod:@selector(initWithBytesNoCopy:length:encoding:freeWhenDone:) withMethod:@selector(hook_initWithBytesNoCopy:length:encoding:freeWhenDone:) error:nil];
    
    
    [NSURLConnection jr_swizzleClassMethod:@selector(sendSynchronousRequest:returningResponse:error:) withClassMethod:@selector(hook_sendSynchronousRequest:returningResponse:error:) error:nil];
    
}
@end
