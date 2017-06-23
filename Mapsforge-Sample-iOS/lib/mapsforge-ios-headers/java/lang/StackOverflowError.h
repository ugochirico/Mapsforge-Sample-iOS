//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/lang/StackOverflowError.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangStackOverflowError")
#ifdef RESTRICT_JavaLangStackOverflowError
#define INCLUDE_ALL_JavaLangStackOverflowError 0
#else
#define INCLUDE_ALL_JavaLangStackOverflowError 1
#endif
#undef RESTRICT_JavaLangStackOverflowError

#if !defined (JavaLangStackOverflowError_) && (INCLUDE_ALL_JavaLangStackOverflowError || defined(INCLUDE_JavaLangStackOverflowError))
#define JavaLangStackOverflowError_

#define RESTRICT_JavaLangVirtualMachineError 1
#define INCLUDE_JavaLangVirtualMachineError 1
#include "java/lang/VirtualMachineError.h"

/*!
 @brief Thrown when a stack overflow occurs because an application
  recurses too deeply.
 @author unascribed
 @since JDK1.0
 */
@interface JavaLangStackOverflowError : JavaLangVirtualMachineError

#pragma mark Public

/*!
 @brief Constructs a <code>StackOverflowError</code> with no detail message.
 */
- (instancetype)init;

/*!
 @brief Constructs a <code>StackOverflowError</code> with the specified
  detail message.
 @param s the detail message.
 */
- (instancetype)initWithNSString:(NSString *)s;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangStackOverflowError)

FOUNDATION_EXPORT void JavaLangStackOverflowError_init(JavaLangStackOverflowError *self);

FOUNDATION_EXPORT JavaLangStackOverflowError *new_JavaLangStackOverflowError_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangStackOverflowError *create_JavaLangStackOverflowError_init();

FOUNDATION_EXPORT void JavaLangStackOverflowError_initWithNSString_(JavaLangStackOverflowError *self, NSString *s);

FOUNDATION_EXPORT JavaLangStackOverflowError *new_JavaLangStackOverflowError_initWithNSString_(NSString *s) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangStackOverflowError *create_JavaLangStackOverflowError_initWithNSString_(NSString *s);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangStackOverflowError)

#endif

#pragma pop_macro("INCLUDE_ALL_JavaLangStackOverflowError")
