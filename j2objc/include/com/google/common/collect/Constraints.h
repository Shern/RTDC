//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-0.9.5/j2objc/guava/sources/com/google/common/collect/Constraints.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonCollectConstraints_RESTRICT
#define ComGoogleCommonCollectConstraints_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectConstraints_RESTRICT
#if ComGoogleCommonCollectConstraints_ConstrainedRandomAccessList_INCLUDE
#define ComGoogleCommonCollectConstraints_ConstrainedList_INCLUDE 1
#endif
#if !defined (_ComGoogleCommonCollectConstraints_) && (ComGoogleCommonCollectConstraints_INCLUDE_ALL || ComGoogleCommonCollectConstraints_INCLUDE)
#define _ComGoogleCommonCollectConstraints_

@protocol ComGoogleCommonCollectConstraint;
@protocol ComGoogleCommonCollectMultiset;
@protocol JavaUtilCollection;
@protocol JavaUtilList;
@protocol JavaUtilListIterator;
@protocol JavaUtilSet;
@protocol JavaUtilSortedSet;


@interface ComGoogleCommonCollectConstraints : NSObject {
}

+ (id<ComGoogleCommonCollectConstraint>)notNull;

+ (id<JavaUtilCollection>)constrainedCollectionWithJavaUtilCollection:(id<JavaUtilCollection>)collection
                                 withComGoogleCommonCollectConstraint:(id<ComGoogleCommonCollectConstraint>)constraint;

+ (id<JavaUtilSet>)constrainedSetWithJavaUtilSet:(id<JavaUtilSet>)set
            withComGoogleCommonCollectConstraint:(id<ComGoogleCommonCollectConstraint>)constraint;

+ (id<JavaUtilSortedSet>)constrainedSortedSetWithJavaUtilSortedSet:(id<JavaUtilSortedSet>)sortedSet
                              withComGoogleCommonCollectConstraint:(id<ComGoogleCommonCollectConstraint>)constraint;

+ (id<JavaUtilList>)constrainedListWithJavaUtilList:(id<JavaUtilList>)list
               withComGoogleCommonCollectConstraint:(id<ComGoogleCommonCollectConstraint>)constraint;

+ (id<JavaUtilCollection>)constrainedTypePreservingCollectionWithJavaUtilCollection:(id<JavaUtilCollection>)collection
                                               withComGoogleCommonCollectConstraint:(id<ComGoogleCommonCollectConstraint>)constraint;

+ (id<ComGoogleCommonCollectMultiset>)constrainedMultisetWithComGoogleCommonCollectMultiset:(id<ComGoogleCommonCollectMultiset>)multiset
                                                       withComGoogleCommonCollectConstraint:(id<ComGoogleCommonCollectConstraint>)constraint;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectConstraints_init() {}
FOUNDATION_EXPORT id<ComGoogleCommonCollectConstraint> ComGoogleCommonCollectConstraints_notNull();
FOUNDATION_EXPORT id<JavaUtilCollection> ComGoogleCommonCollectConstraints_constrainedCollectionWithJavaUtilCollection_withComGoogleCommonCollectConstraint_(id<JavaUtilCollection> collection, id<ComGoogleCommonCollectConstraint> constraint);
FOUNDATION_EXPORT id<JavaUtilSet> ComGoogleCommonCollectConstraints_constrainedSetWithJavaUtilSet_withComGoogleCommonCollectConstraint_(id<JavaUtilSet> set, id<ComGoogleCommonCollectConstraint> constraint);
FOUNDATION_EXPORT id<JavaUtilSortedSet> ComGoogleCommonCollectConstraints_constrainedSortedSetWithJavaUtilSortedSet_withComGoogleCommonCollectConstraint_(id<JavaUtilSortedSet> sortedSet, id<ComGoogleCommonCollectConstraint> constraint);
FOUNDATION_EXPORT id<JavaUtilList> ComGoogleCommonCollectConstraints_constrainedListWithJavaUtilList_withComGoogleCommonCollectConstraint_(id<JavaUtilList> list, id<ComGoogleCommonCollectConstraint> constraint);
FOUNDATION_EXPORT id<JavaUtilCollection> ComGoogleCommonCollectConstraints_constrainedTypePreservingCollectionWithJavaUtilCollection_withComGoogleCommonCollectConstraint_(id<JavaUtilCollection> collection, id<ComGoogleCommonCollectConstraint> constraint);
FOUNDATION_EXPORT id<ComGoogleCommonCollectMultiset> ComGoogleCommonCollectConstraints_constrainedMultisetWithComGoogleCommonCollectMultiset_withComGoogleCommonCollectConstraint_(id<ComGoogleCommonCollectMultiset> multiset, id<ComGoogleCommonCollectConstraint> constraint);
#endif
#if !defined (_ComGoogleCommonCollectConstraints_NotNullConstraintEnum_) && (ComGoogleCommonCollectConstraints_INCLUDE_ALL || ComGoogleCommonCollectConstraints_NotNullConstraintEnum_INCLUDE)
#define _ComGoogleCommonCollectConstraints_NotNullConstraintEnum_

#define JavaLangEnum_RESTRICT 1
#define JavaLangEnum_INCLUDE 1
#include "java/lang/Enum.h"

#define ComGoogleCommonCollectConstraint_RESTRICT 1
#define ComGoogleCommonCollectConstraint_INCLUDE 1
#include "com/google/common/collect/Constraint.h"


typedef NS_ENUM(NSUInteger, ComGoogleCommonCollectConstraints_NotNullConstraint) {
  ComGoogleCommonCollectConstraints_NotNullConstraint_INSTANCE = 0,
};

@interface ComGoogleCommonCollectConstraints_NotNullConstraintEnum : JavaLangEnum < NSCopying, ComGoogleCommonCollectConstraint > {
}

- (id)checkElementWithId:(id)element;

- (NSString *)description;

+ (IOSObjectArray *)values;
FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonCollectConstraints_NotNullConstraintEnum_values();

+ (ComGoogleCommonCollectConstraints_NotNullConstraintEnum *)valueOfWithNSString:(NSString *)name;

FOUNDATION_EXPORT ComGoogleCommonCollectConstraints_NotNullConstraintEnum *ComGoogleCommonCollectConstraints_NotNullConstraintEnum_valueOfWithNSString_(NSString *name);- (id)copyWithZone:(NSZone *)zone;

@end

FOUNDATION_EXPORT BOOL ComGoogleCommonCollectConstraints_NotNullConstraintEnum_initialized;
J2OBJC_STATIC_INIT(ComGoogleCommonCollectConstraints_NotNullConstraintEnum)

FOUNDATION_EXPORT ComGoogleCommonCollectConstraints_NotNullConstraintEnum *ComGoogleCommonCollectConstraints_NotNullConstraintEnum_values_[];

#define ComGoogleCommonCollectConstraints_NotNullConstraintEnum_INSTANCE ComGoogleCommonCollectConstraints_NotNullConstraintEnum_values_[ComGoogleCommonCollectConstraints_NotNullConstraint_INSTANCE]
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectConstraints_NotNullConstraintEnum, INSTANCE, ComGoogleCommonCollectConstraints_NotNullConstraintEnum *)
#endif
#if !defined (_ComGoogleCommonCollectConstraints_ConstrainedCollection_) && (ComGoogleCommonCollectConstraints_INCLUDE_ALL || ComGoogleCommonCollectConstraints_ConstrainedCollection_INCLUDE)
#define _ComGoogleCommonCollectConstraints_ConstrainedCollection_

@protocol ComGoogleCommonCollectConstraint;
@protocol JavaUtilCollection;

#define ComGoogleCommonCollectForwardingCollection_RESTRICT 1
#define ComGoogleCommonCollectForwardingCollection_INCLUDE 1
#include "com/google/common/collect/ForwardingCollection.h"


@interface ComGoogleCommonCollectConstraints_ConstrainedCollection : ComGoogleCommonCollectForwardingCollection {
}

- (instancetype)initWithJavaUtilCollection:(id<JavaUtilCollection>)delegate
      withComGoogleCommonCollectConstraint:(id<ComGoogleCommonCollectConstraint>)constraint;

- (id<JavaUtilCollection>)delegate;

- (jboolean)addWithId:(id)element;

- (jboolean)addAllWithJavaUtilCollection:(id<JavaUtilCollection>)elements;


@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectConstraints_ConstrainedCollection_init() {}
#endif
#if !defined (_ComGoogleCommonCollectConstraints_ConstrainedSet_) && (ComGoogleCommonCollectConstraints_INCLUDE_ALL || ComGoogleCommonCollectConstraints_ConstrainedSet_INCLUDE)
#define _ComGoogleCommonCollectConstraints_ConstrainedSet_

