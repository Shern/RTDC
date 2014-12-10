//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/ShortArrayBuffer.java
//

#ifndef _JavaNioShortArrayBuffer_H_
#define _JavaNioShortArrayBuffer_H_

@class IOSShortArray;
@class JavaNioByteOrder;

#import "JreEmulation.h"
#include "java/nio/ShortBuffer.h"

@interface JavaNioShortArrayBuffer : JavaNioShortBuffer {
}

- (instancetype)initWithShortArray:(IOSShortArray *)array;

- (JavaNioShortBuffer *)asReadOnlyBuffer;

- (JavaNioShortBuffer *)compact;

- (JavaNioShortBuffer *)duplicate;

- (JavaNioShortBuffer *)slice;

- (jboolean)isReadOnly;

- (IOSShortArray *)protectedArray;

- (jint)protectedArrayOffset;

- (jboolean)protectedHasArray;

- (jshort)get;

- (jshort)getWithInt:(jint)index;

- (JavaNioShortBuffer *)getWithShortArray:(IOSShortArray *)dst
                                  withInt:(jint)dstOffset
                                  withInt:(jint)shortCount;

- (jboolean)isDirect;

- (JavaNioByteOrder *)order;

- (JavaNioShortBuffer *)putWithShort:(jshort)c;

- (JavaNioShortBuffer *)putWithInt:(jint)index
                         withShort:(jshort)c;

- (JavaNioShortBuffer *)putWithShortArray:(IOSShortArray *)src
                                  withInt:(jint)srcOffset
                                  withInt:(jint)shortCount;

@end

__attribute__((always_inline)) inline void JavaNioShortArrayBuffer_init() {}

#endif // _JavaNioShortArrayBuffer_H_