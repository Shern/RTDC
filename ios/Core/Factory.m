//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nicolasmenard/IdeaProjects/RTDC/core/src/main/java/rtdc/core/impl/Factory.java
//

#include "Dispatcher.h"
#include "Factory.h"
#include "HttpRequest.h"
#include "J2ObjC_source.h"
#include "Storage.h"
#include "VoipController.h"

@interface ImplFactory : NSObject

@end

@implementation ImplFactory

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "newHttpRequestWithNSString:withImplHttpRequest_RequestMethodEnum:", "newHttpRequest", "Lrtdc.core.impl.HttpRequest;", 0x401, NULL, NULL },
    { "newDispatcher", NULL, "Lrtdc.core.impl.Dispatcher;", 0x401, NULL, NULL },
    { "getStorage", NULL, "Lrtdc.core.impl.Storage;", 0x401, NULL, NULL },
    { "getVoipController", NULL, "Lrtdc.core.impl.VoipController;", 0x401, NULL, NULL },
  };
  static const J2ObjcClassInfo _ImplFactory = { 2, "Factory", "rtdc.core.impl", NULL, 0x609, 4, methods, 0, NULL, 0, NULL, 0, NULL, NULL, NULL };
  return &_ImplFactory;
}

@end

J2OBJC_INTERFACE_TYPE_LITERAL_SOURCE(ImplFactory)
