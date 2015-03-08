//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: Z:\RTDC\core\src\main\java\rtdc\core\json\JSONObject.java
//

#include "IOSClass.h"
#include "JSONArray.h"
#include "JSONException.h"
#include "JSONObject.h"
#include "JSONString.h"
#include "JSONTokener.h"
#include "java/lang/Boolean.h"
#include "java/lang/Byte.h"
#include "java/lang/Exception.h"
#include "java/lang/Integer.h"
#include "java/lang/Long.h"
#include "java/lang/Short.h"
#include "java/lang/StringBuffer.h"
#include "java/util/HashMap.h"
#include "java/util/Iterator.h"
#include "java/util/Map.h"
#include "java/util/Set.h"
#include "java/util/Vector.h"

BOOL RtdcCoreJsonJSONObject_initialized = NO;

@implementation RtdcCoreJsonJSONObject

JavaLangBoolean * RtdcCoreJsonJSONObject_TRUE__;
JavaLangBoolean * RtdcCoreJsonJSONObject_FALSE__;
id RtdcCoreJsonJSONObject_NULL__;

- (instancetype)initRtdcCoreJsonJSONObject {
  if (self = [super init]) {
    RtdcCoreJsonJSONObject_setAndConsume_myHashMap_(self, [[JavaUtilHashMap alloc] init]);
  }
  return self;
}

- (instancetype)init {
  return [self initRtdcCoreJsonJSONObject];
}

- (instancetype)initRtdcCoreJsonJSONObjectWithRtdcCoreJsonJSONTokener:(RtdcCoreJsonJSONTokener *)x {
  if (self = [self initRtdcCoreJsonJSONObject]) {
    jchar c;
    NSString *key;
    if ([((RtdcCoreJsonJSONTokener *) nil_chk(x)) nextClean] != '{') {
      @throw [x syntaxErrorWithNSString:@"A JSONObject text must begin with '{'"];
    }
    for (; ; ) {
      c = [x nextClean];
      switch (c) {
        case 0:
        @throw [x syntaxErrorWithNSString:@"A JSONObject text must end with '}'"];
        case '}':
        return self;
        default:
        [x back];
        key = [nil_chk([x nextValue]) description];
      }
      c = [x nextClean];
      if (c == '=') {
        if ([x next] != '>') {
          [x back];
        }
      }
      else if (c != ':') {
        @throw [x syntaxErrorWithNSString:@"Expected a ':' after a key"];
      }
      [self putWithNSString:key withId:[x nextValue]];
      switch ([x nextClean]) {
        case ';':
        case ',':
        if ([x nextClean] == '}') {
          return self;
        }
        [x back];
        break;
        case '}':
        return self;
        default:
        @throw [x syntaxErrorWithNSString:@"Expected a ',' or '}'"];
      }
    }
  }
  return self;
}

- (instancetype)initWithRtdcCoreJsonJSONTokener:(RtdcCoreJsonJSONTokener *)x {
  return [self initRtdcCoreJsonJSONObjectWithRtdcCoreJsonJSONTokener:x];
}

- (instancetype)initWithNSString:(NSString *)string {
  return [self initRtdcCoreJsonJSONObjectWithRtdcCoreJsonJSONTokener:[[[RtdcCoreJsonJSONTokener alloc] initWithNSString:string] autorelease]];
}

- (RtdcCoreJsonJSONObject *)accumulateWithNSString:(NSString *)key
                                            withId:(id)value {
  RtdcCoreJsonJSONObject_testValidityWithId_(value);
  id o = [self optWithNSString:key];
  if (o == nil) {
    [self putWithNSString:key withId:value];
  }
  else if ([o isKindOfClass:[RtdcCoreJsonJSONArray class]]) {
    [((RtdcCoreJsonJSONArray *) check_class_cast(o, [RtdcCoreJsonJSONArray class])) putWithId:value];
  }
  else {
    [self putWithNSString:key withId:[((RtdcCoreJsonJSONArray *) nil_chk([((RtdcCoreJsonJSONArray *) [[[RtdcCoreJsonJSONArray alloc] init] autorelease]) putWithId:o])) putWithId:value]];
  }
  return self;
}

