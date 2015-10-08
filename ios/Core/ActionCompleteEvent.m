//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nicolasmenard/IdeaProjects/RTDC/core/src/main/java/rtdc/core/event/ActionCompleteEvent.java
//

#include "ActionCompleteEvent.h"
#include "Event.h"
#include "EventType.h"
#include "IOSClass.h"
#include "IOSObjectArray.h"
#include "J2ObjC_source.h"
#include "JSONObject.h"
#include "ObjectProperty.h"
#include "com/google/common/collect/ImmutableSet.h"
#include "java/lang/Enum.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/Integer.h"

@interface EventActionCompleteEvent () {
 @public
  NSString *objectType_;
  jint objectId_;
  NSString *action_;
}

@end

J2OBJC_FIELD_SETTER(EventActionCompleteEvent, objectType_, NSString *)
J2OBJC_FIELD_SETTER(EventActionCompleteEvent, action_, NSString *)

@interface EventActionCompleteEvent_Handler : NSObject

@end

__attribute__((unused)) static void EventActionCompleteEvent_PropertiesEnum_initWithNSString_withInt_(EventActionCompleteEvent_PropertiesEnum *self, NSString *__name, jint __ordinal);

__attribute__((unused)) static EventActionCompleteEvent_PropertiesEnum *new_EventActionCompleteEvent_PropertiesEnum_initWithNSString_withInt_(NSString *__name, jint __ordinal) NS_RETURNS_RETAINED;

J2OBJC_INITIALIZED_DEFN(EventActionCompleteEvent)

EventEventType *EventActionCompleteEvent_TYPE_;

@implementation EventActionCompleteEvent

- (instancetype)initWithInt:(jint)objectId
               withNSString:(NSString *)objectType
               withNSString:(NSString *)action {
  EventActionCompleteEvent_initWithInt_withNSString_withNSString_(self, objectId, objectType, action);
  return self;
}

- (instancetype)initWithJsonJSONObject:(JsonJSONObject *)object {
  EventActionCompleteEvent_initWithJsonJSONObject_(self, object);
  return self;
}

- (jint)getObjectId {
  return objectId_;
}

- (NSString *)getObjectType {
  return objectType_;
}

- (NSString *)getAction {
  return action_;
}

- (void)fire {
  for (id<EventActionCompleteEvent_Handler> __strong handler in nil_chk([self getHandlersWithEventEventType:EventActionCompleteEvent_TYPE_])) [((id<EventActionCompleteEvent_Handler>) nil_chk(handler)) onActionCompleteWithEventActionCompleteEvent:self];
}

- (IOSObjectArray *)getProperties {
  return EventActionCompleteEvent_PropertiesEnum_values();
}

- (NSString *)getType {
  return [((EventEventType *) nil_chk(EventActionCompleteEvent_TYPE_)) getName];
}

- (id)getValueWithModelObjectProperty:(id<ModelObjectProperty>)property {
  switch ([(EventActionCompleteEvent_PropertiesEnum *) check_class_cast(property, [EventActionCompleteEvent_PropertiesEnum class]) ordinal]) {
    case EventActionCompleteEvent_Properties_objectId:
    return JavaLangInteger_valueOfWithInt_(objectId_);
    case EventActionCompleteEvent_Properties_objectType:
    return objectType_;
    case EventActionCompleteEvent_Properties_action:
    return action_;
  }
  return nil;
}

- (void)dealloc {
  RELEASE_(objectType_);
  RELEASE_(action_);
  [super dealloc];
}

