//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-0.9.5/j2objc/testing/mockito/build_result/java/org/mockito/internal/stubbing/answers/AnswersValidator.java
//

#ifndef _OrgMockitoInternalStubbingAnswersAnswersValidator_H_
#define _OrgMockitoInternalStubbingAnswersAnswersValidator_H_

@class OrgMockitoExceptionsReporter;
@class OrgMockitoInternalStubbingAnswersCallsRealMethods;
@class OrgMockitoInternalStubbingAnswersDoesNothing;
@class OrgMockitoInternalStubbingAnswersMethodInfo;
@class OrgMockitoInternalStubbingAnswersReturns;
@class OrgMockitoInternalStubbingAnswersReturnsArgumentAt;
@class OrgMockitoInternalStubbingAnswersThrowsException;
@protocol OrgMockitoInvocationInvocation;
@protocol OrgMockitoStubbingAnswer;

#import "JreEmulation.h"

@interface OrgMockitoInternalStubbingAnswersAnswersValidator : NSObject {
 @public
  OrgMockitoExceptionsReporter *reporter_;
}

- (void)validateWithOrgMockitoStubbingAnswer:(id<OrgMockitoStubbingAnswer>)answer
          withOrgMockitoInvocationInvocation:(id<OrgMockitoInvocationInvocation>)invocation;

- (void)validateReturnArgIdentityWithOrgMockitoInternalStubbingAnswersReturnsArgumentAt:(OrgMockitoInternalStubbingAnswersReturnsArgumentAt *)returnsArgumentAt
                                                     withOrgMockitoInvocationInvocation:(id<OrgMockitoInvocationInvocation>)invocation;

- (void)validateMockingConcreteClassWithOrgMockitoInternalStubbingAnswersCallsRealMethods:(OrgMockitoInternalStubbingAnswersCallsRealMethods *)answer
                                          withOrgMockitoInternalStubbingAnswersMethodInfo:(OrgMockitoInternalStubbingAnswersMethodInfo *)methodInfo;

- (void)validateDoNothingWithOrgMockitoInternalStubbingAnswersDoesNothing:(OrgMockitoInternalStubbingAnswersDoesNothing *)answer
                          withOrgMockitoInternalStubbingAnswersMethodInfo:(OrgMockitoInternalStubbingAnswersMethodInfo *)methodInfo;

- (void)validateReturnValueWithOrgMockitoInternalStubbingAnswersReturns:(OrgMockitoInternalStubbingAnswersReturns *)answer
                        withOrgMockitoInternalStubbingAnswersMethodInfo:(OrgMockitoInternalStubbingAnswersMethodInfo *)methodInfo;

- (void)validateExceptionWithOrgMockitoInternalStubbingAnswersThrowsException:(OrgMockitoInternalStubbingAnswersThrowsException *)answer
                              withOrgMockitoInternalStubbingAnswersMethodInfo:(OrgMockitoInternalStubbingAnswersMethodInfo *)methodInfo;

- (instancetype)init;

- (void)dealloc;

- (void)copyAllFieldsTo:(OrgMockitoInternalStubbingAnswersAnswersValidator *)other;

@end

__attribute__((always_inline)) inline void OrgMockitoInternalStubbingAnswersAnswersValidator_init() {}

J2OBJC_FIELD_SETTER(OrgMockitoInternalStubbingAnswersAnswersValidator, reporter_, OrgMockitoExceptionsReporter *)

#endif // _OrgMockitoInternalStubbingAnswersAnswersValidator_H_