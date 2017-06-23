//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/SecureRandom.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecuritySecureRandom")
#ifdef RESTRICT_JavaSecuritySecureRandom
#define INCLUDE_ALL_JavaSecuritySecureRandom 0
#else
#define INCLUDE_ALL_JavaSecuritySecureRandom 1
#endif
#undef RESTRICT_JavaSecuritySecureRandom

#if !defined (JavaSecuritySecureRandom_) && (INCLUDE_ALL_JavaSecuritySecureRandom || defined(INCLUDE_JavaSecuritySecureRandom))
#define JavaSecuritySecureRandom_

#define RESTRICT_JavaUtilRandom 1
#define INCLUDE_JavaUtilRandom 1
#include "java/util/Random.h"

@class IOSByteArray;
@class JavaSecurityProvider;
@class JavaSecuritySecureRandomSpi;

/*!
 @brief This class provides a cryptographically strong random number
  generator (RNG).
 <p>A cryptographically strong random number
  minimally complies with the statistical random number generator tests
  specified in <a href="http://csrc.nist.gov/cryptval/140-2.htm">
  <i>FIPS 140-2, Security Requirements for Cryptographic Modules</i></a>,
  section 4.9.1.
  Additionally, SecureRandom must produce non-deterministic output.
  Therefore any seed material passed to a SecureRandom object must be
  unpredictable, and all SecureRandom output sequences must be
  cryptographically strong, as described in 
 <a href="http://www.ietf.org/rfc/rfc1750.txt">
  <i>RFC 1750: Randomness Recommendations for Security</i></a>.
  
 <p>A caller obtains a SecureRandom instance via the
  no-argument constructor or one of the <code>getInstance</code> methods: 
 @code

       SecureRandom random = new SecureRandom(); 
  
@endcode
  
 <p> Many SecureRandom implementations are in the form of a pseudo-random
  number generator (PRNG), which means they use a deterministic algorithm
  to produce a pseudo-random sequence from a true random seed.
  Other implementations may produce true random numbers,
  and yet others may use a combination of both techniques. 
 <p> Typical callers of SecureRandom invoke the following methods
  to retrieve random bytes: 
 @code

       SecureRandom random = new SecureRandom();
       byte bytes[] = new byte[20];
       random.nextBytes(bytes); 
  
@endcode
  
 <p> Callers may also invoke the <code>generateSeed</code> method
  to generate a given number of seed bytes (to seed other random number
  generators, for example): 
 @code

       byte seed[] = random.generateSeed(20); 
  
@endcode
  Note: Depending on the implementation, the <code>generateSeed</code> and 
 <code>nextBytes</code> methods may block as entropy is being gathered,
  for example, if they need to read from /dev/random on various unix-like
  operating systems.
  The SHA1PRNG algorithm from the Crypto provider has been deprecated as it was insecure, and also
  incorrectly used by some apps as a key derivation function. See 
 <a href="http://android-developers.blogspot.com/2016/06/security-crypto-provider-deprecated-in.html">
  Security &quot;Crypto&quot; provider deprecated in Android N</a> for details.
 - seealso: java.security.SecureRandomSpi
 - seealso: java.util.Random
 @author Benjamin Renaud
 @author Josh Bloch
 */
@interface JavaSecuritySecureRandom : JavaUtilRandom

#pragma mark Public

/*!
 @brief Constructs a secure random number generator (RNG) implementing the
  default random number algorithm.
 <p> This constructor traverses the list of registered security Providers,
  starting with the most preferred Provider.
  A new SecureRandom object encapsulating the
  SecureRandomSpi implementation from the first
  Provider that supports a SecureRandom (RNG) algorithm is returned.
  If none of the Providers support a RNG algorithm,
  then an implementation-specific default is returned. 
 <p> Note that the list of registered providers may be retrieved via the 
 <code>Security.getProviders()</code> method. 
 <p> See the SecureRandom section in the <a href="{@@docRoot}openjdk-redirect.html?v=8&path=/technotes/guides/security/StandardNames.html#SecureRandom">
  Java Cryptography Architecture Standard Algorithm Name Documentation</a>
  for information about standard RNG algorithm names. 
 <p> The returned SecureRandom object has not been seeded.  To seed the
  returned object, call the <code>setSeed</code> method.
  If <code>setSeed</code> is not called, the first call to 
 <code>nextBytes</code> will force the SecureRandom object to seed itself.
  This self-seeding will not occur if <code>setSeed</code> was
  previously called.
 */
- (instancetype)init;

/*!
 @brief Constructs a secure random number generator (RNG) implementing the
  default random number algorithm.
 The SecureRandom instance is seeded with the specified seed bytes. 
 <p> This constructor traverses the list of registered security Providers,
  starting with the most preferred Provider.
  A new SecureRandom object encapsulating the
  SecureRandomSpi implementation from the first
  Provider that supports a SecureRandom (RNG) algorithm is returned.
  If none of the Providers support a RNG algorithm,
  then an implementation-specific default is returned. 
 <p> Note that the list of registered providers may be retrieved via the 
 <code>Security.getProviders()</code> method. 
 <p> See the SecureRandom section in the <a href="{@@docRoot}openjdk-redirect.html?v=8&path=/technotes/guides/security/StandardNames.html#SecureRandom">
  Java Cryptography Architecture Standard Algorithm Name Documentation</a>
  for information about standard RNG algorithm names.
 @param seed the seed.
 */
- (instancetype)initWithByteArray:(IOSByteArray *)seed;

/*!
 @brief Returns the given number of seed bytes, computed using the seed
  generation algorithm that this class uses to seed itself.This
  call may be used to seed other random number generators.
 @param numBytes the number of seed bytes to generate.
 @return the seed bytes.
 */
- (IOSByteArray *)generateSeedWithInt:(jint)numBytes;

/*!
 @brief Returns the name of the algorithm implemented by this SecureRandom
  object.
 @return the name of the algorithm or <code>unknown</code>
           if the algorithm name cannot be determined.
 @since 1.5
 */
- (NSString *)getAlgorithm;

/*!
 @brief Returns a SecureRandom object that implements the specified
  Random Number Generator (RNG) algorithm.
 <p> This method traverses the list of registered security Providers,
  starting with the most preferred Provider.
  A new SecureRandom object encapsulating the
  SecureRandomSpi implementation from the first
  Provider that supports the specified algorithm is returned. 
 <p> Note that the list of registered providers may be retrieved via the 
 <code>Security.getProviders()</code> method. 
 <p> The returned SecureRandom object has not been seeded.  To seed the
  returned object, call the <code>setSeed</code> method.
  If <code>setSeed</code> is not called, the first call to 
 <code>nextBytes</code> will force the SecureRandom object to seed itself.
  This self-seeding will not occur if <code>setSeed</code> was
  previously called.
 @param algorithm the name of the RNG algorithm.  See the SecureRandom section in the 
  <a href="{@@docRoot}openjdk-redirect.html?v=8&path=/technotes/guides/security/StandardNames.html#SecureRandom">
   Java Cryptography Architecture Standard Algorithm Name Documentation
  </a>  for information about standard RNG algorithm names.
 @return the new SecureRandom object.
 @throw NoSuchAlgorithmExceptionif no Provider supports a
           SecureRandomSpi implementation for the
           specified algorithm.
 - seealso: Provider
 @since 1.2
 */
+ (JavaSecuritySecureRandom *)getInstanceWithNSString:(NSString *)algorithm;

/*!
 @brief Returns a SecureRandom object that implements the specified
  Random Number Generator (RNG) algorithm.
 <p> A new SecureRandom object encapsulating the
  SecureRandomSpi implementation from the specified Provider
  object is returned.  Note that the specified Provider object
  does not have to be registered in the provider list. 
 <p> The returned SecureRandom object has not been seeded.  To seed the
  returned object, call the <code>setSeed</code> method.
  If <code>setSeed</code> is not called, the first call to 
 <code>nextBytes</code> will force the SecureRandom object to seed itself.
  This self-seeding will not occur if <code>setSeed</code> was
  previously called.
 @param algorithm the name of the RNG algorithm.  See the SecureRandom section in the 
  <a href="{@@docRoot}openjdk-redirect.html?v=8&path=/technotes/guides/security/StandardNames.html#SecureRandom">
   Java Cryptography Architecture Standard Algorithm Name Documentation
  </a>  for information about standard RNG algorithm names.
 @param provider the provider.
 @return the new SecureRandom object.
 @throw NoSuchAlgorithmExceptionif a SecureRandomSpi
           implementation for the specified algorithm is not available
           from the specified Provider object.
 @throw IllegalArgumentExceptionif the specified provider is null.
 - seealso: Provider
 @since 1.4
 */
+ (JavaSecuritySecureRandom *)getInstanceWithNSString:(NSString *)algorithm
                             withJavaSecurityProvider:(JavaSecurityProvider *)provider;

/*!
 @brief Returns a SecureRandom object that implements the specified
  Random Number Generator (RNG) algorithm.
 <p> A new SecureRandom object encapsulating the
  SecureRandomSpi implementation from the specified provider
  is returned.  The specified provider must be registered
  in the security provider list. 
 <p> Note that the list of registered providers may be retrieved via the 
 <code>Security.getProviders()</code> method. 
 <p> The returned SecureRandom object has not been seeded.  To seed the
  returned object, call the <code>setSeed</code> method.
  If <code>setSeed</code> is not called, the first call to 
 <code>nextBytes</code> will force the SecureRandom object to seed itself.
  This self-seeding will not occur if <code>setSeed</code> was
  previously called.
 @param algorithm the name of the RNG algorithm.  See the SecureRandom section in the 
  <a href="{@@docRoot}openjdk-redirect.html?v=8&path=/technotes/guides/security/StandardNames.html#SecureRandom">
   Java Cryptography Architecture Standard Algorithm Name Documentation
  </a>  for information about standard RNG algorithm names.
 @param provider the name of the provider.
 @return the new SecureRandom object.
 @throw NoSuchAlgorithmExceptionif a SecureRandomSpi
           implementation for the specified algorithm is not
           available from the specified provider.
 @throw NoSuchProviderExceptionif the specified provider is not
           registered in the security provider list.
 @throw IllegalArgumentExceptionif the provider name is null
           or empty.
 - seealso: Provider
 @since 1.2
 */
+ (JavaSecuritySecureRandom *)getInstanceWithNSString:(NSString *)algorithm
                                         withNSString:(NSString *)provider;

/*!
 @brief Returns the provider of this SecureRandom object.
 @return the provider of this SecureRandom object.
 */
- (JavaSecurityProvider *)getProvider;

/*!
 @brief Only for testing.
 */
+ (jint)getSdkTargetForCryptoProviderWorkaround;

/*!
 @brief Returns the given number of seed bytes, computed using the seed
  generation algorithm that this class uses to seed itself.This
  call may be used to seed other random number generators.
 <p>This method is only included for backwards compatibility.
  The caller is encouraged to use one of the alternative 
 <code>getInstance</code> methods to obtain a SecureRandom object, and
  then call the <code>generateSeed</code> method to obtain seed bytes
  from that object.
 @param numBytes the number of seed bytes to generate.
 @return the seed bytes.
 - seealso: #setSeed
 */
+ (IOSByteArray *)getSeedWithInt:(jint)numBytes;

/*!
 @brief Generates a user-specified number of random bytes.
 <p> If a call to <code>setSeed</code> had not occurred previously,
  the first call to this method forces this SecureRandom object
  to seed itself.  This self-seeding will not occur if 
 <code>setSeed</code> was previously called.
 @param bytes the array to be filled in with random bytes.
 */
- (void)nextBytesWithByteArray:(IOSByteArray *)bytes;

/*!
 @brief Only for testing.
 */
+ (void)setSdkTargetForCryptoProviderWorkaroundWithInt:(jint)sdkTargetVersion;

/*!
 @brief Reseeds this random object.The given seed supplements, rather than
  replaces, the existing seed.
 Thus, repeated calls are guaranteed
  never to reduce randomness.
 @param seed the seed.
 - seealso: #getSeed
 */
- (void)setSeedWithByteArray:(IOSByteArray *)seed;

/*!
 @brief Reseeds this random object, using the eight bytes contained
  in the given <code>long seed</code>.The given seed supplements,
  rather than replaces, the existing seed.
 Thus, repeated calls
  are guaranteed never to reduce randomness. 
 <p>This method is defined for compatibility with 
 <code>java.util.Random</code>.
 @param seed the seed.
 - seealso: #getSeed
 */
- (void)setSeedWithLong:(jlong)seed;

#pragma mark Protected

/*!
 @brief Creates a SecureRandom object.
 @param secureRandomSpi the SecureRandom implementation.
 @param provider the provider.
 */
- (instancetype)initWithJavaSecuritySecureRandomSpi:(JavaSecuritySecureRandomSpi *)secureRandomSpi
                           withJavaSecurityProvider:(JavaSecurityProvider *)provider;

