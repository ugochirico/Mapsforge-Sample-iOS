//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./org/mapsforge/core/graphics/Canvas.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMapsforgeCoreGraphicsCanvas")
#ifdef RESTRICT_OrgMapsforgeCoreGraphicsCanvas
#define INCLUDE_ALL_OrgMapsforgeCoreGraphicsCanvas 0
#else
#define INCLUDE_ALL_OrgMapsforgeCoreGraphicsCanvas 1
#endif
#undef RESTRICT_OrgMapsforgeCoreGraphicsCanvas

#if !defined (OrgMapsforgeCoreGraphicsCanvas_) && (INCLUDE_ALL_OrgMapsforgeCoreGraphicsCanvas || defined(INCLUDE_OrgMapsforgeCoreGraphicsCanvas))
#define OrgMapsforgeCoreGraphicsCanvas_

#define RESTRICT_OrgMapsforgeCoreGraphicsGraphicContext 1
#define INCLUDE_OrgMapsforgeCoreGraphicsGraphicContext 1
#include "org/mapsforge/core/graphics/GraphicContext.h"

@class OrgMapsforgeCoreModelDimension;
@protocol OrgMapsforgeCoreGraphicsBitmap;

@protocol OrgMapsforgeCoreGraphicsCanvas < OrgMapsforgeCoreGraphicsGraphicContext, JavaObject >

- (void)destroy;

- (OrgMapsforgeCoreModelDimension *)getDimension;

- (jint)getHeight;

- (jint)getWidth;

- (void)setBitmapWithOrgMapsforgeCoreGraphicsBitmap:(id<OrgMapsforgeCoreGraphicsBitmap>)bitmap;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMapsforgeCoreGraphicsCanvas)

J2OBJC_TYPE_LITERAL_HEADER(OrgMapsforgeCoreGraphicsCanvas)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgMapsforgeCoreGraphicsCanvas")
