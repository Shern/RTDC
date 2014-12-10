//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-0.9.5/j2objc/guava/sources/com/google/common/collect/HashMultimap.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonCollectHashMultimap_RESTRICT
#define ComGoogleCommonCollectHashMultimap_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectHashMultimap_RESTRICT
#if !defined (_ComGoogleCommonCollectHashMultimap_) && (ComGoogleCommonCollectHashMultimap_INCLUDE_ALL || ComGoogleCommonCollectHashMultimap_INCLUDE)
#define _ComGoogleCommonCollectHashMultimap_

@class JavaIoObjectInputStream;
@class JavaIoObjectOutputStream;
@protocol ComGoogleCommonCollectMultimap;
@protocol JavaUtilSet;

#define ComGoogleCommonCollectAbstractSetMultimap_RESTRICT 1
#define ComGoogleCommonCollectAbstractSetMultimap_INCLUDE 1
#include "com/google/common/collect/AbstractSetMultimap.h"


#define ComGoogleCommonCollectHashMultimap_DEFAULT_VALUES_PER_KEY 2
#define ComGoogleCommonCollectHashMultimap_serialVersionUID 0LL

@interface ComGoogleCommonCollectHashMultimap : ComGoogleCommonCollectAbstractSetMultimap {
 @public
  jint expectedValuesPerKey_;
}

+ (ComGoogleCommonCollectHashMultimap *)create;

+ (ComGoogleCommonCollectHashMultimap *)createWithInt:(jint)expectedKeys
                                              withInt:(jint)expectedValuesPerKey;

+ (ComGoogleCommonCollectHashMultimap *)createWithComGoogleCommonCollectMultimap:(id<ComGoogleCommonCollectMultimap>)multimap;

- (id<JavaUtilSet>)createCollection;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectHashMultimap_init() {}
FOUNDATION_EXPORT ComGoogleCommonCollectHashMultimap *ComGoogleCommonCollectHashMultimap_create();
FOUNDATION_EXPORT ComGoogleCommonCollectHashMultimap *ComGoogleCommonCollectHashMultimap_createWithInt_withInt_(jint expectedKeys, jint expectedValuesPerKey);
FOUNDATION_EXPORT ComGoogleCommonCollectHashMultimap *ComGoogleCommonCollectHashMultimap_createWithComGoogleCommonCollectMultimap_(id<ComGoogleCommonCollectMultimap> multimap);

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectHashMultimap, DEFAULT_VALUES_PER_KEY, jint)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectHashMultimap, serialVersionUID, jlong)
#endif