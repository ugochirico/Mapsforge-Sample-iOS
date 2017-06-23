//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/EnumSet.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilEnumSet")
#ifdef RESTRICT_JavaUtilEnumSet
#define INCLUDE_ALL_JavaUtilEnumSet 0
#else
#define INCLUDE_ALL_JavaUtilEnumSet 1
#endif
#undef RESTRICT_JavaUtilEnumSet

#if !defined (JavaUtilEnumSet_) && (INCLUDE_ALL_JavaUtilEnumSet || defined(INCLUDE_JavaUtilEnumSet))
#define JavaUtilEnumSet_

#define RESTRICT_JavaUtilAbstractSet 1
#define INCLUDE_JavaUtilAbstractSet 1
#include "java/util/AbstractSet.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class IOSClass;
@class IOSObjectArray;
@class JavaLangEnum;
@protocol JavaUtilCollection;

/*!
 @brief A specialized <code>Set</code> implementation for use with enum types.All of
  the elements in an enum set must come from a single enum type that is
  specified, explicitly or implicitly, when the set is created.
 Enum sets
  are represented internally as bit vectors.  This representation is
  extremely compact and efficient. The space and time performance of this
  class should be good enough to allow its use as a high-quality, typesafe
  alternative to traditional <tt>int</tt>-based "bit flags."  Even bulk
  operations (such as <tt>containsAll</tt> and <tt>retainAll</tt>) should
  run very quickly if their argument is also an enum set. 
 <p>The iterator returned by the <tt>iterator</tt> method traverses the
  elements in their <i>natural order</i> (the order in which the enum
  constants are declared).  The returned iterator is <i>weakly
  consistent</i>: it will never throw <code>ConcurrentModificationException</code>
  and it may or may not show the effects of any modifications to the set that
  occur while the iteration is in progress. 
 <p>Null elements are not permitted.  Attempts to insert a null element
  will throw <code>NullPointerException</code>.  Attempts to test for the
  presence of a null element or to remove one will, however, function
  properly. 
 <P>Like most collection implementations, <tt>EnumSet</tt> is not
  synchronized.  If multiple threads access an enum set concurrently, and at
  least one of the threads modifies the set, it should be synchronized
  externally.  This is typically accomplished by synchronizing on some
  object that naturally encapsulates the enum set.  If no such object exists,
  the set should be "wrapped" using the <code>Collections.synchronizedSet</code>
  method.  This is best done at creation time, to prevent accidental
  unsynchronized access: 
 @code

  Set&lt;MyEnum&gt; s = Collections.synchronizedSet(EnumSet.noneOf(MyEnum.class)); 
  
@endcode
  
 <p>Implementation note: All basic operations execute in constant time.
  They are likely (though not guaranteed) to be much faster than their 
 <code>HashSet</code> counterparts.  Even bulk operations execute in
  constant time if their argument is also an enum set. 
 <p>This class is a member of the 
 <a href="{@@docRoot}/../technotes/guides/collections/index.html">
  Java Collections Framework</a>.
 @author Josh Bloch
 @since 1.5
 - seealso: EnumMap
 */
@interface JavaUtilEnumSet : JavaUtilAbstractSet < NSCopying, JavaIoSerializable > {
 @public
  /*!
   @brief The class of all the elements of this set.
   */
  IOSClass *elementType_;
  /*!
   @brief All of the values comprising T.
   (Cached for performance.)
   */
  IOSObjectArray *universe_;
}

#pragma mark Public

/*!
 @brief Creates an enum set containing all of the elements in the specified
  element type.
 @param elementType the class object of the element type for this enum      set
 @throw NullPointerExceptionif <tt>elementType</tt> is null
 */
+ (JavaUtilEnumSet *)allOfWithIOSClass:(IOSClass *)elementType;

/*!
 @brief Returns a copy of this set.
 @return a copy of this set
 */
- (JavaUtilEnumSet *)java_clone;

/*!
 @brief Creates an enum set with the same element type as the specified enum
  set, initially containing all the elements of this type that are 
 <i>not</i> contained in the specified set.
 @param s the enum set from whose complement to initialize this enum set
 @throw NullPointerExceptionif <tt>s</tt> is null
 */
+ (JavaUtilEnumSet *)complementOfWithJavaUtilEnumSet:(JavaUtilEnumSet *)s;

/*!
 @brief Creates an enum set initialized from the specified collection.If
  the specified collection is an <tt>EnumSet</tt> instance, this static
  factory method behaves identically to <code>copyOf(EnumSet)</code>.
 Otherwise, the specified collection must contain at least one element
  (in order to determine the new enum set's element type).
 @param c the collection from which to initialize this enum set
 @throw IllegalArgumentExceptionif <tt>c</tt> is not an
      <tt>EnumSet</tt> instance and contains no elements
 @throw NullPointerExceptionif <tt>c</tt> is null
 */
+ (JavaUtilEnumSet *)copyOfWithJavaUtilCollection:(id<JavaUtilCollection>)c OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Creates an enum set with the same element type as the specified enum
  set, initially containing the same elements (if any).
 @param s the enum set from which to initialize this enum set
 @throw NullPointerExceptionif <tt>s</tt> is null
 */
+ (JavaUtilEnumSet *)copyOfWithJavaUtilEnumSet:(JavaUtilEnumSet *)s OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Creates an empty enum set with the specified element type.
 @param elementType the class object of the element type for this enum      set
 @throw NullPointerExceptionif <tt>elementType</tt> is null
 */
+ (JavaUtilEnumSet *)noneOfWithIOSClass:(IOSClass *)elementType;

/*!
 @brief Creates an enum set initially containing the specified element.
 Overloadings of this method exist to initialize an enum set with
  one through five elements.  A sixth overloading is provided that
  uses the varargs feature.  This overloading may be used to create
  an enum set initially containing an arbitrary number of elements, but
  is likely to run slower than the overloadings that do not use varargs.
 @param e the element that this set is to contain initially
 @throw NullPointerExceptionif <tt>e</tt> is null
 @return an enum set initially containing the specified element
 */
+ (JavaUtilEnumSet *)ofWithJavaLangEnum:(JavaLangEnum *)e;

/*!
 @brief Creates an enum set initially containing the specified elements.
 Overloadings of this method exist to initialize an enum set with
  one through five elements.  A sixth overloading is provided that
  uses the varargs feature.  This overloading may be used to create
  an enum set initially containing an arbitrary number of elements, but
  is likely to run slower than the overloadings that do not use varargs.
 @param e1 an element that this set is to contain initially
 @param e2 another element that this set is to contain initially
 @throw NullPointerExceptionif any parameters are null
 @return an enum set initially containing the specified elements
 */
+ (JavaUtilEnumSet *)ofWithJavaLangEnum:(JavaLangEnum *)e1
                       withJavaLangEnum:(JavaLangEnum *)e2;

/*!
 @brief Creates an enum set initially containing the specified elements.
 This factory, whose parameter list uses the varargs feature, may
  be used to create an enum set initially containing an arbitrary
  number of elements, but it is likely to run slower than the overloadings
  that do not use varargs.
 @param first an element that the set is to contain initially
 @param rest the remaining elements the set is to contain initially
 @throw NullPointerExceptionif any of the specified elements are null,
      or if <tt>rest</tt> is null
 @return an enum set initially containing the specified elements
 */
+ (JavaUtilEnumSet *)ofWithJavaLangEnum:(JavaLangEnum *)first
                  withJavaLangEnumArray:(IOSObjectArray *)rest;

/*!
 @brief Creates an enum set initially containing the specified elements.
 Overloadings of this method exist to initialize an enum set with
  one through five elements.  A sixth overloading is provided that
  uses the varargs feature.  This overloading may be used to create
  an enum set initially containing an arbitrary number of elements, but
  is likely to run slower than the overloadings that do not use varargs.
 @param e1 an element that this set is to contain initially
 @param e2 another element that this set is to contain initially
 @param e3 another element that this set is to contain initially
 @throw NullPointerExceptionif any parameters are null
 @return an enum set initially containing the specified elements
 */
+ (JavaUtilEnumSet *)ofWithJavaLangEnum:(JavaLangEnum *)e1
                       withJavaLangEnum:(JavaLangEnum *)e2
                       withJavaLangEnum:(JavaLangEnum *)e3;

/*!
 @brief Creates an enum set initially containing the specified elements.
 Overloadings of this method exist to initialize an enum set with
  one through five elements.  A sixth overloading is provided that
  uses the varargs feature.  This overloading may be used to create
  an enum set initially containing an arbitrary number of elements, but
  is likely to run slower than the overloadings that do not use varargs.
 @param e1 an element that this set is to contain initially
 @param e2 another element that this set is to contain initially
 @param e3 another element that this set is to contain initially
 @param e4 another element that this set is to contain initially
 @throw NullPointerExceptionif any parameters are null
 @return an enum set initially containing the specified elements
 */
+ (JavaUtilEnumSet *)ofWithJavaLangEnum:(JavaLangEnum *)e1
                       withJavaLangEnum:(JavaLangEnum *)e2
                       withJavaLangEnum:(JavaLangEnum *)e3
                       withJavaLangEnum:(JavaLangEnum *)e4;

/*!
 @brief Creates an enum set initially containing the specified elements.
 Overloadings of this method exist to initialize an enum set with
  one through five elements.  A sixth overloading is provided that
  uses the varargs feature.  This overloading may be used to create
  an enum set initially containing an arbitrary number of elements, but
  is likely to run slower than the overloadings that do not use varargs.
 @param e1 an element that this set is to contain initially
 @param e2 another element that this set is to contain initially
 @param e3 another element that this set is to contain initially
 @param e4 another element that this set is to contain initially
 @param e5 another element that this set is to contain initially
 @throw NullPointerExceptionif any parameters are null
 @return an enum set initially containing the specified elements
 */
+ (JavaUtilEnumSet *)ofWithJavaLangEnum:(JavaLangEnum *)e1
                       withJavaLangEnum:(JavaLangEnum *)e2
                       withJavaLangEnum:(JavaLangEnum *)e3
                       withJavaLangEnum:(JavaLangEnum *)e4
                       withJavaLangEnum:(JavaLangEnum *)e5;

/*!
 @brief Creates an enum set initially containing all of the elements in the
  range defined by the two specified endpoints.The returned set will
  contain the endpoints themselves, which may be identical but must not
  be out of order.
 @param from the first element in the range
 @param to the last element in the range
 @throw NullPointerExceptionif <code>from</code> or <code>to</code> are null
 @throw IllegalArgumentExceptionif <code>from.compareTo(to) > 0</code>
 @return an enum set initially containing all of the elements in the
          range defined by the two specified endpoints
 */
+ (JavaUtilEnumSet *)rangeWithJavaLangEnum:(JavaLangEnum *)from
                          withJavaLangEnum:(JavaLangEnum *)to;

#pragma mark Package-Private

- (instancetype)initWithIOSClass:(IOSClass *)elementType
           withJavaLangEnumArray:(IOSObjectArray *)universe;

/*!
 @brief Adds all of the elements from the appropriate enum type to this enum
  set, which is empty prior to the call.
 */
- (void)addAll;

/*!
 @brief Adds the specified range to this enum set, which is empty prior
  to the call.
 */
- (void)addRangeWithJavaLangEnum:(JavaLangEnum *)from
                withJavaLangEnum:(JavaLangEnum *)to;

/*!
 @brief Complements the contents of this enum set.
 */
- (void)complement;

/*!
 @brief Throws an exception if e is not of the correct type for this enum set.
 */
- (void)typeCheckWithJavaLangEnum:(JavaLangEnum *)e;

- (id)writeReplace;

@end

J2OBJC_STATIC_INIT(JavaUtilEnumSet)

J2OBJC_FIELD_SETTER(JavaUtilEnumSet, elementType_, IOSClass *)
J2OBJC_FIELD_SETTER(JavaUtilEnumSet, universe_, IOSObjectArray *)

FOUNDATION_EXPORT void JavaUtilEnumSet_initWithIOSClass_withJavaLangEnumArray_(JavaUtilEnumSet *self, IOSClass *elementType, IOSObjectArray *universe);

FOUNDATION_EXPORT JavaUtilEnumSet *JavaUtilEnumSet_noneOfWithIOSClass_(IOSClass *elementType);

FOUNDATION_EXPORT JavaUtilEnumSet *JavaUtilEnumSet_allOfWithIOSClass_(IOSClass *elementType);

FOUNDATION_EXPORT JavaUtilEnumSet *JavaUtilEnumSet_copyOfWithJavaUtilEnumSet_(JavaUtilEnumSet *s);

FOUNDATION_EXPORT JavaUtilEnumSet *JavaUtilEnumSet_copyOfWithJavaUtilCollection_(id<JavaUtilCollection> c);

FOUNDATION_EXPORT JavaUtilEnumSet *JavaUtilEnumSet_complementOfWithJavaUtilEnumSet_(JavaUtilEnumSet *s);

FOUNDATION_EXPORT JavaUtilEnumSet *JavaUtilEnumSet_ofWithJavaLangEnum_(JavaLangEnum *e);

FOUNDATION_EXPORT JavaUtilEnumSet *JavaUtilEnumSet_ofWithJavaLangEnum_withJavaLangEnum_(JavaLangEnum *e1, JavaLangEnum *e2);

FOUNDATION_EXPORT JavaUtilEnumSet *JavaUtilEnumSet_ofWithJavaLangEnum_withJavaLangEnum_withJavaLangEnum_(JavaLangEnum *e1, JavaLangEnum *e2, JavaLangEnum *e3);

FOUNDATION_EXPORT JavaUtilEnumSet *JavaUtilEnumSet_ofWithJavaLangEnum_withJavaLangEnum_withJavaLangEnum_withJavaLangEnum_(JavaLangEnum *e1, JavaLangEnum *e2, JavaLangEnum *e3, JavaLangEnum *e4);

FOUNDATION_EXPORT JavaUtilEnumSet *JavaUtilEnumSet_ofWithJavaLangEnum_withJavaLangEnum_withJavaLangEnum_withJavaLangEnum_withJavaLangEnum_(JavaLangEnum *e1, JavaLangEnum *e2, JavaLangEnum *e3, JavaLangEnum *e4, JavaLangEnum *e5);

FOUNDATION_EXPORT JavaUtilEnumSet *JavaUtilEnumSet_ofWithJavaLangEnum_withJavaLangEnumArray_(JavaLangEnum *first, IOSObjectArray *rest);

FOUNDATION_EXPORT JavaUtilEnumSet *JavaUtilEnumSet_rangeWithJavaLangEnum_withJavaLangEnum_(JavaLangEnum *from, JavaLangEnum *to);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilEnumSet)

#endif

#pragma pop_macro("INCLUDE_ALL_JavaUtilEnumSet")
