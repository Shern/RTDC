//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-0.9.5/j2objc/guava/sources/com/google/common/collect/Iterators.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonCollectIterators_RESTRICT
#define ComGoogleCommonCollectIterators_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectIterators_RESTRICT
#if !defined (_ComGoogleCommonCollectIterators_) && (ComGoogleCommonCollectIterators_INCLUDE_ALL || ComGoogleCommonCollectIterators_INCLUDE)
#define _ComGoogleCommonCollectIterators_

@class ComGoogleCommonBaseOptional;
@class ComGoogleCommonCollectUnmodifiableIterator;
@class ComGoogleCommonCollectUnmodifiableListIterator;
@class IOSClass;
@class IOSObjectArray;
@protocol ComGoogleCommonBaseFunction;
@protocol ComGoogleCommonBasePredicate;
@protocol ComGoogleCommonCollectPeekingIterator;
@protocol JavaLangIterable;
@protocol JavaUtilCollection;
@protocol JavaUtilComparator;
@protocol JavaUtilEnumeration;
@protocol JavaUtilIterator;
@protocol JavaUtilListIterator;


@interface ComGoogleCommonCollectIterators : NSObject {
}

+ (ComGoogleCommonCollectUnmodifiableIterator *)emptyIterator;

+ (ComGoogleCommonCollectUnmodifiableListIterator *)emptyListIterator;

+ (id<JavaUtilIterator>)emptyModifiableIterator;

+ (ComGoogleCommonCollectUnmodifiableIterator *)unmodifiableIteratorWithJavaUtilIterator:(id<JavaUtilIterator>)iterator;

+ (ComGoogleCommonCollectUnmodifiableIterator *)unmodifiableIteratorWithComGoogleCommonCollectUnmodifiableIterator:(ComGoogleCommonCollectUnmodifiableIterator *)iterator;

+ (jint)sizeWithJavaUtilIterator:(id<JavaUtilIterator>)iterator;

+ (jboolean)containsWithJavaUtilIterator:(id<JavaUtilIterator>)iterator
                                  withId:(id)element;

+ (jboolean)removeAllWithJavaUtilIterator:(id<JavaUtilIterator>)removeFrom
                   withJavaUtilCollection:(id<JavaUtilCollection>)elementsToRemove;

+ (jboolean)removeIfWithJavaUtilIterator:(id<JavaUtilIterator>)removeFrom
        withComGoogleCommonBasePredicate:(id<ComGoogleCommonBasePredicate>)predicate;

+ (jboolean)retainAllWithJavaUtilIterator:(id<JavaUtilIterator>)removeFrom
                   withJavaUtilCollection:(id<JavaUtilCollection>)elementsToRetain;

+ (jboolean)elementsEqualWithJavaUtilIterator:(id<JavaUtilIterator>)iterator1
                         withJavaUtilIterator:(id<JavaUtilIterator>)iterator2;

+ (NSString *)toStringWithJavaUtilIterator:(id<JavaUtilIterator>)iterator;

+ (id)getOnlyElementWithJavaUtilIterator:(id<JavaUtilIterator>)iterator;

+ (id)getOnlyElementWithJavaUtilIterator:(id<JavaUtilIterator>)iterator
                                  withId:(id)defaultValue;

+ (IOSObjectArray *)toArrayWithJavaUtilIterator:(id<JavaUtilIterator>)iterator
                                   withIOSClass:(IOSClass *)type;

+ (jboolean)addAllWithJavaUtilCollection:(id<JavaUtilCollection>)addTo
                    withJavaUtilIterator:(id<JavaUtilIterator>)iterator;

+ (jint)frequencyWithJavaUtilIterator:(id<JavaUtilIterator>)iterator
                               withId:(id)element;

+ (id<JavaUtilIterator>)cycleWithJavaLangIterable:(id<JavaLangIterable>)iterable;

+ (id<JavaUtilIterator>)cycleWithNSObjectArray:(IOSObjectArray *)elements;

+ (id<JavaUtilIterator>)concatWithJavaUtilIterator:(id<JavaUtilIterator>)a
                              withJavaUtilIterator:(id<JavaUtilIterator>)b;

+ (id<JavaUtilIterator>)concatWithJavaUtilIterator:(id<JavaUtilIterator>)a
                              withJavaUtilIterator:(id<JavaUtilIterator>)b
                              withJavaUtilIterator:(id<JavaUtilIterator>)c;

+ (id<JavaUtilIterator>)concatWithJavaUtilIterator:(id<JavaUtilIterator>)a
                              withJavaUtilIterator:(id<JavaUtilIterator>)b
                              withJavaUtilIterator:(id<JavaUtilIterator>)c
                              withJavaUtilIterator:(id<JavaUtilIterator>)d;

+ (id<JavaUtilIterator>)concatWithJavaUtilIteratorArray:(IOSObjectArray *)inputs;

