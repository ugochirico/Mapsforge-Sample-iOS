//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/spec/KeySpec.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecuritySpecKeySpec")
#ifdef RESTRICT_JavaSecuritySpecKeySpec
#define INCLUDE_ALL_JavaSecuritySpecKeySpec 0
#else
#define INCLUDE_ALL_JavaSecuritySpecKeySpec 1
#endif
#undef RESTRICT_JavaSecuritySpecKeySpec

#if !defined (JavaSecuritySpecKeySpec_) && (INCLUDE_ALL_JavaSecuritySpecKeySpec || defined(INCLUDE_JavaSecuritySpecKeySpec))
#define JavaSecuritySpecKeySpec_

/*!
 @brief A (transparent) specification of the key material
  that constitutes a cryptographic key.
 <p>If the key is stored on a hardware device, its
  specification may contain information that helps identify the key on the
  device. 
 <P> A key may be specified in an algorithm-specific way, or in an
  algorithm-independent encoding format (such as ASN.1).
  For example, a DSA private key may be specified by its components 
 <code>x</code>, <code>p</code>, <code>q</code>, and <code>g</code>
  (see <code>DSAPrivateKeySpec</code>), or it may be
  specified using its DER encoding
  (see <code>PKCS8EncodedKeySpec</code>).
  
 <P> This interface contains no methods or constants. Its only purpose
  is to group (and provide type safety for) all key specifications.
  All key specifications must implement this interface.
 @author Jan Luehe
 - seealso: java.security.Key
 - seealso: java.security.KeyFactory
 - seealso: EncodedKeySpec
 - seealso: X509EncodedKeySpec
 - seealso: PKCS8EncodedKeySpec
 - seealso: DSAPrivateKeySpec
 - seealso: DSAPublicKeySpec
 @since 1.2
 */
@protocol JavaSecuritySpecKeySpec < JavaObject >

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecuritySpecKeySpec)

J2OBJC_TYPE_LITERAL_HEADER(JavaSecuritySpecKeySpec)

#endif

#pragma pop_macro("INCLUDE_ALL_JavaSecuritySpecKeySpec")
