//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-0.9.5/j2objc/testing/mockito/build_result/java/org/mockito/internal/exceptions/stacktrace/DefaultStackTraceCleaner.java
//

#ifndef _OrgMockitoInternalExceptionsStacktraceDefaultStackTraceCleaner_H_
#define _OrgMockitoInternalExceptionsStacktraceDefaultStackTraceCleaner_H_

@class JavaLangStackTraceElement;

#import "JreEmulation.h"
#include "org/mockito/exceptions/stacktrace/StackTraceCleaner.h"

@interface OrgMockitoInternalExceptionsStacktraceDefaultStackTraceCleaner : NSObject < OrgMockitoExceptionsStacktraceStackTraceCleaner > {
}

- (jboolean)isOutWithJavaLangStackTraceElement:(JavaLangStackTraceElement *)e;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void OrgMockitoInternalExceptionsStacktraceDefaultStackTraceCleaner_init() {}

#endif // _OrgMockitoInternalExceptionsStacktraceDefaultStackTraceCleaner_H_