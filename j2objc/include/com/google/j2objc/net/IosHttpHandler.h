//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: Classes/com/google/j2objc/net/IosHttpHandler.java
//

#ifndef _ComGoogleJ2objcNetIosHttpHandler_H_
#define _ComGoogleJ2objcNetIosHttpHandler_H_

@class JavaNetURL;
@class JavaNetURLConnection;

#import "JreEmulation.h"
#include "java/net/URLStreamHandler.h"

@interface ComGoogleJ2objcNetIosHttpHandler : JavaNetURLStreamHandler {
}

- (JavaNetURLConnection *)openConnectionWithJavaNetURL:(JavaNetURL *)url;

- (jint)getDefaultPort;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void ComGoogleJ2objcNetIosHttpHandler_init() {}

#endif // _ComGoogleJ2objcNetIosHttpHandler_H_