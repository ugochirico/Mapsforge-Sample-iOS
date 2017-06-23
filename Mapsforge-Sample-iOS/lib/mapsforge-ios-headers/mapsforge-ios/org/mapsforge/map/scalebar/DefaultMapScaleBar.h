//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./org/mapsforge/map/scalebar/DefaultMapScaleBar.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMapsforgeMapScalebarDefaultMapScaleBar")
#ifdef RESTRICT_OrgMapsforgeMapScalebarDefaultMapScaleBar
#define INCLUDE_ALL_OrgMapsforgeMapScalebarDefaultMapScaleBar 0
#else
#define INCLUDE_ALL_OrgMapsforgeMapScalebarDefaultMapScaleBar 1
#endif
#undef RESTRICT_OrgMapsforgeMapScalebarDefaultMapScaleBar

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMapsforgeMapScalebarDefaultMapScaleBar_) && (INCLUDE_ALL_OrgMapsforgeMapScalebarDefaultMapScaleBar || defined(INCLUDE_OrgMapsforgeMapScalebarDefaultMapScaleBar))
#define OrgMapsforgeMapScalebarDefaultMapScaleBar_

#define RESTRICT_OrgMapsforgeMapScalebarMapScaleBar 1
#define INCLUDE_OrgMapsforgeMapScalebarMapScaleBar 1
#include "org/mapsforge/map/scalebar/MapScaleBar.h"

@class OrgMapsforgeMapModelDisplayModel;
@class OrgMapsforgeMapModelMapViewDimension;
@class OrgMapsforgeMapModelMapViewPosition;
@class OrgMapsforgeMapScalebarDefaultMapScaleBar_ScaleBarMode;
@protocol OrgMapsforgeCoreGraphicsCanvas;
@protocol OrgMapsforgeCoreGraphicsGraphicFactory;
@protocol OrgMapsforgeMapScalebarDistanceUnitAdapter;

@interface OrgMapsforgeMapScalebarDefaultMapScaleBar : OrgMapsforgeMapScalebarMapScaleBar

#pragma mark Public

- (instancetype)initWithOrgMapsforgeMapModelMapViewPosition:(OrgMapsforgeMapModelMapViewPosition *)mapViewPosition
                   withOrgMapsforgeMapModelMapViewDimension:(OrgMapsforgeMapModelMapViewDimension *)mapViewDimension
                 withOrgMapsforgeCoreGraphicsGraphicFactory:(id<OrgMapsforgeCoreGraphicsGraphicFactory>)graphicFactory
                       withOrgMapsforgeMapModelDisplayModel:(OrgMapsforgeMapModelDisplayModel *)displayModel;

- (OrgMapsforgeMapScalebarDefaultMapScaleBar_ScaleBarMode *)getScaleBarMode;

- (id<OrgMapsforgeMapScalebarDistanceUnitAdapter>)getSecondaryDistanceUnitAdapter;

- (void)setScaleBarModeWithOrgMapsforgeMapScalebarDefaultMapScaleBar_ScaleBarMode:(OrgMapsforgeMapScalebarDefaultMapScaleBar_ScaleBarMode *)scaleBarMode;

- (void)setSecondaryDistanceUnitAdapterWithOrgMapsforgeMapScalebarDistanceUnitAdapter:(id<OrgMapsforgeMapScalebarDistanceUnitAdapter>)distanceUnitAdapter;

#pragma mark Protected

- (void)redrawWithOrgMapsforgeCoreGraphicsCanvas:(id<OrgMapsforgeCoreGraphicsCanvas>)canvas;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMapsforgeMapScalebarDefaultMapScaleBar)

FOUNDATION_EXPORT void OrgMapsforgeMapScalebarDefaultMapScaleBar_initWithOrgMapsforgeMapModelMapViewPosition_withOrgMapsforgeMapModelMapViewDimension_withOrgMapsforgeCoreGraphicsGraphicFactory_withOrgMapsforgeMapModelDisplayModel_(OrgMapsforgeMapScalebarDefaultMapScaleBar *self, OrgMapsforgeMapModelMapViewPosition *mapViewPosition, OrgMapsforgeMapModelMapViewDimension *mapViewDimension, id<OrgMapsforgeCoreGraphicsGraphicFactory> graphicFactory, OrgMapsforgeMapModelDisplayModel *displayModel);

