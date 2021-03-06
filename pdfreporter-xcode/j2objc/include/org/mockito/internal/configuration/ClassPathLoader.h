//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: src/main/java/org/mockito/internal/configuration/ClassPathLoader.java
//

#ifndef _OrgMockitoInternalConfigurationClassPathLoader_H_
#define _OrgMockitoInternalConfigurationClassPathLoader_H_

@class IOSClass;
@class JavaIoInputStream;
@class JavaIoReader;
@protocol JavaUtilList;
@protocol OrgMockitoConfigurationIMockitoConfiguration;
@protocol OrgMockitoPluginsMockMaker;
@protocol OrgMockitoPluginsStackTraceCleanerProvider;

#include "J2ObjC_header.h"

@interface OrgMockitoInternalConfigurationClassPathLoader : NSObject {
}

- (id<OrgMockitoConfigurationIMockitoConfiguration>)loadConfiguration;

+ (id<OrgMockitoPluginsMockMaker>)getMockMaker;

+ (id<OrgMockitoPluginsStackTraceCleanerProvider>)getStackTraceCleanerProvider;

+ (id<OrgMockitoPluginsMockMaker>)findPlatformMockMaker;

+ (id)findPluginImplementationWithIOSClass:(IOSClass *)pluginType
                                    withId:(id)defaultPlugin;

+ (id<JavaUtilList>)loadImplementationsWithIOSClass:(IOSClass *)service;

+ (id<JavaUtilList>)readerToLinesWithJavaIoReader:(JavaIoReader *)reader;

+ (NSString *)stripCommentAndWhitespaceWithNSString:(NSString *)line;

- (instancetype)init;

@end

FOUNDATION_EXPORT BOOL OrgMockitoInternalConfigurationClassPathLoader_initialized;
J2OBJC_STATIC_INIT(OrgMockitoInternalConfigurationClassPathLoader)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT id<OrgMockitoPluginsMockMaker> OrgMockitoInternalConfigurationClassPathLoader_getMockMaker();

FOUNDATION_EXPORT id<OrgMockitoPluginsStackTraceCleanerProvider> OrgMockitoInternalConfigurationClassPathLoader_getStackTraceCleanerProvider();

FOUNDATION_EXPORT id<OrgMockitoPluginsMockMaker> OrgMockitoInternalConfigurationClassPathLoader_findPlatformMockMaker();

FOUNDATION_EXPORT id OrgMockitoInternalConfigurationClassPathLoader_findPluginImplementationWithIOSClass_withId_(IOSClass *pluginType, id defaultPlugin);

FOUNDATION_EXPORT id<JavaUtilList> OrgMockitoInternalConfigurationClassPathLoader_loadImplementationsWithIOSClass_(IOSClass *service);

FOUNDATION_EXPORT id<JavaUtilList> OrgMockitoInternalConfigurationClassPathLoader_readerToLinesWithJavaIoReader_(JavaIoReader *reader);

FOUNDATION_EXPORT NSString *OrgMockitoInternalConfigurationClassPathLoader_stripCommentAndWhitespaceWithNSString_(NSString *line);

FOUNDATION_EXPORT id<OrgMockitoPluginsMockMaker> OrgMockitoInternalConfigurationClassPathLoader_mockMaker_;
J2OBJC_STATIC_FIELD_GETTER(OrgMockitoInternalConfigurationClassPathLoader, mockMaker_, id<OrgMockitoPluginsMockMaker>)

FOUNDATION_EXPORT id<OrgMockitoPluginsStackTraceCleanerProvider> OrgMockitoInternalConfigurationClassPathLoader_stackTraceCleanerProvider_;
J2OBJC_STATIC_FIELD_GETTER(OrgMockitoInternalConfigurationClassPathLoader, stackTraceCleanerProvider_, id<OrgMockitoPluginsStackTraceCleanerProvider>)

FOUNDATION_EXPORT NSString *OrgMockitoInternalConfigurationClassPathLoader_MOCKITO_CONFIGURATION_CLASS_NAME_;
J2OBJC_STATIC_FIELD_GETTER(OrgMockitoInternalConfigurationClassPathLoader, MOCKITO_CONFIGURATION_CLASS_NAME_, NSString *)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalConfigurationClassPathLoader)

#endif // _OrgMockitoInternalConfigurationClassPathLoader_H_