- (id)getWithNSString:(NSString *)key {
  id o = [self optWithNSString:key];
  if (o == nil) {
    @throw [[[RtdcCoreJsonJSONException alloc] initWithNSString:JreStrcat("$$$", @"JSONObject[", RtdcCoreJsonJSONObject_quoteWithNSString_(key), @"] not found.")] autorelease];
  }
  return o;
}

- (jboolean)getBooleanWithNSString:(NSString *)key {
  id o = [self getWithNSString:key];
  if ([nil_chk(o) isEqual:RtdcCoreJsonJSONObject_FALSE__] || ([o isKindOfClass:[NSString class]] && [((NSString *) nil_chk([((NSString *) check_class_cast(o, [NSString class])) lowercaseString])) isEqual:@"false"])) {
    return NO;
  }
  else if ([o isEqual:RtdcCoreJsonJSONObject_TRUE__] || ([o isKindOfClass:[NSString class]] && [((NSString *) nil_chk([((NSString *) check_class_cast(o, [NSString class])) lowercaseString])) isEqual:@"true"])) {
    return YES;
  }
  @throw [[[RtdcCoreJsonJSONException alloc] initWithNSString:JreStrcat("$$$", @"JSONObject[", RtdcCoreJsonJSONObject_quoteWithNSString_(key), @"] is not a Boolean.")] autorelease];
}

- (jint)getIntWithNSString:(NSString *)key {
  id o = [self getWithNSString:key];
  if ([o isKindOfClass:[JavaLangByte class]]) {
    return [((JavaLangByte *) nil_chk(((JavaLangByte *) check_class_cast(o, [JavaLangByte class])))) charValue];
  }
  else if ([o isKindOfClass:[JavaLangShort class]]) {
    return [((JavaLangShort *) nil_chk(((JavaLangShort *) check_class_cast(o, [JavaLangShort class])))) shortValue];
  }
  else if ([o isKindOfClass:[JavaLangInteger class]]) {
    return [((JavaLangInteger *) nil_chk(((JavaLangInteger *) check_class_cast(o, [JavaLangInteger class])))) intValue];
  }
  else if ([o isKindOfClass:[JavaLangLong class]]) {
    return (jint) [((JavaLangLong *) nil_chk(((JavaLangLong *) check_class_cast(o, [JavaLangLong class])))) longLongValue];
  }
  @throw [[[RtdcCoreJsonJSONException alloc] initWithNSString:JreStrcat("$$$", @"JSONObject[", RtdcCoreJsonJSONObject_quoteWithNSString_(key), @"] is not a number.")] autorelease];
}

- (RtdcCoreJsonJSONArray *)getJSONArrayWithNSString:(NSString *)key {
  id o = [self getWithNSString:key];
  if ([o isKindOfClass:[RtdcCoreJsonJSONArray class]]) {
    return (RtdcCoreJsonJSONArray *) check_class_cast(o, [RtdcCoreJsonJSONArray class]);
  }
  @throw [[[RtdcCoreJsonJSONException alloc] initWithNSString:JreStrcat("$$$", @"JSONObject[", RtdcCoreJsonJSONObject_quoteWithNSString_(key), @"] is not a JSONArray.")] autorelease];
}

- (RtdcCoreJsonJSONObject *)getJSONObjectWithNSString:(NSString *)key {
  id o = [self getWithNSString:key];
  if ([o isKindOfClass:[RtdcCoreJsonJSONObject class]]) {
    return (RtdcCoreJsonJSONObject *) check_class_cast(o, [RtdcCoreJsonJSONObject class]);
  }
  @throw [[[RtdcCoreJsonJSONException alloc] initWithNSString:JreStrcat("$$$", @"JSONObject[", RtdcCoreJsonJSONObject_quoteWithNSString_(key), @"] is not a JSONObject.")] autorelease];
}

