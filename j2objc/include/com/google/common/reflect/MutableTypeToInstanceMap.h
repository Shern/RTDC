//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-0.9.5/j2objc/guava/sources/com/google/common/reflect/MutableTypeToInstanceMap.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonReflectMutableTypeToInstanceMap_RESTRICT
#define ComGoogleCommonReflectMutableTypeToInstanceMap_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonReflectMutableTypeToInstanceMap_RESTRICT
#if !defined (_ComGoogleCommonReflectMutableTypeToInstanceMap_) && (ComGoogleCommonReflectMutableTypeToInstanceMap_INCLUDE_ALL || ComGoogleCommonReflectMutableTypeToInstanceMap_INCLUDE)
#define _ComGoogleCommonReflectMutableTypeToInstanceMap_

@class ComGoogleCommonReflectTypeToken;
@class IOSClass;
@protocol JavaUtilMap;

#define ComGoogleCommonCollectForwardingMap_RESTRICT 1
#define ComGoogleCommonCollectForwardingMap_INCLUDE 1
#include "com/google/common/collect/ForwardingMap.h"

#define ComGoogleCommonReflectTypeToInstanceMap_RESTRICT 1
#define ComGoogleCommonReflectTypeToInstanceMap_INCLUDE 1
#include "com/google/common/reflect/TypeToInstanceMap.h"


@interface ComGoogleCommonReflectMutableTypeToInstanceMap : ComGoogleCommonCollectForwardingMap < ComGoogleCommonReflectTypeToInstanceMap > {
}

- (id)getInstanceWithIOSClass:(IOSClass *)type;

- (id)putInstanceWithIOSClass:(IOSClass *)type
                       withId:(id)value;

- (id)getInstanceWithComGoogleCommonReflectTypeToken:(ComGoogleCommonReflectTypeToken *)type;

- (id)putInstanceWithComGoogleCommonReflectTypeToken:(ComGoogleCommonReflectTypeToken *)type
                                              withId:(id)value;

- (id)putWithId:(ComGoogleCommonReflectTypeToken *)key
         withId:(id)value;

- (void)putAllWithJavaUtilMap:(id<JavaUtilMap>)map;

- (id<JavaUtilMap>)delegate;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void ComGoogleCommonReflectMutableTypeToInstanceMap_init() {}
#endif
