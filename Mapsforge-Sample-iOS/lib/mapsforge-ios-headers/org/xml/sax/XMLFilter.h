//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/xml/sax/XMLFilter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgXmlSaxXMLFilter")
#ifdef RESTRICT_OrgXmlSaxXMLFilter
#define INCLUDE_ALL_OrgXmlSaxXMLFilter 0
#else
#define INCLUDE_ALL_OrgXmlSaxXMLFilter 1
#endif
#undef RESTRICT_OrgXmlSaxXMLFilter

#if !defined (OrgXmlSaxXMLFilter_) && (INCLUDE_ALL_OrgXmlSaxXMLFilter || defined(INCLUDE_OrgXmlSaxXMLFilter))
#define OrgXmlSaxXMLFilter_

#define RESTRICT_OrgXmlSaxXMLReader 1
#define INCLUDE_OrgXmlSaxXMLReader 1
#include "org/xml/sax/XMLReader.h"

/*!
 @brief Interface for an XML filter.
 <blockquote>
  <em>This module, both source code and documentation, is in the
  Public Domain, and comes with <strong>NO WARRANTY</strong>.</em>
  See <a href='http://www.saxproject.org'>http://www.saxproject.org</a>
  for further information. 
 </blockquote>
 <p>An XML filter is like an XML reader, except that it obtains its
  events from another XML reader rather than a primary source like
  an XML document or database.  Filters can modify a stream of
  events as they pass on to the final application.</p>
  
 <p>The XMLFilterImpl helper class provides a convenient base
  for creating SAX2 filters, by passing on all <code>EntityResolver</code>
 , <code>DTDHandler</code>,
  <code>ContentHandler</code> and <code>ErrorHandler</code>
  events automatically.</p>
 @since SAX 2.0
 @author David Megginson
 @version 2.0.1 (sax2r2)
 - seealso: org.xml.sax.helpers.XMLFilterImpl
 */
@protocol OrgXmlSaxXMLFilter < OrgXmlSaxXMLReader, JavaObject >

/*!
 @brief Set the parent reader.
 <p>This method allows the application to link the filter to
  a parent reader (which may be another filter).  The argument
  may not be null.</p>
 @param parent The parent reader.
 */
- (void)setParentWithOrgXmlSaxXMLReader:(id<OrgXmlSaxXMLReader>)parent;

/*!
 @brief Get the parent reader.
 <p>This method allows the application to query the parent
  reader (which may be another filter).  It is generally a
  bad idea to perform any operations on the parent reader
  directly: they should all pass through this filter.</p>
 @return The parent filter, or null if none has been set.
 */
- (id<OrgXmlSaxXMLReader>)getParent;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgXmlSaxXMLFilter)

J2OBJC_TYPE_LITERAL_HEADER(OrgXmlSaxXMLFilter)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgXmlSaxXMLFilter")
