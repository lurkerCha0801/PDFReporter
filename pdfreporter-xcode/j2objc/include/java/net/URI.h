//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/URI.java
//

#ifndef _JavaNetURI_H_
#define _JavaNetURI_H_

@class JavaIoObjectInputStream;
@class JavaIoObjectOutputStream;
@class JavaNetURL;

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"
#include "java/lang/Comparable.h"
#include "libcore/net/UriCodec.h"

#define JavaNetURI_serialVersionUID -6052424284110960213LL

@interface JavaNetURI : NSObject < JavaLangComparable, JavaIoSerializable > {
}

- (instancetype)initWithNSString:(NSString *)spec;

- (instancetype)initWithNSString:(NSString *)scheme
                    withNSString:(NSString *)schemeSpecificPart
                    withNSString:(NSString *)fragment;

- (instancetype)initWithNSString:(NSString *)scheme
                    withNSString:(NSString *)userInfo
                    withNSString:(NSString *)host
                         withInt:(jint)port
                    withNSString:(NSString *)path
                    withNSString:(NSString *)query
                    withNSString:(NSString *)fragment;

- (instancetype)initWithNSString:(NSString *)scheme
                    withNSString:(NSString *)host
                    withNSString:(NSString *)path
                    withNSString:(NSString *)fragment;

- (instancetype)initWithNSString:(NSString *)scheme
                    withNSString:(NSString *)authority
                    withNSString:(NSString *)path
                    withNSString:(NSString *)query
                    withNSString:(NSString *)fragment;

- (jint)compareToWithId:(JavaNetURI *)uri;

+ (JavaNetURI *)createWithNSString:(NSString *)uri;

- (jboolean)isEqual:(id)o;

- (NSString *)getScheme;

- (NSString *)getSchemeSpecificPart;

- (NSString *)getRawSchemeSpecificPart;

- (NSString *)getAuthority;

- (NSString *)getRawAuthority;

- (NSString *)getUserInfo;

- (NSString *)getRawUserInfo;

- (NSString *)getHost;

- (jint)getPort;

- (jint)getEffectivePort;

+ (jint)getEffectivePortWithNSString:(NSString *)scheme
                             withInt:(jint)specifiedPort;

- (NSString *)getPath;

- (NSString *)getRawPath;

- (NSString *)getQuery;

- (NSString *)getRawQuery;

- (NSString *)getFragment;

- (NSString *)getRawFragment;

- (NSUInteger)hash;

- (jboolean)isAbsolute;

- (jboolean)isOpaque;

- (JavaNetURI *)normalize;

- (JavaNetURI *)parseServerAuthority;

- (JavaNetURI *)relativizeWithJavaNetURI:(JavaNetURI *)relative;

- (JavaNetURI *)resolveWithJavaNetURI:(JavaNetURI *)relative;

- (JavaNetURI *)resolveWithNSString:(NSString *)relative;

- (NSString *)toASCIIString;

- (NSString *)description;

- (JavaNetURL *)toURL;

@end

FOUNDATION_EXPORT BOOL JavaNetURI_initialized;
J2OBJC_STATIC_INIT(JavaNetURI)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT JavaNetURI *JavaNetURI_createWithNSString_(NSString *uri);

FOUNDATION_EXPORT jint JavaNetURI_getEffectivePortWithNSString_withInt_(NSString *scheme, jint specifiedPort);

J2OBJC_STATIC_FIELD_GETTER(JavaNetURI, serialVersionUID, jlong)

FOUNDATION_EXPORT NSString *JavaNetURI_UNRESERVED_;
J2OBJC_STATIC_FIELD_GETTER(JavaNetURI, UNRESERVED_, NSString *)

FOUNDATION_EXPORT NSString *JavaNetURI_PUNCTUATION_;
J2OBJC_STATIC_FIELD_GETTER(JavaNetURI, PUNCTUATION_, NSString *)

FOUNDATION_EXPORT LibcoreNetUriCodec *JavaNetURI_USER_INFO_ENCODER_;
J2OBJC_STATIC_FIELD_GETTER(JavaNetURI, USER_INFO_ENCODER_, LibcoreNetUriCodec *)

FOUNDATION_EXPORT LibcoreNetUriCodec *JavaNetURI_PATH_ENCODER_;
J2OBJC_STATIC_FIELD_GETTER(JavaNetURI, PATH_ENCODER_, LibcoreNetUriCodec *)

FOUNDATION_EXPORT LibcoreNetUriCodec *JavaNetURI_AUTHORITY_ENCODER_;
J2OBJC_STATIC_FIELD_GETTER(JavaNetURI, AUTHORITY_ENCODER_, LibcoreNetUriCodec *)

FOUNDATION_EXPORT LibcoreNetUriCodec *JavaNetURI_FILE_AND_QUERY_ENCODER_;
J2OBJC_STATIC_FIELD_GETTER(JavaNetURI, FILE_AND_QUERY_ENCODER_, LibcoreNetUriCodec *)

FOUNDATION_EXPORT LibcoreNetUriCodec *JavaNetURI_ALL_LEGAL_ENCODER_;
J2OBJC_STATIC_FIELD_GETTER(JavaNetURI, ALL_LEGAL_ENCODER_, LibcoreNetUriCodec *)

FOUNDATION_EXPORT LibcoreNetUriCodec *JavaNetURI_ASCII_ONLY_;
J2OBJC_STATIC_FIELD_GETTER(JavaNetURI, ASCII_ONLY_, LibcoreNetUriCodec *)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaNetURI)

@interface JavaNetURI_PartEncoder : LibcoreNetUriCodec {
}

- (instancetype)initWithNSString:(NSString *)extraLegalCharacters;

- (jboolean)isRetainedWithChar:(jchar)c;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetURI_PartEncoder)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaNetURI_PartEncoder)

@interface JavaNetURI_$1 : LibcoreNetUriCodec {
}

- (jboolean)isRetainedWithChar:(jchar)c;

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetURI_$1)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaNetURI_$1)

#endif // _JavaNetURI_H_