//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-0.9.5/j2objc/testing/mockito/build_result/java/org/mockito/invocation/MockHandler.java
//

#ifndef _OrgMockitoInvocationMockHandler_H_
#define _OrgMockitoInvocationMockHandler_H_

@protocol OrgMockitoInvocationInvocation;

#import "JreEmulation.h"
#include "java/io/Serializable.h"

@protocol OrgMockitoInvocationMockHandler < JavaIoSerializable, NSObject, JavaObject >
- (id)handleWithOrgMockitoInvocationInvocation:(id<OrgMockitoInvocationInvocation>)invocation;

@end

__attribute__((always_inline)) inline void OrgMockitoInvocationMockHandler_init() {}

#endif // _OrgMockitoInvocationMockHandler_H_
