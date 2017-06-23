//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./org/mapsforge/map/rendertheme/rule/AnyMatcher.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMapsforgeMapRenderthemeRuleAnyMatcher")
#ifdef RESTRICT_OrgMapsforgeMapRenderthemeRuleAnyMatcher
#define INCLUDE_ALL_OrgMapsforgeMapRenderthemeRuleAnyMatcher 0
#else
#define INCLUDE_ALL_OrgMapsforgeMapRenderthemeRuleAnyMatcher 1
#endif
#undef RESTRICT_OrgMapsforgeMapRenderthemeRuleAnyMatcher

#if !defined (OrgMapsforgeMapRenderthemeRuleAnyMatcher_) && (INCLUDE_ALL_OrgMapsforgeMapRenderthemeRuleAnyMatcher || defined(INCLUDE_OrgMapsforgeMapRenderthemeRuleAnyMatcher))
#define OrgMapsforgeMapRenderthemeRuleAnyMatcher_

#define RESTRICT_OrgMapsforgeMapRenderthemeRuleElementMatcher 1
#define INCLUDE_OrgMapsforgeMapRenderthemeRuleElementMatcher 1
#include "org/mapsforge/map/rendertheme/rule/ElementMatcher.h"

#define RESTRICT_OrgMapsforgeMapRenderthemeRuleAttributeMatcher 1
#define INCLUDE_OrgMapsforgeMapRenderthemeRuleAttributeMatcher 1
#include "org/mapsforge/map/rendertheme/rule/AttributeMatcher.h"

#define RESTRICT_OrgMapsforgeMapRenderthemeRuleClosedMatcher 1
#define INCLUDE_OrgMapsforgeMapRenderthemeRuleClosedMatcher 1
#include "org/mapsforge/map/rendertheme/rule/ClosedMatcher.h"

@class OrgMapsforgeMapRenderthemeRuleClosed;
@class OrgMapsforgeMapRenderthemeRuleElement;
@protocol JavaUtilList;

@interface OrgMapsforgeMapRenderthemeRuleAnyMatcher : NSObject < OrgMapsforgeMapRenderthemeRuleElementMatcher, OrgMapsforgeMapRenderthemeRuleAttributeMatcher, OrgMapsforgeMapRenderthemeRuleClosedMatcher >

#pragma mark Public

- (jboolean)isCoveredByWithOrgMapsforgeMapRenderthemeRuleAttributeMatcher:(id<OrgMapsforgeMapRenderthemeRuleAttributeMatcher>)attributeMatcher;

- (jboolean)isCoveredByWithOrgMapsforgeMapRenderthemeRuleClosedMatcher:(id<OrgMapsforgeMapRenderthemeRuleClosedMatcher>)closedMatcher;

- (jboolean)isCoveredByWithOrgMapsforgeMapRenderthemeRuleElementMatcher:(id<OrgMapsforgeMapRenderthemeRuleElementMatcher>)elementMatcher;

- (jboolean)matchesWithOrgMapsforgeMapRenderthemeRuleClosed:(OrgMapsforgeMapRenderthemeRuleClosed *)closed;

- (jboolean)matchesWithOrgMapsforgeMapRenderthemeRuleElement:(OrgMapsforgeMapRenderthemeRuleElement *)element;

- (jboolean)matchesWithJavaUtilList:(id<JavaUtilList>)tags;

@end

J2OBJC_STATIC_INIT(OrgMapsforgeMapRenderthemeRuleAnyMatcher)

inline OrgMapsforgeMapRenderthemeRuleAnyMatcher *OrgMapsforgeMapRenderthemeRuleAnyMatcher_get_INSTANCE();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT OrgMapsforgeMapRenderthemeRuleAnyMatcher *OrgMapsforgeMapRenderthemeRuleAnyMatcher_INSTANCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgMapsforgeMapRenderthemeRuleAnyMatcher, INSTANCE, OrgMapsforgeMapRenderthemeRuleAnyMatcher *)

J2OBJC_TYPE_LITERAL_HEADER(OrgMapsforgeMapRenderthemeRuleAnyMatcher)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgMapsforgeMapRenderthemeRuleAnyMatcher")
