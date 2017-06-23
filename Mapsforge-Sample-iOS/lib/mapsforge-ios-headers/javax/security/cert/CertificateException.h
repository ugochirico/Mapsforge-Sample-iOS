//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/security/cert/CertificateException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxSecurityCertCertificateException")
#ifdef RESTRICT_JavaxSecurityCertCertificateException
#define INCLUDE_ALL_JavaxSecurityCertCertificateException 0
#else
#define INCLUDE_ALL_JavaxSecurityCertCertificateException 1
#endif
#undef RESTRICT_JavaxSecurityCertCertificateException

#if !defined (JavaxSecurityCertCertificateException_) && (INCLUDE_ALL_JavaxSecurityCertCertificateException || defined(INCLUDE_JavaxSecurityCertCertificateException))
#define JavaxSecurityCertCertificateException_

#define RESTRICT_JavaLangException 1
#define INCLUDE_JavaLangException 1
#include "java/lang/Exception.h"

/*!
 @brief The base class for all <code>Certificate</code> related exceptions.
 <p>
  Note: This package is provided only for compatibility reasons. It contains a
  simplified version of the java.security.cert package that was previously used
  by JSSE (Java SSL package). All applications that do not have to be
  compatible with older versions of JSSE (that is before Java SDK 1.5) should
  only use java.security.cert.
 */
@interface JavaxSecurityCertCertificateException : JavaLangException

#pragma mark Public

/*!
 @brief Creates a new <code>CertificateException</code>.
 */
- (instancetype)init;

/*!
 @brief Creates a new <code>CertificateException</code> with the specified message.
 @param msg the detail message for the exception.
 */
- (instancetype)initWithNSString:(NSString *)msg;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxSecurityCertCertificateException)

FOUNDATION_EXPORT void JavaxSecurityCertCertificateException_initWithNSString_(JavaxSecurityCertCertificateException *self, NSString *msg);

FOUNDATION_EXPORT JavaxSecurityCertCertificateException *new_JavaxSecurityCertCertificateException_initWithNSString_(NSString *msg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxSecurityCertCertificateException *create_JavaxSecurityCertCertificateException_initWithNSString_(NSString *msg);

FOUNDATION_EXPORT void JavaxSecurityCertCertificateException_init(JavaxSecurityCertCertificateException *self);

FOUNDATION_EXPORT JavaxSecurityCertCertificateException *new_JavaxSecurityCertCertificateException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxSecurityCertCertificateException *create_JavaxSecurityCertCertificateException_init();

J2OBJC_TYPE_LITERAL_HEADER(JavaxSecurityCertCertificateException)

#endif

#pragma pop_macro("INCLUDE_ALL_JavaxSecurityCertCertificateException")