- (jlong)getLongWithNSString:(NSString *)key {
  id o = [self getWithNSString:key];
  if ([o isKindOfClass:[JavaLangByte class]]) {
    return [((JavaLangByte *) nil_chk(((JavaLangByte *) check_class_cast(o, [JavaLangByte class])))) charValue];
  }
  else if ([o isKindOfClass:[JavaLangShort class]]) {
    return [((JavaLangShort *) nil_chk(((JavaLangShort *) check_class_cast(o, [JavaLangShort class])))) shortValue];
  }
  else if ([o isKindOfClass:[JavaLangInteger class]]) {
    return [((JavaLangInteger *) nil_chk(((JavaLangInteger *) check_class_cast(o, [JavaLangInteger class])))) intValue];
  }
  else if ([o isKindOfClass:[JavaLangLong class]]) {
    return [((JavaLangLong *) nil_chk(((JavaLangLong *) check_class_cast(o, [JavaLangLong class])))) longLongValue];
  }
  @throw [[[RtdcCoreJsonJSONException alloc] initWithNSString:JreStrcat("$$$", @"JSONObject[", RtdcCoreJsonJSONObject_quoteWithNSString_(key), @"] is not a number.")] autorelease];
}

- (NSString *)getStringWithNSString:(NSString *)key {
  return [nil_chk([self getWithNSString:key]) description];
}

- (jboolean)hasWithNSString:(NSString *)key {
  return [((JavaUtilHashMap *) nil_chk(self->myHashMap_)) containsKeyWithId:key];
}

- (jboolean)isNullWithNSString:(NSString *)key {
  return [nil_chk(RtdcCoreJsonJSONObject_NULL__) isEqual:[self optWithNSString:key]];
}

- (id<JavaUtilSet>)keySet {
  return [((JavaUtilHashMap *) nil_chk(self->myHashMap_)) keySet];
}

- (id<JavaUtilMap>)map {
  return self->myHashMap_;
}

- (jint)length {
  return [((JavaUtilHashMap *) nil_chk(self->myHashMap_)) size];
}

- (RtdcCoreJsonJSONArray *)names {
  RtdcCoreJsonJSONArray *ja = [[[RtdcCoreJsonJSONArray alloc] init] autorelease];
  for (NSString * __strong key in nil_chk([self keySet])) [ja putWithId:key];
  return [ja length] == 0 ? nil : ja;
}

+ (NSString *)trimNumberWithNSString:(NSString *)s {
  return RtdcCoreJsonJSONObject_trimNumberWithNSString_(s);
}

+ (NSString *)numberToStringWithId:(id)n {
  return RtdcCoreJsonJSONObject_numberToStringWithId_(n);
}

- (id)optWithNSString:(NSString *)key {
  return key == nil ? nil : [((JavaUtilHashMap *) nil_chk(self->myHashMap_)) getWithId:key];
}

- (jboolean)optBooleanWithNSString:(NSString *)key {
  return [self optBooleanWithNSString:key withBoolean:NO];
}

- (jboolean)optBooleanWithNSString:(NSString *)key
                       withBoolean:(jboolean)defaultValue {
  @try {
    return [self getBooleanWithNSString:key];
  }
  @catch (JavaLangException *e) {
    return defaultValue;
  }
}

- (RtdcCoreJsonJSONObject *)putWithNSString:(NSString *)key
                         withJavaUtilVector:(JavaUtilVector *)value {
  [self putWithNSString:key withId:[[[RtdcCoreJsonJSONArray alloc] initWithJavaUtilVector:value] autorelease]];
  return self;
}

- (jint)optIntWithNSString:(NSString *)key {
  return [self optIntWithNSString:key withInt:0];
}

- (jint)optIntWithNSString:(NSString *)key
                   withInt:(jint)defaultValue {
  @try {
    return [self getIntWithNSString:key];
  }
  @catch (JavaLangException *e) {
    return defaultValue;
  }
}

- (RtdcCoreJsonJSONArray *)optJSONArrayWithNSString:(NSString *)key {
  id o = [self optWithNSString:key];
  return [o isKindOfClass:[RtdcCoreJsonJSONArray class]] ? (RtdcCoreJsonJSONArray *) check_class_cast(o, [RtdcCoreJsonJSONArray class]) : nil;
}

- (RtdcCoreJsonJSONObject *)optJSONObjectWithNSString:(NSString *)key {
  id o = [self optWithNSString:key];
  return [o isKindOfClass:[RtdcCoreJsonJSONObject class]] ? (RtdcCoreJsonJSONObject *) check_class_cast(o, [RtdcCoreJsonJSONObject class]) : nil;
}

- (jlong)optLongWithNSString:(NSString *)key {
  return [self optLongWithNSString:key withLong:0];
}

- (jlong)optLongWithNSString:(NSString *)key
                    withLong:(jlong)defaultValue {
  @try {
    return [self getLongWithNSString:key];
  }
  @catch (JavaLangException *e) {
    return defaultValue;
  }
}

