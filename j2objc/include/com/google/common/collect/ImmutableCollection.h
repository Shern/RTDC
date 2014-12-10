//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-0.9.5/j2objc/guava/sources/com/google/common/collect/ImmutableCollection.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonCollectImmutableCollection_RESTRICT
#define ComGoogleCommonCollectImmutableCollection_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectImmutableCollection_RESTRICT
#if ComGoogleCommonCollectImmutableCollection_ArrayImmutableCollection_INCLUDE
#define ComGoogleCommonCollectImmutableCollection_INCLUDE 1
#endif
#if ComGoogleCommonCollectImmutableCollection_EmptyImmutableCollection_INCLUDE
#define ComGoogleCommonCollectImmutableCollection_INCLUDE 1
#endif
#if !defined (_ComGoogleCommonCollectImmutableCollection_) && (ComGoogleCommonCollectImmutableCollection_INCLUDE_ALL || ComGoogleCommonCollectImmutableCollection_INCLUDE)
#define _ComGoogleCommonCollectImmutableCollection_

@class ComGoogleCommonCollectImmutableList;
@class ComGoogleCommonCollectUnmodifiableIterator;
@class IOSObjectArray;

#define JavaUtilCollection_RESTRICT 1
#define JavaUtilCollection_INCLUDE 1
#include "java/util/Collection.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"


@interface ComGoogleCommonCollectImmutableCollection : NSObject < JavaUtilCollection, JavaIoSerializable > {
}

- (instancetype)init;

- (ComGoogleCommonCollectUnmodifiableIterator *)iterator;

- (IOSObjectArray *)toArray;

- (IOSObjectArray *)toArrayWithNSObjectArray:(IOSObjectArray *)other;

- (jboolean)containsWithId:(id)object;

- (jboolean)containsAllWithJavaUtilCollection:(id<JavaUtilCollection>)targets;

- (jboolean)isEmpty;

- (NSString *)description;

- (jboolean)addWithId:(id)e;

- (jboolean)removeWithId:(id)object;

- (jboolean)addAllWithJavaUtilCollection:(id<JavaUtilCollection>)newElements;

- (jboolean)removeAllWithJavaUtilCollection:(id<JavaUtilCollection>)oldElements;

- (jboolean)retainAllWithJavaUtilCollection:(id<JavaUtilCollection>)elementsToKeep;

- (void)clear;

- (ComGoogleCommonCollectImmutableList *)asList;

- (ComGoogleCommonCollectImmutableList *)createAsList;

- (jboolean)isPartialView;

- (id)writeReplace;


@end

FOUNDATION_EXPORT BOOL ComGoogleCommonCollectImmutableCollection_initialized;
J2OBJC_STATIC_INIT(ComGoogleCommonCollectImmutableCollection)

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableCollection *ComGoogleCommonCollectImmutableCollection_EMPTY_IMMUTABLE_COLLECTION_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectImmutableCollection, EMPTY_IMMUTABLE_COLLECTION_, ComGoogleCommonCollectImmutableCollection *)
#endif
#if !defined (_ComGoogleCommonCollectImmutableCollection_EmptyImmutableCollection_) && (ComGoogleCommonCollectImmutableCollection_INCLUDE_ALL || ComGoogleCommonCollectImmutableCollection_EmptyImmutableCollection_INCLUDE)
#define _ComGoogleCommonCollectImmutableCollection_EmptyImmutableCollection_

@class ComGoogleCommonCollectImmutableList;
@class ComGoogleCommonCollectUnmodifiableIterator;
@class IOSObjectArray;


@interface ComGoogleCommonCollectImmutableCollection_EmptyImmutableCollection : ComGoogleCommonCollectImmutableCollection {
}

- (jint)size;

- (jboolean)isEmpty;

- (jboolean)containsWithId:(id)object;

- (ComGoogleCommonCollectUnmodifiableIterator *)iterator;

- (IOSObjectArray *)toArray;

- (IOSObjectArray *)toArrayWithNSObjectArray:(IOSObjectArray *)array;

- (ComGoogleCommonCollectImmutableList *)createAsList;

- (jboolean)isPartialView;


@end

