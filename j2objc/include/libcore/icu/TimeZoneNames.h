//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/libcore/icu/TimeZoneNames.java
//

#ifndef _LibcoreIcuTimeZoneNames_H_
#define _LibcoreIcuTimeZoneNames_H_

@class IOSObjectArray;
@class JavaUtilHashMap;
@class JavaUtilLocale;
@class LibcoreIcuTimeZoneNames_ZoneStringsCache;

#import "JreEmulation.h"
#include "java/util/Comparator.h"
#include "libcore/util/BasicLruCache.h"

#define LibcoreIcuTimeZoneNames_LONG_NAME 1
#define LibcoreIcuTimeZoneNames_LONG_NAME_DST 3
#define LibcoreIcuTimeZoneNames_NAME_COUNT 5
#define LibcoreIcuTimeZoneNames_OLSON_NAME 0
#define LibcoreIcuTimeZoneNames_SHORT_NAME 2
#define LibcoreIcuTimeZoneNames_SHORT_NAME_DST 4

@interface LibcoreIcuTimeZoneNames : NSObject {
}

+ (NSString *)getDisplayNameWithNSStringArray2:(IOSObjectArray *)zoneStrings
                                  withNSString:(NSString *)id_
                                   withBoolean:(jboolean)daylight
                                       withInt:(jint)style;

+ (IOSObjectArray *)getZoneStringsWithJavaUtilLocale:(JavaUtilLocale *)locale;

@end

FOUNDATION_EXPORT BOOL LibcoreIcuTimeZoneNames_initialized;
J2OBJC_STATIC_INIT(LibcoreIcuTimeZoneNames)
FOUNDATION_EXPORT NSString *LibcoreIcuTimeZoneNames_getDisplayNameWithNSStringArray2_withNSString_withBoolean_withInt_(IOSObjectArray *zoneStrings, NSString *id_, jboolean daylight, jint style);
FOUNDATION_EXPORT IOSObjectArray *LibcoreIcuTimeZoneNames_getZoneStringsWithJavaUtilLocale_(JavaUtilLocale *locale);

FOUNDATION_EXPORT IOSObjectArray *LibcoreIcuTimeZoneNames_availableTimeZoneIds_;
J2OBJC_STATIC_FIELD_GETTER(LibcoreIcuTimeZoneNames, availableTimeZoneIds_, IOSObjectArray *)

J2OBJC_STATIC_FIELD_GETTER(LibcoreIcuTimeZoneNames, OLSON_NAME, jint)

J2OBJC_STATIC_FIELD_GETTER(LibcoreIcuTimeZoneNames, LONG_NAME, jint)

J2OBJC_STATIC_FIELD_GETTER(LibcoreIcuTimeZoneNames, SHORT_NAME, jint)

J2OBJC_STATIC_FIELD_GETTER(LibcoreIcuTimeZoneNames, LONG_NAME_DST, jint)

J2OBJC_STATIC_FIELD_GETTER(LibcoreIcuTimeZoneNames, SHORT_NAME_DST, jint)

J2OBJC_STATIC_FIELD_GETTER(LibcoreIcuTimeZoneNames, NAME_COUNT, jint)

FOUNDATION_EXPORT LibcoreIcuTimeZoneNames_ZoneStringsCache *LibcoreIcuTimeZoneNames_cachedZoneStrings_;
J2OBJC_STATIC_FIELD_GETTER(LibcoreIcuTimeZoneNames, cachedZoneStrings_, LibcoreIcuTimeZoneNames_ZoneStringsCache *)

FOUNDATION_EXPORT id<JavaUtilComparator> LibcoreIcuTimeZoneNames_ZONE_STRINGS_COMPARATOR_;
J2OBJC_STATIC_FIELD_GETTER(LibcoreIcuTimeZoneNames, ZONE_STRINGS_COMPARATOR_, id<JavaUtilComparator>)

@interface LibcoreIcuTimeZoneNames_ZoneStringsCache : LibcoreUtilBasicLruCache {
}

- (instancetype)init;

- (IOSObjectArray *)createWithId:(JavaUtilLocale *)locale;

@end

__attribute__((always_inline)) inline void LibcoreIcuTimeZoneNames_ZoneStringsCache_init() {}

@interface LibcoreIcuTimeZoneNames_$1 : NSObject < JavaUtilComparator > {
}

- (jint)compareWithId:(IOSObjectArray *)lhs
               withId:(IOSObjectArray *)rhs;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void LibcoreIcuTimeZoneNames_$1_init() {}

#endif // _LibcoreIcuTimeZoneNames_H_
