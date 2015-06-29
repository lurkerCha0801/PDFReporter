//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/Random.java
//

#ifndef _JavaUtilRandom_H_
#define _JavaUtilRandom_H_

@class IOSByteArray;

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"

#define JavaUtilRandom_multiplier 25214903917LL
#define JavaUtilRandom_serialVersionUID 3905348978240129619LL

@interface JavaUtilRandom : NSObject < JavaIoSerializable > {
}

- (instancetype)init;

- (instancetype)initWithLong:(jlong)seed;

- (jint)nextWithInt:(jint)bits;

- (jboolean)nextBoolean;

- (void)nextBytesWithByteArray:(IOSByteArray *)buf;

- (jdouble)nextDouble;

- (jfloat)nextFloat;

- (jdouble)nextGaussian;

- (jint)nextInt;

- (jint)nextIntWithInt:(jint)n;

- (jlong)nextLong;

- (void)setSeedWithLong:(jlong)seed;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilRandom)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(JavaUtilRandom, serialVersionUID, jlong)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilRandom, multiplier, jlong)

FOUNDATION_EXPORT jlong JavaUtilRandom_seedBase_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilRandom, seedBase_, jlong)
J2OBJC_STATIC_FIELD_REF_GETTER(JavaUtilRandom, seedBase_, jlong)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilRandom)

#endif // _JavaUtilRandom_H_