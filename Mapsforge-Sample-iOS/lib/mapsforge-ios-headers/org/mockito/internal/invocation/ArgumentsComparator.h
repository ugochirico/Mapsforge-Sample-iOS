//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/ugos/j2objc-master/testing/mockito/build_result/java/org/mockito/internal/invocation/ArgumentsComparator.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalInvocationArgumentsComparator")
#ifdef RESTRICT_OrgMockitoInternalInvocationArgumentsComparator
#define INCLUDE_ALL_OrgMockitoInternalInvocationArgumentsComparator 0
#else
#define INCLUDE_ALL_OrgMockitoInternalInvocationArgumentsComparator 1
#endif
#undef RESTRICT_OrgMockitoInternalInvocationArgumentsComparator

#if !defined (OrgMockitoInternalInvocationArgumentsComparator_) && (INCLUDE_ALL_OrgMockitoInternalInvocationArgumentsComparator || defined(INCLUDE_OrgMockitoInternalInvocationArgumentsComparator))
#define OrgMockitoInternalInvocationArgumentsComparator_

@class IOSObjectArray;
@class OrgMockitoInternalInvocationInvocationMatcher;
@protocol OrgMockitoInvocationInvocation;

@interface OrgMockitoInternalInvocationArgumentsComparator : NSObject

#pragma mark Public

- (instancetype)init;

- (jboolean)argumentsMatchWithOrgMockitoInternalInvocationInvocationMatcher:(OrgMockitoInternalInvocationInvocationMatcher *)invocationMatcher
                                         withOrgMockitoInvocationInvocation:(id<OrgMockitoInvocationInvocation>)actual;

- (jboolean)argumentsMatchWithOrgMockitoInternalInvocationInvocationMatcher:(OrgMockitoInternalInvocationInvocationMatcher *)invocationMatcher
                                                          withNSObjectArray:(IOSObjectArray *)actualArgs;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalInvocationArgumentsComparator)

FOUNDATION_EXPORT void OrgMockitoInternalInvocationArgumentsComparator_init(OrgMockitoInternalInvocationArgumentsComparator *self);

FOUNDATION_EXPORT OrgMockitoInternalInvocationArgumentsComparator *new_OrgMockitoInternalInvocationArgumentsComparator_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalInvocationArgumentsComparator *create_OrgMockitoInternalInvocationArgumentsComparator_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalInvocationArgumentsComparator)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalInvocationArgumentsComparator")
