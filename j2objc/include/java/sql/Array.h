//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/sql/Array.java
//

#ifndef _JavaSqlArray_H_
#define _JavaSqlArray_H_

@protocol JavaSqlResultSet;
@protocol JavaUtilMap;

#import "JreEmulation.h"

@protocol JavaSqlArray < NSObject, JavaObject >

- (id)getArray;

- (id)getArrayWithLong:(jlong)index
               withInt:(jint)count;

- (id)getArrayWithLong:(jlong)index
               withInt:(jint)count
       withJavaUtilMap:(id<JavaUtilMap>)map;

- (id)getArrayWithJavaUtilMap:(id<JavaUtilMap>)map;

- (jint)getBaseType;

- (NSString *)getBaseTypeName;

- (id<JavaSqlResultSet>)getResultSet;

- (id<JavaSqlResultSet>)getResultSetWithLong:(jlong)index
                                     withInt:(jint)count;

- (id<JavaSqlResultSet>)getResultSetWithLong:(jlong)index
                                     withInt:(jint)count
                             withJavaUtilMap:(id<JavaUtilMap>)map;

- (id<JavaSqlResultSet>)getResultSetWithJavaUtilMap:(id<JavaUtilMap>)map;

- (void)free;

@end

__attribute__((always_inline)) inline void JavaSqlArray_init() {}

#endif // _JavaSqlArray_H_
