//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-0.9.5/j2objc/guava/sources/com/google/common/util/concurrent/CycleDetectingLockFactory.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_RESTRICT
#define ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_RESTRICT
#if ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingReentrantReadWriteLock_INCLUDE
#define ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingLock_INCLUDE 1
#endif
#if ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingReentrantLock_INCLUDE
#define ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingLock_INCLUDE 1
#endif
#if ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PotentialDeadlockException_INCLUDE
#define ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_ExampleStackTrace_INCLUDE 1
#endif
#if ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_WithExplicitOrdering_INCLUDE
#define ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_INCLUDE 1
#endif
#if ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum_$3_INCLUDE
#define ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum_INCLUDE 1
#endif
#if ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum_$2_INCLUDE
#define ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum_INCLUDE 1
#endif
#if ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum_$1_INCLUDE
#define ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum_INCLUDE 1
#endif
#if ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum_INCLUDE
#define ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy_INCLUDE 1
#endif
#if !defined (_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy_) && (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_INCLUDE_ALL || ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy_INCLUDE)
#define _ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy_

@class ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PotentialDeadlockException;


@protocol ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy < NSObject, JavaObject >

- (void)handlePotentialDeadlockWithComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PotentialDeadlockException:(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PotentialDeadlockException *)exception;

@end

__attribute__((always_inline)) inline void ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy_init() {}
#endif
#if !defined (_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum_) && (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_INCLUDE_ALL || ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum_INCLUDE)
#define _ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum_

#define JavaLangEnum_RESTRICT 1
#define JavaLangEnum_INCLUDE 1
#include "java/lang/Enum.h"


typedef NS_ENUM(NSUInteger, ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policies) {
  ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policies_THROW = 0,
  ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policies_WARN = 1,
  ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policies_DISABLED = 2,
};

@interface ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum : JavaLangEnum < NSCopying, ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy > {
}

- (instancetype)initWithNSString:(NSString *)__name
                         withInt:(jint)__ordinal;

+ (IOSObjectArray *)values;
FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum_values();

+ (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum *)valueOfWithNSString:(NSString *)name;

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum *ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum_valueOfWithNSString_(NSString *name);- (id)copyWithZone:(NSZone *)zone;

@end

FOUNDATION_EXPORT BOOL ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum_initialized;
J2OBJC_STATIC_INIT(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum)

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum *ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum_values_[];

#define ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum_THROW ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum_values_[ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policies_THROW]
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum, THROW, ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum *)

#define ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum_WARN ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum_values_[ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policies_WARN]
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum, WARN, ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum *)

#define ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum_DISABLED ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum_values_[ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policies_DISABLED]
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum, DISABLED, ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum *)
#endif
#if !defined (_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum_$1_) && (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_INCLUDE_ALL || ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum_$1_INCLUDE)
#define _ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum_$1_

@class ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PotentialDeadlockException;


@interface ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum_$1 : ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum {
}

- (void)handlePotentialDeadlockWithComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PotentialDeadlockException:(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PotentialDeadlockException *)e;

- (instancetype)initWithNSString:(NSString *)__name
                         withInt:(jint)__ordinal;

@end

__attribute__((always_inline)) inline void ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum_$1_init() {}
#endif
#if !defined (_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum_$2_) && (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_INCLUDE_ALL || ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum_$2_INCLUDE)
#define _ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum_$2_

@class ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PotentialDeadlockException;


@interface ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum_$2 : ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum {
}

- (void)handlePotentialDeadlockWithComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PotentialDeadlockException:(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PotentialDeadlockException *)e;

- (instancetype)initWithNSString:(NSString *)__name
                         withInt:(jint)__ordinal;

@end

__attribute__((always_inline)) inline void ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum_$2_init() {}
#endif
#if !defined (_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum_$3_) && (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_INCLUDE_ALL || ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum_$3_INCLUDE)
#define _ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum_$3_

@class ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PotentialDeadlockException;


@interface ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum_$3 : ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum {
}

- (void)handlePotentialDeadlockWithComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PotentialDeadlockException:(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PotentialDeadlockException *)e;

- (instancetype)initWithNSString:(NSString *)__name
                         withInt:(jint)__ordinal;

@end

__attribute__((always_inline)) inline void ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PoliciesEnum_$3_init() {}
#endif
#if !defined (_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_) && (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_INCLUDE_ALL || ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_INCLUDE)
#define _ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_

@class ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_WithExplicitOrdering;
@class IOSClass;
@class JavaLangThreadLocal;
@class JavaUtilConcurrentLocksReentrantLock;
@class JavaUtilConcurrentLocksReentrantReadWriteLock;
@class JavaUtilLoggingLogger;
@protocol ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingLock;
@protocol ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy;
@protocol JavaUtilMap;


@interface ComGoogleCommonUtilConcurrentCycleDetectingLockFactory : NSObject {
 @public
  id<ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy> policy_;
}

+ (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory *)newInstanceWithComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy:(id<ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy>)policy OBJC_METHOD_FAMILY_NONE;

- (JavaUtilConcurrentLocksReentrantLock *)newReentrantLockWithNSString:(NSString *)lockName OBJC_METHOD_FAMILY_NONE;

- (JavaUtilConcurrentLocksReentrantLock *)newReentrantLockWithNSString:(NSString *)lockName
                                                           withBoolean:(jboolean)fair OBJC_METHOD_FAMILY_NONE;

- (JavaUtilConcurrentLocksReentrantReadWriteLock *)newReentrantReadWriteLockWithNSString:(NSString *)lockName OBJC_METHOD_FAMILY_NONE;

- (JavaUtilConcurrentLocksReentrantReadWriteLock *)newReentrantReadWriteLockWithNSString:(NSString *)lockName
                                                                             withBoolean:(jboolean)fair OBJC_METHOD_FAMILY_NONE;

+ (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_WithExplicitOrdering *)newInstanceWithExplicitOrderingWithIOSClass:(IOSClass *)enumClass
                                                           withComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy:(id<ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy>)policy OBJC_METHOD_FAMILY_NONE;

@end

FOUNDATION_EXPORT BOOL ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_initialized;
J2OBJC_STATIC_INIT(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory)

J2OBJC_FIELD_SETTER(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory, policy_, id<ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy>)
FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentCycleDetectingLockFactory *ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_newInstanceWithComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy_(id<ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy> policy);
FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_WithExplicitOrdering *ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_newInstanceWithExplicitOrderingWithIOSClass_withComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy_(IOSClass *enumClass, id<ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy> policy);

FOUNDATION_EXPORT id<JavaUtilMap> ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_lockGraphNodesPerType_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory, lockGraphNodesPerType_, id<JavaUtilMap>)

FOUNDATION_EXPORT JavaUtilLoggingLogger *ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_logger_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory, logger_, JavaUtilLoggingLogger *)

FOUNDATION_EXPORT JavaLangThreadLocal *ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_acquiredLocks_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory, acquiredLocks_, JavaLangThreadLocal *)
#endif
#if !defined (_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_WithExplicitOrdering_) && (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_INCLUDE_ALL || ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_WithExplicitOrdering_INCLUDE)
#define _ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_WithExplicitOrdering_

@class JavaLangEnum;
@class JavaUtilConcurrentLocksReentrantLock;
@class JavaUtilConcurrentLocksReentrantReadWriteLock;
@protocol ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy;
@protocol JavaUtilMap;


@interface ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_WithExplicitOrdering : ComGoogleCommonUtilConcurrentCycleDetectingLockFactory {
}

- (instancetype)initWithComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy:(id<ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy>)policy
                                                                      withJavaUtilMap:(id<JavaUtilMap>)lockGraphNodes;

- (JavaUtilConcurrentLocksReentrantLock *)newReentrantLockWithJavaLangEnum:(JavaLangEnum *)rank OBJC_METHOD_FAMILY_NONE;

- (JavaUtilConcurrentLocksReentrantLock *)newReentrantLockWithJavaLangEnum:(JavaLangEnum *)rank
                                                               withBoolean:(jboolean)fair OBJC_METHOD_FAMILY_NONE;

- (JavaUtilConcurrentLocksReentrantReadWriteLock *)newReentrantReadWriteLockWithJavaLangEnum:(JavaLangEnum *)rank OBJC_METHOD_FAMILY_NONE;

- (JavaUtilConcurrentLocksReentrantReadWriteLock *)newReentrantReadWriteLockWithJavaLangEnum:(JavaLangEnum *)rank
                                                                                 withBoolean:(jboolean)fair OBJC_METHOD_FAMILY_NONE;

@end

__attribute__((always_inline)) inline void ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_WithExplicitOrdering_init() {}
#endif
#if !defined (_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_OrderedLockGraphNodesCreator_) && (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_INCLUDE_ALL || ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_OrderedLockGraphNodesCreator_INCLUDE)
#define _ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_OrderedLockGraphNodesCreator_

@class IOSClass;
@class JavaLangEnum;
@protocol JavaUtilMap;

#define ComGoogleCommonBaseFunction_RESTRICT 1
#define ComGoogleCommonBaseFunction_INCLUDE 1
#include "com/google/common/base/Function.h"


@interface ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_OrderedLockGraphNodesCreator : NSObject < ComGoogleCommonBaseFunction > {
}

- (id<JavaUtilMap>)applyWithId:(IOSClass *)clazz;

