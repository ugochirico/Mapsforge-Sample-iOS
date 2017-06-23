//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/luni/src/main/java/javax/xml/xpath/XPath.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxXmlXpathXPath")
#ifdef RESTRICT_JavaxXmlXpathXPath
#define INCLUDE_ALL_JavaxXmlXpathXPath 0
#else
#define INCLUDE_ALL_JavaxXmlXpathXPath 1
#endif
#undef RESTRICT_JavaxXmlXpathXPath

#if !defined (JavaxXmlXpathXPath_) && (INCLUDE_ALL_JavaxXmlXpathXPath || defined(INCLUDE_JavaxXmlXpathXPath))
#define JavaxXmlXpathXPath_

@class JavaxXmlNamespaceQName;
@class OrgXmlSaxInputSource;
@protocol JavaxXmlNamespaceNamespaceContext;
@protocol JavaxXmlXpathXPathExpression;
@protocol JavaxXmlXpathXPathFunctionResolver;
@protocol JavaxXmlXpathXPathVariableResolver;

/*!
 @brief <p><code>XPath</code> provides access to the XPath evaluation environment and expressions.
 </p>
  
 <table id="XPath-evaluation" border="1" cellpadding="2">
    <thead>
      <tr>
        <th colspan="2">Evaluation of XPath Expressions.</th>
      </tr>
    </thead>
    <tbody>
      <tr>
        <td>context</td>
        <td>
          If a request is made to evaluate the expression in the absence
  of a context item, an empty document node will be used for the context.
  For the purposes of evaluating XPath expressions, a DocumentFragment
  is treated like a Document node.
       </td>
     </tr>
     <tr>
       <td>variables</td>
       <td>
         If the expression contains a variable reference, its value will be found through the <code>XPathVariableResolver</code>
         set with <code>resolver)</code>.
         An <code>XPathExpressionException</code> is raised if the variable resolver is undefined or
         the resolver returns <code>null</code> for the variable.
         The value of a variable must be immutable through the course of any single evaluation.</p>
       </td>
     </tr>
     <tr>
       <td>functions</td>
       <td>
         If the expression contains a function reference, the function will be found through the <code>XPathFunctionResolver</code>
         set with <code>resolver)</code>.
         An <code>XPathExpressionException</code> is raised if the function resolver is undefined or
         the function resolver returns <code>null</code> for the function.</p>
       </td>
     </tr>
     <tr>
       <td>QNames</td>
       <td>
         QNames in the expression are resolved against the XPath namespace context
         set with <code>nsContext)</code>.
       </td>
     </tr>
     <tr>
       <td>result</td>
       <td>
         This result of evaluating an expression is converted to an instance of the desired return type.
         Valid return types are defined in <code>XPathConstants</code>.
         Conversion to the return type follows XPath conversion rules.</p>
       </td>
     </tr>
  </table>
 @author <a href="Norman.Walsh@@Sun.com">Norman Walsh</a>
 @author <a href="Jeff.Suttor@@Sun.com">Jeff Suttor</a>
 @version $Revision: 569998 $, $Date: 2007-08-26 21:40:02 -0700 (Sun, 26 Aug 2007) $
 - seealso: <a href="http://www.w3.org/TR/xpath">XML Path Language (XPath) Version 1.0</a>
 @since 1.5
 */
@protocol JavaxXmlXpathXPath < JavaObject >

/*!
 @brief <p>Reset this <code>XPath</code> to its original configuration.
 </p>
  
 <p><code>XPath</code> is reset to the same state as when it was created with 
 <code>XPathFactory.newXPath()</code>.
  <code>reset()</code> is designed to allow the reuse of existing <code>XPath</code>s
  thus saving resources associated with the creation of new <code>XPath</code>s.</p>
  
 <p>The reset <code>XPath</code> is not guaranteed to have the same <code>XPathFunctionResolver</code>, <code>XPathVariableResolver</code>
  or <code>NamespaceContext</code> <code>Object</code>s, e.g. <code>obj)</code>.
  It is guaranteed to have a functionally equal <code>XPathFunctionResolver</code>, <code>XPathVariableResolver</code>
  and <code>NamespaceContext</code>.</p>
 */
- (void)reset;

