//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-0.9.5/j2objc/guava/sources/com/google/common/collect/UnmodifiableListIterator.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonCollectUnmodifiableListIterator_RESTRICT
#define ComGoogleCommonCollectUnmodifiableListIterator_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectUnmodifiableListIterator_RESTRICT
#if !defined (_ComGoogleCommonCollectUnmodifiableListIterator_) && (ComGoogleCommonCollectUnmodifiableListIterator_INCLUDE_ALL || ComGoogleCommonCollectUnmodifiableListIterator_INCLUDE)
#define _ComGoogleCommonCollectUnmodifiableListIterator_

#define ComGoogleCommonCollectUnmodifiableIterator_RESTRICT 1
#define ComGoogleCommonCollectUnmodifiableIterator_INCLUDE 1
#include "com/google/common/collect/UnmodifiableIterator.h"

#define JavaUtilListIterator_RESTRICT 1
#define JavaUtilListIterator_INCLUDE 1
#include "java/util/ListIterator.h"


@interface ComGoogleCommonCollectUnmodifiableListIterator : ComGoogleCommonCollectUnmodifiableIterator < JavaUtilListIterator > {
}

- (instancetype)init;

- (void)addWithId:(id)e;

- (void)setWithId:(id)e;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectUnmodifiableListIterator_init() {}
#endif
