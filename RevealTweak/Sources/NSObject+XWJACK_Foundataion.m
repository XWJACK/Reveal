//
//  NSObject+XWJACK_Foundataion.m
//  RevealTweak
//
//  Created by Jack on 2018/12/6.
//  Copyright © 2018 XWJACK. All rights reserved.
//

#import "NSObject+XWJACK_Foundataion.h"
#import "ReverseMethodHelper.h"
#import <JRSwizzle/JRSwizzle.h>

@implementation NSObject (XWJACK_Foundataion)

+ (NSData *)hook_sendSynchronousRequest:(NSURLRequest *)request returningResponse:(NSURLResponse * _Nullable *)response error:(NSError * _Nullable *)error {
    
    NSLog(@"🍇 XWJACK %s \n%@ %@", _cmd, request.HTTPMethod, request.URL);
    NSLog(@"%@", request.allHTTPHeaderFields);
    NSLog(@"%@", [[NSString alloc] initWithData:request.HTTPBody encoding:NSUTF8StringEncoding]);
    
    NSURLResponse *hook_response;
    NSError *hook_error;
    NSData *hook_data = [self hook_sendSynchronousRequest:request returningResponse:&hook_response error:&hook_error];
    
    NSLog(@"🍇 XWJACK Receive response \n%@", hook_data);
    
    *error = hook_error;
    *response = hook_response;
    
    return hook_data;
}

+ (NSData *)hook_dataWithJSONObject:(id)obj options:(NSJSONWritingOptions)opt error:(NSError * _Nullable *)error {
    NSMutableDictionary *d_obj = [(NSDictionary *)obj mutableCopy];
//    if (d_obj[@"action"]) {
//        d_obj[@"action"] = @(1);
//    }
    NSData *hook_data = [self hook_dataWithJSONObject:d_obj options:opt error:error];
    NSLog(@"🍇 XWJACK %s \n%@", _cmd, obj);
    return hook_data;
}

+ (void)load {
    
    [NSURLConnection jr_swizzleClassMethod:@selector(sendSynchronousRequest:returningResponse:error:) withClassMethod:@selector(hook_sendSynchronousRequest:returningResponse:error:) error:nil];
    
    [NSJSONSerialization jr_swizzleClassMethod:@selector(dataWithJSONObject:options:error:) withClassMethod:@selector(hook_dataWithJSONObject:options:error:) error:nil];
}
@end
