//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/ugos/j2objc-master/testing/mockito/build_result/java/org/mockito/internal/stubbing/answers/Returns.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalStubbingAnswersReturns")
#ifdef RESTRICT_OrgMockitoInternalStubbingAnswersReturns
#define INCLUDE_ALL_OrgMockitoInternalStubbingAnswersReturns 0
#else
#define INCLUDE_ALL_OrgMockitoInternalStubbingAnswersReturns 1
#endif
#undef RESTRICT_OrgMockitoInternalStubbingAnswersReturns

#if !defined (OrgMockitoInternalStubbingAnswersReturns_) && (INCLUDE_ALL_OrgMockitoInternalStubbingAnswersReturns || defined(INCLUDE_OrgMockitoInternalStubbingAnswersReturns))
#define OrgMockitoInternalStubbingAnswersReturns_

#define RESTRICT_OrgMockitoStubbingAnswer 1
#define INCLUDE_OrgMockitoStubbingAnswer 1
#include "org/mockito/stubbing/Answer.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class IOSClass;
@protocol OrgMockitoInvocationInvocationOnMock;

@interface OrgMockitoInternalStubbingAnswersReturns : NSObject < OrgMockitoStubbingAnswer, JavaIoSerializable >

#pragma mark Public

- (instancetype)initWithId:(id)value;

- (id)answerWithOrgMockitoInvocationInvocationOnMock:(id<OrgMockitoInvocationInvocationOnMock>)invocation;

- (IOSClass *)getReturnType;

- (NSString *)printReturnType;

- (jboolean)returnsNull;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalStubbingAnswersReturns)

FOUNDATION_EXPORT void OrgMockitoInternalStubbingAnswersReturns_initWithId_(OrgMockitoInternalStubbingAnswersReturns *self, id value);

FOUNDATION_EXPORT OrgMockitoInternalStubbingAnswersReturns *new_OrgMockitoInternalStubbingAnswersReturns_initWithId_(id value) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalStubbingAnswersReturns *create_OrgMockitoInternalStubbingAnswersReturns_initWithId_(id value);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalStubbingAnswersReturns)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalStubbingAnswersReturns")
