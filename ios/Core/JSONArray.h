//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nicolasmenard/IdeaProjects/RTDC/core/src/main/java/rtdc/core/json/JSONArray.java
//

#ifndef _JSONArray_H_
#define _JSONArray_H_

#include "J2ObjC_header.h"

@class JavaUtilVector;
@class JsonJSONObject;
@class JsonJSONTokener;

@interface JsonJSONArray : NSObject

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithJsonJSONTokener:(JsonJSONTokener *)x;

- (instancetype)initWithNSString:(NSString *)string;

- (instancetype)initWithJavaUtilVector:(JavaUtilVector *)collection;

- (id)getWithInt:(jint)index;

- (jboolean)getBooleanWithInt:(jint)index;

- (JsonJSONArray *)getJSONArrayWithInt:(jint)index;

- (JsonJSONObject *)getJSONObjectWithInt:(jint)index;

- (NSString *)getStringWithInt:(jint)index;

- (jboolean)isNullWithInt:(jint)index;

- (NSString *)joinWithNSString:(NSString *)separator;

- (jint)length;

- (id)optWithInt:(jint)index;

- (jboolean)optBooleanWithInt:(jint)index;

- (jboolean)optBooleanWithInt:(jint)index
                  withBoolean:(jboolean)defaultValue;

- (JsonJSONArray *)optJSONArrayWithInt:(jint)index;

- (JsonJSONObject *)optJSONObjectWithInt:(jint)index;

- (NSString *)optStringWithInt:(jint)index;

- (NSString *)optStringWithInt:(jint)index
                  withNSString:(NSString *)defaultValue;

- (JsonJSONArray *)putWithBoolean:(jboolean)value;

- (JsonJSONArray *)putWithInt:(jint)value;

- (JsonJSONArray *)putWithInt:(jint)index
                  withBoolean:(jboolean)value;

- (JsonJSONArray *)putWithInt:(jint)index
                      withInt:(jint)value;

- (JsonJSONArray *)putWithInt:(jint)index
                     withLong:(jlong)value;

- (JsonJSONArray *)putWithInt:(jint)index
                       withId:(id)value;

- (JsonJSONArray *)putWithInt:(jint)index
           withJavaUtilVector:(JavaUtilVector *)value;

- (JsonJSONArray *)putWithLong:(jlong)value;

- (JsonJSONArray *)putWithId:(id)value;

- (JsonJSONArray *)putWithJavaUtilVector:(JavaUtilVector *)value;

- (JsonJSONObject *)toJSONObjectWithJsonJSONArray:(JsonJSONArray *)names;

- (NSString *)description;

- (NSString *)toStringWithInt:(jint)indentFactor;

#pragma mark Package-Private

- (NSString *)toStringWithInt:(jint)indentFactor
                      withInt:(jint)indent;

@end

J2OBJC_EMPTY_STATIC_INIT(JsonJSONArray)

FOUNDATION_EXPORT void JsonJSONArray_init(JsonJSONArray *self);

FOUNDATION_EXPORT JsonJSONArray *new_JsonJSONArray_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JsonJSONArray_initWithJsonJSONTokener_(JsonJSONArray *self, JsonJSONTokener *x);

FOUNDATION_EXPORT JsonJSONArray *new_JsonJSONArray_initWithJsonJSONTokener_(JsonJSONTokener *x) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JsonJSONArray_initWithNSString_(JsonJSONArray *self, NSString *string);

FOUNDATION_EXPORT JsonJSONArray *new_JsonJSONArray_initWithNSString_(NSString *string) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JsonJSONArray_initWithJavaUtilVector_(JsonJSONArray *self, JavaUtilVector *collection);

FOUNDATION_EXPORT JsonJSONArray *new_JsonJSONArray_initWithJavaUtilVector_(JavaUtilVector *collection) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JsonJSONArray)

@compatibility_alias RtdcCoreJsonJSONArray JsonJSONArray;

#endif // _JSONArray_H_