/*!
 @brief Generates an integer containing the user-specified number of
  pseudo-random bits (right justified, with leading zeros).This
  method overrides a <code>java.util.Random</code> method, and serves
  to provide a source of random bits to all of the methods inherited
  from that class (for example, <code>nextInt</code>,
  <code>nextLong</code>, and <code>nextFloat</code>).
 @param numBits number of pseudo-random bits to be generated, where  0 
  < =  <code> numBits </code>   < = 32.
 @return an <code>int</code> containing the user-specified number
  of pseudo-random bits (right justified, with leading zeros).
 */
- (jint)nextWithInt:(jint)numBits;

#pragma mark Package-Private

/*!
 @brief Returns the SecureRandomSpi of this SecureRandom object.
 */
- (JavaSecuritySecureRandomSpi *)getSecureRandomSpi;

@end

J2OBJC_STATIC_INIT(JavaSecuritySecureRandom)

/*!
 @brief Maximum SDK version for which the workaround for the Crypto provider is in place.
 <p> We provide instances from the Crypto provider (although the provider is not installed) to
  apps targeting M or earlier versions of the SDK. 
 <p> Default is 23 (M). We have it as a field for testability and it shouldn't be changed.
 */
inline jint JavaSecuritySecureRandom_get_DEFAULT_SDK_TARGET_FOR_CRYPTO_PROVIDER_WORKAROUND();
#define JavaSecuritySecureRandom_DEFAULT_SDK_TARGET_FOR_CRYPTO_PROVIDER_WORKAROUND 23
J2OBJC_STATIC_FIELD_CONSTANT(JavaSecuritySecureRandom, DEFAULT_SDK_TARGET_FOR_CRYPTO_PROVIDER_WORKAROUND, jint)

inline jlong JavaSecuritySecureRandom_get_serialVersionUID();
#define JavaSecuritySecureRandom_serialVersionUID 4940670005562187LL
J2OBJC_STATIC_FIELD_CONSTANT(JavaSecuritySecureRandom, serialVersionUID, jlong)

FOUNDATION_EXPORT void JavaSecuritySecureRandom_init(JavaSecuritySecureRandom *self);

FOUNDATION_EXPORT JavaSecuritySecureRandom *new_JavaSecuritySecureRandom_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecuritySecureRandom *create_JavaSecuritySecureRandom_init();

FOUNDATION_EXPORT void JavaSecuritySecureRandom_initWithByteArray_(JavaSecuritySecureRandom *self, IOSByteArray *seed);

FOUNDATION_EXPORT JavaSecuritySecureRandom *new_JavaSecuritySecureRandom_initWithByteArray_(IOSByteArray *seed) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecuritySecureRandom *create_JavaSecuritySecureRandom_initWithByteArray_(IOSByteArray *seed);

FOUNDATION_EXPORT void JavaSecuritySecureRandom_initWithJavaSecuritySecureRandomSpi_withJavaSecurityProvider_(JavaSecuritySecureRandom *self, JavaSecuritySecureRandomSpi *secureRandomSpi, JavaSecurityProvider *provider);

FOUNDATION_EXPORT JavaSecuritySecureRandom *new_JavaSecuritySecureRandom_initWithJavaSecuritySecureRandomSpi_withJavaSecurityProvider_(JavaSecuritySecureRandomSpi *secureRandomSpi, JavaSecurityProvider *provider) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecuritySecureRandom *create_JavaSecuritySecureRandom_initWithJavaSecuritySecureRandomSpi_withJavaSecurityProvider_(JavaSecuritySecureRandomSpi *secureRandomSpi, JavaSecurityProvider *provider);

FOUNDATION_EXPORT JavaSecuritySecureRandom *JavaSecuritySecureRandom_getInstanceWithNSString_(NSString *algorithm);

FOUNDATION_EXPORT void JavaSecuritySecureRandom_setSdkTargetForCryptoProviderWorkaroundWithInt_(jint sdkTargetVersion);

FOUNDATION_EXPORT jint JavaSecuritySecureRandom_getSdkTargetForCryptoProviderWorkaround();

FOUNDATION_EXPORT JavaSecuritySecureRandom *JavaSecuritySecureRandom_getInstanceWithNSString_withNSString_(NSString *algorithm, NSString *provider);

FOUNDATION_EXPORT JavaSecuritySecureRandom *JavaSecuritySecureRandom_getInstanceWithNSString_withJavaSecurityProvider_(NSString *algorithm, JavaSecurityProvider *provider);

FOUNDATION_EXPORT IOSByteArray *JavaSecuritySecureRandom_getSeedWithInt_(jint numBytes);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecuritySecureRandom)

#endif

#pragma pop_macro("INCLUDE_ALL_JavaSecuritySecureRandom")
