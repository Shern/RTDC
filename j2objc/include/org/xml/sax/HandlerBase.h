//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/xml/sax/HandlerBase.java
//

#ifndef _OrgXmlSaxHandlerBase_H_
#define _OrgXmlSaxHandlerBase_H_

@class IOSCharArray;
@class OrgXmlSaxInputSource;
@class OrgXmlSaxSAXParseException;
@protocol OrgXmlSaxAttributeList;
@protocol OrgXmlSaxLocator;

#import "JreEmulation.h"
#include "org/xml/sax/DTDHandler.h"
#include "org/xml/sax/DocumentHandler.h"
#include "org/xml/sax/EntityResolver.h"
#include "org/xml/sax/ErrorHandler.h"

@interface OrgXmlSaxHandlerBase : NSObject < OrgXmlSaxEntityResolver, OrgXmlSaxDTDHandler, OrgXmlSaxDocumentHandler, OrgXmlSaxErrorHandler > {
}

- (OrgXmlSaxInputSource *)resolveEntityWithNSString:(NSString *)publicId
                                       withNSString:(NSString *)systemId;

- (void)notationDeclWithNSString:(NSString *)name
                    withNSString:(NSString *)publicId
                    withNSString:(NSString *)systemId;

- (void)unparsedEntityDeclWithNSString:(NSString *)name
                          withNSString:(NSString *)publicId
                          withNSString:(NSString *)systemId
                          withNSString:(NSString *)notationName;

- (void)setDocumentLocatorWithOrgXmlSaxLocator:(id<OrgXmlSaxLocator>)locator;

- (void)startDocument;

- (void)endDocument;

- (void)startElementWithNSString:(NSString *)name
      withOrgXmlSaxAttributeList:(id<OrgXmlSaxAttributeList>)attributes;

- (void)endElementWithNSString:(NSString *)name;

- (void)charactersWithCharArray:(IOSCharArray *)ch
                        withInt:(jint)start
                        withInt:(jint)length;

- (void)ignorableWhitespaceWithCharArray:(IOSCharArray *)ch
                                 withInt:(jint)start
                                 withInt:(jint)length;

- (void)processingInstructionWithNSString:(NSString *)target
                             withNSString:(NSString *)data;

- (void)warningWithOrgXmlSaxSAXParseException:(OrgXmlSaxSAXParseException *)e;

- (void)errorWithOrgXmlSaxSAXParseException:(OrgXmlSaxSAXParseException *)e;

- (void)fatalErrorWithOrgXmlSaxSAXParseException:(OrgXmlSaxSAXParseException *)e;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void OrgXmlSaxHandlerBase_init() {}

#endif // _OrgXmlSaxHandlerBase_H_