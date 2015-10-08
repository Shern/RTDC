//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nicolasmenard/IdeaProjects/RTDC/core/src/main/java/rtdc/core/controller/UserListController.java
//

#include "Bootstrapper.h"
#include "Cache.h"
#include "Controller.h"
#include "Dispatcher.h"
#include "Event.h"
#include "EventType.h"
#include "Factory.h"
#include "FetchUsersEvent.h"
#include "J2ObjC_source.h"
#include "Service.h"
#include "SimpleComparator.h"
#include "User.h"
#include "UserListController.h"
#include "UserListView.h"
#include "com/google/common/collect/ImmutableSet.h"
#include "java/util/Collections.h"
#include "java/util/Comparator.h"
#include "java/util/HashSet.h"
#include "java/util/LinkedList.h"
#include "java/util/List.h"
#include "java/util/Set.h"

@interface ControllerUserListController () {
 @public
  id<JavaUtilSet> users_;
}

@end

J2OBJC_FIELD_SETTER(ControllerUserListController, users_, id<JavaUtilSet>)

@implementation ControllerUserListController

- (instancetype)initWithRtdcCoreViewUserListView:(id<RtdcCoreViewUserListView>)view {
  ControllerUserListController_initWithRtdcCoreViewUserListView_(self, view);
  return self;
}

- (NSString *)getTitle {
  return @"Users";
}

- (id<JavaUtilList>)sortUsersWithModelUser_PropertiesEnum:(ModelUser_PropertiesEnum *)property {
  JavaUtilLinkedList *sortedUsers = [new_JavaUtilLinkedList_initWithJavaUtilCollection_(users_) autorelease];
  JavaUtilCollections_sortWithJavaUtilList_withJavaUtilComparator_(sortedUsers, [((ModelSimpleComparator_Builder *) nil_chk(ModelSimpleComparator_forPropertyWithModelObjectProperty_(property))) build]);
  return sortedUsers;
}

- (void)deleteUserWithModelUser:(ModelUser *)user {
  [((id<JavaUtilSet>) nil_chk(users_)) removeWithId:user];
  ServiceService_deleteUserWithInt_([((ModelUser *) nil_chk(user)) getId]);
}

- (void)editUserWithModelUser:(ModelUser *)user {
  [((UtilCache *) nil_chk(UtilCache_getInstance())) putWithNSString:@"user" withId:user];
  [((id<ImplDispatcher>) nil_chk([((id<ImplFactory>) nil_chk(JreLoadStatic(RtdcCoreBootstrapper, FACTORY_))) newDispatcher])) goToEditUserWithControllerController:self];
}

- (void)onUsersFetchedWithRtdcCoreEventFetchUsersEvent:(RtdcCoreEventFetchUsersEvent *)event {
  JreStrongAssignAndConsume(&users_, new_JavaUtilHashSet_initWithJavaUtilCollection_([((RtdcCoreEventFetchUsersEvent *) nil_chk(event)) getUsers]));
  [((id<RtdcCoreViewUserListView>) nil_chk(view_)) setUsersWithJavaUtilList:[self sortUsersWithModelUser_PropertiesEnum:JreLoadStatic(ModelUser_PropertiesEnum, lastName)]];
}

- (void)onStop {
  [super onStop];
  RtdcCoreEventEvent_unsubscribeWithRtdcCoreEventEventType_withRtdcCoreEventEventHandler_(JreLoadStatic(RtdcCoreEventFetchUsersEvent, TYPE_), self);
}

- (void)dealloc {
  RELEASE_(users_);
  [super dealloc];
}

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "initWithRtdcCoreViewUserListView:", "UserListController", NULL, 0x1, NULL, NULL },
    { "getTitle", NULL, "Ljava.lang.String;", 0x0, NULL, NULL },
    { "sortUsersWithModelUser_PropertiesEnum:", "sortUsers", "Ljava.util.List;", 0x1, NULL, NULL },
    { "deleteUserWithModelUser:", "deleteUser", "V", 0x1, NULL, NULL },
    { "editUserWithModelUser:", "editUser", "V", 0x1, NULL, NULL },
    { "onUsersFetchedWithRtdcCoreEventFetchUsersEvent:", "onUsersFetched", "V", 0x1, NULL, NULL },
    { "onStop", NULL, "V", 0x1, NULL, NULL },
  };
  static const J2ObjcFieldInfo fields[] = {
    { "users_", NULL, 0x2, "Ljava.util.Set;", NULL, "Ljava/util/Set<Lrtdc/core/model/User;>;", .constantValue.asLong = 0 },
  };
  static const char *superclass_type_args[] = {"Lrtdc.core.view.UserListView;"};
  static const J2ObjcClassInfo _ControllerUserListController = { 2, "UserListController", "rtdc.core.controller", NULL, 0x1, 7, methods, 1, fields, 1, superclass_type_args, 0, NULL, NULL, "Lrtdc/core/controller/Controller<Lrtdc/core/view/UserListView;>;Lrtdc/core/event/FetchUsersEvent$Handler;" };
  return &_ControllerUserListController;
}

@end

void ControllerUserListController_initWithRtdcCoreViewUserListView_(ControllerUserListController *self, id<RtdcCoreViewUserListView> view) {
  ControllerController_initWithRtdcCoreViewView_(self, view);
  RtdcCoreEventEvent_subscribeWithRtdcCoreEventEventType_withRtdcCoreEventEventHandler_(JreLoadStatic(RtdcCoreEventFetchUsersEvent, TYPE_), self);
  ServiceService_getUsers();
}

ControllerUserListController *new_ControllerUserListController_initWithRtdcCoreViewUserListView_(id<RtdcCoreViewUserListView> view) {
  ControllerUserListController *self = [ControllerUserListController alloc];
  ControllerUserListController_initWithRtdcCoreViewUserListView_(self, view);
  return self;
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(ControllerUserListController)
