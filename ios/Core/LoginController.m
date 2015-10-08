//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nicolasmenard/IdeaProjects/RTDC/core/src/main/java/rtdc/core/controller/LoginController.java
//

#include "AuthenticationEvent.h"
#include "Bootstrapper.h"
#include "Controller.h"
#include "Dispatcher.h"
#include "Event.h"
#include "EventType.h"
#include "Factory.h"
#include "IOSClass.h"
#include "J2ObjC_source.h"
#include "LoginController.h"
#include "LoginView.h"
#include "Service.h"
#include "Session.h"
#include "Storage.h"
#include "UiElement.h"
#include "User.h"
#include "VoipController.h"
#include "java/util/logging/Level.h"
#include "java/util/logging/Logger.h"

static JavaUtilLoggingLogger *ControllerLoginController_logger_;
J2OBJC_STATIC_FIELD_GETTER(ControllerLoginController, logger_, JavaUtilLoggingLogger *)

J2OBJC_INITIALIZED_DEFN(ControllerLoginController)

@implementation ControllerLoginController

- (instancetype)initWithRtdcCoreViewLoginView:(id<RtdcCoreViewLoginView>)view {
  ControllerLoginController_initWithRtdcCoreViewLoginView_(self, view);
  return self;
}

- (NSString *)getTitle {
  return @"Login";
}

- (void)login {
  [((JavaUtilLoggingLogger *) nil_chk(ControllerLoginController_logger_)) logWithJavaUtilLoggingLevel:JreLoadStatic(JavaUtilLoggingLevel, INFO_) withNSString:@"Subscribing to AuthenticationEvent"];
  RtdcCoreEventEvent_subscribeWithRtdcCoreEventEventType_withRtdcCoreEventEventHandler_(JreLoadStatic(RtdcCoreEventAuthenticationEvent, TYPE_), self);
  NSString *username = [((id<ImplUiElement>) nil_chk([((id<RtdcCoreViewLoginView>) nil_chk(view_)) getUsernameUiElement])) getValue];
  NSString *password = [((id<ImplUiElement>) nil_chk([((id<RtdcCoreViewLoginView>) view_) getPasswordUiElement])) getValue];
  if ([((NSString *) nil_chk(username)) isEmpty]) {
    [((id<ImplUiElement>) nil_chk([((id<RtdcCoreViewLoginView>) view_) getUsernameUiElement])) setErrorMessageWithNSString:@"Username cannot be empty"];
    [((id<ImplUiElement>) nil_chk([((id<RtdcCoreViewLoginView>) view_) getUsernameUiElement])) setFocusWithBoolean:true];
  }
  else if ([((NSString *) nil_chk(password)) isEmpty]) {
    [((id<ImplUiElement>) nil_chk([((id<RtdcCoreViewLoginView>) view_) getPasswordUiElement])) setErrorMessageWithNSString:@"Password cannot be empty"];
    [((id<ImplUiElement>) nil_chk([((id<RtdcCoreViewLoginView>) view_) getPasswordUiElement])) setFocusWithBoolean:true];
  }
  else ServiceService_authenticateUserWithNSString_withNSString_(username, password);
}

- (void)onAuthenticateWithRtdcCoreEventAuthenticationEvent:(RtdcCoreEventAuthenticationEvent *)event {
  [((JavaUtilLoggingLogger *) nil_chk(ControllerLoginController_logger_)) logWithJavaUtilLoggingLevel:JreLoadStatic(JavaUtilLoggingLevel, INFO_) withNSString:@"AuthenticationEvent received"];
  JreStrongAssign(JreLoadStaticRef(RtdcCoreBootstrapper, AUTHENTICATION_TOKEN_), [((RtdcCoreEventAuthenticationEvent *) nil_chk(event)) getAuthenticationToken]);
  [((id<ImplStorage>) nil_chk([((id<ImplFactory>) nil_chk(JreLoadStatic(RtdcCoreBootstrapper, FACTORY_))) getStorage])) addWithNSString:ImplStorage_KEY_AUTH_TOKEN_ withNSString:JreLoadStatic(RtdcCoreBootstrapper, AUTHENTICATION_TOKEN_)];
  RtdcCoreSession_setCurrentSessionWithRtdcCoreSession_([new_RtdcCoreSession_initWithModelUser_([event getUser]) autorelease]);
  [((id<ImplVoipController>) nil_chk([JreLoadStatic(RtdcCoreBootstrapper, FACTORY_) getVoipController])) registerUserWithModelUser:[event getUser]];
  RtdcCoreEventEvent_unsubscribeWithRtdcCoreEventEventType_withRtdcCoreEventEventHandler_(JreLoadStatic(RtdcCoreEventAuthenticationEvent, TYPE_), self);
  [((id<ImplDispatcher>) nil_chk([JreLoadStatic(RtdcCoreBootstrapper, FACTORY_) newDispatcher])) goToAllUnitsWithControllerController:self];
}

- (void)onStop {
  [super onStop];
  RtdcCoreEventEvent_unsubscribeWithRtdcCoreEventEventType_withRtdcCoreEventEventHandler_(JreLoadStatic(RtdcCoreEventAuthenticationEvent, TYPE_), self);
}

+ (void)initialize {
  if (self == [ControllerLoginController class]) {
    JreStrongAssign(&ControllerLoginController_logger_, JavaUtilLoggingLogger_getLoggerWithNSString_([ControllerLoginController_class_() getCanonicalName]));
    J2OBJC_SET_INITIALIZED(ControllerLoginController)
  }
}

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "initWithRtdcCoreViewLoginView:", "LoginController", NULL, 0x1, NULL, NULL },
    { "getTitle", NULL, "Ljava.lang.String;", 0x0, NULL, NULL },
    { "login", NULL, "V", 0x1, NULL, NULL },
    { "onAuthenticateWithRtdcCoreEventAuthenticationEvent:", "onAuthenticate", "V", 0x1, NULL, NULL },
    { "onStop", NULL, "V", 0x1, NULL, NULL },
  };
  static const J2ObjcFieldInfo fields[] = {
    { "logger_", NULL, 0x1a, "Ljava.util.logging.Logger;", &ControllerLoginController_logger_, NULL, .constantValue.asLong = 0 },
  };
  static const char *superclass_type_args[] = {"Lrtdc.core.view.LoginView;"};
  static const J2ObjcClassInfo _ControllerLoginController = { 2, "LoginController", "rtdc.core.controller", NULL, 0x1, 5, methods, 1, fields, 1, superclass_type_args, 0, NULL, NULL, "Lrtdc/core/controller/Controller<Lrtdc/core/view/LoginView;>;Lrtdc/core/event/AuthenticationEvent$Handler;Lrtdc/core/event/ErrorEvent$Handler;" };
  return &_ControllerLoginController;
}

@end

void ControllerLoginController_initWithRtdcCoreViewLoginView_(ControllerLoginController *self, id<RtdcCoreViewLoginView> view) {
  ControllerController_initWithRtdcCoreViewView_(self, view);
  [((id<ImplUiElement>) nil_chk([((id<RtdcCoreViewLoginView>) nil_chk(view)) getUsernameUiElement])) setFocusWithBoolean:true];
}

ControllerLoginController *new_ControllerLoginController_initWithRtdcCoreViewLoginView_(id<RtdcCoreViewLoginView> view) {
  ControllerLoginController *self = [ControllerLoginController alloc];
  ControllerLoginController_initWithRtdcCoreViewLoginView_(self, view);
  return self;
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(ControllerLoginController)
