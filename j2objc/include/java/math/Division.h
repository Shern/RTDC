//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: apache_harmony/classlib/modules/math/src/main/java/java/math/Division.java
//

#ifndef _JavaMathDivision_H_
#define _JavaMathDivision_H_

@class IOSIntArray;
@class IOSObjectArray;
@class JavaMathBigInteger;

#import "JreEmulation.h"

@interface JavaMathDivision : NSObject {
}

+ (IOSIntArray *)divideWithIntArray:(IOSIntArray *)quot
                            withInt:(jint)quotLength
                       withIntArray:(IOSIntArray *)a
                            withInt:(jint)aLength
                       withIntArray:(IOSIntArray *)b
                            withInt:(jint)bLength;

+ (jint)divideArrayByIntWithIntArray:(IOSIntArray *)dest
                        withIntArray:(IOSIntArray *)src
                             withInt:(jint)srcLength
                             withInt:(jint)divisor;

+ (jint)remainderArrayByIntWithIntArray:(IOSIntArray *)src
                                withInt:(jint)srcLength
                                withInt:(jint)divisor;

+ (jint)remainderWithJavaMathBigInteger:(JavaMathBigInteger *)dividend
                                withInt:(jint)divisor;

+ (jlong)divideLongByIntWithLong:(jlong)a
                         withInt:(jint)b;

+ (IOSObjectArray *)divideAndRemainderByIntegerWithJavaMathBigInteger:(JavaMathBigInteger *)val
                                                              withInt:(jint)divisor
                                                              withInt:(jint)divisorSign;

+ (jint)multiplyAndSubtractWithIntArray:(IOSIntArray *)a
                                withInt:(jint)start
                           withIntArray:(IOSIntArray *)b
                                withInt:(jint)bLen
                                withInt:(jint)c;

+ (JavaMathBigInteger *)gcdBinaryWithJavaMathBigInteger:(JavaMathBigInteger *)op1
                                 withJavaMathBigInteger:(JavaMathBigInteger *)op2;

+ (jlong)gcdBinaryWithLong:(jlong)op1
                  withLong:(jlong)op2;

+ (JavaMathBigInteger *)modInverseMontgomeryWithJavaMathBigInteger:(JavaMathBigInteger *)a
                                            withJavaMathBigInteger:(JavaMathBigInteger *)p;

+ (JavaMathBigInteger *)squareAndMultiplyWithJavaMathBigInteger:(JavaMathBigInteger *)x2
                                         withJavaMathBigInteger:(JavaMathBigInteger *)a2
                                         withJavaMathBigInteger:(JavaMathBigInteger *)exponent
                                         withJavaMathBigInteger:(JavaMathBigInteger *)modulus
                                                        withInt:(jint)n2;

+ (JavaMathBigInteger *)modInverseHarsWithJavaMathBigInteger:(JavaMathBigInteger *)a
                                      withJavaMathBigInteger:(JavaMathBigInteger *)m;

+ (JavaMathBigInteger *)slidingWindowWithJavaMathBigInteger:(JavaMathBigInteger *)x2
                                     withJavaMathBigInteger:(JavaMathBigInteger *)a2
                                     withJavaMathBigInteger:(JavaMathBigInteger *)exponent
                                     withJavaMathBigInteger:(JavaMathBigInteger *)modulus
                                                    withInt:(jint)n2;

+ (JavaMathBigInteger *)oddModPowWithJavaMathBigInteger:(JavaMathBigInteger *)base
                                 withJavaMathBigInteger:(JavaMathBigInteger *)exponent
                                 withJavaMathBigInteger:(JavaMathBigInteger *)modulus;

+ (JavaMathBigInteger *)evenModPowWithJavaMathBigInteger:(JavaMathBigInteger *)base
                                  withJavaMathBigInteger:(JavaMathBigInteger *)exponent
                                  withJavaMathBigInteger:(JavaMathBigInteger *)modulus;

+ (JavaMathBigInteger *)pow2ModPowWithJavaMathBigInteger:(JavaMathBigInteger *)base
                                  withJavaMathBigInteger:(JavaMathBigInteger *)exponent
                                                 withInt:(jint)j;

+ (JavaMathBigInteger *)monProWithJavaMathBigInteger:(JavaMathBigInteger *)a
                              withJavaMathBigInteger:(JavaMathBigInteger *)b
                              withJavaMathBigInteger:(JavaMathBigInteger *)modulus
                                             withInt:(jint)n2;

+ (JavaMathBigInteger *)finalSubtractionWithIntArray:(IOSIntArray *)res
                              withJavaMathBigInteger:(JavaMathBigInteger *)modulus;

+ (JavaMathBigInteger *)modPow2InverseWithJavaMathBigInteger:(JavaMathBigInteger *)x
                                                     withInt:(jint)n;

+ (void)inplaceModPow2WithJavaMathBigInteger:(JavaMathBigInteger *)x
                                     withInt:(jint)n;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void JavaMathDivision_init() {}
