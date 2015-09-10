//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/KeyPairGenerator.java
//

#ifndef _JavaSecurityKeyPairGenerator_H_
#define _JavaSecurityKeyPairGenerator_H_

#include "J2ObjC_header.h"
#include "java/security/KeyPairGeneratorSpi.h"

@class JavaSecurityKeyPair;
@class JavaSecurityProvider;
@class JavaSecuritySecureRandom;
@protocol JavaSecuritySpecAlgorithmParameterSpec;

@interface JavaSecurityKeyPairGenerator : JavaSecurityKeyPairGeneratorSpi

#pragma mark Public

- (JavaSecurityKeyPair *)generateKeyPair;

- (JavaSecurityKeyPair *)genKeyPair;

- (NSString *)getAlgorithm;

+ (JavaSecurityKeyPairGenerator *)getInstanceWithNSString:(NSString *)algorithm;

+ (JavaSecurityKeyPairGenerator *)getInstanceWithNSString:(NSString *)algorithm
                                 withJavaSecurityProvider:(JavaSecurityProvider *)provider;

+ (JavaSecurityKeyPairGenerator *)getInstanceWithNSString:(NSString *)algorithm
                                             withNSString:(NSString *)provider;

- (JavaSecurityProvider *)getProvider;

- (void)initialize__WithJavaSecuritySpecAlgorithmParameterSpec:(id<JavaSecuritySpecAlgorithmParameterSpec>)param OBJC_METHOD_FAMILY_NONE;

- (void)initialize__WithJavaSecuritySpecAlgorithmParameterSpec:(id<JavaSecuritySpecAlgorithmParameterSpec>)param
                                  withJavaSecuritySecureRandom:(JavaSecuritySecureRandom *)random OBJC_METHOD_FAMILY_NONE;

- (void)initialize__WithInt:(jint)keysize OBJC_METHOD_FAMILY_NONE;

- (void)initialize__WithInt:(jint)keysize
withJavaSecuritySecureRandom:(JavaSecuritySecureRandom *)random OBJC_METHOD_FAMILY_NONE;

#pragma mark Protected

- (instancetype)initWithNSString:(NSString *)algorithm;

@end

J2OBJC_STATIC_INIT(JavaSecurityKeyPairGenerator)

FOUNDATION_EXPORT void JavaSecurityKeyPairGenerator_initWithNSString_(JavaSecurityKeyPairGenerator *self, NSString *algorithm);

FOUNDATION_EXPORT JavaSecurityKeyPairGenerator *JavaSecurityKeyPairGenerator_getInstanceWithNSString_(NSString *algorithm);

FOUNDATION_EXPORT JavaSecurityKeyPairGenerator *JavaSecurityKeyPairGenerator_getInstanceWithNSString_withNSString_(NSString *algorithm, NSString *provider);

FOUNDATION_EXPORT JavaSecurityKeyPairGenerator *JavaSecurityKeyPairGenerator_getInstanceWithNSString_withJavaSecurityProvider_(NSString *algorithm, JavaSecurityProvider *provider);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityKeyPairGenerator)

#endif // _JavaSecurityKeyPairGenerator_H_