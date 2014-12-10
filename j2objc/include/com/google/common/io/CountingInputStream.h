//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-0.9.5/j2objc/guava/sources/com/google/common/io/CountingInputStream.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonIoCountingInputStream_RESTRICT
#define ComGoogleCommonIoCountingInputStream_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonIoCountingInputStream_RESTRICT
#if !defined (_ComGoogleCommonIoCountingInputStream_) && (ComGoogleCommonIoCountingInputStream_INCLUDE_ALL || ComGoogleCommonIoCountingInputStream_INCLUDE)
#define _ComGoogleCommonIoCountingInputStream_

@class IOSByteArray;
@class JavaIoInputStream;

#define JavaIoFilterInputStream_RESTRICT 1
#define JavaIoFilterInputStream_INCLUDE 1
#include "java/io/FilterInputStream.h"


@interface ComGoogleCommonIoCountingInputStream : JavaIoFilterInputStream {
}

- (instancetype)initWithJavaIoInputStream:(JavaIoInputStream *)inArg;

- (jlong)getCount;

- (jint)read;

- (jint)readWithByteArray:(IOSByteArray *)b
                  withInt:(jint)off
                  withInt:(jint)len;

- (jlong)skipWithLong:(jlong)n;

- (void)markWithInt:(jint)readlimit;

- (void)reset;

@end

__attribute__((always_inline)) inline void ComGoogleCommonIoCountingInputStream_init() {}
#endif
