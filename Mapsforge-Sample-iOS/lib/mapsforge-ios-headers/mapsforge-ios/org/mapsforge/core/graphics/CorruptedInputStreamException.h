//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./org/mapsforge/core/graphics/CorruptedInputStreamException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMapsforgeCoreGraphicsCorruptedInputStreamException")
#ifdef RESTRICT_OrgMapsforgeCoreGraphicsCorruptedInputStreamException
#define INCLUDE_ALL_OrgMapsforgeCoreGraphicsCorruptedInputStreamException 0
#else
#define INCLUDE_ALL_OrgMapsforgeCoreGraphicsCorruptedInputStreamException 1
#endif
#undef RESTRICT_OrgMapsforgeCoreGraphicsCorruptedInputStreamException

#if !defined (OrgMapsforgeCoreGraphicsCorruptedInputStreamException_) && (INCLUDE_ALL_OrgMapsforgeCoreGraphicsCorruptedInputStreamException || defined(INCLUDE_OrgMapsforgeCoreGraphicsCorruptedInputStreamException))
#define OrgMapsforgeCoreGraphicsCorruptedInputStreamException_

#define RESTRICT_JavaLangRuntimeException 1
#define INCLUDE_JavaLangRuntimeException 1
#include "java/lang/RuntimeException.h"

@interface OrgMapsforgeCoreGraphicsCorruptedInputStreamException : JavaLangRuntimeException

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)detailMessage
                 withNSException:(NSException *)throwable;
#define withJavaLangThrowable withNSException

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMapsforgeCoreGraphicsCorruptedInputStreamException)

FOUNDATION_EXPORT void OrgMapsforgeCoreGraphicsCorruptedInputStreamException_initWithNSString_withNSException_(OrgMapsforgeCoreGraphicsCorruptedInputStreamException *self, NSString *detailMessage, NSException *throwable);

FOUNDATION_EXPORT OrgMapsforgeCoreGraphicsCorruptedInputStreamException *new_OrgMapsforgeCoreGraphicsCorruptedInputStreamException_initWithNSString_withNSException_(NSString *detailMessage, NSException *throwable) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMapsforgeCoreGraphicsCorruptedInputStreamException *create_OrgMapsforgeCoreGraphicsCorruptedInputStreamException_initWithNSString_withNSException_(NSString *detailMessage, NSException *throwable);

J2OBJC_TYPE_LITERAL_HEADER(OrgMapsforgeCoreGraphicsCorruptedInputStreamException)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgMapsforgeCoreGraphicsCorruptedInputStreamException")
