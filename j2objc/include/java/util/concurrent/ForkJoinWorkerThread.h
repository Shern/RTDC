//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/ForkJoinWorkerThread.java
//

#ifndef _JavaUtilConcurrentForkJoinWorkerThread_H_
#define _JavaUtilConcurrentForkJoinWorkerThread_H_

@class IOSObjectArray;
@class JavaLangThrowable;
@class JavaUtilConcurrentForkJoinPool;
@class JavaUtilConcurrentForkJoinTask;
@class SunMiscUnsafe;
@protocol JavaUtilCollection;

#import "JreEmulation.h"
#include "java/lang/Thread.h"

#define JavaUtilConcurrentForkJoinWorkerThread_INITIAL_QUEUE_CAPACITY 8192
#define JavaUtilConcurrentForkJoinWorkerThread_MAXIMUM_QUEUE_CAPACITY 16777216
#define JavaUtilConcurrentForkJoinWorkerThread_MAX_HELP 16
#define JavaUtilConcurrentForkJoinWorkerThread_SMASK 65535

@interface JavaUtilConcurrentForkJoinWorkerThread : JavaLangThread {
 @public
  IOSObjectArray *queue_;
  JavaUtilConcurrentForkJoinPool *pool_;
  jint queueTop_;
  jint queueBase_;
  jint stealHint_;
  jint poolIndex_;
  jint nextWait_;
  jint eventCount_;
  jint seed_;
  jint stealCount_;
  jboolean terminate_;
  jboolean parked_;
  jboolean locallyFifo_;
  JavaUtilConcurrentForkJoinTask *currentSteal_;
  JavaUtilConcurrentForkJoinTask *currentJoin_;
}

- (instancetype)initWithJavaUtilConcurrentForkJoinPool:(JavaUtilConcurrentForkJoinPool *)pool;

- (JavaUtilConcurrentForkJoinPool *)getPool;

- (jint)getPoolIndex;

- (void)onStart;

- (void)onTerminationWithJavaLangThrowable:(JavaLangThrowable *)exception;

- (void)run;

- (void)pushTaskWithJavaUtilConcurrentForkJoinTask:(JavaUtilConcurrentForkJoinTask *)t;

- (JavaUtilConcurrentForkJoinTask *)deqTask;

- (JavaUtilConcurrentForkJoinTask *)locallyDeqTask;

- (jboolean)unpushTaskWithJavaUtilConcurrentForkJoinTask:(JavaUtilConcurrentForkJoinTask *)t;

- (JavaUtilConcurrentForkJoinTask *)peekTask;

- (void)execTaskWithJavaUtilConcurrentForkJoinTask:(JavaUtilConcurrentForkJoinTask *)t;

- (void)cancelTasks;

- (jint)drainTasksToWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (jint)getQueueSize;

- (JavaUtilConcurrentForkJoinTask *)pollLocalTask;

- (JavaUtilConcurrentForkJoinTask *)pollTask;

- (jint)joinTaskWithJavaUtilConcurrentForkJoinTask:(JavaUtilConcurrentForkJoinTask *)joinMe;

- (jint)getEstimatedSurplusTaskCount;

- (void)helpQuiescePool;

@end

FOUNDATION_EXPORT BOOL JavaUtilConcurrentForkJoinWorkerThread_initialized;
J2OBJC_STATIC_INIT(JavaUtilConcurrentForkJoinWorkerThread)

J2OBJC_FIELD_SETTER(JavaUtilConcurrentForkJoinWorkerThread, queue_, IOSObjectArray *)
J2OBJC_FIELD_SETTER(JavaUtilConcurrentForkJoinWorkerThread, pool_, JavaUtilConcurrentForkJoinPool *)
J2OBJC_FIELD_SETTER(JavaUtilConcurrentForkJoinWorkerThread, currentSteal_, JavaUtilConcurrentForkJoinTask *)
J2OBJC_FIELD_SETTER(JavaUtilConcurrentForkJoinWorkerThread, currentJoin_, JavaUtilConcurrentForkJoinTask *)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentForkJoinWorkerThread, SMASK, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentForkJoinWorkerThread, INITIAL_QUEUE_CAPACITY, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentForkJoinWorkerThread, MAXIMUM_QUEUE_CAPACITY, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentForkJoinWorkerThread, MAX_HELP, jint)

FOUNDATION_EXPORT SunMiscUnsafe *JavaUtilConcurrentForkJoinWorkerThread_UNSAFE_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentForkJoinWorkerThread, UNSAFE_, SunMiscUnsafe *)

#endif // _JavaUtilConcurrentForkJoinWorkerThread_H_
