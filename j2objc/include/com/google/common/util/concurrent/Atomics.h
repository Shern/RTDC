//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-0.9.5/j2objc/guava/sources/com/google/common/util/concurrent/Atomics.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonUtilConcurrentAtomics_RESTRICT
#define ComGoogleCommonUtilConcurrentAtomics_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonUtilConcurrentAtomics_RESTRICT
#if !defined (_ComGoogleCommonUtilConcurrentAtomics_) && (ComGoogleCommonUtilConcurrentAtomics_INCLUDE_ALL || ComGoogleCommonUtilConcurrentAtomics_INCLUDE)
#define _ComGoogleCommonUtilConcurrentAtomics_

@class IOSObjectArray;
@class JavaUtilConcurrentAtomicAtomicReference;
@class JavaUtilConcurrentAtomicAtomicReferenceArray;


@interface ComGoogleCommonUtilConcurrentAtomics : NSObject {
}

+ (JavaUtilConcurrentAtomicAtomicReference *)newReference OBJC_METHOD_FAMILY_NONE;

+ (JavaUtilConcurrentAtomicAtomicReference *)newReferenceWithId:(id)initialValue OBJC_METHOD_FAMILY_NONE;

+ (JavaUtilConcurrentAtomicAtomicReferenceArray *)newReferenceArrayWithInt:(jint)length OBJC_METHOD_FAMILY_NONE;

+ (JavaUtilConcurrentAtomicAtomicReferenceArray *)newReferenceArrayWithNSObjectArray:(IOSObjectArray *)array OBJC_METHOD_FAMILY_NONE;

@end

__attribute__((always_inline)) inline void ComGoogleCommonUtilConcurrentAtomics_init() {}
FOUNDATION_EXPORT JavaUtilConcurrentAtomicAtomicReference *ComGoogleCommonUtilConcurrentAtomics_newReference();
FOUNDATION_EXPORT JavaUtilConcurrentAtomicAtomicReference *ComGoogleCommonUtilConcurrentAtomics_newReferenceWithId_(id initialValue);
FOUNDATION_EXPORT JavaUtilConcurrentAtomicAtomicReferenceArray *ComGoogleCommonUtilConcurrentAtomics_newReferenceArrayWithInt_(jint length);
FOUNDATION_EXPORT JavaUtilConcurrentAtomicAtomicReferenceArray *ComGoogleCommonUtilConcurrentAtomics_newReferenceArrayWithNSObjectArray_(IOSObjectArray *array);
#endif
