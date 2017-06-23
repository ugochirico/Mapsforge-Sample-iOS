//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/spec/PSSParameterSpec.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecuritySpecPSSParameterSpec")
#ifdef RESTRICT_JavaSecuritySpecPSSParameterSpec
#define INCLUDE_ALL_JavaSecuritySpecPSSParameterSpec 0
#else
#define INCLUDE_ALL_JavaSecuritySpecPSSParameterSpec 1
#endif
#undef RESTRICT_JavaSecuritySpecPSSParameterSpec

#if !defined (JavaSecuritySpecPSSParameterSpec_) && (INCLUDE_ALL_JavaSecuritySpecPSSParameterSpec || defined(INCLUDE_JavaSecuritySpecPSSParameterSpec))
#define JavaSecuritySpecPSSParameterSpec_

#define RESTRICT_JavaSecuritySpecAlgorithmParameterSpec 1
#define INCLUDE_JavaSecuritySpecAlgorithmParameterSpec 1
#include "java/security/spec/AlgorithmParameterSpec.h"

/*!
 @brief This class specifies a parameter spec for RSA-PSS signature scheme,
  as defined in the 
 <a href="http://www.ietf.org/rfc/rfc3447.txt">PKCS#1 v2.1</a>
  standard.
 <p>Its ASN.1 definition in PKCS#1 standard is described below: 
 @code

  RSASSA-PSS-params ::= SEQUENCE {
    hashAlgorithm      [0] OAEP-PSSDigestAlgorithms  DEFAULT sha1,
    maskGenAlgorithm   [1] PKCS1MGFAlgorithms  DEFAULT mgf1SHA1,
    saltLength         [2] INTEGER  DEFAULT 20,
    trailerField       [3] INTEGER  DEFAULT 1
  } 
  
@endcode
  where 
 @code

  OAEP-PSSDigestAlgorithms    ALGORITHM-IDENTIFIER ::= {
    { OID id-sha1 PARAMETERS NULL   }|
    { OID id-sha256 PARAMETERS NULL }|
    { OID id-sha384 PARAMETERS NULL }|
    { OID id-sha512 PARAMETERS NULL },
    ...  -- Allows for future expansion --
  }
  PKCS1MGFAlgorithms    ALGORITHM-IDENTIFIER ::= {
    { OID id-mgf1 PARAMETERS OAEP-PSSDigestAlgorithms },
    ...  -- Allows for future expansion --
  } 
  
@endcode
  <p>Note: the PSSParameterSpec.DEFAULT uses the following:
      message digest  -- "SHA-1"
      mask generation function (mgf) -- "MGF1"
      parameters for mgf -- MGF1ParameterSpec.SHA1
      SaltLength   -- 20
      TrailerField -- 1
 - seealso: MGF1ParameterSpec
 - seealso: AlgorithmParameterSpec
 - seealso: java.security.Signature
 @author Valerie Peng
 @since 1.4
 */
@interface JavaSecuritySpecPSSParameterSpec : NSObject < JavaSecuritySpecAlgorithmParameterSpec >

#pragma mark Public

/*!
 @brief Creates a new <code>PSSParameterSpec</code>
  using the specified salt length and other default values as
  defined in PKCS#1.
 @param saltLen the length of salt in bits to be used in PKCS#1  PSS encoding.
 @throw IllegalArgumentExceptionif <code>saltLen</code> is
  less than 0.
 */
- (instancetype)initWithInt:(jint)saltLen;

/*!
 @brief Creates a new <code>PSSParameterSpec</code> as defined in
  the PKCS #1 standard using the specified message digest,
  mask generation function, parameters for mask generation
  function, salt length, and trailer field values.
 @param mdName the algorithm name of the hash function.
 @param mgfName the algorithm name of the mask generation  function.
 @param mgfSpec the parameters for the mask generation  function. If null is specified, null will be returned by
   getMGFParameters().
 @param saltLen the length of salt.
 @param trailerField the value of the trailer field.
 @throw NullPointerExceptionif <code>mdName</code>,
  or <code>mgfName</code> is null.
 @throw IllegalArgumentExceptionif <code>saltLen</code>
  or <code>trailerField</code> is less than 0.
 @since 1.5
 */