- (NSString *)optStringWithNSString:(NSString *)key {
  return [self optStringWithNSString:key withNSString:@""];
}

- (NSString *)optStringWithNSString:(NSString *)key
                       withNSString:(NSString *)defaultValue {
  id o = [self optWithNSString:key];
  return o != nil ? [o description] : defaultValue;
}

- (RtdcCoreJsonJSONObject *)putWithNSString:(NSString *)key
                                withBoolean:(jboolean)value {
  [self putWithNSString:key withId:value ? RtdcCoreJsonJSONObject_TRUE__ : RtdcCoreJsonJSONObject_FALSE__];
  return self;
}

- (RtdcCoreJsonJSONObject *)putWithNSString:(NSString *)key
                                    withInt:(jint)value {
  [self putWithNSString:key withId:[[[JavaLangInteger alloc] initWithInt:value] autorelease]];
  return self;
}

- (RtdcCoreJsonJSONObject *)putWithNSString:(NSString *)key
                                   withLong:(jlong)value {
  [self putWithNSString:key withId:[[[JavaLangLong alloc] initWithLong:value] autorelease]];
  return self;
}

- (RtdcCoreJsonJSONObject *)putWithNSString:(NSString *)key
                                     withId:(id)value {
  if (key == nil) {
    @throw [[[RtdcCoreJsonJSONException alloc] initWithNSString:@"Null key."] autorelease];
  }
  if (value != nil) {
    RtdcCoreJsonJSONObject_testValidityWithId_(value);
    [((JavaUtilHashMap *) nil_chk(self->myHashMap_)) putWithId:key withId:value];
  }
  else {
    [self removeWithNSString:key];
  }
  return self;
}

- (RtdcCoreJsonJSONObject *)putOptWithNSString:(NSString *)key
                                        withId:(id)value {
  if (key != nil && value != nil) {
    [self putWithNSString:key withId:value];
  }
  return self;
}

+ (NSString *)quoteWithNSString:(NSString *)string {
  return RtdcCoreJsonJSONObject_quoteWithNSString_(string);
}

- (id)removeWithNSString:(NSString *)key {
  return [((JavaUtilHashMap *) nil_chk(self->myHashMap_)) removeWithId:key];
}

+ (void)testValidityWithId:(id)o {
  RtdcCoreJsonJSONObject_testValidityWithId_(o);
}

- (RtdcCoreJsonJSONArray *)toJSONArrayWithRtdcCoreJsonJSONArray:(RtdcCoreJsonJSONArray *)names {
  if (names == nil || [names length] == 0) {
    return nil;
  }
  RtdcCoreJsonJSONArray *ja = [[[RtdcCoreJsonJSONArray alloc] init] autorelease];
  for (jint i = 0; i < [((RtdcCoreJsonJSONArray *) nil_chk(names)) length]; i += 1) {
    [ja putWithId:[self optWithNSString:[names getStringWithInt:i]]];
  }
  return ja;
}

- (NSString *)description {
  @try {
    JavaLangStringBuffer *sb = [[[JavaLangStringBuffer alloc] initWithNSString:@"{"] autorelease];
    for (NSString * __strong key in nil_chk([self keySet])) {
      if ([sb sequenceLength] > 1) [sb appendWithChar:','];
      [sb appendWithNSString:RtdcCoreJsonJSONObject_quoteWithNSString_(key)];
      [sb appendWithChar:':'];
      [sb appendWithNSString:RtdcCoreJsonJSONObject_valueToStringWithId_([((JavaUtilHashMap *) nil_chk(self->myHashMap_)) getWithId:key])];
    }
    [sb appendWithChar:'}'];
    return [sb description];
  }
  @catch (JavaLangException *e) {
    return nil;
  }
}

- (NSString *)toStringWithInt:(jint)indentFactor {
  return [self toStringWithInt:indentFactor withInt:0];
}

- (NSString *)toStringWithInt:(jint)indentFactor
                      withInt:(jint)indent {
  jint i;
  jint n = [self length];
  if (n == 0) {
    return @"{}";
  }
  id<JavaUtilIterator> keys = [((id<JavaUtilSet>) nil_chk([self keySet])) iterator];
  JavaLangStringBuffer *sb = [[[JavaLangStringBuffer alloc] initWithNSString:@"{"] autorelease];
  jint newindent = indent + indentFactor;
  id o;
  if (n == 1) {
    o = [((id<JavaUtilIterator>) nil_chk(keys)) next];
    [sb appendWithNSString:RtdcCoreJsonJSONObject_quoteWithNSString_([nil_chk(o) description])];
    [sb appendWithNSString:@": "];
    [sb appendWithNSString:RtdcCoreJsonJSONObject_valueToStringWithId_withInt_withInt_([((JavaUtilHashMap *) nil_chk(self->myHashMap_)) getWithId:o], indentFactor, indent)];
  }
  else {
    while ([((id<JavaUtilIterator>) nil_chk(keys)) hasNext]) {
      o = [keys next];
      if ([sb sequenceLength] > 1) {
        [sb appendWithNSString:@",\n"];
      }
      else {
        [sb appendWithChar:0x000a];
      }
      for (i = 0; i < newindent; i += 1) {
        [sb appendWithChar:' '];
      }
      [sb appendWithNSString:RtdcCoreJsonJSONObject_quoteWithNSString_([nil_chk(o) description])];
      [sb appendWithNSString:@": "];
      [sb appendWithNSString:RtdcCoreJsonJSONObject_valueToStringWithId_withInt_withInt_([((JavaUtilHashMap *) nil_chk(self->myHashMap_)) getWithId:o], indentFactor, newindent)];
    }
    if ([sb sequenceLength] > 1) {
      [sb appendWithChar:0x000a];
      for (i = 0; i < indent; i += 1) {
        [sb appendWithChar:' '];
      }
    }
  }
  [sb appendWithChar:'}'];
  return [sb description];
}

+ (NSString *)valueToStringWithId:(id)value {
  return RtdcCoreJsonJSONObject_valueToStringWithId_(value);
}

+ (NSString *)valueToStringWithId:(id)value
                          withInt:(jint)indentFactor
                          withInt:(jint)indent {
  return RtdcCoreJsonJSONObject_valueToStringWithId_withInt_withInt_(value, indentFactor, indent);
}

- (void)dealloc {
  RtdcCoreJsonJSONObject_set_myHashMap_(self, nil);
  [super dealloc];
}

- (void)copyAllFieldsTo:(RtdcCoreJsonJSONObject *)other {
  [super copyAllFieldsTo:other];
  RtdcCoreJsonJSONObject_set_myHashMap_(other, myHashMap_);
}

