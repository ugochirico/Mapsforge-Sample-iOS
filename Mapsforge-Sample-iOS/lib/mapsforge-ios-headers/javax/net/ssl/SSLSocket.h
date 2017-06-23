//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/net/ssl/SSLSocket.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxNetSslSSLSocket")
#ifdef RESTRICT_JavaxNetSslSSLSocket
#define INCLUDE_ALL_JavaxNetSslSSLSocket 0
#else
#define INCLUDE_ALL_JavaxNetSslSSLSocket 1
#endif
#undef RESTRICT_JavaxNetSslSSLSocket

#if !defined (JavaxNetSslSSLSocket_) && (INCLUDE_ALL_JavaxNetSslSSLSocket || defined(INCLUDE_JavaxNetSslSSLSocket))
#define JavaxNetSslSSLSocket_

#define RESTRICT_JavaNetSocket 1
#define INCLUDE_JavaNetSocket 1
#include "java/net/Socket.h"

@class IOSObjectArray;
@class JavaNetInetAddress;
@class JavaxNetSslSSLParameters;
@protocol JavaxNetSslHandshakeCompletedListener;
@protocol JavaxNetSslSSLSession;

/*!
 @brief The extension of <code>Socket</code> providing secure protocols like SSL (Secure
  Sockets Layer) or TLS (Transport Layer Security).
 <h3>Default configuration</h3>
  <p><code>SSLSocket</code> instances obtained from default <code>SSLSocketFactory</code>,
  <code>SSLServerSocketFactory</code>, and <code>SSLContext</code> are configured as follows: 
 <h4>Protocols</h4>
  
 <p>Client socket: 
 <table>
      <thead>
          <tr>
              <th>Protocol</th>
              <th>Supported (API Levels)</th>
              <th>Enabled by default (API Levels)</th>
          </tr>
      </thead>
      <tbody>
          <tr>
              <td>SSLv3</td>
              <td>1+</td>
              <td>1+</td>
          </tr>
          <tr>
              <td>TLSv1</td>
              <td>1+</td>
              <td>1+</td>
          </tr>
          <tr>
              <td>TLSv1.1</td>
              <td>16+</td>
              <td>20+</td>
          </tr>
          <tr>
              <td>TLSv1.2</td>
              <td>16+</td>
              <td>20+</td>
          </tr>
      </tbody>
  </table>
  
 <p>Server socket: 
 <table>
      <thead>
          <tr>
              <th>Protocol</th>
              <th>Supported (API Levels)</th>
              <th>Enabled by default (API Levels)</th>
          </tr>
      </thead>
      <tbody>
          <tr>
              <td>SSLv3</td>
              <td>1+</td>
              <td>1+</td>
          </tr>
          <tr>
              <td>TLSv1</td>
              <td>1+</td>
              <td>1+</td>
          </tr>
          <tr>
              <td>TLSv1.1</td>
              <td>16+</td>
              <td>16+</td>
          </tr>
          <tr>
              <td>TLSv1.2</td>
              <td>16+</td>
              <td>16+</td>
          </tr>
      </tbody>
  </table>
  
 <h4>Cipher suites</h4>
  
 <p>Methods that operate with cipher suite names (for example, 
 <code>getSupportedCipherSuites</code>,
  <code>setEnabledCipherSuites</code>) have used
  standard names for cipher suites since API Level 9, as listed in the table
  below. Prior to API Level 9, non-standard (OpenSSL) names had been used (see
  the table following this table). 
 <!-- STOPSHIP: Update this table to reflect the removal of DSS cipher suites. -->
  <table>
      <thead>
          <tr>
              <th>Cipher suite</th>
              <th>Supported (API Levels)</th>
              <th>Enabled by default (API Levels)</th>
          </tr>
      </thead>
      <tbody>
          <tr>
              <td>SSL_DHE_DSS_EXPORT_WITH_DES40_CBC_SHA</td>
              <td>9+</td>
              <td>9-19</td>
          </tr>
          <tr>
              <td>SSL_DHE_DSS_WITH_3DES_EDE_CBC_SHA</td>
              <td>9+</td>
              <td>9-19</td>
          </tr>
          <tr>
              <td>SSL_DHE_DSS_WITH_DES_CBC_SHA</td>
              <td>9+</td>
              <td>9-19</td>
          </tr>
          <tr>
              <td>SSL_DHE_RSA_EXPORT_WITH_DES40_CBC_SHA</td>
              <td>9+</td>
              <td>9-19</td>
          </tr>
          <tr>
              <td>SSL_DHE_RSA_WITH_3DES_EDE_CBC_SHA</td>
              <td>9+</td>
              <td>9-19</td>
          </tr>
          <tr>
              <td>SSL_DHE_RSA_WITH_DES_CBC_SHA</td>
              <td>9+</td>
              <td>9-19</td>
          </tr>
          <tr>
              <td>SSL_DH_anon_EXPORT_WITH_DES40_CBC_SHA</td>
              <td>9+</td>
              <td></td>
          </tr>
          <tr>
              <td>SSL_DH_anon_EXPORT_WITH_RC4_40_MD5</td>
              <td>9+</td>
              <td></td>
          </tr>
          <tr>
              <td>SSL_DH_anon_WITH_3DES_EDE_CBC_SHA</td>
              <td>9+</td>
              <td></td>
          </tr>
          <tr>
              <td>SSL_DH_anon_WITH_DES_CBC_SHA</td>
              <td>9+</td>
              <td></td>
          </tr>
          <tr>
              <td>SSL_DH_anon_WITH_RC4_128_MD5</td>
              <td>9+</td>
              <td></td>
          </tr>
          <tr>
              <td>SSL_RSA_EXPORT_WITH_DES40_CBC_SHA</td>
              <td>9+</td>
              <td>9-19</td>
          </tr>
          <tr>
              <td>SSL_RSA_EXPORT_WITH_RC4_40_MD5</td>
              <td>9+</td>
              <td>9-19</td>
          </tr>
          <tr>
              <td>SSL_RSA_WITH_3DES_EDE_CBC_SHA</td>
              <td>9+</td>
              <td>9-19</td>
          </tr>
          <tr>
              <td>SSL_RSA_WITH_DES_CBC_SHA</td>
              <td>9+</td>
              <td>9-19</td>
          </tr>
          <tr>
              <td>SSL_RSA_WITH_NULL_MD5</td>
              <td>9+</td>
              <td></td>
          </tr>
          <tr>
              <td>SSL_RSA_WITH_NULL_SHA</td>
              <td>9+</td>
              <td></td>
          </tr>
          <tr>
              <td>SSL_RSA_WITH_RC4_128_MD5</td>
              <td>9+</td>
              <td>9-19</td>
          </tr>
          <tr>
              <td>SSL_RSA_WITH_RC4_128_SHA</td>
              <td>9+</td>
              <td>9+</td>
          </tr>
          <tr>
              <td>TLS_DHE_DSS_WITH_AES_128_CBC_SHA</td>
              <td>9+</td>
              <td>9+</td>
          </tr>
          <tr>
              <td>TLS_DHE_DSS_WITH_AES_128_CBC_SHA256</td>
              <td>20+</td>
              <td></td>
          </tr>
          <tr>
              <td>TLS_DHE_DSS_WITH_AES_128_GCM_SHA256</td>
              <td>20+</td>
              <td></td>
          </tr>
          <tr>
              <td>TLS_DHE_DSS_WITH_AES_256_CBC_SHA</td>
              <td>9+</td>
              <td>11+</td>
          </tr>
          <tr>
              <td>TLS_DHE_DSS_WITH_AES_256_CBC_SHA256</td>
              <td>20+</td>
              <td></td>
          </tr>
          <tr>
              <td>TLS_DHE_DSS_WITH_AES_256_GCM_SHA384</td>
              <td>20+</td>
              <td></td>
          </tr>
          <tr>
              <td>TLS_DHE_RSA_WITH_AES_128_CBC_SHA</td>
              <td>9+</td>
              <td>9+</td>
          </tr>
          <tr>
              <td>TLS_DHE_RSA_WITH_AES_128_CBC_SHA256</td>
              <td>20+</td>
              <td></td>
          </tr>
          <tr>
              <td>TLS_DHE_RSA_WITH_AES_128_GCM_SHA256</td>
              <td>20+</td>
              <td>20+</td>
          </tr>
          <tr>
              <td>TLS_DHE_RSA_WITH_AES_256_CBC_SHA</td>
              <td>9+</td>
              <td>11+</td>
          </tr>
          <tr>
              <td>TLS_DHE_RSA_WITH_AES_256_CBC_SHA256</td>
              <td>20+</td>
              <td></td>
          </tr>
          <tr>
              <td>TLS_DHE_RSA_WITH_AES_256_GCM_SHA384</td>
              <td>20+</td>
              <td>20+</td>
          </tr>
          <tr>
              <td>TLS_DH_anon_WITH_AES_128_CBC_SHA</td>
              <td>9+</td>
              <td></td>
          </tr>
          <tr>
              <td>TLS_DH_anon_WITH_AES_128_CBC_SHA256</td>
              <td>20+</td>
              <td></td>
          </tr>
          <tr>
              <td>TLS_DH_anon_WITH_AES_128_GCM_SHA256</td>
              <td>20+</td>
              <td></td>
          </tr>
          <tr>
              <td>TLS_DH_anon_WITH_AES_256_CBC_SHA</td>
              <td>9+</td>
              <td></td>
          </tr>
          <tr>
              <td>TLS_DH_anon_WITH_AES_256_CBC_SHA256</td>
              <td>20+</td>
              <td></td>
          </tr>
          <tr>
              <td>TLS_DH_anon_WITH_AES_256_GCM_SHA384</td>
              <td>20+</td>
              <td></td>
          </tr>
          <tr>
              <td>TLS_ECDHE_ECDSA_WITH_3DES_EDE_CBC_SHA</td>
              <td>11+</td>
              <td>11-19</td>
          </tr>
          <tr>
              <td>TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA</td>
              <td>11+</td>
              <td>11+</td>
          </tr>
          <tr>
              <td>TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA256</td>
              <td>20+</td>
              <td></td>
          </tr>
          <tr>
              <td>TLS_ECDHE_ECDSA_WITH_AES_128_GCM_SHA256</td>
              <td>20+</td>
              <td>20+</td>
          </tr>
          <tr>
              <td>TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA</td>
              <td>11+</td>
              <td>11+</td>
          </tr>
          <tr>
              <td>TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA384</td>
              <td>20+</td>
              <td></td>
          </tr>
          <tr>
              <td>TLS_ECDHE_ECDSA_WITH_AES_256_GCM_SHA384</td>
              <td>20+</td>
              <td>20+</td>
          </tr>
          <tr>
              <td>TLS_ECDHE_ECDSA_WITH_NULL_SHA</td>
              <td>11+</td>
              <td></td>
          </tr>
          <tr>
              <td>TLS_ECDHE_ECDSA_WITH_RC4_128_SHA</td>
              <td>11+</td>
              <td>11+</td>
          </tr>
          <tr>
              <td>TLS_ECDHE_PSK_WITH_AES_128_CBC_SHA</td>
              <td>21+</td>
              <td>21+</td>
          </tr>
          <tr>
              <td>TLS_ECDHE_PSK_WITH_AES_256_CBC_SHA</td>
              <td>21+</td>
              <td>21+</td>
          </tr>
          <tr>
              <td>TLS_ECDHE_RSA_WITH_3DES_EDE_CBC_SHA</td>
              <td>11+</td>
              <td>11-19</td>
          </tr>
          <tr>
              <td>TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA</td>
              <td>11+</td>
              <td>11+</td>
          </tr>
          <tr>
              <td>TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA256</td>
              <td>20+</td>
              <td></td>
          </tr>
          <tr>
              <td>TLS_ECDHE_RSA_WITH_AES_128_GCM_SHA256</td>
              <td>20+</td>
              <td>20+</td>
          </tr>
          <tr>
              <td>TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA</td>
              <td>11+</td>
              <td>11+</td>
          </tr>
          <tr>
              <td>TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA384</td>
              <td>20+</td>
              <td></td>
          </tr>
          <tr>
              <td>TLS_ECDHE_RSA_WITH_AES_256_GCM_SHA384</td>
              <td>20+</td>
              <td>20+</td>
          </tr>
          <tr>
              <td>TLS_ECDHE_RSA_WITH_NULL_SHA</td>
              <td>11+</td>
              <td></td>
          </tr>
          <tr>
              <td>TLS_ECDHE_RSA_WITH_RC4_128_SHA</td>
              <td>11+</td>
              <td>11+</td>
          </tr>
          <tr>
              <td>TLS_ECDH_ECDSA_WITH_3DES_EDE_CBC_SHA</td>
              <td>11+</td>
              <td>11-19</td>
          </tr>
          <tr>
              <td>TLS_ECDH_ECDSA_WITH_AES_128_CBC_SHA</td>
              <td>11+</td>
              <td>11-19</td>
          </tr>
          <tr>
              <td>TLS_ECDH_ECDSA_WITH_AES_128_CBC_SHA256</td>
              <td>20+</td>
              <td></td>
          </tr>
          <tr>
              <td>TLS_ECDH_ECDSA_WITH_AES_128_GCM_SHA256</td>
              <td>20+</td>
              <td></td>
          </tr>
          <tr>
              <td>TLS_ECDH_ECDSA_WITH_AES_256_CBC_SHA</td>
              <td>11+</td>
              <td>11-19</td>
          </tr>
          <tr>
              <td>TLS_ECDH_ECDSA_WITH_AES_256_CBC_SHA384</td>
              <td>20+</td>
              <td></td>
          </tr>
          <tr>
              <td>TLS_ECDH_ECDSA_WITH_AES_256_GCM_SHA384</td>
              <td>20+</td>
              <td></td>
          </tr>
          <tr>
              <td>TLS_ECDH_ECDSA_WITH_NULL_SHA</td>
              <td>11+</td>
              <td></td>
          </tr>
          <tr>
              <td>TLS_ECDH_ECDSA_WITH_RC4_128_SHA</td>
              <td>11+</td>
              <td>11-19</td>
          </tr>
          <tr>
              <td>TLS_ECDH_RSA_WITH_3DES_EDE_CBC_SHA</td>
              <td>11+</td>
              <td>11-19</td>
          </tr>
          <tr>
              <td>TLS_ECDH_RSA_WITH_AES_128_CBC_SHA</td>
              <td>11+</td>
              <td>11-19</td>
          </tr>
          <tr>
              <td>TLS_ECDH_RSA_WITH_AES_128_CBC_SHA256</td>
              <td>20+</td>
              <td></td>
          </tr>
          <tr>
              <td>TLS_ECDH_RSA_WITH_AES_128_GCM_SHA256</td>
              <td>20+</td>
              <td></td>
          </tr>
          <tr>
              <td>TLS_ECDH_RSA_WITH_AES_256_CBC_SHA</td>
              <td>11+</td>
              <td>11-19</td>
          </tr>
          <tr>
              <td>TLS_ECDH_RSA_WITH_AES_256_CBC_SHA384</td>
              <td>20+</td>
              <td></td>
          </tr>
          <tr>
              <td>TLS_ECDH_RSA_WITH_AES_256_GCM_SHA384</td>
              <td>20+</td>
              <td></td>
          </tr>
          <tr>
              <td>TLS_ECDH_RSA_WITH_NULL_SHA</td>
              <td>11+</td>
              <td></td>
          </tr>
          <tr>
              <td>TLS_ECDH_RSA_WITH_RC4_128_SHA</td>
              <td>11+</td>
              <td>11-19</td>
          </tr>
          <tr>
              <td>TLS_ECDH_anon_WITH_3DES_EDE_CBC_SHA</td>
              <td>11+</td>
              <td></td>
          </tr>
          <tr>
              <td>TLS_ECDH_anon_WITH_AES_128_CBC_SHA</td>
              <td>11+</td>
              <td></td>
          </tr>
          <tr>
              <td>TLS_ECDH_anon_WITH_AES_256_CBC_SHA</td>
              <td>11+</td>
              <td></td>
          </tr>
          <tr>
              <td>TLS_ECDH_anon_WITH_NULL_SHA</td>
              <td>11+</td>
              <td></td>
          </tr>
          <tr>
              <td>TLS_ECDH_anon_WITH_RC4_128_SHA</td>
              <td>11+</td>
              <td></td>
          </tr>
          <tr>
              <td>TLS_EMPTY_RENEGOTIATION_INFO_SCSV</td>
              <td>11+</td>
              <td>11+</td>
          </tr>
          <tr>
              <td>TLS_FALLBACK_SCSV</td>
              <td>21+</td>
              <td></td>
          </tr>
          <tr>
              <td>TLS_PSK_WITH_3DES_EDE_CBC_SHA</td>
              <td>21+</td>
              <td></td>
          </tr>
          <tr>
              <td>TLS_PSK_WITH_AES_128_CBC_SHA</td>
              <td>21+</td>
              <td>21+</td>
          </tr>
          <tr>
              <td>TLS_PSK_WITH_AES_256_CBC_SHA</td>
              <td>21+</td>
              <td>21+</td>
          </tr>
          <tr>
              <td>TLS_PSK_WITH_RC4_128_SHA</td>
              <td>21+</td>
              <td></td>
          </tr>
          <tr>
              <td>TLS_RSA_WITH_AES_128_CBC_SHA</td>
              <td>9+</td>
              <td>9+</td>
          </tr>
          <tr>
              <td>TLS_RSA_WITH_AES_128_CBC_SHA256</td>
              <td>20+</td>
              <td></td>
          </tr>
          <tr>
              <td>TLS_RSA_WITH_AES_128_GCM_SHA256</td>
              <td>20+</td>
              <td>20+</td>
          </tr>
          <tr>
              <td>TLS_RSA_WITH_AES_256_CBC_SHA</td>
              <td>9+</td>
              <td>11+</td>
          </tr>
          <tr>
              <td>TLS_RSA_WITH_AES_256_CBC_SHA256</td>
              <td>20+</td>
              <td></td>
          </tr>
          <tr>
              <td>TLS_RSA_WITH_AES_256_GCM_SHA384</td>
              <td>20+</td>
              <td>20+</td>
          </tr>
          <tr>
              <td>TLS_RSA_WITH_NULL_SHA256</td>
              <td>20+</td>
              <td></td>
          </tr>
      </tbody>
  </table>
  
 <p><em>NOTE</em>: PSK cipher suites are enabled by default only if the <code>SSLContext</code> through
  which the socket was created has been initialized with a <code>PSKKeyManager</code>.
  
 <p>API Levels 1 to 8 use OpenSSL names for cipher suites. The table below
  lists these OpenSSL names and their corresponding standard names used in API
  Levels 9 and newer. 
 <table>
      <thead>
          <tr>
              <th>OpenSSL cipher suite</th>
              <th>Standard cipher suite</th>
              <th>Supported (API Levels)</th>
              <th>Enabled by default (API Levels)</th>
          </tr>
      </thead>
      <tbody>
          <tr>
              <td>AES128-SHA</td>
              <td>TLS_RSA_WITH_AES_128_CBC_SHA</td>
              <td>1+</td>
              <td>1+</td>
          </tr>
          <tr>
              <td>AES256-SHA</td>
              <td>TLS_RSA_WITH_AES_256_CBC_SHA</td>
              <td>1+</td>
              <td>1-8, 11+</td>
          </tr>
          <tr>
              <td>DES-CBC-MD5</td>
              <td>SSL_CK_DES_64_CBC_WITH_MD5</td>
              <td>1-8</td>
              <td>1-8</td>
          </tr>
          <tr>
              <td>DES-CBC-SHA</td>
              <td>SSL_RSA_WITH_DES_CBC_SHA</td>
              <td>1+</td>
              <td>1-19</td>
          </tr>
          <tr>
              <td>DES-CBC3-MD5</td>
              <td>SSL_CK_DES_192_EDE3_CBC_WITH_MD5</td>
              <td>1-8</td>
              <td>1-8</td>
          </tr>
          <tr>
              <td>DES-CBC3-SHA</td>
              <td>SSL_RSA_WITH_3DES_EDE_CBC_SHA</td>
              <td>1+</td>
              <td>1-19</td>
          </tr>
          <tr>
              <td>DHE-DSS-AES128-SHA</td>
              <td>TLS_DHE_DSS_WITH_AES_128_CBC_SHA</td>
              <td>1+</td>
              <td>1+</td>
          </tr>
          <tr>
              <td>DHE-DSS-AES256-SHA</td>
              <td>TLS_DHE_DSS_WITH_AES_256_CBC_SHA</td>
              <td>1+</td>
              <td>1-8, 11+</td>
          </tr>
          <tr>
              <td>DHE-RSA-AES128-SHA</td>
              <td>TLS_DHE_RSA_WITH_AES_128_CBC_SHA</td>
              <td>1+</td>
              <td>1+</td>
          </tr>
          <tr>
              <td>DHE-RSA-AES256-SHA</td>
              <td>TLS_DHE_RSA_WITH_AES_256_CBC_SHA</td>
              <td>1+</td>
              <td>1-8, 11+</td>
          </tr>
          <tr>
              <td>EDH-DSS-DES-CBC-SHA</td>
              <td>SSL_DHE_DSS_WITH_DES_CBC_SHA</td>
              <td>1+</td>
              <td>1-19</td>
          </tr>
          <tr>
              <td>EDH-DSS-DES-CBC3-SHA</td>
              <td>SSL_DHE_DSS_WITH_3DES_EDE_CBC_SHA</td>
              <td>1+</td>
              <td>1-19</td>
          </tr>
          <tr>
              <td>EDH-RSA-DES-CBC-SHA</td>
              <td>SSL_DHE_RSA_WITH_DES_CBC_SHA</td>
              <td>1+</td>
              <td>1-19</td>
          </tr>
          <tr>
              <td>EDH-RSA-DES-CBC3-SHA</td>
              <td>SSL_DHE_RSA_WITH_3DES_EDE_CBC_SHA</td>
              <td>1+</td>
              <td>1-19</td>
          </tr>
          <tr>
              <td>EXP-DES-CBC-SHA</td>
              <td>SSL_RSA_EXPORT_WITH_DES40_CBC_SHA</td>
              <td>1+</td>
              <td>1-19</td>
          </tr>
          <tr>
              <td>EXP-EDH-DSS-DES-CBC-SHA</td>
              <td>SSL_DHE_DSS_EXPORT_WITH_DES40_CBC_SHA</td>
              <td>1+</td>
              <td>1-19</td>
          </tr>
          <tr>
              <td>EXP-EDH-RSA-DES-CBC-SHA</td>
              <td>SSL_DHE_RSA_EXPORT_WITH_DES40_CBC_SHA</td>
              <td>1+</td>
              <td>1-19</td>
          </tr>
          <tr>
              <td>EXP-RC2-CBC-MD5</td>
              <td>SSL_RSA_EXPORT_WITH_RC2_CBC_40_MD5</td>
              <td>1-8</td>
              <td>1-8</td>
          </tr>
          <tr>
              <td>EXP-RC4-MD5</td>
              <td>SSL_RSA_EXPORT_WITH_RC4_40_MD5</td>
              <td>1+</td>
              <td>1-19</td>
          </tr>
          <tr>
              <td>RC2-CBC-MD5</td>
              <td>SSL_CK_RC2_128_CBC_WITH_MD5</td>
              <td>1-8</td>
              <td>1-8</td>
          </tr>
          <tr>
              <td>RC4-MD5</td>
              <td>SSL_RSA_WITH_RC4_128_MD5</td>
              <td>1+</td>
              <td>1-19</td>
          </tr>
          <tr>
              <td>RC4-SHA</td>
              <td>SSL_RSA_WITH_RC4_128_SHA</td>
              <td>1+</td>
              <td>1+</td>
          </tr>
      </tbody>
  </table>
 */
