//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/beans/IndexedPropertyChangeEvent.java
//

#ifndef _JavaBeansIndexedPropertyChangeEvent_H_
#define _JavaBeansIndexedPropertyChangeEvent_H_

#import "JreEmulation.h"
#include "java/beans/PropertyChangeEvent.h"

#define JavaBeansIndexedPropertyChangeEvent_serialVersionUID -320227448495806870LL

@interface JavaBeansIndexedPropertyChangeEvent : JavaBeansPropertyChangeEvent {
}

- (instancetype)initWithId:(id)source
              withNSString:(NSString *)propertyName
                    withId:(id)oldValue
                    withId:(id)newValue
                   withInt:(jint)index;

- (jint)getIndex;

@end

__attribute__((always_inline)) inline void JavaBeansIndexedPropertyChangeEvent_init() {}

J2OBJC_STATIC_FIELD_GETTER(JavaBeansIndexedPropertyChangeEvent, serialVersionUID, jlong)

#endif // _JavaBeansIndexedPropertyChangeEvent_H_