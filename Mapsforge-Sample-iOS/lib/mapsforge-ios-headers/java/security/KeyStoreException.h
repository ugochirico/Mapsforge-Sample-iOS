//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/KeyStoreException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityKeyStoreException")
#ifdef RESTRICT_JavaSecurityKeyStoreException
#define INCLUDE_ALL_JavaSecurityKeyStoreException 0
#else
#define INCLUDE_ALL_JavaSecurityKeyStoreException 1
#endif
#undef RESTRICT_JavaSecurityKeyStoreException

#if !defined (JavaSecurityKeyStoreException_) && (INCLUDE_ALL_JavaSecurityKeyStoreException || defined(INCLUDE_JavaSecurityKeyStoreException))
#define JavaSecurityKeyStoreException_

#define RESTRICT_JavaSecurityGeneralSecurityException 1
#define INCLUDE_JavaSecurityGeneralSecurityException 1
#include "java/security/GeneralSecurityException.h"

/*!
 @brief This is the generic KeyStore exception.
 @author Jan Luehe
 @since 1.2
 */
@interface JavaSecurityKeyStoreException : JavaSecurityGeneralSecurityException

#pragma mark Public

/*!
 @brief Constructs a KeyStoreException with no detail message.
 (A
  detail message is a String that describes this particular
  exception.)
 */
- (instancetype)init;

/*!
 @brief Constructs a KeyStoreException with the specified detail
  message.
 (A detail message is a String that describes this
  particular exception.)
 @param msg the detail message.
 */
- (instancetype)initWithNSString:(NSString *)msg;

/*!
 @brief Creates a <code>KeyStoreException</code> with the specified
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
 @brief Creates a <code>KeyStoreException</code> with the specified cause
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

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityKeyStoreException)

FOUNDATION_EXPORT void JavaSecurityKeyStoreException_init(JavaSecurityKeyStoreException *self);

FOUNDATION_EXPORT JavaSecurityKeyStoreException *new_JavaSecurityKeyStoreException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityKeyStoreException *create_JavaSecurityKeyStoreException_init();

FOUNDATION_EXPORT void JavaSecurityKeyStoreException_initWithNSString_(JavaSecurityKeyStoreException *self, NSString *msg);

FOUNDATION_EXPORT JavaSecurityKeyStoreException *new_JavaSecurityKeyStoreException_initWithNSString_(NSString *msg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityKeyStoreException *create_JavaSecurityKeyStoreException_initWithNSString_(NSString *msg);

FOUNDATION_EXPORT void JavaSecurityKeyStoreException_initWithNSString_withNSException_(JavaSecurityKeyStoreException *self, NSString *message, NSException *cause);

FOUNDATION_EXPORT JavaSecurityKeyStoreException *new_JavaSecurityKeyStoreException_initWithNSString_withNSException_(NSString *message, NSException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityKeyStoreException *create_JavaSecurityKeyStoreException_initWithNSString_withNSException_(NSString *message, NSException *cause);

FOUNDATION_EXPORT void JavaSecurityKeyStoreException_initWithNSException_(JavaSecurityKeyStoreException *self, NSException *cause);

FOUNDATION_EXPORT JavaSecurityKeyStoreException *new_JavaSecurityKeyStoreException_initWithNSException_(NSException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityKeyStoreException *create_JavaSecurityKeyStoreException_initWithNSException_(NSException *cause);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityKeyStoreException)

#endif

#pragma pop_macro("INCLUDE_ALL_JavaSecurityKeyStoreException")
