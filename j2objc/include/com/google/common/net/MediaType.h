//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-0.9.5/j2objc/guava/sources/com/google/common/net/MediaType.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonNetMediaType_RESTRICT
#define ComGoogleCommonNetMediaType_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonNetMediaType_RESTRICT
#if !defined (_ComGoogleCommonNetMediaType_) && (ComGoogleCommonNetMediaType_INCLUDE_ALL || ComGoogleCommonNetMediaType_INCLUDE)
#define _ComGoogleCommonNetMediaType_

@class ComGoogleCommonBaseCharMatcher;
@class ComGoogleCommonBaseJoiner_MapJoiner;
@class ComGoogleCommonBaseOptional;
@class ComGoogleCommonCollectImmutableListMultimap;
@class ComGoogleCommonCollectImmutableMap;
@class JavaNioCharsetCharset;
@protocol ComGoogleCommonCollectMultimap;
@protocol JavaUtilMap;


@interface ComGoogleCommonNetMediaType : NSObject {
}

- (NSString *)type;

- (NSString *)subtype;

- (ComGoogleCommonCollectImmutableListMultimap *)parameters;

- (ComGoogleCommonBaseOptional *)charset;

- (ComGoogleCommonNetMediaType *)withoutParameters;

- (ComGoogleCommonNetMediaType *)withParametersWithComGoogleCommonCollectMultimap:(id<ComGoogleCommonCollectMultimap>)parameters;

- (ComGoogleCommonNetMediaType *)withParameterWithNSString:(NSString *)attribute
                                              withNSString:(NSString *)value;

- (ComGoogleCommonNetMediaType *)withCharsetWithJavaNioCharsetCharset:(JavaNioCharsetCharset *)charset;

- (jboolean)hasWildcard;

- (jboolean)isWithComGoogleCommonNetMediaType:(ComGoogleCommonNetMediaType *)mediaTypeRange;

+ (ComGoogleCommonNetMediaType *)createWithNSString:(NSString *)type
                                       withNSString:(NSString *)subtype;

+ (ComGoogleCommonNetMediaType *)createApplicationTypeWithNSString:(NSString *)subtype;

+ (ComGoogleCommonNetMediaType *)createAudioTypeWithNSString:(NSString *)subtype;

+ (ComGoogleCommonNetMediaType *)createImageTypeWithNSString:(NSString *)subtype;

+ (ComGoogleCommonNetMediaType *)createTextTypeWithNSString:(NSString *)subtype;

+ (ComGoogleCommonNetMediaType *)createVideoTypeWithNSString:(NSString *)subtype;

+ (ComGoogleCommonNetMediaType *)parseWithNSString:(NSString *)input;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

- (NSString *)description;

@end

FOUNDATION_EXPORT BOOL ComGoogleCommonNetMediaType_initialized;
J2OBJC_STATIC_INIT(ComGoogleCommonNetMediaType)
FOUNDATION_EXPORT ComGoogleCommonNetMediaType *ComGoogleCommonNetMediaType_createWithNSString_withNSString_(NSString *type, NSString *subtype);
FOUNDATION_EXPORT ComGoogleCommonNetMediaType *ComGoogleCommonNetMediaType_createApplicationTypeWithNSString_(NSString *subtype);
FOUNDATION_EXPORT ComGoogleCommonNetMediaType *ComGoogleCommonNetMediaType_createAudioTypeWithNSString_(NSString *subtype);
FOUNDATION_EXPORT ComGoogleCommonNetMediaType *ComGoogleCommonNetMediaType_createImageTypeWithNSString_(NSString *subtype);
FOUNDATION_EXPORT ComGoogleCommonNetMediaType *ComGoogleCommonNetMediaType_createTextTypeWithNSString_(NSString *subtype);
FOUNDATION_EXPORT ComGoogleCommonNetMediaType *ComGoogleCommonNetMediaType_createVideoTypeWithNSString_(NSString *subtype);
FOUNDATION_EXPORT ComGoogleCommonNetMediaType *ComGoogleCommonNetMediaType_parseWithNSString_(NSString *input);

