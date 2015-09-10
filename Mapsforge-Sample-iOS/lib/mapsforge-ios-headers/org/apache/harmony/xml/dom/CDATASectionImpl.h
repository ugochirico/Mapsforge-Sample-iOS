//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/apache/harmony/xml/dom/CDATASectionImpl.java
//

#ifndef _OrgApacheHarmonyXmlDomCDATASectionImpl_H_
#define _OrgApacheHarmonyXmlDomCDATASectionImpl_H_

#include "J2ObjC_header.h"
#include "org/apache/harmony/xml/dom/TextImpl.h"
#include "org/w3c/dom/CDATASection.h"

@class OrgApacheHarmonyXmlDomDocumentImpl;

@interface OrgApacheHarmonyXmlDomCDATASectionImpl : OrgApacheHarmonyXmlDomTextImpl < OrgW3cDomCDATASection >

#pragma mark Public

- (instancetype)initWithOrgApacheHarmonyXmlDomDocumentImpl:(OrgApacheHarmonyXmlDomDocumentImpl *)document
                                              withNSString:(NSString *)data;

- (NSString *)getNodeName;

- (jshort)getNodeType;

- (jboolean)needsSplitting;

- (OrgApacheHarmonyXmlDomTextImpl *)replaceWithText;

- (void)split;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheHarmonyXmlDomCDATASectionImpl)

FOUNDATION_EXPORT void OrgApacheHarmonyXmlDomCDATASectionImpl_initWithOrgApacheHarmonyXmlDomDocumentImpl_withNSString_(OrgApacheHarmonyXmlDomCDATASectionImpl *self, OrgApacheHarmonyXmlDomDocumentImpl *document, NSString *data);

FOUNDATION_EXPORT OrgApacheHarmonyXmlDomCDATASectionImpl *new_OrgApacheHarmonyXmlDomCDATASectionImpl_initWithOrgApacheHarmonyXmlDomDocumentImpl_withNSString_(OrgApacheHarmonyXmlDomDocumentImpl *document, NSString *data) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheHarmonyXmlDomCDATASectionImpl)

#endif // _OrgApacheHarmonyXmlDomCDATASectionImpl_H_