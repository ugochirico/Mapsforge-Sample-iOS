//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/frameworks/base/core/java/android/util/ArrayMap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_AndroidUtilArrayMap")
#ifdef RESTRICT_AndroidUtilArrayMap
#define INCLUDE_ALL_AndroidUtilArrayMap 0
#else
#define INCLUDE_ALL_AndroidUtilArrayMap 1
#endif
#undef RESTRICT_AndroidUtilArrayMap

#if !defined (AndroidUtilArrayMap_) && (INCLUDE_ALL_AndroidUtilArrayMap || defined(INCLUDE_AndroidUtilArrayMap))
#define AndroidUtilArrayMap_

#define RESTRICT_JavaUtilMap 1
#define INCLUDE_JavaUtilMap 1
#include "java/util/Map.h"

@class AndroidUtilMapCollections;
@class IOSIntArray;
@class IOSObjectArray;
@protocol JavaUtilCollection;
@protocol JavaUtilFunctionBiConsumer;
@protocol JavaUtilFunctionBiFunction;
@protocol JavaUtilFunctionFunction;
@protocol JavaUtilSet;

/*!
 @brief ArrayMap is a generic key->value mapping data structure that is
  designed to be more memory efficient than a traditional <code>java.util.HashMap</code>.
 It keeps its mappings in an array data structure -- an integer array of hash
  codes for each item, and an Object array of the key/value pairs.  This allows it to
  avoid having to create an extra object for every entry put in to the map, and it
  also tries to control the growth of the size of these arrays more aggressively
  (since growing them only requires copying the entries in the array, not rebuilding
  a hash map). 
 <p>Note that this implementation is not intended to be appropriate for data structures
  that may contain large numbers of items.  It is generally slower than a traditional
  HashMap, since lookups require a binary search and adds and removes require inserting
  and deleting entries in the array.  For containers holding up to hundreds of items,
  the performance difference is not significant, less than 50%.</p>
  
 <p>Because this container is intended to better balance memory use, unlike most other
  standard Java containers it will shrink its array as items are removed from it.  Currently
  you have no control over this shrinking -- if you set a capacity and then remove an
  item, it may reduce the capacity to better match the current size.  In the future an
  explicit call to set the capacity should turn off this aggressive shrinking behavior.</p>
 */
@interface AndroidUtilArrayMap : NSObject < JavaUtilMap > {
 @public
  IOSIntArray *mHashes_;
  IOSObjectArray *mArray_;
  jint mSize_;
  AndroidUtilMapCollections *mCollections_;
}

#pragma mark Public

/*!
 @brief Create a new empty ArrayMap.The default capacity of an array map is 0, and
  will grow once items are added to it.
 */
- (instancetype)init;

/*!
 @brief Create a new ArrayMap with the mappings from the given ArrayMap.
 */
- (instancetype)initWithAndroidUtilArrayMap:(AndroidUtilArrayMap *)map;

/*!
 @brief Create a new ArrayMap with a given initial capacity.
 */
- (instancetype)initWithInt:(jint)capacity;

/*!
 @brief Special fast path for appending items to the end of the array without validation.
 The array must already be large enough to contain the item.
 */
- (void)appendWithId:(id)key
              withId:(id)value;

/*!
 @brief Make the array map empty.All storage is released.
 */
- (void)clear;

/*!
 @brief Determine if the array map contains all of the keys in the given collection.
 @param collection The collection whose contents are to be checked against.
 @return Returns true if this array map contains a key for every entry
  in <var>collection</var>, else returns false.
 */
- (jboolean)containsAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

/*!
 @brief Check whether a key exists in the array.
 @param key The key to search for.
 @return Returns true if the key exists, else false.
 */
- (jboolean)containsKeyWithId:(id)key;

/*!
 @brief Check whether a value exists in the array.This requires a linear search
  through the entire array.
 @param value The value to search for.
 @return Returns true if the value exists, else false.
 */
- (jboolean)containsValueWithId:(id)value;

/*!
 @brief Ensure the array map can hold at least <var>minimumCapacity</var>
  items.
 */
- (void)ensureCapacityWithInt:(jint)minimumCapacity;

/*!
 @brief Return a <code>java.util.Set</code> for iterating over and interacting with all mappings
  in the array map.
 <p><b>Note:</b> this is a very inefficient way to access the array contents, it
  requires generating a number of temporary objects.</p>
  
 <p><b>Note:</b></p> the semantics of this
  Set are subtly different than that of a <code>java.util.HashMap</code>: most important,
  the <code>Map.Entry</code> object returned by its iterator is a single
  object that exists for the entire iterator, so you can <b>not</b> hold on to it
  after calling <code>Iterator.next</code>.</p>
 */
- (id<JavaUtilSet>)entrySet;

/*!
 @brief <p>This implementation returns false if the object is not a map, or
  if the maps have different sizes.
 Otherwise, for each key in this map,
  values of both maps are compared. If the values for any key are not
  equal, the method returns false, otherwise it returns true.
 */
- (jboolean)isEqual:(id)object;

/*!
 */
- (void)erase;

/*!
 @brief Retrieve a value from the array.
 @param key The key of the value to retrieve.
 @return Returns the value associated with the given key,
  or null if there is no such key.
 */
- (id)getWithId:(id)key;

/*!
 */
- (NSUInteger)hash;

/*!
 @brief Return true if the array map contains no items.
 */
- (jboolean)isEmpty;

/*!
 @brief Return the key at the given index in the array.
 @param index The desired index, must be between 0 and <code>size()</code> -1.
 @return Returns the key stored at the given index.
 */
- (id)keyAtWithInt:(jint)index;

/*!
 @brief Return a <code>java.util.Set</code> for iterating over and interacting with all keys
  in the array map.
 <p><b>Note:</b> this is a fairly inefficient way to access the array contents, it
  requires generating a number of temporary objects.</p>
 */
- (id<JavaUtilSet>)keySet;

/*!
 @brief Add a new value to the array map.
 @param key The key under which to store the value.   <b> Must not be null. </b>   If
   this key already exists in the array, its value will be replaced.
 @param value The value to store for the given key.
 @return Returns the old value that was stored for the given key, or null if there
  was no such key.
 */
- (id)putWithId:(id)key
         withId:(id)value;

/*!
 @brief Perform a <code>Object)</code> of all key/value pairs in <var>array</var>
 @param array The array whose contents are to be retrieved.
 */
- (void)putAllWithAndroidUtilArrayMap:(AndroidUtilArrayMap *)array;

/*!
 @brief Perform a <code>Object)</code> of all key/value pairs in <var>map</var>
 @param map The map whose contents are to be retrieved.
 */
- (void)putAllWithJavaUtilMap:(id<JavaUtilMap>)map;

/*!
 @brief Remove an existing key from the array map.
 @param key The key of the mapping to remove.
 @return Returns the value that was stored under the key, or null if there
  was no such key.
 */
- (id)removeWithId:(id)key;

/*!
 @brief Remove all keys in the array map that exist in the given collection.
 @param collection The collection whose contents are to be used to remove keys.
 @return Returns true if any keys were removed from the array map, else false.
 */
- (jboolean)removeAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

/*!
 @brief Remove the key/value mapping at the given index.
 @param index The desired index, must be between 0 and <code>size()</code> -1.
 @return Returns the value that was stored at this index.
 */
- (id)removeAtWithInt:(jint)index;

/*!
 @brief Remove all keys in the array map that do <b>not</b> exist in the given collection.
 @param collection The collection whose contents are to be used to determine which  keys to keep.
 @return Returns true if any keys were removed from the array map, else false.
 */
- (jboolean)retainAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

/*!
 @brief Set the value at a given index in the array.
 @param index The desired index, must be between 0 and <code>size()</code> -1.
 @param value The new value to store at this index.
 @return Returns the previous value at the given index.
 */
- (id)setValueAtWithInt:(jint)index
                 withId:(id)value;

/*!
 @brief Return the number of items in this array map.
 */
- (jint)size;

/*!
 @brief <p>This implementation composes a string by iterating over its mappings.
 If
  this map contains itself as a key or a value, the string "(this Map)"
  will appear in its place.
 */
- (NSString *)description;

/*!
 @brief Return the value at the given index in the array.
 @param index The desired index, must be between 0 and <code>size()</code> -1.
 @return Returns the value stored at the given index.
 */
- (id)valueAtWithInt:(jint)index;

/*!
 @brief Return a <code>java.util.Collection</code> for iterating over and interacting with all values
  in the array map.
 <p><b>Note:</b> this is a fairly inefficient way to access the array contents, it
  requires generating a number of temporary objects.</p>
 */
- (id<JavaUtilCollection>)values;

#pragma mark Package-Private

- (jint)indexOfWithId:(id)key
              withInt:(jint)hash_;

- (jint)indexOfNull;

- (jint)indexOfValueWithId:(id)value;

@end

J2OBJC_STATIC_INIT(AndroidUtilArrayMap)

J2OBJC_FIELD_SETTER(AndroidUtilArrayMap, mHashes_, IOSIntArray *)
J2OBJC_FIELD_SETTER(AndroidUtilArrayMap, mArray_, IOSObjectArray *)
J2OBJC_FIELD_SETTER(AndroidUtilArrayMap, mCollections_, AndroidUtilMapCollections *)

/*!
 */
inline AndroidUtilArrayMap *AndroidUtilArrayMap_get_EMPTY();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT AndroidUtilArrayMap *AndroidUtilArrayMap_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(AndroidUtilArrayMap, EMPTY, AndroidUtilArrayMap *)

/*!
 @brief Caches of small array objects to avoid spamming garbage.The cache
  Object[] variable is a pointer to a linked list of array objects.
 The first entry in the array is a pointer to the next array in the
  list; the second entry is a pointer to the int[] hash code array for it.
 */
inline IOSObjectArray *AndroidUtilArrayMap_get_mBaseCache();
inline IOSObjectArray *AndroidUtilArrayMap_set_mBaseCache(IOSObjectArray *value);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT IOSObjectArray *AndroidUtilArrayMap_mBaseCache;
J2OBJC_STATIC_FIELD_OBJ(AndroidUtilArrayMap, mBaseCache, IOSObjectArray *)

inline jint AndroidUtilArrayMap_get_mBaseCacheSize();
inline jint AndroidUtilArrayMap_set_mBaseCacheSize(jint value);
inline jint *AndroidUtilArrayMap_getRef_mBaseCacheSize();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT jint AndroidUtilArrayMap_mBaseCacheSize;
J2OBJC_STATIC_FIELD_PRIMITIVE(AndroidUtilArrayMap, mBaseCacheSize, jint)

inline IOSObjectArray *AndroidUtilArrayMap_get_mTwiceBaseCache();
inline IOSObjectArray *AndroidUtilArrayMap_set_mTwiceBaseCache(IOSObjectArray *value);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT IOSObjectArray *AndroidUtilArrayMap_mTwiceBaseCache;
J2OBJC_STATIC_FIELD_OBJ(AndroidUtilArrayMap, mTwiceBaseCache, IOSObjectArray *)

inline jint AndroidUtilArrayMap_get_mTwiceBaseCacheSize();
inline jint AndroidUtilArrayMap_set_mTwiceBaseCacheSize(jint value);
inline jint *AndroidUtilArrayMap_getRef_mTwiceBaseCacheSize();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT jint AndroidUtilArrayMap_mTwiceBaseCacheSize;
J2OBJC_STATIC_FIELD_PRIMITIVE(AndroidUtilArrayMap, mTwiceBaseCacheSize, jint)

/*!
 @brief Special hash array value that indicates the container is immutable.
 */
inline IOSIntArray *AndroidUtilArrayMap_get_EMPTY_IMMUTABLE_INTS();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT IOSIntArray *AndroidUtilArrayMap_EMPTY_IMMUTABLE_INTS;
J2OBJC_STATIC_FIELD_OBJ_FINAL(AndroidUtilArrayMap, EMPTY_IMMUTABLE_INTS, IOSIntArray *)

FOUNDATION_EXPORT void AndroidUtilArrayMap_init(AndroidUtilArrayMap *self);

FOUNDATION_EXPORT AndroidUtilArrayMap *new_AndroidUtilArrayMap_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT AndroidUtilArrayMap *create_AndroidUtilArrayMap_init();

FOUNDATION_EXPORT void AndroidUtilArrayMap_initWithInt_(AndroidUtilArrayMap *self, jint capacity);

FOUNDATION_EXPORT AndroidUtilArrayMap *new_AndroidUtilArrayMap_initWithInt_(jint capacity) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT AndroidUtilArrayMap *create_AndroidUtilArrayMap_initWithInt_(jint capacity);

FOUNDATION_EXPORT void AndroidUtilArrayMap_initWithAndroidUtilArrayMap_(AndroidUtilArrayMap *self, AndroidUtilArrayMap *map);

FOUNDATION_EXPORT AndroidUtilArrayMap *new_AndroidUtilArrayMap_initWithAndroidUtilArrayMap_(AndroidUtilArrayMap *map) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT AndroidUtilArrayMap *create_AndroidUtilArrayMap_initWithAndroidUtilArrayMap_(AndroidUtilArrayMap *map);

J2OBJC_TYPE_LITERAL_HEADER(AndroidUtilArrayMap)

#endif

#pragma pop_macro("INCLUDE_ALL_AndroidUtilArrayMap")
