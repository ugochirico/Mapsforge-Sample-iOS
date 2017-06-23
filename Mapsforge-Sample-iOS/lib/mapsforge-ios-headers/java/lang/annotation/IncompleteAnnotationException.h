//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/lang/annotation/IncompleteAnnotationException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangAnnotationIncompleteAnnotationException")
#ifdef RESTRICT_JavaLangAnnotationIncompleteAnnotationException
#define INCLUDE_ALL_JavaLangAnnotationIncompleteAnnotationException 0
#else
#define INCLUDE_ALL_JavaLangAnnotationIncompleteAnnotationException 1
#endif
#undef RESTRICT_JavaLangAnnotationIncompleteAnnotationException

#if !defined (JavaLangAnnotationIncompleteAnnotationException_) && (INCLUDE_ALL_JavaLangAnnotationIncompleteAnnotationException || defined(INCLUDE_JavaLangAnnotationIncompleteAnnotationException))
#define JavaLangAnnotationIncompleteAnnotationException_

#define RESTRICT_JavaLangRuntimeException 1
#define INCLUDE_JavaLangRuntimeException 1
#include "java/lang/RuntimeException.h"

@class IOSClass;

/*!
 @brief Thrown to indicate that a program has attempted to access an element of
  an annotation type that was added to the annotation type definition after
  the annotation was compiled (or serialized).This exception will not be
  thrown if the new element has a default value.
 This exception can be thrown by the used to read annotations
  reflectively
 .
 @author Josh Bloch
 - seealso: java.lang.reflect.AnnotatedElement
 @since 1.5
 */
@interface JavaLangAnnotationIncompleteAnnotationException : JavaLangRuntimeException

#pragma mark Public

/*!
 @brief Constructs an IncompleteAnnotationException to indicate that
  the named element was missing from the specified annotation type.
 @param annotationType the Class object for the annotation type
 @param elementName the name of the missing element
 @throw NullPointerExceptionif either parameter is <code>null</code>
 */
- (instancetype)initWithIOSClass:(IOSClass *)annotationType
                    withNSString:(NSString *)elementName;

/*!
 @brief Returns the Class object for the annotation type with the
  missing element.
 @return the Class object for the annotation type with the
      missing element
 */
- (IOSClass *)annotationType;

/*!
 @brief Returns the name of the missing element.
 @return the name of the missing element
 */
- (NSString *)elementName;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangAnnotationIncompleteAnnotationException)

FOUNDATION_EXPORT void JavaLangAnnotationIncompleteAnnotationException_initWithIOSClass_withNSString_(JavaLangAnnotationIncompleteAnnotationException *self, IOSClass *annotationType, NSString *elementName);

FOUNDATION_EXPORT JavaLangAnnotationIncompleteAnnotationException *new_JavaLangAnnotationIncompleteAnnotationException_initWithIOSClass_withNSString_(IOSClass *annotationType, NSString *elementName) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangAnnotationIncompleteAnnotationException *create_JavaLangAnnotationIncompleteAnnotationException_initWithIOSClass_withNSString_(IOSClass *annotationType, NSString *elementName);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangAnnotationIncompleteAnnotationException)

#endif

#pragma pop_macro("INCLUDE_ALL_JavaLangAnnotationIncompleteAnnotationException")
