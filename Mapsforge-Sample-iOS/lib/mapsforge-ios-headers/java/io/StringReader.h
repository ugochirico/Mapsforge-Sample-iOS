//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/io/StringReader.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaIoStringReader")
#ifdef RESTRICT_JavaIoStringReader
#define INCLUDE_ALL_JavaIoStringReader 0
#else
#define INCLUDE_ALL_JavaIoStringReader 1
#endif
#undef RESTRICT_JavaIoStringReader

#if !defined (JavaIoStringReader_) && (INCLUDE_ALL_JavaIoStringReader || defined(INCLUDE_JavaIoStringReader))
#define JavaIoStringReader_

#define RESTRICT_JavaIoReader 1
#define INCLUDE_JavaIoReader 1
#include "java/io/Reader.h"

@class IOSCharArray;

/*!
 @brief A character stream whose source is a string.
 @author Mark Reinhold
 @since JDK1.1
 */
@interface JavaIoStringReader : JavaIoReader

#pragma mark Public

/*!
 @brief Creates a new string reader.
 @param s String providing the character stream.
 */
- (instancetype)initWithNSString:(NSString *)s;

/*!
 @brief Closes the stream and releases any system resources associated with
  it.Once the stream has been closed, further read(),
  ready(), mark(), or reset() invocations will throw an IOException.
 Closing a previously closed stream has no effect.
 */
- (void)close;

/*!
 @brief Marks the present position in the stream.Subsequent calls to reset()
  will reposition the stream to this point.
 @param readAheadLimit Limit on the number of characters that may be                          read while still preserving the mark.  Because
                           the stream's input comes from a string, there
                           is no actual limit, so this argument must not
                           be negative, but is otherwise ignored.
 @throw IllegalArgumentExceptionIf readAheadLimit is < 0
 @throw IOExceptionIf an I/O error occurs
 */
- (void)markWithInt:(jint)readAheadLimit;

/*!
 @brief Tells whether this stream supports the mark() operation, which it does.
 */
- (jboolean)markSupported;

/*!
 @brief Reads a single character.
 @return The character read, or -1 if the end of the stream has been
              reached
 @throw IOExceptionIf an I/O error occurs
 */
- (jint)read;

/*!
 @brief Reads characters into a portion of an array.
 @param cbuf Destination buffer
 @param off Offset at which to start writing characters
 @param len Maximum number of characters to read
 @return The number of characters read, or -1 if the end of the
              stream has been reached
 @throw IOExceptionIf an I/O error occurs
 */
- (jint)readWithCharArray:(IOSCharArray *)cbuf
                  withInt:(jint)off
                  withInt:(jint)len;

/*!
 @brief Tells whether this stream is ready to be read.
 @return True if the next read() is guaranteed not to block for input
 @throw IOExceptionIf the stream is closed
 */
- (jboolean)ready;

/*!
 @brief Resets the stream to the most recent mark, or to the beginning of the
  string if it has never been marked.
 @throw IOExceptionIf an I/O error occurs
 */
- (void)reset;

/*!
 @brief Skips the specified number of characters in the stream.Returns
  the number of characters that were skipped.
 <p>The <code>ns</code> parameter may be negative, even though the 
 <code>skip</code> method of the <code>Reader</code> superclass throws
  an exception in this case. Negative values of <code>ns</code> cause the
  stream to skip backwards. Negative return values indicate a skip
  backwards. It is not possible to skip backwards past the beginning of
  the string. 
 <p>If the entire string has been read or skipped, then this method has
  no effect and always returns 0.
 @throw IOExceptionIf an I/O error occurs
 */
- (jlong)skipWithLong:(jlong)ns;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoStringReader)

FOUNDATION_EXPORT void JavaIoStringReader_initWithNSString_(JavaIoStringReader *self, NSString *s);

FOUNDATION_EXPORT JavaIoStringReader *new_JavaIoStringReader_initWithNSString_(NSString *s) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoStringReader *create_JavaIoStringReader_initWithNSString_(NSString *s);

J2OBJC_TYPE_LITERAL_HEADER(JavaIoStringReader)

#endif

#pragma pop_macro("INCLUDE_ALL_JavaIoStringReader")