FOUNDATION_EXPORT IOSIntArray *JavaMathDivision_divideWithIntArray_withInt_withIntArray_withInt_withIntArray_withInt_(IOSIntArray *quot, jint quotLength, IOSIntArray *a, jint aLength, IOSIntArray *b, jint bLength);
FOUNDATION_EXPORT jint JavaMathDivision_divideArrayByIntWithIntArray_withIntArray_withInt_withInt_(IOSIntArray *dest, IOSIntArray *src, jint srcLength, jint divisor);
FOUNDATION_EXPORT jint JavaMathDivision_remainderArrayByIntWithIntArray_withInt_withInt_(IOSIntArray *src, jint srcLength, jint divisor);
FOUNDATION_EXPORT jint JavaMathDivision_remainderWithJavaMathBigInteger_withInt_(JavaMathBigInteger *dividend, jint divisor);
FOUNDATION_EXPORT jlong JavaMathDivision_divideLongByIntWithLong_withInt_(jlong a, jint b);
FOUNDATION_EXPORT IOSObjectArray *JavaMathDivision_divideAndRemainderByIntegerWithJavaMathBigInteger_withInt_withInt_(JavaMathBigInteger *val, jint divisor, jint divisorSign);
FOUNDATION_EXPORT jint JavaMathDivision_multiplyAndSubtractWithIntArray_withInt_withIntArray_withInt_withInt_(IOSIntArray *a, jint start, IOSIntArray *b, jint bLen, jint c);
FOUNDATION_EXPORT JavaMathBigInteger *JavaMathDivision_gcdBinaryWithJavaMathBigInteger_withJavaMathBigInteger_(JavaMathBigInteger *op1, JavaMathBigInteger *op2);
FOUNDATION_EXPORT jlong JavaMathDivision_gcdBinaryWithLong_withLong_(jlong op1, jlong op2);
FOUNDATION_EXPORT JavaMathBigInteger *JavaMathDivision_modInverseMontgomeryWithJavaMathBigInteger_withJavaMathBigInteger_(JavaMathBigInteger *a, JavaMathBigInteger *p);
FOUNDATION_EXPORT JavaMathBigInteger *JavaMathDivision_squareAndMultiplyWithJavaMathBigInteger_withJavaMathBigInteger_withJavaMathBigInteger_withJavaMathBigInteger_withInt_(JavaMathBigInteger *x2, JavaMathBigInteger *a2, JavaMathBigInteger *exponent, JavaMathBigInteger *modulus, jint n2);
FOUNDATION_EXPORT JavaMathBigInteger *JavaMathDivision_modInverseHarsWithJavaMathBigInteger_withJavaMathBigInteger_(JavaMathBigInteger *a, JavaMathBigInteger *m);
FOUNDATION_EXPORT JavaMathBigInteger *JavaMathDivision_slidingWindowWithJavaMathBigInteger_withJavaMathBigInteger_withJavaMathBigInteger_withJavaMathBigInteger_withInt_(JavaMathBigInteger *x2, JavaMathBigInteger *a2, JavaMathBigInteger *exponent, JavaMathBigInteger *modulus, jint n2);
FOUNDATION_EXPORT JavaMathBigInteger *JavaMathDivision_oddModPowWithJavaMathBigInteger_withJavaMathBigInteger_withJavaMathBigInteger_(JavaMathBigInteger *base, JavaMathBigInteger *exponent, JavaMathBigInteger *modulus);
FOUNDATION_EXPORT JavaMathBigInteger *JavaMathDivision_evenModPowWithJavaMathBigInteger_withJavaMathBigInteger_withJavaMathBigInteger_(JavaMathBigInteger *base, JavaMathBigInteger *exponent, JavaMathBigInteger *modulus);
FOUNDATION_EXPORT JavaMathBigInteger *JavaMathDivision_pow2ModPowWithJavaMathBigInteger_withJavaMathBigInteger_withInt_(JavaMathBigInteger *base, JavaMathBigInteger *exponent, jint j);
FOUNDATION_EXPORT JavaMathBigInteger *JavaMathDivision_monProWithJavaMathBigInteger_withJavaMathBigInteger_withJavaMathBigInteger_withInt_(JavaMathBigInteger *a, JavaMathBigInteger *b, JavaMathBigInteger *modulus, jint n2);
FOUNDATION_EXPORT JavaMathBigInteger *JavaMathDivision_finalSubtractionWithIntArray_withJavaMathBigInteger_(IOSIntArray *res, JavaMathBigInteger *modulus);
FOUNDATION_EXPORT JavaMathBigInteger *JavaMathDivision_modPow2InverseWithJavaMathBigInteger_withInt_(JavaMathBigInteger *x, jint n);
FOUNDATION_EXPORT void JavaMathDivision_inplaceModPow2WithJavaMathBigInteger_withInt_(JavaMathBigInteger *x, jint n);

#endif // _JavaMathDivision_H_