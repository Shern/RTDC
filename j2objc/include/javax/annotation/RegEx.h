//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-0.9.5/j2objc/jsr305/build_result/java/javax/annotation/RegEx.java
//

#ifndef _JavaxAnnotationRegEx_H_
#define _JavaxAnnotationRegEx_H_

@class JavaxAnnotationMetaWhenEnum;

#import "JreEmulation.h"
#include "java/lang/annotation/Annotation.h"
#include "javax/annotation/meta/TypeQualifierValidator.h"

@protocol JavaxAnnotationRegEx < JavaLangAnnotationAnnotation >

@property (readonly) JavaxAnnotationMetaWhenEnum *when;


@end

@interface JavaxAnnotationRegEx : NSObject < JavaxAnnotationRegEx > {
 @private
  JavaxAnnotationMetaWhenEnum *when;
}

- (instancetype)initWithWhen:(JavaxAnnotationMetaWhenEnum *)when_;

+ (JavaxAnnotationMetaWhenEnum *)whenDefault;

@end

__attribute__((always_inline)) inline void JavaxAnnotationRegEx_init() {}

@interface JavaxAnnotationRegEx_Checker : NSObject < JavaxAnnotationMetaTypeQualifierValidator > {
}

- (JavaxAnnotationMetaWhenEnum *)forConstantValueWithJavaLangAnnotationAnnotation:(id<JavaxAnnotationRegEx>)annotation
                                                                           withId:(id)value;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void JavaxAnnotationRegEx_Checker_init() {}

#endif // _JavaxAnnotationRegEx_H_