- (id<JavaUtilMap>)createNodesForWithIOSClass:(IOSClass *)clazz;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_OrderedLockGraphNodesCreator_init() {}
#endif
#if !defined (_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_ExampleStackTrace_) && (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_INCLUDE_ALL || ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_ExampleStackTrace_INCLUDE)
#define _ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_ExampleStackTrace_

@class ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode;
@class IOSObjectArray;
@protocol JavaUtilSet;

#define JavaLangIllegalStateException_RESTRICT 1
#define JavaLangIllegalStateException_INCLUDE 1
#include "java/lang/IllegalStateException.h"


@interface ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_ExampleStackTrace : JavaLangIllegalStateException {
}

- (instancetype)initWithComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode:(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode *)node1
                    withComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode:(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode *)node2;

@end

FOUNDATION_EXPORT BOOL ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_ExampleStackTrace_initialized;
J2OBJC_STATIC_INIT(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_ExampleStackTrace)

FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_ExampleStackTrace_EMPTY_STACK_TRACE_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_ExampleStackTrace, EMPTY_STACK_TRACE_, IOSObjectArray *)

FOUNDATION_EXPORT id<JavaUtilSet> ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_ExampleStackTrace_EXCLUDED_CLASS_NAMES_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_ExampleStackTrace, EXCLUDED_CLASS_NAMES_, id<JavaUtilSet>)
J2OBJC_STATIC_FIELD_SETTER(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_ExampleStackTrace, EXCLUDED_CLASS_NAMES_, id<JavaUtilSet>)
#endif
#if !defined (_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PotentialDeadlockException_) && (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_INCLUDE_ALL || ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PotentialDeadlockException_INCLUDE)
#define _ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PotentialDeadlockException_

@class ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode;


@interface ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PotentialDeadlockException : ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_ExampleStackTrace {
}

- (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_ExampleStackTrace *)getConflictingStackTrace;

- (NSString *)getMessage;

@end

__attribute__((always_inline)) inline void ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_PotentialDeadlockException_init() {}
#endif
#if !defined (_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode_) && (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_INCLUDE_ALL || ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode_INCLUDE)
#define _ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode_

@class ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_ExampleStackTrace;
@protocol ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy;
@protocol JavaUtilList;
@protocol JavaUtilMap;
@protocol JavaUtilSet;


@interface ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode : NSObject {
 @public
  id<JavaUtilMap> allowedPriorLocks_;
  id<JavaUtilMap> disallowedPriorLocks_;
  NSString *lockName_;
}

- (instancetype)initWithNSString:(NSString *)lockName;

- (NSString *)getLockName;

- (void)checkAcquiredLocksWithComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy:(id<ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy>)policy
                                                                           withJavaUtilList:(id<JavaUtilList>)acquiredLocks;

- (void)checkAcquiredLockWithComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy:(id<ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_Policy>)policy
                  withComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode:(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode *)acquiredLock;

@end

__attribute__((always_inline)) inline void ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode_init() {}

J2OBJC_FIELD_SETTER(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode, allowedPriorLocks_, id<JavaUtilMap>)
J2OBJC_FIELD_SETTER(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode, disallowedPriorLocks_, id<JavaUtilMap>)
J2OBJC_FIELD_SETTER(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode, lockName_, NSString *)
#endif
#if !defined (_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingLock_) && (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_INCLUDE_ALL || ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingLock_INCLUDE)
#define _ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingLock_

@class ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode;


@protocol ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingLock < NSObject, JavaObject >

- (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode *)getLockGraphNode;

- (jboolean)isAcquiredByCurrentThread;

@end

__attribute__((always_inline)) inline void ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingLock_init() {}
#endif
#if !defined (_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingReentrantLock_) && (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_INCLUDE_ALL || ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingReentrantLock_INCLUDE)
#define _ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingReentrantLock_

@class ComGoogleCommonUtilConcurrentCycleDetectingLockFactory;
@class ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode;
@class JavaUtilConcurrentTimeUnitEnum;

#define JavaUtilConcurrentLocksReentrantLock_RESTRICT 1
#define JavaUtilConcurrentLocksReentrantLock_INCLUDE 1
#include "java/util/concurrent/locks/ReentrantLock.h"


@interface ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingReentrantLock : JavaUtilConcurrentLocksReentrantLock < ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingLock > {
}

- (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode *)getLockGraphNode;

- (jboolean)isAcquiredByCurrentThread;

- (void)lock;

- (void)lockInterruptibly;

- (jboolean)tryLock;

- (jboolean)tryLockWithLong:(jlong)timeout
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (void)unlock;

@end

