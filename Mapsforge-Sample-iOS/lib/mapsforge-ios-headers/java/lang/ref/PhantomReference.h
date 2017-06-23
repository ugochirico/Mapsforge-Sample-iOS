//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/lang/ref/PhantomReference.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangRefPhantomReference")
#ifdef RESTRICT_JavaLangRefPhantomReference
#define INCLUDE_ALL_JavaLangRefPhantomReference 0
#else
#define INCLUDE_ALL_JavaLangRefPhantomReference 1
#endif
#undef RESTRICT_JavaLangRefPhantomReference

#if !defined (JavaLangRefPhantomReference_) && (INCLUDE_ALL_JavaLangRefPhantomReference || defined(INCLUDE_JavaLangRefPhantomReference))
#define JavaLangRefPhantomReference_

#define RESTRICT_JavaLangRefReference 1
#define INCLUDE_JavaLangRefReference 1
#include "java/lang/ref/Reference.h"

@class JavaLangRefReferenceQueue;

/*!
 @brief Phantom reference objects, which are enqueued after the collector
  determines that their referents may otherwise be reclaimed.Phantom
  references are most often used for scheduling pre-mortem cleanup actions in
  a more flexible way than is possible with the Java finalization mechanism.
 <p> If the garbage collector determines at a certain point in time that the
  referent of a phantom reference is <a href="package-summary.html#reachability">
 phantom reachable</a>, then at that
  time or at some later time it will enqueue the reference. 
 <p> In order to ensure that a reclaimable object remains so, the referent of
  a phantom reference may not be retrieved: The <code>get</code> method of a
  phantom reference always returns <code>null</code>.
  
 <p> Unlike soft and weak references, phantom references are not
  automatically cleared by the garbage collector as they are enqueued.  An
  object that is reachable via phantom references will remain so until all
  such references are cleared or themselves become unreachable.
 @author Mark Reinhold
 @since 1.2
 */
@interface JavaLangRefPhantomReference : JavaLangRefReference

#pragma mark Public

/*!
 @brief Creates a new phantom reference that refers to the given object and
  is registered with the given queue.
 <p> It is possible to create a phantom reference with a <tt>null</tt>
  queue, but such a reference is completely useless: Its <tt>get</tt>
  method will always return null and, since it does not have a queue, it
  will never be enqueued.
 @param referent the object the new phantom reference will refer to
 @param q the queue with which the reference is to be registered,           or 
  <tt> null </tt>  if registration is not required
 */
- (instancetype)initWithId:(id)referent
withJavaLangRefReferenceQueue:(JavaLangRefReferenceQueue *)q;

/*!
 @brief Returns this reference object's referent.Because the referent of a
  phantom reference is always inaccessible, this method always returns 
 <code>null</code>.
 @return <code>null</code>
 */
- (id)get;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangRefPhantomReference)

FOUNDATION_EXPORT void JavaLangRefPhantomReference_initWithId_withJavaLangRefReferenceQueue_(JavaLangRefPhantomReference *self, id referent, JavaLangRefReferenceQueue *q);

FOUNDATION_EXPORT JavaLangRefPhantomReference *new_JavaLangRefPhantomReference_initWithId_withJavaLangRefReferenceQueue_(id referent, JavaLangRefReferenceQueue *q) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangRefPhantomReference *create_JavaLangRefPhantomReference_initWithId_withJavaLangRefReferenceQueue_(id referent, JavaLangRefReferenceQueue *q);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangRefPhantomReference)

#endif

#pragma pop_macro("INCLUDE_ALL_JavaLangRefPhantomReference")
