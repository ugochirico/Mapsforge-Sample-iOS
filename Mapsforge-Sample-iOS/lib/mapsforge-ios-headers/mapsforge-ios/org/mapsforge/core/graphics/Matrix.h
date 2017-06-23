//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./org/mapsforge/core/graphics/Matrix.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMapsforgeCoreGraphicsMatrix")
#ifdef RESTRICT_OrgMapsforgeCoreGraphicsMatrix
#define INCLUDE_ALL_OrgMapsforgeCoreGraphicsMatrix 0
#else
#define INCLUDE_ALL_OrgMapsforgeCoreGraphicsMatrix 1
#endif
#undef RESTRICT_OrgMapsforgeCoreGraphicsMatrix

#if !defined (OrgMapsforgeCoreGraphicsMatrix_) && (INCLUDE_ALL_OrgMapsforgeCoreGraphicsMatrix || defined(INCLUDE_OrgMapsforgeCoreGraphicsMatrix))
#define OrgMapsforgeCoreGraphicsMatrix_

@protocol OrgMapsforgeCoreGraphicsMatrix < JavaObject >

- (void)reset;

- (void)rotateWithFloat:(jfloat)theta;

- (void)rotateWithFloat:(jfloat)theta
              withFloat:(jfloat)pivotX
              withFloat:(jfloat)pivotY;

- (void)scale__WithFloat:(jfloat)scaleX
               withFloat:(jfloat)scaleY;

- (void)scale__WithFloat:(jfloat)scaleX
               withFloat:(jfloat)scaleY
               withFloat:(jfloat)pivotX
               withFloat:(jfloat)pivotY;

- (void)translateWithFloat:(jfloat)translateX
                 withFloat:(jfloat)translateY;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMapsforgeCoreGraphicsMatrix)

J2OBJC_TYPE_LITERAL_HEADER(OrgMapsforgeCoreGraphicsMatrix)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgMapsforgeCoreGraphicsMatrix")
