//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-0.9.5/j2objc/guava/sources/com/google/common/eventbus/SynchronizedEventHandler.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonEventbusSynchronizedEventHandler_RESTRICT
#define ComGoogleCommonEventbusSynchronizedEventHandler_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonEventbusSynchronizedEventHandler_RESTRICT
#if !defined (_ComGoogleCommonEventbusSynchronizedEventHandler_) && (ComGoogleCommonEventbusSynchronizedEventHandler_INCLUDE_ALL || ComGoogleCommonEventbusSynchronizedEventHandler_INCLUDE)
#define _ComGoogleCommonEventbusSynchronizedEventHandler_

@class JavaLangReflectMethod;

#define ComGoogleCommonEventbusEventHandler_RESTRICT 1
#define ComGoogleCommonEventbusEventHandler_INCLUDE 1
#include "com/google/common/eventbus/EventHandler.h"


@interface ComGoogleCommonEventbusSynchronizedEventHandler : ComGoogleCommonEventbusEventHandler {
}

- (instancetype)initWithId:(id)target
 withJavaLangReflectMethod:(JavaLangReflectMethod *)method;

- (void)handleEventWithId:(id)event;

@end

__attribute__((always_inline)) inline void ComGoogleCommonEventbusSynchronizedEventHandler_init() {}
#endif
