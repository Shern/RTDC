//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nicolasmenard/IdeaProjects/RTDC/core/src/main/java/rtdc/core/impl/UiElement.java
//

#ifndef _UiElement_H_
#define _UiElement_H_

#include "J2ObjC_header.h"

@protocol ImplUiElement < NSObject, JavaObject >

- (id)getValue;

- (void)setValueWithId:(id)value;

- (NSString *)getErrorMessage;

- (void)setErrorMessageWithNSString:(NSString *)errorMessage;

- (void)setFocusWithBoolean:(jboolean)hasFocus;

@end

J2OBJC_EMPTY_STATIC_INIT(ImplUiElement)

J2OBJC_TYPE_LITERAL_HEADER(ImplUiElement)

#define RtdcCoreImplUiElement ImplUiElement

#endif // _UiElement_H_