- (instancetype)initWithNSString:(NSString *)mdName
                    withNSString:(NSString *)mgfName
withJavaSecuritySpecAlgorithmParameterSpec:(id<JavaSecuritySpecAlgorithmParameterSpec>)mgfSpec
                         withInt:(jint)saltLen
                         withInt:(jint)trailerField;

/*!
 @brief Returns the message digest algorithm name.
 @return the message digest algorithm name.
 @since 1.5
 */
- (NSString *)getDigestAlgorithm;

/*!
 @brief Returns the mask generation function algorithm name.
 @return the mask generation function algorithm name.
 @since 1.5
 */
- (NSString *)getMGFAlgorithm;

/*!
 @brief Returns the parameters for the mask generation function.
 @return the parameters for the mask generation function.
 @since 1.5
 */
- (id<JavaSecuritySpecAlgorithmParameterSpec>)getMGFParameters;

/*!
 @brief Returns the salt length in bits.
 @return the salt length.
 */
- (jint)getSaltLength;

/*!
 @brief Returns the value for the trailer field, i.e. bc in PKCS#1 v2.1.
 @return the value for the trailer field, i.e. bc in PKCS#1 v2.1.
 @since 1.5
 */
- (jint)getTrailerField;

@end

J2OBJC_STATIC_INIT(JavaSecuritySpecPSSParameterSpec)

/*!
 @brief The PSS parameter set with all default values.
 @since 1.5
 */
inline JavaSecuritySpecPSSParameterSpec *JavaSecuritySpecPSSParameterSpec_get_DEFAULT();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaSecuritySpecPSSParameterSpec *JavaSecuritySpecPSSParameterSpec_DEFAULT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaSecuritySpecPSSParameterSpec, DEFAULT, JavaSecuritySpecPSSParameterSpec *)

FOUNDATION_EXPORT void JavaSecuritySpecPSSParameterSpec_initWithNSString_withNSString_withJavaSecuritySpecAlgorithmParameterSpec_withInt_withInt_(JavaSecuritySpecPSSParameterSpec *self, NSString *mdName, NSString *mgfName, id<JavaSecuritySpecAlgorithmParameterSpec> mgfSpec, jint saltLen, jint trailerField);

FOUNDATION_EXPORT JavaSecuritySpecPSSParameterSpec *new_JavaSecuritySpecPSSParameterSpec_initWithNSString_withNSString_withJavaSecuritySpecAlgorithmParameterSpec_withInt_withInt_(NSString *mdName, NSString *mgfName, id<JavaSecuritySpecAlgorithmParameterSpec> mgfSpec, jint saltLen, jint trailerField) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecuritySpecPSSParameterSpec *create_JavaSecuritySpecPSSParameterSpec_initWithNSString_withNSString_withJavaSecuritySpecAlgorithmParameterSpec_withInt_withInt_(NSString *mdName, NSString *mgfName, id<JavaSecuritySpecAlgorithmParameterSpec> mgfSpec, jint saltLen, jint trailerField);

FOUNDATION_EXPORT void JavaSecuritySpecPSSParameterSpec_initWithInt_(JavaSecuritySpecPSSParameterSpec *self, jint saltLen);

FOUNDATION_EXPORT JavaSecuritySpecPSSParameterSpec *new_JavaSecuritySpecPSSParameterSpec_initWithInt_(jint saltLen) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecuritySpecPSSParameterSpec *create_JavaSecuritySpecPSSParameterSpec_initWithInt_(jint saltLen);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecuritySpecPSSParameterSpec)

#endif

#pragma pop_macro("INCLUDE_ALL_JavaSecuritySpecPSSParameterSpec")
