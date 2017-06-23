//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/URLClassLoader.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNetURLClassLoader")
#ifdef RESTRICT_JavaNetURLClassLoader
#define INCLUDE_ALL_JavaNetURLClassLoader 0
#else
#define INCLUDE_ALL_JavaNetURLClassLoader 1
#endif
#undef RESTRICT_JavaNetURLClassLoader

#if !defined (JavaNetURLClassLoader_) && (INCLUDE_ALL_JavaNetURLClassLoader || defined(INCLUDE_JavaNetURLClassLoader))
#define JavaNetURLClassLoader_

#define RESTRICT_JavaSecuritySecureClassLoader 1
#define INCLUDE_JavaSecuritySecureClassLoader 1
#include "java/security/SecureClassLoader.h"

@class IOSObjectArray;
@class JavaLangClassLoader;
@class JavaNetURL;
@class JavaUtilArrayList;
@protocol JavaNetURLStreamHandlerFactory;
@protocol JavaUtilEnumeration;

/*!
 @brief This class loader is responsible for loading classes and resources from a
  list of URLs which can refer to either directories or JAR files.Classes
  loaded by this <code>URLClassLoader</code> are granted permission to access the
  URLs contained in the URL search list.
 This version has been simplified, since iOS is prohibited from dynamically
  loading classes from bundles other than the main app bundle. No code was
  shared, just its public API.
 */
@interface JavaNetURLClassLoader : JavaSecuritySecureClassLoader {
 @public
  JavaUtilArrayList *urls_;
}

#pragma mark Public

/*!
 @brief Constructs a new <code>URLClassLoader</code> instance.The newly created
  instance will have the system ClassLoader as its parent.
 URLs that end
  with "/" are assumed to be directories, otherwise they are assumed to be
  JAR files.
 @param urls the list of URLs where a specific class or file could be
              found.
 */
- (instancetype)initWithJavaNetURLArray:(IOSObjectArray *)urls;

/*!
 @brief Constructs a new URLClassLoader instance.The newly created instance will
  have the system ClassLoader as its parent.
 URLs that end with "/" are
  assumed to be directories, otherwise they are assumed to be JAR files.
 @param urls the list of URLs where a specific class or file could be
              found.
 @param parent the class loader to assign as this loader's parent.
 */
- (instancetype)initWithJavaNetURLArray:(IOSObjectArray *)urls
                withJavaLangClassLoader:(JavaLangClassLoader *)parent;

/*!
 @brief Constructs a new <code>URLClassLoader</code> instance.The newly created
  instance will have the specified <code>ClassLoader</code> as its parent and
  use the specified factory to create stream handlers.
 URLs that end with
  "/" are assumed to be directories, otherwise they are assumed to be JAR
  files.
 @param searchUrls the list of URLs where a specific class or file could be
              found.
 @param parent the 
 <code>ClassLoader</code>  to assign as this loader's parent.
 @param factory the factory that will be used to create protocol-specific
              stream handlers.
 */
- (instancetype)initWithJavaNetURLArray:(IOSObjectArray *)searchUrls
                withJavaLangClassLoader:(JavaLangClassLoader *)parent
     withJavaNetURLStreamHandlerFactory:(id<JavaNetURLStreamHandlerFactory>)factory;

/*!
 @brief Closes this classLoader, so it can't be used to load new classes or resources.
 @since 1.7
 */
- (void)close;

/*!
 @brief Returns all known URLs which point to the specified resource.
 @param name the name of the requested resource.
 @return the enumeration of URLs which point to the specified resource.
 @throw IOException
 if an I/O error occurs while attempting to connect.
 */
- (id<JavaUtilEnumeration>)findResourcesWithNSString:(NSString *)name;

/*!
 @brief Returns the search list of this <code>URLClassLoader</code>.
 @return the list of all known URLs of this instance.
 */
- (IOSObjectArray *)getURLs;

