//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/ref/ReferenceQueue.java
//

#ifndef _JavaLangRefReferenceQueue_H_
#define _JavaLangRefReferenceQueue_H_

@class JavaLangRefReference;

#import "JreEmulation.h"

#define JavaLangRefReferenceQueue_NANOS_PER_MILLI 1000000

@interface JavaLangRefReferenceQueue : NSObject {
}

- (instancetype)init;

- (JavaLangRefReference *)poll;

- (JavaLangRefReference *)remove;

- (JavaLangRefReference *)removeWithLong:(jlong)timeoutMillis;

- (void)enqueueWithJavaLangRefReference:(JavaLangRefReference *)reference;

+ (void)addWithJavaLangRefReference:(JavaLangRefReference *)list;

@end

__attribute__((always_inline)) inline void JavaLangRefReferenceQueue_init() {}
FOUNDATION_EXPORT void JavaLangRefReferenceQueue_addWithJavaLangRefReference_(JavaLangRefReference *list);

J2OBJC_STATIC_FIELD_GETTER(JavaLangRefReferenceQueue, NANOS_PER_MILLI, jint)

FOUNDATION_EXPORT JavaLangRefReference *JavaLangRefReferenceQueue_unenqueued_;
J2OBJC_STATIC_FIELD_GETTER(JavaLangRefReferenceQueue, unenqueued_, JavaLangRefReference *)
J2OBJC_STATIC_FIELD_SETTER(JavaLangRefReferenceQueue, unenqueued_, JavaLangRefReference *)

#endif // _JavaLangRefReferenceQueue_H_