//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nicolasmenard/IdeaProjects/RTDC/core/src/main/java/rtdc/core/model/Action.java
//

#include "Action.h"
#include "IOSClass.h"
#include "IOSObjectArray.h"
#include "J2ObjC_source.h"
#include "JSONObject.h"
#include "ObjectProperty.h"
#include "RootObject.h"
#include "Stringifier.h"
#include "Unit.h"
#include "User.h"
#include "java/lang/Enum.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/Integer.h"
#include "java/util/Date.h"

@interface ModelAction () {
 @public
  jint id__;
  ModelUnit *unit_;
  ModelAction_StatusEnum *status_;
  ModelUser *personResponsible_;
  NSString *roleResponsible_;
  ModelAction_TaskEnum *task_;
  NSString *target_;
  JavaUtilDate *deadline_;
  NSString *description__;
}

@end

J2OBJC_FIELD_SETTER(ModelAction, unit_, ModelUnit *)
J2OBJC_FIELD_SETTER(ModelAction, status_, ModelAction_StatusEnum *)
J2OBJC_FIELD_SETTER(ModelAction, personResponsible_, ModelUser *)
J2OBJC_FIELD_SETTER(ModelAction, roleResponsible_, NSString *)
J2OBJC_FIELD_SETTER(ModelAction, task_, ModelAction_TaskEnum *)
J2OBJC_FIELD_SETTER(ModelAction, target_, NSString *)
J2OBJC_FIELD_SETTER(ModelAction, deadline_, JavaUtilDate *)
J2OBJC_FIELD_SETTER(ModelAction, description__, NSString *)

__attribute__((unused)) static void ModelAction_PropertiesEnum_initWithNSString_withInt_(ModelAction_PropertiesEnum *self, NSString *__name, jint __ordinal);

__attribute__((unused)) static ModelAction_PropertiesEnum *new_ModelAction_PropertiesEnum_initWithNSString_withInt_(NSString *__name, jint __ordinal) NS_RETURNS_RETAINED;

__attribute__((unused)) static void ModelAction_StatusEnum_initWithNSString_withInt_(ModelAction_StatusEnum *self, NSString *__name, jint __ordinal);

__attribute__((unused)) static ModelAction_StatusEnum *new_ModelAction_StatusEnum_initWithNSString_withInt_(NSString *__name, jint __ordinal) NS_RETURNS_RETAINED;

@interface ModelAction_Status_$1 : NSObject < UtilStringifier >

- (NSString *)toStringWithId:(ModelAction_StatusEnum *)status;

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ModelAction_Status_$1)

__attribute__((unused)) static void ModelAction_Status_$1_init(ModelAction_Status_$1 *self);

__attribute__((unused)) static ModelAction_Status_$1 *new_ModelAction_Status_$1_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ModelAction_Status_$1)

__attribute__((unused)) static void ModelAction_TaskEnum_initWithNSString_withInt_(ModelAction_TaskEnum *self, NSString *__name, jint __ordinal);

__attribute__((unused)) static ModelAction_TaskEnum *new_ModelAction_TaskEnum_initWithNSString_withInt_(NSString *__name, jint __ordinal) NS_RETURNS_RETAINED;

@interface ModelAction_Task_$1 : NSObject < UtilStringifier >

- (NSString *)toStringWithId:(ModelAction_TaskEnum *)task;

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ModelAction_Task_$1)

__attribute__((unused)) static void ModelAction_Task_$1_init(ModelAction_Task_$1 *self);

__attribute__((unused)) static ModelAction_Task_$1 *new_ModelAction_Task_$1_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ModelAction_Task_$1)

@implementation ModelAction

J2OBJC_IGNORE_DESIGNATED_BEGIN
- (instancetype)init {
  ModelAction_init(self);
  return self;
}
J2OBJC_IGNORE_DESIGNATED_END

- (instancetype)initWithJsonJSONObject:(JsonJSONObject *)object {
  ModelAction_initWithJsonJSONObject_(self, object);
  return self;
}

- (IOSObjectArray *)getProperties {
  return ModelAction_PropertiesEnum_values();
}

- (NSString *)getType {
  return @"action";
}

- (id)getValueWithModelObjectProperty:(id<ModelObjectProperty>)property {
  switch ([(ModelAction_PropertiesEnum *) check_class_cast(property, [ModelAction_PropertiesEnum class]) ordinal]) {
    case ModelAction_Properties_id:
    return JavaLangInteger_valueOfWithInt_([self getId]);
    case ModelAction_Properties_unit:
    return [self getUnit];
    case ModelAction_Properties_status:
    return [self getStatus];
    case ModelAction_Properties_personResponsible:
    return [self getPersonResponsible];
    case ModelAction_Properties_roleResponsible:
    return [self getRoleResponsible];
    case ModelAction_Properties_task:
    return [self getTask];
    case ModelAction_Properties_target:
    return [self getTarget];
    case ModelAction_Properties_deadline:
    return [self getDeadline];
    case ModelAction_Properties_description:
    return [self getDescription];
  }
  return nil;
}

- (jint)getId {
  return id__;
}

- (void)setIdWithInt:(jint)id_ {
  self->id__ = id_;
}

- (ModelUnit *)getUnit {
  return unit_;
}

- (void)setUnitWithModelUnit:(ModelUnit *)unit {
  self->unit_ = unit;
}

- (ModelAction_StatusEnum *)getStatus {
  return status_;
}

- (void)setStatusWithModelAction_StatusEnum:(ModelAction_StatusEnum *)status {
  self->status_ = status;
}

- (ModelUser *)getPersonResponsible {
  return personResponsible_;
}

- (void)setPersonResponsibleWithModelUser:(ModelUser *)personResponsible {
  self->personResponsible_ = personResponsible;
}

- (NSString *)getRoleResponsible {
  return roleResponsible_;
}

- (void)setRoleResponsibleWithNSString:(NSString *)roleResponsible {
  self->roleResponsible_ = roleResponsible;
}

- (ModelAction_TaskEnum *)getTask {
  return task_;
}

- (void)setTaskWithModelAction_TaskEnum:(ModelAction_TaskEnum *)task {
  self->task_ = task;
}

- (NSString *)getTarget {
  return target_;
}

- (void)setTargetWithNSString:(NSString *)target {
  self->target_ = target;
}

- (JavaUtilDate *)getDeadline {
  return deadline_;
}

- (void)setDeadlineWithJavaUtilDate:(JavaUtilDate *)deadline {
  self->deadline_ = deadline;
}

- (NSString *)getDescription {
  return description__;
}

- (void)setDescriptionWithNSString:(NSString *)description_ {
  self->description__ = description_;
}

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "init", "Action", NULL, 0x1, NULL, NULL },
    { "initWithJsonJSONObject:", "Action", NULL, 0x1, NULL, NULL },
    { "getProperties", NULL, "[Lrtdc.core.model.ObjectProperty;", 0x1, NULL, NULL },
    { "getType", NULL, "Ljava.lang.String;", 0x1, NULL, NULL },
    { "getValueWithModelObjectProperty:", "getValue", "Ljava.lang.Object;", 0x1, NULL, NULL },
    { "getId", NULL, "I", 0x1, NULL, NULL },
    { "setIdWithInt:", "setId", "V", 0x1, NULL, NULL },
    { "getUnit", NULL, "Lrtdc.core.model.Unit;", 0x1, NULL, NULL },
    { "setUnitWithModelUnit:", "setUnit", "V", 0x1, NULL, NULL },
    { "getStatus", NULL, "Lrtdc.core.model.Action$Status;", 0x1, NULL, NULL },
    { "setStatusWithModelAction_StatusEnum:", "setStatus", "V", 0x1, NULL, NULL },
    { "getPersonResponsible", NULL, "Lrtdc.core.model.User;", 0x1, NULL, NULL },
    { "setPersonResponsibleWithModelUser:", "setPersonResponsible", "V", 0x1, NULL, NULL },
    { "getRoleResponsible", NULL, "Ljava.lang.String;", 0x1, NULL, NULL },
    { "setRoleResponsibleWithNSString:", "setRoleResponsible", "V", 0x1, NULL, NULL },
    { "getTask", NULL, "Lrtdc.core.model.Action$Task;", 0x1, NULL, NULL },
    { "setTaskWithModelAction_TaskEnum:", "setTask", "V", 0x1, NULL, NULL },
    { "getTarget", NULL, "Ljava.lang.String;", 0x1, NULL, NULL },
    { "setTargetWithNSString:", "setTarget", "V", 0x1, NULL, NULL },
    { "getDeadline", NULL, "Ljava.util.Date;", 0x1, NULL, NULL },
    { "setDeadlineWithJavaUtilDate:", "setDeadline", "V", 0x1, NULL, NULL },
    { "getDescription", NULL, "Ljava.lang.String;", 0x1, NULL, NULL },
    { "setDescriptionWithNSString:", "setDescription", "V", 0x1, NULL, NULL },
  };
  static const J2ObjcFieldInfo fields[] = {
    { "id__", "id", 0x2, "I", NULL, NULL, .constantValue.asLong = 0 },
    { "unit_", NULL, 0x2, "Lrtdc.core.model.Unit;", NULL, NULL, .constantValue.asLong = 0 },
    { "status_", NULL, 0x2, "Lrtdc.core.model.Action$Status;", NULL, NULL, .constantValue.asLong = 0 },
    { "personResponsible_", NULL, 0x2, "Lrtdc.core.model.User;", NULL, NULL, .constantValue.asLong = 0 },
    { "roleResponsible_", NULL, 0x2, "Ljava.lang.String;", NULL, NULL, .constantValue.asLong = 0 },
    { "task_", NULL, 0x2, "Lrtdc.core.model.Action$Task;", NULL, NULL, .constantValue.asLong = 0 },
    { "target_", NULL, 0x2, "Ljava.lang.String;", NULL, NULL, .constantValue.asLong = 0 },
    { "deadline_", NULL, 0x2, "Ljava.util.Date;", NULL, NULL, .constantValue.asLong = 0 },
    { "description__", "description", 0x2, "Ljava.lang.String;", NULL, NULL, .constantValue.asLong = 0 },
  };
  static const char *inner_classes[] = {"Lrtdc.core.model.Action$Properties;", "Lrtdc.core.model.Action$Status;", "Lrtdc.core.model.Action$Task;"};
  static const J2ObjcClassInfo _ModelAction = { 2, "Action", "rtdc.core.model", NULL, 0x1, 23, methods, 9, fields, 0, NULL, 3, inner_classes, NULL, NULL };
  return &_ModelAction;
}

@end

void ModelAction_init(ModelAction *self) {
  (void) ModelRootObject_init(self);
}

ModelAction *new_ModelAction_init() {
  ModelAction *self = [ModelAction alloc];
  ModelAction_init(self);
  return self;
}

void ModelAction_initWithJsonJSONObject_(ModelAction *self, JsonJSONObject *object) {
  (void) ModelRootObject_init(self);
  [self setIdWithInt:[((JsonJSONObject *) nil_chk(object)) optIntWithNSString:[((ModelAction_PropertiesEnum *) nil_chk(JreLoadStatic(ModelAction_PropertiesEnum, id))) name]]];
  [self setUnitWithModelUnit:new_ModelUnit_initWithJsonJSONObject_([object getJSONObjectWithNSString:[((ModelAction_PropertiesEnum *) nil_chk(JreLoadStatic(ModelAction_PropertiesEnum, unit))) name]])];
  self->status_ = ModelAction_StatusEnum_valueOfWithNSString_([object optStringWithNSString:[((ModelAction_PropertiesEnum *) nil_chk(JreLoadStatic(ModelAction_PropertiesEnum, status))) name]]);
  if ([object hasWithNSString:[((ModelAction_PropertiesEnum *) nil_chk(JreLoadStatic(ModelAction_PropertiesEnum, personResponsible))) name]]) [self setPersonResponsibleWithModelUser:new_ModelUser_initWithJsonJSONObject_([object getJSONObjectWithNSString:[JreLoadStatic(ModelAction_PropertiesEnum, personResponsible) name]])];
  [self setRoleResponsibleWithNSString:[object optStringWithNSString:[((ModelAction_PropertiesEnum *) nil_chk(JreLoadStatic(ModelAction_PropertiesEnum, roleResponsible))) name]]];
  self->task_ = ModelAction_TaskEnum_valueOfWithNSString_([object optStringWithNSString:[((ModelAction_PropertiesEnum *) nil_chk(JreLoadStatic(ModelAction_PropertiesEnum, task))) name]]);
  if ([object hasWithNSString:[((ModelAction_PropertiesEnum *) nil_chk(JreLoadStatic(ModelAction_PropertiesEnum, deadline))) name]]) [self setDeadlineWithJavaUtilDate:new_JavaUtilDate_initWithLong_([object getLongWithNSString:[JreLoadStatic(ModelAction_PropertiesEnum, deadline) name]])];
  [self setTargetWithNSString:[object optStringWithNSString:[((ModelAction_PropertiesEnum *) nil_chk(JreLoadStatic(ModelAction_PropertiesEnum, target))) name]]];
  [self setDescriptionWithNSString:[object optStringWithNSString:[((ModelAction_PropertiesEnum *) nil_chk(JreLoadStatic(ModelAction_PropertiesEnum, description))) name]]];
}

ModelAction *new_ModelAction_initWithJsonJSONObject_(JsonJSONObject *object) {
  ModelAction *self = [ModelAction alloc];
  ModelAction_initWithJsonJSONObject_(self, object);
  return self;
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(ModelAction)

J2OBJC_INITIALIZED_DEFN(ModelAction_PropertiesEnum)

ModelAction_PropertiesEnum *ModelAction_PropertiesEnum_values_[9];

@implementation ModelAction_PropertiesEnum

+ (ModelAction_PropertiesEnum *)id_ {
  return ModelAction_PropertiesEnum_id;
}

+ (ModelAction_PropertiesEnum *)unit {
  return ModelAction_PropertiesEnum_unit;
}

+ (ModelAction_PropertiesEnum *)status {
  return ModelAction_PropertiesEnum_status;
}

+ (ModelAction_PropertiesEnum *)personResponsible {
  return ModelAction_PropertiesEnum_personResponsible;
}

+ (ModelAction_PropertiesEnum *)roleResponsible {
  return ModelAction_PropertiesEnum_roleResponsible;
}

+ (ModelAction_PropertiesEnum *)task {
  return ModelAction_PropertiesEnum_task;
}

+ (ModelAction_PropertiesEnum *)target {
  return ModelAction_PropertiesEnum_target;
}

+ (ModelAction_PropertiesEnum *)deadline {
  return ModelAction_PropertiesEnum_deadline;
}

+ (ModelAction_PropertiesEnum *)description_ {
  return ModelAction_PropertiesEnum_description;
}

- (instancetype)initWithNSString:(NSString *)__name
                         withInt:(jint)__ordinal {
  ModelAction_PropertiesEnum_initWithNSString_withInt_(self, __name, __ordinal);
  return self;
}

IOSObjectArray *ModelAction_PropertiesEnum_values() {
  ModelAction_PropertiesEnum_initialize();
  return [IOSObjectArray arrayWithObjects:ModelAction_PropertiesEnum_values_ count:9 type:ModelAction_PropertiesEnum_class_()];
}

+ (IOSObjectArray *)values {
  return ModelAction_PropertiesEnum_values();
}

+ (ModelAction_PropertiesEnum *)valueOfWithNSString:(NSString *)name {
  return ModelAction_PropertiesEnum_valueOfWithNSString_(name);
}

ModelAction_PropertiesEnum *ModelAction_PropertiesEnum_valueOfWithNSString_(NSString *name) {
  ModelAction_PropertiesEnum_initialize();
  for (int i = 0; i < 9; i++) {
    ModelAction_PropertiesEnum *e = ModelAction_PropertiesEnum_values_[i];
    if ([name isEqual:[e name]]) {
      return e;
    }
  }
  @throw [[JavaLangIllegalArgumentException alloc] initWithNSString:name];
  return nil;
}

- (id)copyWithZone:(NSZone *)zone {
  return self;
}

+ (void)initialize {
  if (self == [ModelAction_PropertiesEnum class]) {
    ModelAction_PropertiesEnum_id = new_ModelAction_PropertiesEnum_initWithNSString_withInt_(@"id", 0);
    ModelAction_PropertiesEnum_unit = new_ModelAction_PropertiesEnum_initWithNSString_withInt_(@"unit", 1);
    ModelAction_PropertiesEnum_status = new_ModelAction_PropertiesEnum_initWithNSString_withInt_(@"status", 2);
    ModelAction_PropertiesEnum_personResponsible = new_ModelAction_PropertiesEnum_initWithNSString_withInt_(@"personResponsible", 3);
    ModelAction_PropertiesEnum_roleResponsible = new_ModelAction_PropertiesEnum_initWithNSString_withInt_(@"roleResponsible", 4);
    ModelAction_PropertiesEnum_task = new_ModelAction_PropertiesEnum_initWithNSString_withInt_(@"task", 5);
    ModelAction_PropertiesEnum_target = new_ModelAction_PropertiesEnum_initWithNSString_withInt_(@"target", 6);
    ModelAction_PropertiesEnum_deadline = new_ModelAction_PropertiesEnum_initWithNSString_withInt_(@"deadline", 7);
    ModelAction_PropertiesEnum_description = new_ModelAction_PropertiesEnum_initWithNSString_withInt_(@"description", 8);
    J2OBJC_SET_INITIALIZED(ModelAction_PropertiesEnum)
  }
}

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcFieldInfo fields[] = {
    { "id", "id", 0x4019, "Lrtdc.core.model.Action$Properties;", &ModelAction_PropertiesEnum_id, NULL, .constantValue.asLong = 0 },
    { "unit", "unit", 0x4019, "Lrtdc.core.model.Action$Properties;", &ModelAction_PropertiesEnum_unit, NULL, .constantValue.asLong = 0 },
    { "status", "status", 0x4019, "Lrtdc.core.model.Action$Properties;", &ModelAction_PropertiesEnum_status, NULL, .constantValue.asLong = 0 },
    { "personResponsible", "personResponsible", 0x4019, "Lrtdc.core.model.Action$Properties;", &ModelAction_PropertiesEnum_personResponsible, NULL, .constantValue.asLong = 0 },
    { "roleResponsible", "roleResponsible", 0x4019, "Lrtdc.core.model.Action$Properties;", &ModelAction_PropertiesEnum_roleResponsible, NULL, .constantValue.asLong = 0 },
    { "task", "task", 0x4019, "Lrtdc.core.model.Action$Properties;", &ModelAction_PropertiesEnum_task, NULL, .constantValue.asLong = 0 },
    { "target", "target", 0x4019, "Lrtdc.core.model.Action$Properties;", &ModelAction_PropertiesEnum_target, NULL, .constantValue.asLong = 0 },
    { "deadline", "deadline", 0x4019, "Lrtdc.core.model.Action$Properties;", &ModelAction_PropertiesEnum_deadline, NULL, .constantValue.asLong = 0 },
    { "description", "description", 0x4019, "Lrtdc.core.model.Action$Properties;", &ModelAction_PropertiesEnum_description, NULL, .constantValue.asLong = 0 },
  };
  static const char *superclass_type_args[] = {"Lrtdc.core.model.Action$Properties;"};
  static const J2ObjcClassInfo _ModelAction_PropertiesEnum = { 2, "Properties", "rtdc.core.model", "Action", 0x4019, 0, NULL, 9, fields, 1, superclass_type_args, 0, NULL, NULL, "Ljava/lang/Enum<Lrtdc/core/model/Action$Properties;>;Lrtdc/core/model/ObjectProperty<Lrtdc/core/model/Action;>;" };
  return &_ModelAction_PropertiesEnum;
}

