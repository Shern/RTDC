//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-0.9.5/j2objc/junit/build_result/java/org/junit/runner/manipulation/Filter.java
//

#ifndef _OrgJunitRunnerManipulationFilter_H_
#define _OrgJunitRunnerManipulationFilter_H_

@class OrgJunitRunnerDescription;

#import "JreEmulation.h"

@interface OrgJunitRunnerManipulationFilter : NSObject {
}

+ (OrgJunitRunnerManipulationFilter *)matchMethodDescriptionWithOrgJunitRunnerDescription:(OrgJunitRunnerDescription *)desiredDescription;

- (jboolean)shouldRunWithOrgJunitRunnerDescription:(OrgJunitRunnerDescription *)description_;

- (NSString *)describe;

- (void)applyWithId:(id)child;

- (OrgJunitRunnerManipulationFilter *)intersectWithOrgJunitRunnerManipulationFilter:(OrgJunitRunnerManipulationFilter *)second;

- (instancetype)init;

@end

FOUNDATION_EXPORT BOOL OrgJunitRunnerManipulationFilter_initialized;
J2OBJC_STATIC_INIT(OrgJunitRunnerManipulationFilter)
FOUNDATION_EXPORT OrgJunitRunnerManipulationFilter *OrgJunitRunnerManipulationFilter_matchMethodDescriptionWithOrgJunitRunnerDescription_(OrgJunitRunnerDescription *desiredDescription);

FOUNDATION_EXPORT OrgJunitRunnerManipulationFilter *OrgJunitRunnerManipulationFilter_ALL_;
J2OBJC_STATIC_FIELD_GETTER(OrgJunitRunnerManipulationFilter, ALL_, OrgJunitRunnerManipulationFilter *)
J2OBJC_STATIC_FIELD_SETTER(OrgJunitRunnerManipulationFilter, ALL_, OrgJunitRunnerManipulationFilter *)

@interface OrgJunitRunnerManipulationFilter_$1 : OrgJunitRunnerManipulationFilter {
}

- (jboolean)shouldRunWithOrgJunitRunnerDescription:(OrgJunitRunnerDescription *)description_;

- (NSString *)describe;

- (void)applyWithId:(id)child;

- (OrgJunitRunnerManipulationFilter *)intersectWithOrgJunitRunnerManipulationFilter:(OrgJunitRunnerManipulationFilter *)second;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void OrgJunitRunnerManipulationFilter_$1_init() {}

@interface OrgJunitRunnerManipulationFilter_$2 : OrgJunitRunnerManipulationFilter {
 @public
  OrgJunitRunnerDescription *val$desiredDescription_;
}

- (jboolean)shouldRunWithOrgJunitRunnerDescription:(OrgJunitRunnerDescription *)description_;

- (NSString *)describe;

- (instancetype)initWithOrgJunitRunnerDescription:(OrgJunitRunnerDescription *)capture$0;

- (void)dealloc;

- (void)copyAllFieldsTo:(OrgJunitRunnerManipulationFilter_$2 *)other;

@end

__attribute__((always_inline)) inline void OrgJunitRunnerManipulationFilter_$2_init() {}

J2OBJC_FIELD_SETTER(OrgJunitRunnerManipulationFilter_$2, val$desiredDescription_, OrgJunitRunnerDescription *)

@interface OrgJunitRunnerManipulationFilter_$3 : OrgJunitRunnerManipulationFilter {
 @public
  OrgJunitRunnerManipulationFilter *val$first_;
  OrgJunitRunnerManipulationFilter *val$second_;
}

- (jboolean)shouldRunWithOrgJunitRunnerDescription:(OrgJunitRunnerDescription *)description_;

- (NSString *)describe;

- (instancetype)initWithOrgJunitRunnerManipulationFilter:(OrgJunitRunnerManipulationFilter *)capture$0
                    withOrgJunitRunnerManipulationFilter:(OrgJunitRunnerManipulationFilter *)capture$1;

- (void)dealloc;

- (void)copyAllFieldsTo:(OrgJunitRunnerManipulationFilter_$3 *)other;

@end

__attribute__((always_inline)) inline void OrgJunitRunnerManipulationFilter_$3_init() {}

J2OBJC_FIELD_SETTER(OrgJunitRunnerManipulationFilter_$3, val$first_, OrgJunitRunnerManipulationFilter *)
J2OBJC_FIELD_SETTER(OrgJunitRunnerManipulationFilter_$3, val$second_, OrgJunitRunnerManipulationFilter *)

#endif // _OrgJunitRunnerManipulationFilter_H_
