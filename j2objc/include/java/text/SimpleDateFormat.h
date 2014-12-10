//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/text/SimpleDateFormat.java
//

#ifndef _JavaTextSimpleDateFormat_H_
#define _JavaTextSimpleDateFormat_H_

@class IOSObjectArray;
@class JavaIoObjectInputStream;
@class JavaIoObjectOutputStream;
@class JavaLangStringBuffer;
@class JavaTextDateFormatSymbols;
@class JavaTextFieldPosition;
@class JavaTextParsePosition;
@class JavaUtilDate;
@class JavaUtilLocale;
@class JavaUtilTimeZone;
@protocol JavaTextAttributedCharacterIterator;
@protocol JavaUtilList;

#import "JreEmulation.h"
#include "java/text/DateFormat.h"

#define JavaTextSimpleDateFormat_RFC_822_TIMEZONE_FIELD 18
#define JavaTextSimpleDateFormat_STAND_ALONE_DAY_OF_WEEK_FIELD 20
#define JavaTextSimpleDateFormat_STAND_ALONE_MONTH_FIELD 19
#define JavaTextSimpleDateFormat_serialVersionUID 4774881970558875024LL

@interface JavaTextSimpleDateFormat : JavaTextDateFormat {
}

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)pattern;

- (instancetype)initWithNSString:(NSString *)template_
   withJavaTextDateFormatSymbols:(JavaTextDateFormatSymbols *)value;

- (instancetype)initWithNSString:(NSString *)template_
              withJavaUtilLocale:(JavaUtilLocale *)locale;

- (void)applyLocalizedPatternWithNSString:(NSString *)template_;

- (void)applyPatternWithNSString:(NSString *)template_;

- (id)clone;

- (jboolean)isEqual:(id)object;

- (id<JavaTextAttributedCharacterIterator>)formatToCharacterIteratorWithId:(id)object;

- (JavaLangStringBuffer *)formatWithJavaUtilDate:(JavaUtilDate *)date
                        withJavaLangStringBuffer:(JavaLangStringBuffer *)buffer
                       withJavaTextFieldPosition:(JavaTextFieldPosition *)fieldPos;

- (JavaUtilDate *)get2DigitYearStart;

- (JavaTextDateFormatSymbols *)getDateFormatSymbols;

- (NSUInteger)hash;

- (JavaUtilDate *)parseWithNSString:(NSString *)string
          withJavaTextParsePosition:(JavaTextParsePosition *)position;

- (void)set2DigitYearStartWithJavaUtilDate:(JavaUtilDate *)date;

- (void)setDateFormatSymbolsWithJavaTextDateFormatSymbols:(JavaTextDateFormatSymbols *)value;

- (NSString *)toLocalizedPattern;

- (NSString *)toPattern;

@end

FOUNDATION_EXPORT BOOL JavaTextSimpleDateFormat_initialized;
J2OBJC_STATIC_INIT(JavaTextSimpleDateFormat)

J2OBJC_STATIC_FIELD_GETTER(JavaTextSimpleDateFormat, serialVersionUID, jlong)

FOUNDATION_EXPORT NSString *JavaTextSimpleDateFormat_PATTERN_CHARS_;
J2OBJC_STATIC_FIELD_GETTER(JavaTextSimpleDateFormat, PATTERN_CHARS_, NSString *)

J2OBJC_STATIC_FIELD_GETTER(JavaTextSimpleDateFormat, RFC_822_TIMEZONE_FIELD, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaTextSimpleDateFormat, STAND_ALONE_MONTH_FIELD, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaTextSimpleDateFormat, STAND_ALONE_DAY_OF_WEEK_FIELD, jint)

FOUNDATION_EXPORT IOSObjectArray *JavaTextSimpleDateFormat_serialPersistentFields_;
J2OBJC_STATIC_FIELD_GETTER(JavaTextSimpleDateFormat, serialPersistentFields_, IOSObjectArray *)

#endif // _JavaTextSimpleDateFormat_H_
