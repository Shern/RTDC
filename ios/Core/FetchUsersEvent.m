//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nicolasmenard/IdeaProjects/RTDC/core/src/main/java/rtdc/core/event/FetchUsersEvent.java
//

#include "Event.h"
#include "EventType.h"
#include "FetchUsersEvent.h"
#include "IOSClass.h"
#include "IOSObjectArray.h"
#include "J2ObjC_source.h"
#include "JSONArray.h"
#include "JSONObject.h"
#include "ObjectProperty.h"
#include "RootObject.h"
#include "User.h"
#include "com/google/common/base/Function.h"
#include "com/google/common/collect/ImmutableSet.h"
#include "java/lang/Enum.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/Iterable.h"
#include "java/util/ArrayList.h"

@interface RtdcCoreEventFetchUsersEvent () {
 @public
  ComGoogleCommonCollectImmutableSet *users_;
}

@end

J2OBJC_FIELD_SETTER(RtdcCoreEventFetchUsersEvent, users_, ComGoogleCommonCollectImmutableSet *)

@interface RtdcCoreEventFetchUsersEvent_Handler : NSObject

@end

__attribute__((unused)) static void RtdcCoreEventFetchUsersEvent_PropertiesEnum_initWithNSString_withInt_(RtdcCoreEventFetchUsersEvent_PropertiesEnum *self, NSString *__name, jint __ordinal);

__attribute__((unused)) static RtdcCoreEventFetchUsersEvent_PropertiesEnum *new_RtdcCoreEventFetchUsersEvent_PropertiesEnum_initWithNSString_withInt_(NSString *__name, jint __ordinal) NS_RETURNS_RETAINED;

@interface RtdcCoreEventFetchUsersEvent_$1 : NSObject < ComGoogleCommonBaseFunction >

- (ModelUser *)applyWithId:(JSONJSONObject *)input;

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(RtdcCoreEventFetchUsersEvent_$1)

__attribute__((unused)) static void RtdcCoreEventFetchUsersEvent_$1_init(RtdcCoreEventFetchUsersEvent_$1 *self);

__attribute__((unused)) static RtdcCoreEventFetchUsersEvent_$1 *new_RtdcCoreEventFetchUsersEvent_$1_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(RtdcCoreEventFetchUsersEvent_$1)

J2OBJC_INITIALIZED_DEFN(RtdcCoreEventFetchUsersEvent)

RtdcCoreEventEventType *RtdcCoreEventFetchUsersEvent_TYPE_;

@implementation RtdcCoreEventFetchUsersEvent

- (instancetype)initWithJavaLangIterable:(id<JavaLangIterable>)units {
  RtdcCoreEventFetchUsersEvent_initWithJavaLangIterable_(self, units);
  return self;
}

- (instancetype)initWithJSONJSONObject:(JSONJSONObject *)object {
  RtdcCoreEventFetchUsersEvent_initWithJSONJSONObject_(self, object);
  return self;
}

- (ComGoogleCommonCollectImmutableSet *)getUsers {
  return users_;
}

- (void)fire {
  for (id<RtdcCoreEventFetchUsersEvent_Handler> __strong handler in nil_chk([self getHandlersWithRtdcCoreEventEventType:RtdcCoreEventFetchUsersEvent_TYPE_])) [((id<RtdcCoreEventFetchUsersEvent_Handler>) nil_chk(handler)) onUsersFetchedWithRtdcCoreEventFetchUsersEvent:self];
}

- (IOSObjectArray *)getProperties {
  return RtdcCoreEventFetchUsersEvent_PropertiesEnum_values();
}

- (NSString *)getType {
  return [((RtdcCoreEventEventType *) nil_chk(RtdcCoreEventFetchUsersEvent_TYPE_)) getName];
}

