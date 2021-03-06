//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nicolasmenard/IdeaProjects/RTDC/core/src/main/java/rtdc/core/controller/UnitListController.java
//

#include "Bootstrapper.h"
#include "Cache.h"
#include "Controller.h"
#include "Dispatcher.h"
#include "Event.h"
#include "EventType.h"
#include "Factory.h"
#include "FetchUnitsEvent.h"
#include "J2ObjC_source.h"
#include "Service.h"
#include "SimpleComparator.h"
#include "Unit.h"
#include "UnitListController.h"
#include "UnitListView.h"
#include "com/google/common/collect/ImmutableSet.h"
#include "java/util/ArrayList.h"
#include "java/util/Collections.h"
#include "java/util/Comparator.h"

@interface ControllerUnitListController () {
 @public
  JavaUtilArrayList *units_;
}

@end

J2OBJC_FIELD_SETTER(ControllerUnitListController, units_, JavaUtilArrayList *)

@implementation ControllerUnitListController

- (instancetype)initWithViewUnitListView:(id<ViewUnitListView>)view {
  ControllerUnitListController_initWithViewUnitListView_(self, view);
  return self;
}

- (NSString *)getTitle {
  return @"Units";
}

- (void)sortUsersWithModelUnit_PropertiesEnum:(ModelUnit_PropertiesEnum *)property {
  JavaUtilCollections_sortWithJavaUtilList_withJavaUtilComparator_(units_, [((ModelSimpleComparator_Builder *) nil_chk(ModelSimpleComparator_forPropertyWithModelObjectProperty_(property))) build]);
  [((id<ViewUnitListView>) nil_chk(view_)) setUnitsWithJavaUtilList:units_];
}

- (void)editUnitWithModelUnit:(ModelUnit *)unit {
  [((UtilCache *) nil_chk(UtilCache_getInstance())) putWithNSString:@"unit" withId:unit];
  [((id<ImplDispatcher>) nil_chk([((id<ImplFactory>) nil_chk(JreLoadStatic(RtdcCoreBootstrapper, FACTORY_))) newDispatcher])) goToEditUnitWithControllerController:self];
}

- (void)onUnitsFetchedWithEventFetchUnitsEvent:(EventFetchUnitsEvent *)event {
  units_ = new_JavaUtilArrayList_initWithJavaUtilCollection_([((EventFetchUnitsEvent *) nil_chk(event)) getUnits]);
  [self sortUsersWithModelUnit_PropertiesEnum:JreLoadStatic(ModelUnit_PropertiesEnum, name)];
}

- (void)onStop {
  [super onStop];
  EventEvent_unsubscribeWithEventEventType_withEventEventHandler_(JreLoadStatic(EventFetchUnitsEvent, TYPE_), self);
}

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "initWithViewUnitListView:", "UnitListController", NULL, 0x1, NULL, NULL },
    { "getTitle", NULL, "Ljava.lang.String;", 0x0, NULL, NULL },
    { "sortUsersWithModelUnit_PropertiesEnum:", "sortUsers", "V", 0x1, NULL, NULL },
    { "editUnitWithModelUnit:", "editUnit", "V", 0x1, NULL, NULL },
    { "onUnitsFetchedWithEventFetchUnitsEvent:", "onUnitsFetched", "V", 0x1, NULL, NULL },
    { "onStop", NULL, "V", 0x1, NULL, NULL },
  };
  static const J2ObjcFieldInfo fields[] = {
    { "units_", NULL, 0x2, "Ljava.util.ArrayList;", NULL, "Ljava/util/ArrayList<Lrtdc/core/model/Unit;>;", .constantValue.asLong = 0 },
  };
  static const char *superclass_type_args[] = {"Lrtdc.core.view.UnitListView;"};
  static const J2ObjcClassInfo _ControllerUnitListController = { 2, "UnitListController", "rtdc.core.controller", NULL, 0x1, 6, methods, 1, fields, 1, superclass_type_args, 0, NULL, NULL, "Lrtdc/core/controller/Controller<Lrtdc/core/view/UnitListView;>;Lrtdc/core/event/FetchUnitsEvent$Handler;" };
  return &_ControllerUnitListController;
}

@end

void ControllerUnitListController_initWithViewUnitListView_(ControllerUnitListController *self, id<ViewUnitListView> view) {
  (void) ControllerController_initWithViewView_(self, view);
  EventEvent_subscribeWithEventEventType_withEventEventHandler_(JreLoadStatic(EventFetchUnitsEvent, TYPE_), self);
  ServiceService_getUnits();
}

ControllerUnitListController *new_ControllerUnitListController_initWithViewUnitListView_(id<ViewUnitListView> view) {
  ControllerUnitListController *self = [ControllerUnitListController alloc];
  ControllerUnitListController_initWithViewUnitListView_(self, view);
  return self;
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(ControllerUnitListController)
