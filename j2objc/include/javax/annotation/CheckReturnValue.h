//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-0.9.5/j2objc/jsr305/build_result/java/javax/annotation/CheckReturnValue.java
//

#ifndef _JavaxAnnotationCheckReturnValue_H_
#define _JavaxAnnotationCheckReturnValue_H_

@class JavaxAnnotationMetaWhenEnum;

#import "JreEmulation.h"
#include "java/lang/annotation/Annotation.h"

@protocol JavaxAnnotationCheckReturnValue < JavaLangAnnotationAnnotation >

@property (readonly) JavaxAnnotationMetaWhenEnum *when;


@end

@interface JavaxAnnotationCheckReturnValue : NSObject < JavaxAnnotationCheckReturnValue > {
 @private
  JavaxAnnotationMetaWhenEnum *when;
}

- (instancetype)initWithWhen:(JavaxAnnotationMetaWhenEnum *)when_;

+ (JavaxAnnotationMetaWhenEnum *)whenDefault;

@end

__attribute__((always_inline)) inline void JavaxAnnotationCheckReturnValue_init() {}

#endif // _JavaxAnnotationCheckReturnValue_H_