@interface JavaxNetSslSSLSocket : JavaNetSocket

#pragma mark Public

/*!
 @brief Registers the specified listener to receive notification on completion of
  a handshake on this connection.
 @param listener the listener to register.
 @throw IllegalArgumentExceptionif <code>listener</code> is <code>null</code>.
 */
- (void)addHandshakeCompletedListenerWithJavaxNetSslHandshakeCompletedListener:(id<JavaxNetSslHandshakeCompletedListener>)listener;

/*!
 @brief Returns the names of the enabled cipher suites.
 */
- (IOSObjectArray *)getEnabledCipherSuites;

/*!
 @brief Returns the names of the enabled protocols.
 */
- (IOSObjectArray *)getEnabledProtocols;

/*!
 @brief Returns whether new SSL sessions may be created by this socket or if
  existing sessions must be reused.
 @return <code>true</code> if new sessions may be created, otherwise
          <code>false</code>.
 */
- (jboolean)getEnableSessionCreation;

/*!
 @brief Returns true if the server socket should require client authentication.
 This does not apply to sockets in <code>mode</code>
 .
 */
- (jboolean)getNeedClientAuth;

/*!
 @brief Returns the <code>SSLSession</code> for this connection.If necessary, a
  handshake will be initiated, in which case this method will block until the handshake
  has been established.
 If the handshake fails, an invalid session object
  will be returned.
 @return the session object.
 */
- (id<JavaxNetSslSSLSession>)getSession;

/*!
 @brief Returns a new SSLParameters based on this SSLSocket's current
  cipher suites, protocols, and client authentication settings.
 @since 1.6
 */
- (JavaxNetSslSSLParameters *)getSSLParameters;

/*!
 @brief Returns the names of the supported cipher suites.
 */
- (IOSObjectArray *)getSupportedCipherSuites;

/*!
 @brief Returns the names of the supported protocols.
 */
- (IOSObjectArray *)getSupportedProtocols;

/*!
 @brief Returns true if this connection will act in client mode when handshaking.
 */
- (jboolean)getUseClientMode;

/*!
 @brief Returns true if the server should request client authentication.This
  does not apply to sockets in <code>mode</code>.
 */
- (jboolean)getWantClientAuth;

/*!
 @brief Removes the specified handshake completion listener.
 @param listener the listener to remove.
 @throw IllegalArgumentException
 if the specified listener is not registered or <code>null</code>.
 */
- (void)removeHandshakeCompletedListenerWithJavaxNetSslHandshakeCompletedListener:(id<JavaxNetSslHandshakeCompletedListener>)listener;

/*!
 @brief Sets the names of the cipher suites to be enabled.
 Only cipher suites returned by <code>getSupportedCipherSuites()</code> are
  allowed.
 @param suites the names of the to be enabled cipher suites.
 @throw IllegalArgumentException
 if one of the cipher suite names is not supported.
 */
- (void)setEnabledCipherSuitesWithNSStringArray:(IOSObjectArray *)suites;

/*!
 @brief Sets the names of the protocols to be enabled.Only
  protocols returned by <code>getSupportedProtocols()</code> are allowed.
 @param protocols the names of the to be enabled protocols.
 @throw IllegalArgumentException
 if one of the protocols is not supported.
 */
- (void)setEnabledProtocolsWithNSStringArray:(IOSObjectArray *)protocols;

/*!
 @brief Sets whether new SSL sessions may be created by this socket or if
  existing sessions must be reused.If <code>flag</code> is false and there are
  no sessions to resume, handshaking will fail.
 @param flag<code>true</code>  if new sessions may be created.
 */
- (void)setEnableSessionCreationWithBoolean:(jboolean)flag;

/*!
 @brief Sets whether the server should require client authentication.This
  does not apply to sockets in <code>mode</code>.
 Client authentication is one of the following: 
 <ul>
  <li>authentication required</li>
  <li>authentication requested</li>
  <li>no authentication needed</li>
  </ul>
  This method overrides the setting of <code>setWantClientAuth(boolean)</code>.
 */
- (void)setNeedClientAuthWithBoolean:(jboolean)need;

/*!
 @brief Sets various SSL handshake parameters based on the SSLParameter
  argument.Specifically, sets the SSLSocket's enabled cipher
  suites if the parameter's cipher suites are non-null.
 Similarly
  sets the enabled protocols. If the parameters specify the want
  or need for client authentication, those requirements are set
  on the SSLSocket, otherwise both are set to false.
 @since 1.6
 */
