//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nicolasmenard/IdeaProjects/RTDC/core/src/main/java/rtdc/core/event/SessionExpiredEvent.java
//

#ifndef _SessionExpiredEvent_H_
#define _SessionExpiredEvent_H_

#include "Event.h"
#include "EventHandler.h"
#include "J2ObjC_header.h"
#include "ObjectProperty.h"
#include "java/lang/Enum.h"

@class EventEventType;
@class IOSObjectArray;
@protocol ModelObjectProperty;

@interface EventSessionExpiredEvent : EventEvent

#pragma mark Public

- (instancetype)init;

- (IOSObjectArray *)getProperties;

- (NSString *)getType;

- (id)getValueWithModelObjectProperty:(id<ModelObjectProperty>)property;

#pragma mark Package-Private

- (void)fire;

@end

J2OBJC_STATIC_INIT(EventSessionExpiredEvent)

FOUNDATION_EXPORT EventEventType *EventSessionExpiredEvent_TYPE_;
J2OBJC_STATIC_FIELD_GETTER(EventSessionExpiredEvent, TYPE_, EventEventType *)

FOUNDATION_EXPORT void EventSessionExpiredEvent_init(EventSessionExpiredEvent *self);

FOUNDATION_EXPORT EventSessionExpiredEvent *new_EventSessionExpiredEvent_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(EventSessionExpiredEvent)

@compatibility_alias RtdcCoreEventSessionExpiredEvent EventSessionExpiredEvent;

@interface EventSessionExpiredEvent_PropertiesEnum : JavaLangEnum < NSCopying, ModelObjectProperty >

#pragma mark Package-Private

+ (IOSObjectArray *)values;
FOUNDATION_EXPORT IOSObjectArray *EventSessionExpiredEvent_PropertiesEnum_values();

+ (EventSessionExpiredEvent_PropertiesEnum *)valueOfWithNSString:(NSString *)name;
FOUNDATION_EXPORT EventSessionExpiredEvent_PropertiesEnum *EventSessionExpiredEvent_PropertiesEnum_valueOfWithNSString_(NSString *name);

- (id)copyWithZone:(NSZone *)zone;

@end

J2OBJC_EMPTY_STATIC_INIT(EventSessionExpiredEvent_PropertiesEnum)

FOUNDATION_EXPORT EventSessionExpiredEvent_PropertiesEnum *EventSessionExpiredEvent_PropertiesEnum_values_[];

J2OBJC_TYPE_LITERAL_HEADER(EventSessionExpiredEvent_PropertiesEnum)

@protocol EventSessionExpiredEvent_Handler < EventEventHandler, NSObject, JavaObject >

- (void)onSessionExpired;

@end

J2OBJC_EMPTY_STATIC_INIT(EventSessionExpiredEvent_Handler)

J2OBJC_TYPE_LITERAL_HEADER(EventSessionExpiredEvent_Handler)

#endif // _SessionExpiredEvent_H_
