//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/libcore/icu/TimeZones.java
//

#ifndef _LibcoreIcuTimeZones_H_
#define _LibcoreIcuTimeZones_H_

@class IOSObjectArray;
@class JavaUtilHashMap;
@class JavaUtilLocale;
@class LibcoreIcuTimeZones_ZoneStringsCache;

#include "J2ObjC_header.h"
#include "java/util/Comparator.h"
#include "libcore/util/BasicLruCache.h"

#define LibcoreIcuTimeZones_LONG_NAME 1
#define LibcoreIcuTimeZones_LONG_NAME_DST 3
#define LibcoreIcuTimeZones_NAME_COUNT 5
#define LibcoreIcuTimeZones_OLSON_NAME 0
#define LibcoreIcuTimeZones_SHORT_NAME 2
#define LibcoreIcuTimeZones_SHORT_NAME_DST 4

@interface LibcoreIcuTimeZones : NSObject {
}

+ (NSString *)getDisplayNameWithNSStringArray2:(IOSObjectArray *)zoneStrings
                                  withNSString:(NSString *)id_
                                   withBoolean:(jboolean)daylight
                                       withInt:(jint)style;

+ (IOSObjectArray *)getZoneStringsWithJavaUtilLocale:(JavaUtilLocale *)locale;

@end

FOUNDATION_EXPORT BOOL LibcoreIcuTimeZones_initialized;
J2OBJC_STATIC_INIT(LibcoreIcuTimeZones)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT NSString *LibcoreIcuTimeZones_getDisplayNameWithNSStringArray2_withNSString_withBoolean_withInt_(IOSObjectArray *zoneStrings, NSString *id_, jboolean daylight, jint style);

FOUNDATION_EXPORT IOSObjectArray *LibcoreIcuTimeZones_getZoneStringsWithJavaUtilLocale_(JavaUtilLocale *locale);

FOUNDATION_EXPORT IOSObjectArray *LibcoreIcuTimeZones_availableTimeZones_;
J2OBJC_STATIC_FIELD_GETTER(LibcoreIcuTimeZones, availableTimeZones_, IOSObjectArray *)

J2OBJC_STATIC_FIELD_GETTER(LibcoreIcuTimeZones, OLSON_NAME, jint)

J2OBJC_STATIC_FIELD_GETTER(LibcoreIcuTimeZones, LONG_NAME, jint)

J2OBJC_STATIC_FIELD_GETTER(LibcoreIcuTimeZones, SHORT_NAME, jint)

J2OBJC_STATIC_FIELD_GETTER(LibcoreIcuTimeZones, LONG_NAME_DST, jint)

J2OBJC_STATIC_FIELD_GETTER(LibcoreIcuTimeZones, SHORT_NAME_DST, jint)

J2OBJC_STATIC_FIELD_GETTER(LibcoreIcuTimeZones, NAME_COUNT, jint)

FOUNDATION_EXPORT LibcoreIcuTimeZones_ZoneStringsCache *LibcoreIcuTimeZones_cachedZoneStrings_;
J2OBJC_STATIC_FIELD_GETTER(LibcoreIcuTimeZones, cachedZoneStrings_, LibcoreIcuTimeZones_ZoneStringsCache *)

FOUNDATION_EXPORT id<JavaUtilComparator> LibcoreIcuTimeZones_ZONE_STRINGS_COMPARATOR_;
J2OBJC_STATIC_FIELD_GETTER(LibcoreIcuTimeZones, ZONE_STRINGS_COMPARATOR_, id<JavaUtilComparator>)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(LibcoreIcuTimeZones)

@interface LibcoreIcuTimeZones_ZoneStringsCache : LibcoreUtilBasicLruCache {
}

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(LibcoreIcuTimeZones_ZoneStringsCache)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(LibcoreIcuTimeZones_ZoneStringsCache)

@interface LibcoreIcuTimeZones_$1 : NSObject < JavaUtilComparator > {
}

- (jint)compareWithId:(IOSObjectArray *)lhs
               withId:(IOSObjectArray *)rhs;

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(LibcoreIcuTimeZones_$1)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(LibcoreIcuTimeZones_$1)

#endif // _LibcoreIcuTimeZones_H_