+ (void)initialize {
  if (self == [RtdcCoreJsonJSONObject class]) {
    JreStrongAssignAndConsume(&RtdcCoreJsonJSONObject_TRUE__, nil, [[JavaLangBoolean alloc] initWithBoolean:YES]);
    JreStrongAssignAndConsume(&RtdcCoreJsonJSONObject_FALSE__, nil, [[JavaLangBoolean alloc] initWithBoolean:NO]);
    JreStrongAssignAndConsume(&RtdcCoreJsonJSONObject_NULL__, nil, [[RtdcCoreJsonJSONObject_Null alloc] init]);
    J2OBJC_SET_INITIALIZED(RtdcCoreJsonJSONObject)
  }
}

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "init", "JSONObject", NULL, 0x1, NULL },
    { "initWithRtdcCoreJsonJSONTokener:", "JSONObject", NULL, 0x1, "Lrtdc.core.json.JSONException;" },
    { "initWithNSString:", "JSONObject", NULL, 0x1, "Lrtdc.core.json.JSONException;" },
    { "accumulateWithNSString:withId:", "accumulate", "Lrtdc.core.json.JSONObject;", 0x1, "Lrtdc.core.json.JSONException;" },
    { "getWithNSString:", "get", "Ljava.lang.Object;", 0x1, "Lrtdc.core.json.JSONException;" },
    { "getBooleanWithNSString:", "getBoolean", "Z", 0x1, "Lrtdc.core.json.JSONException;" },
    { "getIntWithNSString:", "getInt", "I", 0x1, "Lrtdc.core.json.JSONException;" },
    { "getJSONArrayWithNSString:", "getJSONArray", "Lrtdc.core.json.JSONArray;", 0x1, "Lrtdc.core.json.JSONException;" },
    { "getJSONObjectWithNSString:", "getJSONObject", "Lrtdc.core.json.JSONObject;", 0x1, "Lrtdc.core.json.JSONException;" },
    { "getLongWithNSString:", "getLong", "J", 0x1, "Lrtdc.core.json.JSONException;" },
    { "getStringWithNSString:", "getString", "Ljava.lang.String;", 0x1, "Lrtdc.core.json.JSONException;" },
    { "hasWithNSString:", "has", "Z", 0x1, NULL },
    { "isNullWithNSString:", "isNull", "Z", 0x1, NULL },
    { "keySet", NULL, "Ljava.util.Set;", 0x1, NULL },
    { "map", NULL, "Ljava.util.Map;", 0x1, NULL },
    { "length", NULL, "I", 0x1, NULL },
    { "names", NULL, "Lrtdc.core.json.JSONArray;", 0x1, NULL },
    { "trimNumberWithNSString:", "trimNumber", "Ljava.lang.String;", 0x9, NULL },
    { "numberToStringWithId:", "numberToString", "Ljava.lang.String;", 0x9, "Lrtdc.core.json.JSONException;" },
    { "optWithNSString:", "opt", "Ljava.lang.Object;", 0x1, NULL },
    { "optBooleanWithNSString:", "optBoolean", "Z", 0x1, NULL },
    { "optBooleanWithNSString:withBoolean:", "optBoolean", "Z", 0x1, NULL },
    { "putWithNSString:withJavaUtilVector:", "put", "Lrtdc.core.json.JSONObject;", 0x1, "Lrtdc.core.json.JSONException;" },
    { "optIntWithNSString:", "optInt", "I", 0x1, NULL },
    { "optIntWithNSString:withInt:", "optInt", "I", 0x1, NULL },
    { "optJSONArrayWithNSString:", "optJSONArray", "Lrtdc.core.json.JSONArray;", 0x1, NULL },
    { "optJSONObjectWithNSString:", "optJSONObject", "Lrtdc.core.json.JSONObject;", 0x1, NULL },
    { "optLongWithNSString:", "optLong", "J", 0x1, NULL },
    { "optLongWithNSString:withLong:", "optLong", "J", 0x1, NULL },
    { "optStringWithNSString:", "optString", "Ljava.lang.String;", 0x1, NULL },
    { "optStringWithNSString:withNSString:", "optString", "Ljava.lang.String;", 0x1, NULL },
    { "putWithNSString:withBoolean:", "put", "Lrtdc.core.json.JSONObject;", 0x1, "Lrtdc.core.json.JSONException;" },
    { "putWithNSString:withInt:", "put", "Lrtdc.core.json.JSONObject;", 0x1, "Lrtdc.core.json.JSONException;" },
    { "putWithNSString:withLong:", "put", "Lrtdc.core.json.JSONObject;", 0x1, "Lrtdc.core.json.JSONException;" },
    { "putWithNSString:withId:", "put", "Lrtdc.core.json.JSONObject;", 0x1, "Lrtdc.core.json.JSONException;" },
    { "putOptWithNSString:withId:", "putOpt", "Lrtdc.core.json.JSONObject;", 0x1, "Lrtdc.core.json.JSONException;" },
    { "quoteWithNSString:", "quote", "Ljava.lang.String;", 0x9, NULL },
    { "removeWithNSString:", "remove", "Ljava.lang.Object;", 0x1, NULL },
    { "testValidityWithId:", "testValidity", "V", 0x8, "Lrtdc.core.json.JSONException;" },
    { "toJSONArrayWithRtdcCoreJsonJSONArray:", "toJSONArray", "Lrtdc.core.json.JSONArray;", 0x1, "Lrtdc.core.json.JSONException;" },
    { "description", "toString", "Ljava.lang.String;", 0x1, NULL },
    { "toStringWithInt:", "toString", "Ljava.lang.String;", 0x1, "Lrtdc.core.json.JSONException;" },
    { "toStringWithInt:withInt:", "toString", "Ljava.lang.String;", 0x0, "Lrtdc.core.json.JSONException;" },
    { "valueToStringWithId:", "valueToString", "Ljava.lang.String;", 0x8, "Lrtdc.core.json.JSONException;" },
    { "valueToStringWithId:withInt:withInt:", "valueToString", "Ljava.lang.String;", 0x8, "Lrtdc.core.json.JSONException;" },
  };
  static const J2ObjcFieldInfo fields[] = {
    { "TRUE__", "TRUE", 0x19, "Ljava.lang.Boolean;", &RtdcCoreJsonJSONObject_TRUE__,  },
    { "FALSE__", "FALSE", 0x19, "Ljava.lang.Boolean;", &RtdcCoreJsonJSONObject_FALSE__,  },
    { "myHashMap_", NULL, 0x2, "Ljava.util.HashMap;", NULL,  },
    { "NULL__", "NULL", 0x19, "Ljava.lang.Object;", &RtdcCoreJsonJSONObject_NULL__,  },
  };
  static const J2ObjcClassInfo _RtdcCoreJsonJSONObject = { "JSONObject", "rtdc.core.json", NULL, 0x1, 45, methods, 4, fields, 0, NULL};
  return &_RtdcCoreJsonJSONObject;
}

