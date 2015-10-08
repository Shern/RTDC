//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nicolasmenard/IdeaProjects/RTDC/core/src/main/java/rtdc/core/event/LogoutEvent.java
//

#include "Event.h"
#include "EventType.h"
#include "IOSClass.h"
#include "IOSObjectArray.h"
#include "J2ObjC_source.h"
#include "LogoutEvent.h"
#include "ObjectProperty.h"
#include "com/google/common/collect/ImmutableSet.h"
#include "java/lang/Enum.h"
#include "java/lang/IllegalArgumentException.h"

__attribute__((unused)) static void EventLogoutEvent_PropertiesEnum_initWithNSString_withInt_(EventLogoutEvent_PropertiesEnum *self, NSString *__name, jint __ordinal);

__attribute__((unused)) static EventLogoutEvent_PropertiesEnum *new_EventLogoutEvent_PropertiesEnum_initWithNSString_withInt_(NSString *__name, jint __ordinal) NS_RETURNS_RETAINED;

@interface EventLogoutEvent_Handler : NSObject

@end

J2OBJC_INITIALIZED_DEFN(EventLogoutEvent)

EventEventType *EventLogoutEvent_TYPE_;

@implementation EventLogoutEvent

- (void)fire {
  for (id<EventLogoutEvent_Handler> __strong handler in nil_chk([self getHandlersWithEventEventType:EventLogoutEvent_TYPE_])) [((id<EventLogoutEvent_Handler>) nil_chk(handler)) onLogoutWithEventLogoutEvent:self];
}

- (IOSObjectArray *)getProperties {
  return EventLogoutEvent_PropertiesEnum_values();
}

- (NSString *)getType {
  return [((EventEventType *) nil_chk(EventLogoutEvent_TYPE_)) getName];
}

- (id)getValueWithModelObjectProperty:(id<ModelObjectProperty>)property {
  return nil;
}

J2OBJC_IGNORE_DESIGNATED_BEGIN
- (instancetype)init {
  EventLogoutEvent_init(self);
  return self;
}
J2OBJC_IGNORE_DESIGNATED_END

+ (void)initialize {
  if (self == [EventLogoutEvent class]) {
    JreStrongAssignAndConsume(&EventLogoutEvent_TYPE_, new_EventEventType_initWithNSString_(@"logoutEvent"));
    J2OBJC_SET_INITIALIZED(EventLogoutEvent)
  }
}

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "fire", NULL, "V", 0x0, NULL, NULL },
    { "getProperties", NULL, "[Lrtdc.core.model.ObjectProperty;", 0x1, NULL, NULL },
    { "getType", NULL, "Ljava.lang.String;", 0x1, NULL, NULL },
    { "getValueWithModelObjectProperty:", "getValue", "Ljava.lang.Object;", 0x1, NULL, NULL },
    { "init", NULL, NULL, 0x1, NULL, NULL },
  };
  static const J2ObjcFieldInfo fields[] = {
    { "TYPE_", NULL, 0x19, "Lrtdc.core.event.EventType;", &EventLogoutEvent_TYPE_, "Lrtdc/core/event/EventType<Lrtdc/core/event/LogoutEvent$Handler;>;", .constantValue.asLong = 0 },
  };
  static const char *superclass_type_args[] = {"Lrtdc.core.event.LogoutEvent$Handler;"};
  static const char *inner_classes[] = {"Lrtdc.core.event.LogoutEvent$Properties;", "Lrtdc.core.event.LogoutEvent$Handler;"};
  static const J2ObjcClassInfo _EventLogoutEvent = { 2, "LogoutEvent", "rtdc.core.event", NULL, 0x1, 5, methods, 1, fields, 1, superclass_type_args, 2, inner_classes, NULL, "Lrtdc/core/event/Event<Lrtdc/core/event/LogoutEvent$Handler;>;" };
  return &_EventLogoutEvent;
}

@end

void EventLogoutEvent_init(EventLogoutEvent *self) {
  EventEvent_init(self);
}