FOUNDATION_EXPORT BOOL ComGoogleCommonCollectImmutableCollection_EmptyImmutableCollection_initialized;
J2OBJC_STATIC_INIT(ComGoogleCommonCollectImmutableCollection_EmptyImmutableCollection)

FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonCollectImmutableCollection_EmptyImmutableCollection_EMPTY_ARRAY_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectImmutableCollection_EmptyImmutableCollection, EMPTY_ARRAY_, IOSObjectArray *)
#endif
#if !defined (_ComGoogleCommonCollectImmutableCollection_ArrayImmutableCollection_) && (ComGoogleCommonCollectImmutableCollection_INCLUDE_ALL || ComGoogleCommonCollectImmutableCollection_ArrayImmutableCollection_INCLUDE)
#define _ComGoogleCommonCollectImmutableCollection_ArrayImmutableCollection_

@class ComGoogleCommonCollectImmutableList;
@class ComGoogleCommonCollectUnmodifiableIterator;
@class IOSObjectArray;


@interface ComGoogleCommonCollectImmutableCollection_ArrayImmutableCollection : ComGoogleCommonCollectImmutableCollection {
}

- (instancetype)initWithNSObjectArray:(IOSObjectArray *)elements;

- (jint)size;

- (jboolean)isEmpty;

- (ComGoogleCommonCollectUnmodifiableIterator *)iterator;

- (ComGoogleCommonCollectImmutableList *)createAsList;

- (jboolean)isPartialView;


@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectImmutableCollection_ArrayImmutableCollection_init() {}
#endif
#if !defined (_ComGoogleCommonCollectImmutableCollection_SerializedForm_) && (ComGoogleCommonCollectImmutableCollection_INCLUDE_ALL || ComGoogleCommonCollectImmutableCollection_SerializedForm_INCLUDE)
#define _ComGoogleCommonCollectImmutableCollection_SerializedForm_

@class IOSObjectArray;

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"


#define ComGoogleCommonCollectImmutableCollection_SerializedForm_serialVersionUID 0LL

@interface ComGoogleCommonCollectImmutableCollection_SerializedForm : NSObject < JavaIoSerializable > {
 @public
  IOSObjectArray *elements_;
}

- (instancetype)initWithNSObjectArray:(IOSObjectArray *)elements;

- (id)readResolve;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectImmutableCollection_SerializedForm_init() {}

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectImmutableCollection_SerializedForm, elements_, IOSObjectArray *)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectImmutableCollection_SerializedForm, serialVersionUID, jlong)
#endif
#if !defined (_ComGoogleCommonCollectImmutableCollection_Builder_) && (ComGoogleCommonCollectImmutableCollection_INCLUDE_ALL || ComGoogleCommonCollectImmutableCollection_Builder_INCLUDE)
#define _ComGoogleCommonCollectImmutableCollection_Builder_

@class ComGoogleCommonCollectImmutableCollection;
@class IOSObjectArray;
@protocol JavaLangIterable;
@protocol JavaUtilIterator;


#define ComGoogleCommonCollectImmutableCollection_Builder_DEFAULT_INITIAL_CAPACITY 4

@interface ComGoogleCommonCollectImmutableCollection_Builder : NSObject {
}

+ (jint)expandedCapacityWithInt:(jint)oldCapacity
                        withInt:(jint)minCapacity;

- (instancetype)init;

- (ComGoogleCommonCollectImmutableCollection_Builder *)addWithId:(id)element;

- (ComGoogleCommonCollectImmutableCollection_Builder *)addWithNSObjectArray:(IOSObjectArray *)elements;

- (ComGoogleCommonCollectImmutableCollection_Builder *)addAllWithJavaLangIterable:(id<JavaLangIterable>)elements;

- (ComGoogleCommonCollectImmutableCollection_Builder *)addAllWithJavaUtilIterator:(id<JavaUtilIterator>)elements;

- (ComGoogleCommonCollectImmutableCollection *)build;

@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectImmutableCollection_Builder_init() {}
FOUNDATION_EXPORT jint ComGoogleCommonCollectImmutableCollection_Builder_expandedCapacityWithInt_withInt_(jint oldCapacity, jint minCapacity);

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectImmutableCollection_Builder, DEFAULT_INITIAL_CAPACITY, jint)
#endif
