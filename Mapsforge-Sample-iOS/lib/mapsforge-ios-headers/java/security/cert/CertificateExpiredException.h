//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/cert/CertificateExpiredException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityCertCertificateExpiredException")
#ifdef RESTRICT_JavaSecurityCertCertificateExpiredException
#define INCLUDE_ALL_JavaSecurityCertCertificateExpiredException 0
#else
#define INCLUDE_ALL_JavaSecurityCertCertificateExpiredException 1
#endif
#undef RESTRICT_JavaSecurityCertCertificateExpiredException

#if !defined (JavaSecurityCertCertificateExpiredException_) && (INCLUDE_ALL_JavaSecurityCertCertificateExpiredException || defined(INCLUDE_JavaSecurityCertCertificateExpiredException))
#define JavaSecurityCertCertificateExpiredException_

#define RESTRICT_JavaSecurityCertCertificateException 1
#define INCLUDE_JavaSecurityCertCertificateException 1
#include "java/security/cert/CertificateException.h"

/*!
 @brief Certificate Expired Exception.This is thrown whenever the current 
 <code>Date</code> or the specified <code>Date</code> is after the 
 <code>notAfter</code> date/time specified in the validity period
  of the certificate.
 @author Hemma Prafullchandra
 */
@interface JavaSecurityCertCertificateExpiredException : JavaSecurityCertCertificateException

#pragma mark Public

/*!
 @brief Constructs a CertificateExpiredException with no detail message.A
  detail message is a String that describes this particular
  exception.
 */
- (instancetype)init;

/*!
 @brief Constructs a CertificateExpiredException with the specified detail
  message.A detail message is a String that describes this
  particular exception.
 @param message the detail message.
 */
- (instancetype)initWithNSString:(NSString *)message;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityCertCertificateExpiredException)

FOUNDATION_EXPORT void JavaSecurityCertCertificateExpiredException_init(JavaSecurityCertCertificateExpiredException *self);

FOUNDATION_EXPORT JavaSecurityCertCertificateExpiredException *new_JavaSecurityCertCertificateExpiredException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityCertCertificateExpiredException *create_JavaSecurityCertCertificateExpiredException_init();

FOUNDATION_EXPORT void JavaSecurityCertCertificateExpiredException_initWithNSString_(JavaSecurityCertCertificateExpiredException *self, NSString *message);

FOUNDATION_EXPORT JavaSecurityCertCertificateExpiredException *new_JavaSecurityCertCertificateExpiredException_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityCertCertificateExpiredException *create_JavaSecurityCertCertificateExpiredException_initWithNSString_(NSString *message);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityCertCertificateExpiredException)

#endif

#pragma pop_macro("INCLUDE_ALL_JavaSecurityCertCertificateExpiredException")
