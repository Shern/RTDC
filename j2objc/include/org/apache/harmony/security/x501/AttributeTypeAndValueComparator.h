//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/apache/harmony/security/x501/AttributeTypeAndValueComparator.java
//

#ifndef _OrgApacheHarmonySecurityX501AttributeTypeAndValueComparator_H_
#define _OrgApacheHarmonySecurityX501AttributeTypeAndValueComparator_H_

@class OrgApacheHarmonySecurityUtilsObjectIdentifier;
@class OrgApacheHarmonySecurityX501AttributeTypeAndValue;

#import "JreEmulation.h"
#include "java/io/Serializable.h"
#include "java/util/Comparator.h"

#define OrgApacheHarmonySecurityX501AttributeTypeAndValueComparator_serialVersionUID -1286471842007103132LL

@interface OrgApacheHarmonySecurityX501AttributeTypeAndValueComparator : NSObject < JavaUtilComparator, JavaIoSerializable > {
}

- (jint)compareWithId:(OrgApacheHarmonySecurityX501AttributeTypeAndValue *)atav1
               withId:(OrgApacheHarmonySecurityX501AttributeTypeAndValue *)atav2;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void OrgApacheHarmonySecurityX501AttributeTypeAndValueComparator_init() {}

J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityX501AttributeTypeAndValueComparator, serialVersionUID, jlong)

#endif // _OrgApacheHarmonySecurityX501AttributeTypeAndValueComparator_H_
