//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/frameworks/base/core/java/android/text/Spannable.java
//

#ifndef _AndroidTextSpannable_H_
#define _AndroidTextSpannable_H_

@protocol JavaLangCharSequence;

#import "JreEmulation.h"
#include "android/text/Spanned.h"

@protocol AndroidTextSpannable < AndroidTextSpanned, NSObject, JavaObject >
- (void)setSpanWithId:(id)what
              withInt:(jint)start
              withInt:(jint)end
              withInt:(jint)flags;

- (void)removeSpanWithId:(id)what;

@end

__attribute__((always_inline)) inline void AndroidTextSpannable_init() {}

@interface AndroidTextSpannable_Factory : NSObject {
}

+ (AndroidTextSpannable_Factory *)getInstance;

- (id<AndroidTextSpannable>)newSpannableWithJavaLangCharSequence:(id<JavaLangCharSequence>)source OBJC_METHOD_FAMILY_NONE;

- (instancetype)init;

@end

FOUNDATION_EXPORT BOOL AndroidTextSpannable_Factory_initialized;
J2OBJC_STATIC_INIT(AndroidTextSpannable_Factory)
FOUNDATION_EXPORT AndroidTextSpannable_Factory *AndroidTextSpannable_Factory_getInstance();

FOUNDATION_EXPORT AndroidTextSpannable_Factory *AndroidTextSpannable_Factory_sInstance_;
J2OBJC_STATIC_FIELD_GETTER(AndroidTextSpannable_Factory, sInstance_, AndroidTextSpannable_Factory *)
J2OBJC_STATIC_FIELD_SETTER(AndroidTextSpannable_Factory, sInstance_, AndroidTextSpannable_Factory *)

#endif // _AndroidTextSpannable_H_
