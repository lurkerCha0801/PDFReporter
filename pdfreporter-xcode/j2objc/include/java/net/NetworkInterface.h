//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/NetworkInterface.java
//

#ifndef _JavaNetNetworkInterface_H_
#define _JavaNetNetworkInterface_H_

@class IOSByteArray;
@class IOSObjectArray;
@class JavaLangException;
@class JavaNetInetAddress;
@class JavaNetSocketException;
@protocol JavaUtilEnumeration;
@protocol JavaUtilList;

#include "J2ObjC_header.h"

@interface JavaNetNetworkInterface : NSObject {
}


+ (JavaNetNetworkInterface *)forUnboundMulticastSocket;

- (jint)getIndex;

- (NSString *)getName;

- (id<JavaUtilEnumeration>)getInetAddresses;

- (NSString *)getDisplayName;

+ (JavaNetNetworkInterface *)getByNameWithNSString:(NSString *)interfaceName;

+ (JavaNetNetworkInterface *)getByInetAddressWithJavaNetInetAddress:(JavaNetInetAddress *)address;

+ (JavaNetNetworkInterface *)getByIndexWithInt:(jint)index;

+ (id<JavaUtilEnumeration>)getNetworkInterfaces;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

- (NSString *)description;

- (id<JavaUtilList>)getInterfaceAddresses;

- (id<JavaUtilEnumeration>)getSubInterfaces;

- (JavaNetNetworkInterface *)getParent;

- (jboolean)isUp;

- (jboolean)isLoopback;

- (jboolean)isPointToPoint;

- (jboolean)supportsMulticast;

- (IOSByteArray *)getHardwareAddress;

- (jint)getMTU;

- (jboolean)isVirtual;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetNetworkInterface)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT JavaNetNetworkInterface *JavaNetNetworkInterface_forUnboundMulticastSocket();

FOUNDATION_EXPORT JavaNetNetworkInterface *JavaNetNetworkInterface_getByNameWithNSString_(NSString *interfaceName);

FOUNDATION_EXPORT JavaNetNetworkInterface *JavaNetNetworkInterface_getByInetAddressWithJavaNetInetAddress_(JavaNetInetAddress *address);

FOUNDATION_EXPORT JavaNetNetworkInterface *JavaNetNetworkInterface_getByIndexWithInt_(jint index);

FOUNDATION_EXPORT id<JavaUtilEnumeration> JavaNetNetworkInterface_getNetworkInterfaces();
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaNetNetworkInterface)

#endif // _JavaNetNetworkInterface_H_
