//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/ByteBufferAsFloatBuffer.java
//

#ifndef _JavaNioByteBufferAsFloatBuffer_H_
#define _JavaNioByteBufferAsFloatBuffer_H_

@class IOSFloatArray;
@class JavaNioByteBuffer;
@class JavaNioByteOrder;

#import "JreEmulation.h"
#include "java/nio/FloatBuffer.h"

@interface JavaNioByteBufferAsFloatBuffer : JavaNioFloatBuffer {
}

+ (JavaNioFloatBuffer *)asFloatBufferWithJavaNioByteBuffer:(JavaNioByteBuffer *)byteBuffer;

- (instancetype)initWithJavaNioByteBuffer:(JavaNioByteBuffer *)byteBuffer;

- (JavaNioFloatBuffer *)asReadOnlyBuffer;

- (JavaNioFloatBuffer *)compact;

- (JavaNioFloatBuffer *)duplicate;

- (jfloat)get;

- (jfloat)getWithInt:(jint)index;

- (JavaNioFloatBuffer *)getWithFloatArray:(IOSFloatArray *)dst
                                  withInt:(jint)dstOffset
                                  withInt:(jint)floatCount;

- (jboolean)isDirect;

- (jboolean)isReadOnly;

- (JavaNioByteOrder *)order;

- (IOSFloatArray *)protectedArray;

- (jint)protectedArrayOffset;

- (jboolean)protectedHasArray;

- (JavaNioFloatBuffer *)putWithFloat:(jfloat)c;

- (JavaNioFloatBuffer *)putWithInt:(jint)index
                         withFloat:(jfloat)c;

- (JavaNioFloatBuffer *)putWithFloatArray:(IOSFloatArray *)src
                                  withInt:(jint)srcOffset
                                  withInt:(jint)floatCount;

- (JavaNioFloatBuffer *)slice;

@end

__attribute__((always_inline)) inline void JavaNioByteBufferAsFloatBuffer_init() {}
FOUNDATION_EXPORT JavaNioFloatBuffer *JavaNioByteBufferAsFloatBuffer_asFloatBufferWithJavaNioByteBuffer_(JavaNioByteBuffer *byteBuffer);

#endif // _JavaNioByteBufferAsFloatBuffer_H_