- (void)setSSLParametersWithJavaxNetSslSSLParameters:(JavaxNetSslSSLParameters *)p;

/*!
 @brief Sets whether this connection should act in client mode when handshaking.
 @param mode<code>true</code>
   if this connection should act in client mode,             <code>false</code>
   if not.
 */
- (void)setUseClientModeWithBoolean:(jboolean)mode;

/*!
 @brief Sets whether the server should request client authentication.Unlike
  <code>setNeedClientAuth</code> this won't stop the negotiation if the client
  doesn't authenticate.
 This does not apply to sockets in <code>mode</code>
 .The client authentication is one of: 
 <ul>
  <li>authentication required</li>
  <li>authentication requested</li>
  <li>no authentication needed</li>
  </ul>
  This method overrides the setting of <code>setNeedClientAuth(boolean)</code>.
 */
- (void)setWantClientAuthWithBoolean:(jboolean)want;

/*!
 @brief Unsupported for SSL because reading from an SSL socket may require
  writing to the network.
 */
- (void)shutdownInput;

/*!
 @brief Unsupported for SSL because writing to an SSL socket may require reading
  from the network.
 */
- (void)shutdownOutput;

/*!
 @brief Starts a new SSL handshake on this connection.
 @throw IOException
 if an error occurs.
 */
