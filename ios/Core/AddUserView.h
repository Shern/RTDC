//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nicolasmenard/IdeaProjects/RTDC/core/src/main/java/rtdc/core/view/AddUserView.java
//

#ifndef _AddUserView_H_
#define _AddUserView_H_

#include "Dialog.h"
#include "J2ObjC_header.h"

@protocol ViewAddUserView < ViewDialog, NSObject, JavaObject >

- (NSString *)getUsernameAsString;

- (void)setUsernameAsStringWithNSString:(NSString *)value;

- (void)setErrorForUsernameWithNSString:(NSString *)error;

- (NSString *)getSurnameAsString;

- (void)setSurnameAsStringWithNSString:(NSString *)value;

- (void)setErrorForSurnameWithNSString:(NSString *)error;

- (NSString *)getFirstnameAsString;

- (void)setFirstnameAsStringWithNSString:(NSString *)value;

- (void)setErrorForFirstnameWithNSString:(NSString *)error;

- (NSString *)getEmailAsString;

- (void)setEmailAsStringWithNSString:(NSString *)value;

- (jlong)getPhoneAsLong;

- (void)setPhoneAsLongWithLong:(jlong)value;

- (NSString *)getRoleAsString;

- (void)setRoleAsStringWithNSString:(NSString *)value;

- (NSString *)getPasswordAsString;

- (void)setPasswordAsStringWithNSString:(NSString *)value;

- (void)setErrorForPasswordWithNSString:(NSString *)error;

- (NSString *)getPermissionAsString;

- (void)setPermissionAsStringWithNSString:(NSString *)value;

- (void)setPermissionForSurnameWithNSString:(NSString *)error;

- (void)hideDeleteButton;

@end

J2OBJC_EMPTY_STATIC_INIT(ViewAddUserView)

J2OBJC_TYPE_LITERAL_HEADER(ViewAddUserView)

#define RtdcCoreViewAddUserView ViewAddUserView

#endif // _AddUserView_H_
