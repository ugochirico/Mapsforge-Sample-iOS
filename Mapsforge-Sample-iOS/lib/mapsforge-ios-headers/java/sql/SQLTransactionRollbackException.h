//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/sql/SQLTransactionRollbackException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSqlSQLTransactionRollbackException")
#ifdef RESTRICT_JavaSqlSQLTransactionRollbackException
#define INCLUDE_ALL_JavaSqlSQLTransactionRollbackException 0
#else
#define INCLUDE_ALL_JavaSqlSQLTransactionRollbackException 1
#endif
#undef RESTRICT_JavaSqlSQLTransactionRollbackException

#if !defined (JavaSqlSQLTransactionRollbackException_) && (INCLUDE_ALL_JavaSqlSQLTransactionRollbackException || defined(INCLUDE_JavaSqlSQLTransactionRollbackException))
#define JavaSqlSQLTransactionRollbackException_

#define RESTRICT_JavaSqlSQLTransientException 1
#define INCLUDE_JavaSqlSQLTransientException 1
#include "java/sql/SQLTransientException.h"

/*!
 @brief The subclass of <code>SQLException</code> thrown when the SQLState class value
  is '<i>40</i>', or under vendor-specified conditions.This indicates that the
  current statement was automatically rolled back by the database because
  of deadlock or other transaction serialization failures.
 <p>
  Please consult your driver vendor documentation for the vendor-specified
  conditions for which this <code>Exception</code> may be thrown.
 @since 1.6
 */
@interface JavaSqlSQLTransactionRollbackException : JavaSqlSQLTransientException

#pragma mark Public

/*!
 @brief Constructs a <code>SQLTransactionRollbackException</code> object.
 The <code>reason</code>, <code>SQLState</code> are initialized
  to <code>null</code> and the vendor code is initialized to 0.
  The <code>cause</code> is not initialized, and may subsequently be
  initialized by a call to the 
 <code>Throwable.initCause(java.lang.Throwable)</code> method. 
 <p>
 @since 1.6
 */
- (instancetype)init;

/*!
 @brief Constructs a <code>SQLTransactionRollbackException</code> object
  with a given <code>reason</code>.The <code>SQLState</code>
  is initialized to <code>null</code> and the vender code is initialized
  to 0.
 The <code>cause</code> is not initialized, and may subsequently be
  initialized by a call to the 
 <code>Throwable.initCause(java.lang.Throwable)</code> method. 
 <p>
 @param reason a description of the exception
 @since 1.6
 */
- (instancetype)initWithNSString:(NSString *)reason;

/*!
 @brief Constructs a <code>SQLTransactionRollbackException</code> object
  with a given <code>reason</code> and <code>SQLState</code>.
 The <code>cause</code> is not initialized, and may subsequently be
  initialized by a call to the 
 <code>Throwable.initCause(java.lang.Throwable)</code> method. The vendor code
  is initialized to 0. 
 <p>
 @param reason a description of the exception
 @param SQLState an XOPEN or SQL:2003 code identifying the exception
 @since 1.6
 */
- (instancetype)initWithNSString:(NSString *)reason
                    withNSString:(NSString *)SQLState;

/*!
 @brief Constructs a <code>SQLTransactionRollbackException</code> object
  with a given <code>reason</code>, <code>SQLState</code>  and 
 <code>vendorCode</code>.
 The <code>cause</code> is not initialized, and may subsequently be
  initialized by a call to the 
 <code>Throwable.initCause(java.lang.Throwable)</code> method. 
 <p>
 @param reason a description of the exception
 @param SQLState an XOPEN or SQL:2003 code identifying the exception
 @param vendorCode a database vendor specific exception code
 @since 1.6
 */
- (instancetype)initWithNSString:(NSString *)reason
                    withNSString:(NSString *)SQLState
                         withInt:(jint)vendorCode;

/*!
 @brief Constructs a <code>SQLTransactionRollbackException</code> object
  with a given 
 <code>reason</code>, <code>SQLState</code>, <code>vendorCode</code>
  and  <code>cause</code>.
 <p>
 @param reason a description of the exception
 @param SQLState an XOPEN or SQL:2003 code identifying the exception
 @param vendorCode a database vendor-specific exception code
 @param cause the underlying reason for this  <code> SQLException </code>  (which is saved for later retrieval by the  <code> getCause() </code>  method); may be null indicating
       the cause is non-existent or unknown.
 @since 1.6
 */
- (instancetype)initWithNSString:(NSString *)reason
                    withNSString:(NSString *)SQLState
                         withInt:(jint)vendorCode
                 withNSException:(NSException *)cause;
#define withJavaLangThrowable withNSException

/*!
 @brief Constructs a <code>SQLTransactionRollbackException</code> object
  with a given 
 <code>reason</code>, <code>SQLState</code> and  <code>cause</code>.
 The vendor code is initialized to 0. 
 <p>
 @param reason a description of the exception.
 @param SQLState an XOPEN or SQL:2003 code identifying the exception
 @param cause the underlying reason for this  <code> SQLException </code>  (which is saved for later retrieval by the  <code> getCause() </code>  method); may be null indicating
       the cause is non-existent or unknown.
 @since 1.6
 */
- (instancetype)initWithNSString:(NSString *)reason
                    withNSString:(NSString *)SQLState
                 withNSException:(NSException *)cause;
#define withJavaLangThrowable withNSException

/*!
 @brief Constructs a <code>SQLTransactionRollbackException</code> object
  with a given 
 <code>reason</code> and  <code>cause</code>.
 The <code>SQLState</code> is  initialized to <code>null</code>
  and the vendor code is initialized to 0. 
 <p>
 @param reason a description of the exception.
 @param cause the underlying reason for this  <code> SQLException </code>  (which is saved for later retrieval by the  <code> getCause() </code>  method); may be null indicating
       the cause is non-existent or unknown.
 @since 1.6
 */
