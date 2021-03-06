//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/ugos/j2objc-master/junit/build_result/java/org/junit/runners/model/FrameworkMethod.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitRunnersModelFrameworkMethod")
#ifdef RESTRICT_OrgJunitRunnersModelFrameworkMethod
#define INCLUDE_ALL_OrgJunitRunnersModelFrameworkMethod 0
#else
#define INCLUDE_ALL_OrgJunitRunnersModelFrameworkMethod 1
#endif
#undef RESTRICT_OrgJunitRunnersModelFrameworkMethod

#if !defined (OrgJunitRunnersModelFrameworkMethod_) && (INCLUDE_ALL_OrgJunitRunnersModelFrameworkMethod || defined(INCLUDE_OrgJunitRunnersModelFrameworkMethod))
#define OrgJunitRunnersModelFrameworkMethod_

#define RESTRICT_OrgJunitRunnersModelFrameworkMember 1
#define INCLUDE_OrgJunitRunnersModelFrameworkMember 1
#include "org/junit/runners/model/FrameworkMember.h"

@class IOSClass;
@class IOSObjectArray;
@class JavaLangReflectMethod;
@protocol JavaLangAnnotationAnnotation;
@protocol JavaLangReflectType;
@protocol JavaUtilList;

@interface OrgJunitRunnersModelFrameworkMethod : OrgJunitRunnersModelFrameworkMember {
 @public
  JavaLangReflectMethod *fMethod_;
}

#pragma mark Public

- (instancetype)initWithJavaLangReflectMethod:(JavaLangReflectMethod *)method;

- (jboolean)isEqual:(id)obj;

- (id<JavaLangAnnotationAnnotation>)getAnnotationWithIOSClass:(IOSClass *)annotationType;

- (IOSObjectArray *)getAnnotations;

- (JavaLangReflectMethod *)getMethod;

- (NSString *)getName;

- (IOSClass *)getReturnType;

- (IOSClass *)getType;

- (NSUInteger)hash;

- (id)invokeExplosivelyWithId:(id)target
            withNSObjectArray:(IOSObjectArray *)params;

- (jboolean)isPublic;

- (jboolean)isShadowedByWithOrgJunitRunnersModelFrameworkMember:(OrgJunitRunnersModelFrameworkMethod *)other;

- (jboolean)isStatic;

- (jboolean)producesTypeWithJavaLangReflectType:(id<JavaLangReflectType>)type;

- (void)validateNoTypeParametersOnArgsWithJavaUtilList:(id<JavaUtilList>)errors;

- (void)validatePublicVoidWithBoolean:(jboolean)isStatic
                     withJavaUtilList:(id<JavaUtilList>)errors;

- (void)validatePublicVoidNoArgWithBoolean:(jboolean)isStatic
                          withJavaUtilList:(id<JavaUtilList>)errors;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitRunnersModelFrameworkMethod)

J2OBJC_FIELD_SETTER(OrgJunitRunnersModelFrameworkMethod, fMethod_, JavaLangReflectMethod *)

FOUNDATION_EXPORT void OrgJunitRunnersModelFrameworkMethod_initWithJavaLangReflectMethod_(OrgJunitRunnersModelFrameworkMethod *self, JavaLangReflectMethod *method);

FOUNDATION_EXPORT OrgJunitRunnersModelFrameworkMethod *new_OrgJunitRunnersModelFrameworkMethod_initWithJavaLangReflectMethod_(JavaLangReflectMethod *method) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitRunnersModelFrameworkMethod *create_OrgJunitRunnersModelFrameworkMethod_initWithJavaLangReflectMethod_(JavaLangReflectMethod *method);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRunnersModelFrameworkMethod)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgJunitRunnersModelFrameworkMethod")
