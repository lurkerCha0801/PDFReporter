//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/Writer.java
//

#ifndef _JavaIoWriter_H_
#define _JavaIoWriter_H_

@class IOSCharArray;
@protocol JavaLangCharSequence;

#include "J2ObjC_header.h"
#include "java/io/Closeable.h"
#include "java/io/Flushable.h"
#include "java/lang/Appendable.h"

@interface JavaIoWriter : NSObject < JavaLangAppendable, JavaIoCloseable, JavaIoFlushable > {
 @public
  id lock_;
}

- (instancetype)init;

- (instancetype)initWithId:(id)lock;

- (void)close;

- (void)flush;

- (void)writeWithCharArray:(IOSCharArray *)buf;

- (void)writeWithCharArray:(IOSCharArray *)buf
                   withInt:(jint)offset
                   withInt:(jint)count;

- (void)writeWithInt:(jint)oneChar;

- (void)writeWithNSString:(NSString *)str;

- (void)writeWithNSString:(NSString *)str
                  withInt:(jint)offset
                  withInt:(jint)count;

- (JavaIoWriter *)appendWithChar:(jchar)c;

- (JavaIoWriter *)appendWithJavaLangCharSequence:(id<JavaLangCharSequence>)csq;

- (JavaIoWriter *)appendWithJavaLangCharSequence:(id<JavaLangCharSequence>)csq
                                         withInt:(jint)start
                                         withInt:(jint)end;

- (jboolean)checkError;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoWriter)

J2OBJC_FIELD_SETTER(JavaIoWriter, lock_, id)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaIoWriter)

#endif // _JavaIoWriter_H_
