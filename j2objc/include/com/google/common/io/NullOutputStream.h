//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-0.9.5/j2objc/guava/sources/com/google/common/io/NullOutputStream.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonIoNullOutputStream_RESTRICT
#define ComGoogleCommonIoNullOutputStream_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonIoNullOutputStream_RESTRICT
#if !defined (_ComGoogleCommonIoNullOutputStream_) && (ComGoogleCommonIoNullOutputStream_INCLUDE_ALL || ComGoogleCommonIoNullOutputStream_INCLUDE)
#define _ComGoogleCommonIoNullOutputStream_

@class IOSByteArray;

#define JavaIoOutputStream_RESTRICT 1
#define JavaIoOutputStream_INCLUDE 1
#include "java/io/OutputStream.h"


@interface ComGoogleCommonIoNullOutputStream : JavaIoOutputStream {
}

- (void)writeWithInt:(jint)b;

- (void)writeWithByteArray:(IOSByteArray *)b
                   withInt:(jint)off
                   withInt:(jint)len;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void ComGoogleCommonIoNullOutputStream_init() {}
#endif
