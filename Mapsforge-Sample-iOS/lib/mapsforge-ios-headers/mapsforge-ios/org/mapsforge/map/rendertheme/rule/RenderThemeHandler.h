//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./org/mapsforge/map/rendertheme/rule/RenderThemeHandler.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMapsforgeMapRenderthemeRuleRenderThemeHandler")
#ifdef RESTRICT_OrgMapsforgeMapRenderthemeRuleRenderThemeHandler
#define INCLUDE_ALL_OrgMapsforgeMapRenderthemeRuleRenderThemeHandler 0
#else
#define INCLUDE_ALL_OrgMapsforgeMapRenderthemeRuleRenderThemeHandler 1
#endif
#undef RESTRICT_OrgMapsforgeMapRenderthemeRuleRenderThemeHandler

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMapsforgeMapRenderthemeRuleRenderThemeHandler_) && (INCLUDE_ALL_OrgMapsforgeMapRenderthemeRuleRenderThemeHandler || defined(INCLUDE_OrgMapsforgeMapRenderthemeRuleRenderThemeHandler))
#define OrgMapsforgeMapRenderthemeRuleRenderThemeHandler_

@class OrgMapsforgeMapModelDisplayModel;
@class OrgMapsforgeMapRenderthemeRuleRenderTheme;
@protocol OrgMapsforgeCoreGraphicsGraphicFactory;
@protocol OrgMapsforgeMapRenderthemeXmlRenderTheme;

@interface OrgMapsforgeMapRenderthemeRuleRenderThemeHandler : NSObject

#pragma mark Public

+ (OrgMapsforgeMapRenderthemeRuleRenderTheme *)getRenderThemeWithOrgMapsforgeCoreGraphicsGraphicFactory:(id<OrgMapsforgeCoreGraphicsGraphicFactory>)graphicFactory
                                                                   withOrgMapsforgeMapModelDisplayModel:(OrgMapsforgeMapModelDisplayModel *)displayModel
                                                           withOrgMapsforgeMapRenderthemeXmlRenderTheme:(id<OrgMapsforgeMapRenderthemeXmlRenderTheme>)xmlRenderTheme;

- (void)processRenderTheme;

@end

J2OBJC_STATIC_INIT(OrgMapsforgeMapRenderthemeRuleRenderThemeHandler)

FOUNDATION_EXPORT OrgMapsforgeMapRenderthemeRuleRenderTheme *OrgMapsforgeMapRenderthemeRuleRenderThemeHandler_getRenderThemeWithOrgMapsforgeCoreGraphicsGraphicFactory_withOrgMapsforgeMapModelDisplayModel_withOrgMapsforgeMapRenderthemeXmlRenderTheme_(id<OrgMapsforgeCoreGraphicsGraphicFactory> graphicFactory, OrgMapsforgeMapModelDisplayModel *displayModel, id<OrgMapsforgeMapRenderthemeXmlRenderTheme> xmlRenderTheme);

J2OBJC_TYPE_LITERAL_HEADER(OrgMapsforgeMapRenderthemeRuleRenderThemeHandler)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_OrgMapsforgeMapRenderthemeRuleRenderThemeHandler")
