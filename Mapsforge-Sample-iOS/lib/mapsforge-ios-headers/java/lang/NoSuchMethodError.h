//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/lang/NoSuchMethodError.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangNoSuchMethodError")
#ifdef RESTRICT_JavaLangNoSuchMethodError
#define INCLUDE_ALL_JavaLangNoSuchMethodError 0
#else
#define INCLUDE_ALL_JavaLangNoSuchMethodError 1
#endif
#undef RESTRICT_JavaLangNoSuchMethodError

#if !defined (JavaLangNoSuchMethodError_) && (INCLUDE_ALL_JavaLangNoSuchMethodError || defined(INCLUDE_JavaLangNoSuchMethodError))
#define JavaLangNoSuchMethodError_

#define RESTRICT_JavaLangIncompatibleClassChangeError 1
#define INCLUDE_JavaLangIncompatibleClassChangeError 1
#include "java/lang/IncompatibleClassChangeError.h"

/*!
 @brief Thrown if an application tries to call a specified method of a
  class (either static or instance), and that class no longer has a
  definition of that method.
 <p>
  Normally, this error is caught by the compiler; this error can
  only occur at run time if the definition of a class has
  incompatibly changed.
 @author unascribed
 @since JDK1.0
 */
@interface JavaLangNoSuchMethodError : JavaLangIncompatibleClassChangeError

#pragma mark Public

/*!
 @brief Constructs a <code>NoSuchMethodError</code> with no detail message.
 */
- (instancetype)init;

/*!
 @brief Constructs a <code>NoSuchMethodError</code> with the
  specified detail message.
 @param s the detail message.
 */
- (instancetype)initWithNSString:(NSString *)s;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangNoSuchMethodError)

FOUNDATION_EXPORT void JavaLangNoSuchMethodError_init(JavaLangNoSuchMethodError *self);

FOUNDATION_EXPORT JavaLangNoSuchMethodError *new_JavaLangNoSuchMethodError_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangNoSuchMethodError *create_JavaLangNoSuchMethodError_init();

FOUNDATION_EXPORT void JavaLangNoSuchMethodError_initWithNSString_(JavaLangNoSuchMethodError *self, NSString *s);

FOUNDATION_EXPORT JavaLangNoSuchMethodError *new_JavaLangNoSuchMethodError_initWithNSString_(NSString *s) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangNoSuchMethodError *create_JavaLangNoSuchMethodError_initWithNSString_(NSString *s);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangNoSuchMethodError)

#endif

#pragma pop_macro("INCLUDE_ALL_JavaLangNoSuchMethodError")
