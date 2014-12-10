//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-0.9.5/j2objc/testing/mockito/build_result/java/org/mockito/internal/verification/VerificationWithTimeoutImpl.java
//

#ifndef _OrgMockitoInternalVerificationVerificationWithTimeoutImpl_H_
#define _OrgMockitoInternalVerificationVerificationWithTimeoutImpl_H_

@protocol OrgMockitoInternalVerificationApiVerificationData;
@protocol OrgMockitoVerificationVerificationMode;

#import "JreEmulation.h"

@interface OrgMockitoInternalVerificationVerificationWithTimeoutImpl : NSObject {
 @public
  id<OrgMockitoVerificationVerificationMode> delegate_;
  jint timeout_;
  jint treshhold_;
}

- (instancetype)initWithInt:(jint)treshhold
                    withInt:(jint)millis
withOrgMockitoVerificationVerificationMode:(id<OrgMockitoVerificationVerificationMode>)delegate;

- (void)verifyWithOrgMockitoInternalVerificationApiVerificationData:(id<OrgMockitoInternalVerificationApiVerificationData>)data;

- (void)sleepWithInt:(jint)sleep;

- (id<OrgMockitoVerificationVerificationMode>)getDelegate;

- (jint)getTimeout;

- (jint)getTreshhold;

- (void)dealloc;

- (void)copyAllFieldsTo:(OrgMockitoInternalVerificationVerificationWithTimeoutImpl *)other;

@end

__attribute__((always_inline)) inline void OrgMockitoInternalVerificationVerificationWithTimeoutImpl_init() {}

J2OBJC_FIELD_SETTER(OrgMockitoInternalVerificationVerificationWithTimeoutImpl, delegate_, id<OrgMockitoVerificationVerificationMode>)

#endif // _OrgMockitoInternalVerificationVerificationWithTimeoutImpl_H_
