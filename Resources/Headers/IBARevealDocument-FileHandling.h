//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IBARevealDocument.h"

@interface IBARevealDocument (FileHandling)
+ (BOOL)preservesVersions;
+ (BOOL)autosavesInPlace;
+ (BOOL)autosavesDrafts;
+ (void)load;
- (BOOL)readFromFileWrapper:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (id)fileWrapperOfType:(id)arg1 error:(id *)arg2;
- (BOOL)canAsynchronouslyWriteToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3;
- (void)canCloseDocumentWithDelegate:(id)arg1 shouldCloseSelector:(SEL)arg2 contextInfo:(void *)arg3;
@end

