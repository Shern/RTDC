//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: Z:\RTDC\core\src\main\java\rtdc\core\controller\UnitListController.java
//

#include "IOSClass.h"
#include "Service.h"
#include "Unit.h"
#include "UnitListController.h"
#include "UnitListView.h"
#include "java/util/List.h"

@implementation RtdcCoreControllerUnitListController

- (instancetype)initWithRtdcCoreViewUnitListView:(id<RtdcCoreViewUnitListView>)view {
  if (self = [super init]) {
    RtdcCoreControllerUnitListController_set_view_(self, view);
    RtdcCoreServiceService_getUnitsWithRtdcCoreServiceAsyncCallback_([[[RtdcCoreControllerUnitListController_$1 alloc] initWithRtdcCoreControllerUnitListController:self] autorelease]);
  }
  return self;
}

- (void)onClickUserWithRtdcCoreModelUnit:(RtdcCoreModelUnit *)unit {
}

- (void)onClickNewUser {
}

- (void)dealloc {
  RtdcCoreControllerUnitListController_set_view_(self, nil);
  [super dealloc];
}

- (void)copyAllFieldsTo:(RtdcCoreControllerUnitListController *)other {
  [super copyAllFieldsTo:other];
  RtdcCoreControllerUnitListController_set_view_(other, view_);
}

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "initWithRtdcCoreViewUnitListView:", "UnitListController", NULL, 0x1, NULL },
    { "onClickUserWithRtdcCoreModelUnit:", "onClickUser", "V", 0x1, NULL },
    { "onClickNewUser", NULL, "V", 0x1, NULL },
  };
  static const J2ObjcFieldInfo fields[] = {
    { "view_", NULL, 0x2, "Lrtdc.core.view.UnitListView;", NULL,  },
  };
  static const J2ObjcClassInfo _RtdcCoreControllerUnitListController = { "UnitListController", "rtdc.core.controller", NULL, 0x1, 3, methods, 1, fields, 0, NULL};
  return &_RtdcCoreControllerUnitListController;
}

@end

@implementation RtdcCoreControllerUnitListController_$1

- (void)onSuccessWithId:(id<JavaUtilList>)units {
  [((id<RtdcCoreViewUnitListView>) nil_chk(this$0_->view_)) setUnitsWithJavaUtilList:units];
}

- (void)onErrorWithNSString:(NSString *)message {
  [((id<RtdcCoreViewUnitListView>) nil_chk(this$0_->view_)) displayErrorWithNSString:@"Error" withNSString:message];
}

- (instancetype)initWithRtdcCoreControllerUnitListController:(RtdcCoreControllerUnitListController *)outer$ {
  RtdcCoreControllerUnitListController_$1_set_this$0_(self, outer$);
  return [super init];
}

- (void)dealloc {
  RtdcCoreControllerUnitListController_$1_set_this$0_(self, nil);
  [super dealloc];
}

- (void)copyAllFieldsTo:(RtdcCoreControllerUnitListController_$1 *)other {
  [super copyAllFieldsTo:other];
  RtdcCoreControllerUnitListController_$1_set_this$0_(other, this$0_);
}

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "onSuccessWithJavaUtilList:", "onSuccess", "V", 0x1, NULL },
    { "onErrorWithNSString:", "onError", "V", 0x1, NULL },
    { "initWithRtdcCoreControllerUnitListController:", "init", NULL, 0x0, NULL },
  };
  static const J2ObjcFieldInfo fields[] = {
    { "this$0_", NULL, 0x1012, "Lrtdc.core.controller.UnitListController;", NULL,  },
  };
  static const J2ObjcClassInfo _RtdcCoreControllerUnitListController_$1 = { "$1", "rtdc.core.controller", "UnitListController", 0x8000, 3, methods, 1, fields, 0, NULL};
  return &_RtdcCoreControllerUnitListController_$1;
}

@end
