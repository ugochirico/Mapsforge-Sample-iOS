//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/frameworks/base/core/java/android/text/util/Rfc822Token.java
//

#ifndef _AndroidTextUtilRfc822Token_H_
#define _AndroidTextUtilRfc822Token_H_

#include "J2ObjC_header.h"

@interface AndroidTextUtilRfc822Token : NSObject

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)name
                    withNSString:(NSString *)address
                    withNSString:(NSString *)comment;

- (jboolean)isEqual:(id)o;

- (NSString *)getAddress;

- (NSString *)getComment;

- (NSString *)getName;

- (NSUInteger)hash;

+ (NSString *)quoteCommentWithNSString:(NSString *)comment;

+ (NSString *)quoteNameWithNSString:(NSString *)name;

+ (NSString *)quoteNameIfNecessaryWithNSString:(NSString *)name;

- (void)setAddressWithNSString:(NSString *)address;

- (void)setCommentWithNSString:(NSString *)comment;

- (void)setNameWithNSString:(NSString *)name;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(AndroidTextUtilRfc822Token)

FOUNDATION_EXPORT void AndroidTextUtilRfc822Token_initWithNSString_withNSString_withNSString_(AndroidTextUtilRfc822Token *self, NSString *name, NSString *address, NSString *comment);

FOUNDATION_EXPORT AndroidTextUtilRfc822Token *new_AndroidTextUtilRfc822Token_initWithNSString_withNSString_withNSString_(NSString *name, NSString *address, NSString *comment) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT NSString *AndroidTextUtilRfc822Token_quoteNameIfNecessaryWithNSString_(NSString *name);

FOUNDATION_EXPORT NSString *AndroidTextUtilRfc822Token_quoteNameWithNSString_(NSString *name);

FOUNDATION_EXPORT NSString *AndroidTextUtilRfc822Token_quoteCommentWithNSString_(NSString *comment);

J2OBJC_TYPE_LITERAL_HEADER(AndroidTextUtilRfc822Token)

#endif // _AndroidTextUtilRfc822Token_H_