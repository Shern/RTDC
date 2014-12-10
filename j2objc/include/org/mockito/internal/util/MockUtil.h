//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-0.9.5/j2objc/testing/mockito/build_result/java/org/mockito/internal/util/MockUtil.java
//

#ifndef _OrgMockitoInternalUtilMockUtil_H_
#define _OrgMockitoInternalUtilMockUtil_H_

@protocol OrgMockitoInternalInternalMockHandler;
@protocol OrgMockitoMockMockCreationSettings;
@protocol OrgMockitoMockMockName;
@protocol OrgMockitoPluginsMockMaker;

#import "JreEmulation.h"

@interface OrgMockitoInternalUtilMockUtil : NSObject {
}

- (id)createMockWithOrgMockitoMockMockCreationSettings:(id<OrgMockitoMockMockCreationSettings>)settings;

- (void)resetMockWithId:(id)mock;

- (id<OrgMockitoInternalInternalMockHandler>)getMockHandlerWithId:(id)mock;

- (jboolean)isMockWithId:(id)mock;

- (jboolean)isSpyWithId:(id)mock;

- (jboolean)isMockitoMockWithId:(id)mock;

- (id<OrgMockitoMockMockName>)getMockNameWithId:(id)mock;

- (void)maybeRedefineMockNameWithId:(id)mock
                       withNSString:(NSString *)newName;

- (instancetype)init;

@end

FOUNDATION_EXPORT BOOL OrgMockitoInternalUtilMockUtil_initialized;
J2OBJC_STATIC_INIT(OrgMockitoInternalUtilMockUtil)

FOUNDATION_EXPORT id<OrgMockitoPluginsMockMaker> OrgMockitoInternalUtilMockUtil_mockMaker_;
J2OBJC_STATIC_FIELD_GETTER(OrgMockitoInternalUtilMockUtil, mockMaker_, id<OrgMockitoPluginsMockMaker>)

#endif // _OrgMockitoInternalUtilMockUtil_H_
