//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/lang/AbstractMethodError.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangAbstractMethodError")
#ifdef RESTRICT_JavaLangAbstractMethodError
#define INCLUDE_ALL_JavaLangAbstractMethodError 0
#else
#define INCLUDE_ALL_JavaLangAbstractMethodError 1
#endif
#undef RESTRICT_JavaLangAbstractMethodError

#if !defined (JavaLangAbstractMethodError_) && (INCLUDE_ALL_JavaLangAbstractMethodError || defined(INCLUDE_JavaLangAbstractMethodError))
#define JavaLangAbstractMethodError_

#define RESTRICT_JavaLangIncompatibleClassChangeError 1
#define INCLUDE_JavaLangIncompatibleClassChangeError 1
#include "java/lang/IncompatibleClassChangeError.h"

/*!
 @brief Thrown when an application tries to call an abstract method.
 Normally, this error is caught by the compiler; this error can
  only occur at run time if the definition of some class has
  incompatibly changed since the currently executing method was last
  compiled.
 @author unascribed
 @since JDK1.0
 */
@interface JavaLangAbstractMethodError : JavaLangIncompatibleClassChangeError

#pragma mark Public

/*!
 @brief Constructs an <code>AbstractMethodError</code> with no detail  message.
 */
- (instancetype)init;

/*!
 @brief Constructs an <code>AbstractMethodError</code> with the specified
  detail message.
 @param s the detail message.
 */
- (instancetype)initWithNSString:(NSString *)s;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangAbstractMethodError)

FOUNDATION_EXPORT void JavaLangAbstractMethodError_init(JavaLangAbstractMethodError *self);

FOUNDATION_EXPORT JavaLangAbstractMethodError *new_JavaLangAbstractMethodError_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangAbstractMethodError *create_JavaLangAbstractMethodError_init();

FOUNDATION_EXPORT void JavaLangAbstractMethodError_initWithNSString_(JavaLangAbstractMethodError *self, NSString *s);

FOUNDATION_EXPORT JavaLangAbstractMethodError *new_JavaLangAbstractMethodError_initWithNSString_(NSString *s) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangAbstractMethodError *create_JavaLangAbstractMethodError_initWithNSString_(NSString *s);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangAbstractMethodError)

#endif

#pragma pop_macro("INCLUDE_ALL_JavaLangAbstractMethodError")
