//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nicolasmenard/IdeaProjects/RTDC/core/src/main/java/rtdc/core/Bootstrapper.java
//

#include "AuthenticationEvent.h"
#include "Bootstrapper.h"
#include "Dispatcher.h"
#include "Event.h"
#include "EventType.h"
#include "Factory.h"
#include "IOSClass.h"
#include "J2ObjC_source.h"
#include "Service.h"
#include "Session.h"
#include "SessionExpiredEvent.h"
#include "Storage.h"
#include "User.h"
#include "VoipController.h"
#include "java/util/logging/Level.h"
#include "java/util/logging/Logger.h"

static JavaUtilLoggingLogger *RtdcCoreBootstrapper_logger_;
J2OBJC_STATIC_FIELD_GETTER(RtdcCoreBootstrapper, logger_, JavaUtilLoggingLogger *)
J2OBJC_STATIC_FIELD_SETTER(RtdcCoreBootstrapper, logger_, JavaUtilLoggingLogger *)

static id<EventAuthenticationEvent_Handler> RtdcCoreBootstrapper_authHandler_;
J2OBJC_STATIC_FIELD_GETTER(RtdcCoreBootstrapper, authHandler_, id<EventAuthenticationEvent_Handler>)

static id<EventSessionExpiredEvent_Handler> RtdcCoreBootstrapper_sessionExpiredHandler_;
J2OBJC_STATIC_FIELD_GETTER(RtdcCoreBootstrapper, sessionExpiredHandler_, id<EventSessionExpiredEvent_Handler>)

@interface RtdcCoreBootstrapper_$1 : NSObject < EventAuthenticationEvent_Handler >

- (void)onAuthenticateWithEventAuthenticationEvent:(EventAuthenticationEvent *)event;

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(RtdcCoreBootstrapper_$1)

__attribute__((unused)) static void RtdcCoreBootstrapper_$1_init(RtdcCoreBootstrapper_$1 *self);

__attribute__((unused)) static RtdcCoreBootstrapper_$1 *new_RtdcCoreBootstrapper_$1_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(RtdcCoreBootstrapper_$1)

@interface RtdcCoreBootstrapper_$2 : NSObject < EventSessionExpiredEvent_Handler >

- (void)onSessionExpired;

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(RtdcCoreBootstrapper_$2)

__attribute__((unused)) static void RtdcCoreBootstrapper_$2_init(RtdcCoreBootstrapper_$2 *self);

__attribute__((unused)) static RtdcCoreBootstrapper_$2 *new_RtdcCoreBootstrapper_$2_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(RtdcCoreBootstrapper_$2)

J2OBJC_INITIALIZED_DEFN(RtdcCoreBootstrapper)

id<ImplFactory> RtdcCoreBootstrapper_FACTORY_;
NSString *RtdcCoreBootstrapper_AUTHENTICATION_TOKEN_;

@implementation RtdcCoreBootstrapper

+ (id<ImplFactory>)FACTORY {
  return RtdcCoreBootstrapper_FACTORY_;
}

+ (void)setFACTORY:(id<ImplFactory>)value {
  JreStrongAssign(&RtdcCoreBootstrapper_FACTORY_, value);
}

+ (NSString *)AUTHENTICATION_TOKEN {
  return RtdcCoreBootstrapper_AUTHENTICATION_TOKEN_;
}

+ (void)setAUTHENTICATION_TOKEN:(NSString *)value {
  JreStrongAssign(&RtdcCoreBootstrapper_AUTHENTICATION_TOKEN_, value);
}

+ (void)initialize__WithImplFactory:(id<ImplFactory>)factory {
  RtdcCoreBootstrapper_initialize__WithImplFactory_(factory);
}

J2OBJC_IGNORE_DESIGNATED_BEGIN
- (instancetype)init {
  RtdcCoreBootstrapper_init(self);
  return self;
}
J2OBJC_IGNORE_DESIGNATED_END

