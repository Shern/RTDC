//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/CancellationException.java
//

#ifndef _JavaUtilConcurrentCancellationException_H_
#define _JavaUtilConcurrentCancellationException_H_

#import "JreEmulation.h"
#include "java/lang/IllegalStateException.h"

#define JavaUtilConcurrentCancellationException_serialVersionUID -9202173006928992231LL

@interface JavaUtilConcurrentCancellationException : JavaLangIllegalStateException {
}

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)message;

@end

__attribute__((always_inline)) inline void JavaUtilConcurrentCancellationException_init() {}

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentCancellationException, serialVersionUID, jlong)

#endif // _JavaUtilConcurrentCancellationException_H_