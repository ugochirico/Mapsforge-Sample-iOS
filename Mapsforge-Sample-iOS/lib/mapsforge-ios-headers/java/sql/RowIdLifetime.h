//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/sql/RowIdLifetime.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSqlRowIdLifetime")
#ifdef RESTRICT_JavaSqlRowIdLifetime
#define INCLUDE_ALL_JavaSqlRowIdLifetime 0
#else
#define INCLUDE_ALL_JavaSqlRowIdLifetime 1
#endif
#undef RESTRICT_JavaSqlRowIdLifetime

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaSqlRowIdLifetime_) && (INCLUDE_ALL_JavaSqlRowIdLifetime || defined(INCLUDE_JavaSqlRowIdLifetime))
#define JavaSqlRowIdLifetime_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, JavaSqlRowIdLifetime_Enum) {
  JavaSqlRowIdLifetime_Enum_ROWID_UNSUPPORTED = 0,
  JavaSqlRowIdLifetime_Enum_ROWID_VALID_OTHER = 1,
  JavaSqlRowIdLifetime_Enum_ROWID_VALID_SESSION = 2,
  JavaSqlRowIdLifetime_Enum_ROWID_VALID_TRANSACTION = 3,
  JavaSqlRowIdLifetime_Enum_ROWID_VALID_FOREVER = 4,
};

/*!
 @brief Enumeration for RowId life-time values.
 @since 1.6
 */
@interface JavaSqlRowIdLifetime : JavaLangEnum < NSCopying >

#pragma mark Public

+ (JavaSqlRowIdLifetime *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (id)copyWithZone:(NSZone *)zone;

@end

J2OBJC_STATIC_INIT(JavaSqlRowIdLifetime)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT JavaSqlRowIdLifetime *JavaSqlRowIdLifetime_values_[];

/*!
 @brief Indicates that this data source does not support the ROWID type.
 */
inline JavaSqlRowIdLifetime *JavaSqlRowIdLifetime_get_ROWID_UNSUPPORTED();
J2OBJC_ENUM_CONSTANT(JavaSqlRowIdLifetime, ROWID_UNSUPPORTED)

/*!
 @brief Indicates that the lifetime of a RowId from this data source is indeterminate;
  but not one of ROWID_VALID_TRANSACTION, ROWID_VALID_SESSION, or,
  ROWID_VALID_FOREVER.
 */
inline JavaSqlRowIdLifetime *JavaSqlRowIdLifetime_get_ROWID_VALID_OTHER();
J2OBJC_ENUM_CONSTANT(JavaSqlRowIdLifetime, ROWID_VALID_OTHER)

/*!
 @brief Indicates that the lifetime of a RowId from this data source is at least the
  containing session.
 */
inline JavaSqlRowIdLifetime *JavaSqlRowIdLifetime_get_ROWID_VALID_SESSION();
J2OBJC_ENUM_CONSTANT(JavaSqlRowIdLifetime, ROWID_VALID_SESSION)

/*!
 @brief Indicates that the lifetime of a RowId from this data source is at least the
  containing transaction.
 */
inline JavaSqlRowIdLifetime *JavaSqlRowIdLifetime_get_ROWID_VALID_TRANSACTION();
J2OBJC_ENUM_CONSTANT(JavaSqlRowIdLifetime, ROWID_VALID_TRANSACTION)

/*!
 @brief Indicates that the lifetime of a RowId from this data source is, effectively,
  unlimited.
 */
inline JavaSqlRowIdLifetime *JavaSqlRowIdLifetime_get_ROWID_VALID_FOREVER();
J2OBJC_ENUM_CONSTANT(JavaSqlRowIdLifetime, ROWID_VALID_FOREVER)

FOUNDATION_EXPORT IOSObjectArray *JavaSqlRowIdLifetime_values();

FOUNDATION_EXPORT JavaSqlRowIdLifetime *JavaSqlRowIdLifetime_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT JavaSqlRowIdLifetime *JavaSqlRowIdLifetime_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(JavaSqlRowIdLifetime)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaSqlRowIdLifetime")
