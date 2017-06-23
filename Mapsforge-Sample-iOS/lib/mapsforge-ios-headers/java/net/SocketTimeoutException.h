//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/net/SocketTimeoutException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNetSocketTimeoutException")
#ifdef RESTRICT_JavaNetSocketTimeoutException
#define INCLUDE_ALL_JavaNetSocketTimeoutException 0
#else
#define INCLUDE_ALL_JavaNetSocketTimeoutException 1
#endif
#undef RESTRICT_JavaNetSocketTimeoutException

#if !defined (JavaNetSocketTimeoutException_) && (INCLUDE_ALL_JavaNetSocketTimeoutException || defined(INCLUDE_JavaNetSocketTimeoutException))
#define JavaNetSocketTimeoutException_

#define RESTRICT_JavaIoInterruptedIOException 1
#define INCLUDE_JavaIoInterruptedIOException 1
#include "java/io/InterruptedIOException.h"

/*!
 @brief Signals that a timeout has occurred on a socket read or accept.
 @since 1.4
 */
@interface JavaNetSocketTimeoutException : JavaIoInterruptedIOException

#pragma mark Public

/*!
 @brief Construct a new SocketTimeoutException with no detailed message.
 */
- (instancetype)init;

/*!
 @brief Constructs a new SocketTimeoutException with a detail
  message.
 @param msg the detail message
 */
- (instancetype)initWithNSString:(NSString *)msg;

/*!
 */
- (instancetype)initWithNSString:(NSString *)msg
                 withNSException:(NSException *)cause;
#define withJavaLangThrowable withNSException

/*!
 */
- (instancetype)initWithNSException:(NSException *)cause;
#define initWithJavaLangThrowable initWithNSException

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetSocketTimeoutException)

FOUNDATION_EXPORT void JavaNetSocketTimeoutException_initWithNSString_(JavaNetSocketTimeoutException *self, NSString *msg);

FOUNDATION_EXPORT JavaNetSocketTimeoutException *new_JavaNetSocketTimeoutException_initWithNSString_(NSString *msg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetSocketTimeoutException *create_JavaNetSocketTimeoutException_initWithNSString_(NSString *msg);

FOUNDATION_EXPORT void JavaNetSocketTimeoutException_init(JavaNetSocketTimeoutException *self);

FOUNDATION_EXPORT JavaNetSocketTimeoutException *new_JavaNetSocketTimeoutException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetSocketTimeoutException *create_JavaNetSocketTimeoutException_init();

FOUNDATION_EXPORT void JavaNetSocketTimeoutException_initWithNSException_(JavaNetSocketTimeoutException *self, NSException *cause);

FOUNDATION_EXPORT JavaNetSocketTimeoutException *new_JavaNetSocketTimeoutException_initWithNSException_(NSException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetSocketTimeoutException *create_JavaNetSocketTimeoutException_initWithNSException_(NSException *cause);

FOUNDATION_EXPORT void JavaNetSocketTimeoutException_initWithNSString_withNSException_(JavaNetSocketTimeoutException *self, NSString *msg, NSException *cause);

FOUNDATION_EXPORT JavaNetSocketTimeoutException *new_JavaNetSocketTimeoutException_initWithNSString_withNSException_(NSString *msg, NSException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetSocketTimeoutException *create_JavaNetSocketTimeoutException_initWithNSString_withNSException_(NSString *msg, NSException *cause);

J2OBJC_TYPE_LITERAL_HEADER(JavaNetSocketTimeoutException)

#endif

#pragma pop_macro("INCLUDE_ALL_JavaNetSocketTimeoutException")
