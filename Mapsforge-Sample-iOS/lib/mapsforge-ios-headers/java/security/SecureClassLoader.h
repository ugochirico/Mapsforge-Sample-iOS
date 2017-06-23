//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/SecureClassLoader.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecuritySecureClassLoader")
#ifdef RESTRICT_JavaSecuritySecureClassLoader
#define INCLUDE_ALL_JavaSecuritySecureClassLoader 0
#else
#define INCLUDE_ALL_JavaSecuritySecureClassLoader 1
#endif
#undef RESTRICT_JavaSecuritySecureClassLoader

#if !defined (JavaSecuritySecureClassLoader_) && (INCLUDE_ALL_JavaSecuritySecureClassLoader || defined(INCLUDE_JavaSecuritySecureClassLoader))
#define JavaSecuritySecureClassLoader_

#define RESTRICT_JavaLangClassLoader 1
#define INCLUDE_JavaLangClassLoader 1
#include "java/lang/ClassLoader.h"

@class IOSByteArray;
@class IOSClass;
@class JavaNioByteBuffer;
@class JavaSecurityCodeSource;
@class JavaSecurityPermissionCollection;

/*!
 @brief This class extends ClassLoader with additional support for defining
  classes with an associated code source and permissions which are
  retrieved by the system policy by default.
 @author Li Gong
 @author Roland Schemers
 */
@interface JavaSecuritySecureClassLoader : JavaLangClassLoader

#pragma mark Protected

/*!
 @brief Creates a new SecureClassLoader using the default parent class
  loader for delegation.
 <p>If there is a security manager, this method first
  calls the security manager's <code>checkCreateClassLoader</code>
  method  to ensure creation of a class loader is allowed.
 @throw SecurityExceptionif a security manager exists and its
              <code>checkCreateClassLoader</code> method doesn't allow
              creation of a class loader.
 - seealso: SecurityManager#checkCreateClassLoader
 */
- (instancetype)init;

/*!
 @brief Creates a new SecureClassLoader using the specified parent
  class loader for delegation.
 <p>If there is a security manager, this method first
  calls the security manager's <code>checkCreateClassLoader</code>
  method  to ensure creation of a class loader is allowed. 
 <p>
 @param parent the parent ClassLoader
 @throw SecurityExceptionif a security manager exists and its
              <code>checkCreateClassLoader</code> method doesn't allow
              creation of a class loader.
 - seealso: SecurityManager#checkCreateClassLoader
 */
- (instancetype)initWithJavaLangClassLoader:(JavaLangClassLoader *)parent;

/*!
 @brief Converts an array of bytes into an instance of class Class,
  with an optional CodeSource.Before the
  class can be used it must be resolved.
 <p>
  If a non-null CodeSource is supplied a ProtectionDomain is
  constructed and associated with the class being defined. 
 <p>
 @param name the expected name of the class, or  <code> null </code>
                    if not known, using '.' and not '/' as the separator                   and without a trailing ".class" suffix.
 @param b the bytes that make up the class data. The bytes in              positions 
  <code> off </code>  through  <code> off+len-1 </code>              should have the format of a valid class file as defined by
               
  <cite> The Java &trade;  Virtual Machine Specification </cite> .
 @param off the start offset in  <code> b </code>  of the class data
 @param len the length of the class data
 @param cs the associated CodeSource, or  <code> null </code>  if none
 @return the <code>Class</code> object created from the data,
          and optional CodeSource.
 @throw ClassFormatErrorif the data did not contain a valid class
 @throw IndexOutOfBoundsExceptionif either <code>off</code> or
              <code>len</code> is negative, or if
              <code>off+len</code> is greater than <code>b.length</code>.
 @throw SecurityExceptionif an attempt is made to add this class
              to a package that contains classes that were signed by
              a different set of certificates than this class, or if
              the class name begins with "java.".
 */
- (IOSClass *)defineClassWithNSString:(NSString *)name
                        withByteArray:(IOSByteArray *)b
                              withInt:(jint)off
                              withInt:(jint)len
           withJavaSecurityCodeSource:(JavaSecurityCodeSource *)cs;

/*!
 @brief Converts a <code><tt>ByteBuffer</tt></code>
  into an instance of class <tt>Class</tt>, with an optional CodeSource.
 Before the class can be used it must be resolved. 
 <p>
  If a non-null CodeSource is supplied a ProtectionDomain is
  constructed and associated with the class being defined. 
 <p>
 @param name the expected name of the class, or  <code> null </code>
                    if not known, using '.' and not '/' as the separator                   and without a trailing ".class" suffix.
 @param b the bytes that make up the class data.  The bytes from positions                   
  <tt> b.position() </tt>  through  <tt> b.position() + b.limit() -1 </tt>                   should have the format of a valid class file as defined by
                    
  <cite> The Java &trade;  Virtual Machine Specification </cite> .
 @param cs the associated CodeSource, or  <code> null </code>  if none
 @return the <code>Class</code> object created from the data,
          and optional CodeSource.
 @throw ClassFormatErrorif the data did not contain a valid class
 @throw SecurityExceptionif an attempt is made to add this class
              to a package that contains classes that were signed by
              a different set of certificates than this class, or if
              the class name begins with "java.".
 @since 1.5
 */
- (IOSClass *)defineClassWithNSString:(NSString *)name
                withJavaNioByteBuffer:(JavaNioByteBuffer *)b
           withJavaSecurityCodeSource:(JavaSecurityCodeSource *)cs;

/*!
 @brief Returns the permissions for the given CodeSource object.
 <p>
  This method is invoked by the defineClass method which takes
  a CodeSource as an argument when it is constructing the
  ProtectionDomain for the class being defined. 
 <p>
 @param codesource the codesource.
 @return the permissions granted to the codesource.
 */
- (JavaSecurityPermissionCollection *)getPermissionsWithJavaSecurityCodeSource:(JavaSecurityCodeSource *)codesource;

@end

J2OBJC_STATIC_INIT(JavaSecuritySecureClassLoader)

FOUNDATION_EXPORT void JavaSecuritySecureClassLoader_initWithJavaLangClassLoader_(JavaSecuritySecureClassLoader *self, JavaLangClassLoader *parent);

FOUNDATION_EXPORT JavaSecuritySecureClassLoader *new_JavaSecuritySecureClassLoader_initWithJavaLangClassLoader_(JavaLangClassLoader *parent) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecuritySecureClassLoader *create_JavaSecuritySecureClassLoader_initWithJavaLangClassLoader_(JavaLangClassLoader *parent);

FOUNDATION_EXPORT void JavaSecuritySecureClassLoader_init(JavaSecuritySecureClassLoader *self);

FOUNDATION_EXPORT JavaSecuritySecureClassLoader *new_JavaSecuritySecureClassLoader_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecuritySecureClassLoader *create_JavaSecuritySecureClassLoader_init();

J2OBJC_TYPE_LITERAL_HEADER(JavaSecuritySecureClassLoader)

#endif

#pragma pop_macro("INCLUDE_ALL_JavaSecuritySecureClassLoader")
