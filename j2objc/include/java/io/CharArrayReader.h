//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/CharArrayReader.java
//

#ifndef _JavaIoCharArrayReader_H_
#define _JavaIoCharArrayReader_H_

@class IOSCharArray;

#import "JreEmulation.h"
#include "java/io/Reader.h"

@interface JavaIoCharArrayReader : JavaIoReader {
 @public
  IOSCharArray *buf_;
  jint pos_;
  jint markedPos_;
  jint count_;
}

- (instancetype)initWithCharArray:(IOSCharArray *)buf;

- (instancetype)initWithCharArray:(IOSCharArray *)buf
                          withInt:(jint)offset
                          withInt:(jint)length;

- (void)close;

- (void)markWithInt:(jint)readLimit;

- (jboolean)markSupported;

- (jint)read;

- (jint)readWithCharArray:(IOSCharArray *)buffer
                  withInt:(jint)offset
                  withInt:(jint)count;

- (jboolean)ready;

- (void)reset;

- (jlong)skipWithLong:(jlong)charCount;

@end

__attribute__((always_inline)) inline void JavaIoCharArrayReader_init() {}

J2OBJC_FIELD_SETTER(JavaIoCharArrayReader, buf_, IOSCharArray *)

#endif // _JavaIoCharArrayReader_H_