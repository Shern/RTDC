//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-0.9.5/j2objc/testing/mockito/build_result/java/org/mockito/internal/configuration/injection/filter/FinalMockCandidateFilter.java
//

#ifndef _OrgMockitoInternalConfigurationInjectionFilterFinalMockCandidateFilter_H_
#define _OrgMockitoInternalConfigurationInjectionFilterFinalMockCandidateFilter_H_

@class JavaLangReflectField;
@protocol JavaUtilCollection;

#import "JreEmulation.h"
#include "org/mockito/internal/configuration/injection/filter/MockCandidateFilter.h"
#include "org/mockito/internal/configuration/injection/filter/OngoingInjecter.h"

@interface OrgMockitoInternalConfigurationInjectionFilterFinalMockCandidateFilter : NSObject < OrgMockitoInternalConfigurationInjectionFilterMockCandidateFilter > {
}

- (id<OrgMockitoInternalConfigurationInjectionFilterOngoingInjecter>)filterCandidateWithJavaUtilCollection:(id<JavaUtilCollection>)mocks
                                                                                  withJavaLangReflectField:(JavaLangReflectField *)field
                                                                                                    withId:(id)fieldInstance;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void OrgMockitoInternalConfigurationInjectionFilterFinalMockCandidateFilter_init() {}

@interface OrgMockitoInternalConfigurationInjectionFilterFinalMockCandidateFilter_$1 : NSObject < OrgMockitoInternalConfigurationInjectionFilterOngoingInjecter > {
 @public
  id val$fieldInstance_;
  JavaLangReflectField *val$field_;
  id val$matchingMock_;
}

- (id)thenInject;

- (instancetype)initWithId:(id)capture$0
  withJavaLangReflectField:(JavaLangReflectField *)capture$1
                    withId:(id)capture$2;

- (void)dealloc;

- (void)copyAllFieldsTo:(OrgMockitoInternalConfigurationInjectionFilterFinalMockCandidateFilter_$1 *)other;

@end

__attribute__((always_inline)) inline void OrgMockitoInternalConfigurationInjectionFilterFinalMockCandidateFilter_$1_init() {}

J2OBJC_FIELD_SETTER(OrgMockitoInternalConfigurationInjectionFilterFinalMockCandidateFilter_$1, val$fieldInstance_, id)
J2OBJC_FIELD_SETTER(OrgMockitoInternalConfigurationInjectionFilterFinalMockCandidateFilter_$1, val$field_, JavaLangReflectField *)
J2OBJC_FIELD_SETTER(OrgMockitoInternalConfigurationInjectionFilterFinalMockCandidateFilter_$1, val$matchingMock_, id)

@interface OrgMockitoInternalConfigurationInjectionFilterFinalMockCandidateFilter_$2 : NSObject < OrgMockitoInternalConfigurationInjectionFilterOngoingInjecter > {
}

- (id)thenInject;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void OrgMockitoInternalConfigurationInjectionFilterFinalMockCandidateFilter_$2_init() {}

#endif // _OrgMockitoInternalConfigurationInjectionFilterFinalMockCandidateFilter_H_
