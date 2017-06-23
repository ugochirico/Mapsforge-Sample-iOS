//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/Random.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilRandom")
#ifdef RESTRICT_JavaUtilRandom
#define INCLUDE_ALL_JavaUtilRandom 0
#else
#define INCLUDE_ALL_JavaUtilRandom 1
#endif
#undef RESTRICT_JavaUtilRandom

#if !defined (JavaUtilRandom_) && (INCLUDE_ALL_JavaUtilRandom || defined(INCLUDE_JavaUtilRandom))
#define JavaUtilRandom_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class IOSByteArray;

/*!
 @brief This class provides methods that return pseudo-random values.
 <p>It is dangerous to seed <code>Random</code> with the current time because
  that value is more predictable to an attacker than the default seed. 
 <p>This class is thread-safe.
 - seealso: java.security.SecureRandom
 */
@interface JavaUtilRandom : NSObject < JavaIoSerializable >

#pragma mark Public

/*!
 @brief Constructs a random generator with an initial state that is
  unlikely to be duplicated by a subsequent instantiation.
 */
- (instancetype)init;

/*!
 @brief Construct a random generator with the given <code>seed</code> as the
  initial state.Equivalent to <code>Random r = new Random(); r.setSeed(seed);</code>.
 <p>This constructor is mainly useful for <i>predictability</i> in tests.
  The default constructor is likely to provide better randomness.
 */
- (instancetype)initWithLong:(jlong)seed;

/*!
 @brief Returns a pseudo-random uniformly distributed <code>boolean</code>.
 */
- (jboolean)nextBoolean;

/*!
 @brief Fills <code>buf</code> with random bytes.
 */
- (void)nextBytesWithByteArray:(IOSByteArray *)buf;

/*!
 @brief Returns a pseudo-random uniformly distributed <code>double</code>
  in the half-open range [0.0, 1.0).
 */
- (jdouble)nextDouble;

/*!
 @brief Returns a pseudo-random uniformly distributed <code>float</code>
  in the half-open range [0.0, 1.0).
 */
- (jfloat)nextFloat;

/*!
 @brief Returns a pseudo-random (approximately) normally distributed 
 <code>double</code> with mean 0.0 and standard deviation 1.0.
 This method uses the <i>polar method</i> of G. E. P. Box, M.
  E. Muller, and G. Marsaglia, as described by Donald E. Knuth in <i>The
  Art of Computer Programming, Volume 2: Seminumerical Algorithms</i>,
  section 3.4.1, subsection C, algorithm P.
 */
- (jdouble)nextGaussian;

/*!
 @brief Returns a pseudo-random uniformly distributed <code>int</code>.
 */
- (jint)nextInt;

/*!
 @brief Returns a pseudo-random uniformly distributed <code>int</code>
  in the half-open range [0, n).
 */
- (jint)nextIntWithInt:(jint)n;

/*!
 @brief Returns a pseudo-random uniformly distributed <code>long</code>.
 */
- (jlong)nextLong;

/*!
 @brief Modifies the seed using a linear congruential formula presented in <i>The
  Art of Computer Programming, Volume 2</i>, Section 3.2.1.
 */
- (void)setSeedWithLong:(jlong)seed;

#pragma mark Protected

/*!
 @brief Returns a pseudo-random uniformly distributed <code>int</code> value of
  the number of bits specified by the argument <code>bits</code> as
  described by Donald E.Knuth in <i>The Art of Computer Programming,
  Volume 2: Seminumerical Algorithms</i>, section 3.2.1.
 <p>Most applications will want to use one of this class' convenience methods instead. 
 <p>Subclasses only need to override this method to alter the behavior
  of all the public methods.
 */
- (jint)nextWithInt:(jint)bits;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilRandom)

FOUNDATION_EXPORT void JavaUtilRandom_init(JavaUtilRandom *self);

FOUNDATION_EXPORT JavaUtilRandom *new_JavaUtilRandom_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilRandom *create_JavaUtilRandom_init();

FOUNDATION_EXPORT void JavaUtilRandom_initWithLong_(JavaUtilRandom *self, jlong seed);

FOUNDATION_EXPORT JavaUtilRandom *new_JavaUtilRandom_initWithLong_(jlong seed) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilRandom *create_JavaUtilRandom_initWithLong_(jlong seed);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilRandom)

#endif

#pragma pop_macro("INCLUDE_ALL_JavaUtilRandom")
