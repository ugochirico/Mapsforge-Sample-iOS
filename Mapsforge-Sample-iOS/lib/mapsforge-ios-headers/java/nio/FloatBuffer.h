//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/FloatBuffer.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNioFloatBuffer")
#ifdef RESTRICT_JavaNioFloatBuffer
#define INCLUDE_ALL_JavaNioFloatBuffer 0
#else
#define INCLUDE_ALL_JavaNioFloatBuffer 1
#endif
#undef RESTRICT_JavaNioFloatBuffer

#if !defined (JavaNioFloatBuffer_) && (INCLUDE_ALL_JavaNioFloatBuffer || defined(INCLUDE_JavaNioFloatBuffer))
#define JavaNioFloatBuffer_

#define RESTRICT_JavaNioBuffer 1
#define INCLUDE_JavaNioBuffer 1
#include "java/nio/Buffer.h"

#define RESTRICT_JavaLangComparable 1
#define INCLUDE_JavaLangComparable 1
#include "java/lang/Comparable.h"

@class IOSFloatArray;
@class JavaNioByteOrder;

/*!
 @brief A buffer of floats.
 <p>
  A float buffer can be created in either of the following ways: 
 <ul>
  <li><code>Allocate</code> a new float array and create a buffer
  based on it;</li>
  <li><code>Wrap</code> an existing float array to create a new
  buffer;</li>
  <li>Use <code>ByteBuffer.asFloatBuffer</code>
  to create a float buffer based on a byte buffer.</li>
  </ul>
 */
@interface JavaNioFloatBuffer : JavaNioBuffer < JavaLangComparable >

#pragma mark Public

/*!
 @brief Creates a float buffer based on a newly allocated float array.
 @param capacity the capacity of the new buffer.
 @return the created float buffer.
 @throw IllegalArgumentException
 if <code>capacity</code> is less than zero.
 */
+ (JavaNioFloatBuffer *)allocateWithInt:(jint)capacity OBJC_METHOD_FAMILY_NONE;

- (IOSFloatArray *)array;

- (jint)arrayOffset;

/*!
 @brief Returns a read-only buffer that shares its content with this buffer.
 <p>
  The returned buffer is guaranteed to be a new instance, even if this
  buffer is read-only itself. The new buffer's position, limit, capacity
  and mark are the same as this buffer. 
 <p>
  The new buffer shares its content with this buffer, which means this
  buffer's change of content will be visible to the new buffer. The two
  buffer's position, limit and mark are independent.
 @return a read-only version of this buffer.
 */
- (JavaNioFloatBuffer *)asReadOnlyBuffer;

/*!
 @brief Compacts this float buffer.
 <p>
  The remaining floats will be moved to the head of the buffer, starting
  from position zero. Then the position is set to <code>remaining()</code>; the
  limit is set to capacity; the mark is cleared.
 @return this buffer.
 @throw ReadOnlyBufferException
 if no changes may be made to the contents of this buffer.
 */
- (JavaNioFloatBuffer *)compact;

/*!
 @brief Compare the remaining floats of this buffer to another float buffer's
  remaining floats.
 @param otherBuffer another float buffer.
 @return a negative value if this is less than <code>otherBuffer</code>; 0 if
          this equals to <code>otherBuffer</code>; a positive value if this is
          greater than <code>otherBuffer</code>.
 @throw ClassCastException
 if <code>otherBuffer</code> is not a float buffer.
 */
- (jint)compareToWithId:(JavaNioFloatBuffer *)otherBuffer;

/*!
 @brief Returns a duplicated buffer that shares its content with this buffer.
 <p>
  The duplicated buffer's position, limit, capacity and mark are the same
  as this buffer. The duplicated buffer's read-only property and byte order
  are same as this buffer too. 
 <p>
  The new buffer shares its content with this buffer, which means either
  buffer's change of content will be visible to the other. The two buffers'
  position, limit and mark are independent.
 */
- (JavaNioFloatBuffer *)duplicate;

/*!
 @brief Checks whether this float buffer is equal to another object.If <code>other</code>
  is not a <code>FloatBuffer</code> then <code>false</code> is returned.
 <p>Two float buffers are equal if their remaining floats are equal.
  Position, limit, capacity and mark are not considered. 
 <p>This method considers two floats <code>a</code> and <code>b</code> to be equal
  if <code>a == b</code> or if <code>a</code> and <code>b</code> are both <code>NaN</code>.
  Unlike <code>Float.equals</code>, this method considers <code>-0.0</code> and 
 <code>+0.0</code> to be equal.
 @param other the object to compare with this float buffer.
 @return <code>true</code> if this float buffer is equal to <code>other</code>,
          <code>false</code> otherwise.
 */
