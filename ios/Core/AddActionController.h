//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nicolasmenard/IdeaProjects/RTDC/core/src/main/java/rtdc/core/controller/AddActionController.java
//

#ifndef _AddActionController_H_
#define _AddActionController_H_

#include "Controller.h"
#include "FetchUnitsEvent.h"
#include "J2ObjC_header.h"

@protocol RtdcCoreViewAddActionView;

@interface ControllerAddActionController : ControllerController < RtdcCoreEventFetchUnitsEvent_Handler >

#pragma mark Public

- (instancetype)initWithRtdcCoreViewAddActionView:(id<RtdcCoreViewAddActionView>)view;

- (void)addAction;

- (void)onStop;

- (void)onUnitsFetchedWithRtdcCoreEventFetchUnitsEvent:(RtdcCoreEventFetchUnitsEvent *)event;

#pragma mark Package-Private

- (NSString *)getTitle;

@end

J2OBJC_EMPTY_STATIC_INIT(ControllerAddActionController)

FOUNDATION_EXPORT void ControllerAddActionController_initWithRtdcCoreViewAddActionView_(ControllerAddActionController *self, id<RtdcCoreViewAddActionView> view);

FOUNDATION_EXPORT ControllerAddActionController *new_ControllerAddActionController_initWithRtdcCoreViewAddActionView_(id<RtdcCoreViewAddActionView> view) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ControllerAddActionController)

@compatibility_alias RtdcCoreControllerAddActionController ControllerAddActionController;

#endif // _AddActionController_H_
