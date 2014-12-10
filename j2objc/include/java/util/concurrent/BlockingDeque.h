//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/BlockingDeque.java
//

#ifndef _JavaUtilConcurrentBlockingDeque_H_
#define _JavaUtilConcurrentBlockingDeque_H_

@class JavaUtilConcurrentTimeUnitEnum;
@protocol JavaUtilIterator;

#import "JreEmulation.h"
#include "java/util/Deque.h"
#include "java/util/concurrent/BlockingQueue.h"

@protocol JavaUtilConcurrentBlockingDeque < JavaUtilConcurrentBlockingQueue, JavaUtilDeque, NSObject, JavaObject >
- (void)addFirstWithId:(id)e;

- (void)addLastWithId:(id)e;

- (jboolean)offerFirstWithId:(id)e;

- (jboolean)offerLastWithId:(id)e;

- (void)putFirstWithId:(id)e;

- (void)putLastWithId:(id)e;

- (jboolean)offerFirstWithId:(id)e
                    withLong:(jlong)timeout
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (jboolean)offerLastWithId:(id)e
                   withLong:(jlong)timeout
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (id)takeFirst;

- (id)takeLast;

- (id)pollFirstWithLong:(jlong)timeout
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (id)pollLastWithLong:(jlong)timeout
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (jboolean)removeFirstOccurrenceWithId:(id)o;

- (jboolean)removeLastOccurrenceWithId:(id)o;

- (jboolean)addWithId:(id)e;

- (jboolean)offerWithId:(id)e;

- (void)putWithId:(id)e;

- (jboolean)offerWithId:(id)e
               withLong:(jlong)timeout
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (id)remove;

- (id)poll;

- (id)take;

- (id)pollWithLong:(jlong)timeout
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (id)element;

- (id)peek;

- (jboolean)removeWithId:(id)o;

- (jboolean)containsWithId:(id)o;

- (jint)size;

- (id<JavaUtilIterator>)iterator;

- (void)pushWithId:(id)e;


@end

__attribute__((always_inline)) inline void JavaUtilConcurrentBlockingDeque_init() {}

#endif // _JavaUtilConcurrentBlockingDeque_H_
