//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nicolasmenard/IdeaProjects/RTDC/core/src/main/java/rtdc/core/event/FetchUserEvent.java
//

#ifndef _FetchUserEvent_H_
#define _FetchUserEvent_H_

#include "Event.h"
#include "EventHandler.h"
#include "J2ObjC_header.h"
#include "ObjectProperty.h"
#include "java/lang/Enum.h"

@class EventEventType;
@class IOSObjectArray;
@class JsonJSONObject;
@class ModelUser;
@protocol ModelObjectProperty;

@interface EventFetchUserEvent : EventEvent

+ (EventEventType *)TYPE;

#pragma mark Public

- (instancetype)initWithJsonJSONObject:(JsonJSONObject *)object;

- (instancetype)initWithModelUser:(ModelUser *)user;

- (void)fire;

- (IOSObjectArray *)getProperties;

- (NSString *)getType;

- (ModelUser *)getUser;

- (id)getValueWithModelObjectProperty:(id<ModelObjectProperty>)property;

@end

J2OBJC_STATIC_INIT(EventFetchUserEvent)

FOUNDATION_EXPORT EventEventType *EventFetchUserEvent_TYPE_;
J2OBJC_STATIC_FIELD_GETTER(EventFetchUserEvent, TYPE_, EventEventType *)

FOUNDATION_EXPORT void EventFetchUserEvent_initWithModelUser_(EventFetchUserEvent *self, ModelUser *user);

FOUNDATION_EXPORT EventFetchUserEvent *new_EventFetchUserEvent_initWithModelUser_(ModelUser *user) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void EventFetchUserEvent_initWithJsonJSONObject_(EventFetchUserEvent *self, JsonJSONObject *object);

FOUNDATION_EXPORT EventFetchUserEvent *new_EventFetchUserEvent_initWithJsonJSONObject_(JsonJSONObject *object) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(EventFetchUserEvent)

@compatibility_alias RtdcCoreEventFetchUserEvent EventFetchUserEvent;

@protocol EventFetchUserEvent_Handler < EventEventHandler, NSObject, JavaObject >

- (void)onUserFetchedWithEventFetchUserEvent:(EventFetchUserEvent *)event;

@end

J2OBJC_EMPTY_STATIC_INIT(EventFetchUserEvent_Handler)

J2OBJC_TYPE_LITERAL_HEADER(EventFetchUserEvent_Handler)

typedef NS_ENUM(NSUInteger, EventFetchUserEvent_Properties) {
  EventFetchUserEvent_Properties_user = 0,
};

@interface EventFetchUserEvent_PropertiesEnum : JavaLangEnum < NSCopying, ModelObjectProperty >

+ (EventFetchUserEvent_PropertiesEnum *)user;

#pragma mark Package-Private

+ (IOSObjectArray *)values;
FOUNDATION_EXPORT IOSObjectArray *EventFetchUserEvent_PropertiesEnum_values();

+ (EventFetchUserEvent_PropertiesEnum *)valueOfWithNSString:(NSString *)name;
FOUNDATION_EXPORT EventFetchUserEvent_PropertiesEnum *EventFetchUserEvent_PropertiesEnum_valueOfWithNSString_(NSString *name);

- (id)copyWithZone:(NSZone *)zone;

@end

J2OBJC_STATIC_INIT(EventFetchUserEvent_PropertiesEnum)

FOUNDATION_EXPORT EventFetchUserEvent_PropertiesEnum *EventFetchUserEvent_PropertiesEnum_values_[];

#define EventFetchUserEvent_PropertiesEnum_user EventFetchUserEvent_PropertiesEnum_values_[EventFetchUserEvent_Properties_user]
J2OBJC_ENUM_CONSTANT_GETTER(EventFetchUserEvent_PropertiesEnum, user)

J2OBJC_TYPE_LITERAL_HEADER(EventFetchUserEvent_PropertiesEnum)

#endif // _FetchUserEvent_H_
