//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-0.9.5/j2objc/testing/mockito/build_result/java/org/mockito/internal/handler/MockHandlerImpl.java
//

#ifndef _OrgMockitoInternalHandlerMockHandlerImpl_H_
#define _OrgMockitoInternalHandlerMockHandlerImpl_H_

@class OrgMockitoInternalInvocationMatchersBinder;
@class OrgMockitoInternalStubbingInvocationContainerImpl;
@protocol JavaUtilList;
@protocol OrgMockitoInternalProgressMockingProgress;
@protocol OrgMockitoInternalStubbingInvocationContainer;
@protocol OrgMockitoInvocationInvocation;
@protocol OrgMockitoMockMockCreationSettings;
@protocol OrgMockitoStubbingVoidMethodStubbable;

#import "JreEmulation.h"
#include "org/mockito/internal/InternalMockHandler.h"

#define OrgMockitoInternalHandlerMockHandlerImpl_serialVersionUID -2917871070982574165LL

@interface OrgMockitoInternalHandlerMockHandlerImpl : NSObject < OrgMockitoInternalInternalMockHandler > {
 @public
  OrgMockitoInternalStubbingInvocationContainerImpl *invocationContainerImpl_;
  OrgMockitoInternalInvocationMatchersBinder *matchersBinder_;
  id<OrgMockitoInternalProgressMockingProgress> mockingProgress_;
  id<OrgMockitoMockMockCreationSettings> mockSettings_;
}

- (instancetype)initWithOrgMockitoMockMockCreationSettings:(id<OrgMockitoMockMockCreationSettings>)mockSettings;

- (id)handleWithOrgMockitoInvocationInvocation:(id<OrgMockitoInvocationInvocation>)invocation;

- (id<OrgMockitoStubbingVoidMethodStubbable>)voidMethodStubbableWithId:(id)mock;

- (id<OrgMockitoMockMockCreationSettings>)getMockSettings;

- (void)setAnswersForStubbingWithJavaUtilList:(id<JavaUtilList>)answers;

- (id<OrgMockitoInternalStubbingInvocationContainer>)getInvocationContainer;

- (void)dealloc;

- (void)copyAllFieldsTo:(OrgMockitoInternalHandlerMockHandlerImpl *)other;

@end

__attribute__((always_inline)) inline void OrgMockitoInternalHandlerMockHandlerImpl_init() {}

J2OBJC_FIELD_SETTER(OrgMockitoInternalHandlerMockHandlerImpl, invocationContainerImpl_, OrgMockitoInternalStubbingInvocationContainerImpl *)
J2OBJC_FIELD_SETTER(OrgMockitoInternalHandlerMockHandlerImpl, matchersBinder_, OrgMockitoInternalInvocationMatchersBinder *)
J2OBJC_FIELD_SETTER(OrgMockitoInternalHandlerMockHandlerImpl, mockingProgress_, id<OrgMockitoInternalProgressMockingProgress>)
J2OBJC_FIELD_SETTER(OrgMockitoInternalHandlerMockHandlerImpl, mockSettings_, id<OrgMockitoMockMockCreationSettings>)

J2OBJC_STATIC_FIELD_GETTER(OrgMockitoInternalHandlerMockHandlerImpl, serialVersionUID, jlong)

#endif // _OrgMockitoInternalHandlerMockHandlerImpl_H_
