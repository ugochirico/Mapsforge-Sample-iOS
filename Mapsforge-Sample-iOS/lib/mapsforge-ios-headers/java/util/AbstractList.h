//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/AbstractList.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilAbstractList")
#ifdef RESTRICT_JavaUtilAbstractList
#define INCLUDE_ALL_JavaUtilAbstractList 0
#else
#define INCLUDE_ALL_JavaUtilAbstractList 1
#endif
#undef RESTRICT_JavaUtilAbstractList
#ifdef INCLUDE_JavaUtilRandomAccessSubList
#define INCLUDE_JavaUtilSubList 1
#endif
#ifdef INCLUDE_JavaUtilSubList
#define INCLUDE_JavaUtilAbstractList 1
#endif

#if !defined (JavaUtilAbstractList_) && (INCLUDE_ALL_JavaUtilAbstractList || defined(INCLUDE_JavaUtilAbstractList))
#define JavaUtilAbstractList_

#define RESTRICT_JavaUtilAbstractCollection 1
#define INCLUDE_JavaUtilAbstractCollection 1
#include "java/util/AbstractCollection.h"

#define RESTRICT_JavaUtilList 1
#define INCLUDE_JavaUtilList 1
#include "java/util/List.h"

@protocol JavaUtilCollection;
@protocol JavaUtilComparator;
@protocol JavaUtilFunctionUnaryOperator;
@protocol JavaUtilIterator;
@protocol JavaUtilListIterator;
@protocol JavaUtilSpliterator;

/*!
 @brief This class provides a skeletal implementation of the <code>List</code>
  interface to minimize the effort required to implement this interface
  backed by a "random access" data store (such as an array).For sequential
  access data (such as a linked list), <code>AbstractSequentialList</code> should
  be used in preference to this class.
 <p>To implement an unmodifiable list, the programmer needs only to extend
  this class and provide implementations for the <code>get(int)</code> and 
 <code>size()</code> methods. 
 <p>To implement a modifiable list, the programmer must additionally
  override the <code>E)</code> method (which otherwise
  throws an <code>UnsupportedOperationException</code>).  If the list is
  variable-size the programmer must additionally override the 
 <code>E)</code> and <code>remove(int)</code> methods. 
 <p>The programmer should generally provide a void (no argument) and collection
  constructor, as per the recommendation in the <code>Collection</code> interface
  specification. 
 <p>Unlike the other abstract collection implementations, the programmer does 
 <i>not</i> have to provide an iterator implementation; the iterator and
  list iterator are implemented by this class, on top of the "random access"
  methods: 
 <code>get(int)</code>,
  <code>E)</code>,
  <code>E)</code> and 
 <code>remove(int)</code>.
  
 <p>The documentation for each non-abstract method in this class describes its
  implementation in detail.  Each of these methods may be overridden if the
  collection being implemented admits a more efficient implementation. 
 <p>This class is a member of the 
 <a href="{@@docRoot}/../technotes/guides/collections/index.html">
  Java Collections Framework</a>.
 @author Josh Bloch
 @author Neal Gafter
 @since 1.2
 */
@interface JavaUtilAbstractList : JavaUtilAbstractCollection < JavaUtilList > {
 @public
  /*!
   @brief The number of times this list has been <i>structurally modified</i>.
   Structural modifications are those that change the size of the
  list, or otherwise perturb it in such a fashion that iterations in
  progress may yield incorrect results. 
 <p>This field is used by the iterator and list iterator implementation
  returned by the <code>iterator</code> and <code>listIterator</code> methods.
  If the value of this field changes unexpectedly, the iterator (or list
  iterator) will throw a <code>ConcurrentModificationException</code> in
  response to the <code>next</code>, <code>remove</code>, <code>previous</code>,
  <code>set</code> or <code>add</code> operations.  This provides 
 <i>fail-fast</i> behavior, rather than non-deterministic behavior in
  the face of concurrent modification during iteration. 
 <p><b>Use of this field by subclasses is optional.</b> If a subclass
  wishes to provide fail-fast iterators (and list iterators), then it
  merely has to increment this field in its <code>add(int, E)</code> and 
 <code>remove(int)</code> methods (and any other methods that it overrides
  that result in structural modifications to the list).  A single call to 
 <code>add(int, E)</code> or <code>remove(int)</code> must add no more than
  one to this field, or the iterators (and list iterators) will throw
  bogus <code>ConcurrentModificationExceptions</code>.  If an implementation
  does not wish to provide fail-fast iterators, this field may be
  ignored.
   */
  jint modCount_;
}

#pragma mark Public

