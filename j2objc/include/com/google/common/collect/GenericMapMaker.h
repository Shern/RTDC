//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-0.9.5/j2objc/guava/sources/com/google/common/collect/GenericMapMaker.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonCollectGenericMapMaker_RESTRICT
#define ComGoogleCommonCollectGenericMapMaker_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectGenericMapMaker_RESTRICT
#if !defined (_ComGoogleCommonCollectGenericMapMaker_) && (ComGoogleCommonCollectGenericMapMaker_INCLUDE_ALL || ComGoogleCommonCollectGenericMapMaker_INCLUDE)
#define _ComGoogleCommonCollectGenericMapMaker_

@class ComGoogleCommonBaseEquivalence;
@class ComGoogleCommonCollectMapMakerInternalMap;
@class JavaUtilConcurrentTimeUnitEnum;
@protocol ComGoogleCommonBaseFunction;
@protocol ComGoogleCommonCollectMapMaker_RemovalListener;
@protocol JavaUtilConcurrentConcurrentMap;


@interface ComGoogleCommonCollectGenericMapMaker : NSObject {
 @public
  id<ComGoogleCommonCollectMapMaker_RemovalListener> removalListener_;
}

- (instancetype)init;

- (ComGoogleCommonCollectGenericMapMaker *)keyEquivalenceWithComGoogleCommonBaseEquivalence:(ComGoogleCommonBaseEquivalence *)equivalence;

- (ComGoogleCommonCollectGenericMapMaker *)initialCapacityWithInt:(jint)initialCapacity OBJC_METHOD_FAMILY_NONE;

- (ComGoogleCommonCollectGenericMapMaker *)maximumSizeWithInt:(jint)maximumSize;

- (ComGoogleCommonCollectGenericMapMaker *)concurrencyLevelWithInt:(jint)concurrencyLevel;

- (ComGoogleCommonCollectGenericMapMaker *)weakKeys;

- (ComGoogleCommonCollectGenericMapMaker *)weakValues;

- (ComGoogleCommonCollectGenericMapMaker *)softValues;

- (ComGoogleCommonCollectGenericMapMaker *)expireAfterWriteWithLong:(jlong)duration
                                 withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (ComGoogleCommonCollectGenericMapMaker *)expireAfterAccessWithLong:(jlong)duration
                                  withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (id<ComGoogleCommonCollectMapMaker_RemovalListener>)getRemovalListener;

- (id<JavaUtilConcurrentConcurrentMap>)makeMap;

- (ComGoogleCommonCollectMapMakerInternalMap *)makeCustomMap;

- (id<JavaUtilConcurrentConcurrentMap>)makeComputingMapWithComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)computingFunction;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectGenericMapMaker_init() {}

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectGenericMapMaker, removalListener_, id<ComGoogleCommonCollectMapMaker_RemovalListener>)
#endif
#if !defined (_ComGoogleCommonCollectGenericMapMaker_NullListenerEnum_) && (ComGoogleCommonCollectGenericMapMaker_INCLUDE_ALL || ComGoogleCommonCollectGenericMapMaker_NullListenerEnum_INCLUDE)
#define _ComGoogleCommonCollectGenericMapMaker_NullListenerEnum_

@class ComGoogleCommonCollectMapMaker_RemovalNotification;

#define JavaLangEnum_RESTRICT 1
#define JavaLangEnum_INCLUDE 1
#include "java/lang/Enum.h"

#define ComGoogleCommonCollectMapMaker_RESTRICT 1
#define ComGoogleCommonCollectMapMaker_RemovalListener_INCLUDE 1
#include "com/google/common/collect/MapMaker.h"


typedef NS_ENUM(NSUInteger, ComGoogleCommonCollectGenericMapMaker_NullListener) {
  ComGoogleCommonCollectGenericMapMaker_NullListener_INSTANCE = 0,
};

@interface ComGoogleCommonCollectGenericMapMaker_NullListenerEnum : JavaLangEnum < NSCopying, ComGoogleCommonCollectMapMaker_RemovalListener > {
}

- (void)onRemovalWithComGoogleCommonCollectMapMaker_RemovalNotification:(ComGoogleCommonCollectMapMaker_RemovalNotification *)notification;

- (instancetype)initWithNSString:(NSString *)__name
                         withInt:(jint)__ordinal;

+ (IOSObjectArray *)values;
FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonCollectGenericMapMaker_NullListenerEnum_values();

+ (ComGoogleCommonCollectGenericMapMaker_NullListenerEnum *)valueOfWithNSString:(NSString *)name;

FOUNDATION_EXPORT ComGoogleCommonCollectGenericMapMaker_NullListenerEnum *ComGoogleCommonCollectGenericMapMaker_NullListenerEnum_valueOfWithNSString_(NSString *name);- (id)copyWithZone:(NSZone *)zone;

@end

FOUNDATION_EXPORT BOOL ComGoogleCommonCollectGenericMapMaker_NullListenerEnum_initialized;
J2OBJC_STATIC_INIT(ComGoogleCommonCollectGenericMapMaker_NullListenerEnum)

FOUNDATION_EXPORT ComGoogleCommonCollectGenericMapMaker_NullListenerEnum *ComGoogleCommonCollectGenericMapMaker_NullListenerEnum_values_[];

#define ComGoogleCommonCollectGenericMapMaker_NullListenerEnum_INSTANCE ComGoogleCommonCollectGenericMapMaker_NullListenerEnum_values_[ComGoogleCommonCollectGenericMapMaker_NullListener_INSTANCE]
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectGenericMapMaker_NullListenerEnum, INSTANCE, ComGoogleCommonCollectGenericMapMaker_NullListenerEnum *)
#endif
