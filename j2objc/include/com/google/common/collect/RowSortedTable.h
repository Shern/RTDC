//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-0.9.5/j2objc/guava/sources/com/google/common/collect/RowSortedTable.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonCollectRowSortedTable_RESTRICT
#define ComGoogleCommonCollectRowSortedTable_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectRowSortedTable_RESTRICT
#if !defined (_ComGoogleCommonCollectRowSortedTable_) && (ComGoogleCommonCollectRowSortedTable_INCLUDE_ALL || ComGoogleCommonCollectRowSortedTable_INCLUDE)
#define _ComGoogleCommonCollectRowSortedTable_

@protocol JavaUtilSortedMap;
@protocol JavaUtilSortedSet;

#define ComGoogleCommonCollectTable_RESTRICT 1
#define ComGoogleCommonCollectTable_INCLUDE 1
#include "com/google/common/collect/Table.h"


@protocol ComGoogleCommonCollectRowSortedTable < ComGoogleCommonCollectTable, NSObject, JavaObject >
- (id<JavaUtilSortedSet>)rowKeySet;

- (id<JavaUtilSortedMap>)rowMap;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectRowSortedTable_init() {}
#endif