+ (void)initialize {
  if (self == [EventActionCompleteEvent class]) {
    JreStrongAssignAndConsume(&EventActionCompleteEvent_TYPE_, new_EventEventType_initWithNSString_(@"actionCompleteEvent"));
    J2OBJC_SET_INITIALIZED(EventActionCompleteEvent)
  }
}

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "initWithInt:withNSString:withNSString:", "ActionCompleteEvent", NULL, 0x1, NULL, NULL },
    { "initWithJsonJSONObject:", "ActionCompleteEvent", NULL, 0x1, NULL, NULL },
    { "getObjectId", NULL, "I", 0x1, NULL, NULL },
    { "getObjectType", NULL, "Ljava.lang.String;", 0x1, NULL, NULL },
    { "getAction", NULL, "Ljava.lang.String;", 0x1, NULL, NULL },
    { "fire", NULL, "V", 0x1, NULL, NULL },
    { "getProperties", NULL, "[Lrtdc.core.model.ObjectProperty;", 0x1, NULL, NULL },
    { "getType", NULL, "Ljava.lang.String;", 0x1, NULL, NULL },
    { "getValueWithModelObjectProperty:", "getValue", "Ljava.lang.Object;", 0x1, NULL, NULL },
  };
  static const J2ObjcFieldInfo fields[] = {
    { "TYPE_", NULL, 0x19, "Lrtdc.core.event.EventType;", &EventActionCompleteEvent_TYPE_, "Lrtdc/core/event/EventType<Lrtdc/core/event/ActionCompleteEvent$Handler;>;", .constantValue.asLong = 0 },
    { "objectType_", NULL, 0x12, "Ljava.lang.String;", NULL, NULL, .constantValue.asLong = 0 },
    { "objectId_", NULL, 0x12, "I", NULL, NULL, .constantValue.asLong = 0 },
    { "action_", NULL, 0x12, "Ljava.lang.String;", NULL, NULL, .constantValue.asLong = 0 },
  };
  static const char *superclass_type_args[] = {"Lrtdc.core.event.ActionCompleteEvent$Handler;"};
  static const char *inner_classes[] = {"Lrtdc.core.event.ActionCompleteEvent$Handler;", "Lrtdc.core.event.ActionCompleteEvent$Properties;"};
  static const J2ObjcClassInfo _EventActionCompleteEvent = { 2, "ActionCompleteEvent", "rtdc.core.event", NULL, 0x1, 9, methods, 4, fields, 1, superclass_type_args, 2, inner_classes, NULL, "Lrtdc/core/event/Event<Lrtdc/core/event/ActionCompleteEvent$Handler;>;" };
  return &_EventActionCompleteEvent;
}

@end

void EventActionCompleteEvent_initWithInt_withNSString_withNSString_(EventActionCompleteEvent *self, jint objectId, NSString *objectType, NSString *action) {
  EventEvent_init(self);
  self->objectId_ = objectId;
  JreStrongAssign(&self->objectType_, objectType);
  JreStrongAssign(&self->action_, action);
}

EventActionCompleteEvent *new_EventActionCompleteEvent_initWithInt_withNSString_withNSString_(jint objectId, NSString *objectType, NSString *action) {
  EventActionCompleteEvent *self = [EventActionCompleteEvent alloc];
  EventActionCompleteEvent_initWithInt_withNSString_withNSString_(self, objectId, objectType, action);
  return self;
}

void EventActionCompleteEvent_initWithJsonJSONObject_(EventActionCompleteEvent *self, JsonJSONObject *object) {
  EventEvent_init(self);
  self->objectId_ = [((JsonJSONObject *) nil_chk(object)) getIntWithNSString:[((EventActionCompleteEvent_PropertiesEnum *) nil_chk(JreLoadStatic(EventActionCompleteEvent_PropertiesEnum, objectId))) name]];
  JreStrongAssign(&self->objectType_, [object getStringWithNSString:[((EventActionCompleteEvent_PropertiesEnum *) nil_chk(JreLoadStatic(EventActionCompleteEvent_PropertiesEnum, objectType))) name]]);
  JreStrongAssign(&self->action_, [object getStringWithNSString:[((EventActionCompleteEvent_PropertiesEnum *) nil_chk(JreLoadStatic(EventActionCompleteEvent_PropertiesEnum, action))) name]]);
}

EventActionCompleteEvent *new_EventActionCompleteEvent_initWithJsonJSONObject_(JsonJSONObject *object) {
  EventActionCompleteEvent *self = [EventActionCompleteEvent alloc];
  EventActionCompleteEvent_initWithJsonJSONObject_(self, object);
  return self;
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(EventActionCompleteEvent)

@implementation EventActionCompleteEvent_Handler

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "onActionCompleteWithEventActionCompleteEvent:", "onActionComplete", "V", 0x401, NULL, NULL },
  };
  static const J2ObjcClassInfo _EventActionCompleteEvent_Handler = { 2, "Handler", "rtdc.core.event", "ActionCompleteEvent", 0x609, 1, methods, 0, NULL, 0, NULL, 0, NULL, NULL, NULL };
  return &_EventActionCompleteEvent_Handler;
}

@end

J2OBJC_INTERFACE_TYPE_LITERAL_SOURCE(EventActionCompleteEvent_Handler)

J2OBJC_INITIALIZED_DEFN(EventActionCompleteEvent_PropertiesEnum)

