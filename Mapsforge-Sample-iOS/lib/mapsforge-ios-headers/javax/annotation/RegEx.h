//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/ugos/j2objc-master/jsr305/build_result/java/javax/annotation/RegEx.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxAnnotationRegEx")
#ifdef RESTRICT_JavaxAnnotationRegEx
#define INCLUDE_ALL_JavaxAnnotationRegEx 0
#else
#define INCLUDE_ALL_JavaxAnnotationRegEx 1
#endif
#undef RESTRICT_JavaxAnnotationRegEx

#if !defined (JavaxAnnotationRegEx_) && (INCLUDE_ALL_JavaxAnnotationRegEx || defined(INCLUDE_JavaxAnnotationRegEx))
#define JavaxAnnotationRegEx_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;
@class JavaxAnnotationMetaWhen;

@protocol JavaxAnnotationRegEx < JavaLangAnnotationAnnotation >

@property (readonly) JavaxAnnotationMetaWhen *when;

@end

@interface JavaxAnnotationRegEx : NSObject < JavaxAnnotationRegEx > {
 @public
  JavaxAnnotationMetaWhen *when_;
}

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxAnnotationRegEx)

FOUNDATION_EXPORT id<JavaxAnnotationRegEx> create_JavaxAnnotationRegEx(JavaxAnnotationMetaWhen *when);

J2OBJC_TYPE_LITERAL_HEADER(JavaxAnnotationRegEx)

#endif

#if !defined (JavaxAnnotationRegEx_Checker_) && (INCLUDE_ALL_JavaxAnnotationRegEx || defined(INCLUDE_JavaxAnnotationRegEx_Checker))
#define JavaxAnnotationRegEx_Checker_

#define RESTRICT_JavaxAnnotationMetaTypeQualifierValidator 1
#define INCLUDE_JavaxAnnotationMetaTypeQualifierValidator 1
#include "javax/annotation/meta/TypeQualifierValidator.h"

@class JavaxAnnotationMetaWhen;
@protocol JavaxAnnotationRegEx;

@interface JavaxAnnotationRegEx_Checker : NSObject < JavaxAnnotationMetaTypeQualifierValidator >

#pragma mark Public

- (instancetype)init;

- (JavaxAnnotationMetaWhen *)forConstantValueWithJavaLangAnnotationAnnotation:(id<JavaxAnnotationRegEx>)annotation
                                                                       withId:(id)value;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxAnnotationRegEx_Checker)

FOUNDATION_EXPORT void JavaxAnnotationRegEx_Checker_init(JavaxAnnotationRegEx_Checker *self);

FOUNDATION_EXPORT JavaxAnnotationRegEx_Checker *new_JavaxAnnotationRegEx_Checker_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxAnnotationRegEx_Checker *create_JavaxAnnotationRegEx_Checker_init();

J2OBJC_TYPE_LITERAL_HEADER(JavaxAnnotationRegEx_Checker)

#endif

#pragma pop_macro("INCLUDE_ALL_JavaxAnnotationRegEx")
