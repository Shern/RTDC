//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-0.9.5/j2objc/guava/sources/com/google/common/util/concurrent/ListenableFuture.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonUtilConcurrentListenableFuture_RESTRICT
#define ComGoogleCommonUtilConcurrentListenableFuture_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonUtilConcurrentListenableFuture_RESTRICT
#if !defined (_ComGoogleCommonUtilConcurrentListenableFuture_) && (ComGoogleCommonUtilConcurrentListenableFuture_INCLUDE_ALL || ComGoogleCommonUtilConcurrentListenableFuture_INCLUDE)
#define _ComGoogleCommonUtilConcurrentListenableFuture_

@protocol JavaLangRunnable;
@protocol JavaUtilConcurrentExecutor;

#define JavaUtilConcurrentFuture_RESTRICT 1
#define JavaUtilConcurrentFuture_INCLUDE 1
#include "java/util/concurrent/Future.h"


@protocol ComGoogleCommonUtilConcurrentListenableFuture < JavaUtilConcurrentFuture, NSObject, JavaObject >
- (void)addListenerWithJavaLangRunnable:(id<JavaLangRunnable>)listener
         withJavaUtilConcurrentExecutor:(id<JavaUtilConcurrentExecutor>)executor;

@end

__attribute__((always_inline)) inline void ComGoogleCommonUtilConcurrentListenableFuture_init() {}
#endif
