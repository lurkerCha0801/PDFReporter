//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/krasnocka/Downloads/j2objc-master/guava/sources/com/google/common/util/concurrent/ForwardingExecutorService.java
//

#include "J2ObjC_header.h"

#if !ComGoogleCommonUtilConcurrentForwardingExecutorService_RESTRICT
#define ComGoogleCommonUtilConcurrentForwardingExecutorService_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonUtilConcurrentForwardingExecutorService_RESTRICT
#if !defined (_ComGoogleCommonUtilConcurrentForwardingExecutorService_) && (ComGoogleCommonUtilConcurrentForwardingExecutorService_INCLUDE_ALL || ComGoogleCommonUtilConcurrentForwardingExecutorService_INCLUDE)
#define _ComGoogleCommonUtilConcurrentForwardingExecutorService_

@class JavaUtilConcurrentTimeUnitEnum;
@protocol JavaLangRunnable;
@protocol JavaUtilCollection;
@protocol JavaUtilConcurrentCallable;
@protocol JavaUtilConcurrentFuture;
@protocol JavaUtilList;

#define ComGoogleCommonCollectForwardingObject_RESTRICT 1
#define ComGoogleCommonCollectForwardingObject_INCLUDE 1
#include "com/google/common/collect/ForwardingObject.h"

#define JavaUtilConcurrentExecutorService_RESTRICT 1
#define JavaUtilConcurrentExecutorService_INCLUDE 1
#include "java/util/concurrent/ExecutorService.h"


@interface ComGoogleCommonUtilConcurrentForwardingExecutorService : ComGoogleCommonCollectForwardingObject < JavaUtilConcurrentExecutorService > {
}

- (instancetype)init;

- (id<JavaUtilConcurrentExecutorService>)delegate;

- (jboolean)awaitTerminationWithLong:(jlong)timeout
  withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (id<JavaUtilList>)invokeAllWithJavaUtilCollection:(id<JavaUtilCollection>)tasks;

- (id<JavaUtilList>)invokeAllWithJavaUtilCollection:(id<JavaUtilCollection>)tasks
                                           withLong:(jlong)timeout
                 withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (id)invokeAnyWithJavaUtilCollection:(id<JavaUtilCollection>)tasks;

- (id)invokeAnyWithJavaUtilCollection:(id<JavaUtilCollection>)tasks
                             withLong:(jlong)timeout
   withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (jboolean)isShutdown;

- (jboolean)isTerminated;

- (void)shutdown;

- (id<JavaUtilList>)shutdownNow;

- (void)executeWithJavaLangRunnable:(id<JavaLangRunnable>)command;

- (id<JavaUtilConcurrentFuture>)submitWithJavaUtilConcurrentCallable:(id<JavaUtilConcurrentCallable>)task;

- (id<JavaUtilConcurrentFuture>)submitWithJavaLangRunnable:(id<JavaLangRunnable>)task;

- (id<JavaUtilConcurrentFuture>)submitWithJavaLangRunnable:(id<JavaLangRunnable>)task
                                                    withId:(id)result;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentForwardingExecutorService)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentForwardingExecutorService)