EventLogoutEvent *new_EventLogoutEvent_init() {
  EventLogoutEvent *self = [EventLogoutEvent alloc];
  EventLogoutEvent_init(self);
  return self;
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(EventLogoutEvent)

EventLogoutEvent_PropertiesEnum *EventLogoutEvent_PropertiesEnum_values_[0];

@implementation EventLogoutEvent_PropertiesEnum

- (instancetype)initWithNSString:(NSString *)__name
                         withInt:(jint)__ordinal {
  EventLogoutEvent_PropertiesEnum_initWithNSString_withInt_(self, __name, __ordinal);
  return self;
}

IOSObjectArray *EventLogoutEvent_PropertiesEnum_values() {
  EventLogoutEvent_PropertiesEnum_initialize();
  return [IOSObjectArray arrayWithObjects:EventLogoutEvent_PropertiesEnum_values_ count:0 type:EventLogoutEvent_PropertiesEnum_class_()];
}

+ (IOSObjectArray *)values {
  return EventLogoutEvent_PropertiesEnum_values();
}

+ (EventLogoutEvent_PropertiesEnum *)valueOfWithNSString:(NSString *)name {
  return EventLogoutEvent_PropertiesEnum_valueOfWithNSString_(name);
}

EventLogoutEvent_PropertiesEnum *EventLogoutEvent_PropertiesEnum_valueOfWithNSString_(NSString *name) {
  EventLogoutEvent_PropertiesEnum_initialize();
  for (int i = 0; i < 0; i++) {
    EventLogoutEvent_PropertiesEnum *e = EventLogoutEvent_PropertiesEnum_values_[i];
    if ([name isEqual:[e name]]) {
      return e;
    }
  }
  @throw [[[JavaLangIllegalArgumentException alloc] initWithNSString:name] autorelease];
  return nil;
}

- (id)copyWithZone:(NSZone *)zone {
  return [self retain];
}

+ (const J2ObjcClassInfo *)__metadata {
  static const char *superclass_type_args[] = {"Lrtdc.core.event.LogoutEvent$Properties;"};
  static const J2ObjcClassInfo _EventLogoutEvent_PropertiesEnum = { 2, "Properties", "rtdc.core.event", "LogoutEvent", 0x4019, 0, NULL, 0, NULL, 1, superclass_type_args, 0, NULL, NULL, "Ljava/lang/Enum<Lrtdc/core/event/LogoutEvent$Properties;>;Lrtdc/core/model/ObjectProperty<Lrtdc/core/event/LogoutEvent;>;" };
  return &_EventLogoutEvent_PropertiesEnum;
}

@end

void EventLogoutEvent_PropertiesEnum_initWithNSString_withInt_(EventLogoutEvent_PropertiesEnum *self, NSString *__name, jint __ordinal) {
  JavaLangEnum_initWithNSString_withInt_(self, __name, __ordinal);
}

EventLogoutEvent_PropertiesEnum *new_EventLogoutEvent_PropertiesEnum_initWithNSString_withInt_(NSString *__name, jint __ordinal) {
  EventLogoutEvent_PropertiesEnum *self = [EventLogoutEvent_PropertiesEnum alloc];
  EventLogoutEvent_PropertiesEnum_initWithNSString_withInt_(self, __name, __ordinal);
  return self;
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(EventLogoutEvent_PropertiesEnum)

@implementation EventLogoutEvent_Handler

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "onLogoutWithEventLogoutEvent:", "onLogout", "V", 0x401, NULL, NULL },
  };
  static const J2ObjcClassInfo _EventLogoutEvent_Handler = { 2, "Handler", "rtdc.core.event", "LogoutEvent", 0x609, 1, methods, 0, NULL, 0, NULL, 0, NULL, NULL, NULL };
  return &_EventLogoutEvent_Handler;
}

@end

J2OBJC_INTERFACE_TYPE_LITERAL_SOURCE(EventLogoutEvent_Handler)
