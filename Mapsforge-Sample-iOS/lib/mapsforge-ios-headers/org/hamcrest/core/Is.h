//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/ugos/j2objc-master/junit/build_result/java/org/hamcrest/core/Is.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgHamcrestCoreIs")
#ifdef RESTRICT_OrgHamcrestCoreIs
#define INCLUDE_ALL_OrgHamcrestCoreIs 0
#else
#define INCLUDE_ALL_OrgHamcrestCoreIs 1
#endif
#undef RESTRICT_OrgHamcrestCoreIs

#if !defined (OrgHamcrestCoreIs_) && (INCLUDE_ALL_OrgHamcrestCoreIs || defined(INCLUDE_OrgHamcrestCoreIs))
#define OrgHamcrestCoreIs_

#define RESTRICT_OrgHamcrestBaseMatcher 1
#define INCLUDE_OrgHamcrestBaseMatcher 1
#include "org/hamcrest/BaseMatcher.h"

@class IOSClass;
@protocol OrgHamcrestDescription;
@protocol OrgHamcrestMatcher;

@interface OrgHamcrestCoreIs : OrgHamcrestBaseMatcher

#pragma mark Public

- (instancetype)initWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher;

- (void)describeMismatchWithId:(id)item
    withOrgHamcrestDescription:(id<OrgHamcrestDescription>)mismatchDescription;

- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

+ (id<OrgHamcrestMatcher>)isWithIOSClass:(IOSClass *)type;

+ (id<OrgHamcrestMatcher>)isWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher;

+ (id<OrgHamcrestMatcher>)isWithId:(id)value;

+ (id<OrgHamcrestMatcher>)isAWithIOSClass:(IOSClass *)type;

- (jboolean)matchesWithId:(id)arg;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgHamcrestCoreIs)

FOUNDATION_EXPORT void OrgHamcrestCoreIs_initWithOrgHamcrestMatcher_(OrgHamcrestCoreIs *self, id<OrgHamcrestMatcher> matcher);

FOUNDATION_EXPORT OrgHamcrestCoreIs *new_OrgHamcrestCoreIs_initWithOrgHamcrestMatcher_(id<OrgHamcrestMatcher> matcher) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgHamcrestCoreIs *create_OrgHamcrestCoreIs_initWithOrgHamcrestMatcher_(id<OrgHamcrestMatcher> matcher);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreIs_isWithOrgHamcrestMatcher_(id<OrgHamcrestMatcher> matcher);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreIs_isWithId_(id value);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreIs_isWithIOSClass_(IOSClass *type);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreIs_isAWithIOSClass_(IOSClass *type);

J2OBJC_TYPE_LITERAL_HEADER(OrgHamcrestCoreIs)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgHamcrestCoreIs")
