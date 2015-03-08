//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: Z:\RTDC\core\src\main\java\rtdc\core\controller\AddUserController.java
//

#ifndef _RtdcCoreControllerAddUserController_H_
#define _RtdcCoreControllerAddUserController_H_

@class JavaLangBoolean;
@protocol RtdcCoreViewAddUserView;

#import "JreEmulation.h"
#include "AsyncCallback.h"

@interface RtdcCoreControllerAddUserController : NSObject {
 @public
  id<RtdcCoreViewAddUserView> view_;
}

- (instancetype)initWithRtdcCoreViewAddUserView:(id<RtdcCoreViewAddUserView>)view;

- (void)addUser;

- (void)dealloc;

- (void)copyAllFieldsTo:(RtdcCoreControllerAddUserController *)other;

@end

__attribute__((always_inline)) inline void RtdcCoreControllerAddUserController_init() {}

J2OBJC_FIELD_SETTER(RtdcCoreControllerAddUserController, view_, id<RtdcCoreViewAddUserView>)

@interface RtdcCoreControllerAddUserController_$1 : NSObject < RtdcCoreServiceAsyncCallback > {
 @public
  RtdcCoreControllerAddUserController *this$0_;
}

- (void)onSuccessWithId:(JavaLangBoolean *)result;

- (void)onErrorWithNSString:(NSString *)message;

- (instancetype)initWithRtdcCoreControllerAddUserController:(RtdcCoreControllerAddUserController *)outer$;

- (void)dealloc;

- (void)copyAllFieldsTo:(RtdcCoreControllerAddUserController_$1 *)other;

@end

__attribute__((always_inline)) inline void RtdcCoreControllerAddUserController_$1_init() {}

J2OBJC_FIELD_SETTER(RtdcCoreControllerAddUserController_$1, this$0_, RtdcCoreControllerAddUserController *)

#endif // _RtdcCoreControllerAddUserController_H_
