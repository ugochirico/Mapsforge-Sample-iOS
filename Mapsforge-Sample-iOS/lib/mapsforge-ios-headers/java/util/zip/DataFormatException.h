//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/zip/DataFormatException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilZipDataFormatException")
#ifdef RESTRICT_JavaUtilZipDataFormatException
#define INCLUDE_ALL_JavaUtilZipDataFormatException 0
#else
#define INCLUDE_ALL_JavaUtilZipDataFormatException 1
#endif
#undef RESTRICT_JavaUtilZipDataFormatException

#if !defined (JavaUtilZipDataFormatException_) && (INCLUDE_ALL_JavaUtilZipDataFormatException || defined(INCLUDE_JavaUtilZipDataFormatException))
#define JavaUtilZipDataFormatException_

#define RESTRICT_JavaLangException 1
#define INCLUDE_JavaLangException 1
#include "java/lang/Exception.h"

/*!
 @brief Signals that a data format error has occurred.
 @author David Connelly
 */
@interface JavaUtilZipDataFormatException : JavaLangException

#pragma mark Public

/*!
 @brief Constructs a DataFormatException with no detail message.
 */
- (instancetype)init;

/*!
 @brief Constructs a DataFormatException with the specified detail message.
 A detail message is a String that describes this particular exception.
 @param s the String containing a detail message
 */
- (instancetype)initWithNSString:(NSString *)s;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilZipDataFormatException)

FOUNDATION_EXPORT void JavaUtilZipDataFormatException_init(JavaUtilZipDataFormatException *self);

FOUNDATION_EXPORT JavaUtilZipDataFormatException *new_JavaUtilZipDataFormatException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilZipDataFormatException *create_JavaUtilZipDataFormatException_init();

FOUNDATION_EXPORT void JavaUtilZipDataFormatException_initWithNSString_(JavaUtilZipDataFormatException *self, NSString *s);

FOUNDATION_EXPORT JavaUtilZipDataFormatException *new_JavaUtilZipDataFormatException_initWithNSString_(NSString *s) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilZipDataFormatException *create_JavaUtilZipDataFormatException_initWithNSString_(NSString *s);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilZipDataFormatException)

#endif

#pragma pop_macro("INCLUDE_ALL_JavaUtilZipDataFormatException")
