//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/frameworks/base/core/java/android/os/SystemClock.java
//

#ifndef _AndroidOsSystemClock_H_
#define _AndroidOsSystemClock_H_

#import "JreEmulation.h"

@interface AndroidOsSystemClock : NSObject {
}

+ (void)sleepWithLong:(jlong)ms;

+ (jboolean)setCurrentTimeMillisWithLong:(jlong)millis;

+ (jlong)uptimeMillis;

+ (jlong)elapsedRealtime;

+ (jlong)elapsedRealtimeNanos;

+ (jlong)currentTimeMicro;

@end

__attribute__((always_inline)) inline void AndroidOsSystemClock_init() {}
FOUNDATION_EXPORT void AndroidOsSystemClock_sleepWithLong_(jlong ms);
FOUNDATION_EXPORT jboolean AndroidOsSystemClock_setCurrentTimeMillisWithLong_(jlong millis);
FOUNDATION_EXPORT jlong AndroidOsSystemClock_uptimeMillis();
FOUNDATION_EXPORT jlong AndroidOsSystemClock_elapsedRealtime();
FOUNDATION_EXPORT jlong AndroidOsSystemClock_elapsedRealtimeNanos();
FOUNDATION_EXPORT jlong AndroidOsSystemClock_currentTimeMicro();

FOUNDATION_EXPORT NSString *AndroidOsSystemClock_TAG_;
J2OBJC_STATIC_FIELD_GETTER(AndroidOsSystemClock, TAG_, NSString *)

#endif // _AndroidOsSystemClock_H_