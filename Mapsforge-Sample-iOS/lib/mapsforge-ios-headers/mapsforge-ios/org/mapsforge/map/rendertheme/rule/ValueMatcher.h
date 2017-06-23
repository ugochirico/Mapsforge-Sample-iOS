//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./org/mapsforge/map/rendertheme/rule/ValueMatcher.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMapsforgeMapRenderthemeRuleValueMatcher")
#ifdef RESTRICT_OrgMapsforgeMapRenderthemeRuleValueMatcher
#define INCLUDE_ALL_OrgMapsforgeMapRenderthemeRuleValueMatcher 0
#else
#define INCLUDE_ALL_OrgMapsforgeMapRenderthemeRuleValueMatcher 1
#endif
#undef RESTRICT_OrgMapsforgeMapRenderthemeRuleValueMatcher

#if !defined (OrgMapsforgeMapRenderthemeRuleValueMatcher_) && (INCLUDE_ALL_OrgMapsforgeMapRenderthemeRuleValueMatcher || defined(INCLUDE_OrgMapsforgeMapRenderthemeRuleValueMatcher))
#define OrgMapsforgeMapRenderthemeRuleValueMatcher_

#define RESTRICT_OrgMapsforgeMapRenderthemeRuleAttributeMatcher 1
#define INCLUDE_OrgMapsforgeMapRenderthemeRuleAttributeMatcher 1
#include "org/mapsforge/map/rendertheme/rule/AttributeMatcher.h"

@protocol JavaUtilList;

@interface OrgMapsforgeMapRenderthemeRuleValueMatcher : NSObject < OrgMapsforgeMapRenderthemeRuleAttributeMatcher >

#pragma mark Public

- (jboolean)isCoveredByWithOrgMapsforgeMapRenderthemeRuleAttributeMatcher:(id<OrgMapsforgeMapRenderthemeRuleAttributeMatcher>)attributeMatcher;

- (jboolean)matchesWithJavaUtilList:(id<JavaUtilList>)tags;

#pragma mark Package-Private

- (instancetype)initWithJavaUtilList:(id<JavaUtilList>)values;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMapsforgeMapRenderthemeRuleValueMatcher)

FOUNDATION_EXPORT void OrgMapsforgeMapRenderthemeRuleValueMatcher_initWithJavaUtilList_(OrgMapsforgeMapRenderthemeRuleValueMatcher *self, id<JavaUtilList> values);

FOUNDATION_EXPORT OrgMapsforgeMapRenderthemeRuleValueMatcher *new_OrgMapsforgeMapRenderthemeRuleValueMatcher_initWithJavaUtilList_(id<JavaUtilList> values) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMapsforgeMapRenderthemeRuleValueMatcher *create_OrgMapsforgeMapRenderthemeRuleValueMatcher_initWithJavaUtilList_(id<JavaUtilList> values);

J2OBJC_TYPE_LITERAL_HEADER(OrgMapsforgeMapRenderthemeRuleValueMatcher)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgMapsforgeMapRenderthemeRuleValueMatcher")