- (void)startHandshake;

#pragma mark Protected

/*!
 @brief Only to be used by subclasses.
 <p>
  Creates a TCP socket.
 */
- (instancetype)init;

/*!
 @brief Only to be used by subclasses.
 <p>
  Creates a TCP socket connection to the specified address at the specified
  port.
 @param address the address to connect to.
 @param port the port number to connect to.
 @throw IOException
 if creating the socket fails.
 */
- (instancetype)initWithJavaNetInetAddress:(JavaNetInetAddress *)address
                                   withInt:(jint)port;

/*!
 @brief Only to be used by subclasses.
 <p>
  Creates a TCP socket connection to the specified address at the specified
  port with the client side bound to the specified address and port.
 @param address the address to connect to.
 @param port the port number to connect to.
 @param clientAddress the client address to bind to.
 @param clientPort the client port number to bind to.
 @throw IOException
 if creating the socket fails.
 */
- (instancetype)initWithJavaNetInetAddress:(JavaNetInetAddress *)address
                                   withInt:(jint)port
                    withJavaNetInetAddress:(JavaNetInetAddress *)clientAddress
                                   withInt:(jint)clientPort;

/*!
 @brief Only to be used by subclasses.
 <p>
  Creates a TCP socket connection to the specified host at the specified
  port.
 @param host the host name to connect to.
 @param port the port number to connect to.
 @throw IOException
 if creating the socket fails.
 @throw UnknownHostException
 if the specified host is not known.
 */
