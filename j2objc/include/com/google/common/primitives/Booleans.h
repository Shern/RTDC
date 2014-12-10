//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-0.9.5/j2objc/guava/sources/com/google/common/primitives/Booleans.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonPrimitivesBooleans_RESTRICT
#define ComGoogleCommonPrimitivesBooleans_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonPrimitivesBooleans_RESTRICT
#if !defined (_ComGoogleCommonPrimitivesBooleans_) && (ComGoogleCommonPrimitivesBooleans_INCLUDE_ALL || ComGoogleCommonPrimitivesBooleans_INCLUDE)
#define _ComGoogleCommonPrimitivesBooleans_

@class IOSBooleanArray;
@class IOSObjectArray;
@protocol JavaUtilCollection;
@protocol JavaUtilComparator;
@protocol JavaUtilList;


@interface ComGoogleCommonPrimitivesBooleans : NSObject {
}

+ (jint)hashCodeWithBoolean:(jboolean)value;

+ (jint)compareWithBoolean:(jboolean)a
               withBoolean:(jboolean)b;

+ (jboolean)containsWithBooleanArray:(IOSBooleanArray *)array
                         withBoolean:(jboolean)target;

+ (jint)indexOfWithBooleanArray:(IOSBooleanArray *)array
                    withBoolean:(jboolean)target;

+ (jint)indexOfWithBooleanArray:(IOSBooleanArray *)array
               withBooleanArray:(IOSBooleanArray *)target;

+ (jint)lastIndexOfWithBooleanArray:(IOSBooleanArray *)array
                        withBoolean:(jboolean)target;

+ (IOSBooleanArray *)concatWithBooleanArray2:(IOSObjectArray *)arrays;

+ (IOSBooleanArray *)ensureCapacityWithBooleanArray:(IOSBooleanArray *)array
                                            withInt:(jint)minLength
                                            withInt:(jint)padding;

+ (NSString *)joinWithNSString:(NSString *)separator
              withBooleanArray:(IOSBooleanArray *)array;

+ (id<JavaUtilComparator>)lexicographicalComparator;

+ (IOSBooleanArray *)toArrayWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

+ (id<JavaUtilList>)asListWithBooleanArray:(IOSBooleanArray *)backingArray;

@end

__attribute__((always_inline)) inline void ComGoogleCommonPrimitivesBooleans_init() {}
FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesBooleans_hashCodeWithBoolean_(jboolean value);
FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesBooleans_compareWithBoolean_withBoolean_(jboolean a, jboolean b);
FOUNDATION_EXPORT jboolean ComGoogleCommonPrimitivesBooleans_containsWithBooleanArray_withBoolean_(IOSBooleanArray *array, jboolean target);
FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesBooleans_indexOfWithBooleanArray_withBoolean_(IOSBooleanArray *array, jboolean target);
FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesBooleans_indexOfWithBooleanArray_withBooleanArray_(IOSBooleanArray *array, IOSBooleanArray *target);
FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesBooleans_lastIndexOfWithBooleanArray_withBoolean_(IOSBooleanArray *array, jboolean target);
FOUNDATION_EXPORT IOSBooleanArray *ComGoogleCommonPrimitivesBooleans_concatWithBooleanArray2_(IOSObjectArray *arrays);
FOUNDATION_EXPORT IOSBooleanArray *ComGoogleCommonPrimitivesBooleans_ensureCapacityWithBooleanArray_withInt_withInt_(IOSBooleanArray *array, jint minLength, jint padding);
FOUNDATION_EXPORT NSString *ComGoogleCommonPrimitivesBooleans_joinWithNSString_withBooleanArray_(NSString *separator, IOSBooleanArray *array);
FOUNDATION_EXPORT id<JavaUtilComparator> ComGoogleCommonPrimitivesBooleans_lexicographicalComparator();
FOUNDATION_EXPORT IOSBooleanArray *ComGoogleCommonPrimitivesBooleans_toArrayWithJavaUtilCollection_(id<JavaUtilCollection> collection);
FOUNDATION_EXPORT id<JavaUtilList> ComGoogleCommonPrimitivesBooleans_asListWithBooleanArray_(IOSBooleanArray *backingArray);
#endif
#if !defined (_ComGoogleCommonPrimitivesBooleans_LexicographicalComparatorEnum_) && (ComGoogleCommonPrimitivesBooleans_INCLUDE_ALL || ComGoogleCommonPrimitivesBooleans_LexicographicalComparatorEnum_INCLUDE)
#define _ComGoogleCommonPrimitivesBooleans_LexicographicalComparatorEnum_

@class IOSBooleanArray;

#define JavaLangEnum_RESTRICT 1
#define JavaLangEnum_INCLUDE 1
#include "java/lang/Enum.h"

