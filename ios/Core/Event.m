//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: Z:\RTDC\core\src\main\java\rtdc\core\event\Event.java
//

#include "Event.h"
#include "IOSClass.h"
#include "java/util/HashMap.h"
#include "java/util/Map.h"

BOOL RtdcCoreEventEvent_initialized = NO;

@implementation RtdcCoreEventEvent

id<JavaUtilMap> RtdcCoreEventEvent_instantiators_;

- (instancetype)init {
  return [super init];
}

+ (void)initialize {
  if (self == [RtdcCoreEventEvent class]) {
    JreStrongAssignAndConsume(&RtdcCoreEventEvent_instantiators_, nil, [[JavaUtilHashMap alloc] init]);
    J2OBJC_SET_INITIALIZED(RtdcCoreEventEvent)
  }
}

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "init", NULL, NULL, 0x1, NULL },
  };
  static const J2ObjcFieldInfo fields[] = {
    { "instantiators_", NULL, 0x8, "Ljava.util.Map;", &RtdcCoreEventEvent_instantiators_,  },
  };
  static const J2ObjcClassInfo _RtdcCoreEventEvent = { "Event", "rtdc.core.event", NULL, 0x401, 1, methods, 1, fields, 0, NULL};
  return &_RtdcCoreEventEvent;
}

@end
