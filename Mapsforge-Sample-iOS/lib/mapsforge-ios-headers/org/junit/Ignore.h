//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/ugos/j2objc-master/junit/build_result/java/org/junit/Ignore.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitIgnore")
#ifdef RESTRICT_OrgJunitIgnore
#define INCLUDE_ALL_OrgJunitIgnore 0
#else
#define INCLUDE_ALL_OrgJunitIgnore 1
#endif
#undef RESTRICT_OrgJunitIgnore

#if !defined (OrgJunitIgnore_) && (INCLUDE_ALL_OrgJunitIgnore || defined(INCLUDE_OrgJunitIgnore))
#define OrgJunitIgnore_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;

@protocol OrgJunitIgnore < JavaLangAnnotationAnnotation >

@property (readonly) NSString *value;

@end

@interface OrgJunitIgnore : NSObject < OrgJunitIgnore > {
 @public
  NSString *value_;
}

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitIgnore)

FOUNDATION_EXPORT id<OrgJunitIgnore> create_OrgJunitIgnore(NSString *value);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitIgnore)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgJunitIgnore")
