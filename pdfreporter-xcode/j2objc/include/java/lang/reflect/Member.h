//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/reflect/Member.java
//

#ifndef _JavaLangReflectMember_H_
#define _JavaLangReflectMember_H_

@class IOSClass;

#include "J2ObjC_header.h"

#define JavaLangReflectMember_DECLARED 1
#define JavaLangReflectMember_PUBLIC 0

@protocol JavaLangReflectMember < NSObject, JavaObject >

- (IOSClass *)getDeclaringClass;

- (jint)getModifiers;

- (NSString *)getName;

- (jboolean)isSynthetic;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangReflectMember)

J2OBJC_STATIC_FIELD_GETTER(JavaLangReflectMember, PUBLIC, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaLangReflectMember, DECLARED, jint)

J2OBJC_TYPE_LITERAL_HEADER(JavaLangReflectMember)

#endif // _JavaLangReflectMember_H_