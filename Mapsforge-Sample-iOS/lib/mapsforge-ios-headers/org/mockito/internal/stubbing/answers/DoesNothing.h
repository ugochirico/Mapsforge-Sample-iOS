//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/ugos/j2objc-master/testing/mockito/build_result/java/org/mockito/internal/stubbing/answers/DoesNothing.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalStubbingAnswersDoesNothing")
#ifdef RESTRICT_OrgMockitoInternalStubbingAnswersDoesNothing
#define INCLUDE_ALL_OrgMockitoInternalStubbingAnswersDoesNothing 0
#else
#define INCLUDE_ALL_OrgMockitoInternalStubbingAnswersDoesNothing 1
#endif
#undef RESTRICT_OrgMockitoInternalStubbingAnswersDoesNothing

#if !defined (OrgMockitoInternalStubbingAnswersDoesNothing_) && (INCLUDE_ALL_OrgMockitoInternalStubbingAnswersDoesNothing || defined(INCLUDE_OrgMockitoInternalStubbingAnswersDoesNothing))
#define OrgMockitoInternalStubbingAnswersDoesNothing_

#define RESTRICT_OrgMockitoStubbingAnswer 1
#define INCLUDE_OrgMockitoStubbingAnswer 1
#include "org/mockito/stubbing/Answer.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@protocol OrgMockitoInvocationInvocationOnMock;

@interface OrgMockitoInternalStubbingAnswersDoesNothing : NSObject < OrgMockitoStubbingAnswer, JavaIoSerializable >

#pragma mark Public

- (instancetype)init;

- (id)answerWithOrgMockitoInvocationInvocationOnMock:(id<OrgMockitoInvocationInvocationOnMock>)invocation;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalStubbingAnswersDoesNothing)

FOUNDATION_EXPORT void OrgMockitoInternalStubbingAnswersDoesNothing_init(OrgMockitoInternalStubbingAnswersDoesNothing *self);

FOUNDATION_EXPORT OrgMockitoInternalStubbingAnswersDoesNothing *new_OrgMockitoInternalStubbingAnswersDoesNothing_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalStubbingAnswersDoesNothing *create_OrgMockitoInternalStubbingAnswersDoesNothing_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalStubbingAnswersDoesNothing)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalStubbingAnswersDoesNothing")
