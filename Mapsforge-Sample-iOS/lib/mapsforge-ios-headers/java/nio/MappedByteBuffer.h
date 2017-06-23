//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/MappedByteBuffer.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNioMappedByteBuffer")
#ifdef RESTRICT_JavaNioMappedByteBuffer
#define INCLUDE_ALL_JavaNioMappedByteBuffer 0
#else
#define INCLUDE_ALL_JavaNioMappedByteBuffer 1
#endif
#undef RESTRICT_JavaNioMappedByteBuffer

#if !defined (JavaNioMappedByteBuffer_) && (INCLUDE_ALL_JavaNioMappedByteBuffer || defined(INCLUDE_JavaNioMappedByteBuffer))
#define JavaNioMappedByteBuffer_

#define RESTRICT_JavaNioByteBuffer 1
#define INCLUDE_JavaNioByteBuffer 1
#include "java/nio/ByteBuffer.h"

@class JavaNioMemoryBlock;

/*!
 @brief <code>MappedByteBuffer</code> is a special kind of direct byte buffer which maps a
  region of file to memory.
 <p>
  <code>MappedByteBuffer</code> can be created by calling 
 <code>FileChannel.map</code>.
  Once created, the mapping between the byte buffer and the file region remains
  valid until the byte buffer is garbage collected. 
 <p>
  All or part of a <code>MappedByteBuffer</code>'s content may change or become
  inaccessible at any time, since the mapped file region can be modified by
  another thread or process at any time. If this happens, the behavior of the 
 <code>MappedByteBuffer</code> is undefined.
 */
@interface JavaNioMappedByteBuffer : JavaNioByteBuffer {
 @public
  jint mapMode_;
  JavaNioMemoryBlock *block_;
}

#pragma mark Public

/*!
 @brief Flushes changes made to the in-memory buffer back to the mapped file.
 Unless you call this, changes may not be written back until the finalizer
  runs. This method waits for the write to complete before returning.
 @return this buffer.
 */
- (JavaNioMappedByteBuffer *)force;

/*!
 @brief Returns true if there is a high probability that every page of this buffer is currently
  loaded in RAM, meaning that accesses will not cause a page fault.It is impossible to give
  a strong guarantee since this is only a snapshot of a dynamic situation.
 */
- (jboolean)isLoaded;

/*!
 @brief Attempts to load every page of this buffer into RAM.See <code>isLoaded</code>.
 @return this buffer.
 */
- (JavaNioMappedByteBuffer *)load__;

#pragma mark Package-Private

- (instancetype)initWithJavaNioMemoryBlock:(JavaNioMemoryBlock *)block
                                   withInt:(jint)capacity
                                   withInt:(jint)mapMode
                                  withLong:(jlong)effectiveDirectAddress;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioMappedByteBuffer)

J2OBJC_FIELD_SETTER(JavaNioMappedByteBuffer, block_, JavaNioMemoryBlock *)

FOUNDATION_EXPORT void JavaNioMappedByteBuffer_initWithJavaNioMemoryBlock_withInt_withInt_withLong_(JavaNioMappedByteBuffer *self, JavaNioMemoryBlock *block, jint capacity, jint mapMode, jlong effectiveDirectAddress);

J2OBJC_TYPE_LITERAL_HEADER(JavaNioMappedByteBuffer)

#endif

#pragma pop_macro("INCLUDE_ALL_JavaNioMappedByteBuffer")
