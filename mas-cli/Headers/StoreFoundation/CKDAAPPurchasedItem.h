//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreFoundation/CKBook.h>

#import "NSSecureCoding.h"

@class NSDictionary;

@interface CKDAAPPurchasedItem : CKBook <NSSecureCoding>
{
    NSDictionary *_daapDictionary;
}

+ (BOOL)supportsSecureCoding;
@property(copy) NSDictionary *daapDictionary; // @synthesize daapDictionary=_daapDictionary;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
