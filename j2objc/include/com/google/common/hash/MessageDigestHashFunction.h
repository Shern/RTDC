//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-0.9.5/j2objc/guava/sources/com/google/common/hash/MessageDigestHashFunction.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonHashMessageDigestHashFunction_RESTRICT
#define ComGoogleCommonHashMessageDigestHashFunction_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonHashMessageDigestHashFunction_RESTRICT
#if !defined (_ComGoogleCommonHashMessageDigestHashFunction_) && (ComGoogleCommonHashMessageDigestHashFunction_INCLUDE_ALL || ComGoogleCommonHashMessageDigestHashFunction_INCLUDE)
#define _ComGoogleCommonHashMessageDigestHashFunction_

@class JavaSecurityMessageDigest;
@protocol ComGoogleCommonHashHasher;

#define ComGoogleCommonHashAbstractStreamingHashFunction_RESTRICT 1
#define ComGoogleCommonHashAbstractStreamingHashFunction_INCLUDE 1
#include "com/google/common/hash/AbstractStreamingHashFunction.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"


@interface ComGoogleCommonHashMessageDigestHashFunction : ComGoogleCommonHashAbstractStreamingHashFunction < JavaIoSerializable > {
}

- (instancetype)initWithNSString:(NSString *)algorithmName
                    withNSString:(NSString *)toString;

- (instancetype)initWithNSString:(NSString *)algorithmName
                         withInt:(jint)bytes
                    withNSString:(NSString *)toString;

- (jint)bits;

- (NSString *)description;

- (id<ComGoogleCommonHashHasher>)newHasher OBJC_METHOD_FAMILY_NONE;

- (id)writeReplace;

@end

__attribute__((always_inline)) inline void ComGoogleCommonHashMessageDigestHashFunction_init() {}
#endif
#if !defined (_ComGoogleCommonHashMessageDigestHashFunction_SerializedForm_) && (ComGoogleCommonHashMessageDigestHashFunction_INCLUDE_ALL || ComGoogleCommonHashMessageDigestHashFunction_SerializedForm_INCLUDE)
#define _ComGoogleCommonHashMessageDigestHashFunction_SerializedForm_

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"


#define ComGoogleCommonHashMessageDigestHashFunction_SerializedForm_serialVersionUID 0LL

@interface ComGoogleCommonHashMessageDigestHashFunction_SerializedForm : NSObject < JavaIoSerializable > {
}

@end

__attribute__((always_inline)) inline void ComGoogleCommonHashMessageDigestHashFunction_SerializedForm_init() {}

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonHashMessageDigestHashFunction_SerializedForm, serialVersionUID, jlong)
#endif
#if !defined (_ComGoogleCommonHashMessageDigestHashFunction_MessageDigestHasher_) && (ComGoogleCommonHashMessageDigestHashFunction_INCLUDE_ALL || ComGoogleCommonHashMessageDigestHashFunction_MessageDigestHasher_INCLUDE)
#define _ComGoogleCommonHashMessageDigestHashFunction_MessageDigestHasher_

@class ComGoogleCommonHashHashCode;
@class IOSByteArray;
@class JavaSecurityMessageDigest;

#define ComGoogleCommonHashAbstractByteHasher_RESTRICT 1
#define ComGoogleCommonHashAbstractByteHasher_INCLUDE 1
#include "com/google/common/hash/AbstractByteHasher.h"


@interface ComGoogleCommonHashMessageDigestHashFunction_MessageDigestHasher : ComGoogleCommonHashAbstractByteHasher {
}

- (void)updateWithByte:(jbyte)b;

- (void)updateWithByteArray:(IOSByteArray *)b;

- (void)updateWithByteArray:(IOSByteArray *)b
                    withInt:(jint)off
                    withInt:(jint)len;

- (ComGoogleCommonHashHashCode *)hash__;

@end

__attribute__((always_inline)) inline void ComGoogleCommonHashMessageDigestHashFunction_MessageDigestHasher_init() {}
#endif
