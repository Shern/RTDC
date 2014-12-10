//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/FileOutputStream.java
//

#ifndef _JavaIoFileOutputStream_H_
#define _JavaIoFileOutputStream_H_

@class DalvikSystemCloseGuard;
@class IOSByteArray;
@class JavaIoFile;
@class JavaIoFileDescriptor;
@class JavaNioChannelsFileChannel;

#import "JreEmulation.h"
#include "java/io/OutputStream.h"

@interface JavaIoFileOutputStream : JavaIoOutputStream {
}

- (instancetype)initWithJavaIoFile:(JavaIoFile *)file;

- (instancetype)initWithJavaIoFile:(JavaIoFile *)file
                       withBoolean:(jboolean)append;

- (instancetype)initWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd;

- (instancetype)initWithNSString:(NSString *)path;

- (instancetype)initWithNSString:(NSString *)path
                     withBoolean:(jboolean)append;

- (void)close;

- (void)dealloc;

- (JavaNioChannelsFileChannel *)getChannel;

- (JavaIoFileDescriptor *)getFD;

- (void)writeWithByteArray:(IOSByteArray *)buffer
                   withInt:(jint)byteOffset
                   withInt:(jint)byteCount;

- (void)writeWithInt:(jint)oneByte;

@end

__attribute__((always_inline)) inline void JavaIoFileOutputStream_init() {}

#endif // _JavaIoFileOutputStream_H_
