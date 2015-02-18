//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/sql/RowIdLifetime.java
//

#ifndef _JavaSqlRowIdLifetime_H_
#define _JavaSqlRowIdLifetime_H_

#include "J2ObjC_header.h"
#include "java/lang/Enum.h"

typedef NS_ENUM(NSUInteger, JavaSqlRowIdLifetime) {
  JavaSqlRowIdLifetime_ROWID_UNSUPPORTED = 0,
  JavaSqlRowIdLifetime_ROWID_VALID_OTHER = 1,
  JavaSqlRowIdLifetime_ROWID_VALID_SESSION = 2,
  JavaSqlRowIdLifetime_ROWID_VALID_TRANSACTION = 3,
  JavaSqlRowIdLifetime_ROWID_VALID_FOREVER = 4,
};

@interface JavaSqlRowIdLifetimeEnum : JavaLangEnum < NSCopying > {
}

- (instancetype)initWithNSString:(NSString *)__name
                         withInt:(jint)__ordinal;

+ (IOSObjectArray *)values;
FOUNDATION_EXPORT IOSObjectArray *JavaSqlRowIdLifetimeEnum_values();

+ (JavaSqlRowIdLifetimeEnum *)valueOfWithNSString:(NSString *)name;

FOUNDATION_EXPORT JavaSqlRowIdLifetimeEnum *JavaSqlRowIdLifetimeEnum_valueOfWithNSString_(NSString *name);
- (id)copyWithZone:(NSZone *)zone;

@end

FOUNDATION_EXPORT BOOL JavaSqlRowIdLifetimeEnum_initialized;
J2OBJC_STATIC_INIT(JavaSqlRowIdLifetimeEnum)

FOUNDATION_EXPORT JavaSqlRowIdLifetimeEnum *JavaSqlRowIdLifetimeEnum_values_[];

#define JavaSqlRowIdLifetimeEnum_ROWID_UNSUPPORTED JavaSqlRowIdLifetimeEnum_values_[JavaSqlRowIdLifetime_ROWID_UNSUPPORTED]
J2OBJC_ENUM_CONSTANT_GETTER(JavaSqlRowIdLifetimeEnum, ROWID_UNSUPPORTED)

#define JavaSqlRowIdLifetimeEnum_ROWID_VALID_OTHER JavaSqlRowIdLifetimeEnum_values_[JavaSqlRowIdLifetime_ROWID_VALID_OTHER]
J2OBJC_ENUM_CONSTANT_GETTER(JavaSqlRowIdLifetimeEnum, ROWID_VALID_OTHER)

#define JavaSqlRowIdLifetimeEnum_ROWID_VALID_SESSION JavaSqlRowIdLifetimeEnum_values_[JavaSqlRowIdLifetime_ROWID_VALID_SESSION]
J2OBJC_ENUM_CONSTANT_GETTER(JavaSqlRowIdLifetimeEnum, ROWID_VALID_SESSION)

#define JavaSqlRowIdLifetimeEnum_ROWID_VALID_TRANSACTION JavaSqlRowIdLifetimeEnum_values_[JavaSqlRowIdLifetime_ROWID_VALID_TRANSACTION]
J2OBJC_ENUM_CONSTANT_GETTER(JavaSqlRowIdLifetimeEnum, ROWID_VALID_TRANSACTION)

#define JavaSqlRowIdLifetimeEnum_ROWID_VALID_FOREVER JavaSqlRowIdLifetimeEnum_values_[JavaSqlRowIdLifetime_ROWID_VALID_FOREVER]
J2OBJC_ENUM_CONSTANT_GETTER(JavaSqlRowIdLifetimeEnum, ROWID_VALID_FOREVER)

J2OBJC_TYPE_LITERAL_HEADER(JavaSqlRowIdLifetimeEnum)

#endif // _JavaSqlRowIdLifetime_H_