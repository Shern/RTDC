//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-0.9.5/j2objc/junit/build_result/java/junit/framework/JUnit4TestAdapter.java
//

#ifndef _JunitFrameworkJUnit4TestAdapter_H_
#define _JunitFrameworkJUnit4TestAdapter_H_

@class IOSClass;
@class JunitFrameworkJUnit4TestAdapterCache;
@class JunitFrameworkTestResult;
@class OrgJunitRunnerDescription;
@class OrgJunitRunnerManipulationFilter;
@class OrgJunitRunnerManipulationSorter;
@class OrgJunitRunnerRunner;
@protocol JavaUtilList;

#import "JreEmulation.h"
#include "junit/framework/Test.h"
#include "org/junit/runner/Describable.h"
#include "org/junit/runner/manipulation/Filterable.h"
#include "org/junit/runner/manipulation/Sortable.h"

@interface JunitFrameworkJUnit4TestAdapter : NSObject < JunitFrameworkTest, OrgJunitRunnerManipulationFilterable, OrgJunitRunnerManipulationSortable, OrgJunitRunnerDescribable > {
 @public
  IOSClass *fNewTestClass_;
  OrgJunitRunnerRunner *fRunner_;
  JunitFrameworkJUnit4TestAdapterCache *fCache_;
}

- (instancetype)initWithIOSClass:(IOSClass *)newTestClass;

- (instancetype)initWithIOSClass:(IOSClass *)newTestClass
withJunitFrameworkJUnit4TestAdapterCache:(JunitFrameworkJUnit4TestAdapterCache *)cache;

- (jint)countTestCases;

- (void)runWithJunitFrameworkTestResult:(JunitFrameworkTestResult *)result;

- (id<JavaUtilList>)getTests;

- (IOSClass *)getTestClass;

- (OrgJunitRunnerDescription *)getDescription;

- (OrgJunitRunnerDescription *)removeIgnoredWithOrgJunitRunnerDescription:(OrgJunitRunnerDescription *)description_;

- (jboolean)isIgnoredWithOrgJunitRunnerDescription:(OrgJunitRunnerDescription *)description_;

- (NSString *)description;

- (void)filterWithOrgJunitRunnerManipulationFilter:(OrgJunitRunnerManipulationFilter *)filter;

- (void)sortWithOrgJunitRunnerManipulationSorter:(OrgJunitRunnerManipulationSorter *)sorter;

- (void)dealloc;

- (void)copyAllFieldsTo:(JunitFrameworkJUnit4TestAdapter *)other;

@end

__attribute__((always_inline)) inline void JunitFrameworkJUnit4TestAdapter_init() {}

J2OBJC_FIELD_SETTER(JunitFrameworkJUnit4TestAdapter, fNewTestClass_, IOSClass *)
J2OBJC_FIELD_SETTER(JunitFrameworkJUnit4TestAdapter, fRunner_, OrgJunitRunnerRunner *)
J2OBJC_FIELD_SETTER(JunitFrameworkJUnit4TestAdapter, fCache_, JunitFrameworkJUnit4TestAdapterCache *)

#endif // _JunitFrameworkJUnit4TestAdapter_H_
