//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/PlainDatagramSocketImpl.java
//

#ifndef _JavaNetPlainDatagramSocketImpl_H_
#define _JavaNetPlainDatagramSocketImpl_H_

@class DalvikSystemCloseGuard;
@class JavaIoFileDescriptor;
@class JavaNetDatagramPacket;
@class JavaNetInetAddress;
@class JavaNetNetworkInterface;
@class JavaNetSocketAddress;
@class LibcoreIoStructGroupReq;

#import "JreEmulation.h"
#include "java/net/DatagramSocketImpl.h"

@interface JavaNetPlainDatagramSocketImpl : JavaNetDatagramSocketImpl {
}

- (instancetype)initWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd
                                     withInt:(jint)localPort;

- (instancetype)init;

- (void)bindWithInt:(jint)port
withJavaNetInetAddress:(JavaNetInetAddress *)address;

- (void)close;

- (void)create;

- (void)dealloc;

- (id)getOptionWithInt:(jint)option;

- (jint)getTimeToLive;

- (jbyte)getTTL;

- (void)joinWithJavaNetInetAddress:(JavaNetInetAddress *)addr;

- (void)joinGroupWithJavaNetSocketAddress:(JavaNetSocketAddress *)addr
              withJavaNetNetworkInterface:(JavaNetNetworkInterface *)netInterface;

- (void)leaveWithJavaNetInetAddress:(JavaNetInetAddress *)addr;

- (void)leaveGroupWithJavaNetSocketAddress:(JavaNetSocketAddress *)addr
               withJavaNetNetworkInterface:(JavaNetNetworkInterface *)netInterface;

- (jint)peekWithJavaNetInetAddress:(JavaNetInetAddress *)sender;

- (void)receiveWithJavaNetDatagramPacket:(JavaNetDatagramPacket *)pack;

- (jint)peekDataWithJavaNetDatagramPacket:(JavaNetDatagramPacket *)pack;

- (void)sendWithJavaNetDatagramPacket:(JavaNetDatagramPacket *)packet;

- (void)setOptionWithInt:(jint)option
                  withId:(id)value;

- (void)setTimeToLiveWithInt:(jint)ttl;

- (void)setTTLWithByte:(jbyte)ttl;

- (void)connectWithJavaNetInetAddress:(JavaNetInetAddress *)inetAddr
                              withInt:(jint)port;

- (void)disconnect;

@end

__attribute__((always_inline)) inline void JavaNetPlainDatagramSocketImpl_init() {}

#endif // _JavaNetPlainDatagramSocketImpl_H_