//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/spec/EncodedKeySpec.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecuritySpecEncodedKeySpec")
#ifdef RESTRICT_JavaSecuritySpecEncodedKeySpec
#define INCLUDE_ALL_JavaSecuritySpecEncodedKeySpec 0
#else
#define INCLUDE_ALL_JavaSecuritySpecEncodedKeySpec 1
#endif
#undef RESTRICT_JavaSecuritySpecEncodedKeySpec

#if !defined (JavaSecuritySpecEncodedKeySpec_) && (INCLUDE_ALL_JavaSecuritySpecEncodedKeySpec || defined(INCLUDE_JavaSecuritySpecEncodedKeySpec))
#define JavaSecuritySpecEncodedKeySpec_

#define RESTRICT_JavaSecuritySpecKeySpec 1
#define INCLUDE_JavaSecuritySpecKeySpec 1
#include "java/security/spec/KeySpec.h"

@class IOSByteArray;

/*!
 @brief This class represents a public or private key in encoded format.
 @author Jan Luehe
 - seealso: java.security.Key
 - seealso: java.security.KeyFactory
 - seealso: KeySpec
 - seealso: X509EncodedKeySpec
 - seealso: PKCS8EncodedKeySpec
 @since 1.2
 */
@interface JavaSecuritySpecEncodedKeySpec : NSObject < JavaSecuritySpecKeySpec >

#pragma mark Public

/*!
 @brief Creates a new EncodedKeySpec with the given encoded key.
 @param encodedKey the encoded key. The contents of the  array are copied to protect against subsequent modification.
 @throw NullPointerExceptionif <code>encodedKey</code>
  is null.
 */
- (instancetype)initWithByteArray:(IOSByteArray *)encodedKey;

/*!
 @brief Returns the encoded key.
 @return the encoded key. Returns a new array each time
  this method is called.
 */
- (IOSByteArray *)getEncoded;

/*!
 @brief Returns the name of the encoding format associated with this
  key specification.
 <p>If the opaque representation of a key
  (see <code>Key</code>) can be transformed
  (see <code>KeyFactory</code>)
  into this key specification (or a subclass of it), 
 <code>getFormat</code> called
  on the opaque key returns the same value as the 
 <code>getFormat</code> method
  of this key specification.
 @return a string representation of the encoding format.
 */
- (NSString *)getFormat;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecuritySpecEncodedKeySpec)

FOUNDATION_EXPORT void JavaSecuritySpecEncodedKeySpec_initWithByteArray_(JavaSecuritySpecEncodedKeySpec *self, IOSByteArray *encodedKey);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecuritySpecEncodedKeySpec)

#endif

#pragma pop_macro("INCLUDE_ALL_JavaSecuritySpecEncodedKeySpec")
