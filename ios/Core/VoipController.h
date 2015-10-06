//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nicolasmenard/IdeaProjects/RTDC/core/src/main/java/rtdc/core/impl/VoipController.java
//

#ifndef _VoipController_H_
#define _VoipController_H_

#include "J2ObjC_header.h"

@class ModelUser;

@protocol ImplVoipController < NSObject, JavaObject >

- (void)registerUserWithModelUser:(ModelUser *)user;

- (void)unregisterCurrentUser;

- (void)callWithModelUser:(ModelUser *)user
              withBoolean:(jboolean)videoEnabled;

- (void)acceptCall;

- (void)declineCall;

- (void)setMicMutedWithBoolean:(jboolean)mute;

- (void)setSpeakerWithBoolean:(jboolean)enabled;

- (void)setVideoWithBoolean:(jboolean)enabled;

- (void)setRemoteVideoWithBoolean:(jboolean)enabled;

- (jboolean)isMicMuted;

- (jboolean)isSpeakerEnabled;

- (jboolean)isVideoEnabled;

- (jboolean)isReceivingRemoteVideo;

- (void)hangup;

@end

J2OBJC_EMPTY_STATIC_INIT(ImplVoipController)

J2OBJC_TYPE_LITERAL_HEADER(ImplVoipController)

#define RtdcCoreImplVoipController ImplVoipController

#endif // _VoipController_H_
