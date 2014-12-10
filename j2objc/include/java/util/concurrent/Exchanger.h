//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/Exchanger.java
//

#ifndef _JavaUtilConcurrentExchanger_H_
#define _JavaUtilConcurrentExchanger_H_

@class IOSObjectArray;
@class JavaLangThread;
@class JavaUtilConcurrentAtomicAtomicInteger;
@class JavaUtilConcurrentExchanger_Node;
@class JavaUtilConcurrentExchanger_Slot;
@class JavaUtilConcurrentTimeUnitEnum;

#import "JreEmulation.h"
#include "java/util/concurrent/atomic/AtomicReference.h"

#define JavaUtilConcurrentExchanger_CAPACITY 32

@interface JavaUtilConcurrentExchanger : NSObject {
}

- (instancetype)init;

- (id)exchangeWithId:(id)x;

- (id)exchangeWithId:(id)x
            withLong:(jlong)timeout
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

@end

FOUNDATION_EXPORT BOOL JavaUtilConcurrentExchanger_initialized;
J2OBJC_STATIC_INIT(JavaUtilConcurrentExchanger)

FOUNDATION_EXPORT jint JavaUtilConcurrentExchanger_NCPU_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentExchanger, NCPU_, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentExchanger, CAPACITY, jint)

FOUNDATION_EXPORT jint JavaUtilConcurrentExchanger_FULL_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentExchanger, FULL_, jint)

FOUNDATION_EXPORT jint JavaUtilConcurrentExchanger_SPINS_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentExchanger, SPINS_, jint)

FOUNDATION_EXPORT jint JavaUtilConcurrentExchanger_TIMED_SPINS_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentExchanger, TIMED_SPINS_, jint)

FOUNDATION_EXPORT id JavaUtilConcurrentExchanger_CANCEL_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentExchanger, CANCEL_, id)

FOUNDATION_EXPORT id JavaUtilConcurrentExchanger_NULL_ITEM_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentExchanger, NULL_ITEM_, id)

@interface JavaUtilConcurrentExchanger_Node : JavaUtilConcurrentAtomicAtomicReference {
 @public
  id item_;
  JavaLangThread *waiter_;
}

- (instancetype)initWithId:(id)item;

@end

__attribute__((always_inline)) inline void JavaUtilConcurrentExchanger_Node_init() {}

J2OBJC_FIELD_SETTER(JavaUtilConcurrentExchanger_Node, item_, id)
J2OBJC_FIELD_SETTER(JavaUtilConcurrentExchanger_Node, waiter_, JavaLangThread *)

@interface JavaUtilConcurrentExchanger_Slot : JavaUtilConcurrentAtomicAtomicReference {
 @public
  jlong q0_, q1_, q2_, q3_, q4_, q5_, q6_, q7_, q8_, q9_, qa_, qb_, qc_, qd_, qe_;
}

@end

__attribute__((always_inline)) inline void JavaUtilConcurrentExchanger_Slot_init() {}

#endif // _JavaUtilConcurrentExchanger_H_