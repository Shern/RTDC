//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nicolasmenard/IdeaProjects/RTDC/core/src/main/java/rtdc/core/controller/AddUnitController.java
//

#ifndef _ControllerAddUnitController_H_
#define _ControllerAddUnitController_H_

@class JavaLangBoolean;
@protocol RtdcCoreViewAddUnitView;

#import "JreEmulation.h"
#include "AsyncCallback.h"

@interface ControllerAddUnitController : NSObject {
 @public
  id<RtdcCoreViewAddUnitView> view_;
}

- (instancetype)initWithRtdcCoreViewAddUnitView:(id<RtdcCoreViewAddUnitView>)view;

- (void)addUnit;

- (void)dealloc;

- (void)copyAllFieldsTo:(ControllerAddUnitController *)other;

@end

__attribute__((always_inline)) inline void ControllerAddUnitController_init() {}

J2OBJC_FIELD_SETTER(ControllerAddUnitController, view_, id<RtdcCoreViewAddUnitView>)

typedef ControllerAddUnitController RtdcCoreControllerAddUnitController;

@interface ControllerAddUnitController_$1 : NSObject < ServiceAsyncCallback > {
 @public
  ControllerAddUnitController *this$0_;
}

- (void)onSuccessWithId:(JavaLangBoolean *)result;

- (void)onErrorWithNSString:(NSString *)message;

- (instancetype)initWithControllerAddUnitController:(ControllerAddUnitController *)outer$;

- (void)dealloc;

- (void)copyAllFieldsTo:(ControllerAddUnitController_$1 *)other;

@end

__attribute__((always_inline)) inline void ControllerAddUnitController_$1_init() {}

J2OBJC_FIELD_SETTER(ControllerAddUnitController_$1, this$0_, ControllerAddUnitController *)

#endif // _ControllerAddUnitController_H_