@end

NSString *RtdcCoreJsonJSONObject_trimNumberWithNSString_(NSString *s) {
  RtdcCoreJsonJSONObject_init();
  if ([((NSString *) nil_chk(s)) indexOf:'.'] > 0 && [s indexOf:'e'] < 0 && [s indexOf:'E'] < 0) {
    while ([s hasSuffix:@"0"]) {
      s = [s substring:0 endIndex:((jint) [s length]) - 1];
    }
    if ([((NSString *) nil_chk(s)) hasSuffix:@"."]) {
      s = [s substring:0 endIndex:((jint) [s length]) - 1];
    }
  }
  return s;
}

NSString *RtdcCoreJsonJSONObject_numberToStringWithId_(id n) {
  RtdcCoreJsonJSONObject_init();
  if (n == nil) {
    @throw [[[RtdcCoreJsonJSONException alloc] initWithNSString:@"Null pointer"] autorelease];
  }
  RtdcCoreJsonJSONObject_testValidityWithId_(n);
  return RtdcCoreJsonJSONObject_trimNumberWithNSString_([nil_chk(n) description]);
}

NSString *RtdcCoreJsonJSONObject_quoteWithNSString_(NSString *string) {
  RtdcCoreJsonJSONObject_init();
  if (string == nil || ((jint) [string length]) == 0) {
    return @"\"\"";
  }
  jchar b;
  jchar c = 0;
  jint i;
  jint len = ((jint) [((NSString *) nil_chk(string)) length]);
  JavaLangStringBuffer *sb = [[[JavaLangStringBuffer alloc] initWithInt:len + 4] autorelease];
  NSString *t;
  [sb appendWithChar:'"'];
  for (i = 0; i < len; i += 1) {
    b = c;
    c = [string charAtWithInt:i];
    switch (c) {
      case '\\':
      case '"':
      [sb appendWithChar:'\\'];
      [sb appendWithChar:c];
      break;
      case '/':
      if (b == '<') {
        [sb appendWithChar:'\\'];
      }
      [sb appendWithChar:c];
      break;
      case 0x0008:
      [sb appendWithNSString:@"\\b"];
      break;
      case 0x0009:
      [sb appendWithNSString:@"\\t"];
      break;
      case 0x000a:
      [sb appendWithNSString:@"\\n"];
      break;
      case 0x000c:
      [sb appendWithNSString:@"\\f"];
      break;
      case 0x000d:
      [sb appendWithNSString:@"\\r"];
      break;
      default:
      if (c < ' ') {
        t = JreStrcat("$$", @"000", JavaLangInteger_toHexStringWithInt_(c));
        [sb appendWithNSString:JreStrcat("$$", @"\\u", [t substring:((jint) [t length]) - 4])];
      }
      else {
        [sb appendWithChar:c];
      }
    }
  }
  [sb appendWithChar:'"'];
  return [sb description];
}

void RtdcCoreJsonJSONObject_testValidityWithId_(id o) {
  RtdcCoreJsonJSONObject_init();
  if (o != nil) {
  }
}

