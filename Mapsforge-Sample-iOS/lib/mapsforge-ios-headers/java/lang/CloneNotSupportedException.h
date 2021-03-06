//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/lang/CloneNotSupportedException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangCloneNotSupportedException")
#ifdef RESTRICT_JavaLangCloneNotSupportedException
#define INCLUDE_ALL_JavaLangCloneNotSupportedException 0
#else
#define INCLUDE_ALL_JavaLangCloneNotSupportedException 1
#endif
#undef RESTRICT_JavaLangCloneNotSupportedException

#if !defined (JavaLangCloneNotSupportedException_) && (INCLUDE_ALL_JavaLangCloneNotSupportedException || defined(INCLUDE_JavaLangCloneNotSupportedException))
#define JavaLangCloneNotSupportedException_

#define RESTRICT_JavaLangException 1
#define INCLUDE_JavaLangException 1
#include "java/lang/Exception.h"

/*!
 @brief Thrown to indicate that the <code>clone</code> method in class 
 <code>Object</code> has been called to clone an object, but that
  the object's class does not implement the <code>Cloneable</code>
  interface.
 <p>
  Applications that override the <code>clone</code> method can also
  throw this exception to indicate that an object could not or
  should not be cloned.
 @author unascribed
 - seealso: java.lang.Cloneable
 - seealso: java.lang.Object
 @since JDK1.0
 */
@interface JavaLangCloneNotSupportedException : JavaLangException

#pragma mark Public

/*!
 @brief Constructs a <code>CloneNotSupportedException</code> with no
  detail message.
 */
- (instancetype)init;

/*!
 @brief Constructs a <code>CloneNotSupportedException</code> with the
  specified detail message.
 @param s the detail message.
 */
- (instancetype)initWithNSString:(NSString *)s;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangCloneNotSupportedException)

FOUNDATION_EXPORT void JavaLangCloneNotSupportedException_init(JavaLangCloneNotSupportedException *self);

FOUNDATION_EXPORT JavaLangCloneNotSupportedException *new_JavaLangCloneNotSupportedException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangCloneNotSupportedException *create_JavaLangCloneNotSupportedException_init();

FOUNDATION_EXPORT void JavaLangCloneNotSupportedException_initWithNSString_(JavaLangCloneNotSupportedException *self, NSString *s);

FOUNDATION_EXPORT JavaLangCloneNotSupportedException *new_JavaLangCloneNotSupportedException_initWithNSString_(NSString *s) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangCloneNotSupportedException *create_JavaLangCloneNotSupportedException_initWithNSString_(NSString *s);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangCloneNotSupportedException)

#endif

#pragma pop_macro("INCLUDE_ALL_JavaLangCloneNotSupportedException")
