//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/zip/InflaterInputStream.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilZipInflaterInputStream")
#ifdef RESTRICT_JavaUtilZipInflaterInputStream
#define INCLUDE_ALL_JavaUtilZipInflaterInputStream 0
#else
#define INCLUDE_ALL_JavaUtilZipInflaterInputStream 1
#endif
#undef RESTRICT_JavaUtilZipInflaterInputStream

#if !defined (JavaUtilZipInflaterInputStream_) && (INCLUDE_ALL_JavaUtilZipInflaterInputStream || defined(INCLUDE_JavaUtilZipInflaterInputStream))
#define JavaUtilZipInflaterInputStream_

#define RESTRICT_JavaIoFilterInputStream 1
#define INCLUDE_JavaIoFilterInputStream 1
#include "java/io/FilterInputStream.h"

@class IOSByteArray;
@class JavaIoInputStream;
@class JavaUtilZipInflater;

/*!
 @brief This class implements a stream filter for uncompressing data in the
  "deflate" compression format.It is also used as the basis for other
  decompression filters, such as GZIPInputStream.
 - seealso: Inflater
 @author David Connelly
 */
@interface JavaUtilZipInflaterInputStream : JavaIoFilterInputStream {
 @public
  /*!
   @brief Decompressor for this stream.
   */
  JavaUtilZipInflater *inf_;
  /*!
   @brief Input buffer for decompression.
   */
  IOSByteArray *buf_;
  /*!
   @brief Length of input buffer.
   */
  jint len_;
  jboolean closed_;
}

#pragma mark Public

/*!
 @brief Creates a new input stream with a default decompressor and buffer size.
 @param inArg the input stream
 */
- (instancetype)initWithJavaIoInputStream:(JavaIoInputStream *)inArg;

/*!
 @brief Creates a new input stream with the specified decompressor and a
  default buffer size.
 @param inArg the input stream
 @param inf the decompressor ("inflater")
 */
- (instancetype)initWithJavaIoInputStream:(JavaIoInputStream *)inArg
                  withJavaUtilZipInflater:(JavaUtilZipInflater *)inf;

/*!
 @brief Creates a new input stream with the specified decompressor and
  buffer size.
 @param inArg the input stream
 @param inf the decompressor ("inflater")
 @param size the input buffer size
 @throw IllegalArgumentExceptionif size is <= 0
 */
- (instancetype)initWithJavaIoInputStream:(JavaIoInputStream *)inArg
                  withJavaUtilZipInflater:(JavaUtilZipInflater *)inf
                                  withInt:(jint)size;

/*!
 @brief Returns 0 after EOF has been reached, otherwise always return 1.
 <p>
  Programs should not count on this method to return the actual number
  of bytes that could be read without blocking.
 @return 1 before EOF and 0 after EOF.
 @throw IOExceptionif an I/O error occurs.
 */
- (jint)available;

/*!
 @brief Closes this input stream and releases any system resources associated
  with the stream.
 @throw IOExceptionif an I/O error has occurred
 */
- (void)close;

/*!
 @brief Marks the current position in this input stream.
 <p> The <code>mark</code> method of <code>InflaterInputStream</code>
  does nothing.
 @param readlimit the maximum limit of bytes that can be read before                       the mark position becomes invalid.
 - seealso: java.io.InputStream
 */
- (void)markWithInt:(jint)readlimit;

/*!
 @brief Tests if this input stream supports the <code>mark</code> and 
 <code>reset</code> methods.The <code>markSupported</code>
  method of <code>InflaterInputStream</code> returns 
 <code>false</code>.
 @return a <code>boolean</code> indicating if this stream type supports
           the <code>mark</code> and <code>reset</code> methods.
 - seealso: java.io.InputStream
 - seealso: java.io.InputStream
 */
- (jboolean)markSupported;

/*!
 @brief Reads a byte of uncompressed data.This method will block until
  enough input is available for decompression.
 @return the byte read, or -1 if end of compressed input is reached
 @throw IOExceptionif an I/O error has occurred
 */
- (jint)read;

/*!
 @brief Reads uncompressed data into an array of bytes.If <code>len</code> is not
  zero, the method will block until some input can be decompressed; otherwise,
  no bytes are read and <code>0</code> is returned.
 @param b the buffer into which the data is read
 @param off the start offset in the destination array  <code> b </code>
 @param len the maximum number of bytes read
 @return the actual number of bytes read, or -1 if the end of the
          compressed input is reached or a preset dictionary is needed
 @throw NullPointerExceptionIf <code>b</code> is <code>null</code>.
 @throw IndexOutOfBoundsExceptionIf <code>off</code> is negative, 
 <code>len</code> is negative, or <code>len</code> is greater than 
 <code>b.length - off</code>
 @throw ZipExceptionif a ZIP format error has occurred
 @throw IOExceptionif an I/O error has occurred
 */
- (jint)readWithByteArray:(IOSByteArray *)b
                  withInt:(jint)off
                  withInt:(jint)len;

/*!
 @brief Repositions this stream to the position at the time the 
 <code>mark</code> method was last called on this input stream.
 <p> The method <code>reset</code> for class 
 <code>InflaterInputStream</code> does nothing except throw an 
 <code>IOException</code>.
 @throw IOExceptionif this method is invoked.
 - seealso: java.io.InputStream
 - seealso: java.io.IOException
 */
- (void)reset;

/*!
 @brief Skips specified number of bytes of uncompressed data.
 @param n the number of bytes to skip
 @return the actual number of bytes skipped.
 @throw IOExceptionif an I/O error has occurred
 @throw IllegalArgumentExceptionif n < 0
 */
- (jlong)skipWithLong:(jlong)n;

#pragma mark Protected

/*!
 @brief Fills input buffer with more data to decompress.
 @throw IOExceptionif an I/O error has occurred
 */
- (void)fill;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilZipInflaterInputStream)

J2OBJC_FIELD_SETTER(JavaUtilZipInflaterInputStream, inf_, JavaUtilZipInflater *)
J2OBJC_FIELD_SETTER(JavaUtilZipInflaterInputStream, buf_, IOSByteArray *)

FOUNDATION_EXPORT void JavaUtilZipInflaterInputStream_initWithJavaIoInputStream_withJavaUtilZipInflater_withInt_(JavaUtilZipInflaterInputStream *self, JavaIoInputStream *inArg, JavaUtilZipInflater *inf, jint size);

FOUNDATION_EXPORT JavaUtilZipInflaterInputStream *new_JavaUtilZipInflaterInputStream_initWithJavaIoInputStream_withJavaUtilZipInflater_withInt_(JavaIoInputStream *inArg, JavaUtilZipInflater *inf, jint size) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilZipInflaterInputStream *create_JavaUtilZipInflaterInputStream_initWithJavaIoInputStream_withJavaUtilZipInflater_withInt_(JavaIoInputStream *inArg, JavaUtilZipInflater *inf, jint size);

FOUNDATION_EXPORT void JavaUtilZipInflaterInputStream_initWithJavaIoInputStream_withJavaUtilZipInflater_(JavaUtilZipInflaterInputStream *self, JavaIoInputStream *inArg, JavaUtilZipInflater *inf);

FOUNDATION_EXPORT JavaUtilZipInflaterInputStream *new_JavaUtilZipInflaterInputStream_initWithJavaIoInputStream_withJavaUtilZipInflater_(JavaIoInputStream *inArg, JavaUtilZipInflater *inf) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilZipInflaterInputStream *create_JavaUtilZipInflaterInputStream_initWithJavaIoInputStream_withJavaUtilZipInflater_(JavaIoInputStream *inArg, JavaUtilZipInflater *inf);

FOUNDATION_EXPORT void JavaUtilZipInflaterInputStream_initWithJavaIoInputStream_(JavaUtilZipInflaterInputStream *self, JavaIoInputStream *inArg);

FOUNDATION_EXPORT JavaUtilZipInflaterInputStream *new_JavaUtilZipInflaterInputStream_initWithJavaIoInputStream_(JavaIoInputStream *inArg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilZipInflaterInputStream *create_JavaUtilZipInflaterInputStream_initWithJavaIoInputStream_(JavaIoInputStream *inArg);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilZipInflaterInputStream)

#endif

#pragma pop_macro("INCLUDE_ALL_JavaUtilZipInflaterInputStream")
