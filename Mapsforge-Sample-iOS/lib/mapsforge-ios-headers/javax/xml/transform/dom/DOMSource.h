//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/luni/src/main/java/javax/xml/transform/dom/DOMSource.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxXmlTransformDomDOMSource")
#ifdef RESTRICT_JavaxXmlTransformDomDOMSource
#define INCLUDE_ALL_JavaxXmlTransformDomDOMSource 0
#else
#define INCLUDE_ALL_JavaxXmlTransformDomDOMSource 1
#endif
#undef RESTRICT_JavaxXmlTransformDomDOMSource

#if !defined (JavaxXmlTransformDomDOMSource_) && (INCLUDE_ALL_JavaxXmlTransformDomDOMSource || defined(INCLUDE_JavaxXmlTransformDomDOMSource))
#define JavaxXmlTransformDomDOMSource_

#define RESTRICT_JavaxXmlTransformSource 1
#define INCLUDE_JavaxXmlTransformSource 1
#include "javax/xml/transform/Source.h"

@protocol OrgW3cDomNode;

/*!
 @brief <p>Acts as a holder for a transformation Source tree in the
  form of a Document Object Model (DOM) tree.
 </p>
  
 <p>Note that XSLT requires namespace support. Attempting to transform a DOM
  that was not contructed with a namespace-aware parser may result in errors.
  Parsers can be made namespace aware by calling 
 <code>javax.xml.parsers.DocumentBuilderFactory</code>.</p>
 @author <a href="Jeff.Suttor@@Sun.com">Jeff Suttor</a>
 @version $Revision: 446598 $, $Date: 2006-09-15 05:55:40 -0700 (Fri, 15 Sep 2006) $
 - seealso: <a href="http://www.w3.org/TR/DOM-Level-2">Document Object Model (DOM) Level 2 Specification</a>
 */
@interface JavaxXmlTransformDomDOMSource : NSObject < JavaxXmlTransformSource >

#pragma mark Public

/*!
 @brief <p>Zero-argument default constructor.
 If this constructor is used, and
  no DOM source is set using <code>node)</code> , then the 
 <code>Transformer</code> will
  create an empty source <code>org.w3c.dom.Document</code> using 
 <code>javax.xml.parsers.DocumentBuilder</code>.</p>
 - seealso: javax.xml.transform.Transformer
 */
- (instancetype)init;

/*!
 @brief Create a new input source with a DOM node.The operation
  will be applied to the subtree rooted at this node.
 In XSLT,
  a "/" pattern still means the root of the tree (not the subtree),
  and the evaluation of global variables and parameters is done
  from the root node also.
 @param n The DOM node that will contain the Source tree.
 */
- (instancetype)initWithOrgW3cDomNode:(id<OrgW3cDomNode>)n;

/*!
 @brief Create a new input source with a DOM node, and with the
  system ID also passed in as the base URI.
 @param node The DOM node that will contain the Source tree.
 @param systemID Specifies the base URI associated with node.
 */
- (instancetype)initWithOrgW3cDomNode:(id<OrgW3cDomNode>)node
                         withNSString:(NSString *)systemID;

/*!
 @brief Get the node that represents a Source DOM tree.
 @return The node that is to be transformed.
 */
- (id<OrgW3cDomNode>)getNode;

/*!
 @brief Get the base ID (URL or system ID) from where URLs
  will be resolved.
 @return Base URL for this DOM tree.
 */
- (NSString *)getSystemId;

/*!
 @brief Set the node that will represents a Source DOM tree.
 @param node The node that is to be transformed.
 */
- (void)setNodeWithOrgW3cDomNode:(id<OrgW3cDomNode>)node;

/*!
 @brief Set the base ID (URL or system ID) from where URLs
  will be resolved.
 @param systemID Base URL for this DOM tree.
 */
- (void)setSystemIdWithNSString:(NSString *)systemID;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxXmlTransformDomDOMSource)

/*!
 @brief If <code>javax.xml.transform.TransformerFactory</code>
  returns true when passed this value as an argument,
  the Transformer supports Source input of this type.
 */
inline NSString *JavaxXmlTransformDomDOMSource_get_FEATURE();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *JavaxXmlTransformDomDOMSource_FEATURE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaxXmlTransformDomDOMSource, FEATURE, NSString *)

FOUNDATION_EXPORT void JavaxXmlTransformDomDOMSource_init(JavaxXmlTransformDomDOMSource *self);

FOUNDATION_EXPORT JavaxXmlTransformDomDOMSource *new_JavaxXmlTransformDomDOMSource_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxXmlTransformDomDOMSource *create_JavaxXmlTransformDomDOMSource_init();

FOUNDATION_EXPORT void JavaxXmlTransformDomDOMSource_initWithOrgW3cDomNode_(JavaxXmlTransformDomDOMSource *self, id<OrgW3cDomNode> n);

FOUNDATION_EXPORT JavaxXmlTransformDomDOMSource *new_JavaxXmlTransformDomDOMSource_initWithOrgW3cDomNode_(id<OrgW3cDomNode> n) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxXmlTransformDomDOMSource *create_JavaxXmlTransformDomDOMSource_initWithOrgW3cDomNode_(id<OrgW3cDomNode> n);

FOUNDATION_EXPORT void JavaxXmlTransformDomDOMSource_initWithOrgW3cDomNode_withNSString_(JavaxXmlTransformDomDOMSource *self, id<OrgW3cDomNode> node, NSString *systemID);

FOUNDATION_EXPORT JavaxXmlTransformDomDOMSource *new_JavaxXmlTransformDomDOMSource_initWithOrgW3cDomNode_withNSString_(id<OrgW3cDomNode> node, NSString *systemID) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxXmlTransformDomDOMSource *create_JavaxXmlTransformDomDOMSource_initWithOrgW3cDomNode_withNSString_(id<OrgW3cDomNode> node, NSString *systemID);

J2OBJC_TYPE_LITERAL_HEADER(JavaxXmlTransformDomDOMSource)

#endif

#pragma pop_macro("INCLUDE_ALL_JavaxXmlTransformDomDOMSource")
