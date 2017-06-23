//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/ProviderException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityProviderException")
#ifdef RESTRICT_JavaSecurityProviderException
#define INCLUDE_ALL_JavaSecurityProviderException 0
#else
#define INCLUDE_ALL_JavaSecurityProviderException 1
#endif
#undef RESTRICT_JavaSecurityProviderException

#if !defined (JavaSecurityProviderException_) && (INCLUDE_ALL_JavaSecurityProviderException || defined(INCLUDE_JavaSecurityProviderException))
#define JavaSecurityProviderException_

#define RESTRICT_JavaLangRuntimeException 1
#define INCLUDE_JavaLangRuntimeException 1
#include "java/lang/RuntimeException.h"

/*!
 @brief A runtime exception for Provider exceptions (such as
  misconfiguration errors or unrecoverable internal errors),
  which may be subclassed by Providers to
  throw specialized, provider-specific runtime errors.
 @author Benjamin Renaud
 */
@interface JavaSecurityProviderException : JavaLangRuntimeException

#pragma mark Public

/*!
 @brief Constructs a ProviderException with no detail message.A
  detail message is a String that describes this particular
  exception.
 */
- (instancetype)init;

/*!
 @brief Constructs a ProviderException with the specified detail
  message.A detail message is a String that describes this
  particular exception.
 @param s the detail message.
 */
- (instancetype)initWithNSString:(NSString *)s;

/*!
 @brief Creates a <code>ProviderException</code> with the specified
  detail message and cause.
 @param message the detail message (which is saved for later retrieval         by the 
 <code>getMessage()</code>  method).
 @param cause the cause (which is saved for later retrieval by the         
 <code>getCause()</code>  method).  (A  <tt> null </tt>  value is permitted,         and indicates that the cause is nonexistent or unknown.)
 @since 1.5
 */
- (instancetype)initWithNSString:(NSString *)message
                 withNSException:(NSException *)cause;
#define withJavaLangThrowable withNSException

/*!
 @brief Creates a <code>ProviderException</code> with the specified cause
  and a detail message of <tt>(cause==null ?
 null : cause.toString())</tt>
  (which typically contains the class and detail message of 
 <tt>cause</tt>).
 @param cause the cause (which is saved for later retrieval by the         
 <code>getCause()</code>  method).  (A  <tt> null </tt>  value is permitted,         and indicates that the cause is nonexistent or unknown.)
 @since 1.5
 */
- (instancetype)initWithNSException:(NSException *)cause;
#define initWithJavaLangThrowable initWithNSException

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityProviderException)

FOUNDATION_EXPORT void JavaSecurityProviderException_init(JavaSecurityProviderException *self);

FOUNDATION_EXPORT JavaSecurityProviderException *new_JavaSecurityProviderException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityProviderException *create_JavaSecurityProviderException_init();

FOUNDATION_EXPORT void JavaSecurityProviderException_initWithNSString_(JavaSecurityProviderException *self, NSString *s);

FOUNDATION_EXPORT JavaSecurityProviderException *new_JavaSecurityProviderException_initWithNSString_(NSString *s) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityProviderException *create_JavaSecurityProviderException_initWithNSString_(NSString *s);

FOUNDATION_EXPORT void JavaSecurityProviderException_initWithNSString_withNSException_(JavaSecurityProviderException *self, NSString *message, NSException *cause);

FOUNDATION_EXPORT JavaSecurityProviderException *new_JavaSecurityProviderException_initWithNSString_withNSException_(NSString *message, NSException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityProviderException *create_JavaSecurityProviderException_initWithNSString_withNSException_(NSString *message, NSException *cause);

FOUNDATION_EXPORT void JavaSecurityProviderException_initWithNSException_(JavaSecurityProviderException *self, NSException *cause);

FOUNDATION_EXPORT JavaSecurityProviderException *new_JavaSecurityProviderException_initWithNSException_(NSException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityProviderException *create_JavaSecurityProviderException_initWithNSException_(NSException *cause);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityProviderException)

#endif

#pragma pop_macro("INCLUDE_ALL_JavaSecurityProviderException")
