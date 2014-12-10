//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-0.9.5/j2objc/testing/mockito/build_result/java/org/mockito/internal/util/MockCreationValidator.java
//

#ifndef _OrgMockitoInternalUtilMockCreationValidator_H_
#define _OrgMockitoInternalUtilMockCreationValidator_H_

@class IOSClass;
@protocol JavaUtilCollection;

#import "JreEmulation.h"

@interface OrgMockitoInternalUtilMockCreationValidator : NSObject {
}

- (jboolean)isTypeMockableWithIOSClass:(IOSClass *)clz;

- (void)validateTypeWithIOSClass:(IOSClass *)classToMock;

- (void)validateExtraInterfacesWithIOSClass:(IOSClass *)classToMock
                     withJavaUtilCollection:(id<JavaUtilCollection>)extraInterfaces;

- (void)validateMockedTypeWithIOSClass:(IOSClass *)classToMock
                                withId:(id)spiedInstance;

- (void)validateDelegatedInstanceWithIOSClass:(IOSClass *)classToMock
                                       withId:(id)delegatedInstance;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void OrgMockitoInternalUtilMockCreationValidator_init() {}

#endif // _OrgMockitoInternalUtilMockCreationValidator_H_
