//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/AlgorithmParametersSpi.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityAlgorithmParametersSpi")
#ifdef RESTRICT_JavaSecurityAlgorithmParametersSpi
#define INCLUDE_ALL_JavaSecurityAlgorithmParametersSpi 0
#else
#define INCLUDE_ALL_JavaSecurityAlgorithmParametersSpi 1
#endif
#undef RESTRICT_JavaSecurityAlgorithmParametersSpi

#if !defined (JavaSecurityAlgorithmParametersSpi_) && (INCLUDE_ALL_JavaSecurityAlgorithmParametersSpi || defined(INCLUDE_JavaSecurityAlgorithmParametersSpi))
#define JavaSecurityAlgorithmParametersSpi_

@class IOSByteArray;
@class IOSClass;
@protocol JavaSecuritySpecAlgorithmParameterSpec;

/*!
 @brief This class defines the <i>Service Provider Interface</i> (<b>SPI</b>)
  for the <code>AlgorithmParameters</code> class, which is used to manage
  algorithm parameters.
 <p> All the abstract methods in this class must be implemented by each
  cryptographic service provider who wishes to supply parameter management
  for a particular algorithm.
 @author Jan Luehe
 - seealso: AlgorithmParameters
 - seealso: java.security.spec.AlgorithmParameterSpec
 - seealso: java.security.spec.DSAParameterSpec
 @since 1.2
 */
@interface JavaSecurityAlgorithmParametersSpi : NSObject

#pragma mark Public

- (instancetype)init;

#pragma mark Protected

/*!
 @brief Returns the parameters in their primary encoding format.
 The primary encoding format for parameters is ASN.1, if an ASN.1
  specification for this type of parameters exists.
 @return the parameters encoded using their primary encoding format.
 @throw IOExceptionon encoding errors.
 */
- (IOSByteArray *)engineGetEncoded;

/*!
 @brief Returns the parameters encoded in the specified format.
 If <code>format</code> is null, the
  primary encoding format for parameters is used. The primary encoding
  format is ASN.1, if an ASN.1 specification for these parameters
  exists.
 @param format the name of the encoding format.
 @return the parameters encoded using the specified encoding scheme.
 @throw IOExceptionon encoding errors.
 */
- (IOSByteArray *)engineGetEncodedWithNSString:(NSString *)format;

/*!
 @brief Returns a (transparent) specification of this parameters
  object.
 <code>paramSpec</code> identifies the specification class in which
  the parameters should be returned.It could, for example, be 
 <code>DSAParameterSpec.class</code>, to indicate that the
  parameters should be returned in an instance of the 
 <code>DSAParameterSpec</code> class.
 @param paramSpec the specification class in which  the parameters should be returned.
 @return the parameter specification.
 @throw InvalidParameterSpecExceptionif the requested parameter
  specification is inappropriate for this parameter object.
 */
- (id<JavaSecuritySpecAlgorithmParameterSpec>)engineGetParameterSpecWithIOSClass:(IOSClass *)paramSpec;

/*!
 @brief Initializes this parameters object using the parameters
  specified in <code>paramSpec</code>.
 @param paramSpec the parameter specification.
 @throw InvalidParameterSpecExceptionif the given parameter
  specification is inappropriate for the initialization of this parameter
  object.
 */
- (void)engineInitWithJavaSecuritySpecAlgorithmParameterSpec:(id<JavaSecuritySpecAlgorithmParameterSpec>)paramSpec;

/*!
 @brief Imports the specified parameters and decodes them
  according to the primary decoding format for parameters.
 The primary decoding format for parameters is ASN.1, if an ASN.1
  specification for this type of parameters exists.
 @param params the encoded parameters.
 @throw IOExceptionon decoding errors
 */
- (void)engineInitWithByteArray:(IOSByteArray *)params;

/*!
 @brief Imports the parameters from <code>params</code> and
  decodes them according to the specified decoding format.
 If <code>format</code> is null, the
  primary decoding format for parameters is used. The primary decoding
  format is ASN.1, if an ASN.1 specification for these parameters
  exists.
 @param params the encoded parameters.
 @param format the name of the decoding format.
 @throw IOExceptionon decoding errors
 */
- (void)engineInitWithByteArray:(IOSByteArray *)params
                   withNSString:(NSString *)format;

/*!
 @brief Returns a formatted string describing the parameters.
 @return a formatted string describing the parameters.
 */
- (NSString *)engineToString;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityAlgorithmParametersSpi)

FOUNDATION_EXPORT void JavaSecurityAlgorithmParametersSpi_init(JavaSecurityAlgorithmParametersSpi *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityAlgorithmParametersSpi)

#endif

#pragma pop_macro("INCLUDE_ALL_JavaSecurityAlgorithmParametersSpi")
