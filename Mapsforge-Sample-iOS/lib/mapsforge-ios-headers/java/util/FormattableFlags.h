//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/FormattableFlags.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilFormattableFlags")
#ifdef RESTRICT_JavaUtilFormattableFlags
#define INCLUDE_ALL_JavaUtilFormattableFlags 0
#else
#define INCLUDE_ALL_JavaUtilFormattableFlags 1
#endif
#undef RESTRICT_JavaUtilFormattableFlags

#if !defined (JavaUtilFormattableFlags_) && (INCLUDE_ALL_JavaUtilFormattableFlags || defined(INCLUDE_JavaUtilFormattableFlags))
#define JavaUtilFormattableFlags_

/*!
 @brief FormattableFlags are used as a parameter to 
 <code>int, int, int)</code> and change the output
  format in <code>Formattable</code>s.The validation and interpretation of the
  flags must be done by the implementations.
 - seealso: Formattable
 */
@interface JavaUtilFormattableFlags : NSObject

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilFormattableFlags)

/*!
 @brief Denotes the output is to be left-justified.In order to fill the minimum width requirement, spaces(' ') will be appended at the end of the
  specified output element.
 If no such flag is set, the output is
  right-justified. The flag corresponds to '-' ('-') in the format specifier.
 */
inline jint JavaUtilFormattableFlags_get_LEFT_JUSTIFY();
#define JavaUtilFormattableFlags_LEFT_JUSTIFY 1
J2OBJC_STATIC_FIELD_CONSTANT(JavaUtilFormattableFlags, LEFT_JUSTIFY, jint)

/*!
 @brief Denotes the output is to be converted to upper case in the way the locale
  parameter of Formatter.formatTo() requires.The output has the same
  effect as <code>String.toUpperCase(java.util.Locale)</code>.
 This flag corresponds to <code>'^' ('^')</code> in the format specifier.
 */
inline jint JavaUtilFormattableFlags_get_UPPERCASE();
#define JavaUtilFormattableFlags_UPPERCASE 2
J2OBJC_STATIC_FIELD_CONSTANT(JavaUtilFormattableFlags, UPPERCASE, jint)

/*!
 @brief Denotes the output is to be formatted in an alternate form.The definition
  of the alternate form is determined by the <code>Formattable</code>.
 This flag corresponds to <code>'#' ('#')</code> in the format specifier.
 */
inline jint JavaUtilFormattableFlags_get_ALTERNATE();
#define JavaUtilFormattableFlags_ALTERNATE 4
J2OBJC_STATIC_FIELD_CONSTANT(JavaUtilFormattableFlags, ALTERNATE, jint)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilFormattableFlags)

#endif

#pragma pop_macro("INCLUDE_ALL_JavaUtilFormattableFlags")