#define JavaUtilComparator_RESTRICT 1
#define JavaUtilComparator_INCLUDE 1
#include "java/util/Comparator.h"


typedef NS_ENUM(NSUInteger, ComGoogleCommonPrimitivesBooleans_LexicographicalComparator) {
  ComGoogleCommonPrimitivesBooleans_LexicographicalComparator_INSTANCE = 0,
};

@interface ComGoogleCommonPrimitivesBooleans_LexicographicalComparatorEnum : JavaLangEnum < NSCopying, JavaUtilComparator > {
}

- (jint)compareWithId:(IOSBooleanArray *)left
               withId:(IOSBooleanArray *)right;

+ (IOSObjectArray *)values;
FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonPrimitivesBooleans_LexicographicalComparatorEnum_values();

+ (ComGoogleCommonPrimitivesBooleans_LexicographicalComparatorEnum *)valueOfWithNSString:(NSString *)name;

FOUNDATION_EXPORT ComGoogleCommonPrimitivesBooleans_LexicographicalComparatorEnum *ComGoogleCommonPrimitivesBooleans_LexicographicalComparatorEnum_valueOfWithNSString_(NSString *name);- (id)copyWithZone:(NSZone *)zone;

@end

FOUNDATION_EXPORT BOOL ComGoogleCommonPrimitivesBooleans_LexicographicalComparatorEnum_initialized;
J2OBJC_STATIC_INIT(ComGoogleCommonPrimitivesBooleans_LexicographicalComparatorEnum)

FOUNDATION_EXPORT ComGoogleCommonPrimitivesBooleans_LexicographicalComparatorEnum *ComGoogleCommonPrimitivesBooleans_LexicographicalComparatorEnum_values_[];

#define ComGoogleCommonPrimitivesBooleans_LexicographicalComparatorEnum_INSTANCE ComGoogleCommonPrimitivesBooleans_LexicographicalComparatorEnum_values_[ComGoogleCommonPrimitivesBooleans_LexicographicalComparator_INSTANCE]
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonPrimitivesBooleans_LexicographicalComparatorEnum, INSTANCE, ComGoogleCommonPrimitivesBooleans_LexicographicalComparatorEnum *)
#endif
#if !defined (_ComGoogleCommonPrimitivesBooleans_BooleanArrayAsList_) && (ComGoogleCommonPrimitivesBooleans_INCLUDE_ALL || ComGoogleCommonPrimitivesBooleans_BooleanArrayAsList_INCLUDE)
#define _ComGoogleCommonPrimitivesBooleans_BooleanArrayAsList_

@class IOSBooleanArray;
@class JavaLangBoolean;
@protocol JavaUtilList;

#define JavaUtilAbstractList_RESTRICT 1
#define JavaUtilAbstractList_INCLUDE 1
#include "java/util/AbstractList.h"

#define JavaUtilRandomAccess_RESTRICT 1
#define JavaUtilRandomAccess_INCLUDE 1
#include "java/util/RandomAccess.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"


#define ComGoogleCommonPrimitivesBooleans_BooleanArrayAsList_serialVersionUID 0LL

@interface ComGoogleCommonPrimitivesBooleans_BooleanArrayAsList : JavaUtilAbstractList < JavaUtilRandomAccess, JavaIoSerializable > {
 @public
  IOSBooleanArray *array_;
  jint start_;
  jint end_;
}

- (instancetype)initWithBooleanArray:(IOSBooleanArray *)array;

- (instancetype)initWithBooleanArray:(IOSBooleanArray *)array
                             withInt:(jint)start
                             withInt:(jint)end;

- (jint)size;

- (jboolean)isEmpty;

- (JavaLangBoolean *)getWithInt:(jint)index;

- (jboolean)containsWithId:(id)target;

- (jint)indexOfWithId:(id)target;

- (jint)lastIndexOfWithId:(id)target;

- (JavaLangBoolean *)setWithInt:(jint)index
                         withId:(JavaLangBoolean *)element;

- (id<JavaUtilList>)subListWithInt:(jint)fromIndex
                           withInt:(jint)toIndex;

- (jboolean)isEqual:(id)object;

- (NSUInteger)hash;

- (NSString *)description;

- (IOSBooleanArray *)toBooleanArray;


@end

__attribute__((always_inline)) inline void ComGoogleCommonPrimitivesBooleans_BooleanArrayAsList_init() {}

J2OBJC_FIELD_SETTER(ComGoogleCommonPrimitivesBooleans_BooleanArrayAsList, array_, IOSBooleanArray *)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonPrimitivesBooleans_BooleanArrayAsList, serialVersionUID, jlong)
#endif