//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  4 2018 10:55:41).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSHttpIngestion.h"

@interface MSOneCollectorIngestion : MSHttpIngestion
{
}

- (id)obfuscateTickets:(id)arg1;
- (id)obfuscateTargetTokens:(id)arg1;
- (id)obfuscateHeaderValue:(id)arg1 forKey:(id)arg2;
- (id)createRequest:(id)arg1;
- (void)sendAsync:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithBaseUrl:(id)arg1;

@end

