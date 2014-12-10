//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-0.9.5/j2objc/guava/sources/com/google/common/collect/NaturalOrdering.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonCollectNaturalOrdering_RESTRICT
#define ComGoogleCommonCollectNaturalOrdering_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectNaturalOrdering_RESTRICT
#if !defined (_ComGoogleCommonCollectNaturalOrdering_) && (ComGoogleCommonCollectNaturalOrdering_INCLUDE_ALL || ComGoogleCommonCollectNaturalOrdering_INCLUDE)
#define _ComGoogleCommonCollectNaturalOrdering_

@protocol JavaLangComparable;
@protocol JavaLangIterable;
@protocol JavaUtilList;

#define ComGoogleCommonCollectOrdering_RESTRICT 1
#define ComGoogleCommonCollectOrdering_INCLUDE 1
#include "com/google/common/collect/Ordering.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"


#define ComGoogleCommonCollectNaturalOrdering_serialVersionUID 0LL

@interface ComGoogleCommonCollectNaturalOrdering : ComGoogleCommonCollectOrdering < JavaIoSerializable > {
}

- (jint)compareWithId:(id<JavaLangComparable>)left
               withId:(id<JavaLangComparable>)right;

- (ComGoogleCommonCollectOrdering *)reverse;

- (jint)binarySearchWithJavaUtilList:(id<JavaUtilList>)sortedList
                              withId:(id<JavaLangComparable>)key;

- (id<JavaUtilList>)sortedCopyWithJavaLangIterable:(id<JavaLangIterable>)iterable;

- (NSString *)description;

@end

FOUNDATION_EXPORT BOOL ComGoogleCommonCollectNaturalOrdering_initialized;
J2OBJC_STATIC_INIT(ComGoogleCommonCollectNaturalOrdering)

FOUNDATION_EXPORT ComGoogleCommonCollectNaturalOrdering *ComGoogleCommonCollectNaturalOrdering_INSTANCE_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectNaturalOrdering, INSTANCE_, ComGoogleCommonCollectNaturalOrdering *)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectNaturalOrdering, serialVersionUID, jlong)
#endif