- (instancetype)initWithNSString:(NSString *)reason
                 withNSException:(NSException *)cause;
#define withJavaLangThrowable withNSException

/*!
 @brief Constructs a <code>SQLTransactionRollbackException</code> object
  with a given  <code>cause</code>.
 The <code>SQLState</code> is initialized
  to <code>null</code> and the vendor code is initialized to 0.
  The <code>reason</code>  is initialized to <code>null</code> if 
 <code>cause==null</code> or to <code>cause.toString()</code> if 
 <code>cause!=null</code>.
  <p>
 @param cause the underlying reason for this  <code> SQLException </code>  (which is saved for later retrieval by the  <code> getCause() </code>  method); may be null indicating
       the cause is non-existent or unknown.
 @since 1.6
 */
- (instancetype)initWithNSException:(NSException *)cause;
#define initWithJavaLangThrowable initWithNSException

#pragma mark Package-Private

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSqlSQLTransactionRollbackException)

FOUNDATION_EXPORT void JavaSqlSQLTransactionRollbackException_init(JavaSqlSQLTransactionRollbackException *self);

FOUNDATION_EXPORT JavaSqlSQLTransactionRollbackException *new_JavaSqlSQLTransactionRollbackException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLTransactionRollbackException *create_JavaSqlSQLTransactionRollbackException_init();

FOUNDATION_EXPORT void JavaSqlSQLTransactionRollbackException_initWithNSString_(JavaSqlSQLTransactionRollbackException *self, NSString *reason);

FOUNDATION_EXPORT JavaSqlSQLTransactionRollbackException *new_JavaSqlSQLTransactionRollbackException_initWithNSString_(NSString *reason) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLTransactionRollbackException *create_JavaSqlSQLTransactionRollbackException_initWithNSString_(NSString *reason);

FOUNDATION_EXPORT void JavaSqlSQLTransactionRollbackException_initWithNSString_withNSString_(JavaSqlSQLTransactionRollbackException *self, NSString *reason, NSString *SQLState);

FOUNDATION_EXPORT JavaSqlSQLTransactionRollbackException *new_JavaSqlSQLTransactionRollbackException_initWithNSString_withNSString_(NSString *reason, NSString *SQLState) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLTransactionRollbackException *create_JavaSqlSQLTransactionRollbackException_initWithNSString_withNSString_(NSString *reason, NSString *SQLState);

FOUNDATION_EXPORT void JavaSqlSQLTransactionRollbackException_initWithNSString_withNSString_withInt_(JavaSqlSQLTransactionRollbackException *self, NSString *reason, NSString *SQLState, jint vendorCode);

FOUNDATION_EXPORT JavaSqlSQLTransactionRollbackException *new_JavaSqlSQLTransactionRollbackException_initWithNSString_withNSString_withInt_(NSString *reason, NSString *SQLState, jint vendorCode) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLTransactionRollbackException *create_JavaSqlSQLTransactionRollbackException_initWithNSString_withNSString_withInt_(NSString *reason, NSString *SQLState, jint vendorCode);

FOUNDATION_EXPORT void JavaSqlSQLTransactionRollbackException_initWithNSException_(JavaSqlSQLTransactionRollbackException *self, NSException *cause);

FOUNDATION_EXPORT JavaSqlSQLTransactionRollbackException *new_JavaSqlSQLTransactionRollbackException_initWithNSException_(NSException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLTransactionRollbackException *create_JavaSqlSQLTransactionRollbackException_initWithNSException_(NSException *cause);

FOUNDATION_EXPORT void JavaSqlSQLTransactionRollbackException_initWithNSString_withNSException_(JavaSqlSQLTransactionRollbackException *self, NSString *reason, NSException *cause);

FOUNDATION_EXPORT JavaSqlSQLTransactionRollbackException *new_JavaSqlSQLTransactionRollbackException_initWithNSString_withNSException_(NSString *reason, NSException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLTransactionRollbackException *create_JavaSqlSQLTransactionRollbackException_initWithNSString_withNSException_(NSString *reason, NSException *cause);

FOUNDATION_EXPORT void JavaSqlSQLTransactionRollbackException_initWithNSString_withNSString_withNSException_(JavaSqlSQLTransactionRollbackException *self, NSString *reason, NSString *SQLState, NSException *cause);

FOUNDATION_EXPORT JavaSqlSQLTransactionRollbackException *new_JavaSqlSQLTransactionRollbackException_initWithNSString_withNSString_withNSException_(NSString *reason, NSString *SQLState, NSException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLTransactionRollbackException *create_JavaSqlSQLTransactionRollbackException_initWithNSString_withNSString_withNSException_(NSString *reason, NSString *SQLState, NSException *cause);

FOUNDATION_EXPORT void JavaSqlSQLTransactionRollbackException_initWithNSString_withNSString_withInt_withNSException_(JavaSqlSQLTransactionRollbackException *self, NSString *reason, NSString *SQLState, jint vendorCode, NSException *cause);

FOUNDATION_EXPORT JavaSqlSQLTransactionRollbackException *new_JavaSqlSQLTransactionRollbackException_initWithNSString_withNSString_withInt_withNSException_(NSString *reason, NSString *SQLState, jint vendorCode, NSException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLTransactionRollbackException *create_JavaSqlSQLTransactionRollbackException_initWithNSString_withNSString_withInt_withNSException_(NSString *reason, NSString *SQLState, jint vendorCode, NSException *cause);

J2OBJC_TYPE_LITERAL_HEADER(JavaSqlSQLTransactionRollbackException)

#endif

#pragma pop_macro("INCLUDE_ALL_JavaSqlSQLTransactionRollbackException")
