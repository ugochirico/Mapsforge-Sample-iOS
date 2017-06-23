//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/net/HttpCookie.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNetHttpCookie")
#ifdef RESTRICT_JavaNetHttpCookie
#define INCLUDE_ALL_JavaNetHttpCookie 0
#else
#define INCLUDE_ALL_JavaNetHttpCookie 1
#endif
#undef RESTRICT_JavaNetHttpCookie

#if !defined (JavaNetHttpCookie_) && (INCLUDE_ALL_JavaNetHttpCookie || defined(INCLUDE_JavaNetHttpCookie))
#define JavaNetHttpCookie_

@class JavaUtilTimeZone;
@protocol JavaUtilList;
@protocol JavaUtilMap;

/*!
 @brief An HttpCookie object represents an http cookie, which carries state
  information between server and user agent.Cookie is widely adopted
  to create stateful sessions.
 <p>There are 3 http cookie specifications: 
 <blockquote>
    Netscape draft<br>
    RFC 2109 - <a href="http://www.ietf.org/rfc/rfc2109.txt">
  <i>http://www.ietf.org/rfc/rfc2109.txt</i></a><br>
    RFC 2965 - <a href="http://www.ietf.org/rfc/rfc2965.txt">
  <i>http://www.ietf.org/rfc/rfc2965.txt</i></a>
  </blockquote>
  
 <p>HttpCookie class can accept all these 3 forms of syntax.
 @author Edward Wang
 @since 1.6
 */
@interface JavaNetHttpCookie : NSObject < NSCopying > {
 @public
  /*!
   @brief The original header this cookie was consructed from, if it was
  constructed by parsing a header, otherwise null.
   */
  NSString *header_;
}

#pragma mark Public

/*!
 @brief Constructs a cookie with a specified name and value.
 <p>The name must conform to RFC 2965. That means it can contain
  only ASCII alphanumeric characters and cannot contain commas,
  semicolons, or white space or begin with a $ character. The cookie's
  name cannot be changed after creation. 
 <p>The value can be anything the server chooses to send. Its
  value is probably of interest only to the server. The cookie's
  value can be changed after creation with the 
 <code>setValue</code> method. 
 <p>By default, cookies are created according to the RFC 2965
  cookie specification. The version can be changed with the 
 <code>setVersion</code> method.
 @param name a  <code> String </code>  specifying the name of the cookie
 @param value a  <code> String </code>  specifying the value of the cookie
 @throw IllegalArgumentExceptionif the cookie name contains illegal characters
                                   or it is one of the tokens reserved for use
                                   by the cookie protocol
 @throw NullPointerExceptionif <tt>name</tt> is <tt>null</tt>
 - seealso: #setValue
 - seealso: #setVersion
 */
- (instancetype)initWithNSString:(NSString *)name
                    withNSString:(NSString *)value;

/*!
 @brief Create and return a copy of this object.
 @return a clone of this http cookie
 */
- (id)java_clone;

/*!
 @brief The utility method to check whether a host name is in a domain
  or not.
 <p>This concept is described in the cookie specification.
  To understand the concept, some terminologies need to be defined first: 
 <blockquote>
  effective host name = hostname if host name contains dot<br>
  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;or = hostname.local if not 
 </blockquote>
  <p>Host A's name domain-matches host B's if: 
 <blockquote><ul>
    <li>their host name strings string-compare equal; or</li>
    <li>A is a HDN string and has the form NB, where N is a non-empty
    name string, B has the form .B', and B' is a HDN string.  (So,
    x.y.com domain-matches .Y.com but not Y.com.)</li>
  </ul></blockquote>
  
 <p>A host isn't in a domain (RFC 2965 sec. 3.3.2) if: 
 <blockquote><ul>
    <li>The value for the Domain attribute contains no embedded dots,
    and the value is not .local.</li>
    <li>The effective host name that derives from the request-host does
    not domain-match the Domain attribute.</li>
    <li>The request-host is a HDN (not IP address) and has the form HD,
    where D is the value of the Domain attribute, and H is a string
    that contains one or more dots.</li>
  </ul></blockquote>
  
 <p>Examples:
  <blockquote><ul>
    <li>A Set-Cookie2 from request-host y.x.foo.com for Domain=.foo.com
    would be rejected, because H is y.x and contains a dot.</li>
    <li>A Set-Cookie2 from request-host x.foo.com for Domain=.foo.com
    would be accepted.</li>
    <li>A Set-Cookie2 with Domain=.com or Domain=.com., will always be
    rejected, because there is no embedded dot.</li>
    <li>A Set-Cookie2 with Domain=ajax.com will be accepted, and the
    value for Domain will be taken to be .ajax.com, because a dot
    gets prepended to the value.</li>
    <li>A Set-Cookie2 from request-host example for Domain=.local will
    be accepted, because the effective host name for the request-
    host is example.local, and example.local domain-matches .local.</li>
  </ul></blockquote>
 @param domain the domain name to check host name with
 @param host the host name in question
 @return <tt>true</tt> if they domain-matches; <tt>false</tt> if not
 */