+ (id<JavaUtilIterator>)concatWithJavaUtilIterator:(id<JavaUtilIterator>)inputs;

+ (ComGoogleCommonCollectUnmodifiableIterator *)partitionWithJavaUtilIterator:(id<JavaUtilIterator>)iterator
                                                                      withInt:(jint)size;

+ (ComGoogleCommonCollectUnmodifiableIterator *)paddedPartitionWithJavaUtilIterator:(id<JavaUtilIterator>)iterator
                                                                            withInt:(jint)size;

+ (ComGoogleCommonCollectUnmodifiableIterator *)filterWithJavaUtilIterator:(id<JavaUtilIterator>)unfiltered
                                          withComGoogleCommonBasePredicate:(id<ComGoogleCommonBasePredicate>)predicate;

+ (ComGoogleCommonCollectUnmodifiableIterator *)filterWithJavaUtilIterator:(id<JavaUtilIterator>)unfiltered
                                                              withIOSClass:(IOSClass *)type;

+ (jboolean)anyWithJavaUtilIterator:(id<JavaUtilIterator>)iterator
   withComGoogleCommonBasePredicate:(id<ComGoogleCommonBasePredicate>)predicate;

+ (jboolean)allWithJavaUtilIterator:(id<JavaUtilIterator>)iterator
   withComGoogleCommonBasePredicate:(id<ComGoogleCommonBasePredicate>)predicate;

+ (id)findWithJavaUtilIterator:(id<JavaUtilIterator>)iterator
withComGoogleCommonBasePredicate:(id<ComGoogleCommonBasePredicate>)predicate;

+ (id)findWithJavaUtilIterator:(id<JavaUtilIterator>)iterator
withComGoogleCommonBasePredicate:(id<ComGoogleCommonBasePredicate>)predicate
                        withId:(id)defaultValue;

+ (ComGoogleCommonBaseOptional *)tryFindWithJavaUtilIterator:(id<JavaUtilIterator>)iterator
                            withComGoogleCommonBasePredicate:(id<ComGoogleCommonBasePredicate>)predicate;

+ (jint)indexOfWithJavaUtilIterator:(id<JavaUtilIterator>)iterator
   withComGoogleCommonBasePredicate:(id<ComGoogleCommonBasePredicate>)predicate;

+ (id<JavaUtilIterator>)transformWithJavaUtilIterator:(id<JavaUtilIterator>)fromIterator
                      withComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)function;

+ (id)getWithJavaUtilIterator:(id<JavaUtilIterator>)iterator
                      withInt:(jint)position;

+ (id)getWithJavaUtilIterator:(id<JavaUtilIterator>)iterator
                      withInt:(jint)position
                       withId:(id)defaultValue;

+ (id)getNextWithJavaUtilIterator:(id<JavaUtilIterator>)iterator
                           withId:(id)defaultValue;

+ (id)getLastWithJavaUtilIterator:(id<JavaUtilIterator>)iterator;

+ (id)getLastWithJavaUtilIterator:(id<JavaUtilIterator>)iterator
                           withId:(id)defaultValue;

+ (jint)advanceWithJavaUtilIterator:(id<JavaUtilIterator>)iterator
                            withInt:(jint)numberToAdvance;

+ (id<JavaUtilIterator>)limitWithJavaUtilIterator:(id<JavaUtilIterator>)iterator
                                          withInt:(jint)limitSize;

+ (id<JavaUtilIterator>)consumingIteratorWithJavaUtilIterator:(id<JavaUtilIterator>)iterator;

+ (id)pollNextWithJavaUtilIterator:(id<JavaUtilIterator>)iterator;

+ (void)clearWithJavaUtilIterator:(id<JavaUtilIterator>)iterator;

+ (ComGoogleCommonCollectUnmodifiableIterator *)forArrayWithNSObjectArray:(IOSObjectArray *)array;

+ (ComGoogleCommonCollectUnmodifiableListIterator *)forArrayWithNSObjectArray:(IOSObjectArray *)array
                                                                      withInt:(jint)offset
                                                                      withInt:(jint)length
                                                                      withInt:(jint)index;

+ (ComGoogleCommonCollectUnmodifiableIterator *)singletonIteratorWithId:(id)value;

+ (ComGoogleCommonCollectUnmodifiableIterator *)forEnumerationWithJavaUtilEnumeration:(id<JavaUtilEnumeration>)enumeration;

+ (id<JavaUtilEnumeration>)asEnumerationWithJavaUtilIterator:(id<JavaUtilIterator>)iterator;

+ (id<ComGoogleCommonCollectPeekingIterator>)peekingIteratorWithJavaUtilIterator:(id<JavaUtilIterator>)iterator;

+ (id<ComGoogleCommonCollectPeekingIterator>)peekingIteratorWithComGoogleCommonCollectPeekingIterator:(id<ComGoogleCommonCollectPeekingIterator>)iterator;

+ (ComGoogleCommonCollectUnmodifiableIterator *)mergeSortedWithJavaLangIterable:(id<JavaLangIterable>)iterators
                                                         withJavaUtilComparator:(id<JavaUtilComparator>)comparator;

+ (void)checkRemoveWithBoolean:(jboolean)canRemove;

+ (id<JavaUtilListIterator>)castWithJavaUtilIterator:(id<JavaUtilIterator>)iterator;

@end

FOUNDATION_EXPORT BOOL ComGoogleCommonCollectIterators_initialized;
J2OBJC_STATIC_INIT(ComGoogleCommonCollectIterators)
FOUNDATION_EXPORT ComGoogleCommonCollectUnmodifiableIterator *ComGoogleCommonCollectIterators_emptyIterator();
FOUNDATION_EXPORT ComGoogleCommonCollectUnmodifiableListIterator *ComGoogleCommonCollectIterators_emptyListIterator();
FOUNDATION_EXPORT id<JavaUtilIterator> ComGoogleCommonCollectIterators_emptyModifiableIterator();
FOUNDATION_EXPORT ComGoogleCommonCollectUnmodifiableIterator *ComGoogleCommonCollectIterators_unmodifiableIteratorWithJavaUtilIterator_(id<JavaUtilIterator> iterator);
FOUNDATION_EXPORT ComGoogleCommonCollectUnmodifiableIterator *ComGoogleCommonCollectIterators_unmodifiableIteratorWithComGoogleCommonCollectUnmodifiableIterator_(ComGoogleCommonCollectUnmodifiableIterator *iterator);
FOUNDATION_EXPORT jint ComGoogleCommonCollectIterators_sizeWithJavaUtilIterator_(id<JavaUtilIterator> iterator);
FOUNDATION_EXPORT jboolean ComGoogleCommonCollectIterators_containsWithJavaUtilIterator_withId_(id<JavaUtilIterator> iterator, id element);
FOUNDATION_EXPORT jboolean ComGoogleCommonCollectIterators_removeAllWithJavaUtilIterator_withJavaUtilCollection_(id<JavaUtilIterator> removeFrom, id<JavaUtilCollection> elementsToRemove);
FOUNDATION_EXPORT jboolean ComGoogleCommonCollectIterators_removeIfWithJavaUtilIterator_withComGoogleCommonBasePredicate_(id<JavaUtilIterator> removeFrom, id<ComGoogleCommonBasePredicate> predicate);
FOUNDATION_EXPORT jboolean ComGoogleCommonCollectIterators_retainAllWithJavaUtilIterator_withJavaUtilCollection_(id<JavaUtilIterator> removeFrom, id<JavaUtilCollection> elementsToRetain);
FOUNDATION_EXPORT jboolean ComGoogleCommonCollectIterators_elementsEqualWithJavaUtilIterator_withJavaUtilIterator_(id<JavaUtilIterator> iterator1, id<JavaUtilIterator> iterator2);
FOUNDATION_EXPORT NSString *ComGoogleCommonCollectIterators_toStringWithJavaUtilIterator_(id<JavaUtilIterator> iterator);
FOUNDATION_EXPORT id ComGoogleCommonCollectIterators_getOnlyElementWithJavaUtilIterator_(id<JavaUtilIterator> iterator);
FOUNDATION_EXPORT id ComGoogleCommonCollectIterators_getOnlyElementWithJavaUtilIterator_withId_(id<JavaUtilIterator> iterator, id defaultValue);
FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonCollectIterators_toArrayWithJavaUtilIterator_withIOSClass_(id<JavaUtilIterator> iterator, IOSClass *type);
FOUNDATION_EXPORT jboolean ComGoogleCommonCollectIterators_addAllWithJavaUtilCollection_withJavaUtilIterator_(id<JavaUtilCollection> addTo, id<JavaUtilIterator> iterator);
FOUNDATION_EXPORT jint ComGoogleCommonCollectIterators_frequencyWithJavaUtilIterator_withId_(id<JavaUtilIterator> iterator, id element);
FOUNDATION_EXPORT id<JavaUtilIterator> ComGoogleCommonCollectIterators_cycleWithJavaLangIterable_(id<JavaLangIterable> iterable);
FOUNDATION_EXPORT id<JavaUtilIterator> ComGoogleCommonCollectIterators_cycleWithNSObjectArray_(IOSObjectArray *elements);
FOUNDATION_EXPORT id<JavaUtilIterator> ComGoogleCommonCollectIterators_concatWithJavaUtilIterator_withJavaUtilIterator_(id<JavaUtilIterator> a, id<JavaUtilIterator> b);
FOUNDATION_EXPORT id<JavaUtilIterator> ComGoogleCommonCollectIterators_concatWithJavaUtilIterator_withJavaUtilIterator_withJavaUtilIterator_(id<JavaUtilIterator> a, id<JavaUtilIterator> b, id<JavaUtilIterator> c);
FOUNDATION_EXPORT id<JavaUtilIterator> ComGoogleCommonCollectIterators_concatWithJavaUtilIterator_withJavaUtilIterator_withJavaUtilIterator_withJavaUtilIterator_(id<JavaUtilIterator> a, id<JavaUtilIterator> b, id<JavaUtilIterator> c, id<JavaUtilIterator> d);
FOUNDATION_EXPORT id<JavaUtilIterator> ComGoogleCommonCollectIterators_concatWithJavaUtilIteratorArray_(IOSObjectArray *inputs);
FOUNDATION_EXPORT id<JavaUtilIterator> ComGoogleCommonCollectIterators_concatWithJavaUtilIterator_(id<JavaUtilIterator> inputs);
FOUNDATION_EXPORT ComGoogleCommonCollectUnmodifiableIterator *ComGoogleCommonCollectIterators_partitionWithJavaUtilIterator_withInt_(id<JavaUtilIterator> iterator, jint size);
FOUNDATION_EXPORT ComGoogleCommonCollectUnmodifiableIterator *ComGoogleCommonCollectIterators_paddedPartitionWithJavaUtilIterator_withInt_(id<JavaUtilIterator> iterator, jint size);
FOUNDATION_EXPORT ComGoogleCommonCollectUnmodifiableIterator *ComGoogleCommonCollectIterators_filterWithJavaUtilIterator_withComGoogleCommonBasePredicate_(id<JavaUtilIterator> unfiltered, id<ComGoogleCommonBasePredicate> predicate);
FOUNDATION_EXPORT ComGoogleCommonCollectUnmodifiableIterator *ComGoogleCommonCollectIterators_filterWithJavaUtilIterator_withIOSClass_(id<JavaUtilIterator> unfiltered, IOSClass *type);
FOUNDATION_EXPORT jboolean ComGoogleCommonCollectIterators_anyWithJavaUtilIterator_withComGoogleCommonBasePredicate_(id<JavaUtilIterator> iterator, id<ComGoogleCommonBasePredicate> predicate);
FOUNDATION_EXPORT jboolean ComGoogleCommonCollectIterators_allWithJavaUtilIterator_withComGoogleCommonBasePredicate_(id<JavaUtilIterator> iterator, id<ComGoogleCommonBasePredicate> predicate);
FOUNDATION_EXPORT id ComGoogleCommonCollectIterators_findWithJavaUtilIterator_withComGoogleCommonBasePredicate_(id<JavaUtilIterator> iterator, id<ComGoogleCommonBasePredicate> predicate);
FOUNDATION_EXPORT id ComGoogleCommonCollectIterators_findWithJavaUtilIterator_withComGoogleCommonBasePredicate_withId_(id<JavaUtilIterator> iterator, id<ComGoogleCommonBasePredicate> predicate, id defaultValue);
FOUNDATION_EXPORT ComGoogleCommonBaseOptional *ComGoogleCommonCollectIterators_tryFindWithJavaUtilIterator_withComGoogleCommonBasePredicate_(id<JavaUtilIterator> iterator, id<ComGoogleCommonBasePredicate> predicate);
FOUNDATION_EXPORT jint ComGoogleCommonCollectIterators_indexOfWithJavaUtilIterator_withComGoogleCommonBasePredicate_(id<JavaUtilIterator> iterator, id<ComGoogleCommonBasePredicate> predicate);
FOUNDATION_EXPORT id<JavaUtilIterator> ComGoogleCommonCollectIterators_transformWithJavaUtilIterator_withComGoogleCommonBaseFunction_(id<JavaUtilIterator> fromIterator, id<ComGoogleCommonBaseFunction> function);
FOUNDATION_EXPORT id ComGoogleCommonCollectIterators_getWithJavaUtilIterator_withInt_(id<JavaUtilIterator> iterator, jint position);
FOUNDATION_EXPORT id ComGoogleCommonCollectIterators_getWithJavaUtilIterator_withInt_withId_(id<JavaUtilIterator> iterator, jint position, id defaultValue);
FOUNDATION_EXPORT id ComGoogleCommonCollectIterators_getNextWithJavaUtilIterator_withId_(id<JavaUtilIterator> iterator, id defaultValue);
FOUNDATION_EXPORT id ComGoogleCommonCollectIterators_getLastWithJavaUtilIterator_(id<JavaUtilIterator> iterator);
FOUNDATION_EXPORT id ComGoogleCommonCollectIterators_getLastWithJavaUtilIterator_withId_(id<JavaUtilIterator> iterator, id defaultValue);
FOUNDATION_EXPORT jint ComGoogleCommonCollectIterators_advanceWithJavaUtilIterator_withInt_(id<JavaUtilIterator> iterator, jint numberToAdvance);
FOUNDATION_EXPORT id<JavaUtilIterator> ComGoogleCommonCollectIterators_limitWithJavaUtilIterator_withInt_(id<JavaUtilIterator> iterator, jint limitSize);
FOUNDATION_EXPORT id<JavaUtilIterator> ComGoogleCommonCollectIterators_consumingIteratorWithJavaUtilIterator_(id<JavaUtilIterator> iterator);
FOUNDATION_EXPORT id ComGoogleCommonCollectIterators_pollNextWithJavaUtilIterator_(id<JavaUtilIterator> iterator);
FOUNDATION_EXPORT void ComGoogleCommonCollectIterators_clearWithJavaUtilIterator_(id<JavaUtilIterator> iterator);
FOUNDATION_EXPORT ComGoogleCommonCollectUnmodifiableIterator *ComGoogleCommonCollectIterators_forArrayWithNSObjectArray_(IOSObjectArray *array);
FOUNDATION_EXPORT ComGoogleCommonCollectUnmodifiableListIterator *ComGoogleCommonCollectIterators_forArrayWithNSObjectArray_withInt_withInt_withInt_(IOSObjectArray *array, jint offset, jint length, jint index);
FOUNDATION_EXPORT ComGoogleCommonCollectUnmodifiableIterator *ComGoogleCommonCollectIterators_singletonIteratorWithId_(id value);
FOUNDATION_EXPORT ComGoogleCommonCollectUnmodifiableIterator *ComGoogleCommonCollectIterators_forEnumerationWithJavaUtilEnumeration_(id<JavaUtilEnumeration> enumeration);
FOUNDATION_EXPORT id<JavaUtilEnumeration> ComGoogleCommonCollectIterators_asEnumerationWithJavaUtilIterator_(id<JavaUtilIterator> iterator);
FOUNDATION_EXPORT id<ComGoogleCommonCollectPeekingIterator> ComGoogleCommonCollectIterators_peekingIteratorWithJavaUtilIterator_(id<JavaUtilIterator> iterator);
FOUNDATION_EXPORT id<ComGoogleCommonCollectPeekingIterator> ComGoogleCommonCollectIterators_peekingIteratorWithComGoogleCommonCollectPeekingIterator_(id<ComGoogleCommonCollectPeekingIterator> iterator);
FOUNDATION_EXPORT ComGoogleCommonCollectUnmodifiableIterator *ComGoogleCommonCollectIterators_mergeSortedWithJavaLangIterable_withJavaUtilComparator_(id<JavaLangIterable> iterators, id<JavaUtilComparator> comparator);
FOUNDATION_EXPORT void ComGoogleCommonCollectIterators_checkRemoveWithBoolean_(jboolean canRemove);
FOUNDATION_EXPORT id<JavaUtilListIterator> ComGoogleCommonCollectIterators_castWithJavaUtilIterator_(id<JavaUtilIterator> iterator);

FOUNDATION_EXPORT ComGoogleCommonCollectUnmodifiableListIterator *ComGoogleCommonCollectIterators_EMPTY_LIST_ITERATOR_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectIterators, EMPTY_LIST_ITERATOR_, ComGoogleCommonCollectUnmodifiableListIterator *)

FOUNDATION_EXPORT id<JavaUtilIterator> ComGoogleCommonCollectIterators_EMPTY_MODIFIABLE_ITERATOR_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectIterators, EMPTY_MODIFIABLE_ITERATOR_, id<JavaUtilIterator>)
#endif
#if !defined (_ComGoogleCommonCollectIterators_PeekingImpl_) && (ComGoogleCommonCollectIterators_INCLUDE_ALL || ComGoogleCommonCollectIterators_PeekingImpl_INCLUDE)
#define _ComGoogleCommonCollectIterators_PeekingImpl_

@protocol JavaUtilIterator;

#define ComGoogleCommonCollectPeekingIterator_RESTRICT 1
#define ComGoogleCommonCollectPeekingIterator_INCLUDE 1
#include "com/google/common/collect/PeekingIterator.h"


@interface ComGoogleCommonCollectIterators_PeekingImpl : NSObject < ComGoogleCommonCollectPeekingIterator > {
}

- (instancetype)initWithJavaUtilIterator:(id<JavaUtilIterator>)iterator;

- (jboolean)hasNext;

- (id)next;

- (void)remove;

- (id)peek;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectIterators_PeekingImpl_init() {}
#endif
#if !defined (_ComGoogleCommonCollectIterators_MergingIterator_) && (ComGoogleCommonCollectIterators_INCLUDE_ALL || ComGoogleCommonCollectIterators_MergingIterator_INCLUDE)
#define _ComGoogleCommonCollectIterators_MergingIterator_

@protocol JavaLangIterable;
@protocol JavaUtilComparator;
@protocol JavaUtilQueue;

#define ComGoogleCommonCollectAbstractIterator_RESTRICT 1
#define ComGoogleCommonCollectAbstractIterator_INCLUDE 1
#include "com/google/common/collect/AbstractIterator.h"


@interface ComGoogleCommonCollectIterators_MergingIterator : ComGoogleCommonCollectAbstractIterator {
 @public
  id<JavaUtilQueue> queue_;
  id<JavaUtilComparator> comparator_;
}

- (instancetype)initWithJavaLangIterable:(id<JavaLangIterable>)iterators
                  withJavaUtilComparator:(id<JavaUtilComparator>)itemComparator;

- (id)computeNext;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectIterators_MergingIterator_init() {}

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectIterators_MergingIterator, queue_, id<JavaUtilQueue>)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectIterators_MergingIterator, comparator_, id<JavaUtilComparator>)
#endif
#if !defined (_ComGoogleCommonCollectIterators_MergingIterator_$1_) && (ComGoogleCommonCollectIterators_INCLUDE_ALL || ComGoogleCommonCollectIterators_MergingIterator_$1_INCLUDE)
#define _ComGoogleCommonCollectIterators_MergingIterator_$1_

@class ComGoogleCommonCollectIterators_MergingIterator;
@protocol ComGoogleCommonCollectPeekingIterator;

#define JavaUtilComparator_RESTRICT 1
#define JavaUtilComparator_INCLUDE 1
#include "java/util/Comparator.h"


@interface ComGoogleCommonCollectIterators_MergingIterator_$1 : NSObject < JavaUtilComparator > {
}

- (jint)compareWithId:(id<ComGoogleCommonCollectPeekingIterator>)o1
               withId:(id<ComGoogleCommonCollectPeekingIterator>)o2;

- (instancetype)initWithComGoogleCommonCollectIterators_MergingIterator:(ComGoogleCommonCollectIterators_MergingIterator *)outer$;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectIterators_MergingIterator_$1_init() {}
#endif
#if !defined (_ComGoogleCommonCollectIterators_$1_) && (ComGoogleCommonCollectIterators_INCLUDE_ALL || ComGoogleCommonCollectIterators_$1_INCLUDE)
#define _ComGoogleCommonCollectIterators_$1_

#define ComGoogleCommonCollectUnmodifiableListIterator_RESTRICT 1
#define ComGoogleCommonCollectUnmodifiableListIterator_INCLUDE 1
#include "com/google/common/collect/UnmodifiableListIterator.h"


@interface ComGoogleCommonCollectIterators_$1 : ComGoogleCommonCollectUnmodifiableListIterator {
}

- (jboolean)hasNext;

- (id)next;

- (jboolean)hasPrevious;

- (id)previous;

- (jint)nextIndex;

- (jint)previousIndex;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectIterators_$1_init() {}
#endif
#if !defined (_ComGoogleCommonCollectIterators_$2_) && (ComGoogleCommonCollectIterators_INCLUDE_ALL || ComGoogleCommonCollectIterators_$2_INCLUDE)
#define _ComGoogleCommonCollectIterators_$2_

#define JavaUtilIterator_RESTRICT 1
#define JavaUtilIterator_INCLUDE 1
#include "java/util/Iterator.h"


@interface ComGoogleCommonCollectIterators_$2 : NSObject < JavaUtilIterator > {
}

- (jboolean)hasNext;

- (id)next;

- (void)remove;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectIterators_$2_init() {}
#endif
#if !defined (_ComGoogleCommonCollectIterators_$3_) && (ComGoogleCommonCollectIterators_INCLUDE_ALL || ComGoogleCommonCollectIterators_$3_INCLUDE)
#define _ComGoogleCommonCollectIterators_$3_

@protocol JavaUtilIterator;

#define ComGoogleCommonCollectUnmodifiableIterator_RESTRICT 1
#define ComGoogleCommonCollectUnmodifiableIterator_INCLUDE 1
#include "com/google/common/collect/UnmodifiableIterator.h"


@interface ComGoogleCommonCollectIterators_$3 : ComGoogleCommonCollectUnmodifiableIterator {
}

- (jboolean)hasNext;

- (id)next;

- (instancetype)initWithJavaUtilIterator:(id<JavaUtilIterator>)capture$0;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectIterators_$3_init() {}
#endif
#if !defined (_ComGoogleCommonCollectIterators_$4_) && (ComGoogleCommonCollectIterators_INCLUDE_ALL || ComGoogleCommonCollectIterators_$4_INCLUDE)
#define _ComGoogleCommonCollectIterators_$4_

@protocol JavaLangIterable;

#define JavaUtilIterator_RESTRICT 1
#define JavaUtilIterator_INCLUDE 1
#include "java/util/Iterator.h"


@interface ComGoogleCommonCollectIterators_$4 : NSObject < JavaUtilIterator > {
 @public
  id<JavaUtilIterator> iterator_;
  id<JavaUtilIterator> removeFrom_;
}

- (jboolean)hasNext;

- (id)next;

- (void)remove;

