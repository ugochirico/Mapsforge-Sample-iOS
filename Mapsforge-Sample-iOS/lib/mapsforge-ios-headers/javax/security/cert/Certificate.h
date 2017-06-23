//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/security/cert/Certificate.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxSecurityCertCertificate")
#ifdef RESTRICT_JavaxSecurityCertCertificate
#define INCLUDE_ALL_JavaxSecurityCertCertificate 0
#else
#define INCLUDE_ALL_JavaxSecurityCertCertificate 1
#endif
#undef RESTRICT_JavaxSecurityCertCertificate

#if !defined (JavaxSecurityCertCertificate_) && (INCLUDE_ALL_JavaxSecurityCertCertificate || defined(INCLUDE_JavaxSecurityCertCertificate))
#define JavaxSecurityCertCertificate_

@class IOSByteArray;
@protocol JavaSecurityPublicKey;

/*!
 @brief Abstract class to represent identity certificates.It represents a way to
  verify the binding of a Principal and its public key.
 Examples are X.509,
  PGP, and SDSI. 
 <p>
  Note: This package is provided only for compatibility reasons.
  It contains a simplified version of the java.security.cert package that was
  previously used by JSSE (Java SSL package). All applications that do not have
  to be compatible with older versions of JSSE (that is before Java SDK 1.5)
  should only use java.security.cert.
 */
@interface JavaxSecurityCertCertificate : NSObject

#pragma mark Public

/*!
 @brief Creates a new <code>Certificate</code>.
 */
- (instancetype)init;

/*!
 @brief Compares the argument to this Certificate.If both have the same bytes
  they are assumed to be equal.
 @param obj the 
 <code>Certificate</code>  to compare with this object
 @return <code>true</code> if <code>obj</code> is the same as this
          <code>Certificate</code>, <code>false</code> otherwise
 - seealso: #hashCode
 */
- (jboolean)isEqual:(id)obj;

/*!
 @brief Returns the encoded representation for this certificate.
 @return the encoded representation for this certificate.
 @throw CertificateEncodingException
 if encoding fails.
 */
- (IOSByteArray *)getEncoded;

/*!
 @brief Returns the public key corresponding to this certificate.
 @return the public key corresponding to this certificate.
 */
- (id<JavaSecurityPublicKey>)getPublicKey;

/*!
 @brief Returns an integer hash code for the receiver.Any two objects which
  return <code>true</code> when passed to <code>equals</code> must answer
  the same value for this method.
 @return the receiver's hash
 - seealso: #equals
 */
- (NSUInteger)hash;

/*!
 @brief Returns a string containing a concise, human-readable description of the
  receiver.
 @return a printable representation for the receiver.
 */
- (NSString *)description;

/*!
 @brief Verifies that this certificate was signed with the given public key.
 @param key public key for which verification should be performed.
 @throw CertificateException
 if encoding errors are detected
 @throw NoSuchAlgorithmException
 if an unsupported algorithm is detected
 @throw InvalidKeyException
 if an invalid key is detected
 @throw NoSuchProviderException
 if there is no default provider
 @throw SignatureException
 if signature errors are detected
 */
- (void)verifyWithJavaSecurityPublicKey:(id<JavaSecurityPublicKey>)key;

/*!
 @brief Verifies that this certificate was signed with the given public key.Uses
  the signature algorithm given by the provider.
 @param key public key for which verification should be performed.
 @param sigProvider the name of the signature provider.
 @throw CertificateException
 if encoding errors are detected
 @throw NoSuchAlgorithmException
 if an unsupported algorithm is detected
 @throw InvalidKeyException
 if an invalid key is detected
 @throw NoSuchProviderException
 if the specified provider does not exists.
 @throw SignatureException
 if signature errors are detected
 */
- (void)verifyWithJavaSecurityPublicKey:(id<JavaSecurityPublicKey>)key
                           withNSString:(NSString *)sigProvider;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxSecurityCertCertificate)

FOUNDATION_EXPORT void JavaxSecurityCertCertificate_init(JavaxSecurityCertCertificate *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaxSecurityCertCertificate)

#endif

#pragma pop_macro("INCLUDE_ALL_JavaxSecurityCertCertificate")