+ (jboolean)domainMatchesWithNSString:(NSString *)domain
                         withNSString:(NSString *)host;

/*!
 @brief Test the equality of two http cookies.
 <p> The result is <tt>true</tt> only if two cookies
  come from same domain (case-insensitive),
  have same name (case-insensitive),
  and have same path (case-sensitive).
 @return <tt>true</tt> if 2 http cookies equal to each other;
                   otherwise, <tt>false</tt>
 */
- (jboolean)isEqual:(id)obj;

/*!
 @brief Returns the comment describing the purpose of this cookie, or 
 <code>null</code> if the cookie has no comment.
 @return a <code>String</code> containing the comment,
                           or <code>null</code> if none
 - seealso: #setComment
 */
- (NSString *)getComment;

/*!
 @brief Returns the comment url describing the purpose of this cookie, or 
 <code>null</code> if the cookie has no comment url.
 @return a <code>String</code> containing the comment url,
                           or <code>null</code> if none
 - seealso: #setCommentURL
 */
- (NSString *)getCommentURL;

/*!
 @brief Return the discard attribute of the cookie
 @return a <tt>boolean</tt> to represent this cookie's discard attribute
 - seealso: #setDiscard
 */
- (jboolean)getDiscard;

/*!
 @brief Returns the domain name set for this cookie.The form of
  the domain name is set by RFC 2965.
 @return a <code>String</code> containing the domain name
 - seealso: #setDomain
 */
- (NSString *)getDomain;

/*!
 @brief Returns the maximum age of the cookie, specified in seconds.
 By default, <code>-1</code> indicating the cookie will persist
  until browser shutdown.
 @return an integer specifying the maximum age of the
                           cookie in seconds
 - seealso: #setMaxAge
 */
- (jlong)getMaxAge;

/*!
 @brief Returns the name of the cookie.The name cannot be changed after
  creation.
 @return a <code>String</code> specifying the cookie's name
 */
- (NSString *)getName;

/*!
 @brief Returns the path on the server
  to which the browser returns this cookie.The
  cookie is visible to all subpaths on the server.
 @return a <code>String</code> specifying a path that contains
                   a servlet name, for example, <i>/catalog</i>
 - seealso: #setPath
 */
- (NSString *)getPath;

/*!
 @brief Return the port list attribute of the cookie
 @return a <tt>String</tt> contains the port list
           or <tt>null</tt> if none
 - seealso: #setPortlist
 */
- (NSString *)getPortlist;

/*!
 @brief Returns <code>true</code> if sending this cookie should be
  restricted to a secure protocol, or <code>false</code> if the
  it can be sent using any protocol.
 @return <code>false</code> if the cookie can be sent over
                   any standard protocol; otherwise, <code>true</code>
 - seealso: #setSecure
 */
- (jboolean)getSecure;

/*!
 @brief Returns the value of the cookie.
 @return a <code>String</code> containing the cookie's
                           present value
 - seealso: #setValue
 */
- (NSString *)getValue;

/*!
 @brief Returns the version of the protocol this cookie complies
  with.Version 1 complies with RFC 2965/2109,
  and version 0 complies with the original
  cookie specification drafted by Netscape.
 Cookies provided
  by a browser use and identify the browser's cookie version.
 @return 0 if the cookie complies with the
                           original Netscape specification; 1
                           if the cookie complies with RFC 2965/2109
 - seealso: #setVersion
 */
- (jint)getVersion;

/*!
 @brief Reports whether this http cookie has expired or not.
 @return <tt>true</tt> to indicate this http cookie has expired;
           otherwise, <tt>false</tt>
 */
- (jboolean)hasExpired;

/*!
 @brief Return hash code of this http cookie.The result is the sum of
  hash code value of three significant components of this cookie:
  name, domain, and path.
 That is, the hash code is the value of the expression: 
 <blockquote>
  getName().toLowerCase().hashCode()<br>
  + getDomain().toLowerCase().hashCode()<br>
  + getPath().hashCode() 
 </blockquote>
 @return this http cookie's hash code
 */
- (NSUInteger)hash;

