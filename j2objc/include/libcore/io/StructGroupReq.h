//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/libcore/io/StructGroupReq.java
//

#ifndef _LibcoreIoStructGroupReq_H_
#define _LibcoreIoStructGroupReq_H_

@class JavaNetInetAddress;

#import "JreEmulation.h"

@interface LibcoreIoStructGroupReq : NSObject {
 @public
  jint gr_interface_;
  JavaNetInetAddress *gr_group_;
}

- (instancetype)initWithInt:(jint)gr_interface
     withJavaNetInetAddress:(JavaNetInetAddress *)gr_group;

- (NSString *)description;

@end

__attribute__((always_inline)) inline void LibcoreIoStructGroupReq_init() {}

J2OBJC_FIELD_SETTER(LibcoreIoStructGroupReq, gr_group_, JavaNetInetAddress *)

#endif // _LibcoreIoStructGroupReq_H_
