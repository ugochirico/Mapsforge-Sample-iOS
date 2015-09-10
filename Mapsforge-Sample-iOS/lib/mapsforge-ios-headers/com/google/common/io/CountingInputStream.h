//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/cbrasseur/Documents/j2objc-0.9.7/guava/sources/com/google/common/io/CountingInputStream.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonIoCountingInputStream_INCLUDE_ALL")
#if ComGoogleCommonIoCountingInputStream_RESTRICT
#define ComGoogleCommonIoCountingInputStream_INCLUDE_ALL 0
#else
#define ComGoogleCommonIoCountingInputStream_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonIoCountingInputStream_RESTRICT

#if !defined (_ComGoogleCommonIoCountingInputStream_) && (ComGoogleCommonIoCountingInputStream_INCLUDE_ALL || ComGoogleCommonIoCountingInputStream_INCLUDE)
#define _ComGoogleCommonIoCountingInputStream_

#define JavaIoFilterInputStream_RESTRICT 1
#define JavaIoFilterInputStream_INCLUDE 1
#include "java/io/FilterInputStream.h"

@class IOSByteArray;
@class JavaIoInputStream;

@interface ComGoogleCommonIoCountingInputStream : JavaIoFilterInputStream

#pragma mark Public

- (instancetype)initWithJavaIoInputStream:(JavaIoInputStream *)inArg;

- (jlong)getCount;

- (void)markWithInt:(jint)readlimit;

- (jint)read;

- (jint)readWithByteArray:(IOSByteArray *)b
                  withInt:(jint)off
                  withInt:(jint)len;

- (void)reset;

- (jlong)skipWithLong:(jlong)n;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonIoCountingInputStream)

FOUNDATION_EXPORT void ComGoogleCommonIoCountingInputStream_initWithJavaIoInputStream_(ComGoogleCommonIoCountingInputStream *self, JavaIoInputStream *inArg);

FOUNDATION_EXPORT ComGoogleCommonIoCountingInputStream *new_ComGoogleCommonIoCountingInputStream_initWithJavaIoInputStream_(JavaIoInputStream *inArg) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonIoCountingInputStream)

#endif
#pragma pop_macro("ComGoogleCommonIoCountingInputStream_INCLUDE_ALL")