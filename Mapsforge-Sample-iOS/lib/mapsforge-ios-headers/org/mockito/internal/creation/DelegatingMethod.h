//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: src/main/java/org/mockito/internal/creation/DelegatingMethod.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalCreationDelegatingMethod")
#ifdef RESTRICT_OrgMockitoInternalCreationDelegatingMethod
#define INCLUDE_ALL_OrgMockitoInternalCreationDelegatingMethod 0
#else
#define INCLUDE_ALL_OrgMockitoInternalCreationDelegatingMethod 1
#endif
#undef RESTRICT_OrgMockitoInternalCreationDelegatingMethod

#if !defined (OrgMockitoInternalCreationDelegatingMethod_) && (INCLUDE_ALL_OrgMockitoInternalCreationDelegatingMethod || defined(INCLUDE_OrgMockitoInternalCreationDelegatingMethod))
#define OrgMockitoInternalCreationDelegatingMethod_

#define RESTRICT_OrgMockitoInternalInvocationMockitoMethod 1
#define INCLUDE_OrgMockitoInternalInvocationMockitoMethod 1
#include "org/mockito/internal/invocation/MockitoMethod.h"

@class IOSClass;
@class IOSObjectArray;
@class JavaLangReflectMethod;

@interface OrgMockitoInternalCreationDelegatingMethod : NSObject < OrgMockitoInternalInvocationMockitoMethod >

#pragma mark Public

- (instancetype)initWithJavaLangReflectMethod:(JavaLangReflectMethod *)method;

- (jboolean)isEqual:(id)obj;

- (IOSObjectArray *)getExceptionTypes;

- (JavaLangReflectMethod *)getJavaMethod;

- (NSString *)getName;

- (IOSObjectArray *)getParameterTypes;

- (IOSClass *)getReturnType;

- (NSUInteger)hash;

- (jboolean)isVarArgs;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalCreationDelegatingMethod)

FOUNDATION_EXPORT void OrgMockitoInternalCreationDelegatingMethod_initWithJavaLangReflectMethod_(OrgMockitoInternalCreationDelegatingMethod *self, JavaLangReflectMethod *method);

FOUNDATION_EXPORT OrgMockitoInternalCreationDelegatingMethod *new_OrgMockitoInternalCreationDelegatingMethod_initWithJavaLangReflectMethod_(JavaLangReflectMethod *method) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalCreationDelegatingMethod *create_OrgMockitoInternalCreationDelegatingMethod_initWithJavaLangReflectMethod_(JavaLangReflectMethod *method);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalCreationDelegatingMethod)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalCreationDelegatingMethod")