__attribute__((always_inline)) inline void ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingReentrantLock_init() {}
#endif
#if !defined (_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingReentrantReadWriteLock_) && (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_INCLUDE_ALL || ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingReentrantReadWriteLock_INCLUDE)
#define _ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingReentrantReadWriteLock_

@class ComGoogleCommonUtilConcurrentCycleDetectingLockFactory;
@class ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingReentrantReadLock;
@class ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingReentrantWriteLock;
@class ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode;
@class JavaUtilConcurrentLocksReentrantReadWriteLock_ReadLock;
@class JavaUtilConcurrentLocksReentrantReadWriteLock_WriteLock;

#define JavaUtilConcurrentLocksReentrantReadWriteLock_RESTRICT 1
#define JavaUtilConcurrentLocksReentrantReadWriteLock_INCLUDE 1
#include "java/util/concurrent/locks/ReentrantReadWriteLock.h"


@interface ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingReentrantReadWriteLock : JavaUtilConcurrentLocksReentrantReadWriteLock < ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingLock > {
}

- (JavaUtilConcurrentLocksReentrantReadWriteLock_ReadLock *)readLock;

- (JavaUtilConcurrentLocksReentrantReadWriteLock_WriteLock *)writeLock;

- (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_LockGraphNode *)getLockGraphNode;

- (jboolean)isAcquiredByCurrentThread;

@end

__attribute__((always_inline)) inline void ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingReentrantReadWriteLock_init() {}
#endif
#if !defined (_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingReentrantReadLock_) && (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_INCLUDE_ALL || ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingReentrantReadLock_INCLUDE)
#define _ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingReentrantReadLock_

@class ComGoogleCommonUtilConcurrentCycleDetectingLockFactory;
@class ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingReentrantReadWriteLock;
@class JavaUtilConcurrentTimeUnitEnum;

#define JavaUtilConcurrentLocksReentrantReadWriteLock_RESTRICT 1
#define JavaUtilConcurrentLocksReentrantReadWriteLock_ReadLock_INCLUDE 1
#include "java/util/concurrent/locks/ReentrantReadWriteLock.h"


@interface ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingReentrantReadLock : JavaUtilConcurrentLocksReentrantReadWriteLock_ReadLock {
 @public
  __weak ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingReentrantReadWriteLock *readWriteLock_;
}

- (instancetype)initWithComGoogleCommonUtilConcurrentCycleDetectingLockFactory:(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory *)outer$
withComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingReentrantReadWriteLock:(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingReentrantReadWriteLock *)readWriteLock;

- (void)lock;

- (void)lockInterruptibly;

- (jboolean)tryLock;

- (jboolean)tryLockWithLong:(jlong)timeout
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (void)unlock;

@end

__attribute__((always_inline)) inline void ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingReentrantReadLock_init() {}
#endif
#if !defined (_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingReentrantWriteLock_) && (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_INCLUDE_ALL || ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingReentrantWriteLock_INCLUDE)
#define _ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingReentrantWriteLock_

@class ComGoogleCommonUtilConcurrentCycleDetectingLockFactory;
@class ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingReentrantReadWriteLock;
@class JavaUtilConcurrentTimeUnitEnum;

#define JavaUtilConcurrentLocksReentrantReadWriteLock_RESTRICT 1
#define JavaUtilConcurrentLocksReentrantReadWriteLock_WriteLock_INCLUDE 1
#include "java/util/concurrent/locks/ReentrantReadWriteLock.h"


@interface ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingReentrantWriteLock : JavaUtilConcurrentLocksReentrantReadWriteLock_WriteLock {
 @public
  __weak ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingReentrantReadWriteLock *readWriteLock_;
}

- (instancetype)initWithComGoogleCommonUtilConcurrentCycleDetectingLockFactory:(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory *)outer$
withComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingReentrantReadWriteLock:(ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingReentrantReadWriteLock *)readWriteLock;

- (void)lock;

- (void)lockInterruptibly;

- (jboolean)tryLock;

- (jboolean)tryLockWithLong:(jlong)timeout
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (void)unlock;

@end

__attribute__((always_inline)) inline void ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_CycleDetectingReentrantWriteLock_init() {}
#endif
#if !defined (_ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_$1_) && (ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_INCLUDE_ALL || ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_$1_INCLUDE)
#define _ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_$1_

@class JavaUtilArrayList;

#define JavaLangThreadLocal_RESTRICT 1
#define JavaLangThreadLocal_INCLUDE 1
#include "java/lang/ThreadLocal.h"


@interface ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_$1 : JavaLangThreadLocal {
}

- (JavaUtilArrayList *)initialValue OBJC_METHOD_FAMILY_NONE;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void ComGoogleCommonUtilConcurrentCycleDetectingLockFactory_$1_init() {}
#endif