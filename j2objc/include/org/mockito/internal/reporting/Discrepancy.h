//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-0.9.5/j2objc/testing/mockito/build_result/java/org/mockito/internal/reporting/Discrepancy.java
//

#ifndef _OrgMockitoInternalReportingDiscrepancy_H_
#define _OrgMockitoInternalReportingDiscrepancy_H_

#import "JreEmulation.h"

@interface OrgMockitoInternalReportingDiscrepancy : NSObject {
 @public
  jint wantedCount_;
  jint actualCount_;
}

- (instancetype)initWithInt:(jint)wantedCount
                    withInt:(jint)actualCount;

- (jint)getWantedCount;

- (NSString *)getPluralizedWantedCount;

- (jint)getActualCount;

- (NSString *)getPluralizedActualCount;

- (void)copyAllFieldsTo:(OrgMockitoInternalReportingDiscrepancy *)other;

@end

__attribute__((always_inline)) inline void OrgMockitoInternalReportingDiscrepancy_init() {}

#endif // _OrgMockitoInternalReportingDiscrepancy_H_
