//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/Exception.java
//

#ifndef _JavaLangException_H_
#define _JavaLangException_H_

#include "J2ObjC_header.h"
#include "java/lang/Throwable.h"

@interface JavaLangException : JavaLangThrowable

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)detailMessage;

- (instancetype)initWithNSString:(NSString *)detailMessage
           withJavaLangThrowable:(JavaLangThrowable *)throwable;

- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)throwable;

#pragma mark Protected

- (instancetype)initWithNSString:(NSString *)message
           withJavaLangThrowable:(JavaLangThrowable *)cause
                     withBoolean:(jboolean)enableSuppression
                     withBoolean:(jboolean)writableStackTrace;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangException)

FOUNDATION_EXPORT void JavaLangException_init(JavaLangException *self);

FOUNDATION_EXPORT JavaLangException *new_JavaLangException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaLangException_initWithNSString_(JavaLangException *self, NSString *detailMessage);

FOUNDATION_EXPORT JavaLangException *new_JavaLangException_initWithNSString_(NSString *detailMessage) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaLangException_initWithNSString_withJavaLangThrowable_(JavaLangException *self, NSString *detailMessage, JavaLangThrowable *throwable);

FOUNDATION_EXPORT JavaLangException *new_JavaLangException_initWithNSString_withJavaLangThrowable_(NSString *detailMessage, JavaLangThrowable *throwable) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaLangException_initWithJavaLangThrowable_(JavaLangException *self, JavaLangThrowable *throwable);

FOUNDATION_EXPORT JavaLangException *new_JavaLangException_initWithJavaLangThrowable_(JavaLangThrowable *throwable) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaLangException_initWithNSString_withJavaLangThrowable_withBoolean_withBoolean_(JavaLangException *self, NSString *message, JavaLangThrowable *cause, jboolean enableSuppression, jboolean writableStackTrace);

FOUNDATION_EXPORT JavaLangException *new_JavaLangException_initWithNSString_withJavaLangThrowable_withBoolean_withBoolean_(NSString *message, JavaLangThrowable *cause, jboolean enableSuppression, jboolean writableStackTrace) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaLangException)

#endif // _JavaLangException_H_