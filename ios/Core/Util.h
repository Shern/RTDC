//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: Z:\RTDC\core\src\main\java\rtdc\core\util\Util.java
//

#ifndef _RtdcCoreUtilUtil_H_
#define _RtdcCoreUtilUtil_H_

@class RtdcCoreJsonJSONArray;
@protocol JavaLangIterable;
@protocol JavaUtilList;

#import "JreEmulation.h"

@interface RtdcCoreUtilUtil : NSObject {
}

+ (RtdcCoreJsonJSONArray *)asJSONArrayWithJavaLangIterable:(id<JavaLangIterable>)list;

+ (id<JavaUtilList>)asListWithRtdcCoreJsonJSONArray:(RtdcCoreJsonJSONArray *)array
                                   withJavaUtilList:(id<JavaUtilList>)list;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void RtdcCoreUtilUtil_init() {}
FOUNDATION_EXPORT RtdcCoreJsonJSONArray *RtdcCoreUtilUtil_asJSONArrayWithJavaLangIterable_(id<JavaLangIterable> list);
FOUNDATION_EXPORT id<JavaUtilList> RtdcCoreUtilUtil_asListWithRtdcCoreJsonJSONArray_withJavaUtilList_(RtdcCoreJsonJSONArray *array, id<JavaUtilList> list);

#endif // _RtdcCoreUtilUtil_H_