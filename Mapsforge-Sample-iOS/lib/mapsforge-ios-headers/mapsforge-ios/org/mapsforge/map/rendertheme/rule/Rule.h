//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./org/mapsforge/map/rendertheme/rule/Rule.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMapsforgeMapRenderthemeRuleRule")
#ifdef RESTRICT_OrgMapsforgeMapRenderthemeRuleRule
#define INCLUDE_ALL_OrgMapsforgeMapRenderthemeRuleRule 0
#else
#define INCLUDE_ALL_OrgMapsforgeMapRenderthemeRuleRule 1
#endif
#undef RESTRICT_OrgMapsforgeMapRenderthemeRuleRule

#if !defined (OrgMapsforgeMapRenderthemeRuleRule_) && (INCLUDE_ALL_OrgMapsforgeMapRenderthemeRuleRule || defined(INCLUDE_OrgMapsforgeMapRenderthemeRuleRule))
#define OrgMapsforgeMapRenderthemeRuleRule_

@class OrgMapsforgeCoreModelTile;
@class OrgMapsforgeMapLayerRendererPolylineContainer;
@class OrgMapsforgeMapReaderPointOfInterest;
@class OrgMapsforgeMapRenderthemeRenderinstructionRenderInstruction;
@class OrgMapsforgeMapRenderthemeRuleClosed;
@class OrgMapsforgeMapRenderthemeRuleRuleBuilder;
@protocol JavaUtilList;
@protocol JavaUtilMap;
@protocol OrgMapsforgeMapRenderthemeRenderCallback;
@protocol OrgMapsforgeMapRenderthemeRuleClosedMatcher;
@protocol OrgMapsforgeMapRenderthemeRuleElementMatcher;

@interface OrgMapsforgeMapRenderthemeRuleRule : NSObject {
 @public
  NSString *cat_;
  id<OrgMapsforgeMapRenderthemeRuleClosedMatcher> closedMatcher_;
  id<OrgMapsforgeMapRenderthemeRuleElementMatcher> elementMatcher_;
  jbyte zoomMax_;
  jbyte zoomMin_;
}

#pragma mark Package-Private

- (instancetype)initWithOrgMapsforgeMapRenderthemeRuleRuleBuilder:(OrgMapsforgeMapRenderthemeRuleRuleBuilder *)ruleBuilder;

- (void)addRenderingInstructionWithOrgMapsforgeMapRenderthemeRenderinstructionRenderInstruction:(OrgMapsforgeMapRenderthemeRenderinstructionRenderInstruction *)renderInstruction;

- (void)addSubRuleWithOrgMapsforgeMapRenderthemeRuleRule:(OrgMapsforgeMapRenderthemeRuleRule *)rule;

- (void)destroy;

- (jboolean)matchesNodeWithJavaUtilList:(id<JavaUtilList>)tags
                               withByte:(jbyte)zoomLevel;

- (jboolean)matchesWayWithJavaUtilList:(id<JavaUtilList>)tags
                              withByte:(jbyte)zoomLevel
withOrgMapsforgeMapRenderthemeRuleClosed:(OrgMapsforgeMapRenderthemeRuleClosed *)closed;

- (void)matchNodeWithOrgMapsforgeMapRenderthemeRenderCallback:(id<OrgMapsforgeMapRenderthemeRenderCallback>)renderCallback
                     withOrgMapsforgeMapReaderPointOfInterest:(OrgMapsforgeMapReaderPointOfInterest *)pointOfInterest
                                withOrgMapsforgeCoreModelTile:(OrgMapsforgeCoreModelTile *)tile
                                             withJavaUtilList:(id<JavaUtilList>)matchingList;

- (void)matchWayWithOrgMapsforgeMapRenderthemeRenderCallback:(id<OrgMapsforgeMapRenderthemeRenderCallback>)renderCallback
           withOrgMapsforgeMapLayerRendererPolylineContainer:(OrgMapsforgeMapLayerRendererPolylineContainer *)way
                               withOrgMapsforgeCoreModelTile:(OrgMapsforgeCoreModelTile *)tile
                    withOrgMapsforgeMapRenderthemeRuleClosed:(OrgMapsforgeMapRenderthemeRuleClosed *)closed
                                            withJavaUtilList:(id<JavaUtilList>)matchingList;

- (void)onComplete;

- (void)scaleStrokeWidthWithFloat:(jfloat)scaleFactor;

- (void)scaleTextSizeWithFloat:(jfloat)scaleFactor;

@end

J2OBJC_STATIC_INIT(OrgMapsforgeMapRenderthemeRuleRule)

J2OBJC_FIELD_SETTER(OrgMapsforgeMapRenderthemeRuleRule, cat_, NSString *)
J2OBJC_FIELD_SETTER(OrgMapsforgeMapRenderthemeRuleRule, closedMatcher_, id<OrgMapsforgeMapRenderthemeRuleClosedMatcher>)
J2OBJC_FIELD_SETTER(OrgMapsforgeMapRenderthemeRuleRule, elementMatcher_, id<OrgMapsforgeMapRenderthemeRuleElementMatcher>)

inline id<JavaUtilMap> OrgMapsforgeMapRenderthemeRuleRule_get_MATCHERS_CACHE_KEY();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT id<JavaUtilMap> OrgMapsforgeMapRenderthemeRuleRule_MATCHERS_CACHE_KEY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgMapsforgeMapRenderthemeRuleRule, MATCHERS_CACHE_KEY, id<JavaUtilMap>)

inline id<JavaUtilMap> OrgMapsforgeMapRenderthemeRuleRule_get_MATCHERS_CACHE_VALUE();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT id<JavaUtilMap> OrgMapsforgeMapRenderthemeRuleRule_MATCHERS_CACHE_VALUE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgMapsforgeMapRenderthemeRuleRule, MATCHERS_CACHE_VALUE, id<JavaUtilMap>)

FOUNDATION_EXPORT void OrgMapsforgeMapRenderthemeRuleRule_initWithOrgMapsforgeMapRenderthemeRuleRuleBuilder_(OrgMapsforgeMapRenderthemeRuleRule *self, OrgMapsforgeMapRenderthemeRuleRuleBuilder *ruleBuilder);

J2OBJC_TYPE_LITERAL_HEADER(OrgMapsforgeMapRenderthemeRuleRule)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgMapsforgeMapRenderthemeRuleRule")
