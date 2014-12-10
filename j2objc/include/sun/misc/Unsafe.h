//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: Classes/sun/misc/Unsafe.java
//

#ifndef _SunMiscUnsafe_H_
#define _SunMiscUnsafe_H_

@class IOSClass;
@class JavaLangReflectField;

#import "JreEmulation.h"

@interface SunMiscUnsafe : NSObject {
}

+ (SunMiscUnsafe *)getUnsafe;

- (jlong)objectFieldOffsetWithJavaLangReflectField:(JavaLangReflectField *)field;

- (jboolean)compareAndSwapIntWithId:(id)obj
                           withLong:(jlong)offset
                            withInt:(jint)expectedValue
                            withInt:(jint)newValue;

- (jboolean)compareAndSwapLongWithId:(id)obj
                            withLong:(jlong)offset
                            withLong:(jlong)expectedValue
                            withLong:(jlong)newValue;

- (jboolean)compareAndSwapObjectWithId:(id)obj
                              withLong:(jlong)offset
                                withId:(id)expectedValue
                                withId:(id)newValue;

- (jint)getIntVolatileWithId:(id)obj
                    withLong:(jlong)offset;

- (void)putIntVolatileWithId:(id)obj
                    withLong:(jlong)offset
                     withInt:(jint)newValue;

- (jlong)getLongVolatileWithId:(id)obj
                      withLong:(jlong)offset;

- (void)putLongVolatileWithId:(id)obj
                     withLong:(jlong)offset
                     withLong:(jlong)newValue;

- (id)getObjectVolatileWithId:(id)obj
                     withLong:(jlong)offset;

- (void)putObjectVolatileWithId:(id)obj
                       withLong:(jlong)offset
                         withId:(id)newValue;

- (jint)getIntWithId:(id)obj
            withLong:(jlong)offset;

- (void)putIntWithId:(id)obj
            withLong:(jlong)offset
             withInt:(jint)newValue;

- (void)putOrderedIntWithId:(id)obj
                   withLong:(jlong)offset
                    withInt:(jint)newValue;

- (jlong)getLongWithId:(id)obj
              withLong:(jlong)offset;

- (void)putLongWithId:(id)obj
             withLong:(jlong)offset
             withLong:(jlong)newValue;

- (void)putOrderedLongWithId:(id)obj
                    withLong:(jlong)offset
                    withLong:(jlong)newValue;

- (id)getObjectWithId:(id)obj
             withLong:(jlong)offset;

- (void)putObjectWithId:(id)obj
               withLong:(jlong)offset
                 withId:(id)newValue;

- (void)putOrderedObjectWithId:(id)obj
                      withLong:(jlong)offset
                        withId:(id)newValue;

- (void)parkWithBoolean:(jboolean)absolute
               withLong:(jlong)time;

- (void)unparkWithId:(id)obj;

- (id)allocateInstanceWithIOSClass:(IOSClass *)c OBJC_METHOD_FAMILY_NONE;

- (id)getArrayObjectWithId:(id)array
                   withInt:(jint)index;

- (id)getArrayObjectVolatileWithId:(id)array
                           withInt:(jint)index;

- (void)putArrayObjectWithId:(id)array
                     withInt:(jint)index
                      withId:(id)newValue;

- (void)putArrayOrderedObjectWithId:(id)array
                            withInt:(jint)index
                             withId:(id)newValue;

- (void)putArrayObjectVolatileWithId:(id)array
                             withInt:(jint)index
                              withId:(id)newValue;

- (jboolean)compareAndSwapArrayObjectWithId:(id)array
                                    withInt:(jint)index
                                     withId:(id)expectedValue
                                     withId:(id)newValue;

@end

FOUNDATION_EXPORT BOOL SunMiscUnsafe_initialized;
J2OBJC_STATIC_INIT(SunMiscUnsafe)
FOUNDATION_EXPORT SunMiscUnsafe *SunMiscUnsafe_getUnsafe();

FOUNDATION_EXPORT SunMiscUnsafe *SunMiscUnsafe_THE_ONE_;
J2OBJC_STATIC_FIELD_GETTER(SunMiscUnsafe, THE_ONE_, SunMiscUnsafe *)

FOUNDATION_EXPORT SunMiscUnsafe *SunMiscUnsafe_theUnsafe_;
J2OBJC_STATIC_FIELD_GETTER(SunMiscUnsafe, theUnsafe_, SunMiscUnsafe *)

#endif // _SunMiscUnsafe_H_
