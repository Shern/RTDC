//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/channels/GatheringByteChannel.java
//

#ifndef _JavaNioChannelsGatheringByteChannel_H_
#define _JavaNioChannelsGatheringByteChannel_H_

@class IOSObjectArray;

#import "JreEmulation.h"
#include "java/nio/channels/WritableByteChannel.h"

@protocol JavaNioChannelsGatheringByteChannel < JavaNioChannelsWritableByteChannel, NSObject, JavaObject >
- (jlong)writeWithJavaNioByteBufferArray:(IOSObjectArray *)buffers;

- (jlong)writeWithJavaNioByteBufferArray:(IOSObjectArray *)buffers
                                 withInt:(jint)offset
                                 withInt:(jint)length;

@end

__attribute__((always_inline)) inline void JavaNioChannelsGatheringByteChannel_init() {}

#endif // _JavaNioChannelsGatheringByteChannel_H_