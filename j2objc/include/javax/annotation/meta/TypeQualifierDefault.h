//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-0.9.5/j2objc/jsr305/build_result/java/javax/annotation/meta/TypeQualifierDefault.java
//

#ifndef _JavaxAnnotationMetaTypeQualifierDefault_H_
#define _JavaxAnnotationMetaTypeQualifierDefault_H_

@class IOSObjectArray;

#import "JreEmulation.h"
#include "java/lang/annotation/Annotation.h"

@protocol JavaxAnnotationMetaTypeQualifierDefault < JavaLangAnnotationAnnotation >

@property (readonly) IOSObjectArray *value;


@end

@interface JavaxAnnotationMetaTypeQualifierDefault : NSObject < JavaxAnnotationMetaTypeQualifierDefault > {
 @private
  IOSObjectArray *value;
}

- (instancetype)initWithValue:(IOSObjectArray *)value_;

+ (IOSObjectArray *)valueDefault;

@end

__attribute__((always_inline)) inline void JavaxAnnotationMetaTypeQualifierDefault_init() {}

#endif // _JavaxAnnotationMetaTypeQualifierDefault_H_
