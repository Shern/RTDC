//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/xml/sax/AttributeList.java
//

#ifndef _OrgXmlSaxAttributeList_H_
#define _OrgXmlSaxAttributeList_H_

#import "JreEmulation.h"

@protocol OrgXmlSaxAttributeList < NSObject, JavaObject >

- (jint)getLength;

- (NSString *)getNameWithInt:(jint)i;

- (NSString *)getTypeWithInt:(jint)i;

- (NSString *)getValueWithInt:(jint)i;

- (NSString *)getTypeWithNSString:(NSString *)name;

- (NSString *)getValueWithNSString:(NSString *)name;

@end

__attribute__((always_inline)) inline void OrgXmlSaxAttributeList_init() {}

#endif // _OrgXmlSaxAttributeList_H_
