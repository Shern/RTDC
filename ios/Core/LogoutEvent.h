//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nicolasmenard/IdeaProjects/RTDC/core/src/main/java/rtdc/core/event/LogoutEvent.java
//

#ifndef _LogoutEvent_H_
#define _LogoutEvent_H_

#include "Event.h"
#include "EventHandler.h"
#include "J2ObjC_header.h"
#include "ObjectProperty.h"
#include "java/lang/Enum.h"

@class EventEventType;
@class IOSObjectArray;
@protocol ModelObjectProperty;

@interface EventLogoutEvent : EventEvent

+ (EventEventType *)TYPE;

#pragma mark Public

- (instancetype)init;

- (IOSObjectArray *)getProperties;

- (NSString *)getType;

- (id)getValueWithModelObjectProperty:(id<ModelObjectProperty>)property;

#pragma mark Package-Private

- (void)fire;

@end

J2OBJC_STATIC_INIT(EventLogoutEvent)

FOUNDATION_EXPORT EventEventType *EventLogoutEvent_TYPE_;
J2OBJC_STATIC_FIELD_GETTER(EventLogoutEvent, TYPE_, EventEventType *)

FOUNDATION_EXPORT void EventLogoutEvent_init(EventLogoutEvent *self);

FOUNDATION_EXPORT EventLogoutEvent *new_EventLogoutEvent_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(EventLogoutEvent)

@compatibility_alias RtdcCoreEventLogoutEvent EventLogoutEvent;

@interface EventLogoutEvent_PropertiesEnum : JavaLangEnum < NSCopying, ModelObjectProperty >

#pragma mark Package-Private

+ (IOSObjectArray *)values;
FOUNDATION_EXPORT IOSObjectArray *EventLogoutEvent_PropertiesEnum_values();

+ (EventLogoutEvent_PropertiesEnum *)valueOfWithNSString:(NSString *)name;
FOUNDATION_EXPORT EventLogoutEvent_PropertiesEnum *EventLogoutEvent_PropertiesEnum_valueOfWithNSString_(NSString *name);

- (id)copyWithZone:(NSZone *)zone;

@end

J2OBJC_EMPTY_STATIC_INIT(EventLogoutEvent_PropertiesEnum)

FOUNDATION_EXPORT EventLogoutEvent_PropertiesEnum *EventLogoutEvent_PropertiesEnum_values_[];

J2OBJC_TYPE_LITERAL_HEADER(EventLogoutEvent_PropertiesEnum)

@protocol EventLogoutEvent_Handler < EventEventHandler, NSObject, JavaObject >

- (void)onLogoutWithEventLogoutEvent:(EventLogoutEvent *)event;

@end

J2OBJC_EMPTY_STATIC_INIT(EventLogoutEvent_Handler)

J2OBJC_TYPE_LITERAL_HEADER(EventLogoutEvent_Handler)

#endif // _LogoutEvent_H_
