//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/logging/Handler.java
//

#ifndef _JavaUtilLoggingHandler_H_
#define _JavaUtilLoggingHandler_H_

@class JavaLangException;
@class JavaUtilLoggingErrorManager;
@class JavaUtilLoggingFormatter;
@class JavaUtilLoggingLevel;
@class JavaUtilLoggingLogRecord;
@protocol JavaUtilLoggingFilter;

#include "J2ObjC_header.h"

@interface JavaUtilLoggingHandler : NSObject {
}

- (instancetype)init;

- (void)printInvalidPropMessageWithNSString:(NSString *)key
                               withNSString:(NSString *)value
                      withJavaLangException:(JavaLangException *)e;

- (void)initPropertiesWithNSString:(NSString *)defaultLevel
                      withNSString:(NSString *)defaultFilter
                      withNSString:(NSString *)defaultFormatter
                      withNSString:(NSString *)defaultEncoding OBJC_METHOD_FAMILY_NONE;

- (void)close;

- (void)flush;

- (void)publishWithJavaUtilLoggingLogRecord:(JavaUtilLoggingLogRecord *)record;

- (NSString *)getEncoding;

- (JavaUtilLoggingErrorManager *)getErrorManager;

- (id<JavaUtilLoggingFilter>)getFilter;

- (JavaUtilLoggingFormatter *)getFormatter;

- (JavaUtilLoggingLevel *)getLevel;

- (jboolean)isLoggableWithJavaUtilLoggingLogRecord:(JavaUtilLoggingLogRecord *)record;

- (void)reportErrorWithNSString:(NSString *)msg
          withJavaLangException:(JavaLangException *)ex
                        withInt:(jint)code;

- (void)internalSetEncodingWithNSString:(NSString *)newEncoding;

- (void)setEncodingWithNSString:(NSString *)charsetName;

- (void)setErrorManagerWithJavaUtilLoggingErrorManager:(JavaUtilLoggingErrorManager *)newErrorManager;

- (void)setFilterWithJavaUtilLoggingFilter:(id<JavaUtilLoggingFilter>)newFilter;

- (void)internalSetFormatterWithJavaUtilLoggingFormatter:(JavaUtilLoggingFormatter *)newFormatter;

- (void)setFormatterWithJavaUtilLoggingFormatter:(JavaUtilLoggingFormatter *)newFormatter;

- (void)setLevelWithJavaUtilLoggingLevel:(JavaUtilLoggingLevel *)newLevel;

@end

FOUNDATION_EXPORT BOOL JavaUtilLoggingHandler_initialized;
J2OBJC_STATIC_INIT(JavaUtilLoggingHandler)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT JavaUtilLoggingLevel *JavaUtilLoggingHandler_DEFAULT_LEVEL_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilLoggingHandler, DEFAULT_LEVEL_, JavaUtilLoggingLevel *)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilLoggingHandler)

#endif // _JavaUtilLoggingHandler_H_