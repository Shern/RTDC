//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nicolasmenard/IdeaProjects/RTDC/core/src/main/java/rtdc/core/controller/AddUserController.java
//

#include "ActionCompleteEvent.h"
#include "AddUserController.h"
#include "AddUserView.h"
#include "Cache.h"
#include "Controller.h"
#include "Event.h"
#include "EventType.h"
#include "J2ObjC_source.h"
#include "Service.h"
#include "User.h"

@interface ControllerAddUserController () {
 @public
  ModelUser *currentUser_;
}

@end

J2OBJC_FIELD_SETTER(ControllerAddUserController, currentUser_, ModelUser *)

@implementation ControllerAddUserController

- (instancetype)initWithViewAddUserView:(id<ViewAddUserView>)view {
  ControllerAddUserController_initWithViewAddUserView_(self, view);
  return self;
}

- (NSString *)getTitle {
  return @"Add User";
}

- (void)addUser {
  ModelUser *newUser = [new_ModelUser_init() autorelease];
  if (currentUser_ != nil) [newUser setIdWithInt:[currentUser_ getId]];
  [newUser setUsernameWithNSString:[((id<ViewAddUserView>) nil_chk(view_)) getUsernameAsString]];
  [newUser setFirstNameWithNSString:[((id<ViewAddUserView>) view_) getFirstnameAsString]];
  [newUser setLastNameWithNSString:[((id<ViewAddUserView>) view_) getSurnameAsString]];
  [newUser setEmailWithNSString:[((id<ViewAddUserView>) view_) getEmailAsString]];
  [newUser setPhoneWithLong:[((id<ViewAddUserView>) view_) getPhoneAsLong]];
  [newUser setPermissionWithNSString:[((id<ViewAddUserView>) view_) getPermissionAsString]];
  [newUser setRoleWithNSString:[((id<ViewAddUserView>) view_) getRoleAsString]];
  NSString *password = [((id<ViewAddUserView>) view_) getPasswordAsString];
  ServiceService_updateOrSaveUserWithModelUser_withNSString_(newUser, password);
  [((id<ViewAddUserView>) view_) closeDialog];
}

- (void)deleteUser {
  if (currentUser_ != nil) ServiceService_deleteUserWithInt_([currentUser_ getId]);
  [((id<ViewAddUserView>) nil_chk(view_)) closeDialog];
}

- (void)onActionCompleteWithEventActionCompleteEvent:(EventActionCompleteEvent *)event {
}

- (void)onStop {
  [super onStop];
  EventEvent_unsubscribeWithEventEventType_withEventEventHandler_(JreLoadStatic(EventActionCompleteEvent, TYPE_), self);
}

- (void)dealloc {
  RELEASE_(currentUser_);
  [super dealloc];
}

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "initWithViewAddUserView:", "AddUserController", NULL, 0x1, NULL, NULL },
    { "getTitle", NULL, "Ljava.lang.String;", 0x0, NULL, NULL },
    { "addUser", NULL, "V", 0x1, NULL, NULL },
    { "deleteUser", NULL, "V", 0x1, NULL, NULL },
    { "onActionCompleteWithEventActionCompleteEvent:", "onActionComplete", "V", 0x1, NULL, NULL },
    { "onStop", NULL, "V", 0x1, NULL, NULL },
  };
  static const J2ObjcFieldInfo fields[] = {
    { "currentUser_", NULL, 0x2, "Lrtdc.core.model.User;", NULL, NULL, .constantValue.asLong = 0 },
  };
  static const char *superclass_type_args[] = {"Lrtdc.core.view.AddUserView;"};
  static const J2ObjcClassInfo _ControllerAddUserController = { 2, "AddUserController", "rtdc.core.controller", NULL, 0x1, 6, methods, 1, fields, 1, superclass_type_args, 0, NULL, NULL, "Lrtdc/core/controller/Controller<Lrtdc/core/view/AddUserView;>;Lrtdc/core/event/ActionCompleteEvent$Handler;" };
  return &_ControllerAddUserController;
}

@end

void ControllerAddUserController_initWithViewAddUserView_(ControllerAddUserController *self, id<ViewAddUserView> view) {
  ControllerController_initWithViewView_(self, view);
  EventEvent_subscribeWithEventEventType_withEventEventHandler_(JreLoadStatic(EventActionCompleteEvent, TYPE_), self);
  JreStrongAssign(&self->currentUser_, (ModelUser *) check_class_cast([((UtilCache *) nil_chk(UtilCache_getInstance())) retrieveWithNSString:@"user"], [ModelUser class]));
  if (self->currentUser_ != nil) {
    [((id<ViewAddUserView>) nil_chk(view)) setTitleWithNSString:@"Edit User"];
    [view setUsernameAsStringWithNSString:[self->currentUser_ getUsername]];
    [view setEmailAsStringWithNSString:[self->currentUser_ getEmail]];
    [view setFirstnameAsStringWithNSString:[self->currentUser_ getFirstName]];
    [view setSurnameAsStringWithNSString:[self->currentUser_ getLastName]];
    [view setPhoneAsLongWithLong:[self->currentUser_ getPhone]];
    [view setRoleAsStringWithNSString:[self->currentUser_ getRole]];
    [view setPermissionAsStringWithNSString:[self->currentUser_ getPermission]];
  }
  else {
    [((id<ViewAddUserView>) nil_chk(view)) hideDeleteButton];
  }
}

ControllerAddUserController *new_ControllerAddUserController_initWithViewAddUserView_(id<ViewAddUserView> view) {
  ControllerAddUserController *self = [ControllerAddUserController alloc];
  ControllerAddUserController_initWithViewAddUserView_(self, view);
  return self;
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(ControllerAddUserController)
