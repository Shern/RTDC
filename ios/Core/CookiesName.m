//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nicolasmenard/IdeaProjects/RTDC/core/src/main/java/rtdc/core/service/CookiesName.java
//

#include "CookiesName.h"
#include "J2ObjC_source.h"

NSString *ServiceCookiesName_AUTH_COOKIE_ = @"auth";

@implementation ServiceCookiesName

J2OBJC_IGNORE_DESIGNATED_BEGIN
- (instancetype)init {
  ServiceCookiesName_init(self);
  return self;
}
J2OBJC_IGNORE_DESIGNATED_END

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "init", NULL, NULL, 0x1, NULL, NULL },
  };
  static const J2ObjcFieldInfo fields[] = {
    { "AUTH_COOKIE_", NULL, 0x19, "Ljava.lang.String;", &ServiceCookiesName_AUTH_COOKIE_, NULL, .constantValue.asLong = 0 },
  };
  static const J2ObjcClassInfo _ServiceCookiesName = { 2, "CookiesName", "rtdc.core.service", NULL, 0x1, 1, methods, 1, fields, 0, NULL, 0, NULL, NULL, NULL };
  return &_ServiceCookiesName;
}

@end

void ServiceCookiesName_init(ServiceCookiesName *self) {
  NSObject_init(self);
}

ServiceCookiesName *new_ServiceCookiesName_init() {
  ServiceCookiesName *self = [ServiceCookiesName alloc];
  ServiceCookiesName_init(self);
  return self;
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(ServiceCookiesName)
