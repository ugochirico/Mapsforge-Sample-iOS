//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/ugos/j2objc-master/testing/mockito/build_result/java/org/mockito/internal/util/reflection/LenientCopyTool.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalUtilReflectionLenientCopyTool")
#ifdef RESTRICT_OrgMockitoInternalUtilReflectionLenientCopyTool
#define INCLUDE_ALL_OrgMockitoInternalUtilReflectionLenientCopyTool 0
#else
#define INCLUDE_ALL_OrgMockitoInternalUtilReflectionLenientCopyTool 1
#endif
#undef RESTRICT_OrgMockitoInternalUtilReflectionLenientCopyTool

#if !defined (OrgMockitoInternalUtilReflectionLenientCopyTool_) && (INCLUDE_ALL_OrgMockitoInternalUtilReflectionLenientCopyTool || defined(INCLUDE_OrgMockitoInternalUtilReflectionLenientCopyTool))
#define OrgMockitoInternalUtilReflectionLenientCopyTool_

@class OrgMockitoInternalUtilReflectionFieldCopier;

@interface OrgMockitoInternalUtilReflectionLenientCopyTool : NSObject {
 @public
  OrgMockitoInternalUtilReflectionFieldCopier *fieldCopier_;
}

#pragma mark Public

- (instancetype)init;

- (void)copyToMockWithId:(id)from
                  withId:(id)mock OBJC_METHOD_FAMILY_NONE;

- (void)copyToRealObjectWithId:(id)from
                        withId:(id)to OBJC_METHOD_FAMILY_NONE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalUtilReflectionLenientCopyTool)

J2OBJC_FIELD_SETTER(OrgMockitoInternalUtilReflectionLenientCopyTool, fieldCopier_, OrgMockitoInternalUtilReflectionFieldCopier *)

FOUNDATION_EXPORT void OrgMockitoInternalUtilReflectionLenientCopyTool_init(OrgMockitoInternalUtilReflectionLenientCopyTool *self);

FOUNDATION_EXPORT OrgMockitoInternalUtilReflectionLenientCopyTool *new_OrgMockitoInternalUtilReflectionLenientCopyTool_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalUtilReflectionLenientCopyTool *create_OrgMockitoInternalUtilReflectionLenientCopyTool_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalUtilReflectionLenientCopyTool)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalUtilReflectionLenientCopyTool")
