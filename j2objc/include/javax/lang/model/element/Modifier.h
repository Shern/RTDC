//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: Classes/javax/lang/model/element/Modifier.java
//

#ifndef _JavaxLangModelElementModifier_H_
#define _JavaxLangModelElementModifier_H_

#import "JreEmulation.h"
#include "java/lang/Enum.h"

typedef NS_ENUM(NSUInteger, JavaxLangModelElementModifier) {
  JavaxLangModelElementModifier_PUBLIC = 0,
  JavaxLangModelElementModifier_PROTECTED = 1,
  JavaxLangModelElementModifier_PRIVATE = 2,
  JavaxLangModelElementModifier_ABSTRACT = 3,
  JavaxLangModelElementModifier_STATIC = 4,
  JavaxLangModelElementModifier_FINAL = 5,
  JavaxLangModelElementModifier_TRANSIENT = 6,
  JavaxLangModelElementModifier_VOLATILE = 7,
  JavaxLangModelElementModifier_SYNCHRONIZED = 8,
  JavaxLangModelElementModifier_NATIVE = 9,
  JavaxLangModelElementModifier_STRICTFP = 10,
};

@interface JavaxLangModelElementModifierEnum : JavaLangEnum < NSCopying > {
}

- (NSString *)description;

- (instancetype)initWithNSString:(NSString *)__name
                         withInt:(jint)__ordinal;

+ (IOSObjectArray *)values;
FOUNDATION_EXPORT IOSObjectArray *JavaxLangModelElementModifierEnum_values();

+ (JavaxLangModelElementModifierEnum *)valueOfWithNSString:(NSString *)name;

FOUNDATION_EXPORT JavaxLangModelElementModifierEnum *JavaxLangModelElementModifierEnum_valueOfWithNSString_(NSString *name);- (id)copyWithZone:(NSZone *)zone;

@end

FOUNDATION_EXPORT BOOL JavaxLangModelElementModifierEnum_initialized;
J2OBJC_STATIC_INIT(JavaxLangModelElementModifierEnum)

FOUNDATION_EXPORT JavaxLangModelElementModifierEnum *JavaxLangModelElementModifierEnum_values_[];

#define JavaxLangModelElementModifierEnum_PUBLIC JavaxLangModelElementModifierEnum_values_[JavaxLangModelElementModifier_PUBLIC]
J2OBJC_STATIC_FIELD_GETTER(JavaxLangModelElementModifierEnum, PUBLIC, JavaxLangModelElementModifierEnum *)

#define JavaxLangModelElementModifierEnum_PROTECTED JavaxLangModelElementModifierEnum_values_[JavaxLangModelElementModifier_PROTECTED]
J2OBJC_STATIC_FIELD_GETTER(JavaxLangModelElementModifierEnum, PROTECTED, JavaxLangModelElementModifierEnum *)

#define JavaxLangModelElementModifierEnum_PRIVATE JavaxLangModelElementModifierEnum_values_[JavaxLangModelElementModifier_PRIVATE]
J2OBJC_STATIC_FIELD_GETTER(JavaxLangModelElementModifierEnum, PRIVATE, JavaxLangModelElementModifierEnum *)

#define JavaxLangModelElementModifierEnum_ABSTRACT JavaxLangModelElementModifierEnum_values_[JavaxLangModelElementModifier_ABSTRACT]
J2OBJC_STATIC_FIELD_GETTER(JavaxLangModelElementModifierEnum, ABSTRACT, JavaxLangModelElementModifierEnum *)

#define JavaxLangModelElementModifierEnum_STATIC JavaxLangModelElementModifierEnum_values_[JavaxLangModelElementModifier_STATIC]
J2OBJC_STATIC_FIELD_GETTER(JavaxLangModelElementModifierEnum, STATIC, JavaxLangModelElementModifierEnum *)

#define JavaxLangModelElementModifierEnum_FINAL JavaxLangModelElementModifierEnum_values_[JavaxLangModelElementModifier_FINAL]
J2OBJC_STATIC_FIELD_GETTER(JavaxLangModelElementModifierEnum, FINAL, JavaxLangModelElementModifierEnum *)

#define JavaxLangModelElementModifierEnum_TRANSIENT JavaxLangModelElementModifierEnum_values_[JavaxLangModelElementModifier_TRANSIENT]
J2OBJC_STATIC_FIELD_GETTER(JavaxLangModelElementModifierEnum, TRANSIENT, JavaxLangModelElementModifierEnum *)

#define JavaxLangModelElementModifierEnum_VOLATILE JavaxLangModelElementModifierEnum_values_[JavaxLangModelElementModifier_VOLATILE]
J2OBJC_STATIC_FIELD_GETTER(JavaxLangModelElementModifierEnum, VOLATILE, JavaxLangModelElementModifierEnum *)

#define JavaxLangModelElementModifierEnum_SYNCHRONIZED JavaxLangModelElementModifierEnum_values_[JavaxLangModelElementModifier_SYNCHRONIZED]
J2OBJC_STATIC_FIELD_GETTER(JavaxLangModelElementModifierEnum, SYNCHRONIZED, JavaxLangModelElementModifierEnum *)

#define JavaxLangModelElementModifierEnum_NATIVE JavaxLangModelElementModifierEnum_values_[JavaxLangModelElementModifier_NATIVE]
J2OBJC_STATIC_FIELD_GETTER(JavaxLangModelElementModifierEnum, NATIVE, JavaxLangModelElementModifierEnum *)

#define JavaxLangModelElementModifierEnum_STRICTFP JavaxLangModelElementModifierEnum_values_[JavaxLangModelElementModifier_STRICTFP]
J2OBJC_STATIC_FIELD_GETTER(JavaxLangModelElementModifierEnum, STRICTFP, JavaxLangModelElementModifierEnum *)

#endif // _JavaxLangModelElementModifier_H_
