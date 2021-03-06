//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/channels/Channels.java
//

#ifndef _JavaNioChannelsChannels_H_
#define _JavaNioChannelsChannels_H_

@class IOSByteArray;
@class JavaIoReader;
@class JavaIoWriter;
@class JavaNioByteBuffer;
@class JavaNioCharsetCharsetDecoder;
@class JavaNioCharsetCharsetEncoder;
@protocol JavaNioChannelsChannel;

#include "J2ObjC_header.h"
#include "java/io/InputStream.h"
#include "java/io/OutputStream.h"
#include "java/nio/channels/ReadableByteChannel.h"
#include "java/nio/channels/WritableByteChannel.h"
#include "java/nio/channels/spi/AbstractInterruptibleChannel.h"

@interface JavaNioChannelsChannels : NSObject {
}

+ (JavaIoInputStream *)newInputStreamWithJavaNioChannelsReadableByteChannel:(id<JavaNioChannelsReadableByteChannel>)channel OBJC_METHOD_FAMILY_NONE;

+ (JavaIoOutputStream *)newOutputStreamWithJavaNioChannelsWritableByteChannel:(id<JavaNioChannelsWritableByteChannel>)channel OBJC_METHOD_FAMILY_NONE;

+ (id<JavaNioChannelsReadableByteChannel>)newChannelWithJavaIoInputStream:(JavaIoInputStream *)inputStream OBJC_METHOD_FAMILY_NONE;

+ (id<JavaNioChannelsWritableByteChannel>)newChannelWithJavaIoOutputStream:(JavaIoOutputStream *)outputStream OBJC_METHOD_FAMILY_NONE;

+ (JavaIoReader *)newReaderWithJavaNioChannelsReadableByteChannel:(id<JavaNioChannelsReadableByteChannel>)channel
                                 withJavaNioCharsetCharsetDecoder:(JavaNioCharsetCharsetDecoder *)decoder
                                                          withInt:(jint)minBufferCapacity OBJC_METHOD_FAMILY_NONE;

+ (JavaIoReader *)newReaderWithJavaNioChannelsReadableByteChannel:(id<JavaNioChannelsReadableByteChannel>)channel
                                                     withNSString:(NSString *)charsetName OBJC_METHOD_FAMILY_NONE;

+ (JavaIoWriter *)newWriterWithJavaNioChannelsWritableByteChannel:(id<JavaNioChannelsWritableByteChannel>)channel
                                 withJavaNioCharsetCharsetEncoder:(JavaNioCharsetCharsetEncoder *)encoder
                                                          withInt:(jint)minBufferCapacity OBJC_METHOD_FAMILY_NONE;

+ (JavaIoWriter *)newWriterWithJavaNioChannelsWritableByteChannel:(id<JavaNioChannelsWritableByteChannel>)channel
                                                     withNSString:(NSString *)charsetName OBJC_METHOD_FAMILY_NONE;

+ (void)checkBlockingWithJavaNioChannelsChannel:(id<JavaNioChannelsChannel>)channel;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioChannelsChannels)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT JavaIoInputStream *JavaNioChannelsChannels_newInputStreamWithJavaNioChannelsReadableByteChannel_(id<JavaNioChannelsReadableByteChannel> channel);

FOUNDATION_EXPORT JavaIoOutputStream *JavaNioChannelsChannels_newOutputStreamWithJavaNioChannelsWritableByteChannel_(id<JavaNioChannelsWritableByteChannel> channel);

FOUNDATION_EXPORT id<JavaNioChannelsReadableByteChannel> JavaNioChannelsChannels_newChannelWithJavaIoInputStream_(JavaIoInputStream *inputStream);

FOUNDATION_EXPORT id<JavaNioChannelsWritableByteChannel> JavaNioChannelsChannels_newChannelWithJavaIoOutputStream_(JavaIoOutputStream *outputStream);

FOUNDATION_EXPORT JavaIoReader *JavaNioChannelsChannels_newReaderWithJavaNioChannelsReadableByteChannel_withJavaNioCharsetCharsetDecoder_withInt_(id<JavaNioChannelsReadableByteChannel> channel, JavaNioCharsetCharsetDecoder *decoder, jint minBufferCapacity);

FOUNDATION_EXPORT JavaIoReader *JavaNioChannelsChannels_newReaderWithJavaNioChannelsReadableByteChannel_withNSString_(id<JavaNioChannelsReadableByteChannel> channel, NSString *charsetName);

FOUNDATION_EXPORT JavaIoWriter *JavaNioChannelsChannels_newWriterWithJavaNioChannelsWritableByteChannel_withJavaNioCharsetCharsetEncoder_withInt_(id<JavaNioChannelsWritableByteChannel> channel, JavaNioCharsetCharsetEncoder *encoder, jint minBufferCapacity);

FOUNDATION_EXPORT JavaIoWriter *JavaNioChannelsChannels_newWriterWithJavaNioChannelsWritableByteChannel_withNSString_(id<JavaNioChannelsWritableByteChannel> channel, NSString *charsetName);

FOUNDATION_EXPORT void JavaNioChannelsChannels_checkBlockingWithJavaNioChannelsChannel_(id<JavaNioChannelsChannel> channel);
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaNioChannelsChannels)

@interface JavaNioChannelsChannels_ChannelInputStream : JavaIoInputStream {
}

- (instancetype)initWithJavaNioChannelsReadableByteChannel:(id<JavaNioChannelsReadableByteChannel>)channel;

- (jint)read;

- (jint)readWithByteArray:(IOSByteArray *)target
                  withInt:(jint)byteOffset
                  withInt:(jint)byteCount;

- (jint)available;

- (void)close;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioChannelsChannels_ChannelInputStream)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaNioChannelsChannels_ChannelInputStream)

@interface JavaNioChannelsChannels_ChannelOutputStream : JavaIoOutputStream {
}

- (instancetype)initWithJavaNioChannelsWritableByteChannel:(id<JavaNioChannelsWritableByteChannel>)channel;

- (void)writeWithInt:(jint)oneByte;

- (void)writeWithByteArray:(IOSByteArray *)source
                   withInt:(jint)offset
                   withInt:(jint)length;

- (void)close;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioChannelsChannels_ChannelOutputStream)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaNioChannelsChannels_ChannelOutputStream)

@interface JavaNioChannelsChannels_InputStreamChannel : JavaNioChannelsSpiAbstractInterruptibleChannel < JavaNioChannelsReadableByteChannel > {
}

- (instancetype)initWithJavaIoInputStream:(JavaIoInputStream *)inputStream;

- (jint)readWithJavaNioByteBuffer:(JavaNioByteBuffer *)target;

- (void)implCloseChannel;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioChannelsChannels_InputStreamChannel)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaNioChannelsChannels_InputStreamChannel)

@interface JavaNioChannelsChannels_OutputStreamChannel : JavaNioChannelsSpiAbstractInterruptibleChannel < JavaNioChannelsWritableByteChannel > {
}

- (instancetype)initWithJavaIoOutputStream:(JavaIoOutputStream *)outputStream;

- (jint)writeWithJavaNioByteBuffer:(JavaNioByteBuffer *)source;

- (void)implCloseChannel;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioChannelsChannels_OutputStreamChannel)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaNioChannelsChannels_OutputStreamChannel)

#endif // _JavaNioChannelsChannels_H_