EventActionCompleteEvent_PropertiesEnum *EventActionCompleteEvent_PropertiesEnum_values_[3];

@implementation EventActionCompleteEvent_PropertiesEnum

- (instancetype)initWithNSString:(NSString *)__name
                         withInt:(jint)__ordinal {
  EventActionCompleteEvent_PropertiesEnum_initWithNSString_withInt_(self, __name, __ordinal);
  return self;
}

IOSObjectArray *EventActionCompleteEvent_PropertiesEnum_values() {
  EventActionCompleteEvent_PropertiesEnum_initialize();
  return [IOSObjectArray arrayWithObjects:EventActionCompleteEvent_PropertiesEnum_values_ count:3 type:EventActionCompleteEvent_PropertiesEnum_class_()];
}

+ (IOSObjectArray *)values {
  return EventActionCompleteEvent_PropertiesEnum_values();
}

+ (EventActionCompleteEvent_PropertiesEnum *)valueOfWithNSString:(NSString *)name {
  return EventActionCompleteEvent_PropertiesEnum_valueOfWithNSString_(name);
}

EventActionCompleteEvent_PropertiesEnum *EventActionCompleteEvent_PropertiesEnum_valueOfWithNSString_(NSString *name) {
  EventActionCompleteEvent_PropertiesEnum_initialize();
  for (int i = 0; i < 3; i++) {
    EventActionCompleteEvent_PropertiesEnum *e = EventActionCompleteEvent_PropertiesEnum_values_[i];
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

+ (void)initialize {
  if (self == [EventActionCompleteEvent_PropertiesEnum class]) {
    EventActionCompleteEvent_PropertiesEnum_objectId = new_EventActionCompleteEvent_PropertiesEnum_initWithNSString_withInt_(@"objectId", 0);
    EventActionCompleteEvent_PropertiesEnum_objectType = new_EventActionCompleteEvent_PropertiesEnum_initWithNSString_withInt_(@"objectType", 1);
    EventActionCompleteEvent_PropertiesEnum_action = new_EventActionCompleteEvent_PropertiesEnum_initWithNSString_withInt_(@"action", 2);
    J2OBJC_SET_INITIALIZED(EventActionCompleteEvent_PropertiesEnum)
  }
}

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcFieldInfo fields[] = {
    { "objectId", "objectId", 0x4019, "Lrtdc.core.event.ActionCompleteEvent$Properties;", &EventActionCompleteEvent_PropertiesEnum_objectId, NULL, .constantValue.asLong = 0 },
    { "objectType", "objectType", 0x4019, "Lrtdc.core.event.ActionCompleteEvent$Properties;", &EventActionCompleteEvent_PropertiesEnum_objectType, NULL, .constantValue.asLong = 0 },
    { "action", "action", 0x4019, "Lrtdc.core.event.ActionCompleteEvent$Properties;", &EventActionCompleteEvent_PropertiesEnum_action, NULL, .constantValue.asLong = 0 },
  };
  static const char *superclass_type_args[] = {"Lrtdc.core.event.ActionCompleteEvent$Properties;"};
  static const J2ObjcClassInfo _EventActionCompleteEvent_PropertiesEnum = { 2, "Properties", "rtdc.core.event", "ActionCompleteEvent", 0x4019, 0, NULL, 3, fields, 1, superclass_type_args, 0, NULL, NULL, "Ljava/lang/Enum<Lrtdc/core/event/ActionCompleteEvent$Properties;>;Lrtdc/core/model/ObjectProperty<Lrtdc/core/event/ActionCompleteEvent;>;" };
  return &_EventActionCompleteEvent_PropertiesEnum;
}

@end

void EventActionCompleteEvent_PropertiesEnum_initWithNSString_withInt_(EventActionCompleteEvent_PropertiesEnum *self, NSString *__name, jint __ordinal) {
  JavaLangEnum_initWithNSString_withInt_(self, __name, __ordinal);
}

EventActionCompleteEvent_PropertiesEnum *new_EventActionCompleteEvent_PropertiesEnum_initWithNSString_withInt_(NSString *__name, jint __ordinal) {
  EventActionCompleteEvent_PropertiesEnum *self = [EventActionCompleteEvent_PropertiesEnum alloc];
  EventActionCompleteEvent_PropertiesEnum_initWithNSString_withInt_(self, __name, __ordinal);
  return self;
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(EventActionCompleteEvent_PropertiesEnum)
