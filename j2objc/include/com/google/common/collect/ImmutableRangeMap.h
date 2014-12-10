//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-0.9.5/j2objc/guava/sources/com/google/common/collect/ImmutableRangeMap.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonCollectImmutableRangeMap_RESTRICT
#define ComGoogleCommonCollectImmutableRangeMap_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectImmutableRangeMap_RESTRICT
#if ComGoogleCommonCollectImmutableRangeMap_$2_INCLUDE
#define ComGoogleCommonCollectImmutableRangeMap_INCLUDE 1
#endif
#if !defined (_ComGoogleCommonCollectImmutableRangeMap_Builder_) && (ComGoogleCommonCollectImmutableRangeMap_INCLUDE_ALL || ComGoogleCommonCollectImmutableRangeMap_Builder_INCLUDE)
#define _ComGoogleCommonCollectImmutableRangeMap_Builder_

@class ComGoogleCommonCollectImmutableRangeMap;
@class ComGoogleCommonCollectRange;
@protocol ComGoogleCommonCollectRangeMap;
@protocol ComGoogleCommonCollectRangeSet;


@interface ComGoogleCommonCollectImmutableRangeMap_Builder : NSObject {
}

- (instancetype)init;

- (ComGoogleCommonCollectImmutableRangeMap_Builder *)putWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)range
                                                                                 withId:(id)value;

- (ComGoogleCommonCollectImmutableRangeMap_Builder *)putAllWithComGoogleCommonCollectRangeMap:(id<ComGoogleCommonCollectRangeMap>)rangeMap;

- (ComGoogleCommonCollectImmutableRangeMap *)build;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectImmutableRangeMap_Builder_init() {}
#endif
#if !defined (_ComGoogleCommonCollectImmutableRangeMap_$1_) && (ComGoogleCommonCollectImmutableRangeMap_INCLUDE_ALL || ComGoogleCommonCollectImmutableRangeMap_$1_INCLUDE)
#define _ComGoogleCommonCollectImmutableRangeMap_$1_

@class ComGoogleCommonCollectImmutableRangeMap;
@class ComGoogleCommonCollectRange;

#define ComGoogleCommonCollectImmutableList_RESTRICT 1
#define ComGoogleCommonCollectImmutableList_INCLUDE 1
#include "com/google/common/collect/ImmutableList.h"


@interface ComGoogleCommonCollectImmutableRangeMap_$1 : ComGoogleCommonCollectImmutableList {
}

- (jint)size;

- (ComGoogleCommonCollectRange *)getWithInt:(jint)index;

- (jboolean)isPartialView;

- (instancetype)initWithComGoogleCommonCollectImmutableRangeMap:(ComGoogleCommonCollectImmutableRangeMap *)outer$
                                                        withInt:(jint)capture$0
                                                        withInt:(jint)capture$1
                                withComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)capture$2;


@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectImmutableRangeMap_$1_init() {}
#endif
#if !defined (_ComGoogleCommonCollectImmutableRangeMap_) && (ComGoogleCommonCollectImmutableRangeMap_INCLUDE_ALL || ComGoogleCommonCollectImmutableRangeMap_INCLUDE)
#define _ComGoogleCommonCollectImmutableRangeMap_

@class ComGoogleCommonCollectImmutableList;
@class ComGoogleCommonCollectImmutableMap;
@class ComGoogleCommonCollectImmutableRangeMap_Builder;
@class ComGoogleCommonCollectRange;
@protocol JavaLangComparable;
@protocol JavaUtilMap_Entry;

#define ComGoogleCommonCollectRangeMap_RESTRICT 1
#define ComGoogleCommonCollectRangeMap_INCLUDE 1
#include "com/google/common/collect/RangeMap.h"


@interface ComGoogleCommonCollectImmutableRangeMap : NSObject < ComGoogleCommonCollectRangeMap > {
}

+ (ComGoogleCommonCollectImmutableRangeMap *)of;