- (instancetype)initWithNSString:(NSString *)host
                         withInt:(jint)port;

/*!
 @brief Only to be used by subclasses.
 <p>
  Creates a TCP socket connection to the specified host at the specified
  port with the client side bound to the specified address and port.
 @param host the host name to connect to.
 @param port the port number to connect to.
 @param clientAddress the client address to bind to
 @param clientPort the client port number to bind to.
 @throw IOException
 if creating the socket fails.
 @throw UnknownHostException
 if the specified host is not known.
 */
- (instancetype)initWithNSString:(NSString *)host
                         withInt:(jint)port
          withJavaNetInetAddress:(JavaNetInetAddress *)clientAddress
                         withInt:(jint)clientPort;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxNetSslSSLSocket)

FOUNDATION_EXPORT void JavaxNetSslSSLSocket_init(JavaxNetSslSSLSocket *self);

FOUNDATION_EXPORT void JavaxNetSslSSLSocket_initWithNSString_withInt_(JavaxNetSslSSLSocket *self, NSString *host, jint port);

FOUNDATION_EXPORT void JavaxNetSslSSLSocket_initWithJavaNetInetAddress_withInt_(JavaxNetSslSSLSocket *self, JavaNetInetAddress *address, jint port);

FOUNDATION_EXPORT void JavaxNetSslSSLSocket_initWithNSString_withInt_withJavaNetInetAddress_withInt_(JavaxNetSslSSLSocket *self, NSString *host, jint port, JavaNetInetAddress *clientAddress, jint clientPort);

FOUNDATION_EXPORT void JavaxNetSslSSLSocket_initWithJavaNetInetAddress_withInt_withJavaNetInetAddress_withInt_(JavaxNetSslSSLSocket *self, JavaNetInetAddress *address, jint port, JavaNetInetAddress *clientAddress, jint clientPort);

J2OBJC_TYPE_LITERAL_HEADER(JavaxNetSslSSLSocket)

#endif

#pragma pop_macro("INCLUDE_ALL_JavaxNetSslSSLSocket")
