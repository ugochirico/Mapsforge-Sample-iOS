//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/io/ByteArrayInputStream.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaIoByteArrayInputStream")
#ifdef RESTRICT_JavaIoByteArrayInputStream
#define INCLUDE_ALL_JavaIoByteArrayInputStream 0
#else
#define INCLUDE_ALL_JavaIoByteArrayInputStream 1
#endif
#undef RESTRICT_JavaIoByteArrayInputStream

#if !defined (JavaIoByteArrayInputStream_) && (INCLUDE_ALL_JavaIoByteArrayInputStream || defined(INCLUDE_JavaIoByteArrayInputStream))
#define JavaIoByteArrayInputStream_

#define RESTRICT_JavaIoInputStream 1
#define INCLUDE_JavaIoInputStream 1
#include "java/io/InputStream.h"

@class IOSByteArray;

/*!
 @brief A <code>ByteArrayInputStream</code> contains
  an internal buffer that contains bytes that
  may be read from the stream.An internal
  counter keeps track of the next byte to
  be supplied by the <code>read</code> method.
 <p>
  Closing a <tt>ByteArrayInputStream</tt> has no effect. The methods in
  this class can be called after the stream has been closed without
  generating an <tt>IOException</tt>.
 @author Arthur van Hoff
 - seealso: java.io.StringBufferInputStream
 @since JDK1.0
 */
@interface JavaIoByteArrayInputStream : JavaIoInputStream {
 @public
  /*!
   @brief An array of bytes that was provided
  by the creator of the stream.Elements <code>buf[0]</code>
  through <code>buf[count-1]</code> are the
  only bytes that can ever be read from the
  stream;  element <code>buf[pos]</code> is
  the next byte to be read.
   */
  IOSByteArray *buf_;
  /*!
   @brief The index of the next character to read from the input stream buffer.
   This value should always be nonnegative
  and not larger than the value of <code>count</code>.
  The next byte to be read from the input stream buffer
  will be <code>buf[pos]</code>.
   */
  jint pos_;
  /*!
   @brief The currently marked position in the stream.
   ByteArrayInputStream objects are marked at position zero by
  default when constructed.  They may be marked at another
  position within the buffer by the <code>mark()</code> method.
  The current buffer position is set to this point by the 
 <code>reset()</code> method. 
 <p>
  If no mark has been set, then the value of mark is the offset
  passed to the constructor (or 0 if the offset was not supplied).
   @since JDK1.1
   */
  jint mark_;
  /*!
   @brief The index one greater than the last valid character in the input
  stream buffer.
   This value should always be nonnegative
  and not larger than the length of <code>buf</code>.
  It  is one greater than the position of
  the last byte within <code>buf</code> that
  can ever be read  from the input stream buffer.
   */
  jint count_;
}

#pragma mark Public

/*!
 @brief Creates a <code>ByteArrayInputStream</code>
  so that it  uses <code>buf</code> as its
  buffer array.
 The buffer array is not copied.
  The initial value of <code>pos</code>
  is <code>0</code> and the initial value
  of  <code>count</code> is the length of 
 <code>buf</code>.
 @param buf the input buffer.
 */
- (instancetype)initWithByteArray:(IOSByteArray *)buf;

/*!
 @brief Creates <code>ByteArrayInputStream</code>
  that uses <code>buf</code> as its
  buffer array.The initial value of <code>pos</code>
  is <code>offset</code> and the initial value
  of <code>count</code> is the minimum of <code>offset+length</code>
  and <code>buf.length</code>.
 The buffer array is not copied. The buffer's mark is
  set to the specified offset.
 @param buf the input buffer.
 @param offset the offset in the buffer of the first byte to read.
 @param length the maximum number of bytes to read from the buffer.
 */
- (instancetype)initWithByteArray:(IOSByteArray *)buf
                          withInt:(jint)offset
                          withInt:(jint)length;

/*!
 @brief Returns the number of remaining bytes that can be read (or skipped over)
  from this input stream.
 <p>
  The value returned is <code>count&nbsp;- pos</code>,
  which is the number of bytes remaining to be read from the input buffer.
 @return the number of remaining bytes that can be read (or skipped
           over) from this input stream without blocking.
 */
- (jint)available;

/*!
 @brief Closing a <tt>ByteArrayInputStream</tt> has no effect.The methods in
  this class can be called after the stream has been closed without
  generating an <tt>IOException</tt>.
 <p>
 */
- (void)close;

/*!
 @brief Set the current marked position in the stream.
 ByteArrayInputStream objects are marked at position zero by
  default when constructed.  They may be marked at another
  position within the buffer by this method. 
 <p>
  If no mark has been set, then the value of the mark is the
  offset passed to the constructor (or 0 if the offset was not
  supplied). 
 <p> Note: The <code>readAheadLimit</code> for this class
   has no meaning.
 @since JDK1.1
 */
- (void)markWithInt:(jint)readAheadLimit;

/*!
 @brief Tests if this <code>InputStream</code> supports mark/reset.The
  <code>markSupported</code> method of <code>ByteArrayInputStream</code>
  always returns <code>true</code>.
 @since JDK1.1
 */
- (jboolean)markSupported;

/*!
 @brief Reads the next byte of data from this input stream.The value
  byte is returned as an <code>int</code> in the range 
 <code>0</code> to <code>255</code>.
 If no byte is available
  because the end of the stream has been reached, the value 
 <code>-1</code> is returned. 
 <p>
  This <code>read</code> method
  cannot block.
 @return the next byte of data, or <code>-1</code> if the end of the
           stream has been reached.
 */
- (jint)read;

/*!
 @brief Reads up to <code>len</code> bytes of data into an array of bytes
  from this input stream.
 If <code>pos</code> equals <code>count</code>,
  then <code>-1</code> is returned to indicate
  end of file. Otherwise, the  number <code>k</code>
  of bytes read is equal to the smaller of 
 <code>len</code> and <code>count-pos</code>.
  If <code>k</code> is positive, then bytes 
 <code>buf[pos]</code> through <code>buf[pos+k-1]</code>
  are copied into <code>b[off]</code>  through 
 <code>b[off+k-1]</code> in the manner performed
  by <code>System.arraycopy</code>. The
  value <code>k</code> is added into <code>pos</code>
  and <code>k</code> is returned. 
 <p>
  This <code>read</code> method cannot block.
 @param b the buffer into which the data is read.
 @param off the start offset in the destination array  <code> b </code>
 @param len the maximum number of bytes read.
 @return the total number of bytes read into the buffer, or
           <code>-1</code> if there is no more data because the end of
           the stream has been reached.
 @throw NullPointerExceptionIf <code>b</code> is <code>null</code>.
 @throw IndexOutOfBoundsExceptionIf <code>off</code> is negative, 
 <code>len</code> is negative, or <code>len</code> is greater than 
 <code>b.length - off</code>
 */
- (jint)readWithByteArray:(IOSByteArray *)b
                  withInt:(jint)off
                  withInt:(jint)len;

/*!
 @brief Resets the buffer to the marked position.The marked position
  is 0 unless another position was marked or an offset was specified
  in the constructor.
 */
- (void)reset;

/*!
 @brief Skips <code>n</code> bytes of input from this input stream.Fewer
  bytes might be skipped if the end of the input stream is reached.
 The actual number <code>k</code>
  of bytes to be skipped is equal to the smaller of 
 <code>n</code> and  <code>count-pos</code>.
  The value <code>k</code> is added into <code>pos</code>
  and <code>k</code> is returned.
 @param n the number of bytes to be skipped.
 @return the actual number of bytes skipped.
 */
- (jlong)skipWithLong:(jlong)n;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoByteArrayInputStream)

J2OBJC_FIELD_SETTER(JavaIoByteArrayInputStream, buf_, IOSByteArray *)

FOUNDATION_EXPORT void JavaIoByteArrayInputStream_initWithByteArray_(JavaIoByteArrayInputStream *self, IOSByteArray *buf);

FOUNDATION_EXPORT JavaIoByteArrayInputStream *new_JavaIoByteArrayInputStream_initWithByteArray_(IOSByteArray *buf) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoByteArrayInputStream *create_JavaIoByteArrayInputStream_initWithByteArray_(IOSByteArray *buf);

FOUNDATION_EXPORT void JavaIoByteArrayInputStream_initWithByteArray_withInt_withInt_(JavaIoByteArrayInputStream *self, IOSByteArray *buf, jint offset, jint length);

FOUNDATION_EXPORT JavaIoByteArrayInputStream *new_JavaIoByteArrayInputStream_initWithByteArray_withInt_withInt_(IOSByteArray *buf, jint offset, jint length) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoByteArrayInputStream *create_JavaIoByteArrayInputStream_initWithByteArray_withInt_withInt_(IOSByteArray *buf, jint offset, jint length);

J2OBJC_TYPE_LITERAL_HEADER(JavaIoByteArrayInputStream)

#endif

#pragma pop_macro("INCLUDE_ALL_JavaIoByteArrayInputStream")
