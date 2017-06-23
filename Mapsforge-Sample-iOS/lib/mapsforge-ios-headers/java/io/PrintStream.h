//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/io/PrintStream.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaIoPrintStream")
#ifdef RESTRICT_JavaIoPrintStream
#define INCLUDE_ALL_JavaIoPrintStream 0
#else
#define INCLUDE_ALL_JavaIoPrintStream 1
#endif
#undef RESTRICT_JavaIoPrintStream

#if !defined (JavaIoPrintStream_) && (INCLUDE_ALL_JavaIoPrintStream || defined(INCLUDE_JavaIoPrintStream))
#define JavaIoPrintStream_

#define RESTRICT_JavaIoFilterOutputStream 1
#define INCLUDE_JavaIoFilterOutputStream 1
#include "java/io/FilterOutputStream.h"

#define RESTRICT_JavaLangAppendable 1
#define INCLUDE_JavaLangAppendable 1
#include "java/lang/Appendable.h"

#define RESTRICT_JavaIoCloseable 1
#define INCLUDE_JavaIoCloseable 1
#include "java/io/Closeable.h"

@class IOSByteArray;
@class IOSCharArray;
@class IOSObjectArray;
@class JavaIoFile;
@class JavaIoOutputStream;
@class JavaUtilLocale;
@protocol JavaLangCharSequence;

/*!
 @brief A <code>PrintStream</code> adds functionality to another output stream,
  namely the ability to print representations of various data values
  conveniently.Two other features are provided as well.
 Unlike other output
  streams, a <code>PrintStream</code> never throws an 
 <code>IOException</code>; instead, exceptional situations merely set an
  internal flag that can be tested via the <code>checkError</code> method.
  Optionally, a <code>PrintStream</code> can be created so as to flush
  automatically; this means that the <code>flush</code> method is
  automatically invoked after a byte array is written, one of the 
 <code>println</code> methods is invoked, or a newline character or byte
  (<code>'\n'</code>) is written. 
 <p> All characters printed by a <code>PrintStream</code> are converted into
  bytes using the platform's default character encoding.  The <code><code>PrintWriter</code>
 </code> class should be used in situations that require writing
  characters rather than bytes.
 @author Frank Yellin
 @author Mark Reinhold
 @since JDK1.0
 */
@interface JavaIoPrintStream : JavaIoFilterOutputStream < JavaLangAppendable, JavaIoCloseable >

#pragma mark Public

/*!
 @brief Creates a new print stream, without automatic line flushing, with the
  specified file.This convenience constructor creates the necessary
  intermediate <code>OutputStreamWriter</code>,
  which will encode characters using the charset
  for this
  instance of the Java virtual machine.
 @param file The file to use as the destination of this print stream.  If the
           file exists, then it will be truncated to zero size; otherwise,
           a new file will be created.  The output will be written to the
           file and is buffered.
 @throw FileNotFoundException
 If the given file object does not denote an existing, writable
           regular file and a new regular file of that name cannot be
           created, or if some other error occurs while opening or
           creating the file
 @throw SecurityException
 If a security manager is present and <code>checkWrite(file.getPath())</code>
           denies write access to the file
 @since 1.5
 */
- (instancetype)initWithJavaIoFile:(JavaIoFile *)file;

/*!
 @brief Creates a new print stream, without automatic line flushing, with the
  specified file and charset.This convenience constructor creates
  the necessary intermediate <code>OutputStreamWriter</code>
 , which will encode characters using the provided
  charset.
 @param file The file to use as the destination of this print stream.  If the
           file exists, then it will be truncated to zero size; otherwise,
           a new file will be created.  The output will be written to the
           file and is buffered.
 @param csn The name of a supported 
 charset
 @throw FileNotFoundException
 If the given file object does not denote an existing, writable
           regular file and a new regular file of that name cannot be
           created, or if some other error occurs while opening or
           creating the file
 @throw SecurityException
 If a security manager is presentand <code>checkWrite(file.getPath())</code>
           denies write access to the file
 @throw UnsupportedEncodingException
 If the named charset is not supported
 @since 1.5
 */
