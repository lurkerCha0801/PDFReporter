//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/AbstractMethodError.java
//

#ifndef _JavaLangAbstractMethodError_H_
#define _JavaLangAbstractMethodError_H_

#include "J2ObjC_header.h"
#include "java/lang/IncompatibleClassChangeError.h"

#define JavaLangAbstractMethodError_serialVersionUID -1654391082989018462LL

@interface JavaLangAbstractMethodError : JavaLangIncompatibleClassChangeError {
}

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)detailMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangAbstractMethodError)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(JavaLangAbstractMethodError, serialVersionUID, jlong)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaLangAbstractMethodError)

#endif // _JavaLangAbstractMethodError_H_
