//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/atomic/AtomicLongArray.java
//

#ifndef _JavaUtilConcurrentAtomicAtomicLongArray_H_
#define _JavaUtilConcurrentAtomicAtomicLongArray_H_

@class IOSLongArray;

#import "JreEmulation.h"
#include "java/io/Serializable.h"

#define JavaUtilConcurrentAtomicAtomicLongArray_serialVersionUID -2308431214976778248LL

@interface JavaUtilConcurrentAtomicAtomicLongArray : NSObject < JavaIoSerializable > {
}

- (instancetype)initWithInt:(jint)length;

- (instancetype)initWithLongArray:(IOSLongArray *)array;

- (jint)length;

- (jlong)getWithInt:(jint)i;

- (void)setWithInt:(jint)i
          withLong:(jlong)newValue;

- (void)lazySetWithInt:(jint)i
              withLong:(jlong)newValue;

- (jlong)getAndSetWithInt:(jint)i
                 withLong:(jlong)newValue;

- (jboolean)compareAndSetWithInt:(jint)i
                        withLong:(jlong)expect
                        withLong:(jlong)update;

- (jboolean)weakCompareAndSetWithInt:(jint)i
                            withLong:(jlong)expect
                            withLong:(jlong)update;

- (jlong)getAndIncrementWithInt:(jint)i;

- (jlong)getAndDecrementWithInt:(jint)i;

- (jlong)getAndAddWithInt:(jint)i
                 withLong:(jlong)delta;

- (jlong)incrementAndGetWithInt:(jint)i;

- (jlong)decrementAndGetWithInt:(jint)i;

- (jlong)addAndGetWithInt:(jint)i
                 withLong:(jlong)delta;

- (NSString *)description;

@end

__attribute__((always_inline)) inline void JavaUtilConcurrentAtomicAtomicLongArray_init() {}

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentAtomicAtomicLongArray, serialVersionUID, jlong)

#endif // _JavaUtilConcurrentAtomicAtomicLongArray_H_
