//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/FileDescriptor.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaIoFileDescriptor")
#ifdef RESTRICT_JavaIoFileDescriptor
#define INCLUDE_ALL_JavaIoFileDescriptor 0
#else
#define INCLUDE_ALL_JavaIoFileDescriptor 1
#endif
#undef RESTRICT_JavaIoFileDescriptor

#if !defined (JavaIoFileDescriptor_) && (INCLUDE_ALL_JavaIoFileDescriptor || defined(INCLUDE_JavaIoFileDescriptor))
#define JavaIoFileDescriptor_

/*!
 @brief Wraps a Unix file descriptor.It's possible to get the file descriptor used by some
  classes (such as <code>FileInputStream</code>, <code>FileOutputStream</code>,
  and <code>RandomAccessFile</code>), and then create new streams that point to the same
  file descriptor.
 */
@interface JavaIoFileDescriptor : NSObject

#pragma mark Public

/*!
 @brief Constructs a new invalid FileDescriptor.
 */
- (instancetype)init;

/*!
 @brief Returns the int fd.It's highly unlikely you should be calling this.
 Please discuss
  your needs with a libcore maintainer before using this method.
 */
- (jint)getInt$;

/*!
 @brief Sets the int fd.It's highly unlikely you should be calling this.
 Please discuss
  your needs with a libcore maintainer before using this method.
 */
- (void)setInt$WithInt:(jint)fd;

/*!
 @brief Ensures that data which is buffered within the underlying implementation
  is written out to the appropriate device before returning.
 */
- (void)sync;

- (NSString *)description;

/*!
 @brief Tests whether this <code>FileDescriptor</code> is valid.
 */
- (jboolean)valid;

@end

J2OBJC_STATIC_INIT(JavaIoFileDescriptor)

/*!
 @brief Corresponds to <code>stdin</code>.
 */
inline JavaIoFileDescriptor *JavaIoFileDescriptor_get_in();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaIoFileDescriptor *JavaIoFileDescriptor_in;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaIoFileDescriptor, in, JavaIoFileDescriptor *)

/*!
 @brief Corresponds to <code>stdout</code>.
 */
inline JavaIoFileDescriptor *JavaIoFileDescriptor_get_out();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaIoFileDescriptor *JavaIoFileDescriptor_out;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaIoFileDescriptor, out, JavaIoFileDescriptor *)

/*!
 @brief Corresponds to <code>stderr</code>.
 */
inline JavaIoFileDescriptor *JavaIoFileDescriptor_get_err();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaIoFileDescriptor *JavaIoFileDescriptor_err;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaIoFileDescriptor, err, JavaIoFileDescriptor *)

FOUNDATION_EXPORT void JavaIoFileDescriptor_init(JavaIoFileDescriptor *self);

FOUNDATION_EXPORT JavaIoFileDescriptor *new_JavaIoFileDescriptor_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoFileDescriptor *create_JavaIoFileDescriptor_init();

J2OBJC_TYPE_LITERAL_HEADER(JavaIoFileDescriptor)

#endif

#pragma pop_macro("INCLUDE_ALL_JavaIoFileDescriptor")