+ (ComGoogleCommonCollectImmutableRangeMap *)ofWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)range
                                                                        withId:(id)value;

+ (ComGoogleCommonCollectImmutableRangeMap *)copyOfWithComGoogleCommonCollectRangeMap:(id<ComGoogleCommonCollectRangeMap>)rangeMap OBJC_METHOD_FAMILY_NONE;

+ (ComGoogleCommonCollectImmutableRangeMap_Builder *)builder;

- (instancetype)initWithComGoogleCommonCollectImmutableList:(ComGoogleCommonCollectImmutableList *)ranges
                    withComGoogleCommonCollectImmutableList:(ComGoogleCommonCollectImmutableList *)values;

- (id)getWithJavaLangComparable:(id<JavaLangComparable>)key;

- (id<JavaUtilMap_Entry>)getEntryWithJavaLangComparable:(id<JavaLangComparable>)key;

- (ComGoogleCommonCollectRange *)span;

- (void)putWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)range
                                    withId:(id)value;

- (void)putAllWithComGoogleCommonCollectRangeMap:(id<ComGoogleCommonCollectRangeMap>)rangeMap;

- (void)clear;

- (void)removeWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)range;

- (ComGoogleCommonCollectImmutableMap *)asMapOfRanges;

- (ComGoogleCommonCollectImmutableRangeMap *)subRangeMapWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)range;

- (NSUInteger)hash;

- (jboolean)isEqual:(id)o;

- (NSString *)description;

@end

FOUNDATION_EXPORT BOOL ComGoogleCommonCollectImmutableRangeMap_initialized;
J2OBJC_STATIC_INIT(ComGoogleCommonCollectImmutableRangeMap)
FOUNDATION_EXPORT ComGoogleCommonCollectImmutableRangeMap *ComGoogleCommonCollectImmutableRangeMap_of();
FOUNDATION_EXPORT ComGoogleCommonCollectImmutableRangeMap *ComGoogleCommonCollectImmutableRangeMap_ofWithComGoogleCommonCollectRange_withId_(ComGoogleCommonCollectRange *range, id value);
FOUNDATION_EXPORT ComGoogleCommonCollectImmutableRangeMap *ComGoogleCommonCollectImmutableRangeMap_copyOfWithComGoogleCommonCollectRangeMap_(id<ComGoogleCommonCollectRangeMap> rangeMap);
FOUNDATION_EXPORT ComGoogleCommonCollectImmutableRangeMap_Builder *ComGoogleCommonCollectImmutableRangeMap_builder();

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableRangeMap *ComGoogleCommonCollectImmutableRangeMap_EMPTY_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectImmutableRangeMap, EMPTY_, ComGoogleCommonCollectImmutableRangeMap *)
#endif
#if !defined (_ComGoogleCommonCollectImmutableRangeMap_$2_) && (ComGoogleCommonCollectImmutableRangeMap_INCLUDE_ALL || ComGoogleCommonCollectImmutableRangeMap_$2_INCLUDE)
#define _ComGoogleCommonCollectImmutableRangeMap_$2_

@class ComGoogleCommonCollectImmutableList;
@class ComGoogleCommonCollectRange;


@interface ComGoogleCommonCollectImmutableRangeMap_$2 : ComGoogleCommonCollectImmutableRangeMap {
}

- (ComGoogleCommonCollectImmutableRangeMap *)subRangeMapWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)subRange;

- (instancetype)initWithComGoogleCommonCollectImmutableList:(ComGoogleCommonCollectImmutableList *)arg$0
                    withComGoogleCommonCollectImmutableList:(ComGoogleCommonCollectImmutableList *)arg$1
                            withComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)capture$0
                withComGoogleCommonCollectImmutableRangeMap:(ComGoogleCommonCollectImmutableRangeMap *)capture$1;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectImmutableRangeMap_$2_init() {}
#endif
