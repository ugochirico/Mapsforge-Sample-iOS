//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/PriorityBlockingQueue.java
//

#ifndef _JavaUtilConcurrentPriorityBlockingQueue_H_
#define _JavaUtilConcurrentPriorityBlockingQueue_H_

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"
#include "java/util/AbstractQueue.h"
#include "java/util/Iterator.h"
#include "java/util/concurrent/BlockingQueue.h"

@class IOSObjectArray;
@class JavaUtilConcurrentTimeUnitEnum;
@protocol JavaUtilCollection;
@protocol JavaUtilComparator;

@interface JavaUtilConcurrentPriorityBlockingQueue : JavaUtilAbstractQueue < JavaUtilConcurrentBlockingQueue, JavaIoSerializable >

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (instancetype)initWithInt:(jint)initialCapacity;

- (instancetype)initWithInt:(jint)initialCapacity
     withJavaUtilComparator:(id<JavaUtilComparator>)comparator;

- (jboolean)addWithId:(id)e;

- (void)clear;

- (id<JavaUtilComparator>)comparator;

- (jboolean)containsWithId:(id)o;

- (jint)drainToWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (jint)drainToWithJavaUtilCollection:(id<JavaUtilCollection>)c
                              withInt:(jint)maxElements;

- (id<JavaUtilIterator>)iterator;

- (jboolean)offerWithId:(id)e;

- (jboolean)offerWithId:(id)e
               withLong:(jlong)timeout
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (id)peek;

- (id)poll;

- (id)pollWithLong:(jlong)timeout
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (void)putWithId:(id)e;

- (jint)remainingCapacity;

- (jboolean)removeWithId:(id)o;

- (jint)size;

- (id)take;

- (IOSObjectArray *)toArray;

- (IOSObjectArray *)toArrayWithNSObjectArray:(IOSObjectArray *)a;

- (NSString *)description;

#pragma mark Package-Private

- (void)removeEQWithId:(id)o;


@end

J2OBJC_STATIC_INIT(JavaUtilConcurrentPriorityBlockingQueue)

FOUNDATION_EXPORT void JavaUtilConcurrentPriorityBlockingQueue_init(JavaUtilConcurrentPriorityBlockingQueue *self);

FOUNDATION_EXPORT JavaUtilConcurrentPriorityBlockingQueue *new_JavaUtilConcurrentPriorityBlockingQueue_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilConcurrentPriorityBlockingQueue_initWithInt_(JavaUtilConcurrentPriorityBlockingQueue *self, jint initialCapacity);

FOUNDATION_EXPORT JavaUtilConcurrentPriorityBlockingQueue *new_JavaUtilConcurrentPriorityBlockingQueue_initWithInt_(jint initialCapacity) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilConcurrentPriorityBlockingQueue_initWithInt_withJavaUtilComparator_(JavaUtilConcurrentPriorityBlockingQueue *self, jint initialCapacity, id<JavaUtilComparator> comparator);

FOUNDATION_EXPORT JavaUtilConcurrentPriorityBlockingQueue *new_JavaUtilConcurrentPriorityBlockingQueue_initWithInt_withJavaUtilComparator_(jint initialCapacity, id<JavaUtilComparator> comparator) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilConcurrentPriorityBlockingQueue_initWithJavaUtilCollection_(JavaUtilConcurrentPriorityBlockingQueue *self, id<JavaUtilCollection> c);

FOUNDATION_EXPORT JavaUtilConcurrentPriorityBlockingQueue *new_JavaUtilConcurrentPriorityBlockingQueue_initWithJavaUtilCollection_(id<JavaUtilCollection> c) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentPriorityBlockingQueue)

@interface JavaUtilConcurrentPriorityBlockingQueue_Itr : NSObject < JavaUtilIterator > {
 @public
  IOSObjectArray *array_;
  jint cursor_;
  jint lastRet_;
}

#pragma mark Public

- (jboolean)hasNext;

- (id)next;

- (void)remove;

#pragma mark Package-Private

- (instancetype)initWithJavaUtilConcurrentPriorityBlockingQueue:(JavaUtilConcurrentPriorityBlockingQueue *)outer$
                                              withNSObjectArray:(IOSObjectArray *)array;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentPriorityBlockingQueue_Itr)

J2OBJC_FIELD_SETTER(JavaUtilConcurrentPriorityBlockingQueue_Itr, array_, IOSObjectArray *)

FOUNDATION_EXPORT void JavaUtilConcurrentPriorityBlockingQueue_Itr_initWithJavaUtilConcurrentPriorityBlockingQueue_withNSObjectArray_(JavaUtilConcurrentPriorityBlockingQueue_Itr *self, JavaUtilConcurrentPriorityBlockingQueue *outer$, IOSObjectArray *array);

FOUNDATION_EXPORT JavaUtilConcurrentPriorityBlockingQueue_Itr *new_JavaUtilConcurrentPriorityBlockingQueue_Itr_initWithJavaUtilConcurrentPriorityBlockingQueue_withNSObjectArray_(JavaUtilConcurrentPriorityBlockingQueue *outer$, IOSObjectArray *array) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentPriorityBlockingQueue_Itr)

#endif // _JavaUtilConcurrentPriorityBlockingQueue_H_