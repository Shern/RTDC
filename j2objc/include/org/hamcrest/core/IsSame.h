//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-0.9.5/j2objc/junit/build_result/java/org/hamcrest/core/IsSame.java
//

#ifndef _OrgHamcrestCoreIsSame_H_
#define _OrgHamcrestCoreIsSame_H_

@protocol OrgHamcrestDescription;
@protocol OrgHamcrestMatcher;

#import "JreEmulation.h"
#include "org/hamcrest/BaseMatcher.h"

@interface OrgHamcrestCoreIsSame : OrgHamcrestBaseMatcher {
 @public
  id object_;
}

- (instancetype)initWithId:(id)object;

- (jboolean)matchesWithId:(id)arg;

- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

+ (id<OrgHamcrestMatcher>)sameInstanceWithId:(id)object;

- (void)dealloc;

- (void)copyAllFieldsTo:(OrgHamcrestCoreIsSame *)other;

@end

__attribute__((always_inline)) inline void OrgHamcrestCoreIsSame_init() {}

J2OBJC_FIELD_SETTER(OrgHamcrestCoreIsSame, object_, id)
FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreIsSame_sameInstanceWithId_(id object);

#endif // _OrgHamcrestCoreIsSame_H_
