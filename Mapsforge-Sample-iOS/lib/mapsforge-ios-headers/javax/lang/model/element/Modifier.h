//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: Classes/javax/lang/model/element/Modifier.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxLangModelElementModifier")
#ifdef RESTRICT_JavaxLangModelElementModifier
#define INCLUDE_ALL_JavaxLangModelElementModifier 0
#else
#define INCLUDE_ALL_JavaxLangModelElementModifier 1
#endif
#undef RESTRICT_JavaxLangModelElementModifier

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxLangModelElementModifier_) && (INCLUDE_ALL_JavaxLangModelElementModifier || defined(INCLUDE_JavaxLangModelElementModifier))
#define JavaxLangModelElementModifier_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, JavaxLangModelElementModifier_Enum) {
  JavaxLangModelElementModifier_Enum_PUBLIC = 0,
  JavaxLangModelElementModifier_Enum_PROTECTED = 1,
  JavaxLangModelElementModifier_Enum_PRIVATE = 2,
  JavaxLangModelElementModifier_Enum_ABSTRACT = 3,
  JavaxLangModelElementModifier_Enum_STATIC = 4,
  JavaxLangModelElementModifier_Enum_FINAL = 5,
  JavaxLangModelElementModifier_Enum_TRANSIENT = 6,
  JavaxLangModelElementModifier_Enum_VOLATILE = 7,
  JavaxLangModelElementModifier_Enum_SYNCHRONIZED = 8,
  JavaxLangModelElementModifier_Enum_NATIVE = 9,
  JavaxLangModelElementModifier_Enum_STRICTFP = 10,
};

@interface JavaxLangModelElementModifier : JavaLangEnum < NSCopying >

#pragma mark Public

- (NSString *)description;

+ (JavaxLangModelElementModifier *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (id)copyWithZone:(NSZone *)zone;

@end

J2OBJC_STATIC_INIT(JavaxLangModelElementModifier)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT JavaxLangModelElementModifier *JavaxLangModelElementModifier_values_[];

inline JavaxLangModelElementModifier *JavaxLangModelElementModifier_get_PUBLIC();
J2OBJC_ENUM_CONSTANT(JavaxLangModelElementModifier, PUBLIC)

inline JavaxLangModelElementModifier *JavaxLangModelElementModifier_get_PROTECTED();
J2OBJC_ENUM_CONSTANT(JavaxLangModelElementModifier, PROTECTED)

inline JavaxLangModelElementModifier *JavaxLangModelElementModifier_get_PRIVATE();
J2OBJC_ENUM_CONSTANT(JavaxLangModelElementModifier, PRIVATE)

inline JavaxLangModelElementModifier *JavaxLangModelElementModifier_get_ABSTRACT();
J2OBJC_ENUM_CONSTANT(JavaxLangModelElementModifier, ABSTRACT)

inline JavaxLangModelElementModifier *JavaxLangModelElementModifier_get_STATIC();
J2OBJC_ENUM_CONSTANT(JavaxLangModelElementModifier, STATIC)

inline JavaxLangModelElementModifier *JavaxLangModelElementModifier_get_FINAL();
J2OBJC_ENUM_CONSTANT(JavaxLangModelElementModifier, FINAL)

inline JavaxLangModelElementModifier *JavaxLangModelElementModifier_get_TRANSIENT();
J2OBJC_ENUM_CONSTANT(JavaxLangModelElementModifier, TRANSIENT)

inline JavaxLangModelElementModifier *JavaxLangModelElementModifier_get_VOLATILE();
J2OBJC_ENUM_CONSTANT(JavaxLangModelElementModifier, VOLATILE)

inline JavaxLangModelElementModifier *JavaxLangModelElementModifier_get_SYNCHRONIZED();
J2OBJC_ENUM_CONSTANT(JavaxLangModelElementModifier, SYNCHRONIZED)

inline JavaxLangModelElementModifier *JavaxLangModelElementModifier_get_NATIVE();
J2OBJC_ENUM_CONSTANT(JavaxLangModelElementModifier, NATIVE)

inline JavaxLangModelElementModifier *JavaxLangModelElementModifier_get_STRICTFP();
J2OBJC_ENUM_CONSTANT(JavaxLangModelElementModifier, STRICTFP)

FOUNDATION_EXPORT IOSObjectArray *JavaxLangModelElementModifier_values();

FOUNDATION_EXPORT JavaxLangModelElementModifier *JavaxLangModelElementModifier_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT JavaxLangModelElementModifier *JavaxLangModelElementModifier_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(JavaxLangModelElementModifier)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaxLangModelElementModifier")