/*!
 @brief Returns <code>true</code> if this cookie contains the <i>HttpOnly</i>
  attribute.This means that the cookie should not be accessible to
  scripting engines, like javascript.
 @return <code>true</code> if this cookie should be considered http only.
 - seealso: #setHttpOnly(boolean)
 */
- (jboolean)isHttpOnly;

/*!
 @brief Constructs cookies from set-cookie or set-cookie2 header string.
 RFC 2965 section 3.2.2 set-cookie2 syntax indicates that one header line
  may contain more than one cookie definitions, so this is a static
  utility method instead of another constructor.
 @param header a  <tt> String </tt>  specifying the set-cookie header.
                    The header should start with "set-cookie", or "set-cookie2"                   token; or it should have no leading token at all.
 @return a List of cookie parsed from header line string
 @throw IllegalArgumentExceptionif header string violates the cookie
                                   specification's syntax, or the cookie
                                   name contains llegal characters, or
                                   the cookie name is one of the tokens
                                   reserved for use by the cookie protocol
 @throw NullPointerExceptionif the header string is <tt>null</tt>
 */
+ (id<JavaUtilList>)parseWithNSString:(NSString *)header;

/*!
 */
+ (id<JavaUtilList>)parseWithNSString:(NSString *)header
                          withBoolean:(jboolean)retainHeader;

/*!
 @brief Specifies a comment that describes a cookie's purpose.
 The comment is useful if the browser presents the cookie
  to the user. Comments
  are not supported by Netscape Version 0 cookies.
 @param purpose a  <code> String </code>  specifying the comment                           to display to the user
 - seealso: #getComment
 */
- (void)setCommentWithNSString:(NSString *)purpose;

/*!
 @brief Specifies a comment url that describes a cookie's purpose.
 The comment url is useful if the browser presents the cookie
  to the user. Comment url is RFC 2965 only.
 @param purpose a  <code> String </code>  specifying the comment url                           to display to the user
 - seealso: #getCommentURL
 */
- (void)setCommentURLWithNSString:(NSString *)purpose;

/*!
 @brief Specify whether user agent should discard the cookie unconditionally.
 This is RFC 2965 only attribute.
 @param discard <tt> true </tt>  indicates to discard cookie unconditionally
 - seealso: #getDiscard
 */
- (void)setDiscardWithBoolean:(jboolean)discard;

/*!
 @brief Specifies the domain within which this cookie should be presented.
 <p>The form of the domain name is specified by RFC 2965. A domain
  name begins with a dot (<code>.foo.com</code>) and means that
  the cookie is visible to servers in a specified Domain Name System
  (DNS) zone (for example, <code>www.foo.com</code>, but not 
 <code>a.b.foo.com</code>). By default, cookies are only returned
  to the server that sent them.
 @param pattern a  <code> String </code>  containing the domain name                           within which this cookie is visible;
                            form is according to RFC 2965
 - seealso: #getDomain
 */
- (void)setDomainWithNSString:(NSString *)pattern;

/*!
 @brief Indicates whether the cookie should be considered HTTP Only.If set to 
 <code>true</code> it means the cookie should not be accessible to scripting
  engines like javascript.
 @param httpOnly if <code>true</code>  make the cookie HTTP only, i.e.
                   only visible as part of an HTTP request.
 - seealso: #isHttpOnly()
 */
- (void)setHttpOnlyWithBoolean:(jboolean)httpOnly;

/*!
 @brief Sets the maximum age of the cookie in seconds.
 <p>A positive value indicates that the cookie will expire
  after that many seconds have passed. Note that the value is the 
 <i>maximum</i> age when the cookie will expire, not the cookie's
  current age. 
 <p>A negative value means
  that the cookie is not stored persistently and will be deleted
  when the Web browser exits. A zero value causes the cookie
  to be deleted.
 @param expiry an integer specifying the maximum age of the                           cookie in seconds; if zero, the cookie
                            should be discarded immediately;
                            otherwise, the cookie's max age is unspecified.
 - seealso: #getMaxAge
 */
- (void)setMaxAgeWithLong:(jlong)expiry;

/*!
 @brief Specifies a path for the cookie
  to which the client should return the cookie.
 <p>The cookie is visible to all the pages in the directory
  you specify, and all the pages in that directory's subdirectories.
  A cookie's path must include the servlet that set the cookie,
  for example, <i>/catalog</i>, which makes the cookie
  visible to all directories on the server under <i>/catalog</i>.
  
 <p>Consult RFC 2965 (available on the Internet) for more
  information on setting path names for cookies.
 @param uri a  <code> String </code>  specifying a path
 - seealso: #getPath
 */
- (void)setPathWithNSString:(NSString *)uri;

