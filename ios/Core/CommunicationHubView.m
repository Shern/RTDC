//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nicolasmenard/IdeaProjects/RTDC/core/src/main/java/rtdc/core/view/CommunicationHubView.java
//

#include "CommunicationHubView.h"
#include "J2ObjC_source.h"
#include "Message.h"
#include "User.h"
#include "java/util/List.h"

@interface ViewCommunicationHubView : NSObject

@end

@implementation ViewCommunicationHubView

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "setRecentContactsWithJavaUtilList:", "setRecentContacts", "V", 0x401, NULL, NULL },
    { "setMessagesWithJavaUtilList:withModelUser:", "setMessages", "V", 0x401, NULL, NULL },
    { "setContactsWithJavaUtilList:", "setContacts", "V", 0x401, NULL, NULL },
    { "addMessageWithModelMessage:", "addMessage", "V", 0x401, NULL, NULL },
    { "addMessagesAtStartWithJavaUtilList:", "addMessagesAtStart", "V", 0x401, NULL, NULL },
    { "getMessagingUser", NULL, "Lrtdc.core.model.User;", 0x401, NULL, NULL },
  };
  static const J2ObjcClassInfo _ViewCommunicationHubView = { 2, "CommunicationHubView", "rtdc.core.view", NULL, 0x609, 6, methods, 0, NULL, 0, NULL, 0, NULL, NULL, NULL };
  return &_ViewCommunicationHubView;
}

@end

J2OBJC_INTERFACE_TYPE_LITERAL_SOURCE(ViewCommunicationHubView)