+ (void)initialize {
  if (self == [RtdcCoreBootstrapper class]) {
    JreStrongAssign(&RtdcCoreBootstrapper_logger_, JavaUtilLoggingLogger_getLoggerWithNSString_([RtdcCoreBootstrapper_class_() getName]));
    JreStrongAssignAndConsume(&RtdcCoreBootstrapper_authHandler_, new_RtdcCoreBootstrapper_$1_init());
    JreStrongAssignAndConsume(&RtdcCoreBootstrapper_sessionExpiredHandler_, new_RtdcCoreBootstrapper_$2_init());
    J2OBJC_SET_INITIALIZED(RtdcCoreBootstrapper)
  }
}

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "initialize__WithImplFactory:", "initialize", "V", 0x9, NULL, NULL },
    { "init", NULL, NULL, 0x1, NULL, NULL },
  };
  static const J2ObjcFieldInfo fields[] = {
    { "FACTORY_", NULL, 0x9, "Lrtdc.core.impl.Factory;", &RtdcCoreBootstrapper_FACTORY_, NULL, .constantValue.asLong = 0 },
    { "AUTHENTICATION_TOKEN_", NULL, 0x9, "Ljava.lang.String;", &RtdcCoreBootstrapper_AUTHENTICATION_TOKEN_, NULL, .constantValue.asLong = 0 },
    { "logger_", NULL, 0xa, "Ljava.util.logging.Logger;", &RtdcCoreBootstrapper_logger_, NULL, .constantValue.asLong = 0 },
    { "authHandler_", NULL, 0x1a, "Lrtdc.core.event.AuthenticationEvent$Handler;", &RtdcCoreBootstrapper_authHandler_, NULL, .constantValue.asLong = 0 },
    { "sessionExpiredHandler_", NULL, 0x1a, "Lrtdc.core.event.SessionExpiredEvent$Handler;", &RtdcCoreBootstrapper_sessionExpiredHandler_, NULL, .constantValue.asLong = 0 },
  };
  static const J2ObjcClassInfo _RtdcCoreBootstrapper = { 2, "Bootstrapper", "rtdc.core", NULL, 0x1, 2, methods, 5, fields, 0, NULL, 0, NULL, NULL, NULL };
  return &_RtdcCoreBootstrapper;
}

@end

void RtdcCoreBootstrapper_initialize__WithImplFactory_(id<ImplFactory> factory) {
  RtdcCoreBootstrapper_initialize();
  JreStrongAssign(&RtdcCoreBootstrapper_FACTORY_, factory);
  JreStrongAssign(&RtdcCoreBootstrapper_AUTHENTICATION_TOKEN_, [((id<ImplStorage>) nil_chk([((id<ImplFactory>) nil_chk(factory)) getStorage])) retrieveWithNSString:ImplStorage_KEY_AUTH_TOKEN_]);
  [((JavaUtilLoggingLogger *) nil_chk(RtdcCoreBootstrapper_logger_)) logWithJavaUtilLoggingLevel:JreLoadStatic(JavaUtilLoggingLevel, INFO_) withNSString:JreStrcat("$$", @"Authentication Token: ", RtdcCoreBootstrapper_AUTHENTICATION_TOKEN_)];
  if (RtdcCoreBootstrapper_AUTHENTICATION_TOKEN_ == nil || [RtdcCoreBootstrapper_AUTHENTICATION_TOKEN_ isEmpty]) {
    [RtdcCoreBootstrapper_logger_ logWithJavaUtilLoggingLevel:JreLoadStatic(JavaUtilLoggingLevel, INFO_) withNSString:@"Now going to login"];
    [((id<ImplDispatcher>) nil_chk([((id<ImplFactory>) nil_chk(RtdcCoreBootstrapper_FACTORY_)) newDispatcher])) goToLoginWithControllerController:nil];
  }
  else {
    [RtdcCoreBootstrapper_logger_ logWithJavaUtilLoggingLevel:JreLoadStatic(JavaUtilLoggingLevel, INFO_) withNSString:@"Now subscribing to AuthenticationEvent and SessionExpiredEvent"];
    EventEvent_subscribeWithEventEventType_withEventEventHandler_(JreLoadStatic(EventAuthenticationEvent, TYPE_), RtdcCoreBootstrapper_authHandler_);
    EventEvent_subscribeWithEventEventType_withEventEventHandler_(JreLoadStatic(EventSessionExpiredEvent, TYPE_), RtdcCoreBootstrapper_sessionExpiredHandler_);
    ServiceService_isAuthTokenValid();
  }
}

void RtdcCoreBootstrapper_init(RtdcCoreBootstrapper *self) {
  NSObject_init(self);
}

