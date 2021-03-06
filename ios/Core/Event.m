//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nicolasmenard/IdeaProjects/RTDC/core/src/main/java/rtdc/core/event/Event.java
//

#include "ActionCompleteEvent.h"
#include "AuthenticationEvent.h"
#include "ErrorEvent.h"
#include "Event.h"
#include "EventAggregator.h"
#include "EventHandler.h"
#include "EventType.h"
#include "FetchActionsEvent.h"
#include "FetchMessagesEvent.h"
#include "FetchUnitsEvent.h"
#include "FetchUserEvent.h"
#include "FetchUsersEvent.h"
#include "J2ObjC_source.h"
#include "JSONObject.h"
#include "LogoutEvent.h"
#include "RootObject.h"
#include "SessionExpiredEvent.h"
#include "com/google/common/collect/ImmutableSet.h"
#include "java/lang/RuntimeException.h"
#include "java/util/HashMap.h"
#include "java/util/Map.h"

static id<JavaUtilMap> EventEvent_handlers_;
J2OBJC_STATIC_FIELD_GETTER(EventEvent, handlers_, id<JavaUtilMap>)
J2OBJC_STATIC_FIELD_SETTER(EventEvent, handlers_, id<JavaUtilMap>)

J2OBJC_INITIALIZED_DEFN(EventEvent)

@implementation EventEvent

+ (void)fireWithJsonJSONObject:(JsonJSONObject *)object {
  EventEvent_fireWithJsonJSONObject_(object);
}

+ (void)subscribeWithEventEventType:(EventEventType *)eventType
              withEventEventHandler:(id<EventEventHandler>)eventHandler {
  EventEvent_subscribeWithEventEventType_withEventEventHandler_(eventType, eventHandler);
}

+ (void)unsubscribeWithEventEventType:(EventEventType *)eventType
                withEventEventHandler:(id<EventEventHandler>)eventHandler {
  EventEvent_unsubscribeWithEventEventType_withEventEventHandler_(eventType, eventHandler);
}

- (ComGoogleCommonCollectImmutableSet *)getHandlersWithEventEventType:(EventEventType *)type {
  EventEventAggregator *eventAggregator = [((id<JavaUtilMap>) nil_chk(EventEvent_handlers_)) getWithId:type];
  if (eventAggregator == nil) return ComGoogleCommonCollectImmutableSet_of();
  else return [eventAggregator getHandlers];
}

- (void)fire {
  // can't call an abstract method
  [self doesNotRecognizeSelector:_cmd];
}

J2OBJC_IGNORE_DESIGNATED_BEGIN
- (instancetype)init {
  EventEvent_init(self);
  return self;
}
J2OBJC_IGNORE_DESIGNATED_END

+ (void)initialize {
  if (self == [EventEvent class]) {
    EventEvent_handlers_ = new_JavaUtilHashMap_init();
    J2OBJC_SET_INITIALIZED(EventEvent)
  }
}

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "fireWithJsonJSONObject:", "fire", "V", 0x9, NULL, NULL },
    { "subscribeWithEventEventType:withEventEventHandler:", "subscribe", "V", 0x9, NULL, "<T::Lrtdc/core/event/EventHandler;>(Lrtdc/core/event/EventType<TT;>;TT;)V" },
    { "unsubscribeWithEventEventType:withEventEventHandler:", "unsubscribe", "V", 0x9, NULL, "<T::Lrtdc/core/event/EventHandler;>(Lrtdc/core/event/EventType<TT;>;TT;)V" },
    { "getHandlersWithEventEventType:", "getHandlers", "Lcom.google.common.collect.ImmutableSet;", 0x4, NULL, "<T::Lrtdc/core/event/EventHandler;>(Lrtdc/core/event/EventType<TT;>;)Lcom/google/common/collect/ImmutableSet<TT;>;" },
    { "fire", NULL, "V", 0x400, NULL, NULL },
    { "init", NULL, NULL, 0x1, NULL, NULL },
  };
  static const J2ObjcFieldInfo fields[] = {
    { "handlers_", NULL, 0xa, "Ljava.util.Map;", &EventEvent_handlers_, "Ljava/util/Map<Lrtdc/core/event/EventType;Lrtdc/core/event/EventAggregator;>;", .constantValue.asLong = 0 },
  };
  static const J2ObjcClassInfo _EventEvent = { 2, "Event", "rtdc.core.event", NULL, 0x401, 6, methods, 1, fields, 0, NULL, 0, NULL, NULL, "<T::Lrtdc/core/event/EventHandler;>Lrtdc/core/model/RootObject;" };
  return &_EventEvent;
}

