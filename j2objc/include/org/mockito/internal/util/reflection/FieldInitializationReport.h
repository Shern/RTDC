//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-0.9.5/j2objc/testing/mockito/build_result/java/org/mockito/internal/util/reflection/FieldInitializationReport.java
//

#ifndef _OrgMockitoInternalUtilReflectionFieldInitializationReport_H_
#define _OrgMockitoInternalUtilReflectionFieldInitializationReport_H_

@class IOSClass;

#import "JreEmulation.h"

@interface OrgMockitoInternalUtilReflectionFieldInitializationReport : NSObject {
 @public
  id fieldInstance__;
  jboolean wasInitialized_;
  jboolean wasInitializedUsingConstructorArgs_;
}

- (instancetype)initWithId:(id)fieldInstance
               withBoolean:(jboolean)wasInitialized
               withBoolean:(jboolean)wasInitializedUsingConstructorArgs;

- (id)fieldInstance;

- (jboolean)fieldWasInitialized;

- (jboolean)fieldWasInitializedUsingContructorArgs;

- (IOSClass *)fieldClass;

- (void)dealloc;

- (void)copyAllFieldsTo:(OrgMockitoInternalUtilReflectionFieldInitializationReport *)other;

@end

__attribute__((always_inline)) inline void OrgMockitoInternalUtilReflectionFieldInitializationReport_init() {}

J2OBJC_FIELD_SETTER(OrgMockitoInternalUtilReflectionFieldInitializationReport, fieldInstance__, id)

#endif // _OrgMockitoInternalUtilReflectionFieldInitializationReport_H_
