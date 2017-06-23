//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/interfaces/ECPrivateKey.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityInterfacesECPrivateKey")
#ifdef RESTRICT_JavaSecurityInterfacesECPrivateKey
#define INCLUDE_ALL_JavaSecurityInterfacesECPrivateKey 0
#else
#define INCLUDE_ALL_JavaSecurityInterfacesECPrivateKey 1
#endif
#undef RESTRICT_JavaSecurityInterfacesECPrivateKey

#if !defined (JavaSecurityInterfacesECPrivateKey_) && (INCLUDE_ALL_JavaSecurityInterfacesECPrivateKey || defined(INCLUDE_JavaSecurityInterfacesECPrivateKey))
#define JavaSecurityInterfacesECPrivateKey_

#define RESTRICT_JavaSecurityPrivateKey 1
#define INCLUDE_JavaSecurityPrivateKey 1
#include "java/security/PrivateKey.h"

#define RESTRICT_JavaSecurityInterfacesECKey 1
#define INCLUDE_JavaSecurityInterfacesECKey 1
#include "java/security/interfaces/ECKey.h"

@class JavaMathBigInteger;

/*!
 @brief The interface to an elliptic curve (EC) private key.
 @author Valerie Peng
 - seealso: PrivateKey
 - seealso: ECKey
 @since 1.5
 */
@protocol JavaSecurityInterfacesECPrivateKey < JavaSecurityPrivateKey, JavaSecurityInterfacesECKey, JavaObject >

/*!
 @brief Returns the private value S.
 @return the private value S.
 */
- (JavaMathBigInteger *)getS;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityInterfacesECPrivateKey)

/*!
 @brief The class fingerprint that is set to indicate
  serialization compatibility.
 */
inline jlong JavaSecurityInterfacesECPrivateKey_get_serialVersionUID();
#define JavaSecurityInterfacesECPrivateKey_serialVersionUID -7896394956925609184LL
J2OBJC_STATIC_FIELD_CONSTANT(JavaSecurityInterfacesECPrivateKey, serialVersionUID, jlong)

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityInterfacesECPrivateKey)

#endif

#pragma pop_macro("INCLUDE_ALL_JavaSecurityInterfacesECPrivateKey")
