//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: Z:\RTDC\core\src\main\java\rtdc\core\Bootstrapper.java
//

#ifndef _RtdcCoreBootstrapper_H_
#define _RtdcCoreBootstrapper_H_

@protocol RtdcCoreImplFactory;

#import "JreEmulation.h"

@interface RtdcCoreBootstrapper : NSObject {
}

+ (void)initialize__WithRtdcCoreImplFactory:(id<RtdcCoreImplFactory>)factory OBJC_METHOD_FAMILY_NONE;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void RtdcCoreBootstrapper_init() {}
FOUNDATION_EXPORT void RtdcCoreBootstrapper_initialize__WithRtdcCoreImplFactory_(id<RtdcCoreImplFactory> factory);

FOUNDATION_EXPORT id<RtdcCoreImplFactory> RtdcCoreBootstrapper_FACTORY_;
J2OBJC_STATIC_FIELD_GETTER(RtdcCoreBootstrapper, FACTORY_, id<RtdcCoreImplFactory>)
J2OBJC_STATIC_FIELD_SETTER(RtdcCoreBootstrapper, FACTORY_, id<RtdcCoreImplFactory>)

FOUNDATION_EXPORT NSString *RtdcCoreBootstrapper_AUTHENTICATION_TOKEN_;
J2OBJC_STATIC_FIELD_GETTER(RtdcCoreBootstrapper, AUTHENTICATION_TOKEN_, NSString *)
J2OBJC_STATIC_FIELD_SETTER(RtdcCoreBootstrapper, AUTHENTICATION_TOKEN_, NSString *)

#endif // _RtdcCoreBootstrapper_H_
