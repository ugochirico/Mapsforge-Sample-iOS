//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./org/mapsforge/map/reader/header/MapFileInfo.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMapsforgeMapReaderHeaderMapFileInfo")
#ifdef RESTRICT_OrgMapsforgeMapReaderHeaderMapFileInfo
#define INCLUDE_ALL_OrgMapsforgeMapReaderHeaderMapFileInfo 0
#else
#define INCLUDE_ALL_OrgMapsforgeMapReaderHeaderMapFileInfo 1
#endif
#undef RESTRICT_OrgMapsforgeMapReaderHeaderMapFileInfo

#if !defined (OrgMapsforgeMapReaderHeaderMapFileInfo_) && (INCLUDE_ALL_OrgMapsforgeMapReaderHeaderMapFileInfo || defined(INCLUDE_OrgMapsforgeMapReaderHeaderMapFileInfo))
#define OrgMapsforgeMapReaderHeaderMapFileInfo_

@class IOSObjectArray;
@class JavaLangByte;
@class OrgMapsforgeCoreModelBoundingBox;
@class OrgMapsforgeCoreModelLatLong;
@class OrgMapsforgeMapReaderHeaderMapFileInfoBuilder;

@interface OrgMapsforgeMapReaderHeaderMapFileInfo : NSObject {
 @public
  OrgMapsforgeCoreModelBoundingBox *boundingBox_;
  NSString *comment_;
  NSString *createdBy_;
  jboolean debugFile_;
  jlong fileSize_;
  jint fileVersion_;
  NSString *languagePreference_;
  jlong mapDate_;
  jbyte numberOfSubFiles_;
  IOSObjectArray *poiTags_;
  NSString *projectionName_;
  OrgMapsforgeCoreModelLatLong *startPosition_;
  JavaLangByte *startZoomLevel_;
  jint tilePixelSize_;
  IOSObjectArray *wayTags_;
  jbyte zoomLevelMin_;
  jbyte zoomLevelMax_;
}

#pragma mark Public

- (jboolean)supportsZoomLevelWithByte:(jbyte)zoomLevel;

#pragma mark Package-Private

- (instancetype)initWithOrgMapsforgeMapReaderHeaderMapFileInfoBuilder:(OrgMapsforgeMapReaderHeaderMapFileInfoBuilder *)mapFileInfoBuilder;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMapsforgeMapReaderHeaderMapFileInfo)

J2OBJC_FIELD_SETTER(OrgMapsforgeMapReaderHeaderMapFileInfo, boundingBox_, OrgMapsforgeCoreModelBoundingBox *)
J2OBJC_FIELD_SETTER(OrgMapsforgeMapReaderHeaderMapFileInfo, comment_, NSString *)
J2OBJC_FIELD_SETTER(OrgMapsforgeMapReaderHeaderMapFileInfo, createdBy_, NSString *)
J2OBJC_FIELD_SETTER(OrgMapsforgeMapReaderHeaderMapFileInfo, languagePreference_, NSString *)
J2OBJC_FIELD_SETTER(OrgMapsforgeMapReaderHeaderMapFileInfo, poiTags_, IOSObjectArray *)
J2OBJC_FIELD_SETTER(OrgMapsforgeMapReaderHeaderMapFileInfo, projectionName_, NSString *)
J2OBJC_FIELD_SETTER(OrgMapsforgeMapReaderHeaderMapFileInfo, startPosition_, OrgMapsforgeCoreModelLatLong *)
J2OBJC_FIELD_SETTER(OrgMapsforgeMapReaderHeaderMapFileInfo, startZoomLevel_, JavaLangByte *)
J2OBJC_FIELD_SETTER(OrgMapsforgeMapReaderHeaderMapFileInfo, wayTags_, IOSObjectArray *)

FOUNDATION_EXPORT void OrgMapsforgeMapReaderHeaderMapFileInfo_initWithOrgMapsforgeMapReaderHeaderMapFileInfoBuilder_(OrgMapsforgeMapReaderHeaderMapFileInfo *self, OrgMapsforgeMapReaderHeaderMapFileInfoBuilder *mapFileInfoBuilder);

FOUNDATION_EXPORT OrgMapsforgeMapReaderHeaderMapFileInfo *new_OrgMapsforgeMapReaderHeaderMapFileInfo_initWithOrgMapsforgeMapReaderHeaderMapFileInfoBuilder_(OrgMapsforgeMapReaderHeaderMapFileInfoBuilder *mapFileInfoBuilder) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMapsforgeMapReaderHeaderMapFileInfo *create_OrgMapsforgeMapReaderHeaderMapFileInfo_initWithOrgMapsforgeMapReaderHeaderMapFileInfoBuilder_(OrgMapsforgeMapReaderHeaderMapFileInfoBuilder *mapFileInfoBuilder);

J2OBJC_TYPE_LITERAL_HEADER(OrgMapsforgeMapReaderHeaderMapFileInfo)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgMapsforgeMapReaderHeaderMapFileInfo")
