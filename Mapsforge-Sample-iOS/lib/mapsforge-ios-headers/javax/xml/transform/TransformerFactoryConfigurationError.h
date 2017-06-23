//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/luni/src/main/java/javax/xml/transform/TransformerFactoryConfigurationError.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxXmlTransformTransformerFactoryConfigurationError")
#ifdef RESTRICT_JavaxXmlTransformTransformerFactoryConfigurationError
#define INCLUDE_ALL_JavaxXmlTransformTransformerFactoryConfigurationError 0
#else
#define INCLUDE_ALL_JavaxXmlTransformTransformerFactoryConfigurationError 1
#endif
#undef RESTRICT_JavaxXmlTransformTransformerFactoryConfigurationError

#if !defined (JavaxXmlTransformTransformerFactoryConfigurationError_) && (INCLUDE_ALL_JavaxXmlTransformTransformerFactoryConfigurationError || defined(INCLUDE_JavaxXmlTransformTransformerFactoryConfigurationError))
#define JavaxXmlTransformTransformerFactoryConfigurationError_

#define RESTRICT_JavaLangError 1
#define INCLUDE_JavaLangError 1
#include "java/lang/Error.h"

@class JavaLangException;

/*!
 @brief Thrown when a problem with configuration with the Transformer Factories
  exists.This error will typically be thrown when the class of a
  transformation factory specified in the system properties cannot be found
  or instantiated.
 */
@interface JavaxXmlTransformTransformerFactoryConfigurationError : JavaLangError

#pragma mark Public

/*!
 @brief Create a new <code>TransformerFactoryConfigurationError</code> with no
  detail message.
 */
- (instancetype)init;

/*!
 @brief Create a new <code>TransformerFactoryConfigurationError</code> with a
  given <code>Exception</code> base cause of the error.
 @param e The exception to be encapsulated in a  TransformerFactoryConfigurationError.
 */
- (instancetype)initWithJavaLangException:(JavaLangException *)e;

/*!
 @brief Create a new <code>TransformerFactoryConfigurationError</code> with the
  given <code>Exception</code> base cause and detail message.
 @param e The exception to be encapsulated in a  TransformerFactoryConfigurationError
 @param msg The detail message.
 */
- (instancetype)initWithJavaLangException:(JavaLangException *)e
                             withNSString:(NSString *)msg;

/*!
 @brief Create a new <code>TransformerFactoryConfigurationError</code> with
  the <code>String</code> specified as an error message.
 @param msg The error message for the exception.
 */
- (instancetype)initWithNSString:(NSString *)msg;

/*!
 @brief Return the actual exception (if any) that caused this exception to
  be raised.
 @return The encapsulated exception, or null if there is none.
 */
- (JavaLangException *)getException;

/*!
 @brief Return the message (if any) for this error .If there is no
  message for the exception and there is an encapsulated
  exception then the message of that exception will be returned.
 @return The error message.
 */
- (NSString *)getMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxXmlTransformTransformerFactoryConfigurationError)

FOUNDATION_EXPORT void JavaxXmlTransformTransformerFactoryConfigurationError_init(JavaxXmlTransformTransformerFactoryConfigurationError *self);

FOUNDATION_EXPORT JavaxXmlTransformTransformerFactoryConfigurationError *new_JavaxXmlTransformTransformerFactoryConfigurationError_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxXmlTransformTransformerFactoryConfigurationError *create_JavaxXmlTransformTransformerFactoryConfigurationError_init();

FOUNDATION_EXPORT void JavaxXmlTransformTransformerFactoryConfigurationError_initWithNSString_(JavaxXmlTransformTransformerFactoryConfigurationError *self, NSString *msg);

FOUNDATION_EXPORT JavaxXmlTransformTransformerFactoryConfigurationError *new_JavaxXmlTransformTransformerFactoryConfigurationError_initWithNSString_(NSString *msg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxXmlTransformTransformerFactoryConfigurationError *create_JavaxXmlTransformTransformerFactoryConfigurationError_initWithNSString_(NSString *msg);

FOUNDATION_EXPORT void JavaxXmlTransformTransformerFactoryConfigurationError_initWithJavaLangException_(JavaxXmlTransformTransformerFactoryConfigurationError *self, JavaLangException *e);

FOUNDATION_EXPORT JavaxXmlTransformTransformerFactoryConfigurationError *new_JavaxXmlTransformTransformerFactoryConfigurationError_initWithJavaLangException_(JavaLangException *e) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxXmlTransformTransformerFactoryConfigurationError *create_JavaxXmlTransformTransformerFactoryConfigurationError_initWithJavaLangException_(JavaLangException *e);

FOUNDATION_EXPORT void JavaxXmlTransformTransformerFactoryConfigurationError_initWithJavaLangException_withNSString_(JavaxXmlTransformTransformerFactoryConfigurationError *self, JavaLangException *e, NSString *msg);

FOUNDATION_EXPORT JavaxXmlTransformTransformerFactoryConfigurationError *new_JavaxXmlTransformTransformerFactoryConfigurationError_initWithJavaLangException_withNSString_(JavaLangException *e, NSString *msg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxXmlTransformTransformerFactoryConfigurationError *create_JavaxXmlTransformTransformerFactoryConfigurationError_initWithJavaLangException_withNSString_(JavaLangException *e, NSString *msg);

J2OBJC_TYPE_LITERAL_HEADER(JavaxXmlTransformTransformerFactoryConfigurationError)

#endif

#pragma pop_macro("INCLUDE_ALL_JavaxXmlTransformTransformerFactoryConfigurationError")
