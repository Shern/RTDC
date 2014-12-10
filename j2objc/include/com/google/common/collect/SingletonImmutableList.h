//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-0.9.5/j2objc/guava/sources/com/google/common/collect/SingletonImmutableList.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonCollectSingletonImmutableList_RESTRICT
#define ComGoogleCommonCollectSingletonImmutableList_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectSingletonImmutableList_RESTRICT
#if !defined (_ComGoogleCommonCollectSingletonImmutableList_) && (ComGoogleCommonCollectSingletonImmutableList_INCLUDE_ALL || ComGoogleCommonCollectSingletonImmutableList_INCLUDE)
#define _ComGoogleCommonCollectSingletonImmutableList_

@class ComGoogleCommonCollectUnmodifiableIterator;
@class IOSObjectArray;

#define ComGoogleCommonCollectImmutableList_RESTRICT 1
#define ComGoogleCommonCollectImmutableList_INCLUDE 1
#include "com/google/common/collect/ImmutableList.h"


@interface ComGoogleCommonCollectSingletonImmutableList : ComGoogleCommonCollectImmutableList {
 @public
  id element_;
}

- (instancetype)initWithId:(id)element;

- (id)getWithInt:(jint)index;

- (jint)indexOfWithId:(id)object;

- (ComGoogleCommonCollectUnmodifiableIterator *)iterator;

- (jint)lastIndexOfWithId:(id)object;

- (jint)size;

- (ComGoogleCommonCollectImmutableList *)subListWithInt:(jint)fromIndex
                                                withInt:(jint)toIndex;

- (ComGoogleCommonCollectImmutableList *)reverse;

- (jboolean)containsWithId:(id)object;

- (jboolean)isEqual:(id)object;

- (NSUInteger)hash;

- (NSString *)description;

- (jboolean)isEmpty;

- (jboolean)isPartialView;

- (IOSObjectArray *)toArray;

- (IOSObjectArray *)toArrayWithNSObjectArray:(IOSObjectArray *)array;


@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectSingletonImmutableList_init() {}

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectSingletonImmutableList, element_, id)
#endif
