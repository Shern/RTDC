//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-0.9.5/j2objc/testing/mockito/build_result/java/org/mockito/internal/matchers/StartsWith.java
//

#ifndef _OrgMockitoInternalMatchersStartsWith_H_
#define _OrgMockitoInternalMatchersStartsWith_H_

@protocol OrgHamcrestDescription;

#import "JreEmulation.h"
#include "java/io/Serializable.h"
#include "org/mockito/ArgumentMatcher.h"

#define OrgMockitoInternalMatchersStartsWith_serialVersionUID -5978092285707998431LL

@interface OrgMockitoInternalMatchersStartsWith : OrgMockitoArgumentMatcher < JavaIoSerializable > {
 @public
  NSString *prefix_;
}

- (instancetype)initWithNSString:(NSString *)prefix;

- (jboolean)matchesWithId:(id)actual;

- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

- (void)dealloc;

- (void)copyAllFieldsTo:(OrgMockitoInternalMatchersStartsWith *)other;

@end

__attribute__((always_inline)) inline void OrgMockitoInternalMatchersStartsWith_init() {}

J2OBJC_FIELD_SETTER(OrgMockitoInternalMatchersStartsWith, prefix_, NSString *)

J2OBJC_STATIC_FIELD_GETTER(OrgMockitoInternalMatchersStartsWith, serialVersionUID, jlong)

#endif // _OrgMockitoInternalMatchersStartsWith_H_
