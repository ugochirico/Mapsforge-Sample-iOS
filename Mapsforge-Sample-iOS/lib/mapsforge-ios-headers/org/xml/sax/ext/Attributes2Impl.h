//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/xml/sax/ext/Attributes2Impl.java
//

#ifndef _OrgXmlSaxExtAttributes2Impl_H_
#define _OrgXmlSaxExtAttributes2Impl_H_

#include "J2ObjC_header.h"
#include "org/xml/sax/ext/Attributes2.h"
#include "org/xml/sax/helpers/AttributesImpl.h"

@protocol OrgXmlSaxAttributes;

@interface OrgXmlSaxExtAttributes2Impl : OrgXmlSaxHelpersAttributesImpl < OrgXmlSaxExtAttributes2 >

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithOrgXmlSaxAttributes:(id<OrgXmlSaxAttributes>)atts;

- (void)addAttributeWithNSString:(NSString *)uri
                    withNSString:(NSString *)localName
                    withNSString:(NSString *)qName
                    withNSString:(NSString *)type
                    withNSString:(NSString *)value;

- (jboolean)isDeclaredWithInt:(jint)index;

- (jboolean)isDeclaredWithNSString:(NSString *)qName;

- (jboolean)isDeclaredWithNSString:(NSString *)uri
                      withNSString:(NSString *)localName;

- (jboolean)isSpecifiedWithInt:(jint)index;

- (jboolean)isSpecifiedWithNSString:(NSString *)qName;

- (jboolean)isSpecifiedWithNSString:(NSString *)uri
                       withNSString:(NSString *)localName;

- (void)removeAttributeWithInt:(jint)index;

- (void)setAttributesWithOrgXmlSaxAttributes:(id<OrgXmlSaxAttributes>)atts;

- (void)setDeclaredWithInt:(jint)index
               withBoolean:(jboolean)value;

- (void)setSpecifiedWithInt:(jint)index
                withBoolean:(jboolean)value;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgXmlSaxExtAttributes2Impl)

FOUNDATION_EXPORT void OrgXmlSaxExtAttributes2Impl_init(OrgXmlSaxExtAttributes2Impl *self);

FOUNDATION_EXPORT OrgXmlSaxExtAttributes2Impl *new_OrgXmlSaxExtAttributes2Impl_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void OrgXmlSaxExtAttributes2Impl_initWithOrgXmlSaxAttributes_(OrgXmlSaxExtAttributes2Impl *self, id<OrgXmlSaxAttributes> atts);

FOUNDATION_EXPORT OrgXmlSaxExtAttributes2Impl *new_OrgXmlSaxExtAttributes2Impl_initWithOrgXmlSaxAttributes_(id<OrgXmlSaxAttributes> atts) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgXmlSaxExtAttributes2Impl)

#endif // _OrgXmlSaxExtAttributes2Impl_H_