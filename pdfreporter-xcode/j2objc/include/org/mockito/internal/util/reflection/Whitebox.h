//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/krasnocka/Downloads/j2objc-master/testing/mockito/build_result/java/org/mockito/internal/util/reflection/Whitebox.java
//

#ifndef _OrgMockitoInternalUtilReflectionWhitebox_H_
#define _OrgMockitoInternalUtilReflectionWhitebox_H_

@class IOSClass;
@class JavaLangReflectField;

#include "J2ObjC_header.h"

@interface OrgMockitoInternalUtilReflectionWhitebox : NSObject {
}

+ (id)getInternalStateWithId:(id)target
                withNSString:(NSString *)field;

+ (void)setInternalStateWithId:(id)target
                  withNSString:(NSString *)field
                        withId:(id)value;

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalUtilReflectionWhitebox)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT id OrgMockitoInternalUtilReflectionWhitebox_getInternalStateWithId_withNSString_(id target, NSString *field);

FOUNDATION_EXPORT void OrgMockitoInternalUtilReflectionWhitebox_setInternalStateWithId_withNSString_withId_(id target, NSString *field, id value);
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalUtilReflectionWhitebox)

#endif // _OrgMockitoInternalUtilReflectionWhitebox_H_
