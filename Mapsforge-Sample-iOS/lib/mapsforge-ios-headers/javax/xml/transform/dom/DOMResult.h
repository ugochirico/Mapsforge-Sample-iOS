//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/luni/src/main/java/javax/xml/transform/dom/DOMResult.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxXmlTransformDomDOMResult")
#ifdef RESTRICT_JavaxXmlTransformDomDOMResult
#define INCLUDE_ALL_JavaxXmlTransformDomDOMResult 0
#else
#define INCLUDE_ALL_JavaxXmlTransformDomDOMResult 1
#endif
#undef RESTRICT_JavaxXmlTransformDomDOMResult

#if !defined (JavaxXmlTransformDomDOMResult_) && (INCLUDE_ALL_JavaxXmlTransformDomDOMResult || defined(INCLUDE_JavaxXmlTransformDomDOMResult))
#define JavaxXmlTransformDomDOMResult_

#define RESTRICT_JavaxXmlTransformResult 1
#define INCLUDE_JavaxXmlTransformResult 1
#include "javax/xml/transform/Result.h"

@protocol OrgW3cDomNode;

/*!
 @brief <p>Acts as a holder for a transformation result tree in the form of a Document Object Model (DOM) tree.
 </p>
  
 <p>If no output DOM source is set, the transformation will create a Document node as the holder for the result of the transformation,
  which may be retrieved with <code>getNode()</code>.</p>
 @author <a href="Jeff.Suttor@@Sun.com">Jeff Suttor</a>
 @version $Revision: 569995 $, $Date: 2007-08-26 21:31:06 -0700 (Sun, 26 Aug 2007) $
 */
@interface JavaxXmlTransformDomDOMResult : NSObject < JavaxXmlTransformResult >

#pragma mark Public

/*!
 @brief <p>Zero-argument default constructor.
 </p>
  
 <p><code>node</code>,
  <code>siblingNode</code> and 
 <code>systemId</code>
  will be set to <code>null</code>.</p>
 */
- (instancetype)init;

/*!
 @brief <p>Use a DOM node to create a new output target.
 </p>
  
 <p>In practice, the node should be
  a <code>org.w3c.dom.Document</code> node,
  a <code>org.w3c.dom.DocumentFragment</code> node, or
  a <code>org.w3c.dom.Element</code> node.
  In other words, a node that accepts children.</p>
  
 <p><code>siblingNode</code> and 
 <code>systemId</code>
  will be set to <code>null</code>.</p>
 @param node The DOM node that will contain the result tree.
 */
- (instancetype)initWithOrgW3cDomNode:(id<OrgW3cDomNode>)node;

/*!
 @brief <p>Use a DOM node to create a new output target specifying the child node where the result nodes should be inserted before.
 </p>
  
 <p>In practice, <code>node</code> and <code>nextSibling</code> should be
  a <code>org.w3c.dom.Document</code> node,
  a <code>org.w3c.dom.DocumentFragment</code> node, or
  a <code>org.w3c.dom.Element</code> node.
  In other words, a node that accepts children.</p>
  
 <p>Use <code>nextSibling</code> to specify the child node
  where the result nodes should be inserted before.
  If <code>nextSibling</code> is not a sibling of <code>node</code>,
  then an <code>IllegalArgumentException</code> is thrown.
  If <code>node</code> is <code>null</code> and <code>nextSibling</code> is not <code>null</code>,
  then an <code>IllegalArgumentException</code> is thrown.
  If <code>nextSibling</code> is <code>null</code>,
  then the behavior is the same as calling <code>node)</code>,
  i.e. append the result nodes as the last child of the specified <code>node</code>.</p>
  
 <p><code>systemId</code> will be set to <code>null</code>.</p>
 @param node The DOM node that will contain the result tree.
 @param nextSibling The child node where the result nodes should be inserted before.
 @throw IllegalArgumentExceptionIf <code>nextSibling</code> is not a sibling of <code>node</code>.
 @throw IllegalArgumentExceptionIf <code>node</code> is <code>null</code> and <code>nextSibling</code> is not <code>null</code>.
 @since 1.5
 */
- (instancetype)initWithOrgW3cDomNode:(id<OrgW3cDomNode>)node
                    withOrgW3cDomNode:(id<OrgW3cDomNode>)nextSibling;

