//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-0.9.5/j2objc/jsr305/build_result/java/javax/annotation/PropertyKey.java
//

#ifndef _JavaxAnnotationPropertyKey_H_
#define _JavaxAnnotationPropertyKey_H_

@class JavaxAnnotationMetaWhenEnum;

#import "JreEmulation.h"
#include "java/lang/annotation/Annotation.h"

@protocol JavaxAnnotationPropertyKey < JavaLangAnnotationAnnotation >

@property (readonly) JavaxAnnotationMetaWhenEnum *when;


@end

@interface JavaxAnnotationPropertyKey : NSObject < JavaxAnnotationPropertyKey > {
 @private
  JavaxAnnotationMetaWhenEnum *when;
}

- (instancetype)initWithWhen:(JavaxAnnotationMetaWhenEnum *)when_;

+ (JavaxAnnotationMetaWhenEnum *)whenDefault;

@end

__attribute__((always_inline)) inline void JavaxAnnotationPropertyKey_init() {}

#endif // _JavaxAnnotationPropertyKey_H_