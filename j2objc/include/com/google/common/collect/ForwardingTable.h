//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-0.9.5/j2objc/guava/sources/com/google/common/collect/ForwardingTable.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonCollectForwardingTable_RESTRICT
#define ComGoogleCommonCollectForwardingTable_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectForwardingTable_RESTRICT
#if !defined (_ComGoogleCommonCollectForwardingTable_) && (ComGoogleCommonCollectForwardingTable_INCLUDE_ALL || ComGoogleCommonCollectForwardingTable_INCLUDE)
#define _ComGoogleCommonCollectForwardingTable_

@protocol JavaUtilCollection;
@protocol JavaUtilMap;
@protocol JavaUtilSet;

#define ComGoogleCommonCollectForwardingObject_RESTRICT 1
#define ComGoogleCommonCollectForwardingObject_INCLUDE 1
#include "com/google/common/collect/ForwardingObject.h"

#define ComGoogleCommonCollectTable_RESTRICT 1
#define ComGoogleCommonCollectTable_INCLUDE 1
#include "com/google/common/collect/Table.h"


@interface ComGoogleCommonCollectForwardingTable : ComGoogleCommonCollectForwardingObject < ComGoogleCommonCollectTable > {
}

- (instancetype)init;

- (id<ComGoogleCommonCollectTable>)delegate;

- (id<JavaUtilSet>)cellSet;

- (void)clear;

- (id<JavaUtilMap>)columnWithId:(id)columnKey;

- (id<JavaUtilSet>)columnKeySet;

- (id<JavaUtilMap>)columnMap;

- (jboolean)containsWithId:(id)rowKey
                    withId:(id)columnKey;

- (jboolean)containsColumnWithId:(id)columnKey;

- (jboolean)containsRowWithId:(id)rowKey;

- (jboolean)containsValueWithId:(id)value;

- (id)getWithId:(id)rowKey
         withId:(id)columnKey;

- (jboolean)isEmpty;

- (id)putWithId:(id)rowKey
         withId:(id)columnKey
         withId:(id)value;

- (void)putAllWithComGoogleCommonCollectTable:(id<ComGoogleCommonCollectTable>)table;

- (id)removeWithId:(id)rowKey
            withId:(id)columnKey;

- (id<JavaUtilMap>)rowWithId:(id)rowKey;

- (id<JavaUtilSet>)rowKeySet;

- (id<JavaUtilMap>)rowMap;

- (jint)size;

- (id<JavaUtilCollection>)values;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectForwardingTable_init() {}
#endif