FOUNDATION_EXPORT NSString *ComGoogleCommonNetMediaType_CHARSET_ATTRIBUTE_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonNetMediaType, CHARSET_ATTRIBUTE_, NSString *)

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableListMultimap *ComGoogleCommonNetMediaType_UTF_8_CONSTANT_PARAMETERS_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonNetMediaType, UTF_8_CONSTANT_PARAMETERS_, ComGoogleCommonCollectImmutableListMultimap *)

FOUNDATION_EXPORT ComGoogleCommonBaseCharMatcher *ComGoogleCommonNetMediaType_TOKEN_MATCHER_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonNetMediaType, TOKEN_MATCHER_, ComGoogleCommonBaseCharMatcher *)

FOUNDATION_EXPORT ComGoogleCommonBaseCharMatcher *ComGoogleCommonNetMediaType_QUOTED_TEXT_MATCHER_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonNetMediaType, QUOTED_TEXT_MATCHER_, ComGoogleCommonBaseCharMatcher *)

FOUNDATION_EXPORT ComGoogleCommonBaseCharMatcher *ComGoogleCommonNetMediaType_LINEAR_WHITE_SPACE_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonNetMediaType, LINEAR_WHITE_SPACE_, ComGoogleCommonBaseCharMatcher *)

FOUNDATION_EXPORT NSString *ComGoogleCommonNetMediaType_APPLICATION_TYPE_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonNetMediaType, APPLICATION_TYPE_, NSString *)

FOUNDATION_EXPORT NSString *ComGoogleCommonNetMediaType_AUDIO_TYPE_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonNetMediaType, AUDIO_TYPE_, NSString *)

FOUNDATION_EXPORT NSString *ComGoogleCommonNetMediaType_IMAGE_TYPE_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonNetMediaType, IMAGE_TYPE_, NSString *)

FOUNDATION_EXPORT NSString *ComGoogleCommonNetMediaType_TEXT_TYPE_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonNetMediaType, TEXT_TYPE_, NSString *)

FOUNDATION_EXPORT NSString *ComGoogleCommonNetMediaType_VIDEO_TYPE_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonNetMediaType, VIDEO_TYPE_, NSString *)

FOUNDATION_EXPORT NSString *ComGoogleCommonNetMediaType_WILDCARD_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonNetMediaType, WILDCARD_, NSString *)

FOUNDATION_EXPORT ComGoogleCommonNetMediaType *ComGoogleCommonNetMediaType_ANY_TYPE_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonNetMediaType, ANY_TYPE_, ComGoogleCommonNetMediaType *)

FOUNDATION_EXPORT ComGoogleCommonNetMediaType *ComGoogleCommonNetMediaType_ANY_TEXT_TYPE_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonNetMediaType, ANY_TEXT_TYPE_, ComGoogleCommonNetMediaType *)

FOUNDATION_EXPORT ComGoogleCommonNetMediaType *ComGoogleCommonNetMediaType_ANY_IMAGE_TYPE_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonNetMediaType, ANY_IMAGE_TYPE_, ComGoogleCommonNetMediaType *)

FOUNDATION_EXPORT ComGoogleCommonNetMediaType *ComGoogleCommonNetMediaType_ANY_AUDIO_TYPE_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonNetMediaType, ANY_AUDIO_TYPE_, ComGoogleCommonNetMediaType *)

FOUNDATION_EXPORT ComGoogleCommonNetMediaType *ComGoogleCommonNetMediaType_ANY_VIDEO_TYPE_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonNetMediaType, ANY_VIDEO_TYPE_, ComGoogleCommonNetMediaType *)

FOUNDATION_EXPORT ComGoogleCommonNetMediaType *ComGoogleCommonNetMediaType_ANY_APPLICATION_TYPE_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonNetMediaType, ANY_APPLICATION_TYPE_, ComGoogleCommonNetMediaType *)

FOUNDATION_EXPORT ComGoogleCommonNetMediaType *ComGoogleCommonNetMediaType_CACHE_MANIFEST_UTF_8_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonNetMediaType, CACHE_MANIFEST_UTF_8_, ComGoogleCommonNetMediaType *)

FOUNDATION_EXPORT ComGoogleCommonNetMediaType *ComGoogleCommonNetMediaType_CSS_UTF_8_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonNetMediaType, CSS_UTF_8_, ComGoogleCommonNetMediaType *)

FOUNDATION_EXPORT ComGoogleCommonNetMediaType *ComGoogleCommonNetMediaType_CSV_UTF_8_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonNetMediaType, CSV_UTF_8_, ComGoogleCommonNetMediaType *)

FOUNDATION_EXPORT ComGoogleCommonNetMediaType *ComGoogleCommonNetMediaType_HTML_UTF_8_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonNetMediaType, HTML_UTF_8_, ComGoogleCommonNetMediaType *)

FOUNDATION_EXPORT ComGoogleCommonNetMediaType *ComGoogleCommonNetMediaType_I_CALENDAR_UTF_8_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonNetMediaType, I_CALENDAR_UTF_8_, ComGoogleCommonNetMediaType *)

FOUNDATION_EXPORT ComGoogleCommonNetMediaType *ComGoogleCommonNetMediaType_PLAIN_TEXT_UTF_8_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonNetMediaType, PLAIN_TEXT_UTF_8_, ComGoogleCommonNetMediaType *)

FOUNDATION_EXPORT ComGoogleCommonNetMediaType *ComGoogleCommonNetMediaType_TEXT_JAVASCRIPT_UTF_8_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonNetMediaType, TEXT_JAVASCRIPT_UTF_8_, ComGoogleCommonNetMediaType *)

FOUNDATION_EXPORT ComGoogleCommonNetMediaType *ComGoogleCommonNetMediaType_VCARD_UTF_8_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonNetMediaType, VCARD_UTF_8_, ComGoogleCommonNetMediaType *)

FOUNDATION_EXPORT ComGoogleCommonNetMediaType *ComGoogleCommonNetMediaType_WML_UTF_8_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonNetMediaType, WML_UTF_8_, ComGoogleCommonNetMediaType *)

FOUNDATION_EXPORT ComGoogleCommonNetMediaType *ComGoogleCommonNetMediaType_XML_UTF_8_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonNetMediaType, XML_UTF_8_, ComGoogleCommonNetMediaType *)

FOUNDATION_EXPORT ComGoogleCommonNetMediaType *ComGoogleCommonNetMediaType_BMP_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonNetMediaType, BMP_, ComGoogleCommonNetMediaType *)

FOUNDATION_EXPORT ComGoogleCommonNetMediaType *ComGoogleCommonNetMediaType_GIF_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonNetMediaType, GIF_, ComGoogleCommonNetMediaType *)

FOUNDATION_EXPORT ComGoogleCommonNetMediaType *ComGoogleCommonNetMediaType_ICO_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonNetMediaType, ICO_, ComGoogleCommonNetMediaType *)

FOUNDATION_EXPORT ComGoogleCommonNetMediaType *ComGoogleCommonNetMediaType_JPEG_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonNetMediaType, JPEG_, ComGoogleCommonNetMediaType *)

FOUNDATION_EXPORT ComGoogleCommonNetMediaType *ComGoogleCommonNetMediaType_PNG_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonNetMediaType, PNG_, ComGoogleCommonNetMediaType *)

FOUNDATION_EXPORT ComGoogleCommonNetMediaType *ComGoogleCommonNetMediaType_SVG_UTF_8_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonNetMediaType, SVG_UTF_8_, ComGoogleCommonNetMediaType *)

FOUNDATION_EXPORT ComGoogleCommonNetMediaType *ComGoogleCommonNetMediaType_TIFF_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonNetMediaType, TIFF_, ComGoogleCommonNetMediaType *)

FOUNDATION_EXPORT ComGoogleCommonNetMediaType *ComGoogleCommonNetMediaType_WEBP_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonNetMediaType, WEBP_, ComGoogleCommonNetMediaType *)

FOUNDATION_EXPORT ComGoogleCommonNetMediaType *ComGoogleCommonNetMediaType_MP4_AUDIO_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonNetMediaType, MP4_AUDIO_, ComGoogleCommonNetMediaType *)

FOUNDATION_EXPORT ComGoogleCommonNetMediaType *ComGoogleCommonNetMediaType_MPEG_AUDIO_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonNetMediaType, MPEG_AUDIO_, ComGoogleCommonNetMediaType *)

FOUNDATION_EXPORT ComGoogleCommonNetMediaType *ComGoogleCommonNetMediaType_OGG_AUDIO_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonNetMediaType, OGG_AUDIO_, ComGoogleCommonNetMediaType *)

FOUNDATION_EXPORT ComGoogleCommonNetMediaType *ComGoogleCommonNetMediaType_WEBM_AUDIO_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonNetMediaType, WEBM_AUDIO_, ComGoogleCommonNetMediaType *)

FOUNDATION_EXPORT ComGoogleCommonNetMediaType *ComGoogleCommonNetMediaType_MP4_VIDEO_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonNetMediaType, MP4_VIDEO_, ComGoogleCommonNetMediaType *)

FOUNDATION_EXPORT ComGoogleCommonNetMediaType *ComGoogleCommonNetMediaType_MPEG_VIDEO_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonNetMediaType, MPEG_VIDEO_, ComGoogleCommonNetMediaType *)

FOUNDATION_EXPORT ComGoogleCommonNetMediaType *ComGoogleCommonNetMediaType_OGG_VIDEO_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonNetMediaType, OGG_VIDEO_, ComGoogleCommonNetMediaType *)

FOUNDATION_EXPORT ComGoogleCommonNetMediaType *ComGoogleCommonNetMediaType_QUICKTIME_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonNetMediaType, QUICKTIME_, ComGoogleCommonNetMediaType *)

FOUNDATION_EXPORT ComGoogleCommonNetMediaType *ComGoogleCommonNetMediaType_WEBM_VIDEO_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonNetMediaType, WEBM_VIDEO_, ComGoogleCommonNetMediaType *)

FOUNDATION_EXPORT ComGoogleCommonNetMediaType *ComGoogleCommonNetMediaType_WMV_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonNetMediaType, WMV_, ComGoogleCommonNetMediaType *)

FOUNDATION_EXPORT ComGoogleCommonNetMediaType *ComGoogleCommonNetMediaType_APPLICATION_XML_UTF_8_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonNetMediaType, APPLICATION_XML_UTF_8_, ComGoogleCommonNetMediaType *)

FOUNDATION_EXPORT ComGoogleCommonNetMediaType *ComGoogleCommonNetMediaType_ATOM_UTF_8_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonNetMediaType, ATOM_UTF_8_, ComGoogleCommonNetMediaType *)

FOUNDATION_EXPORT ComGoogleCommonNetMediaType *ComGoogleCommonNetMediaType_BZIP2_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonNetMediaType, BZIP2_, ComGoogleCommonNetMediaType *)

FOUNDATION_EXPORT ComGoogleCommonNetMediaType *ComGoogleCommonNetMediaType_FORM_DATA_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonNetMediaType, FORM_DATA_, ComGoogleCommonNetMediaType *)

FOUNDATION_EXPORT ComGoogleCommonNetMediaType *ComGoogleCommonNetMediaType_APPLICATION_BINARY_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonNetMediaType, APPLICATION_BINARY_, ComGoogleCommonNetMediaType *)

FOUNDATION_EXPORT ComGoogleCommonNetMediaType *ComGoogleCommonNetMediaType_GZIP_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonNetMediaType, GZIP_, ComGoogleCommonNetMediaType *)

FOUNDATION_EXPORT ComGoogleCommonNetMediaType *ComGoogleCommonNetMediaType_JAVASCRIPT_UTF_8_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonNetMediaType, JAVASCRIPT_UTF_8_, ComGoogleCommonNetMediaType *)

FOUNDATION_EXPORT ComGoogleCommonNetMediaType *ComGoogleCommonNetMediaType_JSON_UTF_8_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonNetMediaType, JSON_UTF_8_, ComGoogleCommonNetMediaType *)

FOUNDATION_EXPORT ComGoogleCommonNetMediaType *ComGoogleCommonNetMediaType_KML_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonNetMediaType, KML_, ComGoogleCommonNetMediaType *)

FOUNDATION_EXPORT ComGoogleCommonNetMediaType *ComGoogleCommonNetMediaType_KMZ_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonNetMediaType, KMZ_, ComGoogleCommonNetMediaType *)

FOUNDATION_EXPORT ComGoogleCommonNetMediaType *ComGoogleCommonNetMediaType_MBOX_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonNetMediaType, MBOX_, ComGoogleCommonNetMediaType *)

FOUNDATION_EXPORT ComGoogleCommonNetMediaType *ComGoogleCommonNetMediaType_MICROSOFT_EXCEL_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonNetMediaType, MICROSOFT_EXCEL_, ComGoogleCommonNetMediaType *)

FOUNDATION_EXPORT ComGoogleCommonNetMediaType *ComGoogleCommonNetMediaType_MICROSOFT_POWERPOINT_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonNetMediaType, MICROSOFT_POWERPOINT_, ComGoogleCommonNetMediaType *)

FOUNDATION_EXPORT ComGoogleCommonNetMediaType *ComGoogleCommonNetMediaType_MICROSOFT_WORD_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonNetMediaType, MICROSOFT_WORD_, ComGoogleCommonNetMediaType *)

FOUNDATION_EXPORT ComGoogleCommonNetMediaType *ComGoogleCommonNetMediaType_OCTET_STREAM_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonNetMediaType, OCTET_STREAM_, ComGoogleCommonNetMediaType *)

FOUNDATION_EXPORT ComGoogleCommonNetMediaType *ComGoogleCommonNetMediaType_OGG_CONTAINER_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonNetMediaType, OGG_CONTAINER_, ComGoogleCommonNetMediaType *)

FOUNDATION_EXPORT ComGoogleCommonNetMediaType *ComGoogleCommonNetMediaType_OOXML_DOCUMENT_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonNetMediaType, OOXML_DOCUMENT_, ComGoogleCommonNetMediaType *)

FOUNDATION_EXPORT ComGoogleCommonNetMediaType *ComGoogleCommonNetMediaType_OOXML_PRESENTATION_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonNetMediaType, OOXML_PRESENTATION_, ComGoogleCommonNetMediaType *)

FOUNDATION_EXPORT ComGoogleCommonNetMediaType *ComGoogleCommonNetMediaType_OOXML_SHEET_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonNetMediaType, OOXML_SHEET_, ComGoogleCommonNetMediaType *)

FOUNDATION_EXPORT ComGoogleCommonNetMediaType *ComGoogleCommonNetMediaType_OPENDOCUMENT_GRAPHICS_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonNetMediaType, OPENDOCUMENT_GRAPHICS_, ComGoogleCommonNetMediaType *)

FOUNDATION_EXPORT ComGoogleCommonNetMediaType *ComGoogleCommonNetMediaType_OPENDOCUMENT_PRESENTATION_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonNetMediaType, OPENDOCUMENT_PRESENTATION_, ComGoogleCommonNetMediaType *)

FOUNDATION_EXPORT ComGoogleCommonNetMediaType *ComGoogleCommonNetMediaType_OPENDOCUMENT_SPREADSHEET_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonNetMediaType, OPENDOCUMENT_SPREADSHEET_, ComGoogleCommonNetMediaType *)

FOUNDATION_EXPORT ComGoogleCommonNetMediaType *ComGoogleCommonNetMediaType_OPENDOCUMENT_TEXT_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonNetMediaType, OPENDOCUMENT_TEXT_, ComGoogleCommonNetMediaType *)

FOUNDATION_EXPORT ComGoogleCommonNetMediaType *ComGoogleCommonNetMediaType_PDF_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonNetMediaType, PDF_, ComGoogleCommonNetMediaType *)

FOUNDATION_EXPORT ComGoogleCommonNetMediaType *ComGoogleCommonNetMediaType_POSTSCRIPT_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonNetMediaType, POSTSCRIPT_, ComGoogleCommonNetMediaType *)

FOUNDATION_EXPORT ComGoogleCommonNetMediaType *ComGoogleCommonNetMediaType_RDF_XML_UTF_8_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonNetMediaType, RDF_XML_UTF_8_, ComGoogleCommonNetMediaType *)

FOUNDATION_EXPORT ComGoogleCommonNetMediaType *ComGoogleCommonNetMediaType_RTF_UTF_8_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonNetMediaType, RTF_UTF_8_, ComGoogleCommonNetMediaType *)

FOUNDATION_EXPORT ComGoogleCommonNetMediaType *ComGoogleCommonNetMediaType_SHOCKWAVE_FLASH_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonNetMediaType, SHOCKWAVE_FLASH_, ComGoogleCommonNetMediaType *)

FOUNDATION_EXPORT ComGoogleCommonNetMediaType *ComGoogleCommonNetMediaType_SKETCHUP_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonNetMediaType, SKETCHUP_, ComGoogleCommonNetMediaType *)

FOUNDATION_EXPORT ComGoogleCommonNetMediaType *ComGoogleCommonNetMediaType_TAR_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonNetMediaType, TAR_, ComGoogleCommonNetMediaType *)

FOUNDATION_EXPORT ComGoogleCommonNetMediaType *ComGoogleCommonNetMediaType_XHTML_UTF_8_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonNetMediaType, XHTML_UTF_8_, ComGoogleCommonNetMediaType *)

FOUNDATION_EXPORT ComGoogleCommonNetMediaType *ComGoogleCommonNetMediaType_XRD_UTF_8_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonNetMediaType, XRD_UTF_8_, ComGoogleCommonNetMediaType *)

FOUNDATION_EXPORT ComGoogleCommonNetMediaType *ComGoogleCommonNetMediaType_ZIP_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonNetMediaType, ZIP_, ComGoogleCommonNetMediaType *)

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMap *ComGoogleCommonNetMediaType_KNOWN_TYPES_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonNetMediaType, KNOWN_TYPES_, ComGoogleCommonCollectImmutableMap *)

FOUNDATION_EXPORT ComGoogleCommonBaseJoiner_MapJoiner *ComGoogleCommonNetMediaType_PARAMETER_JOINER_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonNetMediaType, PARAMETER_JOINER_, ComGoogleCommonBaseJoiner_MapJoiner *)
#endif
#if !defined (_ComGoogleCommonNetMediaType_Tokenizer_) && (ComGoogleCommonNetMediaType_INCLUDE_ALL || ComGoogleCommonNetMediaType_Tokenizer_INCLUDE)
#define _ComGoogleCommonNetMediaType_Tokenizer_

@class ComGoogleCommonBaseCharMatcher;


@interface ComGoogleCommonNetMediaType_Tokenizer : NSObject {
 @public
  NSString *input_;
  jint position_;
}

- (instancetype)initWithNSString:(NSString *)input;

- (NSString *)consumeTokenIfPresentWithComGoogleCommonBaseCharMatcher:(ComGoogleCommonBaseCharMatcher *)matcher;

- (NSString *)consumeTokenWithComGoogleCommonBaseCharMatcher:(ComGoogleCommonBaseCharMatcher *)matcher;

- (jchar)consumeCharacterWithComGoogleCommonBaseCharMatcher:(ComGoogleCommonBaseCharMatcher *)matcher;

- (jchar)consumeCharacterWithChar:(jchar)c;

- (jchar)previewChar;

- (jboolean)hasMore;

@end

__attribute__((always_inline)) inline void ComGoogleCommonNetMediaType_Tokenizer_init() {}

J2OBJC_FIELD_SETTER(ComGoogleCommonNetMediaType_Tokenizer, input_, NSString *)
#endif
#if !defined (_ComGoogleCommonNetMediaType_$1_) && (ComGoogleCommonNetMediaType_INCLUDE_ALL || ComGoogleCommonNetMediaType_$1_INCLUDE)
#define _ComGoogleCommonNetMediaType_$1_

@class ComGoogleCommonCollectImmutableMultiset;
@protocol JavaUtilCollection;

#define ComGoogleCommonBaseFunction_RESTRICT 1
#define ComGoogleCommonBaseFunction_INCLUDE 1
#include "com/google/common/base/Function.h"


@interface ComGoogleCommonNetMediaType_$1 : NSObject < ComGoogleCommonBaseFunction > {
}

- (ComGoogleCommonCollectImmutableMultiset *)applyWithId:(id<JavaUtilCollection>)input;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void ComGoogleCommonNetMediaType_$1_init() {}
#endif
#if !defined (_ComGoogleCommonNetMediaType_$2_) && (ComGoogleCommonNetMediaType_INCLUDE_ALL || ComGoogleCommonNetMediaType_$2_INCLUDE)
#define _ComGoogleCommonNetMediaType_$2_

#define ComGoogleCommonBaseFunction_RESTRICT 1
#define ComGoogleCommonBaseFunction_INCLUDE 1
#include "com/google/common/base/Function.h"


@interface ComGoogleCommonNetMediaType_$2 : NSObject < ComGoogleCommonBaseFunction > {
}

- (NSString *)applyWithId:(NSString *)value;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void ComGoogleCommonNetMediaType_$2_init() {}
#endif
