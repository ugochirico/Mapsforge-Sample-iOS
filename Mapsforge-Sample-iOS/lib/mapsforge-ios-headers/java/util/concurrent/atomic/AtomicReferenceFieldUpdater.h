//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/atomic/AtomicReferenceFieldUpdater.java
//

#ifndef _JavaUtilConcurrentAtomicAtomicReferenceFieldUpdater_H_
#define _JavaUtilConcurrentAtomicAtomicReferenceFieldUpdater_H_

#include "J2ObjC_header.h"

@class IOSClass;

@interface JavaUtilConcurrentAtomicAtomicReferenceFieldUpdater : NSObject

#pragma mark Public

- (jboolean)compareAndSetWithId:(id)obj
                         withId:(id)expect
                         withId:(id)update;

- (id)getWithId:(id)obj;

- (id)getAndSetWithId:(id)obj
               withId:(id)newValue;

- (void)lazySetWithId:(id)obj
               withId:(id)newValue;

+ (JavaUtilConcurrentAtomicAtomicReferenceFieldUpdater *)newUpdaterWithIOSClass:(IOSClass *)tclass
                                                                   withIOSClass:(IOSClass *)vclass
                                                                   withNSString:(NSString *)fieldName OBJC_METHOD_FAMILY_NONE;

- (void)setWithId:(id)obj
           withId:(id)newValue;

- (jboolean)weakCompareAndSetWithId:(id)obj
                             withId:(id)expect
                             withId:(id)update;

#pragma mark Protected

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentAtomicAtomicReferenceFieldUpdater)

FOUNDATION_EXPORT JavaUtilConcurrentAtomicAtomicReferenceFieldUpdater *JavaUtilConcurrentAtomicAtomicReferenceFieldUpdater_newUpdaterWithIOSClass_withIOSClass_withNSString_(IOSClass *tclass, IOSClass *vclass, NSString *fieldName);

FOUNDATION_EXPORT void JavaUtilConcurrentAtomicAtomicReferenceFieldUpdater_init(JavaUtilConcurrentAtomicAtomicReferenceFieldUpdater *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentAtomicAtomicReferenceFieldUpdater)

#endif // _JavaUtilConcurrentAtomicAtomicReferenceFieldUpdater_H_