//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nicolasmenard/IdeaProjects/RTDC/core/src/main/java/rtdc/core/controller/UnitListController.java
//

#ifndef _ControllerUnitListController_H_
#define _ControllerUnitListController_H_

@class ModelUnit;
@protocol JavaUtilList;
@protocol RtdcCoreViewUnitListView;

#import "JreEmulation.h"
#include "AsyncCallback.h"

@interface ControllerUnitListController : NSObject {
 @public
  id<RtdcCoreViewUnitListView> view_;
}

- (instancetype)initWithRtdcCoreViewUnitListView:(id<RtdcCoreViewUnitListView>)view;

- (void)onClickUserWithModelUnit:(ModelUnit *)unit;

- (void)onClickNewUser;

- (void)dealloc;

- (void)copyAllFieldsTo:(ControllerUnitListController *)other;

@end

__attribute__((always_inline)) inline void ControllerUnitListController_init() {}

J2OBJC_FIELD_SETTER(ControllerUnitListController, view_, id<RtdcCoreViewUnitListView>)

typedef ControllerUnitListController RtdcCoreControllerUnitListController;

@interface ControllerUnitListController_$1 : NSObject < ServiceAsyncCallback > {
 @public
  ControllerUnitListController *this$0_;
}

- (void)onSuccessWithId:(id<JavaUtilList>)units;

- (void)onErrorWithNSString:(NSString *)message;

- (instancetype)initWithControllerUnitListController:(ControllerUnitListController *)outer$;

- (void)dealloc;

- (void)copyAllFieldsTo:(ControllerUnitListController_$1 *)other;

@end

__attribute__((always_inline)) inline void ControllerUnitListController_$1_init() {}

J2OBJC_FIELD_SETTER(ControllerUnitListController_$1, this$0_, ControllerUnitListController *)

#endif // _ControllerUnitListController_H_
