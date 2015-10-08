//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nicolasmenard/IdeaProjects/RTDC/core/src/main/java/rtdc/core/event/FetchUnitsEvent.java
//

#ifndef _FetchUnitsEvent_H_
#define _FetchUnitsEvent_H_

#include "Event.h"
#include "EventHandler.h"
#include "J2ObjC_header.h"
#include "ObjectProperty.h"
#include "java/lang/Enum.h"

@class ComGoogleCommonCollectImmutableSet;
@class EventEventType;
@class IOSObjectArray;
@class JsonJSONObject;
@protocol JavaLangIterable;
@protocol ModelObjectProperty;

@interface EventFetchUnitsEvent : EventEvent

#pragma mark Public

- (instancetype)initWithJavaLangIterable:(id<JavaLangIterable>)units;

- (instancetype)initWithJsonJSONObject:(JsonJSONObject *)object;

- (void)fire;

- (IOSObjectArray *)getProperties;

- (NSString *)getType;

- (ComGoogleCommonCollectImmutableSet *)getUnits;

- (id)getValueWithModelObjectProperty:(id<ModelObjectProperty>)property;

@end

J2OBJC_STATIC_INIT(EventFetchUnitsEvent)

FOUNDATION_EXPORT EventEventType *EventFetchUnitsEvent_TYPE_;
J2OBJC_STATIC_FIELD_GETTER(EventFetchUnitsEvent, TYPE_, EventEventType *)

FOUNDATION_EXPORT void EventFetchUnitsEvent_initWithJavaLangIterable_(EventFetchUnitsEvent *self, id<JavaLangIterable> units);

FOUNDATION_EXPORT EventFetchUnitsEvent *new_EventFetchUnitsEvent_initWithJavaLangIterable_(id<JavaLangIterable> units) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void EventFetchUnitsEvent_initWithJsonJSONObject_(EventFetchUnitsEvent *self, JsonJSONObject *object);

FOUNDATION_EXPORT EventFetchUnitsEvent *new_EventFetchUnitsEvent_initWithJsonJSONObject_(JsonJSONObject *object) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(EventFetchUnitsEvent)

@compatibility_alias RtdcCoreEventFetchUnitsEvent EventFetchUnitsEvent;

@protocol EventFetchUnitsEvent_Handler < EventEventHandler, NSObject, JavaObject >

- (void)onUnitsFetchedWithEventFetchUnitsEvent:(EventFetchUnitsEvent *)event;

@end

J2OBJC_EMPTY_STATIC_INIT(EventFetchUnitsEvent_Handler)

J2OBJC_TYPE_LITERAL_HEADER(EventFetchUnitsEvent_Handler)

typedef NS_ENUM(NSUInteger, EventFetchUnitsEvent_Properties) {
  EventFetchUnitsEvent_Properties_units = 0,
};

@interface EventFetchUnitsEvent_PropertiesEnum : JavaLangEnum < NSCopying, ModelObjectProperty >

#pragma mark Package-Private

+ (IOSObjectArray *)values;
FOUNDATION_EXPORT IOSObjectArray *EventFetchUnitsEvent_PropertiesEnum_values();

+ (EventFetchUnitsEvent_PropertiesEnum *)valueOfWithNSString:(NSString *)name;
FOUNDATION_EXPORT EventFetchUnitsEvent_PropertiesEnum *EventFetchUnitsEvent_PropertiesEnum_valueOfWithNSString_(NSString *name);

- (id)copyWithZone:(NSZone *)zone;

@end

J2OBJC_STATIC_INIT(EventFetchUnitsEvent_PropertiesEnum)

FOUNDATION_EXPORT EventFetchUnitsEvent_PropertiesEnum *EventFetchUnitsEvent_PropertiesEnum_values_[];

#define EventFetchUnitsEvent_PropertiesEnum_units EventFetchUnitsEvent_PropertiesEnum_values_[EventFetchUnitsEvent_Properties_units]
J2OBJC_ENUM_CONSTANT_GETTER(EventFetchUnitsEvent_PropertiesEnum, units)

J2OBJC_TYPE_LITERAL_HEADER(EventFetchUnitsEvent_PropertiesEnum)

#endif // _FetchUnitsEvent_H_
