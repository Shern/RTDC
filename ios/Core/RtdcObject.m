//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nicolasmenard/IdeaProjects/RTDC/core/src/main/java/rtdc/core/model/RtdcObject.java
//

#include "IOSClass.h"
#include "JSONArray.h"
#include "JSONException.h"
#include "JSONObject.h"
#include "RtdcObject.h"
#include "java/util/Map.h"
#include "java/util/Set.h"

@implementation ModelRtdcObject

- (instancetype)init {
  if (self = [super init]) {
    ModelRtdcObject_setAndConsume_jsonObject_(self, [[JSONJSONObject alloc] init]);
  }
  return self;
}

- (instancetype)initWithNSString:(NSString *)json {
  if (self = [super init]) {
    ModelRtdcObject_setAndConsume_jsonObject_(self, [[JSONJSONObject alloc] initWithNSString:json]);
  }
  return self;
}

- (jboolean)expectBooleanWithNSString:(NSString *)propertyName {
  @try {
    [((JSONJSONObject *) nil_chk(jsonObject_)) getBooleanWithNSString:propertyName];
    return YES;
  }
  @catch (JSONJSONException *e) {
    return NO;
  }
}

- (jboolean)expectIntWithNSString:(NSString *)propertyName {
  @try {
    [((JSONJSONObject *) nil_chk(jsonObject_)) getIntWithNSString:propertyName];
    return YES;
  }
  @catch (JSONJSONException *e) {
    return NO;
  }
}

- (jboolean)expectLongWithNSString:(NSString *)propertyName {
  @try {
    [((JSONJSONObject *) nil_chk(jsonObject_)) getLongWithNSString:propertyName];
    return YES;
  }
  @catch (JSONJSONException *e) {
    return NO;
  }
}

- (jboolean)expectStringWithNSString:(NSString *)propertyName {
  @try {
    [((JSONJSONObject *) nil_chk(jsonObject_)) getStringWithNSString:propertyName];
    return YES;
  }
  @catch (JSONJSONException *e) {
    return NO;
  }
}

- (jboolean)expectJsonArrayWithNSString:(NSString *)propertyName {
  @try {
    [((JSONJSONObject *) nil_chk(jsonObject_)) getJSONArrayWithNSString:propertyName];
    return YES;
  }
  @catch (JSONJSONException *e) {
    return NO;
  }
}

- (jboolean)expectJsonObjectWithNSString:(NSString *)propertyName {
  @try {
    [((JSONJSONObject *) nil_chk(jsonObject_)) getJSONObjectWithNSString:propertyName];
    return YES;
  }
  @catch (JSONJSONException *e) {
    return NO;
  }
}

- (NSString *)description {
  return [((JSONJSONObject *) nil_chk(jsonObject_)) description];
}

- (id<JavaUtilSet>)validatePropertyWithNSString:(NSString *)property {
  // can't call an abstract method
  [self doesNotRecognizeSelector:_cmd];
  return 0;
}

- (id<JavaUtilMap>)validateAll {
  // can't call an abstract method
  [self doesNotRecognizeSelector:_cmd];
  return 0;
}

- (void)dealloc {
  ModelRtdcObject_set_jsonObject_(self, nil);
  [super dealloc];
}

- (void)copyAllFieldsTo:(ModelRtdcObject *)other {
  [super copyAllFieldsTo:other];
  ModelRtdcObject_set_jsonObject_(other, jsonObject_);
}

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "init", "RtdcObject", NULL, 0x1, NULL },
    { "initWithNSString:", "RtdcObject", NULL, 0x1, NULL },
    { "expectBooleanWithNSString:", "expectBoolean", "Z", 0x4, NULL },
    { "expectIntWithNSString:", "expectInt", "Z", 0x4, NULL },
    { "expectLongWithNSString:", "expectLong", "Z", 0x4, NULL },
    { "expectStringWithNSString:", "expectString", "Z", 0x4, NULL },
    { "expectJsonArrayWithNSString:", "expectJsonArray", "Z", 0x4, NULL },
    { "expectJsonObjectWithNSString:", "expectJsonObject", "Z", 0x4, NULL },
    { "description", "toString", "Ljava.lang.String;", 0x1, NULL },
    { "validatePropertyWithNSString:", "validateProperty", "Ljava.util.Set;", 0x401, NULL },
    { "validateAll", NULL, "Ljava.util.Map;", 0x401, NULL },
  };
  static const J2ObjcFieldInfo fields[] = {
    { "jsonObject_", NULL, 0x14, "Lrtdc.core.json.JSONObject;", NULL,  },
  };
  static const J2ObjcClassInfo _ModelRtdcObject = { "RtdcObject", "rtdc.core.model", NULL, 0x401, 11, methods, 1, fields, 0, NULL};
  return &_ModelRtdcObject;
}

@end