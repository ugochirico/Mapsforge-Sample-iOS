//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/luni/src/main/java/javax/xml/xpath/XPathFactoryFinder.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxXmlXpathXPathFactoryFinder")
#ifdef RESTRICT_JavaxXmlXpathXPathFactoryFinder
#define INCLUDE_ALL_JavaxXmlXpathXPathFactoryFinder 0
#else
#define INCLUDE_ALL_JavaxXmlXpathXPathFactoryFinder 1
#endif
#undef RESTRICT_JavaxXmlXpathXPathFactoryFinder

#if !defined (JavaxXmlXpathXPathFactoryFinder_) && (INCLUDE_ALL_JavaxXmlXpathXPathFactoryFinder || defined(INCLUDE_JavaxXmlXpathXPathFactoryFinder))
#define JavaxXmlXpathXPathFactoryFinder_

@class JavaLangClassLoader;
@class JavaxXmlXpathXPathFactory;

/*!
 @brief Implementation of <code>XPathFactory.newInstance(String)</code>.
 @author <a href="Kohsuke.Kawaguchi@@Sun.com">Kohsuke Kawaguchi</a>
 @version $Revision: 670432 $, $Date: 2008-06-22 19:02:08 -0700 (Sun, 22 Jun 2008) $
 @since 1.5
 */
@interface JavaxXmlXpathXPathFactoryFinder : NSObject

#pragma mark Public

/*!
 @brief <p>Constructor that specifies <code>ClassLoader</code> to use
  to find <code>SchemaFactory</code>.
 </p>
 @param loader to be used to load resource, 
 <code>SchemaFactory</code> , and       <code>SchemaFactoryLoader</code>
   implementations during       the resolution process.
        If this parameter is null, the default system class loader
        will be used.
 */
- (instancetype)initWithJavaLangClassLoader:(JavaLangClassLoader *)loader;

/*!
 @brief <p>Creates a new <code>XPathFactory</code> object for the specified
  schema language.
 </p>
 @param uri Identifies the underlying object model.
 @return <code>null</code> if the callee fails to create one.
 @throw NullPointerException
 If the parameter is null.
 */
- (JavaxXmlXpathXPathFactory *)newFactoryWithNSString:(NSString *)uri OBJC_METHOD_FAMILY_NONE;

#pragma mark Package-Private

/*!
 @brief <p>Creates an instance of the specified and returns it.
 </p>
 @param className_ fully qualified class name to be instantiated.
 @return null
       if it fails. Error messages will be printed by this method.
 */
- (JavaxXmlXpathXPathFactory *)createInstanceWithNSString:(NSString *)className_;

@end

J2OBJC_STATIC_INIT(JavaxXmlXpathXPathFactoryFinder)

FOUNDATION_EXPORT void JavaxXmlXpathXPathFactoryFinder_initWithJavaLangClassLoader_(JavaxXmlXpathXPathFactoryFinder *self, JavaLangClassLoader *loader);

FOUNDATION_EXPORT JavaxXmlXpathXPathFactoryFinder *new_JavaxXmlXpathXPathFactoryFinder_initWithJavaLangClassLoader_(JavaLangClassLoader *loader) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxXmlXpathXPathFactoryFinder *create_JavaxXmlXpathXPathFactoryFinder_initWithJavaLangClassLoader_(JavaLangClassLoader *loader);

J2OBJC_TYPE_LITERAL_HEADER(JavaxXmlXpathXPathFactoryFinder)

#endif

#pragma pop_macro("INCLUDE_ALL_JavaxXmlXpathXPathFactoryFinder")