@end

void ModelAction_PropertiesEnum_initWithNSString_withInt_(ModelAction_PropertiesEnum *self, NSString *__name, jint __ordinal) {
  (void) JavaLangEnum_initWithNSString_withInt_(self, __name, __ordinal);
}

ModelAction_PropertiesEnum *new_ModelAction_PropertiesEnum_initWithNSString_withInt_(NSString *__name, jint __ordinal) {
  ModelAction_PropertiesEnum *self = [ModelAction_PropertiesEnum alloc];
  ModelAction_PropertiesEnum_initWithNSString_withInt_(self, __name, __ordinal);
  return self;
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(ModelAction_PropertiesEnum)

J2OBJC_INITIALIZED_DEFN(ModelAction_StatusEnum)

ModelAction_StatusEnum *ModelAction_StatusEnum_values_[4];

@implementation ModelAction_StatusEnum

+ (ModelAction_StatusEnum *)notStarted {
  return ModelAction_StatusEnum_notStarted;
}

+ (ModelAction_StatusEnum *)inProgress {
  return ModelAction_StatusEnum_inProgress;
}

+ (ModelAction_StatusEnum *)completed {
  return ModelAction_StatusEnum_completed;
}

+ (ModelAction_StatusEnum *)failed {
  return ModelAction_StatusEnum_failed;
}

+ (id<UtilStringifier>)getStringifier {
  return ModelAction_StatusEnum_getStringifier();
}

- (instancetype)initWithNSString:(NSString *)__name
                         withInt:(jint)__ordinal {
  ModelAction_StatusEnum_initWithNSString_withInt_(self, __name, __ordinal);
  return self;
}

IOSObjectArray *ModelAction_StatusEnum_values() {
  ModelAction_StatusEnum_initialize();
  return [IOSObjectArray arrayWithObjects:ModelAction_StatusEnum_values_ count:4 type:ModelAction_StatusEnum_class_()];
}

+ (IOSObjectArray *)values {
  return ModelAction_StatusEnum_values();
}

+ (ModelAction_StatusEnum *)valueOfWithNSString:(NSString *)name {
  return ModelAction_StatusEnum_valueOfWithNSString_(name);
}

ModelAction_StatusEnum *ModelAction_StatusEnum_valueOfWithNSString_(NSString *name) {
  ModelAction_StatusEnum_initialize();
  for (int i = 0; i < 4; i++) {
    ModelAction_StatusEnum *e = ModelAction_StatusEnum_values_[i];
    if ([name isEqual:[e name]]) {
      return e;
    }
  }
  @throw [[JavaLangIllegalArgumentException alloc] initWithNSString:name];
  return nil;
}

- (id)copyWithZone:(NSZone *)zone {
  return self;
}

+ (void)initialize {
  if (self == [ModelAction_StatusEnum class]) {
    ModelAction_StatusEnum_notStarted = new_ModelAction_StatusEnum_initWithNSString_withInt_(@"notStarted", 0);
    ModelAction_StatusEnum_inProgress = new_ModelAction_StatusEnum_initWithNSString_withInt_(@"inProgress", 1);
    ModelAction_StatusEnum_completed = new_ModelAction_StatusEnum_initWithNSString_withInt_(@"completed", 2);
    ModelAction_StatusEnum_failed = new_ModelAction_StatusEnum_initWithNSString_withInt_(@"failed", 3);
    J2OBJC_SET_INITIALIZED(ModelAction_StatusEnum)
  }
}

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "getStringifier", NULL, "Lrtdc.core.util.Stringifier;", 0x9, NULL, NULL },
  };
  static const J2ObjcFieldInfo fields[] = {
    { "notStarted", "notStarted", 0x4019, "Lrtdc.core.model.Action$Status;", &ModelAction_StatusEnum_notStarted, NULL, .constantValue.asLong = 0 },
    { "inProgress", "inProgress", 0x4019, "Lrtdc.core.model.Action$Status;", &ModelAction_StatusEnum_inProgress, NULL, .constantValue.asLong = 0 },
    { "completed", "completed", 0x4019, "Lrtdc.core.model.Action$Status;", &ModelAction_StatusEnum_completed, NULL, .constantValue.asLong = 0 },
    { "failed", "failed", 0x4019, "Lrtdc.core.model.Action$Status;", &ModelAction_StatusEnum_failed, NULL, .constantValue.asLong = 0 },
  };
  static const char *superclass_type_args[] = {"Lrtdc.core.model.Action$Status;"};
  static const J2ObjcClassInfo _ModelAction_StatusEnum = { 2, "Status", "rtdc.core.model", "Action", 0x4019, 1, methods, 4, fields, 1, superclass_type_args, 0, NULL, NULL, "Ljava/lang/Enum<Lrtdc/core/model/Action$Status;>;" };
  return &_ModelAction_StatusEnum;
}

