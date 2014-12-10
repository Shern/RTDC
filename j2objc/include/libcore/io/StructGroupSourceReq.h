//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/libcore/io/StructGroupSourceReq.java
//

#ifndef _LibcoreIoStructGroupSourceReq_H_
#define _LibcoreIoStructGroupSourceReq_H_

@class JavaNetInetAddress;

#import "JreEmulation.h"

@interface LibcoreIoStructGroupSourceReq : NSObject {
 @public
  jint gsr_interface_;
  JavaNetInetAddress *gsr_group_;
  JavaNetInetAddress *gsr_source_;
}

- (instancetype)initWithInt:(jint)gsr_interface
     withJavaNetInetAddress:(JavaNetInetAddress *)gsr_group
     withJavaNetInetAddress:(JavaNetInetAddress *)gsr_source;

- (NSString *)description;

@end

__attribute__((always_inline)) inline void LibcoreIoStructGroupSourceReq_init() {}

J2OBJC_FIELD_SETTER(LibcoreIoStructGroupSourceReq, gsr_group_, JavaNetInetAddress *)
J2OBJC_FIELD_SETTER(LibcoreIoStructGroupSourceReq, gsr_source_, JavaNetInetAddress *)

#endif // _LibcoreIoStructGroupSourceReq_H_
