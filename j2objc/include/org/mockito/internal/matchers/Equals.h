//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-0.9.5/j2objc/testing/mockito/build_result/java/org/mockito/internal/matchers/Equals.java
//

#ifndef _OrgMockitoInternalMatchersEquals_H_
#define _OrgMockitoInternalMatchersEquals_H_

@protocol OrgHamcrestDescription;

#import "JreEmulation.h"
#include "java/io/Serializable.h"
#include "org/hamcrest/SelfDescribing.h"
#include "org/mockito/ArgumentMatcher.h"
#include "org/mockito/internal/matchers/ContainsExtraTypeInformation.h"

#define OrgMockitoInternalMatchersEquals_serialVersionUID -3395637450058086891LL

@interface OrgMockitoInternalMatchersEquals : OrgMockitoArgumentMatcher < OrgMockitoInternalMatchersContainsExtraTypeInformation, JavaIoSerializable > {
 @public
  id wanted_;
}

- (instancetype)initWithId:(id)wanted;

- (jboolean)matchesWithId:(id)actual;

- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

- (NSString *)describeWithId:(id)object;

- (NSString *)quoting;

- (id)getWanted;

- (jboolean)isEqual:(id)o;

- (NSUInteger)hash;

- (id<OrgHamcrestSelfDescribing>)withExtraTypeInfo;

- (jboolean)typeMatchesWithId:(id)object;

- (void)dealloc;

- (void)copyAllFieldsTo:(OrgMockitoInternalMatchersEquals *)other;

@end

__attribute__((always_inline)) inline void OrgMockitoInternalMatchersEquals_init() {}

J2OBJC_FIELD_SETTER(OrgMockitoInternalMatchersEquals, wanted_, id)

J2OBJC_STATIC_FIELD_GETTER(OrgMockitoInternalMatchersEquals, serialVersionUID, jlong)

@interface OrgMockitoInternalMatchersEquals_$1 : NSObject < OrgHamcrestSelfDescribing > {
 @public
  OrgMockitoInternalMatchersEquals *this$0_;
}

- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

- (instancetype)initWithOrgMockitoInternalMatchersEquals:(OrgMockitoInternalMatchersEquals *)outer$;

- (void)dealloc;

- (void)copyAllFieldsTo:(OrgMockitoInternalMatchersEquals_$1 *)other;

@end

__attribute__((always_inline)) inline void OrgMockitoInternalMatchersEquals_$1_init() {}

J2OBJC_FIELD_SETTER(OrgMockitoInternalMatchersEquals_$1, this$0_, OrgMockitoInternalMatchersEquals *)

#endif // _OrgMockitoInternalMatchersEquals_H_