@end

id<UtilStringifier> ModelAction_StatusEnum_getStringifier() {
  ModelAction_StatusEnum_initialize();
  return new_ModelAction_Status_$1_init();
}

void ModelAction_StatusEnum_initWithNSString_withInt_(ModelAction_StatusEnum *self, NSString *__name, jint __ordinal) {
  (void) JavaLangEnum_initWithNSString_withInt_(self, __name, __ordinal);
}

ModelAction_StatusEnum *new_ModelAction_StatusEnum_initWithNSString_withInt_(NSString *__name, jint __ordinal) {
  ModelAction_StatusEnum *self = [ModelAction_StatusEnum alloc];
  ModelAction_StatusEnum_initWithNSString_withInt_(self, __name, __ordinal);
  return self;
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(ModelAction_StatusEnum)

@implementation ModelAction_Status_$1

- (NSString *)toStringWithId:(ModelAction_StatusEnum *)status {
  switch ([status ordinal]) {
    case ModelAction_Status_completed:
    return @"Completed";
    case ModelAction_Status_failed:
    return @"Failed";
    case ModelAction_Status_inProgress:
    return @"In progress";
    case ModelAction_Status_notStarted:
    return @"Not started";
    default:
    return [((ModelAction_StatusEnum *) nil_chk(status)) name];
  }
}

J2OBJC_IGNORE_DESIGNATED_BEGIN
- (instancetype)init {
  ModelAction_Status_$1_init(self);
  return self;
}
J2OBJC_IGNORE_DESIGNATED_END

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "toStringWithId:", "toString", "Ljava.lang.String;", 0x1, NULL, NULL },
    { "init", "", NULL, 0x0, NULL, NULL },
  };
  static const J2ObjCEnclosingMethodInfo enclosing_method = { "ModelAction_StatusEnum", "getStringifier" };
  static const J2ObjcClassInfo _ModelAction_Status_$1 = { 2, "", "rtdc.core.model", "Action$Status", 0x8008, 2, methods, 0, NULL, 0, NULL, 0, NULL, &enclosing_method, "Ljava/lang/Object;Lrtdc/core/util/Stringifier<Lrtdc/core/model/Action$Status;>;" };
  return &_ModelAction_Status_$1;
}

