//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/xml/sax/ext/Attributes2.java
//

#ifndef _OrgXmlSaxExtAttributes2_H_
#define _OrgXmlSaxExtAttributes2_H_

#include "J2ObjC_header.h"
#include "org/xml/sax/Attributes.h"

@protocol OrgXmlSaxExtAttributes2 < OrgXmlSaxAttributes, NSObject, JavaObject >
- (jboolean)isDeclaredWithInt:(jint)index;

- (jboolean)isDeclaredWithNSString:(NSString *)qName;

- (jboolean)isDeclaredWithNSString:(NSString *)uri
                      withNSString:(NSString *)localName;

- (jboolean)isSpecifiedWithInt:(jint)index;

- (jboolean)isSpecifiedWithNSString:(NSString *)uri
                       withNSString:(NSString *)localName;

- (jboolean)isSpecifiedWithNSString:(NSString *)qName;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgXmlSaxExtAttributes2)

J2OBJC_TYPE_LITERAL_HEADER(OrgXmlSaxExtAttributes2)

#endif // _OrgXmlSaxExtAttributes2_H_