- (instancetype)initWithJavaIoFile:(JavaIoFile *)file
                      withNSString:(NSString *)csn;

/*!
 @brief Creates a new print stream.This stream will not flush automatically.
 @param outArg The output stream to which values and objects will be                     printed
 - seealso: java.io.PrintWriter
 */
- (instancetype)initWithJavaIoOutputStream:(JavaIoOutputStream *)outArg;

/*!
 @brief Creates a new print stream.
 @param outArg The output stream to which values and objects will be                     printed
 @param autoFlush A boolean; if true, the output buffer will be flushed                     whenever a byte array is written, one of the
                      
  <code> println </code>  methods is invoked, or a newline                     character or byte (
  <code> '\n' </code> ) is written
 - seealso: java.io.PrintWriter
 */
- (instancetype)initWithJavaIoOutputStream:(JavaIoOutputStream *)outArg
                               withBoolean:(jboolean)autoFlush;

/*!
 @brief Creates a new print stream.
 @param outArg The output stream to which values and objects will be                     printed
 @param autoFlush A boolean; if true, the output buffer will be flushed                     whenever a byte array is written, one of the
                      
  <code> println </code>  methods is invoked, or a newline                     character or byte (
  <code> '\n' </code> ) is written
 @param encoding The name of a supported                     
  <a href="../lang/package-summary.html#charenc">                     character encoding
  </a>
 @throw UnsupportedEncodingException
 If the named encoding is not supported
 @since 1.4
 */
- (instancetype)initWithJavaIoOutputStream:(JavaIoOutputStream *)outArg
                               withBoolean:(jboolean)autoFlush
                              withNSString:(NSString *)encoding;

/*!
 @brief Creates a new print stream, without automatic line flushing, with the
  specified file name.This convenience constructor creates
  the necessary intermediate <code>OutputStreamWriter</code>
 , which will encode characters using the 
 charset
  for this instance of the Java virtual machine.
 @param fileName The name of the file to use as the destination of this print
           stream.  If the file exists, then it will be truncated to
           zero size; otherwise, a new file will be created.  The output
           will be written to the file and is buffered.
 @throw FileNotFoundException
 If the given file object does not denote an existing, writable
           regular file and a new regular file of that name cannot be
           created, or if some other error occurs while opening or
           creating the file
 @throw SecurityException
 If a security manager is present and <code>checkWrite(fileName)</code>
  denies write
           access to the file
 @since 1.5
 */
- (instancetype)initWithNSString:(NSString *)fileName;

/*!
 @brief Creates a new print stream, without automatic line flushing, with the
  specified file name and charset.This convenience constructor creates
  the necessary intermediate <code>OutputStreamWriter</code>
 , which will encode characters using the provided
  charset.
 @param fileName The name of the file to use as the destination of this print
           stream.  If the file exists, then it will be truncated to
           zero size; otherwise, a new file will be created.  The output
           will be written to the file and is buffered.
 @param csn The name of a supported 
 charset
 @throw FileNotFoundException
 If the given file object does not denote an existing, writable
           regular file and a new regular file of that name cannot be
           created, or if some other error occurs while opening or
           creating the file
 @throw SecurityException
 If a security manager is present and <code>checkWrite(fileName)</code>
  denies write
           access to the file
 @throw UnsupportedEncodingException
 If the named charset is not supported
 @since 1.5
 */
- (instancetype)initWithNSString:(NSString *)fileName
                    withNSString:(NSString *)csn;

/*!
 @brief Appends the specified character to this output stream.
 <p> An invocation of this method of the form <tt>out.append(c)</tt>
  behaves in exactly the same way as the invocation 
 @code

      out.print(c) 
@endcode
 @param c The 16-bit character to append
 @return This output stream
 @since 1.5
 */
- (JavaIoPrintStream *)appendWithChar:(jchar)c;

