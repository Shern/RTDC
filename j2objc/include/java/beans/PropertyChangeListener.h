//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/beans/PropertyChangeListener.java
//

#ifndef _JavaBeansPropertyChangeListener_H_
#define _JavaBeansPropertyChangeListener_H_

@class JavaBeansPropertyChangeEvent;

#import "JreEmulation.h"
#include "java/util/EventListener.h"

@protocol JavaBeansPropertyChangeListener < JavaUtilEventListener, NSObject, JavaObject >
- (void)propertyChangeWithJavaBeansPropertyChangeEvent:(JavaBeansPropertyChangeEvent *)event;

@end

__attribute__((always_inline)) inline void JavaBeansPropertyChangeListener_init() {}

#endif // _JavaBeansPropertyChangeListener_H_