- (jboolean)isEqual:(id)other;

/*!
 @brief Returns the float at the current position and increases the position by
  1.
 @return the float at the current position.
 @throw BufferUnderflowException
 if the position is equal or greater than limit.
 */
- (jfloat)get;

/*!
 @brief Reads floats from the current position into the specified float array and
  increases the position by the number of floats read.
 <p>
  Calling this method has the same effect as 
 <code>get(dst, 0, dst.length)</code>.
 @param dst the destination float array.
 @return this buffer.
 @throw BufferUnderflowException
 if <code>dst.length</code> is greater than <code>remaining()</code>.
 */
- (JavaNioFloatBuffer *)getWithFloatArray:(IOSFloatArray *)dst;

/*!
 @brief Reads floats from the current position into the specified float array,
  starting from the specified offset, and increases the position by the
  number of floats read.
 @param dst the target float array.
 @param dstOffset the offset of the float array, must not be negative and no
              greater than 
 <code>dst.length</code> .
 @param floatCount the number of floats to read, must be no less than zero and no
              greater than 
 <code>dst.length - dstOffset</code> .
 @return this buffer.
 @throw IndexOutOfBoundsException
 if either <code>dstOffset</code> or <code>floatCount</code> is invalid.
 @throw BufferUnderflowException
 if <code>floatCount</code> is greater than <code>remaining()</code>.
 */
- (JavaNioFloatBuffer *)getWithFloatArray:(IOSFloatArray *)dst
                                  withInt:(jint)dstOffset
                                  withInt:(jint)floatCount;

/*!
 @brief Returns a float at the specified index; the position is not changed.
 @param index the index, must not be negative and less than limit.
 @return a float at the specified index.
 @throw IndexOutOfBoundsException
 if index is invalid.
 */
- (jfloat)getWithInt:(jint)index;

- (jboolean)hasArray;

/*!
 @brief Calculates this buffer's hash code from the remaining chars.The
  position, limit, capacity and mark don't affect the hash code.
 @return the hash code calculated from the remaining floats.
 */
- (NSUInteger)hash;

/*!
 @brief Indicates whether this buffer is direct.A direct buffer will try its
  best to take advantage of native memory APIs and it may not stay in the
  Java heap, so it is not affected by garbage collection.
 <p>
  A float buffer is direct if it is based on a byte buffer and the byte
  buffer is direct.
 @return <code>true</code> if this buffer is direct, <code>false</code> otherwise.
 */
- (jboolean)isDirect;

/*!
 @brief Returns the byte order used by this buffer when converting floats from/to
  bytes.
 <p>
  If this buffer is not based on a byte buffer, then always return the
  platform's native byte order.
 @return the byte order used by this buffer when converting floats from/to
          bytes.
 */
- (JavaNioByteOrder *)order;

/*!
 @brief Writes the given float to the current position and increases the position
  by 1.
 @param f the float to write.
 @return this buffer.
 @throw BufferOverflowException
 if position is equal or greater than limit.
 @throw ReadOnlyBufferException
 if no changes may be made to the contents of this buffer.
 */
- (JavaNioFloatBuffer *)putWithFloat:(jfloat)f;

/*!
 @brief Writes floats from the given float array to the current position and
  increases the position by the number of floats written.
 <p>
  Calling this method has the same effect as 
 <code>put(src, 0, src.length)</code>.
 @param src the source float array.
 @return this buffer.
 @throw BufferOverflowException
 if <code>remaining()</code> is less than <code>src.length</code>.
 @throw ReadOnlyBufferException
 if no changes may be made to the contents of this buffer.
 */
- (JavaNioFloatBuffer *)putWithFloatArray:(IOSFloatArray *)src;

/*!
 @brief Writes floats from the given float array, starting from the specified
  offset, to the current position and increases the position by the number
  of floats written.
 @param src the source float array.
 @param srcOffset the offset of float array, must not be negative and not
              greater than 
 <code>src.length</code> .
 @param floatCount the number of floats to write, must be no less than zero and
              no greater than 
 <code>src.length - srcOffset</code> .
 @return this buffer.
 @throw BufferOverflowException
 if <code>remaining()</code> is less than <code>floatCount</code>.
 @throw IndexOutOfBoundsException
 if either <code>srcOffset</code> or <code>floatCount</code> is invalid.
 @throw ReadOnlyBufferException
 if no changes may be made to the contents of this buffer.
 */
