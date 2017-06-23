//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/javax/net/ssl/SSLServerSocketFactory.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxNetSslSSLServerSocketFactory")
#ifdef RESTRICT_JavaxNetSslSSLServerSocketFactory
#define INCLUDE_ALL_JavaxNetSslSSLServerSocketFactory 0
#else
#define INCLUDE_ALL_JavaxNetSslSSLServerSocketFactory 1
#endif
#undef RESTRICT_JavaxNetSslSSLServerSocketFactory
#ifdef INCLUDE_JavaxNetSslDefaultSSLServerSocketFactory
#define INCLUDE_JavaxNetSslSSLServerSocketFactory 1
#endif

#if !defined (JavaxNetSslSSLServerSocketFactory_) && (INCLUDE_ALL_JavaxNetSslSSLServerSocketFactory || defined(INCLUDE_JavaxNetSslSSLServerSocketFactory))
#define JavaxNetSslSSLServerSocketFactory_

#define RESTRICT_JavaxNetServerSocketFactory 1
#define INCLUDE_JavaxNetServerSocketFactory 1
#include "javax/net/ServerSocketFactory.h"

@class IOSObjectArray;

/*!
 @brief <code>SSLServerSocketFactory</code>s create 
 <code>SSLServerSocket</code>s.
 @since 1.4
 - seealso: SSLSocket
 - seealso: SSLServerSocket
 @author David Brownell
 */
@interface JavaxNetSslSSLServerSocketFactory : JavaxNetServerSocketFactory

#pragma mark Public

/*!
 @brief Returns the default SSL server socket factory.
 <p>The first time this method is called, the security property
  "ssl.ServerSocketFactory.provider" is examined. If it is non-null, a
  class by that name is loaded and instantiated. If that is successful and
  the object is an instance of SSLServerSocketFactory, it is made the
  default SSL server socket factory. 
 <p>Otherwise, this method returns 
 <code>SSLContext.getDefault().getServerSocketFactory()</code>. If that
  call fails, an inoperative factory is returned.
 @return the default <code>ServerSocketFactory</code>
 - seealso: SSLContext#getDefault
 */
+ (JavaxNetServerSocketFactory *)getDefault;

/*!
 @brief Returns the list of cipher suites which are enabled by default.
 Unless a different list is enabled, handshaking on an SSL connection
  will use one of these cipher suites.  The minimum quality of service
  for these defaults requires confidentiality protection and server
  authentication (that is, no anonymous cipher suites).
 - seealso: #getSupportedCipherSuites()
 @return array of the cipher suites enabled by default
 */
- (IOSObjectArray *)getDefaultCipherSuites;

/*!
 @brief Returns the names of the cipher suites which could be enabled for use
  on an SSL connection created by this factory.
 Normally, only a subset of these will actually
  be enabled by default, since this list may include cipher suites which
  do not meet quality of service requirements for those defaults.  Such
  cipher suites are useful in specialized applications.
 @return an array of cipher suite names
 - seealso: #getDefaultCipherSuites()
 */
- (IOSObjectArray *)getSupportedCipherSuites;

#pragma mark Protected

/*!
 @brief Constructor is used only by subclasses.
 */
- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxNetSslSSLServerSocketFactory)

FOUNDATION_EXPORT void JavaxNetSslSSLServerSocketFactory_init(JavaxNetSslSSLServerSocketFactory *self);

FOUNDATION_EXPORT JavaxNetServerSocketFactory *JavaxNetSslSSLServerSocketFactory_getDefault();

J2OBJC_TYPE_LITERAL_HEADER(JavaxNetSslSSLServerSocketFactory)

#endif

#if !defined (JavaxNetSslDefaultSSLServerSocketFactory_) && (INCLUDE_ALL_JavaxNetSslSSLServerSocketFactory || defined(INCLUDE_JavaxNetSslDefaultSSLServerSocketFactory))
#define JavaxNetSslDefaultSSLServerSocketFactory_

@class IOSObjectArray;
@class JavaLangException;
@class JavaNetInetAddress;
@class JavaNetServerSocket;

@interface JavaxNetSslDefaultSSLServerSocketFactory : JavaxNetSslSSLServerSocketFactory

#pragma mark Public

- (JavaNetServerSocket *)createServerSocket;

- (JavaNetServerSocket *)createServerSocketWithInt:(jint)port;

- (JavaNetServerSocket *)createServerSocketWithInt:(jint)port
                                           withInt:(jint)backlog;

- (JavaNetServerSocket *)createServerSocketWithInt:(jint)port
                                           withInt:(jint)backlog
                            withJavaNetInetAddress:(JavaNetInetAddress *)ifAddress;

- (IOSObjectArray *)getDefaultCipherSuites;

- (IOSObjectArray *)getSupportedCipherSuites;

#pragma mark Package-Private

- (instancetype)initWithJavaLangException:(JavaLangException *)reason;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxNetSslDefaultSSLServerSocketFactory)

FOUNDATION_EXPORT void JavaxNetSslDefaultSSLServerSocketFactory_initWithJavaLangException_(JavaxNetSslDefaultSSLServerSocketFactory *self, JavaLangException *reason);

FOUNDATION_EXPORT JavaxNetSslDefaultSSLServerSocketFactory *new_JavaxNetSslDefaultSSLServerSocketFactory_initWithJavaLangException_(JavaLangException *reason) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxNetSslDefaultSSLServerSocketFactory *create_JavaxNetSslDefaultSSLServerSocketFactory_initWithJavaLangException_(JavaLangException *reason);

J2OBJC_TYPE_LITERAL_HEADER(JavaxNetSslDefaultSSLServerSocketFactory)

#endif

#pragma pop_macro("INCLUDE_ALL_JavaxNetSslSSLServerSocketFactory")