RtdcCoreBootstrapper *new_RtdcCoreBootstrapper_init() {
  RtdcCoreBootstrapper *self = [RtdcCoreBootstrapper alloc];
  RtdcCoreBootstrapper_init(self);
  return self;
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(RtdcCoreBootstrapper)

@implementation RtdcCoreBootstrapper_$1

- (void)onAuthenticateWithEventAuthenticationEvent:(EventAuthenticationEvent *)event {
  [((JavaUtilLoggingLogger *) nil_chk(JreLoadStatic(RtdcCoreBootstrapper, logger_))) logWithJavaUtilLoggingLevel:JreLoadStatic(JavaUtilLoggingLevel, INFO_) withNSString:@"AuthenticationEvent received"];
  JreStrongAssign(JreLoadStaticRef(RtdcCoreBootstrapper, AUTHENTICATION_TOKEN_), [((EventAuthenticationEvent *) nil_chk(event)) getAuthenticationToken]);
  [((id<ImplStorage>) nil_chk([((id<ImplFactory>) nil_chk(JreLoadStatic(RtdcCoreBootstrapper, FACTORY_))) getStorage])) addWithNSString:ImplStorage_KEY_AUTH_TOKEN_ withNSString:JreLoadStatic(RtdcCoreBootstrapper, AUTHENTICATION_TOKEN_)];
  RtdcCoreSession_setCurrentSessionWithRtdcCoreSession_([new_RtdcCoreSession_initWithModelUser_([event getUser]) autorelease]);
  [((id<ImplVoipController>) nil_chk([JreLoadStatic(RtdcCoreBootstrapper, FACTORY_) getVoipController])) registerUserWithModelUser:[event getUser]];
  [((id<ImplDispatcher>) nil_chk([JreLoadStatic(RtdcCoreBootstrapper, FACTORY_) newDispatcher])) goToAllUnitsWithControllerController:nil];
  EventEvent_unsubscribeWithEventEventType_withEventEventHandler_(JreLoadStatic(EventAuthenticationEvent, TYPE_), JreLoadStatic(RtdcCoreBootstrapper, authHandler_));
  EventEvent_unsubscribeWithEventEventType_withEventEventHandler_(JreLoadStatic(EventSessionExpiredEvent, TYPE_), JreLoadStatic(RtdcCoreBootstrapper, sessionExpiredHandler_));
}

J2OBJC_IGNORE_DESIGNATED_BEGIN
- (instancetype)init {
  RtdcCoreBootstrapper_$1_init(self);
  return self;
}
J2OBJC_IGNORE_DESIGNATED_END

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "onAuthenticateWithEventAuthenticationEvent:", "onAuthenticate", "V", 0x1, NULL, NULL },
    { "init", "", NULL, 0x0, NULL, NULL },
  };
  static const J2ObjcClassInfo _RtdcCoreBootstrapper_$1 = { 2, "", "rtdc.core", "Bootstrapper", 0x8008, 2, methods, 0, NULL, 0, NULL, 0, NULL, NULL, NULL };
  return &_RtdcCoreBootstrapper_$1;
}

@end

void RtdcCoreBootstrapper_$1_init(RtdcCoreBootstrapper_$1 *self) {
  NSObject_init(self);
}

RtdcCoreBootstrapper_$1 *new_RtdcCoreBootstrapper_$1_init() {
  RtdcCoreBootstrapper_$1 *self = [RtdcCoreBootstrapper_$1 alloc];
  RtdcCoreBootstrapper_$1_init(self);
  return self;
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(RtdcCoreBootstrapper_$1)

@implementation RtdcCoreBootstrapper_$2

- (void)onSessionExpired {
  [((JavaUtilLoggingLogger *) nil_chk(JreLoadStatic(RtdcCoreBootstrapper, logger_))) logWithJavaUtilLoggingLevel:JreLoadStatic(JavaUtilLoggingLevel, INFO_) withNSString:@"SessionExpiredEvent received"];
  [((id<ImplDispatcher>) nil_chk([((id<ImplFactory>) nil_chk(JreLoadStatic(RtdcCoreBootstrapper, FACTORY_))) newDispatcher])) goToLoginWithControllerController:nil];
  EventEvent_unsubscribeWithEventEventType_withEventEventHandler_(JreLoadStatic(EventAuthenticationEvent, TYPE_), JreLoadStatic(RtdcCoreBootstrapper, authHandler_));
  EventEvent_unsubscribeWithEventEventType_withEventEventHandler_(JreLoadStatic(EventSessionExpiredEvent, TYPE_), JreLoadStatic(RtdcCoreBootstrapper, sessionExpiredHandler_));
}

J2OBJC_IGNORE_DESIGNATED_BEGIN
- (instancetype)init {
  RtdcCoreBootstrapper_$2_init(self);
  return self;
}
J2OBJC_IGNORE_DESIGNATED_END

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "onSessionExpired", NULL, "V", 0x1, NULL, NULL },
    { "init", "", NULL, 0x0, NULL, NULL },
  };
  static const J2ObjcClassInfo _RtdcCoreBootstrapper_$2 = { 2, "", "rtdc.core", "Bootstrapper", 0x8008, 2, methods, 0, NULL, 0, NULL, 0, NULL, NULL, NULL };
  return &_RtdcCoreBootstrapper_$2;
}

@end

void RtdcCoreBootstrapper_$2_init(RtdcCoreBootstrapper_$2 *self) {
  NSObject_init(self);
}

RtdcCoreBootstrapper_$2 *new_RtdcCoreBootstrapper_$2_init() {
  RtdcCoreBootstrapper_$2 *self = [RtdcCoreBootstrapper_$2 alloc];
  RtdcCoreBootstrapper_$2_init(self);
  return self;
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(RtdcCoreBootstrapper_$2)