/*!
 @brief Specify the portlist of the cookie, which restricts the port(s)
  to which a cookie may be sent back in a Cookie header.
 @param ports a  <tt> String </tt>  specify the port list, which is                   comma seperated series of digits
 - seealso: #getPortlist
 */
- (void)setPortlistWithNSString:(NSString *)ports;

/*!
 @brief Indicates whether the cookie should only be sent using a secure protocol,
  such as HTTPS or SSL.
 <p>The default value is <code>false</code>.
 @param flag If  <code> true </code> , the cookie can only be sent over                   a secure protocol like https.
                    If 
  <code> false </code> , it can be sent over any protocol.
 - seealso: #getSecure
 */
- (void)setSecureWithBoolean:(jboolean)flag;

/*!
 @brief Assigns a new value to a cookie after the cookie is created.
 If you use a binary value, you may want to use BASE64 encoding. 
 <p>With Version 0 cookies, values should not contain white
  space, brackets, parentheses, equals signs, commas,
  double quotes, slashes, question marks, at signs, colons,
  and semicolons. Empty values may not behave the same way
  on all browsers.
 @param newValue a  <code> String </code>  specifying the new value
 - seealso: #getValue
 */
- (void)setValueWithNSString:(NSString *)newValue;

/*!
 @brief Sets the version of the cookie protocol this cookie complies
  with.Version 0 complies with the original Netscape cookie
  specification.
 Version 1 complies with RFC 2965/2109.
 @param v 0 if the cookie should comply with                           the original Netscape specification;
                            1 if the cookie should comply with RFC 2965/2109
 @throw IllegalArgumentExceptionif <tt>v</tt> is neither 0 nor 1
 - seealso: #getVersion
 */
- (void)setVersionWithInt:(jint)v;

/*!
 @brief Constructs a cookie header string representation of this cookie,
  which is in the format defined by corresponding cookie specification,
  but without the leading "Cookie:" token.
 @return a string form of the cookie. The string has the defined format
 */
- (NSString *)description;

@end

J2OBJC_STATIC_INIT(JavaNetHttpCookie)

J2OBJC_FIELD_SETTER(JavaNetHttpCookie, header_, NSString *)

inline id<JavaUtilMap> JavaNetHttpCookie_get_assignors();
inline id<JavaUtilMap> JavaNetHttpCookie_set_assignors(id<JavaUtilMap> value);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT id<JavaUtilMap> JavaNetHttpCookie_assignors;
J2OBJC_STATIC_FIELD_OBJ(JavaNetHttpCookie, assignors, id<JavaUtilMap>)

inline JavaUtilTimeZone *JavaNetHttpCookie_get_GMT();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaUtilTimeZone *JavaNetHttpCookie_GMT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaNetHttpCookie, GMT, JavaUtilTimeZone *)

FOUNDATION_EXPORT void JavaNetHttpCookie_initWithNSString_withNSString_(JavaNetHttpCookie *self, NSString *name, NSString *value);

FOUNDATION_EXPORT JavaNetHttpCookie *new_JavaNetHttpCookie_initWithNSString_withNSString_(NSString *name, NSString *value) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetHttpCookie *create_JavaNetHttpCookie_initWithNSString_withNSString_(NSString *name, NSString *value);

FOUNDATION_EXPORT id<JavaUtilList> JavaNetHttpCookie_parseWithNSString_(NSString *header);

FOUNDATION_EXPORT id<JavaUtilList> JavaNetHttpCookie_parseWithNSString_withBoolean_(NSString *header, jboolean retainHeader);

FOUNDATION_EXPORT jboolean JavaNetHttpCookie_domainMatchesWithNSString_withNSString_(NSString *domain, NSString *host);

J2OBJC_TYPE_LITERAL_HEADER(JavaNetHttpCookie)

#endif

#if !defined (JavaNetHttpCookie_CookieAttributeAssignor_) && (INCLUDE_ALL_JavaNetHttpCookie || defined(INCLUDE_JavaNetHttpCookie_CookieAttributeAssignor))
#define JavaNetHttpCookie_CookieAttributeAssignor_

@class JavaNetHttpCookie;

@protocol JavaNetHttpCookie_CookieAttributeAssignor < JavaObject >

- (void)assignWithJavaNetHttpCookie:(JavaNetHttpCookie *)cookie
                       withNSString:(NSString *)attrName
                       withNSString:(NSString *)attrValue;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetHttpCookie_CookieAttributeAssignor)

J2OBJC_TYPE_LITERAL_HEADER(JavaNetHttpCookie_CookieAttributeAssignor)

#endif

#pragma pop_macro("INCLUDE_ALL_JavaNetHttpCookie")
