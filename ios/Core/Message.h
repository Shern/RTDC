//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nicolasmenard/IdeaProjects/RTDC/core/src/main/java/rtdc/core/model/Message.java
//

#ifndef _Message_H_
#define _Message_H_

#include "J2ObjC_header.h"
#include "ObjectProperty.h"
#include "RootObject.h"
#include "java/lang/Enum.h"

@class IOSObjectArray;
@class JavaUtilDate;
@class JsonJSONObject;
@class ModelMessage_StatusEnum;
@class ModelUser;
@protocol ModelObjectProperty;
@protocol UtilStringifier;

@interface ModelMessage : ModelRootObject

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithJsonJSONObject:(JsonJSONObject *)object;

- (NSString *)getContent;

- (jint)getId;

- (IOSObjectArray *)getProperties;

- (ModelUser *)getReceiver;

- (jint)getReceiverID;

- (ModelUser *)getSender;

- (jint)getSenderID;

- (ModelMessage_StatusEnum *)getStatus;

- (JavaUtilDate *)getTimeSent;

- (NSString *)getType;

- (id)getValueWithModelObjectProperty:(id<ModelObjectProperty>)property;

- (void)setContentWithNSString:(NSString *)content;

- (void)setIdWithInt:(jint)id_;

- (void)setReceiverWithModelUser:(ModelUser *)receiver;

- (void)setReceiverIDWithInt:(jint)receiverID;

- (void)setSenderWithModelUser:(ModelUser *)sender;

- (void)setSenderIDWithInt:(jint)senderID;

- (void)setStatusWithModelMessage_StatusEnum:(ModelMessage_StatusEnum *)status;

- (void)setTimeSentWithJavaUtilDate:(JavaUtilDate *)timeSent;

@end

J2OBJC_EMPTY_STATIC_INIT(ModelMessage)

FOUNDATION_EXPORT void ModelMessage_init(ModelMessage *self);

FOUNDATION_EXPORT ModelMessage *new_ModelMessage_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void ModelMessage_initWithJsonJSONObject_(ModelMessage *self, JsonJSONObject *object);

FOUNDATION_EXPORT ModelMessage *new_ModelMessage_initWithJsonJSONObject_(JsonJSONObject *object) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ModelMessage)

@compatibility_alias RtdcCoreModelMessage ModelMessage;

typedef NS_ENUM(NSUInteger, ModelMessage_Properties) {
  ModelMessage_Properties_id = 0,
  ModelMessage_Properties_sender = 1,
  ModelMessage_Properties_senderID = 2,
  ModelMessage_Properties_receiver = 3,
  ModelMessage_Properties_receiverID = 4,
  ModelMessage_Properties_status = 5,
  ModelMessage_Properties_timeSent = 6,
  ModelMessage_Properties_content = 7,
};

@interface ModelMessage_PropertiesEnum : JavaLangEnum < NSCopying, ModelObjectProperty >

#pragma mark Package-Private

+ (IOSObjectArray *)values;
FOUNDATION_EXPORT IOSObjectArray *ModelMessage_PropertiesEnum_values();

+ (ModelMessage_PropertiesEnum *)valueOfWithNSString:(NSString *)name;
FOUNDATION_EXPORT ModelMessage_PropertiesEnum *ModelMessage_PropertiesEnum_valueOfWithNSString_(NSString *name);

- (id)copyWithZone:(NSZone *)zone;

@end

J2OBJC_STATIC_INIT(ModelMessage_PropertiesEnum)

FOUNDATION_EXPORT ModelMessage_PropertiesEnum *ModelMessage_PropertiesEnum_values_[];

#define ModelMessage_PropertiesEnum_id ModelMessage_PropertiesEnum_values_[ModelMessage_Properties_id]
J2OBJC_ENUM_CONSTANT_GETTER(ModelMessage_PropertiesEnum, id)

#define ModelMessage_PropertiesEnum_sender ModelMessage_PropertiesEnum_values_[ModelMessage_Properties_sender]
J2OBJC_ENUM_CONSTANT_GETTER(ModelMessage_PropertiesEnum, sender)

#define ModelMessage_PropertiesEnum_senderID ModelMessage_PropertiesEnum_values_[ModelMessage_Properties_senderID]
J2OBJC_ENUM_CONSTANT_GETTER(ModelMessage_PropertiesEnum, senderID)

#define ModelMessage_PropertiesEnum_receiver ModelMessage_PropertiesEnum_values_[ModelMessage_Properties_receiver]
J2OBJC_ENUM_CONSTANT_GETTER(ModelMessage_PropertiesEnum, receiver)

#define ModelMessage_PropertiesEnum_receiverID ModelMessage_PropertiesEnum_values_[ModelMessage_Properties_receiverID]
J2OBJC_ENUM_CONSTANT_GETTER(ModelMessage_PropertiesEnum, receiverID)

#define ModelMessage_PropertiesEnum_status ModelMessage_PropertiesEnum_values_[ModelMessage_Properties_status]
J2OBJC_ENUM_CONSTANT_GETTER(ModelMessage_PropertiesEnum, status)

#define ModelMessage_PropertiesEnum_timeSent ModelMessage_PropertiesEnum_values_[ModelMessage_Properties_timeSent]
J2OBJC_ENUM_CONSTANT_GETTER(ModelMessage_PropertiesEnum, timeSent)

#define ModelMessage_PropertiesEnum_content ModelMessage_PropertiesEnum_values_[ModelMessage_Properties_content]
J2OBJC_ENUM_CONSTANT_GETTER(ModelMessage_PropertiesEnum, content)

J2OBJC_TYPE_LITERAL_HEADER(ModelMessage_PropertiesEnum)

typedef NS_ENUM(NSUInteger, ModelMessage_Status) {
  ModelMessage_Status_sent = 0,
  ModelMessage_Status_delivered = 1,
  ModelMessage_Status_read = 2,
};

@interface ModelMessage_StatusEnum : JavaLangEnum < NSCopying >

#pragma mark Public

+ (id<UtilStringifier>)getStringifier;

#pragma mark Package-Private

+ (IOSObjectArray *)values;
FOUNDATION_EXPORT IOSObjectArray *ModelMessage_StatusEnum_values();

+ (ModelMessage_StatusEnum *)valueOfWithNSString:(NSString *)name;
FOUNDATION_EXPORT ModelMessage_StatusEnum *ModelMessage_StatusEnum_valueOfWithNSString_(NSString *name);

- (id)copyWithZone:(NSZone *)zone;

@end

J2OBJC_STATIC_INIT(ModelMessage_StatusEnum)

FOUNDATION_EXPORT ModelMessage_StatusEnum *ModelMessage_StatusEnum_values_[];

#define ModelMessage_StatusEnum_sent ModelMessage_StatusEnum_values_[ModelMessage_Status_sent]
J2OBJC_ENUM_CONSTANT_GETTER(ModelMessage_StatusEnum, sent)

#define ModelMessage_StatusEnum_delivered ModelMessage_StatusEnum_values_[ModelMessage_Status_delivered]
J2OBJC_ENUM_CONSTANT_GETTER(ModelMessage_StatusEnum, delivered)

#define ModelMessage_StatusEnum_read ModelMessage_StatusEnum_values_[ModelMessage_Status_read]
J2OBJC_ENUM_CONSTANT_GETTER(ModelMessage_StatusEnum, read)

FOUNDATION_EXPORT id<UtilStringifier> ModelMessage_StatusEnum_getStringifier();

J2OBJC_TYPE_LITERAL_HEADER(ModelMessage_StatusEnum)

#endif // _Message_H_