@end

void ModelAction_Status_$1_init(ModelAction_Status_$1 *self) {
  (void) NSObject_init(self);
}

ModelAction_Status_$1 *new_ModelAction_Status_$1_init() {
  ModelAction_Status_$1 *self = [ModelAction_Status_$1 alloc];
  ModelAction_Status_$1_init(self);
  return self;
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(ModelAction_Status_$1)

J2OBJC_INITIALIZED_DEFN(ModelAction_TaskEnum)

ModelAction_TaskEnum *ModelAction_TaskEnum_values_[3];

@implementation ModelAction_TaskEnum

+ (ModelAction_TaskEnum *)pushForDischarge {
  return ModelAction_TaskEnum_pushForDischarge;
}

+ (ModelAction_TaskEnum *)offServicingTo {
  return ModelAction_TaskEnum_offServicingTo;
}

+ (ModelAction_TaskEnum *)holdFor {
  return ModelAction_TaskEnum_holdFor;
}

+ (id<UtilStringifier>)getStringifier {
  return ModelAction_TaskEnum_getStringifier();
}

- (instancetype)initWithNSString:(NSString *)__name
                         withInt:(jint)__ordinal {
  ModelAction_TaskEnum_initWithNSString_withInt_(self, __name, __ordinal);
  return self;
}

IOSObjectArray *ModelAction_TaskEnum_values() {
  ModelAction_TaskEnum_initialize();
  return [IOSObjectArray arrayWithObjects:ModelAction_TaskEnum_values_ count:3 type:ModelAction_TaskEnum_class_()];
}

+ (IOSObjectArray *)values {
  return ModelAction_TaskEnum_values();
}

+ (ModelAction_TaskEnum *)valueOfWithNSString:(NSString *)name {
  return ModelAction_TaskEnum_valueOfWithNSString_(name);
}

ModelAction_TaskEnum *ModelAction_TaskEnum_valueOfWithNSString_(NSString *name) {
  ModelAction_TaskEnum_initialize();
  for (int i = 0; i < 3; i++) {
    ModelAction_TaskEnum *e = ModelAction_TaskEnum_values_[i];
    if ([name isEqual:[e name]]) {
      return e;
    }
  }
  @throw [[JavaLangIllegalArgumentException alloc] initWithNSString:name];
  return nil;
}

- (id)copyWithZone:(NSZone *)zone {
  return self;
}

+ (void)initialize {
  if (self == [ModelAction_TaskEnum class]) {
    ModelAction_TaskEnum_pushForDischarge = new_ModelAction_TaskEnum_initWithNSString_withInt_(@"pushForDischarge", 0);
    ModelAction_TaskEnum_offServicingTo = new_ModelAction_TaskEnum_initWithNSString_withInt_(@"offServicingTo", 1);
    ModelAction_TaskEnum_holdFor = new_ModelAction_TaskEnum_initWithNSString_withInt_(@"holdFor", 2);
    J2OBJC_SET_INITIALIZED(ModelAction_TaskEnum)
  }
}

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "getStringifier", NULL, "Lrtdc.core.util.Stringifier;", 0x9, NULL, NULL },
  };
  static const J2ObjcFieldInfo fields[] = {
    { "pushForDischarge", "pushForDischarge", 0x4019, "Lrtdc.core.model.Action$Task;", &ModelAction_TaskEnum_pushForDischarge, NULL, .constantValue.asLong = 0 },
    { "offServicingTo", "offServicingTo", 0x4019, "Lrtdc.core.model.Action$Task;", &ModelAction_TaskEnum_offServicingTo, NULL, .constantValue.asLong = 0 },
    { "holdFor", "holdFor", 0x4019, "Lrtdc.core.model.Action$Task;", &ModelAction_TaskEnum_holdFor, NULL, .constantValue.asLong = 0 },
  };
  static const char *superclass_type_args[] = {"Lrtdc.core.model.Action$Task;"};
  static const J2ObjcClassInfo _ModelAction_TaskEnum = { 2, "Task", "rtdc.core.model", "Action", 0x4019, 1, methods, 3, fields, 1, superclass_type_args, 0, NULL, NULL, "Ljava/lang/Enum<Lrtdc/core/model/Action$Task;>;" };
  return &_ModelAction_TaskEnum;
}

