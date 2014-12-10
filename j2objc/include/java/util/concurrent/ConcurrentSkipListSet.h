//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/ConcurrentSkipListSet.java
//

#ifndef _JavaUtilConcurrentConcurrentSkipListSet_H_
#define _JavaUtilConcurrentConcurrentSkipListSet_H_

@class SunMiscUnsafe;
@protocol JavaUtilCollection;
@protocol JavaUtilComparator;
@protocol JavaUtilConcurrentConcurrentNavigableMap;
@protocol JavaUtilIterator;
@protocol JavaUtilSortedSet;

#import "JreEmulation.h"
#include "java/io/Serializable.h"
#include "java/util/AbstractSet.h"
#include "java/util/NavigableSet.h"

#define JavaUtilConcurrentConcurrentSkipListSet_serialVersionUID -2479143111061671589LL

@interface JavaUtilConcurrentConcurrentSkipListSet : JavaUtilAbstractSet < JavaUtilNavigableSet, NSCopying, JavaIoSerializable > {
}

- (instancetype)init;

- (instancetype)initWithJavaUtilComparator:(id<JavaUtilComparator>)comparator;

- (instancetype)initWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (instancetype)initWithJavaUtilSortedSet:(id<JavaUtilSortedSet>)s;

- (instancetype)initWithJavaUtilConcurrentConcurrentNavigableMap:(id<JavaUtilConcurrentConcurrentNavigableMap>)m;

- (JavaUtilConcurrentConcurrentSkipListSet *)clone;

- (jint)size;

- (jboolean)isEmpty;

- (jboolean)containsWithId:(id)o;

- (jboolean)addWithId:(id)e;

- (jboolean)removeWithId:(id)o;

- (void)clear;

- (id<JavaUtilIterator>)iterator;

- (id<JavaUtilIterator>)descendingIterator;

- (jboolean)isEqual:(id)o;

- (jboolean)removeAllWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (id)lowerWithId:(id)e;

- (id)floorWithId:(id)e;

- (id)ceilingWithId:(id)e;

- (id)higherWithId:(id)e;

- (id)pollFirst;

- (id)pollLast;

- (id<JavaUtilComparator>)comparator;

- (id)first;

- (id)last;

- (id<JavaUtilNavigableSet>)subSetWithId:(id)fromElement
                             withBoolean:(jboolean)fromInclusive
                                  withId:(id)toElement
                             withBoolean:(jboolean)toInclusive;

- (id<JavaUtilNavigableSet>)headSetWithId:(id)toElement
                              withBoolean:(jboolean)inclusive;

- (id<JavaUtilNavigableSet>)tailSetWithId:(id)fromElement
                              withBoolean:(jboolean)inclusive;

- (id<JavaUtilNavigableSet>)subSetWithId:(id)fromElement
                                  withId:(id)toElement;

- (id<JavaUtilNavigableSet>)headSetWithId:(id)toElement;

- (id<JavaUtilNavigableSet>)tailSetWithId:(id)fromElement;

- (id<JavaUtilNavigableSet>)descendingSet;


@end

FOUNDATION_EXPORT BOOL JavaUtilConcurrentConcurrentSkipListSet_initialized;
J2OBJC_STATIC_INIT(JavaUtilConcurrentConcurrentSkipListSet)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentConcurrentSkipListSet, serialVersionUID, jlong)

FOUNDATION_EXPORT SunMiscUnsafe *JavaUtilConcurrentConcurrentSkipListSet_UNSAFE_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentConcurrentSkipListSet, UNSAFE_, SunMiscUnsafe *)

FOUNDATION_EXPORT jlong JavaUtilConcurrentConcurrentSkipListSet_mapOffset_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentConcurrentSkipListSet, mapOffset_, jlong)

#endif // _JavaUtilConcurrentConcurrentSkipListSet_H_
