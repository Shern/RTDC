//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nicolasmenard/IdeaProjects/RTDC/core/src/main/java/rtdc/core/json/JSONStringer.java
//

#ifndef _JSONStringer_H_
#define _JSONStringer_H_

#include "J2ObjC_header.h"
#include "JSONWriter.h"

@interface JsonJSONStringer : JsonJSONWriter

#pragma mark Public

- (instancetype)init;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(JsonJSONStringer)

FOUNDATION_EXPORT void JsonJSONStringer_init(JsonJSONStringer *self);

FOUNDATION_EXPORT JsonJSONStringer *new_JsonJSONStringer_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JsonJSONStringer)

@compatibility_alias RtdcCoreJsonJSONStringer JsonJSONStringer;

#endif // _JSONStringer_H_
