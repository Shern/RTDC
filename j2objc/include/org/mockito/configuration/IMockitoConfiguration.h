//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-0.9.5/j2objc/testing/mockito/build_result/java/org/mockito/configuration/IMockitoConfiguration.java
//

#ifndef _OrgMockitoConfigurationIMockitoConfiguration_H_
#define _OrgMockitoConfigurationIMockitoConfiguration_H_

@protocol OrgMockitoConfigurationAnnotationEngine;
@protocol OrgMockitoReturnValues;
@protocol OrgMockitoStubbingAnswer;

#import "JreEmulation.h"

@protocol OrgMockitoConfigurationIMockitoConfiguration < NSObject, JavaObject >

- (id<OrgMockitoReturnValues>)getReturnValues;

- (id<OrgMockitoStubbingAnswer>)getDefaultAnswer;

- (id<OrgMockitoConfigurationAnnotationEngine>)getAnnotationEngine;

- (jboolean)cleansStackTrace;

- (jboolean)enableClassCache;

@end

__attribute__((always_inline)) inline void OrgMockitoConfigurationIMockitoConfiguration_init() {}

#endif // _OrgMockitoConfigurationIMockitoConfiguration_H_
