//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/xml/src/main/java/org/xmlpull/v1/XmlPullParserException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgXmlpullV1XmlPullParserException")
#ifdef RESTRICT_OrgXmlpullV1XmlPullParserException
#define INCLUDE_ALL_OrgXmlpullV1XmlPullParserException 0
#else
#define INCLUDE_ALL_OrgXmlpullV1XmlPullParserException 1
#endif
#undef RESTRICT_OrgXmlpullV1XmlPullParserException

#if !defined (OrgXmlpullV1XmlPullParserException_) && (INCLUDE_ALL_OrgXmlpullV1XmlPullParserException || defined(INCLUDE_OrgXmlpullV1XmlPullParserException))
#define OrgXmlpullV1XmlPullParserException_

#define RESTRICT_JavaLangException 1
#define INCLUDE_JavaLangException 1
#include "java/lang/Exception.h"

@protocol OrgXmlpullV1XmlPullParser;

/*!
 @brief This exception is thrown to signal XML Pull Parser related faults.
 @author <a href="http://www.extreme.indiana.edu/~aslom/">Aleksander Slominski</a>
 */
@interface OrgXmlpullV1XmlPullParserException : JavaLangException {
 @public
  NSException *detail_;
  jint row_;
  jint column_;
}

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)s;

- (instancetype)initWithNSString:(NSString *)msg
   withOrgXmlpullV1XmlPullParser:(id<OrgXmlpullV1XmlPullParser>)parser
                 withNSException:(NSException *)chain;
#define withJavaLangThrowable withNSException

- (jint)getColumnNumber;

- (NSException *)getDetail;

- (jint)getLineNumber;

- (void)printStackTrace;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgXmlpullV1XmlPullParserException)

J2OBJC_FIELD_SETTER(OrgXmlpullV1XmlPullParserException, detail_, NSException *)

FOUNDATION_EXPORT void OrgXmlpullV1XmlPullParserException_initWithNSString_(OrgXmlpullV1XmlPullParserException *self, NSString *s);

FOUNDATION_EXPORT OrgXmlpullV1XmlPullParserException *new_OrgXmlpullV1XmlPullParserException_initWithNSString_(NSString *s) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgXmlpullV1XmlPullParserException *create_OrgXmlpullV1XmlPullParserException_initWithNSString_(NSString *s);

FOUNDATION_EXPORT void OrgXmlpullV1XmlPullParserException_initWithNSString_withOrgXmlpullV1XmlPullParser_withNSException_(OrgXmlpullV1XmlPullParserException *self, NSString *msg, id<OrgXmlpullV1XmlPullParser> parser, NSException *chain);

FOUNDATION_EXPORT OrgXmlpullV1XmlPullParserException *new_OrgXmlpullV1XmlPullParserException_initWithNSString_withOrgXmlpullV1XmlPullParser_withNSException_(NSString *msg, id<OrgXmlpullV1XmlPullParser> parser, NSException *chain) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgXmlpullV1XmlPullParserException *create_OrgXmlpullV1XmlPullParserException_initWithNSString_withOrgXmlpullV1XmlPullParser_withNSException_(NSString *msg, id<OrgXmlpullV1XmlPullParser> parser, NSException *chain);

J2OBJC_TYPE_LITERAL_HEADER(OrgXmlpullV1XmlPullParserException)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgXmlpullV1XmlPullParserException")