/*!
 @brief <p>Establish a variable resolver.
 </p>
  
 <p>A <code>NullPointerException</code> is thrown if <code>resolver</code> is <code>null</code>.</p>
 @param resolver Variable resolver.
 @throw NullPointerExceptionIf <code>resolver</code> is <code>null</code>.
 */
- (void)setXPathVariableResolverWithJavaxXmlXpathXPathVariableResolver:(id<JavaxXmlXpathXPathVariableResolver>)resolver;

/*!
 @brief <p>Return the current variable resolver.
 </p>
  
 <p><code>null</code> is returned in no variable resolver is in effect.</p>
 @return Current variable resolver.
 */
- (id<JavaxXmlXpathXPathVariableResolver>)getXPathVariableResolver;

/*!
 @brief <p>Establish a function resolver.
 </p>
  
 <p>A <code>NullPointerException</code> is thrown if <code>resolver</code> is <code>null</code>.</p>
 @param resolver XPath function resolver.
 @throw NullPointerExceptionIf <code>resolver</code> is <code>null</code>.
 */
- (void)setXPathFunctionResolverWithJavaxXmlXpathXPathFunctionResolver:(id<JavaxXmlXpathXPathFunctionResolver>)resolver;

/*!
 @brief <p>Return the current function resolver.
 </p>
  
 <p><code>null</code> is returned in no function resolver is in effect.</p>
 @return Current function resolver.
 */
- (id<JavaxXmlXpathXPathFunctionResolver>)getXPathFunctionResolver;

/*!
 @brief <p>Establish a namespace context.
 </p>
  
 <p>A <code>NullPointerException</code> is thrown if <code>nsContext</code> is <code>null</code>.</p>
 @param nsContext Namespace context to use.
 @throw NullPointerExceptionIf <code>nsContext</code> is <code>null</code>.
 */
- (void)setNamespaceContextWithJavaxXmlNamespaceNamespaceContext:(id<JavaxXmlNamespaceNamespaceContext>)nsContext;

/*!
 @brief <p>Return the current namespace context.
 </p>
  
 <p><code>null</code> is returned in no namespace context is in effect.</p>
 @return Current Namespace context.
 */
- (id<JavaxXmlNamespaceNamespaceContext>)getNamespaceContext;

/*!
 @brief <p>Compile an XPath expression for later evaluation.
 </p>
  
 <p>If <code>expression</code> contains any <code>XPathFunction</code>s,
  they must be available via the <code>XPathFunctionResolver</code>.
  An <code>XPathExpressionException</code> will be thrown if the <code>XPathFunction</code>
  cannot be resolved with the <code>XPathFunctionResolver</code>.</p>
  
 <p>If <code>expression</code> is <code>null</code>, a <code>NullPointerException</code> is thrown.</p>
 @param expression The XPath expression.
 @return Compiled XPath expression.
 @throw XPathExpressionExceptionIf <code>expression</code> cannot be compiled.
 @throw NullPointerExceptionIf <code>expression</code> is <code>null</code>.
 */
- (id<JavaxXmlXpathXPathExpression>)compileWithNSString:(NSString *)expression;

/*!
 @brief <p>Evaluate an <code>XPath</code> expression in the specified context and return the result as the specified type.
 </p>
  
 <p>See <a href="#XPath-evaluation">Evaluation of XPath Expressions</a> for context item evaluation,
  variable, function and <code>QName</code> resolution and return type conversion.</p>
  
 <p>If <code>returnType</code> is not one of the types defined in <code>XPathConstants</code> ( 
 <code>NUMBER</code>,
  <code>STRING</code>,
  <code>BOOLEAN</code>,
  <code>NODE</code> or 
 <code>NODESET</code>)
  then an <code>IllegalArgumentException</code> is thrown.</p>
  
 <p>If a <code>null</code> value is provided for 
 <code>item</code>, an empty document will be used for the
  context.
  If <code>expression</code> or <code>returnType</code> is <code>null</code>, then a 
 <code>NullPointerException</code> is thrown.</p>
 @param expression The XPath expression.
 @param item The starting context (node or node list, for example).
 @param returnType The desired return type.
 @return Result of evaluating an XPath expression as an <code>Object</code> of <code>returnType</code>.
 @throw XPathExpressionExceptionIf <code>expression</code> cannot be evaluated.
 @throw IllegalArgumentExceptionIf <code>returnType</code> is not one of the types defined in <code>XPathConstants</code>.
 @throw NullPointerExceptionIf <code>expression</code> or <code>returnType</code> is <code>null</code>.
 */
