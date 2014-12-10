//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/cert/CertPath.java
//

#ifndef _JavaSecurityCertCertPath_H_
#define _JavaSecurityCertCertPath_H_

@class IOSByteArray;
@class IOSObjectArray;
@protocol JavaUtilIterator;
@protocol JavaUtilList;

#import "JreEmulation.h"
#include "java/io/Serializable.h"

#define JavaSecurityCertCertPath_serialVersionUID 6068470306649138683LL

@interface JavaSecurityCertCertPath : NSObject < JavaIoSerializable > {
}

- (instancetype)initWithNSString:(NSString *)type;

- (NSString *)getType;

- (jboolean)isEqual:(id)other;

- (NSUInteger)hash;

- (NSString *)description;

- (id<JavaUtilList>)getCertificates;

- (IOSByteArray *)getEncoded;

- (IOSByteArray *)getEncodedWithNSString:(NSString *)encoding;

- (id<JavaUtilIterator>)getEncodings;

- (id)writeReplace;

@end

__attribute__((always_inline)) inline void JavaSecurityCertCertPath_init() {}

J2OBJC_STATIC_FIELD_GETTER(JavaSecurityCertCertPath, serialVersionUID, jlong)

#define JavaSecurityCertCertPath_CertPathRep_serialVersionUID 3015633072427920915LL

@interface JavaSecurityCertCertPath_CertPathRep : NSObject < JavaIoSerializable > {
}

- (instancetype)initWithNSString:(NSString *)type
                   withByteArray:(IOSByteArray *)data;

- (id)readResolve;

@end

FOUNDATION_EXPORT BOOL JavaSecurityCertCertPath_CertPathRep_initialized;
J2OBJC_STATIC_INIT(JavaSecurityCertCertPath_CertPathRep)

J2OBJC_STATIC_FIELD_GETTER(JavaSecurityCertCertPath_CertPathRep, serialVersionUID, jlong)

FOUNDATION_EXPORT IOSObjectArray *JavaSecurityCertCertPath_CertPathRep_serialPersistentFields_;
J2OBJC_STATIC_FIELD_GETTER(JavaSecurityCertCertPath_CertPathRep, serialPersistentFields_, IOSObjectArray *)

#endif // _JavaSecurityCertCertPath_H_
