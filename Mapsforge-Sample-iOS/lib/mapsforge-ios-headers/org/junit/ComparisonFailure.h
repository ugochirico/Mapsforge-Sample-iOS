//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/ugos/j2objc-master/junit/build_result/java/org/junit/ComparisonFailure.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitComparisonFailure")
#ifdef RESTRICT_OrgJunitComparisonFailure
#define INCLUDE_ALL_OrgJunitComparisonFailure 0
#else
#define INCLUDE_ALL_OrgJunitComparisonFailure 1
#endif
#undef RESTRICT_OrgJunitComparisonFailure

#if !defined (OrgJunitComparisonFailure_) && (INCLUDE_ALL_OrgJunitComparisonFailure || defined(INCLUDE_OrgJunitComparisonFailure))
#define OrgJunitComparisonFailure_

#define RESTRICT_JavaLangAssertionError 1
#define INCLUDE_JavaLangAssertionError 1
#include "java/lang/AssertionError.h"

@interface OrgJunitComparisonFailure : JavaLangAssertionError

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)message
                    withNSString:(NSString *)expected
                    withNSString:(NSString *)actual;

- (NSString *)getActual;

- (NSString *)getExpected;

- (NSString *)getMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitComparisonFailure)

FOUNDATION_EXPORT void OrgJunitComparisonFailure_initWithNSString_withNSString_withNSString_(OrgJunitComparisonFailure *self, NSString *message, NSString *expected, NSString *actual);

FOUNDATION_EXPORT OrgJunitComparisonFailure *new_OrgJunitComparisonFailure_initWithNSString_withNSString_withNSString_(NSString *message, NSString *expected, NSString *actual) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitComparisonFailure *create_OrgJunitComparisonFailure_initWithNSString_withNSString_withNSString_(NSString *message, NSString *expected, NSString *actual);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitComparisonFailure)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgJunitComparisonFailure")
