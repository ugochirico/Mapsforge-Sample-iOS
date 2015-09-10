//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/DirectByteBuffer.java
//

#ifndef _JavaNioDirectByteBuffer_H_
#define _JavaNioDirectByteBuffer_H_

#include "J2ObjC_header.h"
#include "java/nio/MappedByteBuffer.h"

@class IOSByteArray;
@class IOSCharArray;
@class IOSDoubleArray;
@class IOSFloatArray;
@class IOSIntArray;
@class IOSLongArray;
@class IOSShortArray;
@class JavaNioByteBuffer;
@class JavaNioChannelsFileChannel_MapMode;
@class JavaNioCharBuffer;
@class JavaNioDoubleBuffer;
@class JavaNioFloatBuffer;
@class JavaNioIntBuffer;
@class JavaNioLongBuffer;
@class JavaNioMemoryBlock;
@class JavaNioShortBuffer;

@interface JavaNioDirectByteBuffer : JavaNioMappedByteBuffer {
 @public
  jint offset_;
}

#pragma mark Public

- (JavaNioCharBuffer *)asCharBuffer;

- (JavaNioDoubleBuffer *)asDoubleBuffer;

- (JavaNioFloatBuffer *)asFloatBuffer;

- (JavaNioIntBuffer *)asIntBuffer;

- (JavaNioLongBuffer *)asLongBuffer;

- (JavaNioByteBuffer *)asReadOnlyBuffer;

- (JavaNioShortBuffer *)asShortBuffer;

- (JavaNioByteBuffer *)compact;

- (JavaNioByteBuffer *)duplicate;

- (void)free;

- (jbyte)get;

- (JavaNioByteBuffer *)getWithByteArray:(IOSByteArray *)dst
                                withInt:(jint)dstOffset
                                withInt:(jint)byteCount;

- (jbyte)getWithInt:(jint)index;

- (jchar)getChar;

- (jchar)getCharWithInt:(jint)index;

- (jdouble)getDouble;

- (jdouble)getDoubleWithInt:(jint)index;

- (jfloat)getFloat;

- (jfloat)getFloatWithInt:(jint)index;

- (jint)getInt;

- (jint)getIntWithInt:(jint)index;

- (jlong)getLong;

- (jlong)getLongWithInt:(jint)index;

- (jshort)getShort;

- (jshort)getShortWithInt:(jint)index;

- (jboolean)isDirect;

- (jboolean)isReadOnly;

- (jboolean)isValid;

- (JavaNioByteBuffer *)putWithByte:(jbyte)value;

- (JavaNioByteBuffer *)putWithByteArray:(IOSByteArray *)src
                                withInt:(jint)srcOffset
                                withInt:(jint)byteCount;

- (JavaNioByteBuffer *)putWithInt:(jint)index
                         withByte:(jbyte)value;

- (JavaNioByteBuffer *)putCharWithChar:(jchar)value;

- (JavaNioByteBuffer *)putCharWithInt:(jint)index
                             withChar:(jchar)value;

- (JavaNioByteBuffer *)putDoubleWithDouble:(jdouble)value;

- (JavaNioByteBuffer *)putDoubleWithInt:(jint)index
                             withDouble:(jdouble)value;

- (JavaNioByteBuffer *)putFloatWithFloat:(jfloat)value;

- (JavaNioByteBuffer *)putFloatWithInt:(jint)index
                             withFloat:(jfloat)value;

- (JavaNioByteBuffer *)putIntWithInt:(jint)value;

- (JavaNioByteBuffer *)putIntWithInt:(jint)index
                             withInt:(jint)value;

- (JavaNioByteBuffer *)putLongWithInt:(jint)index
                             withLong:(jlong)value;

- (JavaNioByteBuffer *)putLongWithLong:(jlong)value;

- (JavaNioByteBuffer *)putShortWithInt:(jint)index
                             withShort:(jshort)value;

- (JavaNioByteBuffer *)putShortWithShort:(jshort)value;

- (JavaNioByteBuffer *)slice;

#pragma mark Protected

- (instancetype)initWithJavaNioMemoryBlock:(JavaNioMemoryBlock *)block
                                   withInt:(jint)capacity
                                   withInt:(jint)offset
                               withBoolean:(jboolean)isReadOnly
    withJavaNioChannelsFileChannel_MapMode:(JavaNioChannelsFileChannel_MapMode *)mapMode;

#pragma mark Package-Private

- (instancetype)initWithLong:(jlong)address
                     withInt:(jint)capacity;

- (void)getWithCharArray:(IOSCharArray *)dst
                 withInt:(jint)dstOffset
                 withInt:(jint)charCount;

- (void)getWithDoubleArray:(IOSDoubleArray *)dst
                   withInt:(jint)dstOffset
                   withInt:(jint)doubleCount;

- (void)getWithFloatArray:(IOSFloatArray *)dst
                  withInt:(jint)dstOffset
                  withInt:(jint)floatCount;

- (void)getWithIntArray:(IOSIntArray *)dst
                withInt:(jint)dstOffset
                withInt:(jint)intCount;

- (void)getWithLongArray:(IOSLongArray *)dst
                 withInt:(jint)dstOffset
                 withInt:(jint)longCount;

- (void)getWithShortArray:(IOSShortArray *)dst
                  withInt:(jint)dstOffset
                  withInt:(jint)shortCount;

- (IOSByteArray *)protectedArray;

- (jint)protectedArrayOffset;

- (jboolean)protectedHasArray;

- (void)putWithCharArray:(IOSCharArray *)src
                 withInt:(jint)srcOffset
                 withInt:(jint)charCount;

- (void)putWithDoubleArray:(IOSDoubleArray *)src
                   withInt:(jint)srcOffset
                   withInt:(jint)doubleCount;

- (void)putWithFloatArray:(IOSFloatArray *)src
                  withInt:(jint)srcOffset
                  withInt:(jint)floatCount;

- (void)putWithIntArray:(IOSIntArray *)src
                withInt:(jint)srcOffset
                withInt:(jint)intCount;

- (void)putWithLongArray:(IOSLongArray *)src
                 withInt:(jint)srcOffset
                 withInt:(jint)longCount;

- (void)putWithShortArray:(IOSShortArray *)src
                  withInt:(jint)srcOffset
                  withInt:(jint)shortCount;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioDirectByteBuffer)

FOUNDATION_EXPORT void JavaNioDirectByteBuffer_initWithJavaNioMemoryBlock_withInt_withInt_withBoolean_withJavaNioChannelsFileChannel_MapMode_(JavaNioDirectByteBuffer *self, JavaNioMemoryBlock *block, jint capacity, jint offset, jboolean isReadOnly, JavaNioChannelsFileChannel_MapMode *mapMode);

FOUNDATION_EXPORT JavaNioDirectByteBuffer *new_JavaNioDirectByteBuffer_initWithJavaNioMemoryBlock_withInt_withInt_withBoolean_withJavaNioChannelsFileChannel_MapMode_(JavaNioMemoryBlock *block, jint capacity, jint offset, jboolean isReadOnly, JavaNioChannelsFileChannel_MapMode *mapMode) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaNioDirectByteBuffer_initWithLong_withInt_(JavaNioDirectByteBuffer *self, jlong address, jint capacity);

FOUNDATION_EXPORT JavaNioDirectByteBuffer *new_JavaNioDirectByteBuffer_initWithLong_withInt_(jlong address, jint capacity) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaNioDirectByteBuffer)

#endif // _JavaNioDirectByteBuffer_H_