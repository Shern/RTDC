//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-0.9.5/j2objc/guava/sources/com/google/common/eventbus/AnnotatedHandlerFinder.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonEventbusAnnotatedHandlerFinder_RESTRICT
#define ComGoogleCommonEventbusAnnotatedHandlerFinder_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonEventbusAnnotatedHandlerFinder_RESTRICT
#if !defined (_ComGoogleCommonEventbusAnnotatedHandlerFinder_) && (ComGoogleCommonEventbusAnnotatedHandlerFinder_INCLUDE_ALL || ComGoogleCommonEventbusAnnotatedHandlerFinder_INCLUDE)
#define _ComGoogleCommonEventbusAnnotatedHandlerFinder_

@class ComGoogleCommonCollectImmutableList;
@class ComGoogleCommonEventbusEventHandler;
@class IOSClass;
@class JavaLangReflectMethod;
@protocol ComGoogleCommonCacheLoadingCache;
@protocol ComGoogleCommonCollectMultimap;

#define ComGoogleCommonEventbusHandlerFindingStrategy_RESTRICT 1
#define ComGoogleCommonEventbusHandlerFindingStrategy_INCLUDE 1
#include "com/google/common/eventbus/HandlerFindingStrategy.h"


@interface ComGoogleCommonEventbusAnnotatedHandlerFinder : NSObject < ComGoogleCommonEventbusHandlerFindingStrategy > {
}

- (id<ComGoogleCommonCollectMultimap>)findAllHandlersWithId:(id)listener;

- (instancetype)init;

@end

FOUNDATION_EXPORT BOOL ComGoogleCommonEventbusAnnotatedHandlerFinder_initialized;
J2OBJC_STATIC_INIT(ComGoogleCommonEventbusAnnotatedHandlerFinder)

FOUNDATION_EXPORT id<ComGoogleCommonCacheLoadingCache> ComGoogleCommonEventbusAnnotatedHandlerFinder_handlerMethodsCache_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonEventbusAnnotatedHandlerFinder, handlerMethodsCache_, id<ComGoogleCommonCacheLoadingCache>)
#endif
#if !defined (_ComGoogleCommonEventbusAnnotatedHandlerFinder_$1_) && (ComGoogleCommonEventbusAnnotatedHandlerFinder_INCLUDE_ALL || ComGoogleCommonEventbusAnnotatedHandlerFinder_$1_INCLUDE)
#define _ComGoogleCommonEventbusAnnotatedHandlerFinder_$1_

@class ComGoogleCommonCollectImmutableList;
@class IOSClass;

#define ComGoogleCommonCacheCacheLoader_RESTRICT 1
#define ComGoogleCommonCacheCacheLoader_INCLUDE 1
#include "com/google/common/cache/CacheLoader.h"


@interface ComGoogleCommonEventbusAnnotatedHandlerFinder_$1 : ComGoogleCommonCacheCacheLoader {
}

- (ComGoogleCommonCollectImmutableList *)load__WithId:(IOSClass *)concreteClass;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void ComGoogleCommonEventbusAnnotatedHandlerFinder_$1_init() {}
#endif
