//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/nio/channels/NonWritableChannelException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNioChannelsNonWritableChannelException")
#ifdef RESTRICT_JavaNioChannelsNonWritableChannelException
#define INCLUDE_ALL_JavaNioChannelsNonWritableChannelException 0
#else
#define INCLUDE_ALL_JavaNioChannelsNonWritableChannelException 1
#endif
#undef RESTRICT_JavaNioChannelsNonWritableChannelException

#if !defined (JavaNioChannelsNonWritableChannelException_) && (INCLUDE_ALL_JavaNioChannelsNonWritableChannelException || defined(INCLUDE_JavaNioChannelsNonWritableChannelException))
#define JavaNioChannelsNonWritableChannelException_

#define RESTRICT_JavaLangIllegalStateException 1
#define INCLUDE_JavaLangIllegalStateException 1
#include "java/lang/IllegalStateException.h"

/*!
 @brief Unchecked exception thrown when an attempt is made to write
  to a channel that was not originally opened for writing.
 @since 1.4
 */
@interface JavaNioChannelsNonWritableChannelException : JavaLangIllegalStateException

#pragma mark Public

/*!
 @brief Constructs an instance of this class.
 */
- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioChannelsNonWritableChannelException)

FOUNDATION_EXPORT void JavaNioChannelsNonWritableChannelException_init(JavaNioChannelsNonWritableChannelException *self);

FOUNDATION_EXPORT JavaNioChannelsNonWritableChannelException *new_JavaNioChannelsNonWritableChannelException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNioChannelsNonWritableChannelException *create_JavaNioChannelsNonWritableChannelException_init();

J2OBJC_TYPE_LITERAL_HEADER(JavaNioChannelsNonWritableChannelException)

#endif

#pragma pop_macro("INCLUDE_ALL_JavaNioChannelsNonWritableChannelException")