/*!
 @brief Returns a new <code>URLClassLoader</code> instance for the given URLs and the
  system <code>ClassLoader</code> as its parent.
 @param urls the list of URLs that is passed to the new 
 <code>URLClassLoader</code>
  .
 @return the created <code>URLClassLoader</code> instance.
 */
+ (JavaNetURLClassLoader *)newInstanceWithJavaNetURLArray:(IOSObjectArray *)urls OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Returns a new <code>URLClassLoader</code> instance for the given URLs and the
  specified <code>ClassLoader</code> as its parent.
 @param urls the list of URLs that is passed to the new URLClassLoader.
 @param parentCl the parent class loader that is passed to the new
              URLClassLoader.
 @return the created <code>URLClassLoader</code> instance.
 */
+ (JavaNetURLClassLoader *)newInstanceWithJavaNetURLArray:(IOSObjectArray *)urls
                                  withJavaLangClassLoader:(JavaLangClassLoader *)parentCl OBJC_METHOD_FAMILY_NONE;

#pragma mark Protected

/*!
 @brief Adds the specified URL to the search list.
 @param url the URL which is to add.
 */
- (void)addURLWithJavaNetURL:(JavaNetURL *)url;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetURLClassLoader)

J2OBJC_FIELD_SETTER(JavaNetURLClassLoader, urls_, JavaUtilArrayList *)

FOUNDATION_EXPORT void JavaNetURLClassLoader_initWithJavaNetURLArray_(JavaNetURLClassLoader *self, IOSObjectArray *urls);

FOUNDATION_EXPORT JavaNetURLClassLoader *new_JavaNetURLClassLoader_initWithJavaNetURLArray_(IOSObjectArray *urls) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetURLClassLoader *create_JavaNetURLClassLoader_initWithJavaNetURLArray_(IOSObjectArray *urls);

FOUNDATION_EXPORT void JavaNetURLClassLoader_initWithJavaNetURLArray_withJavaLangClassLoader_(JavaNetURLClassLoader *self, IOSObjectArray *urls, JavaLangClassLoader *parent);

FOUNDATION_EXPORT JavaNetURLClassLoader *new_JavaNetURLClassLoader_initWithJavaNetURLArray_withJavaLangClassLoader_(IOSObjectArray *urls, JavaLangClassLoader *parent) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetURLClassLoader *create_JavaNetURLClassLoader_initWithJavaNetURLArray_withJavaLangClassLoader_(IOSObjectArray *urls, JavaLangClassLoader *parent);

FOUNDATION_EXPORT JavaNetURLClassLoader *JavaNetURLClassLoader_newInstanceWithJavaNetURLArray_(IOSObjectArray *urls);

FOUNDATION_EXPORT JavaNetURLClassLoader *JavaNetURLClassLoader_newInstanceWithJavaNetURLArray_withJavaLangClassLoader_(IOSObjectArray *urls, JavaLangClassLoader *parentCl);

FOUNDATION_EXPORT void JavaNetURLClassLoader_initWithJavaNetURLArray_withJavaLangClassLoader_withJavaNetURLStreamHandlerFactory_(JavaNetURLClassLoader *self, IOSObjectArray *searchUrls, JavaLangClassLoader *parent, id<JavaNetURLStreamHandlerFactory> factory);

FOUNDATION_EXPORT JavaNetURLClassLoader *new_JavaNetURLClassLoader_initWithJavaNetURLArray_withJavaLangClassLoader_withJavaNetURLStreamHandlerFactory_(IOSObjectArray *searchUrls, JavaLangClassLoader *parent, id<JavaNetURLStreamHandlerFactory> factory) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetURLClassLoader *create_JavaNetURLClassLoader_initWithJavaNetURLArray_withJavaLangClassLoader_withJavaNetURLStreamHandlerFactory_(IOSObjectArray *searchUrls, JavaLangClassLoader *parent, id<JavaNetURLStreamHandlerFactory> factory);

J2OBJC_TYPE_LITERAL_HEADER(JavaNetURLClassLoader)

#endif

#pragma pop_macro("INCLUDE_ALL_JavaNetURLClassLoader")