- (instancetype)initWithJavaLangIterable:(id<JavaLangIterable>)capture$0;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectIterators_$4_init() {}

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectIterators_$4, iterator_, id<JavaUtilIterator>)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectIterators_$4, removeFrom_, id<JavaUtilIterator>)
#endif
#if !defined (_ComGoogleCommonCollectIterators_$5_) && (ComGoogleCommonCollectIterators_INCLUDE_ALL || ComGoogleCommonCollectIterators_$5_INCLUDE)
#define _ComGoogleCommonCollectIterators_$5_

#define JavaUtilIterator_RESTRICT 1
#define JavaUtilIterator_INCLUDE 1
#include "java/util/Iterator.h"


@interface ComGoogleCommonCollectIterators_$5 : NSObject < JavaUtilIterator > {
 @public
  id<JavaUtilIterator> current_;
  id<JavaUtilIterator> removeFrom_;
}

- (jboolean)hasNext;

- (id)next;

- (void)remove;

- (instancetype)initWithJavaUtilIterator:(id<JavaUtilIterator>)capture$0;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectIterators_$5_init() {}

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectIterators_$5, current_, id<JavaUtilIterator>)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectIterators_$5, removeFrom_, id<JavaUtilIterator>)
#endif
#if !defined (_ComGoogleCommonCollectIterators_$6_) && (ComGoogleCommonCollectIterators_INCLUDE_ALL || ComGoogleCommonCollectIterators_$6_INCLUDE)
#define _ComGoogleCommonCollectIterators_$6_

@protocol JavaUtilIterator;
@protocol JavaUtilList;

#define ComGoogleCommonCollectUnmodifiableIterator_RESTRICT 1
#define ComGoogleCommonCollectUnmodifiableIterator_INCLUDE 1
#include "com/google/common/collect/UnmodifiableIterator.h"


@interface ComGoogleCommonCollectIterators_$6 : ComGoogleCommonCollectUnmodifiableIterator {
}

- (jboolean)hasNext;

- (id<JavaUtilList>)next;

- (instancetype)initWithJavaUtilIterator:(id<JavaUtilIterator>)capture$0
                                 withInt:(jint)capture$1
                             withBoolean:(jboolean)capture$2;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectIterators_$6_init() {}
#endif
#if !defined (_ComGoogleCommonCollectIterators_$7_) && (ComGoogleCommonCollectIterators_INCLUDE_ALL || ComGoogleCommonCollectIterators_$7_INCLUDE)
#define _ComGoogleCommonCollectIterators_$7_

@protocol ComGoogleCommonBasePredicate;
@protocol JavaUtilIterator;

#define ComGoogleCommonCollectAbstractIterator_RESTRICT 1
#define ComGoogleCommonCollectAbstractIterator_INCLUDE 1
#include "com/google/common/collect/AbstractIterator.h"


@interface ComGoogleCommonCollectIterators_$7 : ComGoogleCommonCollectAbstractIterator {
}

- (id)computeNext;

- (instancetype)initWithJavaUtilIterator:(id<JavaUtilIterator>)capture$0
        withComGoogleCommonBasePredicate:(id<ComGoogleCommonBasePredicate>)capture$1;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectIterators_$7_init() {}
#endif
#if !defined (_ComGoogleCommonCollectIterators_$8_) && (ComGoogleCommonCollectIterators_INCLUDE_ALL || ComGoogleCommonCollectIterators_$8_INCLUDE)
#define _ComGoogleCommonCollectIterators_$8_

@protocol ComGoogleCommonBaseFunction;
@protocol JavaUtilIterator;

#define ComGoogleCommonCollectTransformedIterator_RESTRICT 1
#define ComGoogleCommonCollectTransformedIterator_INCLUDE 1
#include "com/google/common/collect/TransformedIterator.h"


@interface ComGoogleCommonCollectIterators_$8 : ComGoogleCommonCollectTransformedIterator {
}

- (id)transformWithId:(id)from;

- (instancetype)initWithJavaUtilIterator:(id<JavaUtilIterator>)arg$0
         withComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)capture$0;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectIterators_$8_init() {}
#endif
#if !defined (_ComGoogleCommonCollectIterators_$9_) && (ComGoogleCommonCollectIterators_INCLUDE_ALL || ComGoogleCommonCollectIterators_$9_INCLUDE)
#define _ComGoogleCommonCollectIterators_$9_

#define JavaUtilIterator_RESTRICT 1
#define JavaUtilIterator_INCLUDE 1
#include "java/util/Iterator.h"


@interface ComGoogleCommonCollectIterators_$9 : NSObject < JavaUtilIterator > {
}

- (jboolean)hasNext;

- (id)next;

- (void)remove;

- (instancetype)initWithInt:(jint)capture$0
       withJavaUtilIterator:(id<JavaUtilIterator>)capture$1;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectIterators_$9_init() {}
#endif
#if !defined (_ComGoogleCommonCollectIterators_$10_) && (ComGoogleCommonCollectIterators_INCLUDE_ALL || ComGoogleCommonCollectIterators_$10_INCLUDE)
#define _ComGoogleCommonCollectIterators_$10_

@protocol JavaUtilIterator;

#define ComGoogleCommonCollectUnmodifiableIterator_RESTRICT 1
#define ComGoogleCommonCollectUnmodifiableIterator_INCLUDE 1
#include "com/google/common/collect/UnmodifiableIterator.h"


@interface ComGoogleCommonCollectIterators_$10 : ComGoogleCommonCollectUnmodifiableIterator {
}

- (jboolean)hasNext;

- (id)next;

- (instancetype)initWithJavaUtilIterator:(id<JavaUtilIterator>)capture$0;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectIterators_$10_init() {}
#endif
#if !defined (_ComGoogleCommonCollectIterators_$11_) && (ComGoogleCommonCollectIterators_INCLUDE_ALL || ComGoogleCommonCollectIterators_$11_INCLUDE)
#define _ComGoogleCommonCollectIterators_$11_

@class IOSObjectArray;

#define ComGoogleCommonCollectAbstractIndexedListIterator_RESTRICT 1
#define ComGoogleCommonCollectAbstractIndexedListIterator_INCLUDE 1
#include "com/google/common/collect/AbstractIndexedListIterator.h"


@interface ComGoogleCommonCollectIterators_$11 : ComGoogleCommonCollectAbstractIndexedListIterator {
}

- (id)getWithInt:(jint)index;

- (instancetype)initWithInt:(jint)arg$0
          withNSObjectArray:(IOSObjectArray *)capture$0;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectIterators_$11_init() {}
#endif
#if !defined (_ComGoogleCommonCollectIterators_$12_) && (ComGoogleCommonCollectIterators_INCLUDE_ALL || ComGoogleCommonCollectIterators_$12_INCLUDE)
#define _ComGoogleCommonCollectIterators_$12_

@class IOSObjectArray;

#define ComGoogleCommonCollectAbstractIndexedListIterator_RESTRICT 1
#define ComGoogleCommonCollectAbstractIndexedListIterator_INCLUDE 1
#include "com/google/common/collect/AbstractIndexedListIterator.h"


@interface ComGoogleCommonCollectIterators_$12 : ComGoogleCommonCollectAbstractIndexedListIterator {
}

- (id)getWithInt:(jint)index;

- (instancetype)initWithInt:(jint)arg$0
                    withInt:(jint)arg$1
          withNSObjectArray:(IOSObjectArray *)capture$0
                    withInt:(jint)capture$1;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectIterators_$12_init() {}
#endif
#if !defined (_ComGoogleCommonCollectIterators_$13_) && (ComGoogleCommonCollectIterators_INCLUDE_ALL || ComGoogleCommonCollectIterators_$13_INCLUDE)
#define _ComGoogleCommonCollectIterators_$13_

#define ComGoogleCommonCollectUnmodifiableIterator_RESTRICT 1
#define ComGoogleCommonCollectUnmodifiableIterator_INCLUDE 1
#include "com/google/common/collect/UnmodifiableIterator.h"


@interface ComGoogleCommonCollectIterators_$13 : ComGoogleCommonCollectUnmodifiableIterator {
 @public
  jboolean done_;
}

- (jboolean)hasNext;

- (id)next;

- (instancetype)initWithId:(id)capture$0;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectIterators_$13_init() {}
#endif
#if !defined (_ComGoogleCommonCollectIterators_$14_) && (ComGoogleCommonCollectIterators_INCLUDE_ALL || ComGoogleCommonCollectIterators_$14_INCLUDE)
#define _ComGoogleCommonCollectIterators_$14_

@protocol JavaUtilEnumeration;

#define ComGoogleCommonCollectUnmodifiableIterator_RESTRICT 1
#define ComGoogleCommonCollectUnmodifiableIterator_INCLUDE 1
#include "com/google/common/collect/UnmodifiableIterator.h"


@interface ComGoogleCommonCollectIterators_$14 : ComGoogleCommonCollectUnmodifiableIterator {
}

- (jboolean)hasNext;

- (id)next;

- (instancetype)initWithJavaUtilEnumeration:(id<JavaUtilEnumeration>)capture$0;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectIterators_$14_init() {}
#endif
#if !defined (_ComGoogleCommonCollectIterators_$15_) && (ComGoogleCommonCollectIterators_INCLUDE_ALL || ComGoogleCommonCollectIterators_$15_INCLUDE)
#define _ComGoogleCommonCollectIterators_$15_

@protocol JavaUtilIterator;

#define JavaUtilEnumeration_RESTRICT 1
#define JavaUtilEnumeration_INCLUDE 1
#include "java/util/Enumeration.h"


@interface ComGoogleCommonCollectIterators_$15 : NSObject < JavaUtilEnumeration > {
}

- (jboolean)hasMoreElements;

- (id)nextElement;

- (instancetype)initWithJavaUtilIterator:(id<JavaUtilIterator>)capture$0;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectIterators_$15_init() {}
#endif
