//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-0.9.5/j2objc/guava/sources/com/google/common/collect/Queues.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonCollectQueues_RESTRICT
#define ComGoogleCommonCollectQueues_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectQueues_RESTRICT
#if !defined (_ComGoogleCommonCollectQueues_) && (ComGoogleCommonCollectQueues_INCLUDE_ALL || ComGoogleCommonCollectQueues_INCLUDE)
#define _ComGoogleCommonCollectQueues_

@class JavaUtilArrayDeque;
@class JavaUtilConcurrentArrayBlockingQueue;
@class JavaUtilConcurrentConcurrentLinkedQueue;
@class JavaUtilConcurrentLinkedBlockingDeque;
@class JavaUtilConcurrentLinkedBlockingQueue;
@class JavaUtilConcurrentPriorityBlockingQueue;
@class JavaUtilConcurrentSynchronousQueue;
@class JavaUtilConcurrentTimeUnitEnum;
@class JavaUtilPriorityQueue;
@protocol JavaLangIterable;
@protocol JavaUtilCollection;
@protocol JavaUtilConcurrentBlockingQueue;
@protocol JavaUtilQueue;


@interface ComGoogleCommonCollectQueues : NSObject {
}

+ (JavaUtilConcurrentArrayBlockingQueue *)newArrayBlockingQueueWithInt:(jint)capacity OBJC_METHOD_FAMILY_NONE;

+ (JavaUtilArrayDeque *)newArrayDeque OBJC_METHOD_FAMILY_NONE;

+ (JavaUtilArrayDeque *)newArrayDequeWithJavaLangIterable:(id<JavaLangIterable>)elements OBJC_METHOD_FAMILY_NONE;

+ (JavaUtilConcurrentConcurrentLinkedQueue *)newConcurrentLinkedQueue OBJC_METHOD_FAMILY_NONE;

+ (JavaUtilConcurrentConcurrentLinkedQueue *)newConcurrentLinkedQueueWithJavaLangIterable:(id<JavaLangIterable>)elements OBJC_METHOD_FAMILY_NONE;

+ (JavaUtilConcurrentLinkedBlockingDeque *)newLinkedBlockingDeque OBJC_METHOD_FAMILY_NONE;

+ (JavaUtilConcurrentLinkedBlockingDeque *)newLinkedBlockingDequeWithInt:(jint)capacity OBJC_METHOD_FAMILY_NONE;

+ (JavaUtilConcurrentLinkedBlockingDeque *)newLinkedBlockingDequeWithJavaLangIterable:(id<JavaLangIterable>)elements OBJC_METHOD_FAMILY_NONE;

+ (JavaUtilConcurrentLinkedBlockingQueue *)newLinkedBlockingQueue OBJC_METHOD_FAMILY_NONE;

+ (JavaUtilConcurrentLinkedBlockingQueue *)newLinkedBlockingQueueWithInt:(jint)capacity OBJC_METHOD_FAMILY_NONE;

+ (JavaUtilConcurrentLinkedBlockingQueue *)newLinkedBlockingQueueWithJavaLangIterable:(id<JavaLangIterable>)elements OBJC_METHOD_FAMILY_NONE;

+ (JavaUtilConcurrentPriorityBlockingQueue *)newPriorityBlockingQueue OBJC_METHOD_FAMILY_NONE;

+ (JavaUtilConcurrentPriorityBlockingQueue *)newPriorityBlockingQueueWithJavaLangIterable:(id<JavaLangIterable>)elements OBJC_METHOD_FAMILY_NONE;

+ (JavaUtilPriorityQueue *)newPriorityQueue OBJC_METHOD_FAMILY_NONE;

+ (JavaUtilPriorityQueue *)newPriorityQueueWithJavaLangIterable:(id<JavaLangIterable>)elements OBJC_METHOD_FAMILY_NONE;

+ (JavaUtilConcurrentSynchronousQueue *)newSynchronousQueue OBJC_METHOD_FAMILY_NONE;

+ (jint)drainWithJavaUtilConcurrentBlockingQueue:(id<JavaUtilConcurrentBlockingQueue>)q
                          withJavaUtilCollection:(id<JavaUtilCollection>)buffer
                                         withInt:(jint)numElements
                                        withLong:(jlong)timeout
              withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

+ (jint)drainUninterruptiblyWithJavaUtilConcurrentBlockingQueue:(id<JavaUtilConcurrentBlockingQueue>)q
                                         withJavaUtilCollection:(id<JavaUtilCollection>)buffer
                                                        withInt:(jint)numElements
                                                       withLong:(jlong)timeout
                             withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

+ (id<JavaUtilQueue>)synchronizedQueueWithJavaUtilQueue:(id<JavaUtilQueue>)queue;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectQueues_init() {}
FOUNDATION_EXPORT JavaUtilConcurrentArrayBlockingQueue *ComGoogleCommonCollectQueues_newArrayBlockingQueueWithInt_(jint capacity);
FOUNDATION_EXPORT JavaUtilArrayDeque *ComGoogleCommonCollectQueues_newArrayDeque();
FOUNDATION_EXPORT JavaUtilArrayDeque *ComGoogleCommonCollectQueues_newArrayDequeWithJavaLangIterable_(id<JavaLangIterable> elements);
FOUNDATION_EXPORT JavaUtilConcurrentConcurrentLinkedQueue *ComGoogleCommonCollectQueues_newConcurrentLinkedQueue();
FOUNDATION_EXPORT JavaUtilConcurrentConcurrentLinkedQueue *ComGoogleCommonCollectQueues_newConcurrentLinkedQueueWithJavaLangIterable_(id<JavaLangIterable> elements);
FOUNDATION_EXPORT JavaUtilConcurrentLinkedBlockingDeque *ComGoogleCommonCollectQueues_newLinkedBlockingDeque();
FOUNDATION_EXPORT JavaUtilConcurrentLinkedBlockingDeque *ComGoogleCommonCollectQueues_newLinkedBlockingDequeWithInt_(jint capacity);
FOUNDATION_EXPORT JavaUtilConcurrentLinkedBlockingDeque *ComGoogleCommonCollectQueues_newLinkedBlockingDequeWithJavaLangIterable_(id<JavaLangIterable> elements);
FOUNDATION_EXPORT JavaUtilConcurrentLinkedBlockingQueue *ComGoogleCommonCollectQueues_newLinkedBlockingQueue();
FOUNDATION_EXPORT JavaUtilConcurrentLinkedBlockingQueue *ComGoogleCommonCollectQueues_newLinkedBlockingQueueWithInt_(jint capacity);
FOUNDATION_EXPORT JavaUtilConcurrentLinkedBlockingQueue *ComGoogleCommonCollectQueues_newLinkedBlockingQueueWithJavaLangIterable_(id<JavaLangIterable> elements);
FOUNDATION_EXPORT JavaUtilConcurrentPriorityBlockingQueue *ComGoogleCommonCollectQueues_newPriorityBlockingQueue();
FOUNDATION_EXPORT JavaUtilConcurrentPriorityBlockingQueue *ComGoogleCommonCollectQueues_newPriorityBlockingQueueWithJavaLangIterable_(id<JavaLangIterable> elements);
FOUNDATION_EXPORT JavaUtilPriorityQueue *ComGoogleCommonCollectQueues_newPriorityQueue();
FOUNDATION_EXPORT JavaUtilPriorityQueue *ComGoogleCommonCollectQueues_newPriorityQueueWithJavaLangIterable_(id<JavaLangIterable> elements);
FOUNDATION_EXPORT JavaUtilConcurrentSynchronousQueue *ComGoogleCommonCollectQueues_newSynchronousQueue();
FOUNDATION_EXPORT jint ComGoogleCommonCollectQueues_drainWithJavaUtilConcurrentBlockingQueue_withJavaUtilCollection_withInt_withLong_withJavaUtilConcurrentTimeUnitEnum_(id<JavaUtilConcurrentBlockingQueue> q, id<JavaUtilCollection> buffer, jint numElements, jlong timeout, JavaUtilConcurrentTimeUnitEnum *unit);
FOUNDATION_EXPORT jint ComGoogleCommonCollectQueues_drainUninterruptiblyWithJavaUtilConcurrentBlockingQueue_withJavaUtilCollection_withInt_withLong_withJavaUtilConcurrentTimeUnitEnum_(id<JavaUtilConcurrentBlockingQueue> q, id<JavaUtilCollection> buffer, jint numElements, jlong timeout, JavaUtilConcurrentTimeUnitEnum *unit);
FOUNDATION_EXPORT id<JavaUtilQueue> ComGoogleCommonCollectQueues_synchronizedQueueWithJavaUtilQueue_(id<JavaUtilQueue> queue);
#endif
