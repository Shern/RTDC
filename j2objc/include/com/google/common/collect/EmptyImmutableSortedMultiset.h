//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-0.9.5/j2objc/guava/sources/com/google/common/collect/EmptyImmutableSortedMultiset.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonCollectEmptyImmutableSortedMultiset_RESTRICT
#define ComGoogleCommonCollectEmptyImmutableSortedMultiset_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectEmptyImmutableSortedMultiset_RESTRICT
#if !defined (_ComGoogleCommonCollectEmptyImmutableSortedMultiset_) && (ComGoogleCommonCollectEmptyImmutableSortedMultiset_INCLUDE_ALL || ComGoogleCommonCollectEmptyImmutableSortedMultiset_INCLUDE)
#define _ComGoogleCommonCollectEmptyImmutableSortedMultiset_

@class ComGoogleCommonCollectBoundTypeEnum;
@class ComGoogleCommonCollectImmutableList;
@class ComGoogleCommonCollectImmutableSet;
@class ComGoogleCommonCollectImmutableSortedSet;
@class ComGoogleCommonCollectUnmodifiableIterator;
@class IOSObjectArray;
@protocol ComGoogleCommonCollectMultiset_Entry;
@protocol JavaUtilCollection;
@protocol JavaUtilComparator;

#define ComGoogleCommonCollectImmutableSortedMultiset_RESTRICT 1
#define ComGoogleCommonCollectImmutableSortedMultiset_INCLUDE 1
#include "com/google/common/collect/ImmutableSortedMultiset.h"


@interface ComGoogleCommonCollectEmptyImmutableSortedMultiset : ComGoogleCommonCollectImmutableSortedMultiset {
}

- (instancetype)initWithJavaUtilComparator:(id<JavaUtilComparator>)comparator;

- (id<ComGoogleCommonCollectMultiset_Entry>)firstEntry;

- (id<ComGoogleCommonCollectMultiset_Entry>)lastEntry;

- (jint)countWithId:(id)element;

- (jboolean)containsWithId:(id)object;

- (jboolean)containsAllWithJavaUtilCollection:(id<JavaUtilCollection>)targets;

- (jint)size;

- (ComGoogleCommonCollectImmutableSortedSet *)elementSet;

- (ComGoogleCommonCollectImmutableSet *)entrySet;

- (ComGoogleCommonCollectImmutableSet *)createEntrySet;

- (ComGoogleCommonCollectImmutableSortedMultiset *)headMultisetWithId:(id)upperBound
                              withComGoogleCommonCollectBoundTypeEnum:(ComGoogleCommonCollectBoundTypeEnum *)boundType;

- (ComGoogleCommonCollectImmutableSortedMultiset *)tailMultisetWithId:(id)lowerBound
                              withComGoogleCommonCollectBoundTypeEnum:(ComGoogleCommonCollectBoundTypeEnum *)boundType;

- (ComGoogleCommonCollectUnmodifiableIterator *)iterator;

- (jboolean)isEqual:(id)object;

- (NSUInteger)hash;

- (NSString *)description;

- (jboolean)isPartialView;

- (IOSObjectArray *)toArray;

- (IOSObjectArray *)toArrayWithNSObjectArray:(IOSObjectArray *)other;

- (ComGoogleCommonCollectImmutableList *)asList;


@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectEmptyImmutableSortedMultiset_init() {}
#endif
