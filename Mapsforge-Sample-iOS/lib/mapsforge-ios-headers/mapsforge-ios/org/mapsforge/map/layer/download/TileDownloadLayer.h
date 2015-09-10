//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./org/mapsforge/map/layer/download/TileDownloadLayer.java
//

#ifndef _OrgMapsforgeMapLayerDownloadTileDownloadLayer_H_
#define _OrgMapsforgeMapLayerDownloadTileDownloadLayer_H_

#include "J2ObjC_header.h"
#include "org/mapsforge/map/layer/TileLayer.h"

@class OrgMapsforgeCoreModelBoundingBox;
@class OrgMapsforgeCoreModelPoint;
@class OrgMapsforgeCoreModelTile;
@class OrgMapsforgeMapLayerDownloadDownloadJob;
@class OrgMapsforgeMapModelDisplayModel;
@class OrgMapsforgeMapModelMapViewPosition;
@protocol OrgMapsforgeCoreGraphicsCanvas;
@protocol OrgMapsforgeCoreGraphicsGraphicFactory;
@protocol OrgMapsforgeCoreGraphicsTileBitmap;
@protocol OrgMapsforgeMapLayerCacheTileCache;
@protocol OrgMapsforgeMapLayerDownloadTilesourceTileSource;

@interface OrgMapsforgeMapLayerDownloadTileDownloadLayer : OrgMapsforgeMapLayerTileLayer

#pragma mark Public

- (instancetype)initWithOrgMapsforgeMapLayerCacheTileCache:(id<OrgMapsforgeMapLayerCacheTileCache>)tileCache
                   withOrgMapsforgeMapModelMapViewPosition:(OrgMapsforgeMapModelMapViewPosition *)mapViewPosition
      withOrgMapsforgeMapLayerDownloadTilesourceTileSource:(id<OrgMapsforgeMapLayerDownloadTilesourceTileSource>)tileSource
                withOrgMapsforgeCoreGraphicsGraphicFactory:(id<OrgMapsforgeCoreGraphicsGraphicFactory>)graphicFactory;

- (void)drawWithOrgMapsforgeCoreModelBoundingBox:(OrgMapsforgeCoreModelBoundingBox *)boundingBox
                                        withByte:(jbyte)zoomLevel
              withOrgMapsforgeCoreGraphicsCanvas:(id<OrgMapsforgeCoreGraphicsCanvas>)canvas
                  withOrgMapsforgeCoreModelPoint:(OrgMapsforgeCoreModelPoint *)topLeftPoint;

- (jlong)getCacheTimeToLive;

- (void)onDestroy;

- (void)onPause;

- (void)onResume;

- (void)setCacheTimeToLiveWithLong:(jlong)ttl;

- (void)setDisplayModelWithOrgMapsforgeMapModelDisplayModel:(OrgMapsforgeMapModelDisplayModel *)displayModel;

- (void)start;

#pragma mark Protected

- (OrgMapsforgeMapLayerDownloadDownloadJob *)createJobWithOrgMapsforgeCoreModelTile:(OrgMapsforgeCoreModelTile *)tile;

- (jboolean)isTileStaleWithOrgMapsforgeCoreModelTile:(OrgMapsforgeCoreModelTile *)tile
              withOrgMapsforgeCoreGraphicsTileBitmap:(id<OrgMapsforgeCoreGraphicsTileBitmap>)bitmap;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMapsforgeMapLayerDownloadTileDownloadLayer)

FOUNDATION_EXPORT void OrgMapsforgeMapLayerDownloadTileDownloadLayer_initWithOrgMapsforgeMapLayerCacheTileCache_withOrgMapsforgeMapModelMapViewPosition_withOrgMapsforgeMapLayerDownloadTilesourceTileSource_withOrgMapsforgeCoreGraphicsGraphicFactory_(OrgMapsforgeMapLayerDownloadTileDownloadLayer *self, id<OrgMapsforgeMapLayerCacheTileCache> tileCache, OrgMapsforgeMapModelMapViewPosition *mapViewPosition, id<OrgMapsforgeMapLayerDownloadTilesourceTileSource> tileSource, id<OrgMapsforgeCoreGraphicsGraphicFactory> graphicFactory);

FOUNDATION_EXPORT OrgMapsforgeMapLayerDownloadTileDownloadLayer *new_OrgMapsforgeMapLayerDownloadTileDownloadLayer_initWithOrgMapsforgeMapLayerCacheTileCache_withOrgMapsforgeMapModelMapViewPosition_withOrgMapsforgeMapLayerDownloadTilesourceTileSource_withOrgMapsforgeCoreGraphicsGraphicFactory_(id<OrgMapsforgeMapLayerCacheTileCache> tileCache, OrgMapsforgeMapModelMapViewPosition *mapViewPosition, id<OrgMapsforgeMapLayerDownloadTilesourceTileSource> tileSource, id<OrgMapsforgeCoreGraphicsGraphicFactory> graphicFactory) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMapsforgeMapLayerDownloadTileDownloadLayer)

#endif // _OrgMapsforgeMapLayerDownloadTileDownloadLayer_H_