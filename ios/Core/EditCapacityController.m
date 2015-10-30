//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nicolasmenard/IdeaProjects/RTDC/core/src/main/java/rtdc/core/controller/EditCapacityController.java
//

#include "Cache.h"
#include "Controller.h"
#include "EditCapacityController.h"
#include "EditCapacityView.h"
#include "J2ObjC_source.h"
#include "Service.h"
#include "UiElement.h"
#include "Unit.h"
#include "java/lang/Integer.h"
#include "java/lang/NumberFormatException.h"

@interface ControllerEditCapacityController () {
 @public
  ModelUnit *currentUnit_;
}

@end

J2OBJC_FIELD_SETTER(ControllerEditCapacityController, currentUnit_, ModelUnit *)

@implementation ControllerEditCapacityController

- (instancetype)initWithViewEditCapacityView:(id<ViewEditCapacityView>)view {
  ControllerEditCapacityController_initWithViewEditCapacityView_(self, view);
  return self;
}

- (NSString *)getTitle {
  return @"Edit Capacity";
}

- (void)updateCapacity {
  @try {
    [((ModelUnit *) nil_chk(currentUnit_)) setAvailableBedsWithInt:JavaLangInteger_parseIntWithNSString_([((id<ImplUiElement>) nil_chk([((id<ViewEditCapacityView>) nil_chk(view_)) getAvailableBedsUiElement])) getValue])];
    [currentUnit_ setPotentialDcWithInt:JavaLangInteger_parseIntWithNSString_([((id<ImplUiElement>) nil_chk([((id<ViewEditCapacityView>) view_) getPotentialDcUiElement])) getValue])];
    [currentUnit_ setDcByDeadlineWithInt:JavaLangInteger_parseIntWithNSString_([((id<ImplUiElement>) nil_chk([((id<ViewEditCapacityView>) view_) getDcByDeadlineUiElement])) getValue])];
    [currentUnit_ setTotalAdmitsWithInt:JavaLangInteger_parseIntWithNSString_([((id<ImplUiElement>) nil_chk([((id<ViewEditCapacityView>) view_) getTotalAdmitsUiElement])) getValue])];
    [currentUnit_ setAdmitsByDeadlineWithInt:JavaLangInteger_parseIntWithNSString_([((id<ImplUiElement>) nil_chk([((id<ViewEditCapacityView>) view_) getAdmitsByDeadlineUiElement])) getValue])];
  }
  @catch (JavaLangNumberFormatException *e) {
  }
  ServiceService_updateOrSaveUnitWithModelUnit_(currentUnit_);
  [((id<ViewEditCapacityView>) nil_chk(view_)) closeDialog];
}

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "initWithViewEditCapacityView:", "EditCapacityController", NULL, 0x1, NULL, NULL },
    { "getTitle", NULL, "Ljava.lang.String;", 0x0, NULL, NULL },
    { "updateCapacity", NULL, "V", 0x1, NULL, NULL },
  };
  static const J2ObjcFieldInfo fields[] = {
    { "currentUnit_", NULL, 0x2, "Lrtdc.core.model.Unit;", NULL, NULL, .constantValue.asLong = 0 },
  };
  static const char *superclass_type_args[] = {"Lrtdc.core.view.EditCapacityView;"};
  static const J2ObjcClassInfo _ControllerEditCapacityController = { 2, "EditCapacityController", "rtdc.core.controller", NULL, 0x1, 3, methods, 1, fields, 1, superclass_type_args, 0, NULL, NULL, "Lrtdc/core/controller/Controller<Lrtdc/core/view/EditCapacityView;>;" };
  return &_ControllerEditCapacityController;
}

@end

void ControllerEditCapacityController_initWithViewEditCapacityView_(ControllerEditCapacityController *self, id<ViewEditCapacityView> view) {
  (void) ControllerController_initWithViewView_(self, view);
  self->currentUnit_ = (ModelUnit *) check_class_cast([((UtilCache *) nil_chk(UtilCache_getInstance())) retrieveWithNSString:@"unit"], [ModelUnit class]);
  [((id<ViewEditCapacityView>) nil_chk(view)) setTitleWithNSString:JreStrcat("$$", @"Edit Capacity - ", [((ModelUnit *) nil_chk(self->currentUnit_)) getName])];
  [((id<ImplUiElement>) nil_chk([view getAvailableBedsUiElement])) setValueWithId:JavaLangInteger_toStringWithInt_([self->currentUnit_ getAvailableBeds])];
  [((id<ImplUiElement>) nil_chk([view getPotentialDcUiElement])) setValueWithId:JavaLangInteger_toStringWithInt_([self->currentUnit_ getPotentialDc])];
  [((id<ImplUiElement>) nil_chk([view getDcByDeadlineUiElement])) setValueWithId:JavaLangInteger_toStringWithInt_([self->currentUnit_ getDcByDeadline])];
  [((id<ImplUiElement>) nil_chk([view getTotalAdmitsUiElement])) setValueWithId:JavaLangInteger_toStringWithInt_([self->currentUnit_ getTotalAdmits])];
  [((id<ImplUiElement>) nil_chk([view getAdmitsByDeadlineUiElement])) setValueWithId:JavaLangInteger_toStringWithInt_([self->currentUnit_ getAdmitsByDeadline])];
}

ControllerEditCapacityController *new_ControllerEditCapacityController_initWithViewEditCapacityView_(id<ViewEditCapacityView> view) {
  ControllerEditCapacityController *self = [ControllerEditCapacityController alloc];
  ControllerEditCapacityController_initWithViewEditCapacityView_(self, view);
  return self;
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(ControllerEditCapacityController)