/*!
 @brief Appends the specified character sequence to this output stream.
 <p> An invocation of this method of the form <tt>out.append(csq)</tt>
  behaves in exactly the same way as the invocation 
 @code

      out.print(csq.toString()) 
@endcode
  
 <p> Depending on the specification of <tt>toString</tt> for the
  character sequence <tt>csq</tt>, the entire sequence may not be
  appended.  For instance, invoking then <tt>toString</tt> method of a
  character buffer will return a subsequence whose content depends upon
  the buffer's position and limit.
 @param csq The character sequence to append.  If 
  <tt> csq </tt>  is           <tt>
  null </tt> , then the four characters  <tt> "null" </tt>  are          appended to this output stream.
 @return This output stream
 @since 1.5
 */
- (JavaIoPrintStream *)appendWithJavaLangCharSequence:(id<JavaLangCharSequence>)csq;

/*!
 @brief Appends a subsequence of the specified character sequence to this output
  stream.
 <p> An invocation of this method of the form <tt>out.append(csq, start,
  end)</tt> when <tt>csq</tt> is not <tt>null</tt>, behaves in
  exactly the same way as the invocation 
 @code

      out.print(csq.subSequence(start, end).toString()) 
@endcode
 @param csq The character sequence from which a subsequence will be
           appended.  If 
  <tt> csq </tt>  is  <tt> null </tt> , then characters          will be appended as if 
  <tt> csq </tt>  contained the four          characters 
  <tt> "null" </tt> .
 @param start The index of the first character in the subsequence
 @param end The index of the character following the last character in the
           subsequence
 @return This output stream
 @throw IndexOutOfBoundsException
 If <tt>start</tt> or <tt>end</tt> are negative, <tt>start</tt>
           is greater than <tt>end</tt>, or <tt>end</tt> is greater than
           <tt>csq.length()</tt>
 @since 1.5
 */
- (JavaIoPrintStream *)appendWithJavaLangCharSequence:(id<JavaLangCharSequence>)csq
                                              withInt:(jint)start
                                              withInt:(jint)end;

/*!
 @brief Flushes the stream and checks its error state.The internal error state
  is set to <code>true</code> when the underlying output stream throws an 
 <code>IOException</code> other than <code>InterruptedIOException</code>,
  and when the <code>setError</code> method is invoked.
 If an operation
  on the underlying output stream throws an 
 <code>InterruptedIOException</code>, then the <code>PrintStream</code>
  converts the exception back into an interrupt by doing: 
 @code

      Thread.currentThread().interrupt(); 
  
@endcode
  or the equivalent.
 @return <code>true</code> if and only if this stream has encountered an
          <code>IOException</code> other than
          <code>InterruptedIOException</code>, or the
          <code>setError</code> method has been invoked
 */
- (jboolean)checkError;

/*!
 @brief Closes the stream.This is done by flushing the stream and then closing
  the underlying output stream.
 - seealso: java.io.OutputStream
 */
- (void)close;

/*!
 @brief Flushes the stream.This is done by writing any buffered output bytes to
  the underlying output stream and then flushing that stream.
 - seealso: java.io.OutputStream
 */
- (void)flush;

/*!
 @brief Writes a formatted string to this output stream using the specified
  format string and arguments.
 @param l The 
 locale  to apply during          formatting.  If 
  <tt> l </tt>  is  <tt> null </tt>  then no localization          is applied.
 @param format A format string as described in 
  <a href="../util/Formatter.html#syntax">
  Format string syntax </a>
 @param args Arguments referenced by the format specifiers in the format
           string.  If there are more arguments than format specifiers, the
           extra arguments are ignored.  The number of arguments is
           variable and may be zero.  The maximum number of arguments is
           limited by the maximum dimension of a Java array as defined by
            <cite> The Java &trade;  Virtual Machine Specification </cite> .          The behaviour on a           <tt> null </tt>  argument depends on the  <a href="../util/Formatter.html#syntax"> conversion </a> .
 @throw IllegalFormatException
 If a format string contains an illegal syntax, a format
           specifier that is incompatible with the given arguments,
           insufficient arguments given the format string, or other
           illegal conditions.  For specification of all possible
           formatting errors, see the <a href="../util/Formatter.html#detail">
 Details</a> section of the
           formatter class specification.
 @throw NullPointerException
 If the <tt>format</tt> is <tt>null</tt>
 @return This output stream
 @since 1.5
 */
- (JavaIoPrintStream *)formatWithJavaUtilLocale:(JavaUtilLocale *)l
                                   withNSString:(NSString *)format
                              withNSObjectArray:(IOSObjectArray *)args;

/*!
 @brief Writes a formatted string to this output stream using the specified
  format string and arguments.
 <p> The locale always used is the one returned by <code>Locale.getDefault()</code>
 , regardless of any
  previous invocations of other formatting methods on this object.
 @param format A format string as described in 
  <a href="../util/Formatter.html#syntax">
  Format string syntax </a>
 @param args Arguments referenced by the format specifiers in the format
           string.  If there are more arguments than format specifiers, the
           extra arguments are ignored.  The number of arguments is
           variable and may be zero.  The maximum number of arguments is
           limited by the maximum dimension of a Java array as defined by
            <cite> The Java &trade;  Virtual Machine Specification </cite> .          The behaviour on a           <tt> null </tt>  argument depends on the  <a href="../util/Formatter.html#syntax"> conversion </a> .
 @throw IllegalFormatException
 If a format string contains an illegal syntax, a format
           specifier that is incompatible with the given arguments,
           insufficient arguments given the format string, or other
           illegal conditions.  For specification of all possible
           formatting errors, see the <a href="../util/Formatter.html#detail">
 Details</a> section of the
           formatter class specification.
 @throw NullPointerException
 If the <tt>format</tt> is <tt>null</tt>
 @return This output stream
 @since 1.5
 */
- (JavaIoPrintStream *)formatWithNSString:(NSString *)format
                        withNSObjectArray:(IOSObjectArray *)args;

/*!
 @brief Prints a boolean value.The string produced by <code><code>java.lang.String</code>
 </code> is translated into bytes
  according to the platform's default character encoding, and these bytes
  are written in exactly the manner of the 
 <code><code>write(int)</code></code> method.
 @param b The  <code> boolean </code>  to be printed
 */
- (void)printWithBoolean:(jboolean)b;

/*!
 @brief Prints a character.The character is translated into one or more bytes
  according to the platform's default character encoding, and these bytes
  are written in exactly the manner of the 
 <code><code>write(int)</code></code> method.
 @param c The  <code> char </code>  to be printed
 */
- (void)printWithChar:(jchar)c;

/*!
 @brief Prints an array of characters.The characters are converted into bytes
  according to the platform's default character encoding, and these bytes
  are written in exactly the manner of the 
 <code><code>write(int)</code></code> method.
 @param s The array of chars to be printed
 @throw NullPointerExceptionIf <code>s</code> is <code>null</code>
 */
- (void)printWithCharArray:(IOSCharArray *)s;

/*!
 @brief Prints a double-precision floating-point number.The string produced by 
 <code><code>java.lang.String</code></code> is translated into
  bytes according to the platform's default character encoding, and these
  bytes are written in exactly the manner of the <code><code>write(int)</code>
 </code> method.
 @param d The  <code> double </code>  to be printed
 - seealso: java.lang.Double
 */
- (void)printWithDouble:(jdouble)d;

/*!
 @brief Prints a floating-point number.The string produced by <code><code>java.lang.String</code>
 </code> is translated into bytes
  according to the platform's default character encoding, and these bytes
  are written in exactly the manner of the 
 <code><code>write(int)</code></code> method.
 @param f The  <code> float </code>  to be printed
 - seealso: java.lang.Float
 */
- (void)printWithFloat:(jfloat)f;

/*!
 @brief Prints an integer.The string produced by <code><code>java.lang.String</code>
 </code> is translated into bytes
  according to the platform's default character encoding, and these bytes
  are written in exactly the manner of the 
 <code><code>write(int)</code></code> method.
 @param i The  <code> int </code>  to be printed
 - seealso: java.lang.Integer
 */
- (void)printWithInt:(jint)i;

/*!
 @brief Prints a long integer.The string produced by <code><code>java.lang.String</code>
 </code> is translated into bytes
  according to the platform's default character encoding, and these bytes
  are written in exactly the manner of the 
 <code><code>write(int)</code></code> method.
 @param l The  <code> long </code>  to be printed
 - seealso: java.lang.Long
 */
