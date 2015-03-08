//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nicolasmenard/IdeaProjects/RTDC/core/src/main/java/rtdc/core/model/JsonTransmissionWrapper.java
//

#include "IOSClass.h"
#include "JSONArray.h"
#include "JSONObject.h"
#include "JsonTransmissionWrapper.h"
#include "java/lang/Throwable.h"

@implementation ModelJsonTransmissionWrapper

- (instancetype)init {
  if (self = [super init]) {
    [self setStatusWithNSString:@"success"];
    [self setNull];
  }
  return self;
}

- (instancetype)initWithNSString:(NSString *)json {
  return [super initWithNSString:json];
}

- (instancetype)initWithJSONJSONObject:(JSONJSONObject *)element {
  if (self = [super init]) {
    [self setStatusWithNSString:@"success"];
    [self setDataWithJSONJSONObject:element];
  }
  return self;
}

- (instancetype)initWithJSONJSONArray:(JSONJSONArray *)element {
  if (self = [super init]) {
    [self setStatusWithNSString:@"success"];
    [self setDataWithJSONJSONArray:element];
  }
  return self;
}

- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)exception {
  if (self = [super init]) {
    [self setStatusWithNSString:[[((JavaLangThrowable *) nil_chk(exception)) getClass] getSimpleName]];
    [self setDescriptionWithNSString:[exception getMessage]];
  }
  return self;
}

- (JSONJSONObject *)getData {
  return [self optJSONObjectWithNSString:@"data"];
}

- (JSONJSONArray *)getDataAsJSONArray {
  return [self optJSONArrayWithNSString:@"data"];
}

- (void)setDataWithJSONJSONObject:(JSONJSONObject *)data {
  [self putWithNSString:@"data" withId:data];
}

- (void)setDataWithJSONJSONArray:(JSONJSONArray *)data {
  [self putWithNSString:@"data" withId:data];
}

- (void)setNull {
  [self putWithNSString:@"data" withId:JSONJSONObject_get_NULL__()];
}

- (NSString *)getStatus {
  return [self optStringWithNSString:@"status"];
}

- (void)setStatusWithNSString:(NSString *)status {
  [self putWithNSString:@"status" withId:status];
}

- (NSString *)getDescription {
  return [self optStringWithNSString:@"description"];
}

- (void)setDescriptionWithNSString:(NSString *)description_ {
  [self putWithNSString:@"description" withId:description_];
}

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "init", "JsonTransmissionWrapper", NULL, 0x1, NULL },
    { "initWithNSString:", "JsonTransmissionWrapper", NULL, 0x1, NULL },
    { "initWithJSONJSONObject:", "JsonTransmissionWrapper", NULL, 0x1, NULL },
    { "initWithJSONJSONArray:", "JsonTransmissionWrapper", NULL, 0x1, NULL },
    { "initWithJavaLangThrowable:", "JsonTransmissionWrapper", NULL, 0x1, NULL },
    { "getData", NULL, "Lrtdc.core.json.JSONObject;", 0x1, NULL },
    { "getDataAsJSONArray", NULL, "Lrtdc.core.json.JSONArray;", 0x1, NULL },
    { "setDataWithJSONJSONObject:", "setData", "V", 0x1, NULL },
    { "setDataWithJSONJSONArray:", "setData", "V", 0x1, NULL },
    { "setNull", NULL, "V", 0x1, NULL },
    { "getStatus", NULL, "Ljava.lang.String;", 0x1, NULL },
    { "setStatusWithNSString:", "setStatus", "V", 0x1, NULL },
    { "getDescription", NULL, "Ljava.lang.String;", 0x1, NULL },
    { "setDescriptionWithNSString:", "setDescription", "V", 0x1, NULL },
  };
  static const J2ObjcClassInfo _ModelJsonTransmissionWrapper = { "JsonTransmissionWrapper", "rtdc.core.model", NULL, 0x1, 14, methods, 0, NULL, 0, NULL};
  return &_ModelJsonTransmissionWrapper;
}

@end