@end

void EventEvent_fireWithJsonJSONObject_(JsonJSONObject *object) {
  EventEvent_initialize();
  NSString *type = [((JsonJSONObject *) nil_chk(object)) optStringWithNSString:@"_type"];
  if (type == nil) [new_EventErrorEvent_initWithNSString_(JreStrcat("$$", @"Message type not recognized ", [object description])) fire];
  else {
    EventEvent *e = nil;
    if ([type equalsIgnoreCase:[((EventEventType *) nil_chk(JreLoadStatic(EventAuthenticationEvent, TYPE_))) getName]]) e = new_EventAuthenticationEvent_initWithJsonJSONObject_(object);
    else if ([type equalsIgnoreCase:[((EventEventType *) nil_chk(JreLoadStatic(EventErrorEvent, TYPE_))) getName]]) e = new_EventErrorEvent_initWithJsonJSONObject_(object);
    else if ([type equalsIgnoreCase:[((EventEventType *) nil_chk(JreLoadStatic(EventFetchUnitsEvent, TYPE_))) getName]]) e = new_EventFetchUnitsEvent_initWithJsonJSONObject_(object);
    else if ([type equalsIgnoreCase:[((EventEventType *) nil_chk(JreLoadStatic(EventFetchUsersEvent, TYPE_))) getName]]) e = new_EventFetchUsersEvent_initWithJsonJSONObject_(object);
    else if ([type equalsIgnoreCase:[((EventEventType *) nil_chk(JreLoadStatic(EventFetchUserEvent, TYPE_))) getName]]) e = new_EventFetchUserEvent_initWithJsonJSONObject_(object);
    else if ([type equalsIgnoreCase:[((EventEventType *) nil_chk(JreLoadStatic(EventFetchActionsEvent, TYPE_))) getName]]) e = new_EventFetchActionsEvent_initWithJsonJSONObject_(object);
    else if ([type equalsIgnoreCase:[((EventEventType *) nil_chk(JreLoadStatic(EventFetchMessagesEvent, TYPE_))) getName]]) e = new_EventFetchMessagesEvent_initWithJsonJSONObject_(object);
    else if ([type equalsIgnoreCase:[((EventEventType *) nil_chk(JreLoadStatic(EventActionCompleteEvent, TYPE_))) getName]]) e = new_EventActionCompleteEvent_initWithJsonJSONObject_(object);
    else if ([type equalsIgnoreCase:[((EventEventType *) nil_chk(JreLoadStatic(EventSessionExpiredEvent, TYPE_))) getName]]) e = new_EventSessionExpiredEvent_init();
    else if ([type equalsIgnoreCase:[((EventEventType *) nil_chk(JreLoadStatic(EventLogoutEvent, TYPE_))) getName]]) e = new_EventLogoutEvent_init();
    if (e != nil) [e fire];
    else @throw new_JavaLangRuntimeException_initWithNSString_(JreStrcat("$$", @"Event has not been registred under Event.java/fire: ", [object description]));
  }
}

void EventEvent_subscribeWithEventEventType_withEventEventHandler_(EventEventType *eventType, id<EventEventHandler> eventHandler) {
  EventEvent_initialize();
  if (![((id<JavaUtilMap>) nil_chk(EventEvent_handlers_)) containsKeyWithId:eventType]) (void) [EventEvent_handlers_ putWithId:eventType withId:new_EventEventAggregator_init()];
  [((EventEventAggregator *) nil_chk([EventEvent_handlers_ getWithId:eventType])) addHandlerWithId:eventHandler];
}

void EventEvent_unsubscribeWithEventEventType_withEventEventHandler_(EventEventType *eventType, id<EventEventHandler> eventHandler) {
  EventEvent_initialize();
  if ([((id<JavaUtilMap>) nil_chk(EventEvent_handlers_)) containsKeyWithId:eventType]) [((EventEventAggregator *) nil_chk([EventEvent_handlers_ getWithId:eventType])) removeHandlerWithId:eventHandler];
}

void EventEvent_init(EventEvent *self) {
  (void) ModelRootObject_init(self);
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(EventEvent)
