//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nicolasmenard/IdeaProjects/RTDC/core/src/main/java/rtdc/core/Config.java
//

#include "Config.h"
#include "J2ObjC_source.h"

NSString *RtdcCoreConfig_GCM_SERVER_PROJECT_ID_ = @"261943195908";
NSString *RtdcCoreConfig_GCM_SERVER_API_KEY_ = @"AIzaSyAwZJhcvot0V6eOCrXD7htyLS9hP4WFxEg";
NSString *RtdcCoreConfig_COMMAND_EXEC_KEY_ = @"6B%iyB;c=rgs>d[>u[_IOSkt=,WG?(Sv*yEN]>cw9{*+C{8c.IOoJc2{zhGM0Ez";
NSString *RtdcCoreConfig_ASTERISK_IP_ = @"192.168.0.21";
NSString *RtdcCoreConfig_SERVER_IP_ = @"192.168.2.25";

@implementation RtdcCoreConfig

+ (jboolean)IS_DEBUG {
  return RtdcCoreConfig_IS_DEBUG;
}

+ (NSString *)GCM_SERVER_PROJECT_ID {
  return RtdcCoreConfig_GCM_SERVER_PROJECT_ID_;
}

+ (NSString *)GCM_SERVER_API_KEY {
  return RtdcCoreConfig_GCM_SERVER_API_KEY_;
}

+ (NSString *)COMMAND_EXEC_KEY {
  return RtdcCoreConfig_COMMAND_EXEC_KEY_;
}

+ (NSString *)ASTERISK_IP {
  return RtdcCoreConfig_ASTERISK_IP_;
}

+ (NSString *)SERVER_IP {
  return RtdcCoreConfig_SERVER_IP_;
}

+ (jlong)SESSION_LIFETIME_IN_MS {
  return RtdcCoreConfig_SESSION_LIFETIME_IN_MS;
}

J2OBJC_IGNORE_DESIGNATED_BEGIN
- (instancetype)init {
  RtdcCoreConfig_init(self);
  return self;
}
J2OBJC_IGNORE_DESIGNATED_END

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "init", NULL, NULL, 0x1, NULL, NULL },
  };
  static const J2ObjcFieldInfo fields[] = {
    { "IS_DEBUG", "IS_DEBUG", 0x19, "Z", NULL, NULL, .constantValue.asBOOL = RtdcCoreConfig_IS_DEBUG },
    { "GCM_SERVER_PROJECT_ID_", NULL, 0x19, "Ljava.lang.String;", &RtdcCoreConfig_GCM_SERVER_PROJECT_ID_, NULL, .constantValue.asLong = 0 },
    { "GCM_SERVER_API_KEY_", NULL, 0x19, "Ljava.lang.String;", &RtdcCoreConfig_GCM_SERVER_API_KEY_, NULL, .constantValue.asLong = 0 },
    { "COMMAND_EXEC_KEY_", NULL, 0x19, "Ljava.lang.String;", &RtdcCoreConfig_COMMAND_EXEC_KEY_, NULL, .constantValue.asLong = 0 },
    { "ASTERISK_IP_", NULL, 0x19, "Ljava.lang.String;", &RtdcCoreConfig_ASTERISK_IP_, NULL, .constantValue.asLong = 0 },
    { "SERVER_IP_", NULL, 0x19, "Ljava.lang.String;", &RtdcCoreConfig_SERVER_IP_, NULL, .constantValue.asLong = 0 },
    { "SESSION_LIFETIME_IN_MS", "SESSION_LIFETIME_IN_MS", 0x19, "J", NULL, NULL, .constantValue.asLong = RtdcCoreConfig_SESSION_LIFETIME_IN_MS },
  };
  static const J2ObjcClassInfo _RtdcCoreConfig = { 2, "Config", "rtdc.core", NULL, 0x1, 1, methods, 7, fields, 0, NULL, 0, NULL, NULL, NULL };
  return &_RtdcCoreConfig;
}

@end

void RtdcCoreConfig_init(RtdcCoreConfig *self) {
  (void) NSObject_init(self);
}

RtdcCoreConfig *new_RtdcCoreConfig_init() {
  RtdcCoreConfig *self = [RtdcCoreConfig alloc];
  RtdcCoreConfig_init(self);
  return self;
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(RtdcCoreConfig)
