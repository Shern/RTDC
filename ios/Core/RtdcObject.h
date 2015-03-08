//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nicolasmenard/IdeaProjects/RTDC/core/src/main/java/rtdc/core/model/RtdcObject.java
//

#ifndef _ModelRtdcObject_H_
#define _ModelRtdcObject_H_

@class JSONJSONObject;
@protocol JavaUtilMap;
@protocol JavaUtilSet;

#import "JreEmulation.h"

@interface ModelRtdcObject : NSObject {
 @public
  JSONJSONObject *jsonObject_;
}

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)json;

- (jboolean)expectBooleanWithNSString:(NSString *)propertyName;

- (jboolean)expectIntWithNSString:(NSString *)propertyName;

- (jboolean)expectLongWithNSString:(NSString *)propertyName;

- (jboolean)expectStringWithNSString:(NSString *)propertyName;

- (jboolean)expectJsonArrayWithNSString:(NSString *)propertyName;

- (jboolean)expectJsonObjectWithNSString:(NSString *)propertyName;

- (NSString *)description;

- (id<JavaUtilSet>)validatePropertyWithNSString:(NSString *)property;

- (id<JavaUtilMap>)validateAll;

- (void)dealloc;

- (void)copyAllFieldsTo:(ModelRtdcObject *)other;

@end

__attribute__((always_inline)) inline void ModelRtdcObject_init() {}

J2OBJC_FIELD_SETTER(ModelRtdcObject, jsonObject_, JSONJSONObject *)

typedef ModelRtdcObject RtdcCoreModelRtdcObject;

#endif // _ModelRtdcObject_H_
