//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/ugos/j2objc-master/testing/mockito/build_result/java/org/mockito/internal/progress/HandyReturnValues.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalProgressHandyReturnValues")
#ifdef RESTRICT_OrgMockitoInternalProgressHandyReturnValues
#define INCLUDE_ALL_OrgMockitoInternalProgressHandyReturnValues 0
#else
#define INCLUDE_ALL_OrgMockitoInternalProgressHandyReturnValues 1
#endif
#undef RESTRICT_OrgMockitoInternalProgressHandyReturnValues

#if !defined (OrgMockitoInternalProgressHandyReturnValues_) && (INCLUDE_ALL_OrgMockitoInternalProgressHandyReturnValues || defined(INCLUDE_OrgMockitoInternalProgressHandyReturnValues))
#define OrgMockitoInternalProgressHandyReturnValues_

@class IOSClass;
@protocol JavaUtilList;
@protocol JavaUtilMap;
@protocol JavaUtilSet;

@interface OrgMockitoInternalProgressHandyReturnValues : NSObject

#pragma mark Public

- (instancetype)init;

- (jchar)returnChar;

- (jboolean)returnFalse;

- (id)returnForWithIOSClass:(IOSClass *)clazz;

- (id)returnForWithId:(id)instance;

- (id<JavaUtilList>)returnList;

- (id<JavaUtilMap>)returnMap;

- (id)returnNull;

- (id<JavaUtilSet>)returnSet;

- (NSString *)returnString;

- (jbyte)returnZero;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalProgressHandyReturnValues)

FOUNDATION_EXPORT void OrgMockitoInternalProgressHandyReturnValues_init(OrgMockitoInternalProgressHandyReturnValues *self);

FOUNDATION_EXPORT OrgMockitoInternalProgressHandyReturnValues *new_OrgMockitoInternalProgressHandyReturnValues_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalProgressHandyReturnValues *create_OrgMockitoInternalProgressHandyReturnValues_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalProgressHandyReturnValues)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalProgressHandyReturnValues")
