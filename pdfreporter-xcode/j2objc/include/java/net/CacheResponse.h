//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/CacheResponse.java
//

#ifndef _JavaNetCacheResponse_H_
#define _JavaNetCacheResponse_H_

@class JavaIoInputStream;
@protocol JavaUtilMap;

#include "J2ObjC_header.h"

@interface JavaNetCacheResponse : NSObject {
}

- (JavaIoInputStream *)getBody;

- (id<JavaUtilMap>)getHeaders;

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetCacheResponse)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaNetCacheResponse)

#endif // _JavaNetCacheResponse_H_