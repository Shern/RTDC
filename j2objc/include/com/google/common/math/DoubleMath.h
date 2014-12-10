//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-0.9.5/j2objc/guava/sources/com/google/common/math/DoubleMath.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonMathDoubleMath_RESTRICT
#define ComGoogleCommonMathDoubleMath_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonMathDoubleMath_RESTRICT
#if !defined (_ComGoogleCommonMathDoubleMath_) && (ComGoogleCommonMathDoubleMath_INCLUDE_ALL || ComGoogleCommonMathDoubleMath_INCLUDE)
#define _ComGoogleCommonMathDoubleMath_

@class IOSDoubleArray;
@class JavaMathBigInteger;
@class JavaMathRoundingModeEnum;


#define ComGoogleCommonMathDoubleMath_MAX_FACTORIAL 170
#define ComGoogleCommonMathDoubleMath_MAX_INT_AS_DOUBLE 2.147483647E9
#define ComGoogleCommonMathDoubleMath_MAX_LONG_AS_DOUBLE_PLUS_ONE 9.223372036854776E18
#define ComGoogleCommonMathDoubleMath_MIN_INT_AS_DOUBLE -2.147483648E9
#define ComGoogleCommonMathDoubleMath_MIN_LONG_AS_DOUBLE -9.223372036854776E18

@interface ComGoogleCommonMathDoubleMath : NSObject {
}

+ (jdouble)roundIntermediateWithDouble:(jdouble)x
          withJavaMathRoundingModeEnum:(JavaMathRoundingModeEnum *)mode;

+ (jint)roundToIntWithDouble:(jdouble)x
withJavaMathRoundingModeEnum:(JavaMathRoundingModeEnum *)mode;

+ (jlong)roundToLongWithDouble:(jdouble)x
  withJavaMathRoundingModeEnum:(JavaMathRoundingModeEnum *)mode;

+ (JavaMathBigInteger *)roundToBigIntegerWithDouble:(jdouble)x
                       withJavaMathRoundingModeEnum:(JavaMathRoundingModeEnum *)mode;

+ (jboolean)isPowerOfTwoWithDouble:(jdouble)x;

+ (jdouble)log2WithDouble:(jdouble)x;

+ (jint)log2WithDouble:(jdouble)x
withJavaMathRoundingModeEnum:(JavaMathRoundingModeEnum *)mode;

+ (jboolean)isMathematicalIntegerWithDouble:(jdouble)x;

+ (jdouble)factorialWithInt:(jint)n;

+ (jboolean)fuzzyEqualsWithDouble:(jdouble)a
                       withDouble:(jdouble)b
                       withDouble:(jdouble)tolerance;

+ (jint)fuzzyCompareWithDouble:(jdouble)a
                    withDouble:(jdouble)b
                    withDouble:(jdouble)tolerance;

@end

FOUNDATION_EXPORT BOOL ComGoogleCommonMathDoubleMath_initialized;
J2OBJC_STATIC_INIT(ComGoogleCommonMathDoubleMath)
FOUNDATION_EXPORT jdouble ComGoogleCommonMathDoubleMath_roundIntermediateWithDouble_withJavaMathRoundingModeEnum_(jdouble x, JavaMathRoundingModeEnum *mode);
FOUNDATION_EXPORT jint ComGoogleCommonMathDoubleMath_roundToIntWithDouble_withJavaMathRoundingModeEnum_(jdouble x, JavaMathRoundingModeEnum *mode);
FOUNDATION_EXPORT jlong ComGoogleCommonMathDoubleMath_roundToLongWithDouble_withJavaMathRoundingModeEnum_(jdouble x, JavaMathRoundingModeEnum *mode);
FOUNDATION_EXPORT JavaMathBigInteger *ComGoogleCommonMathDoubleMath_roundToBigIntegerWithDouble_withJavaMathRoundingModeEnum_(jdouble x, JavaMathRoundingModeEnum *mode);
FOUNDATION_EXPORT jboolean ComGoogleCommonMathDoubleMath_isPowerOfTwoWithDouble_(jdouble x);
FOUNDATION_EXPORT jdouble ComGoogleCommonMathDoubleMath_log2WithDouble_(jdouble x);
FOUNDATION_EXPORT jint ComGoogleCommonMathDoubleMath_log2WithDouble_withJavaMathRoundingModeEnum_(jdouble x, JavaMathRoundingModeEnum *mode);
FOUNDATION_EXPORT jboolean ComGoogleCommonMathDoubleMath_isMathematicalIntegerWithDouble_(jdouble x);
FOUNDATION_EXPORT jdouble ComGoogleCommonMathDoubleMath_factorialWithInt_(jint n);
FOUNDATION_EXPORT jboolean ComGoogleCommonMathDoubleMath_fuzzyEqualsWithDouble_withDouble_withDouble_(jdouble a, jdouble b, jdouble tolerance);
FOUNDATION_EXPORT jint ComGoogleCommonMathDoubleMath_fuzzyCompareWithDouble_withDouble_withDouble_(jdouble a, jdouble b, jdouble tolerance);

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonMathDoubleMath, MIN_INT_AS_DOUBLE, jdouble)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonMathDoubleMath, MAX_INT_AS_DOUBLE, jdouble)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonMathDoubleMath, MIN_LONG_AS_DOUBLE, jdouble)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonMathDoubleMath, MAX_LONG_AS_DOUBLE_PLUS_ONE, jdouble)

FOUNDATION_EXPORT jdouble ComGoogleCommonMathDoubleMath_LN_2_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonMathDoubleMath, LN_2_, jdouble)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonMathDoubleMath, MAX_FACTORIAL, jint)

FOUNDATION_EXPORT IOSDoubleArray *ComGoogleCommonMathDoubleMath_everySixteenthFactorial_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonMathDoubleMath, everySixteenthFactorial_, IOSDoubleArray *)
#endif