- (JavaNioFloatBuffer *)putWithFloatArray:(IOSFloatArray *)src
                                  withInt:(jint)srcOffset
                                  withInt:(jint)floatCount;

/*!
 @brief Writes all the remaining floats of the <code>src</code> float buffer to this
  buffer's current position, and increases both buffers' position by the
  number of floats copied.
 @param src the source float buffer.
 @return this buffer.
 @throw BufferOverflowException
 if <code>src.remaining()</code> is greater than this buffer's
                 <code>remaining()</code>.
 @throw IllegalArgumentException
 if <code>src</code> is this buffer.
 @throw ReadOnlyBufferException
 if no changes may be made to the contents of this buffer.
 */
- (JavaNioFloatBuffer *)putWithJavaNioFloatBuffer:(JavaNioFloatBuffer *)src;

/*!
 @brief Writes a float to the specified index of this buffer; the position is not
  changed.
 @param index the index, must not be negative and less than the limit.
 @param f the float to write.
 @return this buffer.
 @throw IndexOutOfBoundsException
 if index is invalid.
 @throw ReadOnlyBufferException
 if no changes may be made to the contents of this buffer.
 */
- (JavaNioFloatBuffer *)putWithInt:(jint)index
                         withFloat:(jfloat)f;

/*!
 @brief Returns a sliced buffer that shares its content with this buffer.
 <p>
  The sliced buffer's capacity will be this buffer's <code>remaining()</code>,
  and its zero position will correspond to this buffer's current position.
  The new buffer's position will be 0, limit will be its capacity, and its
  mark is cleared. The new buffer's read-only property and byte order are
  same as this buffer's. 
 <p>
  The new buffer shares its content with this buffer, which means either
  buffer's change of content will be visible to the other. The two buffers'
  position, limit and mark are independent.
 */
- (JavaNioFloatBuffer *)slice;

/*!
 @brief Creates a new float buffer by wrapping the given float array.
 <p>
  Calling this method has the same effect as 
 <code>wrap(array, 0, array.length)</code>.
 @param array the float array which the new buffer will be based on.
 @return the created float buffer.
 */
+ (JavaNioFloatBuffer *)wrapWithFloatArray:(IOSFloatArray *)array;

/*!
 @brief Creates a new float buffer by wrapping the given float array.
 <p>
  The new buffer's position will be <code>start</code>, limit will be 
 <code>start + floatCount</code>, capacity will be the length of the array.
 @param array the float array which the new buffer will be based on.
 @param start the start index, must not be negative and not greater than
              <code>array.length</code>
  .
 @param floatCount the length, must not be negative and not greater than
              <code>array.length - start</code>
  .
 @return the created float buffer.
 @throw IndexOutOfBoundsException
 if either <code>start</code> or <code>floatCount</code> is invalid.
 @throw NullPointerException
 if <code>array</code> is null.
 */
+ (JavaNioFloatBuffer *)wrapWithFloatArray:(IOSFloatArray *)array
                                   withInt:(jint)start
                                   withInt:(jint)floatCount;

#pragma mark Package-Private

- (instancetype)initWithInt:(jint)capacity
                   withLong:(jlong)effectiveDirectAddress;

/*!
 @brief Child class implements this method to realize <code>array()</code>.
 @return see <code>array()</code>
 */
- (IOSFloatArray *)protectedArray;

/*!
 @brief Child class implements this method to realize <code>arrayOffset()</code>.
 @return see <code>arrayOffset()</code>
 */
- (jint)protectedArrayOffset;

/*!
 @brief Child class implements this method to realize <code>hasArray()</code>.
 @return see <code>hasArray()</code>
 */
- (jboolean)protectedHasArray;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioFloatBuffer)

FOUNDATION_EXPORT JavaNioFloatBuffer *JavaNioFloatBuffer_allocateWithInt_(jint capacity);

FOUNDATION_EXPORT JavaNioFloatBuffer *JavaNioFloatBuffer_wrapWithFloatArray_(IOSFloatArray *array);

FOUNDATION_EXPORT JavaNioFloatBuffer *JavaNioFloatBuffer_wrapWithFloatArray_withInt_withInt_(IOSFloatArray *array, jint start, jint floatCount);

FOUNDATION_EXPORT void JavaNioFloatBuffer_initWithInt_withLong_(JavaNioFloatBuffer *self, jint capacity, jlong effectiveDirectAddress);

J2OBJC_TYPE_LITERAL_HEADER(JavaNioFloatBuffer)

#endif

#pragma pop_macro("INCLUDE_ALL_JavaNioFloatBuffer")