/*!
 @brief Appends the specified element to the end of this list (optional
  operation).
 <p>Lists that support this operation may place limitations on what
  elements may be added to this list.  In particular, some
  lists will refuse to add null elements, and others will impose
  restrictions on the type of elements that may be added.  List
  classes should clearly specify in their documentation any restrictions
  on what elements may be added. 
 <p>This implementation calls <code>add(size(), e)</code>.
  
 <p>Note that this implementation throws an 
 <code>UnsupportedOperationException</code> unless 
 <code>E)</code> is overridden.
 @param e element to be appended to this list
 @return <code>true</code> (as specified by <code>Collection.add</code>)
 @throw UnsupportedOperationExceptionif the <code>add</code> operation
          is not supported by this list
 @throw ClassCastExceptionif the class of the specified element
          prevents it from being added to this list
 @throw NullPointerExceptionif the specified element is null and this
          list does not permit null elements
 @throw IllegalArgumentExceptionif some property of this element
          prevents it from being added to this list
 */
- (jboolean)addWithId:(id)e;

/*!
 @brief <p>This implementation always throws an 
 <code>UnsupportedOperationException</code>.
 @throw UnsupportedOperationException
 @throw ClassCastException
 @throw NullPointerException
 @throw IllegalArgumentException
 @throw IndexOutOfBoundsException
 */
- (void)addWithInt:(jint)index
            withId:(id)element;

/*!
 @brief <p>This implementation gets an iterator over the specified collection
  and iterates over it, inserting the elements obtained from the
  iterator into this list at the appropriate position, one at a time,
  using <code>add(int, E)</code>.
 Many implementations will override this method for efficiency. 
 <p>Note that this implementation throws an 
 <code>UnsupportedOperationException</code> unless 
 <code>E)</code> is overridden.
 @throw UnsupportedOperationException
 @throw ClassCastException
 @throw NullPointerException
 @throw IllegalArgumentException
 @throw IndexOutOfBoundsException
 */
- (jboolean)addAllWithInt:(jint)index
   withJavaUtilCollection:(id<JavaUtilCollection>)c;

/*!
 @brief Removes all of the elements from this list (optional operation).
 The list will be empty after this call returns. 
 <p>This implementation calls <code>removeRange(0, size())</code>.
  
 <p>Note that this implementation throws an 
 <code>UnsupportedOperationException</code> unless <code>remove(int
  index)</code>
  or <code>removeRange(int fromIndex, int toIndex)</code> is
  overridden.
 @throw UnsupportedOperationExceptionif the <code>clear</code> operation
          is not supported by this list
 */
- (void)clear;

/*!
 @brief Compares the specified object with this list for equality.Returns
  <code>true</code> if and only if the specified object is also a list, both
  lists have the same size, and all corresponding pairs of elements in
  the two lists are <i>equal</i>.
 (Two elements <code>e1</code> and 
 <code>e2</code> are <i>equal</i> if <code>(e1==null ? e2==null :
  e1.equals(e2))</code>
 .)  In other words, two lists are defined to be
  equal if they contain the same elements in the same order.<p>
  This implementation first checks if the specified object is this
  list. If so, it returns <code>true</code>; if not, it checks if the
  specified object is a list. If not, it returns <code>false</code>; if so,
  it iterates over both lists, comparing corresponding pairs of elements.
  If any comparison returns <code>false</code>, this method returns 
 <code>false</code>.  If either iterator runs out of elements before the
  other it returns <code>false</code> (as the lists are of unequal length);
  otherwise it returns <code>true</code> when the iterations complete.
 @param o the object to be compared for equality with this list
 @return <code>true</code> if the specified object is equal to this list
 */
- (jboolean)isEqual:(id)o;

/*!
 @throw IndexOutOfBoundsException
 */
- (id)getWithInt:(jint)index;

/*!
 @brief Returns the hash code value for this list.
 <p>This implementation uses exactly the code that is used to define the
  list hash function in the documentation for the <code>List.hashCode</code>
  method.
 @return the hash code value for this list
 */
- (NSUInteger)hash;

/*!
 @brief <p>This implementation first gets a list iterator (with 
 <code>listIterator()</code>).
 Then, it iterates over the list until the
  specified element is found or the end of the list is reached.
 @throw ClassCastException
 @throw NullPointerException
 */
- (jint)indexOfWithId:(id)o;

/*!
 @brief Returns an iterator over the elements in this list in proper sequence.
 <p>This implementation returns a straightforward implementation of the
  iterator interface, relying on the backing list's <code>size()</code>,
  <code>get(int)</code>, and <code>remove(int)</code> methods. 
 <p>Note that the iterator returned by this method will throw an 
 <code>UnsupportedOperationException</code> in response to its 
 <code>remove</code> method unless the list's <code>remove(int)</code> method is
  overridden. 
 <p>This implementation can be made to throw runtime exceptions in the
  face of concurrent modification, as described in the specification
  for the (protected) <code>modCount</code> field.
 @return an iterator over the elements in this list in proper sequence
 */
- (id<JavaUtilIterator>)iterator;

/*!
 @brief <p>This implementation first gets a list iterator that points to the end
  of the list (with <code>listIterator(size())</code>).
 Then, it iterates
  backwards over the list until the specified element is found, or the
  beginning of the list is reached.
 @throw ClassCastException
 @throw NullPointerException
 */
- (jint)lastIndexOfWithId:(id)o;

/*!
 @brief <p>This implementation returns <code>listIterator(0)</code>.
 - seealso: #listIterator(int)
 */
- (id<JavaUtilListIterator>)listIterator;

/*!
 @brief <p>This implementation returns a straightforward implementation of the 
 <code>ListIterator</code> interface that extends the implementation of the 
 <code>Iterator</code> interface returned by the <code>iterator()</code> method.
 The <code>ListIterator</code> implementation relies on the backing list's 
 <code>get(int)</code>, <code>set(int, E)</code>, <code>add(int, E)</code>
  and <code>remove(int)</code> methods. 
 <p>Note that the list iterator returned by this implementation will
  throw an <code>UnsupportedOperationException</code> in response to its 
 <code>remove</code>, <code>set</code> and <code>add</code> methods unless the
  list's <code>remove(int)</code>, <code>set(int, E)</code>, and 
 <code>add(int, E)</code> methods are overridden. 
 <p>This implementation can be made to throw runtime exceptions in the
  face of concurrent modification, as described in the specification for
  the (protected) <code>modCount</code> field.
 @throw IndexOutOfBoundsException
 */
- (id<JavaUtilListIterator>)listIteratorWithInt:(jint)index;

/*!
 @brief <p>This implementation always throws an 
 <code>UnsupportedOperationException</code>.
 @throw UnsupportedOperationException
 @throw IndexOutOfBoundsException
 */
- (id)removeWithInt:(jint)index;

/*!
 @brief <p>This implementation always throws an 
 <code>UnsupportedOperationException</code>.
 @throw UnsupportedOperationException
 @throw ClassCastException
 @throw NullPointerException
 @throw IllegalArgumentException
 @throw IndexOutOfBoundsException
 */
- (id)setWithInt:(jint)index
          withId:(id)element;

/*!
 @brief <p>This implementation returns a list that subclasses 
 <code>AbstractList</code>.
 The subclass stores, in private fields, the
  offset of the subList within the backing list, the size of the subList
  (which can change over its lifetime), and the expected 
 <code>modCount</code> value of the backing list.  There are two variants
  of the subclass, one of which implements <code>RandomAccess</code>.
  If this list implements <code>RandomAccess</code> the returned list will
  be an instance of the subclass that implements <code>RandomAccess</code>.
  
 <p>The subclass's <code>set(int, E)</code>, <code>get(int)</code>,
  <code>add(int, E)</code>, <code>remove(int)</code>, <code>addAll(int,
  Collection)</code>
  and <code>removeRange(int, int)</code> methods all
  delegate to the corresponding methods on the backing abstract list,
  after bounds-checking the index and adjusting for the offset.  The 
 <code>addAll(Collection c)</code> method merely returns <code>addAll(size,
  c)</code>
 .
  
 <p>The <code>listIterator(int)</code> method returns a "wrapper object"
  over a list iterator on the backing list, which is created with the
  corresponding method on the backing list.  The <code>iterator</code> method
  merely returns <code>listIterator()</code>, and the <code>size</code> method
  merely returns the subclass's <code>size</code> field. 
 <p>All methods first check to see if the actual <code>modCount</code> of
  the backing list is equal to its expected value, and throw a 
 <code>ConcurrentModificationException</code> if it is not.
 @throw IndexOutOfBoundsExceptionif an endpoint index value is out of range
          <code>(fromIndex < 0 || toIndex > size)</code>
 @throw IllegalArgumentExceptionif the endpoint indices are out of order
          <code>(fromIndex > toIndex)</code>
 */
- (id<JavaUtilList>)subListWithInt:(jint)fromIndex
                           withInt:(jint)toIndex;

#pragma mark Protected

/*!
 @brief Sole constructor.
 (For invocation by subclass constructors, typically
  implicit.)
 */
- (instancetype)init;

/*!
 @brief Removes from this list all of the elements whose index is between 
 <code>fromIndex</code>, inclusive, and <code>toIndex</code>, exclusive.
 Shifts any succeeding elements to the left (reduces their index).
  This call shortens the list by <code>(toIndex - fromIndex)</code> elements.
  (If <code>toIndex==fromIndex</code>, this operation has no effect.) 
 <p>This method is called by the <code>clear</code> operation on this list
  and its subLists.  Overriding this method to take advantage of
  the internals of the list implementation can <i>substantially</i>
  improve the performance of the <code>clear</code> operation on this list
  and its subLists. 
 <p>This implementation gets a list iterator positioned before 
 <code>fromIndex</code>, and repeatedly calls <code>ListIterator.next</code>
  followed by <code>ListIterator.remove</code> until the entire range has
  been removed.  <b>Note: if <code>ListIterator.remove</code> requires linear
  time, this implementation requires quadratic time.</b>
 @param fromIndex index of first element to be removed
 @param toIndex index after last element to be removed
 */
- (void)removeRangeWithInt:(jint)fromIndex
                   withInt:(jint)toIndex;

#pragma mark Package-Private

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilAbstractList)

FOUNDATION_EXPORT void JavaUtilAbstractList_init(JavaUtilAbstractList *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilAbstractList)

#endif

#if !defined (JavaUtilSubList_) && (INCLUDE_ALL_JavaUtilAbstractList || defined(INCLUDE_JavaUtilSubList))
#define JavaUtilSubList_

@class JavaUtilAbstractList;
@protocol JavaUtilCollection;
@protocol JavaUtilIterator;
@protocol JavaUtilList;
@protocol JavaUtilListIterator;

@interface JavaUtilSubList : JavaUtilAbstractList

#pragma mark Public

- (void)addWithInt:(jint)index
            withId:(id)element;

- (jboolean)addAllWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (jboolean)addAllWithInt:(jint)index
   withJavaUtilCollection:(id<JavaUtilCollection>)c;

- (id)getWithInt:(jint)index;

- (id<JavaUtilIterator>)iterator;

- (id<JavaUtilListIterator>)listIteratorWithInt:(jint)index;

- (id)removeWithInt:(jint)index;

- (id)setWithInt:(jint)index
          withId:(id)element;

- (jint)size;

- (id<JavaUtilList>)subListWithInt:(jint)fromIndex
                           withInt:(jint)toIndex;

#pragma mark Protected

- (void)removeRangeWithInt:(jint)fromIndex
                   withInt:(jint)toIndex;

#pragma mark Package-Private

- (instancetype)initWithJavaUtilAbstractList:(JavaUtilAbstractList *)list
                                     withInt:(jint)fromIndex
                                     withInt:(jint)toIndex;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilSubList)

FOUNDATION_EXPORT void JavaUtilSubList_initWithJavaUtilAbstractList_withInt_withInt_(JavaUtilSubList *self, JavaUtilAbstractList *list, jint fromIndex, jint toIndex);

FOUNDATION_EXPORT JavaUtilSubList *new_JavaUtilSubList_initWithJavaUtilAbstractList_withInt_withInt_(JavaUtilAbstractList *list, jint fromIndex, jint toIndex) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilSubList *create_JavaUtilSubList_initWithJavaUtilAbstractList_withInt_withInt_(JavaUtilAbstractList *list, jint fromIndex, jint toIndex);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilSubList)

#endif

#if !defined (JavaUtilRandomAccessSubList_) && (INCLUDE_ALL_JavaUtilAbstractList || defined(INCLUDE_JavaUtilRandomAccessSubList))
#define JavaUtilRandomAccessSubList_

#define RESTRICT_JavaUtilRandomAccess 1
#define INCLUDE_JavaUtilRandomAccess 1
#include "java/util/RandomAccess.h"

@class JavaUtilAbstractList;
@protocol JavaUtilList;

@interface JavaUtilRandomAccessSubList : JavaUtilSubList < JavaUtilRandomAccess >

#pragma mark Public

- (id<JavaUtilList>)subListWithInt:(jint)fromIndex
                           withInt:(jint)toIndex;

#pragma mark Package-Private

- (instancetype)initWithJavaUtilAbstractList:(JavaUtilAbstractList *)list
                                     withInt:(jint)fromIndex
                                     withInt:(jint)toIndex;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilRandomAccessSubList)

FOUNDATION_EXPORT void JavaUtilRandomAccessSubList_initWithJavaUtilAbstractList_withInt_withInt_(JavaUtilRandomAccessSubList *self, JavaUtilAbstractList *list, jint fromIndex, jint toIndex);

FOUNDATION_EXPORT JavaUtilRandomAccessSubList *new_JavaUtilRandomAccessSubList_initWithJavaUtilAbstractList_withInt_withInt_(JavaUtilAbstractList *list, jint fromIndex, jint toIndex) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilRandomAccessSubList *create_JavaUtilRandomAccessSubList_initWithJavaUtilAbstractList_withInt_withInt_(JavaUtilAbstractList *list, jint fromIndex, jint toIndex);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilRandomAccessSubList)

#endif

#pragma pop_macro("INCLUDE_ALL_JavaUtilAbstractList")
