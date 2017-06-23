//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./org/mapsforge/map/view/FpsCounter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMapsforgeMapViewFpsCounter")
#ifdef RESTRICT_OrgMapsforgeMapViewFpsCounter
#define INCLUDE_ALL_OrgMapsforgeMapViewFpsCounter 0
#else
#define INCLUDE_ALL_OrgMapsforgeMapViewFpsCounter 1
#endif
#undef RESTRICT_OrgMapsforgeMapViewFpsCounter

#if !defined (OrgMapsforgeMapViewFpsCounter_) && (INCLUDE_ALL_OrgMapsforgeMapViewFpsCounter || defined(INCLUDE_OrgMapsforgeMapViewFpsCounter))
#define OrgMapsforgeMapViewFpsCounter_

@class OrgMapsforgeMapModelDisplayModel;
@protocol OrgMapsforgeCoreGraphicsGraphicContext;
@protocol OrgMapsforgeCoreGraphicsGraphicFactory;
@protocol OrgMapsforgeCoreGraphicsPaint;

@interface OrgMapsforgeMapViewFpsCounter : NSObject

#pragma mark Public

- (instancetype)initWithOrgMapsforgeMapModelDisplayModel:(OrgMapsforgeMapModelDisplayModel *)displayModel
                       withOrgMapsforgeCoreGraphicsPaint:(id<OrgMapsforgeCoreGraphicsPaint>)paintBack
                       withOrgMapsforgeCoreGraphicsPaint:(id<OrgMapsforgeCoreGraphicsPaint>)paintFront;

- (instancetype)initWithOrgMapsforgeCoreGraphicsGraphicFactory:(id<OrgMapsforgeCoreGraphicsGraphicFactory>)graphicFactory
                          withOrgMapsforgeMapModelDisplayModel:(OrgMapsforgeMapModelDisplayModel *)displayModel;

- (void)drawWithOrgMapsforgeCoreGraphicsGraphicContext:(id<OrgMapsforgeCoreGraphicsGraphicContext>)graphicContext;

- (jboolean)isVisible;

- (void)setVisibleWithBoolean:(jboolean)visible;

@end

J2OBJC_STATIC_INIT(OrgMapsforgeMapViewFpsCounter)

FOUNDATION_EXPORT void OrgMapsforgeMapViewFpsCounter_initWithOrgMapsforgeCoreGraphicsGraphicFactory_withOrgMapsforgeMapModelDisplayModel_(OrgMapsforgeMapViewFpsCounter *self, id<OrgMapsforgeCoreGraphicsGraphicFactory> graphicFactory, OrgMapsforgeMapModelDisplayModel *displayModel);

FOUNDATION_EXPORT OrgMapsforgeMapViewFpsCounter *new_OrgMapsforgeMapViewFpsCounter_initWithOrgMapsforgeCoreGraphicsGraphicFactory_withOrgMapsforgeMapModelDisplayModel_(id<OrgMapsforgeCoreGraphicsGraphicFactory> graphicFactory, OrgMapsforgeMapModelDisplayModel *displayModel) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMapsforgeMapViewFpsCounter *create_OrgMapsforgeMapViewFpsCounter_initWithOrgMapsforgeCoreGraphicsGraphicFactory_withOrgMapsforgeMapModelDisplayModel_(id<OrgMapsforgeCoreGraphicsGraphicFactory> graphicFactory, OrgMapsforgeMapModelDisplayModel *displayModel);

FOUNDATION_EXPORT void OrgMapsforgeMapViewFpsCounter_initWithOrgMapsforgeMapModelDisplayModel_withOrgMapsforgeCoreGraphicsPaint_withOrgMapsforgeCoreGraphicsPaint_(OrgMapsforgeMapViewFpsCounter *self, OrgMapsforgeMapModelDisplayModel *displayModel, id<OrgMapsforgeCoreGraphicsPaint> paintBack, id<OrgMapsforgeCoreGraphicsPaint> paintFront);

FOUNDATION_EXPORT OrgMapsforgeMapViewFpsCounter *new_OrgMapsforgeMapViewFpsCounter_initWithOrgMapsforgeMapModelDisplayModel_withOrgMapsforgeCoreGraphicsPaint_withOrgMapsforgeCoreGraphicsPaint_(OrgMapsforgeMapModelDisplayModel *displayModel, id<OrgMapsforgeCoreGraphicsPaint> paintBack, id<OrgMapsforgeCoreGraphicsPaint> paintFront) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMapsforgeMapViewFpsCounter *create_OrgMapsforgeMapViewFpsCounter_initWithOrgMapsforgeMapModelDisplayModel_withOrgMapsforgeCoreGraphicsPaint_withOrgMapsforgeCoreGraphicsPaint_(OrgMapsforgeMapModelDisplayModel *displayModel, id<OrgMapsforgeCoreGraphicsPaint> paintBack, id<OrgMapsforgeCoreGraphicsPaint> paintFront);

J2OBJC_TYPE_LITERAL_HEADER(OrgMapsforgeMapViewFpsCounter)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgMapsforgeMapViewFpsCounter")
