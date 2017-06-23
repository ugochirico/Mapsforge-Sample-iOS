//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/net/ssl/SSLSessionBindingListener.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxNetSslSSLSessionBindingListener")
#ifdef RESTRICT_JavaxNetSslSSLSessionBindingListener
#define INCLUDE_ALL_JavaxNetSslSSLSessionBindingListener 0
#else
#define INCLUDE_ALL_JavaxNetSslSSLSessionBindingListener 1
#endif
#undef RESTRICT_JavaxNetSslSSLSessionBindingListener

#if !defined (JavaxNetSslSSLSessionBindingListener_) && (INCLUDE_ALL_JavaxNetSslSSLSessionBindingListener || defined(INCLUDE_JavaxNetSslSSLSessionBindingListener))
#define JavaxNetSslSSLSessionBindingListener_

#define RESTRICT_JavaUtilEventListener 1
#define INCLUDE_JavaUtilEventListener 1
#include "java/util/EventListener.h"

@class JavaxNetSslSSLSessionBindingEvent;

/*!
 @brief The interface to be implemented by any object that requires notification when
  data objects are bound to (or unbound from) an <code>SSLSession</code>.
 */
@protocol JavaxNetSslSSLSessionBindingListener < JavaUtilEventListener, JavaObject >

/*!
 @brief Notifies this listener when a value is bound to an <code>SSLSession</code>.
 @param event the event data.
 */
- (void)valueBoundWithJavaxNetSslSSLSessionBindingEvent:(JavaxNetSslSSLSessionBindingEvent *)event;

/*!
 @brief Notifies this listener when a value is unbound from an <code>SSLSession</code>.
 @param event the event data.
 */
- (void)valueUnboundWithJavaxNetSslSSLSessionBindingEvent:(JavaxNetSslSSLSessionBindingEvent *)event;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxNetSslSSLSessionBindingListener)

J2OBJC_TYPE_LITERAL_HEADER(JavaxNetSslSSLSessionBindingListener)

#endif

#pragma pop_macro("INCLUDE_ALL_JavaxNetSslSSLSessionBindingListener")
