//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/net/ssl/TrustManagerFactorySpi.java
//

#ifndef _JavaxNetSslTrustManagerFactorySpi_H_
#define _JavaxNetSslTrustManagerFactorySpi_H_

#include "J2ObjC_header.h"

@class IOSObjectArray;
@class JavaSecurityKeyStore;
@protocol JavaxNetSslManagerFactoryParameters;

@interface JavaxNetSslTrustManagerFactorySpi : NSObject

#pragma mark Public

- (instancetype)init;

#pragma mark Protected

- (IOSObjectArray *)engineGetTrustManagers;

- (void)engineInitWithJavaSecurityKeyStore:(JavaSecurityKeyStore *)ks;

- (void)engineInitWithJavaxNetSslManagerFactoryParameters:(id<JavaxNetSslManagerFactoryParameters>)spec;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxNetSslTrustManagerFactorySpi)

FOUNDATION_EXPORT void JavaxNetSslTrustManagerFactorySpi_init(JavaxNetSslTrustManagerFactorySpi *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaxNetSslTrustManagerFactorySpi)

#endif // _JavaxNetSslTrustManagerFactorySpi_H_