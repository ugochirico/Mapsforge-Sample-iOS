//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/cbrasseur/Documents/j2objc-0.9.7/guava/sources/com/google/common/collect/MapDifference.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectMapDifference_INCLUDE_ALL")
#if ComGoogleCommonCollectMapDifference_RESTRICT
#define ComGoogleCommonCollectMapDifference_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectMapDifference_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectMapDifference_RESTRICT

#if !defined (_ComGoogleCommonCollectMapDifference_) && (ComGoogleCommonCollectMapDifference_INCLUDE_ALL || ComGoogleCommonCollectMapDifference_INCLUDE)
#define _ComGoogleCommonCollectMapDifference_

@protocol JavaUtilMap;

@protocol ComGoogleCommonCollectMapDifference < NSObject, JavaObject >

- (jboolean)areEqual;

- (id<JavaUtilMap>)entriesOnlyOnLeft;

- (id<JavaUtilMap>)entriesOnlyOnRight;

- (id<JavaUtilMap>)entriesInCommon;

- (id<JavaUtilMap>)entriesDiffering;

- (jboolean)isEqual:(id)object;

- (NSUInteger)hash;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectMapDifference)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectMapDifference)

#endif

#if !defined (_ComGoogleCommonCollectMapDifference_ValueDifference_) && (ComGoogleCommonCollectMapDifference_INCLUDE_ALL || ComGoogleCommonCollectMapDifference_ValueDifference_INCLUDE)
#define _ComGoogleCommonCollectMapDifference_ValueDifference_

@protocol ComGoogleCommonCollectMapDifference_ValueDifference < NSObject, JavaObject >

- (id)leftValue;

- (id)rightValue;

- (jboolean)isEqual:(id)other;

- (NSUInteger)hash;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectMapDifference_ValueDifference)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectMapDifference_ValueDifference)

#endif
#pragma pop_macro("ComGoogleCommonCollectMapDifference_INCLUDE_ALL")