- (id)getValueWithModelObjectProperty:(id<ModelObjectProperty>)property {
  switch ([(RtdcCoreEventFetchUsersEvent_PropertiesEnum *) check_class_cast(property, [RtdcCoreEventFetchUsersEvent_PropertiesEnum class]) ordinal]) {
    case RtdcCoreEventFetchUsersEvent_Properties_users:
    return users_;
  }
  return nil;
}

- (void)dealloc {
  RELEASE_(users_);
  [super dealloc];
}

+ (void)initialize {
  if (self == [RtdcCoreEventFetchUsersEvent class]) {
    JreStrongAssignAndConsume(&RtdcCoreEventFetchUsersEvent_TYPE_, new_RtdcCoreEventEventType_initWithNSString_(@"fetchUsersEvent"));
    J2OBJC_SET_INITIALIZED(RtdcCoreEventFetchUsersEvent)
  }
}

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "initWithJavaLangIterable:", "FetchUsersEvent", NULL, 0x1, NULL, NULL },
    { "initWithJSONJSONObject:", "FetchUsersEvent", NULL, 0x1, NULL, NULL },
    { "getUsers", NULL, "Lcom.google.common.collect.ImmutableSet;", 0x1, NULL, NULL },
    { "fire", NULL, "V", 0x1, NULL, NULL },
    { "getProperties", NULL, "[Lrtdc.core.model.ObjectProperty;", 0x1, NULL, NULL },
    { "getType", NULL, "Ljava.lang.String;", 0x1, NULL, NULL },
    { "getValueWithModelObjectProperty:", "getValue", "Ljava.lang.Object;", 0x1, NULL, NULL },
  };
  static const J2ObjcFieldInfo fields[] = {
    { "TYPE_", NULL, 0x19, "Lrtdc.core.event.EventType;", &RtdcCoreEventFetchUsersEvent_TYPE_, "Lrtdc/core/event/EventType<Lrtdc/core/event/FetchUsersEvent$Handler;>;", .constantValue.asLong = 0 },
    { "users_", NULL, 0x12, "Lcom.google.common.collect.ImmutableSet;", NULL, "Lcom/google/common/collect/ImmutableSet<Lrtdc/core/model/User;>;", .constantValue.asLong = 0 },
  };
  static const char *superclass_type_args[] = {"Lrtdc.core.event.FetchUsersEvent$Handler;"};
  static const char *inner_classes[] = {"Lrtdc.core.event.FetchUsersEvent$Handler;", "Lrtdc.core.event.FetchUsersEvent$Properties;"};
  static const J2ObjcClassInfo _RtdcCoreEventFetchUsersEvent = { 2, "FetchUsersEvent", "rtdc.core.event", NULL, 0x1, 7, methods, 2, fields, 1, superclass_type_args, 2, inner_classes, NULL, "Lrtdc/core/event/Event<Lrtdc/core/event/FetchUsersEvent$Handler;>;" };
  return &_RtdcCoreEventFetchUsersEvent;
}

@end

void RtdcCoreEventFetchUsersEvent_initWithJavaLangIterable_(RtdcCoreEventFetchUsersEvent *self, id<JavaLangIterable> units) {
  RtdcCoreEventEvent_init(self);
  JreStrongAssign(&self->users_, ComGoogleCommonCollectImmutableSet_copyOfWithJavaLangIterable_(units));
}

RtdcCoreEventFetchUsersEvent *new_RtdcCoreEventFetchUsersEvent_initWithJavaLangIterable_(id<JavaLangIterable> units) {
  RtdcCoreEventFetchUsersEvent *self = [RtdcCoreEventFetchUsersEvent alloc];
  RtdcCoreEventFetchUsersEvent_initWithJavaLangIterable_(self, units);
  return self;
}