NSString *RtdcCoreJsonJSONObject_valueToStringWithId_(id value) {
  RtdcCoreJsonJSONObject_init();
  if (value == nil || [value isEqual:nil]) {
    return @"null";
  }
  if ([value conformsToProtocol: @protocol(RtdcCoreJsonJSONString)]) {
    id o;
    @try {
      o = [((id<RtdcCoreJsonJSONString>) nil_chk(((id<RtdcCoreJsonJSONString>) check_protocol_cast(value, @protocol(RtdcCoreJsonJSONString))))) toJSONString];
    }
    @catch (JavaLangException *e) {
      @throw [[[RtdcCoreJsonJSONException alloc] initWithJavaLangThrowable:e] autorelease];
    }
    if ([o isKindOfClass:[NSString class]]) {
      return (NSString *) check_class_cast(o, [NSString class]);
    }
    @throw [[[RtdcCoreJsonJSONException alloc] initWithNSString:JreStrcat("$@", @"Bad value from toJSONString: ", o)] autorelease];
  }
  if ([value isKindOfClass:[JavaLangByte class]] || [value isKindOfClass:[JavaLangShort class]] || [value isKindOfClass:[JavaLangInteger class]] || [value isKindOfClass:[JavaLangLong class]]) {
    return RtdcCoreJsonJSONObject_numberToStringWithId_(value);
  }
  if ([value isKindOfClass:[JavaLangBoolean class]] || [value isKindOfClass:[RtdcCoreJsonJSONObject class]] || [value isKindOfClass:[RtdcCoreJsonJSONArray class]]) {
    return [nil_chk(value) description];
  }
  return RtdcCoreJsonJSONObject_quoteWithNSString_([nil_chk(value) description]);
}

NSString *RtdcCoreJsonJSONObject_valueToStringWithId_withInt_withInt_(id value, jint indentFactor, jint indent) {
  RtdcCoreJsonJSONObject_init();
  if (value == nil || [value isEqual:nil]) {
    return @"null";
  }
  @try {
    if ([value conformsToProtocol: @protocol(RtdcCoreJsonJSONString)]) {
      id o = [((id<RtdcCoreJsonJSONString>) nil_chk(((id<RtdcCoreJsonJSONString>) check_protocol_cast(value, @protocol(RtdcCoreJsonJSONString))))) toJSONString];
      if ([o isKindOfClass:[NSString class]]) {
        return (NSString *) check_class_cast(o, [NSString class]);
      }
    }
  }
  @catch (JavaLangException *e) {
  }
  if ([value isKindOfClass:[JavaLangByte class]] || [value isKindOfClass:[JavaLangShort class]] || [value isKindOfClass:[JavaLangInteger class]] || [value isKindOfClass:[JavaLangLong class]]) {
    return RtdcCoreJsonJSONObject_numberToStringWithId_(value);
  }
  if ([value isKindOfClass:[JavaLangBoolean class]]) {
    return [nil_chk(value) description];
  }
  if ([value isKindOfClass:[RtdcCoreJsonJSONObject class]]) {
    return [((RtdcCoreJsonJSONObject *) nil_chk(((RtdcCoreJsonJSONObject *) check_class_cast(value, [RtdcCoreJsonJSONObject class])))) toStringWithInt:indentFactor withInt:indent];
  }
  if ([value isKindOfClass:[RtdcCoreJsonJSONArray class]]) {
    return [((RtdcCoreJsonJSONArray *) nil_chk(((RtdcCoreJsonJSONArray *) check_class_cast(value, [RtdcCoreJsonJSONArray class])))) toStringWithInt:indentFactor withInt:indent];
  }
  return RtdcCoreJsonJSONObject_quoteWithNSString_([nil_chk(value) description]);
}

@implementation RtdcCoreJsonJSONObject_Null

- (id)clone {
  return self;
}

- (jboolean)isEqual:(id)object {
  return object == nil || object == self;
}

- (NSString *)description {
  return @"null";
}

- (instancetype)init {
  return [super init];
}

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "clone", NULL, "Ljava.lang.Object;", 0x14, NULL },
    { "isEqual:", "equals", "Z", 0x1, NULL },
    { "description", "toString", "Ljava.lang.String;", 0x1, NULL },
    { "init", NULL, NULL, 0x2, NULL },
  };
  static const J2ObjcClassInfo _RtdcCoreJsonJSONObject_Null = { "Null", "rtdc.core.json", "JSONObject", 0x1a, 4, methods, 0, NULL, 0, NULL};
  return &_RtdcCoreJsonJSONObject_Null;
}

@end
