//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/ugos/j2objc-master/testing/mockito/build_result/java/org/mockito/internal/progress/MockingProgress.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalProgressMockingProgress")
#ifdef RESTRICT_OrgMockitoInternalProgressMockingProgress
#define INCLUDE_ALL_OrgMockitoInternalProgressMockingProgress 0
#else
#define INCLUDE_ALL_OrgMockitoInternalProgressMockingProgress 1
#endif
#undef RESTRICT_OrgMockitoInternalProgressMockingProgress

#if !defined (OrgMockitoInternalProgressMockingProgress_) && (INCLUDE_ALL_OrgMockitoInternalProgressMockingProgress || defined(INCLUDE_OrgMockitoInternalProgressMockingProgress))
#define OrgMockitoInternalProgressMockingProgress_

@class IOSClass;
@protocol OrgMockitoInternalListenersMockingProgressListener;
@protocol OrgMockitoInternalProgressArgumentMatcherStorage;
@protocol OrgMockitoInternalProgressIOngoingStubbing;
@protocol OrgMockitoInvocationInvocation;
@protocol OrgMockitoVerificationVerificationMode;

@protocol OrgMockitoInternalProgressMockingProgress < JavaObject >

- (void)reportOngoingStubbingWithOrgMockitoInternalProgressIOngoingStubbing:(id<OrgMockitoInternalProgressIOngoingStubbing>)iOngoingStubbing;

- (id<OrgMockitoInternalProgressIOngoingStubbing>)pullOngoingStubbing;

- (void)verificationStartedWithOrgMockitoVerificationVerificationMode:(id<OrgMockitoVerificationVerificationMode>)verificationMode;

- (id<OrgMockitoVerificationVerificationMode>)pullVerificationMode;

- (void)stubbingStarted;

- (void)stubbingCompletedWithOrgMockitoInvocationInvocation:(id<OrgMockitoInvocationInvocation>)invocation;

- (void)validateState;

- (void)reset;

- (void)resetOngoingStubbing;

- (id<OrgMockitoInternalProgressArgumentMatcherStorage>)getArgumentMatcherStorage;

- (void)mockingStartedWithId:(id)mock
                withIOSClass:(IOSClass *)classToMock;

- (void)setListenerWithOrgMockitoInternalListenersMockingProgressListener:(id<OrgMockitoInternalListenersMockingProgressListener>)listener;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalProgressMockingProgress)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalProgressMockingProgress)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalProgressMockingProgress")