- (void)printWithLong:(jlong)l;

/*!
 @brief Prints an object.The string produced by the <code><code>java.lang.String</code>
 </code> method is translated into bytes
  according to the platform's default character encoding, and these bytes
  are written in exactly the manner of the 
 <code><code>write(int)</code></code> method.
 @param obj The  <code> Object </code>  to be printed
 - seealso: java.lang.Object
 */
- (void)printWithId:(id)obj;

/*!
 @brief Prints a string.If the argument is <code>null</code> then the string 
 <code>"null"</code> is printed.
 Otherwise, the string's characters are
  converted into bytes according to the platform's default character
  encoding, and these bytes are written in exactly the manner of the 
 <code><code>write(int)</code></code> method.
 @param s The  <code> String </code>  to be printed
 */
- (void)printWithNSString:(NSString *)s;

/*!
 @brief A convenience method to write a formatted string to this output stream
  using the specified format string and arguments.
 <p> An invocation of this method of the form <tt>out.printf(l, format,
  args)</tt> behaves in exactly the same way as the invocation 
 @code

      out.format(l, format, args) 
@endcode
 @param l The 
 locale  to apply during          formatting.  If 
  <tt> l </tt>  is  <tt> null </tt>  then no localization          is applied.
 @param format A format string as described in 
  <a href="../util/Formatter.html#syntax">
  Format string syntax </a>
 @param args Arguments referenced by the format specifiers in the format
           string.  If there are more arguments than format specifiers, the
           extra arguments are ignored.  The number of arguments is
           variable and may be zero.  The maximum number of arguments is
           limited by the maximum dimension of a Java array as defined by
            <cite> The Java &trade;  Virtual Machine Specification </cite> .          The behaviour on a           <tt> null </tt>  argument depends on the  <a href="../util/Formatter.html#syntax"> conversion </a> .
 @throw IllegalFormatException
 If a format string contains an illegal syntax, a format
           specifier that is incompatible with the given arguments,
           insufficient arguments given the format string, or other
           illegal conditions.  For specification of all possible
           formatting errors, see the <a href="../util/Formatter.html#detail">
 Details</a> section of the
           formatter class specification.
 @throw NullPointerException
 If the <tt>format</tt> is <tt>null</tt>
 @return This output stream
 @since 1.5
 */
- (JavaIoPrintStream *)printfWithJavaUtilLocale:(JavaUtilLocale *)l
                                   withNSString:(NSString *)format
                              withNSObjectArray:(IOSObjectArray *)args;

/*!
 @brief A convenience method to write a formatted string to this output stream
  using the specified format string and arguments.
 <p> An invocation of this method of the form <tt>out.printf(format,
  args)</tt> behaves in exactly the same way as the invocation 
 @code

      out.format(format, args) 
@endcode
 @param format A format string as described in 
  <a href="../util/Formatter.html#syntax">
  Format string syntax </a>
 @param args Arguments referenced by the format specifiers in the format
           string.  If there are more arguments than format specifiers, the
           extra arguments are ignored.  The number of arguments is
           variable and may be zero.  The maximum number of arguments is
           limited by the maximum dimension of a Java array as defined by
            <cite> The Java &trade;  Virtual Machine Specification </cite> .          The behaviour on a           <tt> null </tt>  argument depends on the  <a href="../util/Formatter.html#syntax"> conversion </a> .
 @throw IllegalFormatException
 If a format string contains an illegal syntax, a format
           specifier that is incompatible with the given arguments,
           insufficient arguments given the format string, or other
           illegal conditions.  For specification of all possible
           formatting errors, see the <a href="../util/Formatter.html#detail">
 Details</a> section of the
           formatter class specification.
 @throw NullPointerException
 If the <tt>format</tt> is <tt>null</tt>
 @return This output stream
 @since 1.5
 */
- (JavaIoPrintStream *)printfWithNSString:(NSString *)format
                        withNSObjectArray:(IOSObjectArray *)args;

/*!
 @brief Terminates the current line by writing the line separator string.The
  line separator string is defined by the system property 
 <code>line.separator</code>, and is not necessarily a single newline
  character (<code>'\n'</code>).
 */
- (void)println;

/*!
 @brief Prints a boolean and then terminate the line.This method behaves as
  though it invokes <code><code>print(boolean)</code></code> and then 
 <code><code>println()</code></code>.
 @param x The  <code> boolean </code>  to be printed
 */
- (void)printlnWithBoolean:(jboolean)x;

/*!
 @brief Prints a character and then terminate the line.This method behaves as
  though it invokes <code><code>print(char)</code></code> and then 
 <code><code>println()</code></code>.
 @param x The  <code> char </code>  to be printed.
 */
- (void)printlnWithChar:(jchar)x;

/*!
 @brief Prints an array of characters and then terminate the line.This method
  behaves as though it invokes <code><code>print(char[])</code></code> and
  then <code><code>println()</code></code>.
 @param x an array of chars to print.
 */
- (void)printlnWithCharArray:(IOSCharArray *)x;

/*!
 @brief Prints a double and then terminate the line.This method behaves as
  though it invokes <code><code>print(double)</code></code> and then 
 <code><code>println()</code></code>.
 @param x The  <code> double </code>  to be printed.
 */
- (void)printlnWithDouble:(jdouble)x;

/*!
 @brief Prints a float and then terminate the line.This method behaves as
  though it invokes <code><code>print(float)</code></code> and then 
 <code><code>println()</code></code>.
 @param x The  <code> float </code>  to be printed.
 */
- (void)printlnWithFloat:(jfloat)x;

/*!
 @brief Prints an integer and then terminate the line.This method behaves as
  though it invokes <code><code>print(int)</code></code> and then 
 <code><code>println()</code></code>.
 @param x The  <code> int </code>  to be printed.
 */
- (void)printlnWithInt:(jint)x;

/*!
 @brief Prints a long and then terminate the line.This method behaves as
  though it invokes <code><code>print(long)</code></code> and then 
 <code><code>println()</code></code>.
 @param x a The  <code> long </code>  to be printed.
 */
- (void)printlnWithLong:(jlong)x;

/*!
 @brief Prints an Object and then terminate the line.This method calls
  at first String.valueOf(x) to get the printed object's string value,
  then behaves as
  though it invokes <code><code>print(String)</code></code> and then 
 <code><code>println()</code></code>.
 @param x The  <code> Object </code>  to be printed.
 */
- (void)printlnWithId:(id)x;

/*!
 @brief Prints a String and then terminate the line.This method behaves as
  though it invokes <code><code>print(String)</code></code> and then 
 <code><code>println()</code></code>.
 @param x The  <code> String </code>  to be printed.
 */
- (void)printlnWithNSString:(NSString *)x;

/*!
 @brief Writes <code>len</code> bytes from the specified byte array starting at
  offset <code>off</code> to this stream.If automatic flushing is
  enabled then the <code>flush</code> method will be invoked.
 <p> Note that the bytes will be written as given; to write characters
  that will be translated according to the platform's default character
  encoding, use the <code>print(char)</code> or <code>println(char)</code>
  methods.
 @param buf A byte array
 @param off Offset from which to start taking bytes
 @param len Number of bytes to write
 */
- (void)writeWithByteArray:(IOSByteArray *)buf
                   withInt:(jint)off
                   withInt:(jint)len;

/*!
 @brief Writes the specified byte to this stream.If the byte is a newline and
  automatic flushing is enabled then the <code>flush</code> method will be
  invoked.
 <p> Note that the byte is written as given; to write a character that
  will be translated according to the platform's default character
  encoding, use the <code>print(char)</code> or <code>println(char)</code>
  methods.
 @param b The byte to be written
 - seealso: #print(char)
 - seealso: #println(char)
 */
- (void)writeWithInt:(jint)b;

#pragma mark Protected

/*!
 @brief Clears the internal error state of this stream.
 <p> This method will cause subsequent invocations of <code>checkError()</code>
  to return <tt>false</tt> until another write
  operation fails and invokes <code>setError()</code>.
 @since 1.6
 */
