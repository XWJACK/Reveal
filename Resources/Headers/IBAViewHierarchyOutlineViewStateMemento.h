//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IBARepresentedObjectIdentifier;

@interface IBAViewHierarchyOutlineViewStateMemento : NSObject
{
    // Error parsing type: , name: absoluteScrollOffset
    // Error parsing type: , name: focusedIdentifierForAbsoluteScrollOffset
    // Error parsing type: , name: _selectionRelativeScrollOffset
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (id)copyWithZone:(void *)arg1;
- (id)initWithAbsoluteScrollOffset:(struct CGPoint)arg1 definedForFocusedIdentifier:(id)arg2;
- (id)initWithAbsoluteScrollOffset:(struct CGPoint)arg1 definedForFocusedIdentifier:(id)arg2 selectionRelativeScrollOffset:(struct CGPoint)arg3;
@property(nonatomic, readonly) BOOL selectionRelativeScrollOffsetValid;
@property(nonatomic, readonly) struct CGPoint selectionRelativeScrollOffset;
@property(nonatomic, readonly) IBARepresentedObjectIdentifier *focusedIdentifierForAbsoluteScrollOffset; // @synthesize focusedIdentifierForAbsoluteScrollOffset;
@property(nonatomic, readonly) struct CGPoint absoluteScrollOffset; // @synthesize absoluteScrollOffset;

@end

