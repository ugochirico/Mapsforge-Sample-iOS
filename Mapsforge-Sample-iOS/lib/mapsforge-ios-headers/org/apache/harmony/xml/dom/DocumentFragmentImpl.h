//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/apache/harmony/xml/dom/DocumentFragmentImpl.java
//

#ifndef _OrgApacheHarmonyXmlDomDocumentFragmentImpl_H_
#define _OrgApacheHarmonyXmlDomDocumentFragmentImpl_H_

#include "J2ObjC_header.h"
#include "org/apache/harmony/xml/dom/InnerNodeImpl.h"
#include "org/w3c/dom/DocumentFragment.h"

@class OrgApacheHarmonyXmlDomDocumentImpl;

@interface OrgApacheHarmonyXmlDomDocumentFragmentImpl : OrgApacheHarmonyXmlDomInnerNodeImpl < OrgW3cDomDocumentFragment >

#pragma mark Public

- (NSString *)getNodeName;

- (jshort)getNodeType;

#pragma mark Package-Private

- (instancetype)initWithOrgApacheHarmonyXmlDomDocumentImpl:(OrgApacheHarmonyXmlDomDocumentImpl *)document;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheHarmonyXmlDomDocumentFragmentImpl)

FOUNDATION_EXPORT void OrgApacheHarmonyXmlDomDocumentFragmentImpl_initWithOrgApacheHarmonyXmlDomDocumentImpl_(OrgApacheHarmonyXmlDomDocumentFragmentImpl *self, OrgApacheHarmonyXmlDomDocumentImpl *document);

FOUNDATION_EXPORT OrgApacheHarmonyXmlDomDocumentFragmentImpl *new_OrgApacheHarmonyXmlDomDocumentFragmentImpl_initWithOrgApacheHarmonyXmlDomDocumentImpl_(OrgApacheHarmonyXmlDomDocumentImpl *document) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheHarmonyXmlDomDocumentFragmentImpl)

#endif // _OrgApacheHarmonyXmlDomDocumentFragmentImpl_H_
