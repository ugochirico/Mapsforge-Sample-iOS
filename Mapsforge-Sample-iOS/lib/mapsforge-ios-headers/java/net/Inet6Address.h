//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/Inet6Address.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNetInet6Address")
#ifdef RESTRICT_JavaNetInet6Address
#define INCLUDE_ALL_JavaNetInet6Address 0
#else
#define INCLUDE_ALL_JavaNetInet6Address 1
#endif
#undef RESTRICT_JavaNetInet6Address

#if !defined (JavaNetInet6Address_) && (INCLUDE_ALL_JavaNetInet6Address || defined(INCLUDE_JavaNetInet6Address))
#define JavaNetInet6Address_

#define RESTRICT_JavaNetInetAddress 1
#define INCLUDE_JavaNetInetAddress 1
#include "java/net/InetAddress.h"

@class IOSByteArray;
@class JavaNetNetworkInterface;

/*!
 @brief An IPv6 address.See <code>InetAddress</code>.
 */
@interface JavaNetInet6Address : JavaNetInetAddress

#pragma mark Public

/*!
 @brief Constructs an IPv6 address according to the given <code>host</code>, <code>addr</code>
  and <code>scope_id</code>.
 @param host the host name associated with the address.
 @param addr the network address.
 @param scope_id the scope id for link- or site-local addresses.
 @return the Inet6Address instance representing the IP address.
 @throw UnknownHostException
 if the address is null or has an invalid length.
 */
+ (JavaNetInet6Address *)getByAddressWithNSString:(NSString *)host
                                    withByteArray:(IOSByteArray *)addr
                                          withInt:(jint)scope_id;

/*!
 @brief Gets an IPv6 address instance according to the given <code>host</code>,
  <code>addr</code> and <code>nif</code>.
 <code>scope_id</code> is set according to the
  given <code>nif</code> and the <code>addr</code> type (for example site-local or
  link-local).
 @param host the hostname associated with the address.
 @param addr the network address.
 @param nif the network interface that this address is associated with.
 @return the Inet6Address instance representing the IP address.
 @throw UnknownHostException
 if the address is <code>null</code> or has an invalid length or
              the interface doesn't have a numeric scope id for the given
              address type.
 */
+ (JavaNetInet6Address *)getByAddressWithNSString:(NSString *)host
                                    withByteArray:(IOSByteArray *)addr
                      withJavaNetNetworkInterface:(JavaNetNetworkInterface *)nif;

/*!
 @brief Returns the network interface if this address is instanced with a scoped
  network interface, null otherwise.
 */
- (JavaNetNetworkInterface *)getScopedInterface;

/*!
 @brief Returns the scope id if this address is scoped to an interface, 0 otherwise.
 */
- (jint)getScopeId;

- (jboolean)isAnyLocalAddress;

/*!
 @brief Returns whether this IPv6 address is an IPv4-compatible address or not.
 An IPv4-compatible address has the prefix <code>::/96</code> and is a deprecated
  and no-longer used equivalent of the modern IPv4-mapped IPv6 addresses.
 */
- (jboolean)isIPv4CompatibleAddress;

- (jboolean)isLinkLocalAddress;

- (jboolean)isLoopbackAddress;

- (jboolean)isMCGlobal;

- (jboolean)isMCLinkLocal;

- (jboolean)isMCNodeLocal;

- (jboolean)isMCOrgLocal;

- (jboolean)isMCSiteLocal;

- (jboolean)isMulticastAddress;

- (jboolean)isSiteLocalAddress;

- (NSString *)description;

#pragma mark Package-Private

/*!
 @brief Constructs an <code>InetAddress</code> representing the <code>address</code> and 
 <code>name</code> and <code>scope_id</code>.
 @param address the network address.
 @param name the name associated with the address.
 @param scope_id the scope id for link- or site-local addresses.
 */
- (instancetype)initWithByteArray:(IOSByteArray *)ipaddress
                     withNSString:(NSString *)hostName
                          withInt:(jint)scope_id;

@end

J2OBJC_STATIC_INIT(JavaNetInet6Address)

/*!
 */
inline JavaNetInetAddress *JavaNetInet6Address_get_ANY();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaNetInetAddress *JavaNetInet6Address_ANY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaNetInet6Address, ANY, JavaNetInetAddress *)

/*!
 */
inline JavaNetInetAddress *JavaNetInet6Address_get_LOOPBACK();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaNetInetAddress *JavaNetInet6Address_LOOPBACK;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaNetInet6Address, LOOPBACK, JavaNetInetAddress *)

FOUNDATION_EXPORT void JavaNetInet6Address_initWithByteArray_withNSString_withInt_(JavaNetInet6Address *self, IOSByteArray *ipaddress, NSString *hostName, jint scope_id);

FOUNDATION_EXPORT JavaNetInet6Address *new_JavaNetInet6Address_initWithByteArray_withNSString_withInt_(IOSByteArray *ipaddress, NSString *hostName, jint scope_id) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetInet6Address *create_JavaNetInet6Address_initWithByteArray_withNSString_withInt_(IOSByteArray *ipaddress, NSString *hostName, jint scope_id);

FOUNDATION_EXPORT JavaNetInet6Address *JavaNetInet6Address_getByAddressWithNSString_withByteArray_withInt_(NSString *host, IOSByteArray *addr, jint scope_id);

FOUNDATION_EXPORT JavaNetInet6Address *JavaNetInet6Address_getByAddressWithNSString_withByteArray_withJavaNetNetworkInterface_(NSString *host, IOSByteArray *addr, JavaNetNetworkInterface *nif);

J2OBJC_TYPE_LITERAL_HEADER(JavaNetInet6Address)

#endif

#pragma pop_macro("INCLUDE_ALL_JavaNetInet6Address")
