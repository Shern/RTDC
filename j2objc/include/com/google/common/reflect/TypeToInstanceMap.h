//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-0.9.5/j2objc/guava/sources/com/google/common/reflect/TypeToInstanceMap.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonReflectTypeToInstanceMap_RESTRICT
#define ComGoogleCommonReflectTypeToInstanceMap_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonReflectTypeToInstanceMap_RESTRICT
#if !defined (_ComGoogleCommonReflectTypeToInstanceMap_) && (ComGoogleCommonReflectTypeToInstanceMap_INCLUDE_ALL || ComGoogleCommonReflectTypeToInstanceMap_INCLUDE)
#define _ComGoogleCommonReflectTypeToInstanceMap_

@class ComGoogleCommonReflectTypeToken;
@class IOSClass;

#define JavaUtilMap_RESTRICT 1
#define JavaUtilMap_INCLUDE 1
#include "java/util/Map.h"


@protocol ComGoogleCommonReflectTypeToInstanceMap < JavaUtilMap, NSObject, JavaObject >
- (id)getInstanceWithIOSClass:(IOSClass *)type;

- (id)putInstanceWithIOSClass:(IOSClass *)type
                       withId:(id)value;

- (id)getInstanceWithComGoogleCommonReflectTypeToken:(ComGoogleCommonReflectTypeToken *)type;

- (id)putInstanceWithComGoogleCommonReflectTypeToken:(ComGoogleCommonReflectTypeToken *)type
                                              withId:(id)value;

@end

__attribute__((always_inline)) inline void ComGoogleCommonReflectTypeToInstanceMap_init() {}
#endif
