//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./org/mapsforge/core/graphics/FillRule.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMapsforgeCoreGraphicsFillRule")
#ifdef RESTRICT_OrgMapsforgeCoreGraphicsFillRule
#define INCLUDE_ALL_OrgMapsforgeCoreGraphicsFillRule 0
#else
#define INCLUDE_ALL_OrgMapsforgeCoreGraphicsFillRule 1
#endif
#undef RESTRICT_OrgMapsforgeCoreGraphicsFillRule

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMapsforgeCoreGraphicsFillRule_) && (INCLUDE_ALL_OrgMapsforgeCoreGraphicsFillRule || defined(INCLUDE_OrgMapsforgeCoreGraphicsFillRule))
#define OrgMapsforgeCoreGraphicsFillRule_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, OrgMapsforgeCoreGraphicsFillRule_Enum) {
  OrgMapsforgeCoreGraphicsFillRule_Enum_EVEN_ODD = 0,
  OrgMapsforgeCoreGraphicsFillRule_Enum_NON_ZERO = 1,
};

@interface OrgMapsforgeCoreGraphicsFillRule : JavaLangEnum < NSCopying >

#pragma mark Public

+ (OrgMapsforgeCoreGraphicsFillRule *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (id)copyWithZone:(NSZone *)zone;

@end

J2OBJC_STATIC_INIT(OrgMapsforgeCoreGraphicsFillRule)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT OrgMapsforgeCoreGraphicsFillRule *OrgMapsforgeCoreGraphicsFillRule_values_[];

inline OrgMapsforgeCoreGraphicsFillRule *OrgMapsforgeCoreGraphicsFillRule_get_EVEN_ODD();
J2OBJC_ENUM_CONSTANT(OrgMapsforgeCoreGraphicsFillRule, EVEN_ODD)

inline OrgMapsforgeCoreGraphicsFillRule *OrgMapsforgeCoreGraphicsFillRule_get_NON_ZERO();
J2OBJC_ENUM_CONSTANT(OrgMapsforgeCoreGraphicsFillRule, NON_ZERO)

FOUNDATION_EXPORT IOSObjectArray *OrgMapsforgeCoreGraphicsFillRule_values();

FOUNDATION_EXPORT OrgMapsforgeCoreGraphicsFillRule *OrgMapsforgeCoreGraphicsFillRule_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT OrgMapsforgeCoreGraphicsFillRule *OrgMapsforgeCoreGraphicsFillRule_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(OrgMapsforgeCoreGraphicsFillRule)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_OrgMapsforgeCoreGraphicsFillRule")
