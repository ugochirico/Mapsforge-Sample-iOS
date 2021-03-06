//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/lang/IllegalAccessException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangIllegalAccessException")
#ifdef RESTRICT_JavaLangIllegalAccessException
#define INCLUDE_ALL_JavaLangIllegalAccessException 0
#else
#define INCLUDE_ALL_JavaLangIllegalAccessException 1
#endif
#undef RESTRICT_JavaLangIllegalAccessException

#if !defined (JavaLangIllegalAccessException_) && (INCLUDE_ALL_JavaLangIllegalAccessException || defined(INCLUDE_JavaLangIllegalAccessException))
#define JavaLangIllegalAccessException_

#define RESTRICT_JavaLangReflectiveOperationException 1
#define INCLUDE_JavaLangReflectiveOperationException 1
#include "java/lang/ReflectiveOperationException.h"

/*!
 @brief An IllegalAccessException is thrown when an application tries
  to reflectively create an instance (other than an array),
  set or get a field, or invoke a method, but the currently
  executing method does not have access to the definition of
  the specified class, field, method or constructor.
 @author unascribed
 - seealso: Class#newInstance()
 - seealso: java.lang.reflect.Field
 - seealso: java.lang.reflect.Field
 - seealso: java.lang.reflect.Field
 - seealso: java.lang.reflect.Field
 - seealso: java.lang.reflect.Field
 - seealso: java.lang.reflect.Field
 - seealso: java.lang.reflect.Field
 - seealso: java.lang.reflect.Field
 - seealso: java.lang.reflect.Field
 - seealso: java.lang.reflect.Field
 - seealso: java.lang.reflect.Field
 - seealso: java.lang.reflect.Field
 - seealso: java.lang.reflect.Field
 - seealso: java.lang.reflect.Field
 - seealso: java.lang.reflect.Field
 - seealso: java.lang.reflect.Field
 - seealso: java.lang.reflect.Field
 - seealso: java.lang.reflect.Field
 - seealso: java.lang.reflect.Method
 - seealso: java.lang.reflect.Constructor
 @since JDK1.0
 */
@interface JavaLangIllegalAccessException : JavaLangReflectiveOperationException

#pragma mark Public

/*!
 @brief Constructs an <code>IllegalAccessException</code> without a
  detail message.
 */
- (instancetype)init;

/*!
 @brief Constructs an <code>IllegalAccessException</code> with a detail message.
 @param s the detail message.
 */
- (instancetype)initWithNSString:(NSString *)s;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangIllegalAccessException)

FOUNDATION_EXPORT void JavaLangIllegalAccessException_init(JavaLangIllegalAccessException *self);

FOUNDATION_EXPORT JavaLangIllegalAccessException *new_JavaLangIllegalAccessException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangIllegalAccessException *create_JavaLangIllegalAccessException_init();

FOUNDATION_EXPORT void JavaLangIllegalAccessException_initWithNSString_(JavaLangIllegalAccessException *self, NSString *s);

FOUNDATION_EXPORT JavaLangIllegalAccessException *new_JavaLangIllegalAccessException_initWithNSString_(NSString *s) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangIllegalAccessException *create_JavaLangIllegalAccessException_initWithNSString_(NSString *s);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangIllegalAccessException)

#endif

#pragma pop_macro("INCLUDE_ALL_JavaLangIllegalAccessException")
