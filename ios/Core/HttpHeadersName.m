//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nicolasmenard/IdeaProjects/RTDC/core/src/main/java/rtdc/core/service/HttpHeadersName.java
//

#include "HttpHeadersName.h"
#include "J2ObjC_source.h"

NSString *ServiceHttpHeadersName_AUTH_TOKEN_ = @"auth_token";

@implementation ServiceHttpHeadersName

+ (NSString *)AUTH_TOKEN {
  return ServiceHttpHeadersName_AUTH_TOKEN_;
}

J2OBJC_IGNORE_DESIGNATED_BEGIN
- (instancetype)init {
  ServiceHttpHeadersName_init(self);
  return self;
}
J2OBJC_IGNORE_DESIGNATED_END

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "init", NULL, NULL, 0x1, NULL, NULL },
  };
  static const J2ObjcFieldInfo fields[] = {
    { "AUTH_TOKEN_", NULL, 0x19, "Ljava.lang.String;", &ServiceHttpHeadersName_AUTH_TOKEN_, NULL, .constantValue.asLong = 0 },
  };
  static const J2ObjcClassInfo _ServiceHttpHeadersName = { 2, "HttpHeadersName", "rtdc.core.service", NULL, 0x1, 1, methods, 1, fields, 0, NULL, 0, NULL, NULL, NULL };
  return &_ServiceHttpHeadersName;
}

@end

void ServiceHttpHeadersName_init(ServiceHttpHeadersName *self) {
  (void) NSObject_init(self);
}

ServiceHttpHeadersName *new_ServiceHttpHeadersName_init() {
  ServiceHttpHeadersName *self = [ServiceHttpHeadersName alloc];
  ServiceHttpHeadersName_init(self);
  return self;
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(ServiceHttpHeadersName)