- (id)evaluateWithNSString:(NSString *)expression
                    withId:(id)item
withJavaxXmlNamespaceQName:(JavaxXmlNamespaceQName *)returnType;

/*!
 @brief <p>Evaluate an XPath expression in the specified context and return the result as a <code>String</code>.
 </p>
  
 <p>This method calls <code>expression, Object item, QName returnType)</code> with a <code>returnType</code> of 
 <code>XPathConstants.STRING</code>.</p>
  
 <p>See <a href="#XPath-evaluation">Evaluation of XPath Expressions</a> for context item evaluation,
  variable, function and QName resolution and return type conversion.</p>
  
 <p>If a <code>null</code> value is provided for 
 <code>item</code>, an empty document will be used for the
  context.
  If <code>expression</code> is <code>null</code>, then a <code>NullPointerException</code> is thrown.</p>
 @param expression The XPath expression.
 @param item The starting context (node or node list, for example).
 @return The <code>String</code> that is the result of evaluating the expression and
    converting the result to a <code>String</code>.
 @throw XPathExpressionExceptionIf <code>expression</code> cannot be evaluated.
 @throw NullPointerExceptionIf <code>expression</code> is <code>null</code>.
 */
- (NSString *)evaluateWithNSString:(NSString *)expression
                            withId:(id)item;

/*!
 @brief <p>Evaluate an XPath expression in the context of the specified <code>InputSource</code>
  and return the result as the specified type.
 </p>
  
 <p>This method builds a data model for the <code>InputSource</code> and calls 
 <code>expression, Object item, QName returnType)</code> on the resulting document object.</p>
  
 <p>See <a href="#XPath-evaluation">Evaluation of XPath Expressions</a> for context item evaluation,
  variable, function and QName resolution and return type conversion.</p>
  
 <p>If <code>returnType</code> is not one of the types defined in <code>XPathConstants</code>,
  then an <code>IllegalArgumentException</code> is thrown.</p>
  
 <p>If <code>expression</code>, <code>source</code> or <code>returnType</code> is <code>null</code>,
  then a <code>NullPointerException</code> is thrown.</p>
 @param expression The XPath expression.
 @param source The input source of the document to evaluate over.
 @param returnType The desired return type.
 @return The <code>Object</code> that encapsulates the result of evaluating the expression.
 @throw XPathExpressionExceptionIf expression cannot be evaluated.
 @throw IllegalArgumentExceptionIf <code>returnType</code> is not one of the types defined in <code>XPathConstants</code>.
 @throw NullPointerExceptionIf <code>expression</code>, <code>source</code> or <code>returnType</code>
    is <code>null</code>.
 */
- (id)evaluateWithNSString:(NSString *)expression
  withOrgXmlSaxInputSource:(OrgXmlSaxInputSource *)source
withJavaxXmlNamespaceQName:(JavaxXmlNamespaceQName *)returnType;

/*!
 @brief <p>Evaluate an XPath expression in the context of the specified <code>InputSource</code>
  and return the result as a <code>String</code>.
 </p>
  
 <p>This method calls <code>expression, InputSource source, QName returnType)</code> with a 
 <code>returnType</code> of <code>XPathConstants.STRING</code>.</p>
  
 <p>See <a href="#XPath-evaluation">Evaluation of XPath Expressions</a> for context item evaluation,
  variable, function and QName resolution and return type conversion.</p>
  
 <p>If <code>expression</code> or <code>source</code> is <code>null</code>,
  then a <code>NullPointerException</code> is thrown.</p>
 @param expression The XPath expression.
 @param source The  <code> InputSource </code>  of the document to evaluate over.
 @return The <code>String</code> that is the result of evaluating the expression and
    converting the result to a <code>String</code>.
 @throw XPathExpressionExceptionIf expression cannot be evaluated.
 @throw NullPointerExceptionIf <code>expression</code> or <code>source</code> is <code>null</code>.
 */
- (NSString *)evaluateWithNSString:(NSString *)expression
          withOrgXmlSaxInputSource:(OrgXmlSaxInputSource *)source;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxXmlXpathXPath)

J2OBJC_TYPE_LITERAL_HEADER(JavaxXmlXpathXPath)

#endif

#pragma pop_macro("INCLUDE_ALL_JavaxXmlXpathXPath")
