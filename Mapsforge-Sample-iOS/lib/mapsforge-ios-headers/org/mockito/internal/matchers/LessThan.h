//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/ugos/j2objc-master/testing/mockito/build_result/java/org/mockito/internal/matchers/LessThan.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalMatchersLessThan")
#ifdef RESTRICT_OrgMockitoInternalMatchersLessThan
#define INCLUDE_ALL_OrgMockitoInternalMatchersLessThan 0
#else
#define INCLUDE_ALL_OrgMockitoInternalMatchersLessThan 1
#endif
#undef RESTRICT_OrgMockitoInternalMatchersLessThan

#if !defined (OrgMockitoInternalMatchersLessThan_) && (INCLUDE_ALL_OrgMockitoInternalMatchersLessThan || defined(INCLUDE_OrgMockitoInternalMatchersLessThan))
#define OrgMockitoInternalMatchersLessThan_

#define RESTRICT_OrgMockitoInternalMatchersCompareTo 1
#define INCLUDE_OrgMockitoInternalMatchersCompareTo 1
#include "org/mockito/internal/matchers/CompareTo.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@protocol JavaLangComparable;

@interface OrgMockitoInternalMatchersLessThan : OrgMockitoInternalMatchersCompareTo < JavaIoSerializable >

#pragma mark Public

- (instancetype)initWithJavaLangComparable:(id<JavaLangComparable>)value;

#pragma mark Protected

- (NSString *)getName;

- (jboolean)matchResultWithInt:(jint)result;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalMatchersLessThan)

FOUNDATION_EXPORT void OrgMockitoInternalMatchersLessThan_initWithJavaLangComparable_(OrgMockitoInternalMatchersLessThan *self, id<JavaLangComparable> value);

FOUNDATION_EXPORT OrgMockitoInternalMatchersLessThan *new_OrgMockitoInternalMatchersLessThan_initWithJavaLangComparable_(id<JavaLangComparable> value) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalMatchersLessThan *create_OrgMockitoInternalMatchersLessThan_initWithJavaLangComparable_(id<JavaLangComparable> value);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalMatchersLessThan)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalMatchersLessThan")
