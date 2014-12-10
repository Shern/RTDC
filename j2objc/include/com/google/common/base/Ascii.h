//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-0.9.5/j2objc/guava/sources/com/google/common/base/Ascii.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonBaseAscii_RESTRICT
#define ComGoogleCommonBaseAscii_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonBaseAscii_RESTRICT
#if !defined (_ComGoogleCommonBaseAscii_) && (ComGoogleCommonBaseAscii_INCLUDE_ALL || ComGoogleCommonBaseAscii_INCLUDE)
#define _ComGoogleCommonBaseAscii_

@protocol JavaLangCharSequence;


#define ComGoogleCommonBaseAscii_ACK 6
#define ComGoogleCommonBaseAscii_BEL 7
#define ComGoogleCommonBaseAscii_BS 8
#define ComGoogleCommonBaseAscii_CAN 24
#define ComGoogleCommonBaseAscii_CR 13
#define ComGoogleCommonBaseAscii_DC1 17
#define ComGoogleCommonBaseAscii_DC2 18
#define ComGoogleCommonBaseAscii_DC3 19
#define ComGoogleCommonBaseAscii_DC4 20
#define ComGoogleCommonBaseAscii_DEL 127
#define ComGoogleCommonBaseAscii_DLE 16
#define ComGoogleCommonBaseAscii_EM 25
#define ComGoogleCommonBaseAscii_ENQ 5
#define ComGoogleCommonBaseAscii_EOT 4
#define ComGoogleCommonBaseAscii_ESC 27
#define ComGoogleCommonBaseAscii_ETB 23
#define ComGoogleCommonBaseAscii_ETX 3
#define ComGoogleCommonBaseAscii_FF 12
#define ComGoogleCommonBaseAscii_FS 28
#define ComGoogleCommonBaseAscii_GS 29
#define ComGoogleCommonBaseAscii_HT 9
#define ComGoogleCommonBaseAscii_LF 10
#define ComGoogleCommonBaseAscii_MAX 0x007f
#define ComGoogleCommonBaseAscii_MIN 0x0000
#define ComGoogleCommonBaseAscii_NAK 21
#define ComGoogleCommonBaseAscii_NL 10
#define ComGoogleCommonBaseAscii_NUL 0
#define ComGoogleCommonBaseAscii_RS 30
#define ComGoogleCommonBaseAscii_SI 15
#define ComGoogleCommonBaseAscii_SO 14
#define ComGoogleCommonBaseAscii_SOH 1
#define ComGoogleCommonBaseAscii_SP 32
#define ComGoogleCommonBaseAscii_SPACE 32
#define ComGoogleCommonBaseAscii_STX 2
#define ComGoogleCommonBaseAscii_SUB 26
#define ComGoogleCommonBaseAscii_SYN 22
#define ComGoogleCommonBaseAscii_US 31
#define ComGoogleCommonBaseAscii_VT 11
#define ComGoogleCommonBaseAscii_XOFF 19
#define ComGoogleCommonBaseAscii_XON 17

@interface ComGoogleCommonBaseAscii : NSObject {
}

+ (NSString *)toLowerCaseWithNSString:(NSString *)string;

+ (NSString *)toLowerCaseWithJavaLangCharSequence:(id<JavaLangCharSequence>)chars;

+ (jchar)toLowerCaseWithChar:(jchar)c;

+ (NSString *)toUpperCaseWithNSString:(NSString *)string;

+ (NSString *)toUpperCaseWithJavaLangCharSequence:(id<JavaLangCharSequence>)chars;

+ (jchar)toUpperCaseWithChar:(jchar)c;

+ (jboolean)isLowerCaseWithChar:(jchar)c;

+ (jboolean)isUpperCaseWithChar:(jchar)c;

@end

__attribute__((always_inline)) inline void ComGoogleCommonBaseAscii_init() {}
FOUNDATION_EXPORT NSString *ComGoogleCommonBaseAscii_toLowerCaseWithNSString_(NSString *string);
FOUNDATION_EXPORT NSString *ComGoogleCommonBaseAscii_toLowerCaseWithJavaLangCharSequence_(id<JavaLangCharSequence> chars);
FOUNDATION_EXPORT jchar ComGoogleCommonBaseAscii_toLowerCaseWithChar_(jchar c);
FOUNDATION_EXPORT NSString *ComGoogleCommonBaseAscii_toUpperCaseWithNSString_(NSString *string);
FOUNDATION_EXPORT NSString *ComGoogleCommonBaseAscii_toUpperCaseWithJavaLangCharSequence_(id<JavaLangCharSequence> chars);
FOUNDATION_EXPORT jchar ComGoogleCommonBaseAscii_toUpperCaseWithChar_(jchar c);
FOUNDATION_EXPORT jboolean ComGoogleCommonBaseAscii_isLowerCaseWithChar_(jchar c);
FOUNDATION_EXPORT jboolean ComGoogleCommonBaseAscii_isUpperCaseWithChar_(jchar c);

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBaseAscii, NUL, jbyte)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBaseAscii, SOH, jbyte)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBaseAscii, STX, jbyte)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBaseAscii, ETX, jbyte)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBaseAscii, EOT, jbyte)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBaseAscii, ENQ, jbyte)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBaseAscii, ACK, jbyte)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBaseAscii, BEL, jbyte)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBaseAscii, BS, jbyte)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBaseAscii, HT, jbyte)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBaseAscii, LF, jbyte)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBaseAscii, NL, jbyte)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBaseAscii, VT, jbyte)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBaseAscii, FF, jbyte)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBaseAscii, CR, jbyte)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBaseAscii, SO, jbyte)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBaseAscii, SI, jbyte)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBaseAscii, DLE, jbyte)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBaseAscii, DC1, jbyte)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBaseAscii, XON, jbyte)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBaseAscii, DC2, jbyte)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBaseAscii, DC3, jbyte)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBaseAscii, XOFF, jbyte)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBaseAscii, DC4, jbyte)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBaseAscii, NAK, jbyte)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBaseAscii, SYN, jbyte)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBaseAscii, ETB, jbyte)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBaseAscii, CAN, jbyte)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBaseAscii, EM, jbyte)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBaseAscii, SUB, jbyte)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBaseAscii, ESC, jbyte)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBaseAscii, FS, jbyte)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBaseAscii, GS, jbyte)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBaseAscii, RS, jbyte)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBaseAscii, US, jbyte)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBaseAscii, SP, jbyte)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBaseAscii, SPACE, jbyte)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBaseAscii, DEL, jbyte)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBaseAscii, MIN, jchar)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonBaseAscii, MAX, jchar)
#endif
