//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/cbrasseur/Documents/j2objc-0.9.7/guava/sources/com/google/common/collect/ArrayTable.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectArrayTable_INCLUDE_ALL")
#if ComGoogleCommonCollectArrayTable_RESTRICT
#define ComGoogleCommonCollectArrayTable_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectArrayTable_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectArrayTable_RESTRICT

#if !defined (_ComGoogleCommonCollectArrayTable_) && (ComGoogleCommonCollectArrayTable_INCLUDE_ALL || ComGoogleCommonCollectArrayTable_INCLUDE)
#define _ComGoogleCommonCollectArrayTable_

#define ComGoogleCommonCollectTable_RESTRICT 1
#define ComGoogleCommonCollectTable_INCLUDE 1
#include "com/google/common/collect/Table.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"

@class ComGoogleCommonCollectImmutableList;
@class ComGoogleCommonCollectImmutableSet;
@class IOSClass;
@class IOSObjectArray;
@protocol JavaLangIterable;
@protocol JavaUtilCollection;
@protocol JavaUtilMap;
@protocol JavaUtilSet;

@interface ComGoogleCommonCollectArrayTable : NSObject < ComGoogleCommonCollectTable, JavaIoSerializable >

#pragma mark Public

- (id)atWithInt:(jint)rowIndex
        withInt:(jint)columnIndex;

- (id<JavaUtilSet>)cellSet;

- (void)clear;

- (id<JavaUtilMap>)columnWithId:(id)columnKey;

- (ComGoogleCommonCollectImmutableList *)columnKeyList;

- (ComGoogleCommonCollectImmutableSet *)columnKeySet;

- (id<JavaUtilMap>)columnMap;

- (jboolean)containsWithId:(id)rowKey
                    withId:(id)columnKey;

- (jboolean)containsColumnWithId:(id)columnKey;

- (jboolean)containsRowWithId:(id)rowKey;

- (jboolean)containsValueWithId:(id)value;

+ (ComGoogleCommonCollectArrayTable *)createWithComGoogleCommonCollectArrayTable:(ComGoogleCommonCollectArrayTable *)table;

+ (ComGoogleCommonCollectArrayTable *)createWithJavaLangIterable:(id<JavaLangIterable>)rowKeys
                                            withJavaLangIterable:(id<JavaLangIterable>)columnKeys;

+ (ComGoogleCommonCollectArrayTable *)createWithComGoogleCommonCollectTable:(id<ComGoogleCommonCollectTable>)table;

- (jboolean)isEqual:(id)obj;

- (id)eraseWithId:(id)rowKey
           withId:(id)columnKey;

- (void)eraseAll;

- (id)getWithId:(id)rowKey
         withId:(id)columnKey;

- (NSUInteger)hash;

- (jboolean)isEmpty;

- (id)putWithId:(id)rowKey
         withId:(id)columnKey
         withId:(id)value;

- (void)putAllWithComGoogleCommonCollectTable:(id<ComGoogleCommonCollectTable>)table;

- (id)removeWithId:(id)rowKey
            withId:(id)columnKey;

- (id<JavaUtilMap>)rowWithId:(id)rowKey;

- (ComGoogleCommonCollectImmutableList *)rowKeyList;

- (ComGoogleCommonCollectImmutableSet *)rowKeySet;

- (id<JavaUtilMap>)rowMap;

- (id)setWithInt:(jint)rowIndex
         withInt:(jint)columnIndex
          withId:(id)value;

- (jint)size;

- (IOSObjectArray *)toArrayWithIOSClass:(IOSClass *)valueClass;

- (NSString *)description;

- (id<JavaUtilCollection>)values;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectArrayTable)

FOUNDATION_EXPORT ComGoogleCommonCollectArrayTable *ComGoogleCommonCollectArrayTable_createWithJavaLangIterable_withJavaLangIterable_(id<JavaLangIterable> rowKeys, id<JavaLangIterable> columnKeys);

FOUNDATION_EXPORT ComGoogleCommonCollectArrayTable *ComGoogleCommonCollectArrayTable_createWithComGoogleCommonCollectTable_(id<ComGoogleCommonCollectTable> table);

FOUNDATION_EXPORT ComGoogleCommonCollectArrayTable *ComGoogleCommonCollectArrayTable_createWithComGoogleCommonCollectArrayTable_(ComGoogleCommonCollectArrayTable *table);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectArrayTable)

#endif

#if !defined (_ComGoogleCommonCollectArrayTable_ArrayMap_) && (ComGoogleCommonCollectArrayTable_INCLUDE_ALL || ComGoogleCommonCollectArrayTable_ArrayMap_INCLUDE)
#define _ComGoogleCommonCollectArrayTable_ArrayMap_

#endif

#if !defined (_ComGoogleCommonCollectArrayTable_ArrayMap_1ArrayMapEntrySet_) && (ComGoogleCommonCollectArrayTable_INCLUDE_ALL || ComGoogleCommonCollectArrayTable_ArrayMap_1ArrayMapEntrySet_INCLUDE)
#define _ComGoogleCommonCollectArrayTable_ArrayMap_1ArrayMapEntrySet_

#endif

#if !defined (_ComGoogleCommonCollectArrayTable_ArrayMap_1ArrayMapEntrySet_$1_) && (ComGoogleCommonCollectArrayTable_INCLUDE_ALL || ComGoogleCommonCollectArrayTable_ArrayMap_1ArrayMapEntrySet_$1_INCLUDE)
#define _ComGoogleCommonCollectArrayTable_ArrayMap_1ArrayMapEntrySet_$1_

#endif

#if !defined (_ComGoogleCommonCollectArrayTable_ArrayMap_1ArrayMapEntrySet_$1_$1_) && (ComGoogleCommonCollectArrayTable_INCLUDE_ALL || ComGoogleCommonCollectArrayTable_ArrayMap_1ArrayMapEntrySet_$1_$1_INCLUDE)
#define _ComGoogleCommonCollectArrayTable_ArrayMap_1ArrayMapEntrySet_$1_$1_

#endif

#if !defined (_ComGoogleCommonCollectArrayTable_CellSet_) && (ComGoogleCommonCollectArrayTable_INCLUDE_ALL || ComGoogleCommonCollectArrayTable_CellSet_INCLUDE)
#define _ComGoogleCommonCollectArrayTable_CellSet_

#endif

#if !defined (_ComGoogleCommonCollectArrayTable_CellSet_$1_) && (ComGoogleCommonCollectArrayTable_INCLUDE_ALL || ComGoogleCommonCollectArrayTable_CellSet_$1_INCLUDE)
#define _ComGoogleCommonCollectArrayTable_CellSet_$1_

#endif

#if !defined (_ComGoogleCommonCollectArrayTable_CellSet_$1_$1_) && (ComGoogleCommonCollectArrayTable_INCLUDE_ALL || ComGoogleCommonCollectArrayTable_CellSet_$1_$1_INCLUDE)
#define _ComGoogleCommonCollectArrayTable_CellSet_$1_$1_

#endif

#if !defined (_ComGoogleCommonCollectArrayTable_Column_) && (ComGoogleCommonCollectArrayTable_INCLUDE_ALL || ComGoogleCommonCollectArrayTable_Column_INCLUDE)
#define _ComGoogleCommonCollectArrayTable_Column_

#endif

#if !defined (_ComGoogleCommonCollectArrayTable_ColumnMap_) && (ComGoogleCommonCollectArrayTable_INCLUDE_ALL || ComGoogleCommonCollectArrayTable_ColumnMap_INCLUDE)
#define _ComGoogleCommonCollectArrayTable_ColumnMap_

#endif

#if !defined (_ComGoogleCommonCollectArrayTable_Row_) && (ComGoogleCommonCollectArrayTable_INCLUDE_ALL || ComGoogleCommonCollectArrayTable_Row_INCLUDE)
#define _ComGoogleCommonCollectArrayTable_Row_

#endif

#if !defined (_ComGoogleCommonCollectArrayTable_RowMap_) && (ComGoogleCommonCollectArrayTable_INCLUDE_ALL || ComGoogleCommonCollectArrayTable_RowMap_INCLUDE)
#define _ComGoogleCommonCollectArrayTable_RowMap_

#endif

#if !defined (_ComGoogleCommonCollectArrayTable_Values_) && (ComGoogleCommonCollectArrayTable_INCLUDE_ALL || ComGoogleCommonCollectArrayTable_Values_INCLUDE)
#define _ComGoogleCommonCollectArrayTable_Values_

#endif

#if !defined (_ComGoogleCommonCollectArrayTable_Values_$1_) && (ComGoogleCommonCollectArrayTable_INCLUDE_ALL || ComGoogleCommonCollectArrayTable_Values_$1_INCLUDE)
#define _ComGoogleCommonCollectArrayTable_Values_$1_

#endif
#pragma pop_macro("ComGoogleCommonCollectArrayTable_INCLUDE_ALL")