@end

id<UtilStringifier> ModelAction_TaskEnum_getStringifier() {
  ModelAction_TaskEnum_initialize();
  return new_ModelAction_Task_$1_init();
}

void ModelAction_TaskEnum_initWithNSString_withInt_(ModelAction_TaskEnum *self, NSString *__name, jint __ordinal) {
  (void) JavaLangEnum_initWithNSString_withInt_(self, __name, __ordinal);
}

ModelAction_TaskEnum *new_ModelAction_TaskEnum_initWithNSString_withInt_(NSString *__name, jint __ordinal) {
  ModelAction_TaskEnum *self = [ModelAction_TaskEnum alloc];
  ModelAction_TaskEnum_initWithNSString_withInt_(self, __name, __ordinal);
  return self;
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(ModelAction_TaskEnum)

@implementation ModelAction_Task_$1

- (NSString *)toStringWithId:(ModelAction_TaskEnum *)task {
  switch ([task ordinal]) {
    case ModelAction_Task_holdFor:
    return @"Hold";
    case ModelAction_Task_offServicingTo:
    return @"Off servicing";
    case ModelAction_Task_pushForDischarge:
    return @"Push for discharge";
    default:
    return [((ModelAction_TaskEnum *) nil_chk(task)) name];
  }
}

J2OBJC_IGNORE_DESIGNATED_BEGIN
- (instancetype)init {
  ModelAction_Task_$1_init(self);
  return self;
}
J2OBJC_IGNORE_DESIGNATED_END

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "toStringWithId:", "toString", "Ljava.lang.String;", 0x1, NULL, NULL },
    { "init", "", NULL, 0x0, NULL, NULL },
  };
  static const J2ObjCEnclosingMethodInfo enclosing_method = { "ModelAction_TaskEnum", "getStringifier" };
  static const J2ObjcClassInfo _ModelAction_Task_$1 = { 2, "", "rtdc.core.model", "Action$Task", 0x8008, 2, methods, 0, NULL, 0, NULL, 0, NULL, &enclosing_method, "Ljava/lang/Object;Lrtdc/core/util/Stringifier<Lrtdc/core/model/Action$Task;>;" };
  return &_ModelAction_Task_$1;
}

@end

void ModelAction_Task_$1_init(ModelAction_Task_$1 *self) {
  (void) NSObject_init(self);
}

ModelAction_Task_$1 *new_ModelAction_Task_$1_init() {
  ModelAction_Task_$1 *self = [ModelAction_Task_$1 alloc];
  ModelAction_Task_$1_init(self);
  return self;
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(ModelAction_Task_$1)