FOUNDATION_EXPORT OrgMapsforgeMapScalebarDefaultMapScaleBar *new_OrgMapsforgeMapScalebarDefaultMapScaleBar_initWithOrgMapsforgeMapModelMapViewPosition_withOrgMapsforgeMapModelMapViewDimension_withOrgMapsforgeCoreGraphicsGraphicFactory_withOrgMapsforgeMapModelDisplayModel_(OrgMapsforgeMapModelMapViewPosition *mapViewPosition, OrgMapsforgeMapModelMapViewDimension *mapViewDimension, id<OrgMapsforgeCoreGraphicsGraphicFactory> graphicFactory, OrgMapsforgeMapModelDisplayModel *displayModel) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMapsforgeMapScalebarDefaultMapScaleBar *create_OrgMapsforgeMapScalebarDefaultMapScaleBar_initWithOrgMapsforgeMapModelMapViewPosition_withOrgMapsforgeMapModelMapViewDimension_withOrgMapsforgeCoreGraphicsGraphicFactory_withOrgMapsforgeMapModelDisplayModel_(OrgMapsforgeMapModelMapViewPosition *mapViewPosition, OrgMapsforgeMapModelMapViewDimension *mapViewDimension, id<OrgMapsforgeCoreGraphicsGraphicFactory> graphicFactory, OrgMapsforgeMapModelDisplayModel *displayModel);

J2OBJC_TYPE_LITERAL_HEADER(OrgMapsforgeMapScalebarDefaultMapScaleBar)

#endif

#if !defined (OrgMapsforgeMapScalebarDefaultMapScaleBar_ScaleBarMode_) && (INCLUDE_ALL_OrgMapsforgeMapScalebarDefaultMapScaleBar || defined(INCLUDE_OrgMapsforgeMapScalebarDefaultMapScaleBar_ScaleBarMode))
#define OrgMapsforgeMapScalebarDefaultMapScaleBar_ScaleBarMode_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, OrgMapsforgeMapScalebarDefaultMapScaleBar_ScaleBarMode_Enum) {
  OrgMapsforgeMapScalebarDefaultMapScaleBar_ScaleBarMode_Enum_BOTH = 0,
  OrgMapsforgeMapScalebarDefaultMapScaleBar_ScaleBarMode_Enum_SINGLE = 1,
};

@interface OrgMapsforgeMapScalebarDefaultMapScaleBar_ScaleBarMode : JavaLangEnum < NSCopying >

#pragma mark Public

+ (OrgMapsforgeMapScalebarDefaultMapScaleBar_ScaleBarMode *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (id)copyWithZone:(NSZone *)zone;

@end

J2OBJC_STATIC_INIT(OrgMapsforgeMapScalebarDefaultMapScaleBar_ScaleBarMode)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT OrgMapsforgeMapScalebarDefaultMapScaleBar_ScaleBarMode *OrgMapsforgeMapScalebarDefaultMapScaleBar_ScaleBarMode_values_[];

inline OrgMapsforgeMapScalebarDefaultMapScaleBar_ScaleBarMode *OrgMapsforgeMapScalebarDefaultMapScaleBar_ScaleBarMode_get_BOTH();
J2OBJC_ENUM_CONSTANT(OrgMapsforgeMapScalebarDefaultMapScaleBar_ScaleBarMode, BOTH)

inline OrgMapsforgeMapScalebarDefaultMapScaleBar_ScaleBarMode *OrgMapsforgeMapScalebarDefaultMapScaleBar_ScaleBarMode_get_SINGLE();
J2OBJC_ENUM_CONSTANT(OrgMapsforgeMapScalebarDefaultMapScaleBar_ScaleBarMode, SINGLE)

FOUNDATION_EXPORT IOSObjectArray *OrgMapsforgeMapScalebarDefaultMapScaleBar_ScaleBarMode_values();

FOUNDATION_EXPORT OrgMapsforgeMapScalebarDefaultMapScaleBar_ScaleBarMode *OrgMapsforgeMapScalebarDefaultMapScaleBar_ScaleBarMode_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT OrgMapsforgeMapScalebarDefaultMapScaleBar_ScaleBarMode *OrgMapsforgeMapScalebarDefaultMapScaleBar_ScaleBarMode_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(OrgMapsforgeMapScalebarDefaultMapScaleBar_ScaleBarMode)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_OrgMapsforgeMapScalebarDefaultMapScaleBar")
