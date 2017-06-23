//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/CopyOnWriteArrayList.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilConcurrentCopyOnWriteArrayList")
#ifdef RESTRICT_JavaUtilConcurrentCopyOnWriteArrayList
#define INCLUDE_ALL_JavaUtilConcurrentCopyOnWriteArrayList 0
#else
#define INCLUDE_ALL_JavaUtilConcurrentCopyOnWriteArrayList 1
#endif
#undef RESTRICT_JavaUtilConcurrentCopyOnWriteArrayList

#if !defined (JavaUtilConcurrentCopyOnWriteArrayList_) && (INCLUDE_ALL_JavaUtilConcurrentCopyOnWriteArrayList || defined(INCLUDE_JavaUtilConcurrentCopyOnWriteArrayList))
#define JavaUtilConcurrentCopyOnWriteArrayList_

#define RESTRICT_JavaUtilList 1
#define INCLUDE_JavaUtilList 1
#include "java/util/List.h"

#define RESTRICT_JavaUtilRandomAccess 1
#define INCLUDE_JavaUtilRandomAccess 1
#include "java/util/RandomAccess.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class IOSObjectArray;
@protocol JavaUtilCollection;
@protocol JavaUtilComparator;
@protocol JavaUtilFunctionConsumer;
@protocol JavaUtilFunctionPredicate;
@protocol JavaUtilFunctionUnaryOperator;
@protocol JavaUtilIterator;
@protocol JavaUtilListIterator;
@protocol JavaUtilSpliterator;
@protocol JavaUtilStreamStream;

/*!
 @brief A thread-safe random-access list.
 <p>Read operations (including <code>get</code>) do not block and may overlap with
  update operations. Reads reflect the results of the most recently completed
  operations. Aggregate operations like <code>addAll</code> and <code>clear</code> are
  atomic; they never expose an intermediate state. 
 <p>Iterators of this list never throw <code>ConcurrentModificationException</code>
 . When an iterator is created, it keeps a
  copy of the list's contents. It is always safe to iterate this list, but
  iterations may not reflect the latest state of the list. 
 <p>Iterators returned by this list and its sub lists cannot modify the
  underlying list. In particular, <code>Iterator.remove</code>, <code>ListIterator.add</code>
  and <code>ListIterator.set</code> all throw <code>UnsupportedOperationException</code>
 .
  
 <p>This class offers extended API beyond the <code>List</code> interface. It
  includes additional overloads for indexed search (<code>indexOf</code> and <code>lastIndexOf</code>
 ) and methods for conditional adds (<code>addIfAbsent</code> and 
 <code>addAllAbsent</code>).
 */
@interface JavaUtilConcurrentCopyOnWriteArrayList : NSObject < JavaUtilList, JavaUtilRandomAccess, NSCopying, JavaIoSerializable >

#pragma mark Public

/*!
 @brief Creates a new empty instance.
 */
- (instancetype)init;

/*!
 @brief Creates a new instance containing the elements of <code>collection</code>.
 */
- (instancetype)initWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

/*!
 @brief Creates a new instance containing the elements of <code>array</code>.
 */
- (instancetype)initWithNSObjectArray:(IOSObjectArray *)array;

- (jboolean)addWithId:(id)e;

- (void)addWithInt:(jint)index
            withId:(id)e;

- (jboolean)addAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (jboolean)addAllWithInt:(jint)index
   withJavaUtilCollection:(id<JavaUtilCollection>)collection;

/*!
 @brief Adds the elements of <code>collection</code> that are not already present in
  this list.If <code>collection</code> includes a repeated value, at most one
  occurrence of that value will be added to this list.
 Elements are added
  at the end of this list. 
 <p>Callers of this method may prefer <code>CopyOnWriteArraySet</code>, whose
  API is more appropriate for set operations.
 */
- (jint)addAllAbsentWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

/*!
 @brief Adds <code>object</code> to the end of this list if it is not already present.
 <p>Callers of this method may prefer <code>CopyOnWriteArraySet</code>, whose
  API is more appropriate for set operations.
 */
- (jboolean)addIfAbsentWithId:(id)object;

- (void)clear;

- (id)java_clone;

- (jboolean)containsWithId:(id)o;

- (jboolean)containsAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (jboolean)isEqual:(id)other;

- (id)getWithInt:(jint)index;

- (NSUInteger)hash;

/*!
 @brief Searches this list for <code>object</code> and returns the index of the first
  occurrence that is at or after <code>from</code>.
 @return the index or -1 if the object was not found.
 */
- (jint)indexOfWithId:(id)object
              withInt:(jint)from;

- (jint)indexOfWithId:(id)object;

- (jboolean)isEmpty;

/*!
 @brief Returns an <code>Iterator</code> that iterates over the elements of this list
  as they were at the time of this method call.Changes to the list made
  after this method call will not be reflected by the iterator, nor will
  they trigger a <code>ConcurrentModificationException</code>.
 <p>The returned iterator does not support <code>Iterator.remove()</code>.
 */
- (id<JavaUtilIterator>)iterator;

/*!
 @brief Searches this list for <code>object</code> and returns the index of the last
  occurrence that is before <code>to</code>.
 @return the index or -1 if the object was not found.
 */
- (jint)lastIndexOfWithId:(id)object
                  withInt:(jint)to;

- (jint)lastIndexOfWithId:(id)object;

/*!
 @brief Equivalent to <code>listIterator(0)</code>.
 */
- (id<JavaUtilListIterator>)listIterator;

/*!
 @brief Returns a <code>ListIterator</code> that iterates over the elements of this
  list as they were at the time of this method call.Changes to the list
  made after this method call will not be reflected by the iterator, nor
  will they trigger a <code>ConcurrentModificationException</code>.
 <p>The returned iterator does not support <code>ListIterator.add</code>,
  <code>ListIterator.set</code> or <code>Iterator.remove()</code>,
 */
- (id<JavaUtilListIterator>)listIteratorWithInt:(jint)index;

- (id)removeWithInt:(jint)index;

- (jboolean)removeWithId:(id)o;

- (jboolean)removeAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (jboolean)retainAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (id)setWithInt:(jint)index
          withId:(id)e;

- (jint)size;

- (id<JavaUtilList>)subListWithInt:(jint)from
                           withInt:(jint)to;

- (IOSObjectArray *)toArray;

- (IOSObjectArray *)toArrayWithNSObjectArray:(IOSObjectArray *)contents;

- (NSString *)description;

#pragma mark Package-Private

+ (jboolean)containsAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection
                            withNSObjectArray:(IOSObjectArray *)snapshot
                                      withInt:(jint)from
                                      withInt:(jint)to;

- (IOSObjectArray *)getArray;

+ (jint)indexOfWithId:(id)o
    withNSObjectArray:(IOSObjectArray *)data
              withInt:(jint)from
              withInt:(jint)to;

+ (jint)lastIndexOfWithId:(id)o
        withNSObjectArray:(IOSObjectArray *)data
                  withInt:(jint)from
                  withInt:(jint)to;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentCopyOnWriteArrayList)

FOUNDATION_EXPORT void JavaUtilConcurrentCopyOnWriteArrayList_init(JavaUtilConcurrentCopyOnWriteArrayList *self);

FOUNDATION_EXPORT JavaUtilConcurrentCopyOnWriteArrayList *new_JavaUtilConcurrentCopyOnWriteArrayList_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilConcurrentCopyOnWriteArrayList *create_JavaUtilConcurrentCopyOnWriteArrayList_init();

FOUNDATION_EXPORT void JavaUtilConcurrentCopyOnWriteArrayList_initWithJavaUtilCollection_(JavaUtilConcurrentCopyOnWriteArrayList *self, id<JavaUtilCollection> collection);

FOUNDATION_EXPORT JavaUtilConcurrentCopyOnWriteArrayList *new_JavaUtilConcurrentCopyOnWriteArrayList_initWithJavaUtilCollection_(id<JavaUtilCollection> collection) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilConcurrentCopyOnWriteArrayList *create_JavaUtilConcurrentCopyOnWriteArrayList_initWithJavaUtilCollection_(id<JavaUtilCollection> collection);

FOUNDATION_EXPORT void JavaUtilConcurrentCopyOnWriteArrayList_initWithNSObjectArray_(JavaUtilConcurrentCopyOnWriteArrayList *self, IOSObjectArray *array);

FOUNDATION_EXPORT JavaUtilConcurrentCopyOnWriteArrayList *new_JavaUtilConcurrentCopyOnWriteArrayList_initWithNSObjectArray_(IOSObjectArray *array) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilConcurrentCopyOnWriteArrayList *create_JavaUtilConcurrentCopyOnWriteArrayList_initWithNSObjectArray_(IOSObjectArray *array);

FOUNDATION_EXPORT jboolean JavaUtilConcurrentCopyOnWriteArrayList_containsAllWithJavaUtilCollection_withNSObjectArray_withInt_withInt_(id<JavaUtilCollection> collection, IOSObjectArray *snapshot, jint from, jint to);

FOUNDATION_EXPORT jint JavaUtilConcurrentCopyOnWriteArrayList_lastIndexOfWithId_withNSObjectArray_withInt_withInt_(id o, IOSObjectArray *data, jint from, jint to);

FOUNDATION_EXPORT jint JavaUtilConcurrentCopyOnWriteArrayList_indexOfWithId_withNSObjectArray_withInt_withInt_(id o, IOSObjectArray *data, jint from, jint to);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentCopyOnWriteArrayList)

#endif

#if !defined (JavaUtilConcurrentCopyOnWriteArrayList_CowSubList_) && (INCLUDE_ALL_JavaUtilConcurrentCopyOnWriteArrayList || defined(INCLUDE_JavaUtilConcurrentCopyOnWriteArrayList_CowSubList))
#define JavaUtilConcurrentCopyOnWriteArrayList_CowSubList_

#define RESTRICT_JavaUtilAbstractList 1
#define INCLUDE_JavaUtilAbstractList 1
#include "java/util/AbstractList.h"

@class IOSObjectArray;
@class JavaUtilConcurrentCopyOnWriteArrayList;
@protocol JavaUtilCollection;
@protocol JavaUtilIterator;
@protocol JavaUtilList;
@protocol JavaUtilListIterator;

/*!
 @brief The sub list is thread safe and supports non-blocking reads.Doing so is
  more difficult than in the full list, because each read needs to examine
  four fields worth of state:
   - the elements array of the full list
   - two integers for the bounds of this sub list
   - the expected elements array (to detect concurrent modification)
  This is accomplished by aggregating the sub list's three fields into a
  single snapshot object representing the current slice.
 This permits reads
  to be internally consistent without synchronization. This takes advantage
  of Java's concurrency semantics for final fields.
 */
@interface JavaUtilConcurrentCopyOnWriteArrayList_CowSubList : JavaUtilAbstractList

#pragma mark Public

- (instancetype)initWithJavaUtilConcurrentCopyOnWriteArrayList:(JavaUtilConcurrentCopyOnWriteArrayList *)outer$
                                             withNSObjectArray:(IOSObjectArray *)expectedElements
                                                       withInt:(jint)from
                                                       withInt:(jint)to;

- (jboolean)addWithId:(id)object;

- (void)addWithInt:(jint)index
            withId:(id)object;

- (jboolean)addAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (jboolean)addAllWithInt:(jint)index
   withJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (void)clear;

- (jboolean)containsWithId:(id)object;

- (jboolean)containsAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (id)getWithInt:(jint)index;

- (jint)indexOfWithId:(id)object;

- (jboolean)isEmpty;

- (id<JavaUtilIterator>)iterator;

- (jint)lastIndexOfWithId:(id)object;

- (id<JavaUtilListIterator>)listIterator;

- (id<JavaUtilListIterator>)listIteratorWithInt:(jint)index;

- (id)removeWithInt:(jint)index;

- (jboolean)removeWithId:(id)object;

- (jboolean)removeAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (jboolean)retainAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (id)setWithInt:(jint)index
          withId:(id)object;

- (jint)size;

- (id<JavaUtilList>)subListWithInt:(jint)from
                           withInt:(jint)to;

#pragma mark Package-Private

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentCopyOnWriteArrayList_CowSubList)

FOUNDATION_EXPORT void JavaUtilConcurrentCopyOnWriteArrayList_CowSubList_initWithJavaUtilConcurrentCopyOnWriteArrayList_withNSObjectArray_withInt_withInt_(JavaUtilConcurrentCopyOnWriteArrayList_CowSubList *self, JavaUtilConcurrentCopyOnWriteArrayList *outer$, IOSObjectArray *expectedElements, jint from, jint to);

FOUNDATION_EXPORT JavaUtilConcurrentCopyOnWriteArrayList_CowSubList *new_JavaUtilConcurrentCopyOnWriteArrayList_CowSubList_initWithJavaUtilConcurrentCopyOnWriteArrayList_withNSObjectArray_withInt_withInt_(JavaUtilConcurrentCopyOnWriteArrayList *outer$, IOSObjectArray *expectedElements, jint from, jint to) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilConcurrentCopyOnWriteArrayList_CowSubList *create_JavaUtilConcurrentCopyOnWriteArrayList_CowSubList_initWithJavaUtilConcurrentCopyOnWriteArrayList_withNSObjectArray_withInt_withInt_(JavaUtilConcurrentCopyOnWriteArrayList *outer$, IOSObjectArray *expectedElements, jint from, jint to);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentCopyOnWriteArrayList_CowSubList)

#endif

#if !defined (JavaUtilConcurrentCopyOnWriteArrayList_Slice_) && (INCLUDE_ALL_JavaUtilConcurrentCopyOnWriteArrayList || defined(INCLUDE_JavaUtilConcurrentCopyOnWriteArrayList_Slice))
#define JavaUtilConcurrentCopyOnWriteArrayList_Slice_

@class IOSObjectArray;

@interface JavaUtilConcurrentCopyOnWriteArrayList_Slice : NSObject

#pragma mark Package-Private

- (instancetype)initWithNSObjectArray:(IOSObjectArray *)expectedElements
                              withInt:(jint)from
                              withInt:(jint)to;

- (void)checkConcurrentModificationWithNSObjectArray:(IOSObjectArray *)snapshot;

/*!
 @brief Throws if <code>index</code> doesn't identify an element in the array.
 */
- (void)checkElementIndexWithInt:(jint)index;

/*!
 @brief Throws if <code>index</code> doesn't identify an insertion point in the
  array.Unlike element index, it's okay to add or iterate at size().
 */
- (void)checkPositionIndexWithInt:(jint)index;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentCopyOnWriteArrayList_Slice)

FOUNDATION_EXPORT void JavaUtilConcurrentCopyOnWriteArrayList_Slice_initWithNSObjectArray_withInt_withInt_(JavaUtilConcurrentCopyOnWriteArrayList_Slice *self, IOSObjectArray *expectedElements, jint from, jint to);

FOUNDATION_EXPORT JavaUtilConcurrentCopyOnWriteArrayList_Slice *new_JavaUtilConcurrentCopyOnWriteArrayList_Slice_initWithNSObjectArray_withInt_withInt_(IOSObjectArray *expectedElements, jint from, jint to) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilConcurrentCopyOnWriteArrayList_Slice *create_JavaUtilConcurrentCopyOnWriteArrayList_Slice_initWithNSObjectArray_withInt_withInt_(IOSObjectArray *expectedElements, jint from, jint to);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentCopyOnWriteArrayList_Slice)

#endif

#if !defined (JavaUtilConcurrentCopyOnWriteArrayList_CowIterator_) && (INCLUDE_ALL_JavaUtilConcurrentCopyOnWriteArrayList || defined(INCLUDE_JavaUtilConcurrentCopyOnWriteArrayList_CowIterator))
#define JavaUtilConcurrentCopyOnWriteArrayList_CowIterator_

#define RESTRICT_JavaUtilListIterator 1
#define INCLUDE_JavaUtilListIterator 1
#include "java/util/ListIterator.h"

@class IOSObjectArray;
@protocol JavaUtilFunctionConsumer;

/*!
 @brief Iterates an immutable snapshot of the list.
 */
@interface JavaUtilConcurrentCopyOnWriteArrayList_CowIterator : NSObject < JavaUtilListIterator >

#pragma mark Public

- (void)addWithId:(id)object;

- (jboolean)hasNext;

- (jboolean)hasPrevious;

- (id)next;

- (jint)nextIndex;

- (id)previous;

- (jint)previousIndex;

- (void)remove;

- (void)setWithId:(id)object;

#pragma mark Package-Private

- (instancetype)initWithNSObjectArray:(IOSObjectArray *)snapshot
                              withInt:(jint)from
                              withInt:(jint)to;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentCopyOnWriteArrayList_CowIterator)

FOUNDATION_EXPORT void JavaUtilConcurrentCopyOnWriteArrayList_CowIterator_initWithNSObjectArray_withInt_withInt_(JavaUtilConcurrentCopyOnWriteArrayList_CowIterator *self, IOSObjectArray *snapshot, jint from, jint to);

FOUNDATION_EXPORT JavaUtilConcurrentCopyOnWriteArrayList_CowIterator *new_JavaUtilConcurrentCopyOnWriteArrayList_CowIterator_initWithNSObjectArray_withInt_withInt_(IOSObjectArray *snapshot, jint from, jint to) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilConcurrentCopyOnWriteArrayList_CowIterator *create_JavaUtilConcurrentCopyOnWriteArrayList_CowIterator_initWithNSObjectArray_withInt_withInt_(IOSObjectArray *snapshot, jint from, jint to);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentCopyOnWriteArrayList_CowIterator)

#endif

#pragma pop_macro("INCLUDE_ALL_JavaUtilConcurrentCopyOnWriteArrayList")