void RtdcCoreEventFetchUsersEvent_initWithJSONJSONObject_(RtdcCoreEventFetchUsersEvent *self, JSONJSONObject *object) {
  RtdcCoreEventEvent_init(self);
  JreStrongAssign(&self->users_, ComGoogleCommonCollectImmutableSet_copyOfWithJavaUtilCollection_([self parseJsonArrayWithJSONJSONArray:[((JSONJSONObject *) nil_chk(object)) getJSONArrayWithNSString:[((RtdcCoreEventFetchUsersEvent_PropertiesEnum *) nil_chk(JreLoadStatic(RtdcCoreEventFetchUsersEvent_PropertiesEnum, users))) name]] withComGoogleCommonBaseFunction:[new_RtdcCoreEventFetchUsersEvent_$1_init() autorelease]]));
}

RtdcCoreEventFetchUsersEvent *new_RtdcCoreEventFetchUsersEvent_initWithJSONJSONObject_(JSONJSONObject *object) {
  RtdcCoreEventFetchUsersEvent *self = [RtdcCoreEventFetchUsersEvent alloc];
  RtdcCoreEventFetchUsersEvent_initWithJSONJSONObject_(self, object);
  return self;
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(RtdcCoreEventFetchUsersEvent)

@implementation RtdcCoreEventFetchUsersEvent_Handler

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "onUsersFetchedWithRtdcCoreEventFetchUsersEvent:", "onUsersFetched", "V", 0x401, NULL, NULL },
  };
  static const J2ObjcClassInfo _RtdcCoreEventFetchUsersEvent_Handler = { 2, "Handler", "rtdc.core.event", "FetchUsersEvent", 0x609, 1, methods, 0, NULL, 0, NULL, 0, NULL, NULL, NULL };
  return &_RtdcCoreEventFetchUsersEvent_Handler;
}

@end

J2OBJC_INTERFACE_TYPE_LITERAL_SOURCE(RtdcCoreEventFetchUsersEvent_Handler)

J2OBJC_INITIALIZED_DEFN(RtdcCoreEventFetchUsersEvent_PropertiesEnum)

RtdcCoreEventFetchUsersEvent_PropertiesEnum *RtdcCoreEventFetchUsersEvent_PropertiesEnum_values_[1];

@implementation RtdcCoreEventFetchUsersEvent_PropertiesEnum

- (instancetype)initWithNSString:(NSString *)__name
                         withInt:(jint)__ordinal {
  RtdcCoreEventFetchUsersEvent_PropertiesEnum_initWithNSString_withInt_(self, __name, __ordinal);
  return self;
}

IOSObjectArray *RtdcCoreEventFetchUsersEvent_PropertiesEnum_values() {
  RtdcCoreEventFetchUsersEvent_PropertiesEnum_initialize();
  return [IOSObjectArray arrayWithObjects:RtdcCoreEventFetchUsersEvent_PropertiesEnum_values_ count:1 type:RtdcCoreEventFetchUsersEvent_PropertiesEnum_class_()];
}

+ (IOSObjectArray *)values {
  return RtdcCoreEventFetchUsersEvent_PropertiesEnum_values();
}

+ (RtdcCoreEventFetchUsersEvent_PropertiesEnum *)valueOfWithNSString:(NSString *)name {
  return RtdcCoreEventFetchUsersEvent_PropertiesEnum_valueOfWithNSString_(name);
}

