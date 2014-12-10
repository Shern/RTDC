//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-0.9.5/j2objc/junit/build_result/java/org/junit/runner/Computer.java
//

#ifndef _OrgJunitRunnerComputer_H_
#define _OrgJunitRunnerComputer_H_

@class IOSClass;
@class IOSObjectArray;
@class OrgJunitRunnerRunner;

#import "JreEmulation.h"
#include "org/junit/runners/model/RunnerBuilder.h"

@interface OrgJunitRunnerComputer : NSObject {
}

+ (OrgJunitRunnerComputer *)serial;

- (OrgJunitRunnerRunner *)getSuiteWithOrgJunitRunnersModelRunnerBuilder:(OrgJunitRunnersModelRunnerBuilder *)builder
                                                      withIOSClassArray:(IOSObjectArray *)classes;

- (OrgJunitRunnerRunner *)getRunnerWithOrgJunitRunnersModelRunnerBuilder:(OrgJunitRunnersModelRunnerBuilder *)builder
                                                            withIOSClass:(IOSClass *)testClass;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void OrgJunitRunnerComputer_init() {}
FOUNDATION_EXPORT OrgJunitRunnerComputer *OrgJunitRunnerComputer_serial();

@interface OrgJunitRunnerComputer_$1 : OrgJunitRunnersModelRunnerBuilder {
 @public
  OrgJunitRunnerComputer *this$0_;
  OrgJunitRunnersModelRunnerBuilder *val$builder_;
}

- (OrgJunitRunnerRunner *)runnerForClassWithIOSClass:(IOSClass *)testClass;

- (instancetype)initWithOrgJunitRunnerComputer:(OrgJunitRunnerComputer *)outer$
         withOrgJunitRunnersModelRunnerBuilder:(OrgJunitRunnersModelRunnerBuilder *)capture$0;

- (void)dealloc;

- (void)copyAllFieldsTo:(OrgJunitRunnerComputer_$1 *)other;

@end

__attribute__((always_inline)) inline void OrgJunitRunnerComputer_$1_init() {}

J2OBJC_FIELD_SETTER(OrgJunitRunnerComputer_$1, this$0_, OrgJunitRunnerComputer *)
J2OBJC_FIELD_SETTER(OrgJunitRunnerComputer_$1, val$builder_, OrgJunitRunnersModelRunnerBuilder *)

#endif // _OrgJunitRunnerComputer_H_