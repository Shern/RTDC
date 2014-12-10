//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-0.9.5/j2objc/guava/sources/com/google/common/util/concurrent/AbstractExecutionThreadService.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonUtilConcurrentAbstractExecutionThreadService_RESTRICT
#define ComGoogleCommonUtilConcurrentAbstractExecutionThreadService_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonUtilConcurrentAbstractExecutionThreadService_RESTRICT
#if !defined (_ComGoogleCommonUtilConcurrentAbstractExecutionThreadService_) && (ComGoogleCommonUtilConcurrentAbstractExecutionThreadService_INCLUDE_ALL || ComGoogleCommonUtilConcurrentAbstractExecutionThreadService_INCLUDE)
#define _ComGoogleCommonUtilConcurrentAbstractExecutionThreadService_

@class ComGoogleCommonUtilConcurrentService_StateEnum;
@class JavaLangThrowable;
@class JavaUtilLoggingLogger;
@protocol ComGoogleCommonUtilConcurrentListenableFuture;
@protocol ComGoogleCommonUtilConcurrentService_Listener;
@protocol JavaUtilConcurrentExecutor;

#define ComGoogleCommonUtilConcurrentService_RESTRICT 1
#define ComGoogleCommonUtilConcurrentService_INCLUDE 1
#include "com/google/common/util/concurrent/Service.h"


@interface ComGoogleCommonUtilConcurrentAbstractExecutionThreadService : NSObject < ComGoogleCommonUtilConcurrentService > {
}

- (instancetype)init;

- (void)startUp;

- (void)run;

- (void)shutDown;

- (void)triggerShutdown;

- (id<JavaUtilConcurrentExecutor>)executor;

- (NSString *)description;

- (id<ComGoogleCommonUtilConcurrentListenableFuture>)start;

- (ComGoogleCommonUtilConcurrentService_StateEnum *)startAndWait;

- (jboolean)isRunning;

- (ComGoogleCommonUtilConcurrentService_StateEnum *)state;

- (id<ComGoogleCommonUtilConcurrentListenableFuture>)stop;

- (ComGoogleCommonUtilConcurrentService_StateEnum *)stopAndWait;

- (void)addListenerWithComGoogleCommonUtilConcurrentService_Listener:(id<ComGoogleCommonUtilConcurrentService_Listener>)listener
                                      withJavaUtilConcurrentExecutor:(id<JavaUtilConcurrentExecutor>)executor;

- (JavaLangThrowable *)failureCause;

- (NSString *)serviceName;

@end

FOUNDATION_EXPORT BOOL ComGoogleCommonUtilConcurrentAbstractExecutionThreadService_initialized;
J2OBJC_STATIC_INIT(ComGoogleCommonUtilConcurrentAbstractExecutionThreadService)

FOUNDATION_EXPORT JavaUtilLoggingLogger *ComGoogleCommonUtilConcurrentAbstractExecutionThreadService_logger_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonUtilConcurrentAbstractExecutionThreadService, logger_, JavaUtilLoggingLogger *)
#endif
#if !defined (_ComGoogleCommonUtilConcurrentAbstractExecutionThreadService_$1_) && (ComGoogleCommonUtilConcurrentAbstractExecutionThreadService_INCLUDE_ALL || ComGoogleCommonUtilConcurrentAbstractExecutionThreadService_$1_INCLUDE)
#define _ComGoogleCommonUtilConcurrentAbstractExecutionThreadService_$1_

@class ComGoogleCommonUtilConcurrentAbstractExecutionThreadService;

#define ComGoogleCommonUtilConcurrentAbstractService_RESTRICT 1
#define ComGoogleCommonUtilConcurrentAbstractService_INCLUDE 1
#include "com/google/common/util/concurrent/AbstractService.h"


@interface ComGoogleCommonUtilConcurrentAbstractExecutionThreadService_$1 : ComGoogleCommonUtilConcurrentAbstractService {
}

- (void)doStart;

- (void)doStop;

- (instancetype)initWithComGoogleCommonUtilConcurrentAbstractExecutionThreadService:(ComGoogleCommonUtilConcurrentAbstractExecutionThreadService *)outer$;

@end

__attribute__((always_inline)) inline void ComGoogleCommonUtilConcurrentAbstractExecutionThreadService_$1_init() {}
#endif
#if !defined (_ComGoogleCommonUtilConcurrentAbstractExecutionThreadService_$1_$1_) && (ComGoogleCommonUtilConcurrentAbstractExecutionThreadService_INCLUDE_ALL || ComGoogleCommonUtilConcurrentAbstractExecutionThreadService_$1_$1_INCLUDE)
#define _ComGoogleCommonUtilConcurrentAbstractExecutionThreadService_$1_$1_

@class ComGoogleCommonUtilConcurrentAbstractExecutionThreadService_$1;

#define JavaLangRunnable_RESTRICT 1
#define JavaLangRunnable_INCLUDE 1
#include "java/lang/Runnable.h"


@interface ComGoogleCommonUtilConcurrentAbstractExecutionThreadService_$1_$1 : NSObject < JavaLangRunnable > {
}

- (void)run;

- (instancetype)initWithComGoogleCommonUtilConcurrentAbstractExecutionThreadService_$1:(ComGoogleCommonUtilConcurrentAbstractExecutionThreadService_$1 *)outer$;

@end

__attribute__((always_inline)) inline void ComGoogleCommonUtilConcurrentAbstractExecutionThreadService_$1_$1_init() {}
#endif
#if !defined (_ComGoogleCommonUtilConcurrentAbstractExecutionThreadService_$2_) && (ComGoogleCommonUtilConcurrentAbstractExecutionThreadService_INCLUDE_ALL || ComGoogleCommonUtilConcurrentAbstractExecutionThreadService_$2_INCLUDE)
#define _ComGoogleCommonUtilConcurrentAbstractExecutionThreadService_$2_

@class ComGoogleCommonUtilConcurrentAbstractExecutionThreadService;
@protocol JavaLangRunnable;

#define JavaUtilConcurrentExecutor_RESTRICT 1
#define JavaUtilConcurrentExecutor_INCLUDE 1
#include "java/util/concurrent/Executor.h"


@interface ComGoogleCommonUtilConcurrentAbstractExecutionThreadService_$2 : NSObject < JavaUtilConcurrentExecutor > {
}

- (void)executeWithJavaLangRunnable:(id<JavaLangRunnable>)command;

- (instancetype)initWithComGoogleCommonUtilConcurrentAbstractExecutionThreadService:(ComGoogleCommonUtilConcurrentAbstractExecutionThreadService *)outer$;

@end

__attribute__((always_inline)) inline void ComGoogleCommonUtilConcurrentAbstractExecutionThreadService_$2_init() {}
#endif