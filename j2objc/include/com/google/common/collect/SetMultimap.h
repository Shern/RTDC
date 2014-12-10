//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-0.9.5/j2objc/guava/sources/com/google/common/collect/SetMultimap.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonCollectSetMultimap_RESTRICT
#define ComGoogleCommonCollectSetMultimap_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectSetMultimap_RESTRICT
#if !defined (_ComGoogleCommonCollectSetMultimap_) && (ComGoogleCommonCollectSetMultimap_INCLUDE_ALL || ComGoogleCommonCollectSetMultimap_INCLUDE)
#define _ComGoogleCommonCollectSetMultimap_

@protocol JavaLangIterable;
@protocol JavaUtilMap;
@protocol JavaUtilSet;

#define ComGoogleCommonCollectMultimap_RESTRICT 1
#define ComGoogleCommonCollectMultimap_INCLUDE 1
#include "com/google/common/collect/Multimap.h"


@protocol ComGoogleCommonCollectSetMultimap < ComGoogleCommonCollectMultimap, NSObject, JavaObject >
- (id<JavaUtilSet>)getWithId:(id)key;

- (id<JavaUtilSet>)removeAllWithId:(id)key;

- (id<JavaUtilSet>)replaceValuesWithId:(id)key
                  withJavaLangIterable:(id<JavaLangIterable>)values;

- (id<JavaUtilSet>)entries;

- (id<JavaUtilMap>)asMap;

- (jboolean)isEqual:(id)obj;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectSetMultimap_init() {}
#endif
