//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/io/IOError.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaIoIOError")
#ifdef RESTRICT_JavaIoIOError
#define INCLUDE_ALL_JavaIoIOError 0
#else
#define INCLUDE_ALL_JavaIoIOError 1
#endif
#undef RESTRICT_JavaIoIOError

#if !defined (JavaIoIOError_) && (INCLUDE_ALL_JavaIoIOError || defined(INCLUDE_JavaIoIOError))
#define JavaIoIOError_

#define RESTRICT_JavaLangError 1
#define INCLUDE_JavaLangError 1
#include "java/lang/Error.h"

/*!
 @brief Thrown when a serious I/O error has occurred.
 @author Xueming Shen
 @since 1.6
 */
@interface JavaIoIOError : JavaLangError

#pragma mark Public

/*!
 @brief Constructs a new instance of IOError with the specified cause.The
  IOError is created with the detail message of 
 <tt>(cause==null ?
 null : cause.toString())</tt> (which typically
  contains the class and detail message of cause).
 @param cause The cause of this error, or 
  <tt> null </tt>  if the cause          is not known
 */
- (instancetype)initWithNSException:(NSException *)cause;
#define initWithJavaLangThrowable initWithNSException

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoIOError)

FOUNDATION_EXPORT void JavaIoIOError_initWithNSException_(JavaIoIOError *self, NSException *cause);

FOUNDATION_EXPORT JavaIoIOError *new_JavaIoIOError_initWithNSException_(NSException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoIOError *create_JavaIoIOError_initWithNSException_(NSException *cause);

J2OBJC_TYPE_LITERAL_HEADER(JavaIoIOError)

#endif

#pragma pop_macro("INCLUDE_ALL_JavaIoIOError")
