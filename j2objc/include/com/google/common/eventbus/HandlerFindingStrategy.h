//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-0.9.5/j2objc/guava/sources/com/google/common/eventbus/HandlerFindingStrategy.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonEventbusHandlerFindingStrategy_RESTRICT
#define ComGoogleCommonEventbusHandlerFindingStrategy_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonEventbusHandlerFindingStrategy_RESTRICT
#if !defined (_ComGoogleCommonEventbusHandlerFindingStrategy_) && (ComGoogleCommonEventbusHandlerFindingStrategy_INCLUDE_ALL || ComGoogleCommonEventbusHandlerFindingStrategy_INCLUDE)
#define _ComGoogleCommonEventbusHandlerFindingStrategy_

@protocol ComGoogleCommonCollectMultimap;


@protocol ComGoogleCommonEventbusHandlerFindingStrategy < NSObject, JavaObject >

- (id<ComGoogleCommonCollectMultimap>)findAllHandlersWithId:(id)source;

@end

__attribute__((always_inline)) inline void ComGoogleCommonEventbusHandlerFindingStrategy_init() {}
#endif
