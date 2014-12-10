//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-0.9.5/j2objc/guava/sources/com/google/common/collect/EmptyContiguousSet.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonCollectEmptyContiguousSet_RESTRICT
#define ComGoogleCommonCollectEmptyContiguousSet_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectEmptyContiguousSet_RESTRICT
#if !defined (_ComGoogleCommonCollectEmptyContiguousSet_) && (ComGoogleCommonCollectEmptyContiguousSet_INCLUDE_ALL || ComGoogleCommonCollectEmptyContiguousSet_INCLUDE)
#define _ComGoogleCommonCollectEmptyContiguousSet_

@class ComGoogleCommonCollectBoundTypeEnum;
@class ComGoogleCommonCollectDiscreteDomain;
@class ComGoogleCommonCollectImmutableList;
@class ComGoogleCommonCollectImmutableSortedSet;
@class ComGoogleCommonCollectRange;
@class ComGoogleCommonCollectUnmodifiableIterator;
@protocol JavaLangComparable;

#define ComGoogleCommonCollectContiguousSet_RESTRICT 1
#define ComGoogleCommonCollectContiguousSet_INCLUDE 1
#include "com/google/common/collect/ContiguousSet.h"


@interface ComGoogleCommonCollectEmptyContiguousSet : ComGoogleCommonCollectContiguousSet {
}

- (instancetype)initWithComGoogleCommonCollectDiscreteDomain:(ComGoogleCommonCollectDiscreteDomain *)domain;

- (id)first;

- (id)last;

- (jint)size;

- (ComGoogleCommonCollectContiguousSet *)intersectionWithComGoogleCommonCollectContiguousSet:(ComGoogleCommonCollectContiguousSet *)other;

- (ComGoogleCommonCollectRange *)range;

- (ComGoogleCommonCollectRange *)rangeWithComGoogleCommonCollectBoundTypeEnum:(ComGoogleCommonCollectBoundTypeEnum *)lowerBoundType
                                      withComGoogleCommonCollectBoundTypeEnum:(ComGoogleCommonCollectBoundTypeEnum *)upperBoundType;

- (ComGoogleCommonCollectContiguousSet *)headSetImplWithId:(id<JavaLangComparable>)toElement
                                               withBoolean:(jboolean)inclusive;

- (ComGoogleCommonCollectContiguousSet *)subSetImplWithId:(id<JavaLangComparable>)fromElement
                                              withBoolean:(jboolean)fromInclusive
                                                   withId:(id<JavaLangComparable>)toElement
                                              withBoolean:(jboolean)toInclusive;

- (ComGoogleCommonCollectContiguousSet *)tailSetImplWithId:(id<JavaLangComparable>)fromElement
                                               withBoolean:(jboolean)fromInclusive;

- (jint)indexOfWithId:(id)target;

- (ComGoogleCommonCollectUnmodifiableIterator *)iterator;

- (ComGoogleCommonCollectUnmodifiableIterator *)descendingIterator;

- (jboolean)isPartialView;

- (jboolean)isEmpty;

- (ComGoogleCommonCollectImmutableList *)asList;

- (NSString *)description;

- (jboolean)isEqual:(id)object;

- (NSUInteger)hash;

- (id)writeReplace;

- (ComGoogleCommonCollectImmutableSortedSet *)createDescendingSet;


@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectEmptyContiguousSet_init() {}
#endif
#if !defined (_ComGoogleCommonCollectEmptyContiguousSet_SerializedForm_) && (ComGoogleCommonCollectEmptyContiguousSet_INCLUDE_ALL || ComGoogleCommonCollectEmptyContiguousSet_SerializedForm_INCLUDE)
#define _ComGoogleCommonCollectEmptyContiguousSet_SerializedForm_

@class ComGoogleCommonCollectDiscreteDomain;

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"


#define ComGoogleCommonCollectEmptyContiguousSet_SerializedForm_serialVersionUID 0LL

@interface ComGoogleCommonCollectEmptyContiguousSet_SerializedForm : NSObject < JavaIoSerializable > {
}

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectEmptyContiguousSet_SerializedForm_init() {}

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectEmptyContiguousSet_SerializedForm, serialVersionUID, jlong)
#endif