RtdcCoreEventFetchUsersEvent_PropertiesEnum *RtdcCoreEventFetchUsersEvent_PropertiesEnum_valueOfWithNSString_(NSString *name) {
  RtdcCoreEventFetchUsersEvent_PropertiesEnum_initialize();
  for (int i = 0; i < 1; i++) {
    RtdcCoreEventFetchUsersEvent_PropertiesEnum *e = RtdcCoreEventFetchUsersEvent_PropertiesEnum_values_[i];
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
  if (self == [RtdcCoreEventFetchUsersEvent_PropertiesEnum class]) {
    RtdcCoreEventFetchUsersEvent_PropertiesEnum_users = new_RtdcCoreEventFetchUsersEvent_PropertiesEnum_initWithNSString_withInt_(@"users", 0);
    J2OBJC_SET_INITIALIZED(RtdcCoreEventFetchUsersEvent_PropertiesEnum)
  }
}

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcFieldInfo fields[] = {
    { "users", "users", 0x4019, "Lrtdc.core.event.FetchUsersEvent$Properties;", &RtdcCoreEventFetchUsersEvent_PropertiesEnum_users, NULL, .constantValue.asLong = 0 },
  };
  static const char *superclass_type_args[] = {"Lrtdc.core.event.FetchUsersEvent$Properties;"};
  static const J2ObjcClassInfo _RtdcCoreEventFetchUsersEvent_PropertiesEnum = { 2, "Properties", "rtdc.core.event", "FetchUsersEvent", 0x4019, 0, NULL, 1, fields, 1, superclass_type_args, 0, NULL, NULL, "Ljava/lang/Enum<Lrtdc/core/event/FetchUsersEvent$Properties;>;Lrtdc/core/model/ObjectProperty<Lrtdc/core/event/FetchUsersEvent;>;" };
  return &_RtdcCoreEventFetchUsersEvent_PropertiesEnum;
}

@end

void RtdcCoreEventFetchUsersEvent_PropertiesEnum_initWithNSString_withInt_(RtdcCoreEventFetchUsersEvent_PropertiesEnum *self, NSString *__name, jint __ordinal) {
  JavaLangEnum_initWithNSString_withInt_(self, __name, __ordinal);
}

RtdcCoreEventFetchUsersEvent_PropertiesEnum *new_RtdcCoreEventFetchUsersEvent_PropertiesEnum_initWithNSString_withInt_(NSString *__name, jint __ordinal) {
  RtdcCoreEventFetchUsersEvent_PropertiesEnum *self = [RtdcCoreEventFetchUsersEvent_PropertiesEnum alloc];
  RtdcCoreEventFetchUsersEvent_PropertiesEnum_initWithNSString_withInt_(self, __name, __ordinal);
  return self;
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(RtdcCoreEventFetchUsersEvent_PropertiesEnum)

@implementation RtdcCoreEventFetchUsersEvent_$1

- (ModelUser *)applyWithId:(JSONJSONObject *)input {
  return [new_ModelUser_initWithJSONJSONObject_(input) autorelease];
}

J2OBJC_IGNORE_DESIGNATED_BEGIN
- (instancetype)init {
  RtdcCoreEventFetchUsersEvent_$1_init(self);
  return self;
}
J2OBJC_IGNORE_DESIGNATED_END

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "applyWithId:", "apply", "Lrtdc.core.model.User;", 0x1, NULL, NULL },
    { "init", "", NULL, 0x0, NULL, NULL },
  };
  static const J2ObjCEnclosingMethodInfo enclosing_method = { "RtdcCoreEventFetchUsersEvent", "initWithJSONJSONObject:" };
  static const J2ObjcClassInfo _RtdcCoreEventFetchUsersEvent_$1 = { 2, "", "rtdc.core.event", "FetchUsersEvent", 0x8008, 2, methods, 0, NULL, 0, NULL, 0, NULL, &enclosing_method, "Ljava/lang/Object;Lcom/google/common/base/Function<Lrtdc/core/json/JSONObject;Lrtdc/core/model/User;>;" };
  return &_RtdcCoreEventFetchUsersEvent_$1;
}

@end

void RtdcCoreEventFetchUsersEvent_$1_init(RtdcCoreEventFetchUsersEvent_$1 *self) {
  NSObject_init(self);
}

RtdcCoreEventFetchUsersEvent_$1 *new_RtdcCoreEventFetchUsersEvent_$1_init() {
  RtdcCoreEventFetchUsersEvent_$1 *self = [RtdcCoreEventFetchUsersEvent_$1 alloc];
  RtdcCoreEventFetchUsersEvent_$1_init(self);
  return self;
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(RtdcCoreEventFetchUsersEvent_$1)
