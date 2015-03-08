//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nicolasmenard/IdeaProjects/RTDC/core/src/main/java/rtdc/core/json/JSONWriter.java
//

#ifndef _JSONJSONWriter_H_
#define _JSONJSONWriter_H_

@class IOSCharArray;
@class JavaIoWriter;

#import "JreEmulation.h"

#define JSONJSONWriter_maxdepth 20

@interface JSONJSONWriter : NSObject {
 @public
  jboolean comma_;
  jchar mode_;
  IOSCharArray *stack_;
  jint top_;
  JavaIoWriter *writer_;
}

- (instancetype)initWithJavaIoWriter:(JavaIoWriter *)w;

- (JSONJSONWriter *)appendWithNSString:(NSString *)s;

- (JSONJSONWriter *)array;

- (JSONJSONWriter *)endWithChar:(jchar)m
                       withChar:(jchar)c;

- (JSONJSONWriter *)endArray;

- (JSONJSONWriter *)endObject;

- (JSONJSONWriter *)keyWithNSString:(NSString *)s;

- (JSONJSONWriter *)object;

- (void)popWithChar:(jchar)c;

- (void)pushWithChar:(jchar)c;

- (JSONJSONWriter *)valueWithBoolean:(jboolean)b;

- (JSONJSONWriter *)valueWithLong:(jlong)l;

- (JSONJSONWriter *)valueWithId:(id)o;

- (void)dealloc;

- (void)copyAllFieldsTo:(JSONJSONWriter *)other;

@end

__attribute__((always_inline)) inline void JSONJSONWriter_init() {}

J2OBJC_FIELD_SETTER(JSONJSONWriter, stack_, IOSCharArray *)
J2OBJC_FIELD_SETTER(JSONJSONWriter, writer_, JavaIoWriter *)

J2OBJC_STATIC_FIELD_GETTER(JSONJSONWriter, maxdepth, jint)

typedef JSONJSONWriter RtdcCoreJsonJSONWriter;

#endif // _JSONJSONWriter_H_
