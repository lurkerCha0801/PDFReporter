//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/sql/SQLTransientConnectionException.java
//

#ifndef _JavaSqlSQLTransientConnectionException_H_
#define _JavaSqlSQLTransientConnectionException_H_

@class JavaLangThrowable;

#include "J2ObjC_header.h"
#include "java/sql/SQLTransientException.h"

#define JavaSqlSQLTransientConnectionException_serialVersionUID -2520155553543391200LL

@interface JavaSqlSQLTransientConnectionException : JavaSqlSQLTransientException {
}

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)reason;

- (instancetype)initWithNSString:(NSString *)reason
                    withNSString:(NSString *)sqlState;

- (instancetype)initWithNSString:(NSString *)reason
                    withNSString:(NSString *)sqlState
                         withInt:(jint)vendorCode;

- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)cause;

- (instancetype)initWithNSString:(NSString *)reason
           withJavaLangThrowable:(JavaLangThrowable *)cause;

- (instancetype)initWithNSString:(NSString *)reason
                    withNSString:(NSString *)sqlState
           withJavaLangThrowable:(JavaLangThrowable *)cause;

- (instancetype)initWithNSString:(NSString *)reason
                    withNSString:(NSString *)sqlState
                         withInt:(jint)vendorCode
           withJavaLangThrowable:(JavaLangThrowable *)cause;


@end

J2OBJC_EMPTY_STATIC_INIT(JavaSqlSQLTransientConnectionException)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(JavaSqlSQLTransientConnectionException, serialVersionUID, jlong)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaSqlSQLTransientConnectionException)

#endif // _JavaSqlSQLTransientConnectionException_H_