/*!
 @brief <p>Use a DOM node to create a new output target specifying the child node where the result nodes should be inserted before and
  the specified System ID.
 </p>
  
 <p>In practice, <code>node</code> and <code>nextSibling</code> should be
  a <code>org.w3c.dom.Document</code> node,
  a <code>org.w3c.dom.DocumentFragment</code> node, or a 
 <code>org.w3c.dom.Element</code> node.
  In other words, a node that accepts children.</p>
  
 <p>Use <code>nextSibling</code> to specify the child node
  where the result nodes should be inserted before.
  If <code>nextSibling</code> is not a sibling of <code>node</code>,
  then an <code>IllegalArgumentException</code> is thrown.
  If <code>node</code> is <code>null</code> and <code>nextSibling</code> is not <code>null</code>,
  then an <code>IllegalArgumentException</code> is thrown.
  If <code>nextSibling</code> is <code>null</code>,
  then the behavior is the same as calling <code>node, String systemId)</code>,
  i.e. append the result nodes as the last child of the specified node and use the specified System ID.</p>
 @param node The DOM node that will contain the result tree.
 @param nextSibling The child node where the result nodes should be inserted before.
 @param systemId The system identifier which may be used in association with this node.
 @throw IllegalArgumentExceptionIf <code>nextSibling</code> is not a sibling of <code>node</code>.
 @throw IllegalArgumentExceptionIf <code>node</code> is <code>null</code> and <code>nextSibling</code> is not <code>null</code>.
 @since 1.5
 */
- (instancetype)initWithOrgW3cDomNode:(id<OrgW3cDomNode>)node
                    withOrgW3cDomNode:(id<OrgW3cDomNode>)nextSibling
                         withNSString:(NSString *)systemId;

/*!
 @brief <p>Use a DOM node to create a new output target with the specified System ID.
 <p>
  
 <p>In practice, the node should be
  a <code>org.w3c.dom.Document</code> node,
  a <code>org.w3c.dom.DocumentFragment</code> node, or
  a <code>org.w3c.dom.Element</code> node.
  In other words, a node that accepts children.</p>
  
 <p><code>siblingNode</code> will be set to <code>null</code>.</p>
 @param node The DOM node that will contain the result tree.
 @param systemId The system identifier which may be used in association with this node.
 */
- (instancetype)initWithOrgW3cDomNode:(id<OrgW3cDomNode>)node
                         withNSString:(NSString *)systemId;

/*!
 @brief <p>Get the child node before which the result nodes will be inserted.
 </p>
  
 <p>If no node was set via 
 <code>node, Node nextSibling)</code>,
  <code>node, Node nextSibling, String systemId)</code> or 
 <code>nextSibling)</code>,
  then <code>null</code> will be returned.</p>
 @return The child node before which the result nodes will be inserted.
 @since 1.5
 */
- (id<OrgW3cDomNode>)getNextSibling;

/*!
 @brief <p>Get the node that will contain the result DOM tree.
 </p>
  
 <p>If no node was set via 
 <code>node)</code>,
  <code>node, String systeId)</code>,
  <code>node, Node nextSibling)</code>,
  <code>node, Node nextSibling, String systemId)</code> or 
 <code>node)</code>,
  then the node will be set by the transformation, and may be obtained from this method once the transformation is complete.
  Calling this method before the transformation will return <code>null</code>.</p>
 @return The node to which the transformation will be appended.
 */
- (id<OrgW3cDomNode>)getNode;

/*!
 @brief <p>Get the System Identifier.
 </p>
  
 <p>If no System ID was set via 
 <code>node, String systemId)</code>,
  <code>node, Node nextSibling, String systemId)</code> or 
 <code>systemId)</code>,
  then <code>null</code> will be returned.</p>
 @return The system identifier.
 */
- (NSString *)getSystemId;

/*!
 @brief <p>Set the child node before which the result nodes will be inserted.
 </p>
  
 <p>Use <code>nextSibling</code> to specify the child node
  before which the result nodes should be inserted.
  If <code>nextSibling</code> is not a descendant of <code>node</code>,
  then an <code>IllegalArgumentException</code> is thrown.
  If <code>node</code> is <code>null</code> and <code>nextSibling</code> is not <code>null</code>,
  then an <code>IllegalStateException</code> is thrown.
  If <code>nextSibling</code> is <code>null</code>,
  then the behavior is the same as calling <code>node)</code>,
  i.e. append the result nodes as the last child of the specified <code>node</code>.</p>
 @param nextSibling The child node before which the result nodes will be inserted.
 @throw IllegalArgumentExceptionIf <code>nextSibling</code> is not a descendant of <code>node</code>.
 @throw IllegalStateExceptionIf <code>node</code> is <code>null</code> and <code>nextSibling</code> is not <code>null</code>.
 @since 1.5
 */
- (void)setNextSiblingWithOrgW3cDomNode:(id<OrgW3cDomNode>)nextSibling;

/*!
 @brief <p>Set the node that will contain the result DOM tree.
 <p>
  
 <p>In practice, the node should be
  a <code>org.w3c.dom.Document</code> node,
  a <code>org.w3c.dom.DocumentFragment</code> node, or
  a <code>org.w3c.dom.Element</code> node.
  In other words, a node that accepts children.</p>
  
 <p>An <code>IllegalStateException</code> is thrown if <code>nextSibling</code> is not <code>null</code> and 
 <code>node</code> is not a parent of <code>nextSibling</code>.
  An <code>IllegalStateException</code> is thrown if <code>node</code> is <code>null</code> and 
 <code>nextSibling</code> is not <code>null</code>.</p>
 @param node The node to which the transformation will be appended.
 @throw IllegalStateExceptionIf <code>nextSibling</code> is not <code>null</code> and
    <code>nextSibling</code> is not a child of <code>node</code>.
 @throw IllegalStateExceptionIf <code>node</code> is <code>null</code> and
    <code>nextSibling</code> is not <code>null</code>.
 */
- (void)setNodeWithOrgW3cDomNode:(id<OrgW3cDomNode>)node;

/*!
 @brief <p>Set the systemId that may be used in association with the node.
 </p>
 @param systemId The system identifier as a URI string.
 */
- (void)setSystemIdWithNSString:(NSString *)systemId;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxXmlTransformDomDOMResult)

/*!
 @brief <p>If <code>javax.xml.transform.TransformerFactory</code>
  returns <code>true</code> when passed this value as an argument,
  the <code>Transformer</code> supports <code>Result</code> output of this type.
 </p>
 */
inline NSString *JavaxXmlTransformDomDOMResult_get_FEATURE();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *JavaxXmlTransformDomDOMResult_FEATURE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaxXmlTransformDomDOMResult, FEATURE, NSString *)

FOUNDATION_EXPORT void JavaxXmlTransformDomDOMResult_init(JavaxXmlTransformDomDOMResult *self);

FOUNDATION_EXPORT JavaxXmlTransformDomDOMResult *new_JavaxXmlTransformDomDOMResult_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxXmlTransformDomDOMResult *create_JavaxXmlTransformDomDOMResult_init();

FOUNDATION_EXPORT void JavaxXmlTransformDomDOMResult_initWithOrgW3cDomNode_(JavaxXmlTransformDomDOMResult *self, id<OrgW3cDomNode> node);

FOUNDATION_EXPORT JavaxXmlTransformDomDOMResult *new_JavaxXmlTransformDomDOMResult_initWithOrgW3cDomNode_(id<OrgW3cDomNode> node) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxXmlTransformDomDOMResult *create_JavaxXmlTransformDomDOMResult_initWithOrgW3cDomNode_(id<OrgW3cDomNode> node);

FOUNDATION_EXPORT void JavaxXmlTransformDomDOMResult_initWithOrgW3cDomNode_withNSString_(JavaxXmlTransformDomDOMResult *self, id<OrgW3cDomNode> node, NSString *systemId);

FOUNDATION_EXPORT JavaxXmlTransformDomDOMResult *new_JavaxXmlTransformDomDOMResult_initWithOrgW3cDomNode_withNSString_(id<OrgW3cDomNode> node, NSString *systemId) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxXmlTransformDomDOMResult *create_JavaxXmlTransformDomDOMResult_initWithOrgW3cDomNode_withNSString_(id<OrgW3cDomNode> node, NSString *systemId);

FOUNDATION_EXPORT void JavaxXmlTransformDomDOMResult_initWithOrgW3cDomNode_withOrgW3cDomNode_(JavaxXmlTransformDomDOMResult *self, id<OrgW3cDomNode> node, id<OrgW3cDomNode> nextSibling);

FOUNDATION_EXPORT JavaxXmlTransformDomDOMResult *new_JavaxXmlTransformDomDOMResult_initWithOrgW3cDomNode_withOrgW3cDomNode_(id<OrgW3cDomNode> node, id<OrgW3cDomNode> nextSibling) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxXmlTransformDomDOMResult *create_JavaxXmlTransformDomDOMResult_initWithOrgW3cDomNode_withOrgW3cDomNode_(id<OrgW3cDomNode> node, id<OrgW3cDomNode> nextSibling);

FOUNDATION_EXPORT void JavaxXmlTransformDomDOMResult_initWithOrgW3cDomNode_withOrgW3cDomNode_withNSString_(JavaxXmlTransformDomDOMResult *self, id<OrgW3cDomNode> node, id<OrgW3cDomNode> nextSibling, NSString *systemId);

FOUNDATION_EXPORT JavaxXmlTransformDomDOMResult *new_JavaxXmlTransformDomDOMResult_initWithOrgW3cDomNode_withOrgW3cDomNode_withNSString_(id<OrgW3cDomNode> node, id<OrgW3cDomNode> nextSibling, NSString *systemId) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxXmlTransformDomDOMResult *create_JavaxXmlTransformDomDOMResult_initWithOrgW3cDomNode_withOrgW3cDomNode_withNSString_(id<OrgW3cDomNode> node, id<OrgW3cDomNode> nextSibling, NSString *systemId);

J2OBJC_TYPE_LITERAL_HEADER(JavaxXmlTransformDomDOMResult)

#endif

#pragma pop_macro("INCLUDE_ALL_JavaxXmlTransformDomDOMResult")
