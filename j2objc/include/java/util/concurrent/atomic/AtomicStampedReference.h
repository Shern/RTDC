//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/atomic/AtomicStampedReference.java
//

#ifndef _JavaUtilConcurrentAtomicAtomicStampedReference_H_
#define _JavaUtilConcurrentAtomicAtomicStampedReference_H_

@class IOSIntArray;
@class JavaUtilConcurrentAtomicAtomicStampedReference_Pair;

#import "JreEmulation.h"

@interface JavaUtilConcurrentAtomicAtomicStampedReference : NSObject {
}

- (instancetype)initWithId:(id)initialRef
                   withInt:(jint)initialStamp;

- (id)getReference;

- (jint)getStamp;

- (id)getWithIntArray:(IOSIntArray *)stampHolder;

- (jboolean)weakCompareAndSetWithId:(id)expectedReference
                             withId:(id)newReference
                            withInt:(jint)expectedStamp
                            withInt:(jint)newStamp;

- (jboolean)compareAndSetWithId:(id)expectedReference
                         withId:(id)newReference
                        withInt:(jint)expectedStamp
                        withInt:(jint)newStamp;

- (void)setWithId:(id)newReference
          withInt:(jint)newStamp;

- (jboolean)attemptStampWithId:(id)expectedReference
                       withInt:(jint)newStamp;

@end

__attribute__((always_inline)) inline void JavaUtilConcurrentAtomicAtomicStampedReference_init() {}

@interface JavaUtilConcurrentAtomicAtomicStampedReference_Pair : NSObject {
 @public
  id reference_;
  jint stamp_;
}

+ (JavaUtilConcurrentAtomicAtomicStampedReference_Pair *)ofWithId:(id)reference
                                                          withInt:(jint)stamp;

@end

__attribute__((always_inline)) inline void JavaUtilConcurrentAtomicAtomicStampedReference_Pair_init() {}

J2OBJC_FIELD_SETTER(JavaUtilConcurrentAtomicAtomicStampedReference_Pair, reference_, id)
FOUNDATION_EXPORT JavaUtilConcurrentAtomicAtomicStampedReference_Pair *JavaUtilConcurrentAtomicAtomicStampedReference_Pair_ofWithId_withInt_(id reference, jint stamp);

#endif // _JavaUtilConcurrentAtomicAtomicStampedReference_H_