- (void)clearError;

/*!
 @brief Sets the error state of the stream to <code>true</code>.
 <p> This method will cause subsequent invocations of <code>checkError()</code>
  to return <tt>true</tt> until <code>clearError()</code>
  is invoked.
 @since JDK1.1
 */
- (void)setError;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoPrintStream)

FOUNDATION_EXPORT void JavaIoPrintStream_initWithJavaIoOutputStream_(JavaIoPrintStream *self, JavaIoOutputStream *outArg);

FOUNDATION_EXPORT JavaIoPrintStream *new_JavaIoPrintStream_initWithJavaIoOutputStream_(JavaIoOutputStream *outArg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoPrintStream *create_JavaIoPrintStream_initWithJavaIoOutputStream_(JavaIoOutputStream *outArg);

FOUNDATION_EXPORT void JavaIoPrintStream_initWithJavaIoOutputStream_withBoolean_(JavaIoPrintStream *self, JavaIoOutputStream *outArg, jboolean autoFlush);

FOUNDATION_EXPORT JavaIoPrintStream *new_JavaIoPrintStream_initWithJavaIoOutputStream_withBoolean_(JavaIoOutputStream *outArg, jboolean autoFlush) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoPrintStream *create_JavaIoPrintStream_initWithJavaIoOutputStream_withBoolean_(JavaIoOutputStream *outArg, jboolean autoFlush);

FOUNDATION_EXPORT void JavaIoPrintStream_initWithJavaIoOutputStream_withBoolean_withNSString_(JavaIoPrintStream *self, JavaIoOutputStream *outArg, jboolean autoFlush, NSString *encoding);

FOUNDATION_EXPORT JavaIoPrintStream *new_JavaIoPrintStream_initWithJavaIoOutputStream_withBoolean_withNSString_(JavaIoOutputStream *outArg, jboolean autoFlush, NSString *encoding) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoPrintStream *create_JavaIoPrintStream_initWithJavaIoOutputStream_withBoolean_withNSString_(JavaIoOutputStream *outArg, jboolean autoFlush, NSString *encoding);

FOUNDATION_EXPORT void JavaIoPrintStream_initWithNSString_(JavaIoPrintStream *self, NSString *fileName);

FOUNDATION_EXPORT JavaIoPrintStream *new_JavaIoPrintStream_initWithNSString_(NSString *fileName) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoPrintStream *create_JavaIoPrintStream_initWithNSString_(NSString *fileName);

FOUNDATION_EXPORT void JavaIoPrintStream_initWithNSString_withNSString_(JavaIoPrintStream *self, NSString *fileName, NSString *csn);

FOUNDATION_EXPORT JavaIoPrintStream *new_JavaIoPrintStream_initWithNSString_withNSString_(NSString *fileName, NSString *csn) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoPrintStream *create_JavaIoPrintStream_initWithNSString_withNSString_(NSString *fileName, NSString *csn);

FOUNDATION_EXPORT void JavaIoPrintStream_initWithJavaIoFile_(JavaIoPrintStream *self, JavaIoFile *file);

FOUNDATION_EXPORT JavaIoPrintStream *new_JavaIoPrintStream_initWithJavaIoFile_(JavaIoFile *file) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoPrintStream *create_JavaIoPrintStream_initWithJavaIoFile_(JavaIoFile *file);

FOUNDATION_EXPORT void JavaIoPrintStream_initWithJavaIoFile_withNSString_(JavaIoPrintStream *self, JavaIoFile *file, NSString *csn);

FOUNDATION_EXPORT JavaIoPrintStream *new_JavaIoPrintStream_initWithJavaIoFile_withNSString_(JavaIoFile *file, NSString *csn) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoPrintStream *create_JavaIoPrintStream_initWithJavaIoFile_withNSString_(JavaIoFile *file, NSString *csn);

J2OBJC_TYPE_LITERAL_HEADER(JavaIoPrintStream)

#endif

#pragma pop_macro("INCLUDE_ALL_JavaIoPrintStream")
