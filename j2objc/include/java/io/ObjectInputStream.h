//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/ObjectInputStream.java
//

#ifndef _JavaIoObjectInputStream_H_
#define _JavaIoObjectInputStream_H_

@class IOSByteArray;
@class IOSClass;
@class IOSObjectArray;
@class JavaIoDataInputStream;
@class JavaIoEmulatedFieldsForLoading;
@class JavaIoInvalidClassException;
@class JavaIoObjectInputStream_GetField;
@class JavaIoObjectStreamClass;
@class JavaIoStreamCorruptedException;
@class JavaLangClassLoader;
@class JavaLangException;
@class JavaUtilArrayList;
@class JavaUtilHashMap;
@protocol JavaIoObjectInputValidation;
@protocol JavaUtilList;

#import "JreEmulation.h"
#include "java/io/InputStream.h"
#include "java/io/ObjectInput.h"
#include "java/io/ObjectStreamConstants.h"

@interface JavaIoObjectInputStream : JavaIoInputStream < JavaIoObjectInput, JavaIoObjectStreamConstants > {
}

- (instancetype)init;

- (instancetype)initWithJavaIoInputStream:(JavaIoInputStream *)input;

- (jint)available;

- (void)close;

- (void)defaultReadObject;

- (jboolean)enableResolveObjectWithBoolean:(jboolean)enable;

- (jint)read;

- (jint)readWithByteArray:(IOSByteArray *)buffer
                  withInt:(jint)byteOffset
                  withInt:(jint)byteCount;

- (jboolean)readBoolean;

- (jbyte)readByte;

- (jchar)readChar;

- (jdouble)readDouble;

- (JavaIoObjectInputStream_GetField *)readFields;

- (jfloat)readFloat;

- (void)readFullyWithByteArray:(IOSByteArray *)dst;

- (void)readFullyWithByteArray:(IOSByteArray *)dst
                       withInt:(jint)offset
                       withInt:(jint)byteCount;

- (jint)readInt;

- (NSString *)readLine;

- (jlong)readLong;

- (JavaIoObjectStreamClass *)readClassDescriptor;

- (IOSClass *)resolveProxyClassWithNSStringArray:(IOSObjectArray *)interfaceNames;

- (id)readObject;

- (id)readUnshared;

- (id)readObjectOverride;

- (jshort)readShort;

- (void)readStreamHeader;

- (jint)readUnsignedByte;

- (jint)readUnsignedShort;

- (NSString *)readUTF;

- (void)registerValidationWithJavaIoObjectInputValidation:(id<JavaIoObjectInputValidation>)object
                                                  withInt:(jint)priority;

- (IOSClass *)resolveClassWithJavaIoObjectStreamClass:(JavaIoObjectStreamClass *)osClass;

- (id)resolveObjectWithId:(id)object;

- (jint)skipBytesWithInt:(jint)length;

@end

FOUNDATION_EXPORT BOOL JavaIoObjectInputStream_initialized;
J2OBJC_STATIC_INIT(JavaIoObjectInputStream)

FOUNDATION_EXPORT id JavaIoObjectInputStream_UNSHARED_OBJ_;
J2OBJC_STATIC_FIELD_GETTER(JavaIoObjectInputStream, UNSHARED_OBJ_, id)

FOUNDATION_EXPORT JavaUtilHashMap *JavaIoObjectInputStream_PRIMITIVE_CLASSES_;
J2OBJC_STATIC_FIELD_GETTER(JavaIoObjectInputStream, PRIMITIVE_CLASSES_, JavaUtilHashMap *)

FOUNDATION_EXPORT JavaLangClassLoader *JavaIoObjectInputStream_bootstrapLoader_;
J2OBJC_STATIC_FIELD_GETTER(JavaIoObjectInputStream, bootstrapLoader_, JavaLangClassLoader *)

FOUNDATION_EXPORT JavaLangClassLoader *JavaIoObjectInputStream_systemLoader_;
J2OBJC_STATIC_FIELD_GETTER(JavaIoObjectInputStream, systemLoader_, JavaLangClassLoader *)

@interface JavaIoObjectInputStream_InputValidationDesc : NSObject {
 @public
  id<JavaIoObjectInputValidation> validator_;
  jint priority_;
}

- (instancetype)init;

@end

__attribute__((always_inline)) inline void JavaIoObjectInputStream_InputValidationDesc_init() {}

J2OBJC_FIELD_SETTER(JavaIoObjectInputStream_InputValidationDesc, validator_, id<JavaIoObjectInputValidation>)

@interface JavaIoObjectInputStream_GetField : NSObject {
}

- (JavaIoObjectStreamClass *)getObjectStreamClass;

- (jboolean)defaultedWithNSString:(NSString *)name;

- (jboolean)getWithNSString:(NSString *)name
                withBoolean:(jboolean)defaultValue;

- (jchar)getWithNSString:(NSString *)name
                withChar:(jchar)defaultValue;

- (jbyte)getWithNSString:(NSString *)name
                withByte:(jbyte)defaultValue;

- (jshort)getWithNSString:(NSString *)name
                withShort:(jshort)defaultValue;

- (jint)getWithNSString:(NSString *)name
                withInt:(jint)defaultValue;

- (jlong)getWithNSString:(NSString *)name
                withLong:(jlong)defaultValue;

- (jfloat)getWithNSString:(NSString *)name
                withFloat:(jfloat)defaultValue;

- (jdouble)getWithNSString:(NSString *)name
                withDouble:(jdouble)defaultValue;

- (id)getWithNSString:(NSString *)name
               withId:(id)defaultValue;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void JavaIoObjectInputStream_GetField_init() {}

#endif // _JavaIoObjectInputStream_H_