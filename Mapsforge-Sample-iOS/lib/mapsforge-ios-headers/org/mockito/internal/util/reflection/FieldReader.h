//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/ugos/j2objc-master/testing/mockito/build_result/java/org/mockito/internal/util/reflection/FieldReader.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalUtilReflectionFieldReader")
#ifdef RESTRICT_OrgMockitoInternalUtilReflectionFieldReader
#define INCLUDE_ALL_OrgMockitoInternalUtilReflectionFieldReader 0
#else
#define INCLUDE_ALL_OrgMockitoInternalUtilReflectionFieldReader 1
#endif
#undef RESTRICT_OrgMockitoInternalUtilReflectionFieldReader

#if !defined (OrgMockitoInternalUtilReflectionFieldReader_) && (INCLUDE_ALL_OrgMockitoInternalUtilReflectionFieldReader || defined(INCLUDE_OrgMockitoInternalUtilReflectionFieldReader))
#define OrgMockitoInternalUtilReflectionFieldReader_

@class JavaLangReflectField;
@class OrgMockitoInternalUtilReflectionAccessibilityChanger;

@interface OrgMockitoInternalUtilReflectionFieldReader : NSObject {
 @public
  id target_;
  JavaLangReflectField *field_;
  OrgMockitoInternalUtilReflectionAccessibilityChanger *changer_;
}

#pragma mark Public

- (instancetype)initWithId:(id)target
  withJavaLangReflectField:(JavaLangReflectField *)field;

- (jboolean)isNull;

- (id)read;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalUtilReflectionFieldReader)

J2OBJC_FIELD_SETTER(OrgMockitoInternalUtilReflectionFieldReader, target_, id)
J2OBJC_FIELD_SETTER(OrgMockitoInternalUtilReflectionFieldReader, field_, JavaLangReflectField *)
J2OBJC_FIELD_SETTER(OrgMockitoInternalUtilReflectionFieldReader, changer_, OrgMockitoInternalUtilReflectionAccessibilityChanger *)

FOUNDATION_EXPORT void OrgMockitoInternalUtilReflectionFieldReader_initWithId_withJavaLangReflectField_(OrgMockitoInternalUtilReflectionFieldReader *self, id target, JavaLangReflectField *field);

FOUNDATION_EXPORT OrgMockitoInternalUtilReflectionFieldReader *new_OrgMockitoInternalUtilReflectionFieldReader_initWithId_withJavaLangReflectField_(id target, JavaLangReflectField *field) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalUtilReflectionFieldReader *create_OrgMockitoInternalUtilReflectionFieldReader_initWithId_withJavaLangReflectField_(id target, JavaLangReflectField *field);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalUtilReflectionFieldReader)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalUtilReflectionFieldReader")
