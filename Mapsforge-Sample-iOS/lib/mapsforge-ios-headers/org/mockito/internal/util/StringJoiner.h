//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/ugos/j2objc-master/testing/mockito/build_result/java/org/mockito/internal/util/StringJoiner.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalUtilStringJoiner")
#ifdef RESTRICT_OrgMockitoInternalUtilStringJoiner
#define INCLUDE_ALL_OrgMockitoInternalUtilStringJoiner 0
#else
#define INCLUDE_ALL_OrgMockitoInternalUtilStringJoiner 1
#endif
#undef RESTRICT_OrgMockitoInternalUtilStringJoiner

#if !defined (OrgMockitoInternalUtilStringJoiner_) && (INCLUDE_ALL_OrgMockitoInternalUtilStringJoiner || defined(INCLUDE_OrgMockitoInternalUtilStringJoiner))
#define OrgMockitoInternalUtilStringJoiner_

@class IOSObjectArray;

@interface OrgMockitoInternalUtilStringJoiner : NSObject

#pragma mark Public

- (instancetype)init;

+ (NSString *)joinWithNSObjectArray:(IOSObjectArray *)linesToBreak;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalUtilStringJoiner)

FOUNDATION_EXPORT void OrgMockitoInternalUtilStringJoiner_init(OrgMockitoInternalUtilStringJoiner *self);

FOUNDATION_EXPORT OrgMockitoInternalUtilStringJoiner *new_OrgMockitoInternalUtilStringJoiner_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalUtilStringJoiner *create_OrgMockitoInternalUtilStringJoiner_init();

FOUNDATION_EXPORT NSString *OrgMockitoInternalUtilStringJoiner_joinWithNSObjectArray_(IOSObjectArray *linesToBreak);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalUtilStringJoiner)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalUtilStringJoiner")