@protocol ComGoogleCommonCollectConstraint;
@protocol JavaUtilCollection;
@protocol JavaUtilSet;

#define ComGoogleCommonCollectForwardingSet_RESTRICT 1
#define ComGoogleCommonCollectForwardingSet_INCLUDE 1
#include "com/google/common/collect/ForwardingSet.h"


@interface ComGoogleCommonCollectConstraints_ConstrainedSet : ComGoogleCommonCollectForwardingSet {
}

- (instancetype)initWithJavaUtilSet:(id<JavaUtilSet>)delegate
withComGoogleCommonCollectConstraint:(id<ComGoogleCommonCollectConstraint>)constraint;

- (id<JavaUtilSet>)delegate;

- (jboolean)addWithId:(id)element;

- (jboolean)addAllWithJavaUtilCollection:(id<JavaUtilCollection>)elements;


@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectConstraints_ConstrainedSet_init() {}
#endif
#if !defined (_ComGoogleCommonCollectConstraints_ConstrainedSortedSet_) && (ComGoogleCommonCollectConstraints_INCLUDE_ALL || ComGoogleCommonCollectConstraints_ConstrainedSortedSet_INCLUDE)
#define _ComGoogleCommonCollectConstraints_ConstrainedSortedSet_

@protocol ComGoogleCommonCollectConstraint;
@protocol JavaUtilCollection;
@protocol JavaUtilSortedSet;

#define ComGoogleCommonCollectForwardingSortedSet_RESTRICT 1
#define ComGoogleCommonCollectForwardingSortedSet_INCLUDE 1
#include "com/google/common/collect/ForwardingSortedSet.h"


@interface ComGoogleCommonCollectConstraints_ConstrainedSortedSet : ComGoogleCommonCollectForwardingSortedSet {
 @public
  id<JavaUtilSortedSet> delegate__;
  id<ComGoogleCommonCollectConstraint> constraint_;
}

- (instancetype)initWithJavaUtilSortedSet:(id<JavaUtilSortedSet>)delegate
     withComGoogleCommonCollectConstraint:(id<ComGoogleCommonCollectConstraint>)constraint;

- (id<JavaUtilSortedSet>)delegate;

- (id<JavaUtilSortedSet>)headSetWithId:(id)toElement;

- (id<JavaUtilSortedSet>)subSetWithId:(id)fromElement
                               withId:(id)toElement;

- (id<JavaUtilSortedSet>)tailSetWithId:(id)fromElement;

- (jboolean)addWithId:(id)element;

- (jboolean)addAllWithJavaUtilCollection:(id<JavaUtilCollection>)elements;


@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectConstraints_ConstrainedSortedSet_init() {}

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectConstraints_ConstrainedSortedSet, delegate__, id<JavaUtilSortedSet>)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectConstraints_ConstrainedSortedSet, constraint_, id<ComGoogleCommonCollectConstraint>)
#endif
#if !defined (_ComGoogleCommonCollectConstraints_ConstrainedList_) && (ComGoogleCommonCollectConstraints_INCLUDE_ALL || ComGoogleCommonCollectConstraints_ConstrainedList_INCLUDE)
#define _ComGoogleCommonCollectConstraints_ConstrainedList_

@protocol ComGoogleCommonCollectConstraint;
@protocol JavaUtilCollection;
@protocol JavaUtilList;
@protocol JavaUtilListIterator;

#define ComGoogleCommonCollectForwardingList_RESTRICT 1
#define ComGoogleCommonCollectForwardingList_INCLUDE 1
#include "com/google/common/collect/ForwardingList.h"


@interface ComGoogleCommonCollectConstraints_ConstrainedList : ComGoogleCommonCollectForwardingList {
 @public
  id<JavaUtilList> delegate__;
  id<ComGoogleCommonCollectConstraint> constraint_;
}

- (instancetype)initWithJavaUtilList:(id<JavaUtilList>)delegate
withComGoogleCommonCollectConstraint:(id<ComGoogleCommonCollectConstraint>)constraint;

- (id<JavaUtilList>)delegate;

- (jboolean)addWithId:(id)element;

- (void)addWithInt:(jint)index
            withId:(id)element;

- (jboolean)addAllWithJavaUtilCollection:(id<JavaUtilCollection>)elements;

- (jboolean)addAllWithInt:(jint)index
   withJavaUtilCollection:(id<JavaUtilCollection>)elements;

- (id<JavaUtilListIterator>)listIterator;

- (id<JavaUtilListIterator>)listIteratorWithInt:(jint)index;

- (id)setWithInt:(jint)index
          withId:(id)element;

- (id<JavaUtilList>)subListWithInt:(jint)fromIndex
                           withInt:(jint)toIndex;


@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectConstraints_ConstrainedList_init() {}

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectConstraints_ConstrainedList, delegate__, id<JavaUtilList>)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectConstraints_ConstrainedList, constraint_, id<ComGoogleCommonCollectConstraint>)
#endif
#if !defined (_ComGoogleCommonCollectConstraints_ConstrainedRandomAccessList_) && (ComGoogleCommonCollectConstraints_INCLUDE_ALL || ComGoogleCommonCollectConstraints_ConstrainedRandomAccessList_INCLUDE)
#define _ComGoogleCommonCollectConstraints_ConstrainedRandomAccessList_

@protocol ComGoogleCommonCollectConstraint;
@protocol JavaUtilList;

#define JavaUtilRandomAccess_RESTRICT 1
#define JavaUtilRandomAccess_INCLUDE 1
#include "java/util/RandomAccess.h"


@interface ComGoogleCommonCollectConstraints_ConstrainedRandomAccessList : ComGoogleCommonCollectConstraints_ConstrainedList < JavaUtilRandomAccess > {
}

- (instancetype)initWithJavaUtilList:(id<JavaUtilList>)delegate
withComGoogleCommonCollectConstraint:(id<ComGoogleCommonCollectConstraint>)constraint;


@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectConstraints_ConstrainedRandomAccessList_init() {}
#endif
#if !defined (_ComGoogleCommonCollectConstraints_ConstrainedListIterator_) && (ComGoogleCommonCollectConstraints_INCLUDE_ALL || ComGoogleCommonCollectConstraints_ConstrainedListIterator_INCLUDE)
#define _ComGoogleCommonCollectConstraints_ConstrainedListIterator_

@protocol ComGoogleCommonCollectConstraint;
@protocol JavaUtilListIterator;

#define ComGoogleCommonCollectForwardingListIterator_RESTRICT 1
#define ComGoogleCommonCollectForwardingListIterator_INCLUDE 1
#include "com/google/common/collect/ForwardingListIterator.h"


@interface ComGoogleCommonCollectConstraints_ConstrainedListIterator : ComGoogleCommonCollectForwardingListIterator {
}

- (instancetype)initWithJavaUtilListIterator:(id<JavaUtilListIterator>)delegate
        withComGoogleCommonCollectConstraint:(id<ComGoogleCommonCollectConstraint>)constraint;

- (id<JavaUtilListIterator>)delegate;

- (void)addWithId:(id)element;

- (void)setWithId:(id)element;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectConstraints_ConstrainedListIterator_init() {}
#endif
#if !defined (_ComGoogleCommonCollectConstraints_ConstrainedMultiset_) && (ComGoogleCommonCollectConstraints_INCLUDE_ALL || ComGoogleCommonCollectConstraints_ConstrainedMultiset_INCLUDE)
#define _ComGoogleCommonCollectConstraints_ConstrainedMultiset_

@protocol ComGoogleCommonCollectConstraint;
@protocol ComGoogleCommonCollectMultiset;
@protocol JavaUtilCollection;

#define ComGoogleCommonCollectForwardingMultiset_RESTRICT 1
#define ComGoogleCommonCollectForwardingMultiset_INCLUDE 1
#include "com/google/common/collect/ForwardingMultiset.h"


@interface ComGoogleCommonCollectConstraints_ConstrainedMultiset : ComGoogleCommonCollectForwardingMultiset {
}

- (instancetype)initWithComGoogleCommonCollectMultiset:(id<ComGoogleCommonCollectMultiset>)delegate
                  withComGoogleCommonCollectConstraint:(id<ComGoogleCommonCollectConstraint>)constraint;

- (id<ComGoogleCommonCollectMultiset>)delegate;

- (jboolean)addWithId:(id)element;

- (jboolean)addAllWithJavaUtilCollection:(id<JavaUtilCollection>)elements;

- (jint)addWithId:(id)element
          withInt:(jint)occurrences;

- (jint)setCountWithId:(id)element
               withInt:(jint)count;

- (jboolean)setCountWithId:(id)element
                   withInt:(jint)oldCount
                   withInt:(jint)newCount;


@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectConstraints_ConstrainedMultiset_init() {}
#endif
