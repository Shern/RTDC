//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/IllegalMonitorStateException.java
//

#ifndef _JavaLangIllegalMonitorStateException_H_
#define _JavaLangIllegalMonitorStateException_H_

#import "JreEmulation.h"
#include "java/lang/RuntimeException.h"

#define JavaLangIllegalMonitorStateException_serialVersionUID 3713306369498869069LL

@interface JavaLangIllegalMonitorStateException : JavaLangRuntimeException {
}

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)detailMessage;

@end

__attribute__((always_inline)) inline void JavaLangIllegalMonitorStateException_init() {}

J2OBJC_STATIC_FIELD_GETTER(JavaLangIllegalMonitorStateException, serialVersionUID, jlong)

#endif // _JavaLangIllegalMonitorStateException_H_
