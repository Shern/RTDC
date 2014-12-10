//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/TransferQueue.java
//

#ifndef _JavaUtilConcurrentTransferQueue_H_
#define _JavaUtilConcurrentTransferQueue_H_

@class JavaUtilConcurrentTimeUnitEnum;

#import "JreEmulation.h"
#include "java/util/concurrent/BlockingQueue.h"

@protocol JavaUtilConcurrentTransferQueue < JavaUtilConcurrentBlockingQueue, NSObject, JavaObject >
- (jboolean)tryTransferWithId:(id)e;

- (void)transferWithId:(id)e;

- (jboolean)tryTransferWithId:(id)e
                     withLong:(jlong)timeout
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (jboolean)hasWaitingConsumer;

- (jint)getWaitingConsumerCount;


@end

__attribute__((always_inline)) inline void JavaUtilConcurrentTransferQueue_init() {}

#endif // _JavaUtilConcurrentTransferQueue_H_
