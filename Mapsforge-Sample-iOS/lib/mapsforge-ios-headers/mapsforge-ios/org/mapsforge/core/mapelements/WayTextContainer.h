//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./org/mapsforge/core/mapelements/WayTextContainer.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMapsforgeCoreMapelementsWayTextContainer")
#ifdef RESTRICT_OrgMapsforgeCoreMapelementsWayTextContainer
#define INCLUDE_ALL_OrgMapsforgeCoreMapelementsWayTextContainer 0
#else
#define INCLUDE_ALL_OrgMapsforgeCoreMapelementsWayTextContainer 1
#endif
#undef RESTRICT_OrgMapsforgeCoreMapelementsWayTextContainer

#if !defined (OrgMapsforgeCoreMapelementsWayTextContainer_) && (INCLUDE_ALL_OrgMapsforgeCoreMapelementsWayTextContainer || defined(INCLUDE_OrgMapsforgeCoreMapelementsWayTextContainer))
#define OrgMapsforgeCoreMapelementsWayTextContainer_

#define RESTRICT_OrgMapsforgeCoreMapelementsMapElementContainer 1
#define INCLUDE_OrgMapsforgeCoreMapelementsMapElementContainer 1
#include "org/mapsforge/core/mapelements/MapElementContainer.h"

@class OrgMapsforgeCoreGraphicsDisplay;
@class OrgMapsforgeCoreModelPoint;
@protocol OrgMapsforgeCoreGraphicsCanvas;
@protocol OrgMapsforgeCoreGraphicsMatrix;
@protocol OrgMapsforgeCoreGraphicsPaint;

@interface OrgMapsforgeCoreMapelementsWayTextContainer : OrgMapsforgeCoreMapelementsMapElementContainer

#pragma mark Public

- (instancetype)initWithOrgMapsforgeCoreModelPoint:(OrgMapsforgeCoreModelPoint *)point
                    withOrgMapsforgeCoreModelPoint:(OrgMapsforgeCoreModelPoint *)end
               withOrgMapsforgeCoreGraphicsDisplay:(OrgMapsforgeCoreGraphicsDisplay *)display
                                           withInt:(jint)priority
                                      withNSString:(NSString *)text
                 withOrgMapsforgeCoreGraphicsPaint:(id<OrgMapsforgeCoreGraphicsPaint>)paintFront
                 withOrgMapsforgeCoreGraphicsPaint:(id<OrgMapsforgeCoreGraphicsPaint>)paintBack
                                        withDouble:(jdouble)textHeight;

- (void)drawWithOrgMapsforgeCoreGraphicsCanvas:(id<OrgMapsforgeCoreGraphicsCanvas>)canvas
                withOrgMapsforgeCoreModelPoint:(OrgMapsforgeCoreModelPoint *)origin
            withOrgMapsforgeCoreGraphicsMatrix:(id<OrgMapsforgeCoreGraphicsMatrix>)matrix;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMapsforgeCoreMapelementsWayTextContainer)

FOUNDATION_EXPORT void OrgMapsforgeCoreMapelementsWayTextContainer_initWithOrgMapsforgeCoreModelPoint_withOrgMapsforgeCoreModelPoint_withOrgMapsforgeCoreGraphicsDisplay_withInt_withNSString_withOrgMapsforgeCoreGraphicsPaint_withOrgMapsforgeCoreGraphicsPaint_withDouble_(OrgMapsforgeCoreMapelementsWayTextContainer *self, OrgMapsforgeCoreModelPoint *point, OrgMapsforgeCoreModelPoint *end, OrgMapsforgeCoreGraphicsDisplay *display, jint priority, NSString *text, id<OrgMapsforgeCoreGraphicsPaint> paintFront, id<OrgMapsforgeCoreGraphicsPaint> paintBack, jdouble textHeight);

FOUNDATION_EXPORT OrgMapsforgeCoreMapelementsWayTextContainer *new_OrgMapsforgeCoreMapelementsWayTextContainer_initWithOrgMapsforgeCoreModelPoint_withOrgMapsforgeCoreModelPoint_withOrgMapsforgeCoreGraphicsDisplay_withInt_withNSString_withOrgMapsforgeCoreGraphicsPaint_withOrgMapsforgeCoreGraphicsPaint_withDouble_(OrgMapsforgeCoreModelPoint *point, OrgMapsforgeCoreModelPoint *end, OrgMapsforgeCoreGraphicsDisplay *display, jint priority, NSString *text, id<OrgMapsforgeCoreGraphicsPaint> paintFront, id<OrgMapsforgeCoreGraphicsPaint> paintBack, jdouble textHeight) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMapsforgeCoreMapelementsWayTextContainer *create_OrgMapsforgeCoreMapelementsWayTextContainer_initWithOrgMapsforgeCoreModelPoint_withOrgMapsforgeCoreModelPoint_withOrgMapsforgeCoreGraphicsDisplay_withInt_withNSString_withOrgMapsforgeCoreGraphicsPaint_withOrgMapsforgeCoreGraphicsPaint_withDouble_(OrgMapsforgeCoreModelPoint *point, OrgMapsforgeCoreModelPoint *end, OrgMapsforgeCoreGraphicsDisplay *display, jint priority, NSString *text, id<OrgMapsforgeCoreGraphicsPaint> paintFront, id<OrgMapsforgeCoreGraphicsPaint> paintBack, jdouble textHeight);

J2OBJC_TYPE_LITERAL_HEADER(OrgMapsforgeCoreMapelementsWayTextContainer)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgMapsforgeCoreMapelementsWayTextContainer")
