//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nicolasmenard/IdeaProjects/RTDC/core/src/main/java/rtdc/core/event/EventType.java
//

#include "EventType.h"
#include "J2ObjC_source.h"

@interface EventEventType () {
 @public
  NSString *name_;
}

@end

J2OBJC_FIELD_SETTER(EventEventType, name_, NSString *)

@implementation EventEventType

- (instancetype)initWithNSString:(NSString *)name {
  EventEventType_initWithNSString_(self, name);
  return self;
}

- (NSString *)getName {
  return name_;
}

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "initWithNSString:", "EventType", NULL, 0x1, NULL, NULL },
    { "getName", NULL, "Ljava.lang.String;", 0x1, NULL, NULL },
  };
  static const J2ObjcFieldInfo fields[] = {
    { "name_", NULL, 0x12, "Ljava.lang.String;", NULL, NULL, .constantValue.asLong = 0 },
  };
  static const J2ObjcClassInfo _EventEventType = { 2, "EventType", "rtdc.core.event", NULL, 0x1, 2, methods, 1, fields, 0, NULL, 0, NULL, NULL, "<T::Lrtdc/core/event/EventHandler;>Ljava/lang/Object;" };
  return &_EventEventType;
}

@end

void EventEventType_initWithNSString_(EventEventType *self, NSString *name) {
  (void) NSObject_init(self);
  self->name_ = name;
}

EventEventType *new_EventEventType_initWithNSString_(NSString *name) {
  EventEventType *self = [EventEventType alloc];
  EventEventType_initWithNSString_(self, name);
  return self;
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(EventEventType)