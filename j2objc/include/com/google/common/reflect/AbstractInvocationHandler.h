//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-0.9.5/j2objc/guava/sources/com/google/common/reflect/AbstractInvocationHandler.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonReflectAbstractInvocationHandler_RESTRICT
#define ComGoogleCommonReflectAbstractInvocationHandler_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonReflectAbstractInvocationHandler_RESTRICT
#if !defined (_ComGoogleCommonReflectAbstractInvocationHandler_) && (ComGoogleCommonReflectAbstractInvocationHandler_INCLUDE_ALL || ComGoogleCommonReflectAbstractInvocationHandler_INCLUDE)
#define _ComGoogleCommonReflectAbstractInvocationHandler_

@class IOSObjectArray;
@class JavaLangReflectMethod;

#define JavaLangReflectInvocationHandler_RESTRICT 1
#define JavaLangReflectInvocationHandler_INCLUDE 1
#include "java/lang/reflect/InvocationHandler.h"


@interface ComGoogleCommonReflectAbstractInvocationHandler : NSObject < JavaLangReflectInvocationHandler > {
}

- (id)invokeWithId:(id)proxy
withJavaLangReflectMethod:(JavaLangReflectMethod *)method
 withNSObjectArray:(IOSObjectArray *)args;

- (id)handleInvocationWithId:(id)proxy
   withJavaLangReflectMethod:(JavaLangReflectMethod *)method
           withNSObjectArray:(IOSObjectArray *)args;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

- (NSString *)description;

- (instancetype)init;

@end

FOUNDATION_EXPORT BOOL ComGoogleCommonReflectAbstractInvocationHandler_initialized;
J2OBJC_STATIC_INIT(ComGoogleCommonReflectAbstractInvocationHandler)

FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonReflectAbstractInvocationHandler_NO_ARGS_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonReflectAbstractInvocationHandler, NO_ARGS_, IOSObjectArray *)
#endif
