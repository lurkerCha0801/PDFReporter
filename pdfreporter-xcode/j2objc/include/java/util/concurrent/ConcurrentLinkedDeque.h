//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/ConcurrentLinkedDeque.java
//

#ifndef _JavaUtilConcurrentConcurrentLinkedDeque_H_
#define _JavaUtilConcurrentConcurrentLinkedDeque_H_

@class IOSObjectArray;
@class JavaIoObjectInputStream;
@class JavaIoObjectOutputStream;
@class JavaUtilArrayList;
@class JavaUtilConcurrentConcurrentLinkedDeque_Node;
@class SunMiscUnsafe;
@protocol JavaUtilCollection;

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"
#include "java/util/AbstractCollection.h"
#include "java/util/Deque.h"
#include "java/util/Iterator.h"

#define JavaUtilConcurrentConcurrentLinkedDeque_HOPS 2
#define JavaUtilConcurrentConcurrentLinkedDeque_serialVersionUID 876323262645176354LL

@interface JavaUtilConcurrentConcurrentLinkedDeque : JavaUtilAbstractCollection < JavaUtilDeque, JavaIoSerializable > {
}

- (JavaUtilConcurrentConcurrentLinkedDeque_Node *)prevTerminator;

- (JavaUtilConcurrentConcurrentLinkedDeque_Node *)nextTerminator;

- (void)unlinkWithJavaUtilConcurrentConcurrentLinkedDeque_Node:(JavaUtilConcurrentConcurrentLinkedDeque_Node *)x;

- (JavaUtilConcurrentConcurrentLinkedDeque_Node *)succWithJavaUtilConcurrentConcurrentLinkedDeque_Node:(JavaUtilConcurrentConcurrentLinkedDeque_Node *)p;

- (JavaUtilConcurrentConcurrentLinkedDeque_Node *)predWithJavaUtilConcurrentConcurrentLinkedDeque_Node:(JavaUtilConcurrentConcurrentLinkedDeque_Node *)p;

- (JavaUtilConcurrentConcurrentLinkedDeque_Node *)first;

- (JavaUtilConcurrentConcurrentLinkedDeque_Node *)last;

- (instancetype)init;

- (instancetype)initWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (void)addFirstWithId:(id)e;

- (void)addLastWithId:(id)e;

- (jboolean)offerFirstWithId:(id)e;

- (jboolean)offerLastWithId:(id)e;

- (id)peekFirst;

- (id)peekLast;

- (id)getFirst;

- (id)getLast;

- (id)pollFirst;

- (id)pollLast;

- (id)removeFirst;

- (id)removeLast;

- (jboolean)offerWithId:(id)e;

- (jboolean)addWithId:(id)e;

- (id)poll;

- (id)remove;

- (id)peek;

- (id)element;

- (void)pushWithId:(id)e;

- (id)pop;

- (jboolean)removeFirstOccurrenceWithId:(id)o;

- (jboolean)removeLastOccurrenceWithId:(id)o;

- (jboolean)containsWithId:(id)o;

- (jboolean)isEmpty;

- (jint)size;

- (jboolean)removeWithId:(id)o;

- (jboolean)addAllWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (void)clear;

- (IOSObjectArray *)toArray;

- (IOSObjectArray *)toArrayWithNSObjectArray:(IOSObjectArray *)a;

- (id<JavaUtilIterator>)iterator;

- (id<JavaUtilIterator>)descendingIterator;


@end

FOUNDATION_EXPORT BOOL JavaUtilConcurrentConcurrentLinkedDeque_initialized;
J2OBJC_STATIC_INIT(JavaUtilConcurrentConcurrentLinkedDeque)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentConcurrentLinkedDeque, serialVersionUID, jlong)

FOUNDATION_EXPORT JavaUtilConcurrentConcurrentLinkedDeque_Node *JavaUtilConcurrentConcurrentLinkedDeque_PREV_TERMINATOR_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentConcurrentLinkedDeque, PREV_TERMINATOR_, JavaUtilConcurrentConcurrentLinkedDeque_Node *)

FOUNDATION_EXPORT JavaUtilConcurrentConcurrentLinkedDeque_Node *JavaUtilConcurrentConcurrentLinkedDeque_NEXT_TERMINATOR_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentConcurrentLinkedDeque, NEXT_TERMINATOR_, JavaUtilConcurrentConcurrentLinkedDeque_Node *)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentConcurrentLinkedDeque, HOPS, jint)

FOUNDATION_EXPORT SunMiscUnsafe *JavaUtilConcurrentConcurrentLinkedDeque_UNSAFE_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentConcurrentLinkedDeque, UNSAFE_, SunMiscUnsafe *)

FOUNDATION_EXPORT jlong JavaUtilConcurrentConcurrentLinkedDeque_headOffset_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentConcurrentLinkedDeque, headOffset_, jlong)

FOUNDATION_EXPORT jlong JavaUtilConcurrentConcurrentLinkedDeque_tailOffset_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentConcurrentLinkedDeque, tailOffset_, jlong)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentConcurrentLinkedDeque)

@interface JavaUtilConcurrentConcurrentLinkedDeque_Node : NSObject {
 @public
  JavaUtilConcurrentConcurrentLinkedDeque_Node *prev_;
  id item_;
  JavaUtilConcurrentConcurrentLinkedDeque_Node *next_;
}

- (instancetype)init;

- (instancetype)initWithId:(id)item;

- (jboolean)casItemWithId:(id)cmp
                   withId:(id)val;

- (void)lazySetNextWithJavaUtilConcurrentConcurrentLinkedDeque_Node:(JavaUtilConcurrentConcurrentLinkedDeque_Node *)val;

- (jboolean)casNextWithJavaUtilConcurrentConcurrentLinkedDeque_Node:(JavaUtilConcurrentConcurrentLinkedDeque_Node *)cmp
                   withJavaUtilConcurrentConcurrentLinkedDeque_Node:(JavaUtilConcurrentConcurrentLinkedDeque_Node *)val;

- (void)lazySetPrevWithJavaUtilConcurrentConcurrentLinkedDeque_Node:(JavaUtilConcurrentConcurrentLinkedDeque_Node *)val;

- (jboolean)casPrevWithJavaUtilConcurrentConcurrentLinkedDeque_Node:(JavaUtilConcurrentConcurrentLinkedDeque_Node *)cmp
                   withJavaUtilConcurrentConcurrentLinkedDeque_Node:(JavaUtilConcurrentConcurrentLinkedDeque_Node *)val;

@end

FOUNDATION_EXPORT BOOL JavaUtilConcurrentConcurrentLinkedDeque_Node_initialized;
J2OBJC_STATIC_INIT(JavaUtilConcurrentConcurrentLinkedDeque_Node)

J2OBJC_FIELD_SETTER(JavaUtilConcurrentConcurrentLinkedDeque_Node, prev_, JavaUtilConcurrentConcurrentLinkedDeque_Node *)
J2OBJC_FIELD_SETTER(JavaUtilConcurrentConcurrentLinkedDeque_Node, item_, id)
J2OBJC_FIELD_SETTER(JavaUtilConcurrentConcurrentLinkedDeque_Node, next_, JavaUtilConcurrentConcurrentLinkedDeque_Node *)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT SunMiscUnsafe *JavaUtilConcurrentConcurrentLinkedDeque_Node_UNSAFE_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentConcurrentLinkedDeque_Node, UNSAFE_, SunMiscUnsafe *)

FOUNDATION_EXPORT jlong JavaUtilConcurrentConcurrentLinkedDeque_Node_prevOffset_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentConcurrentLinkedDeque_Node, prevOffset_, jlong)

FOUNDATION_EXPORT jlong JavaUtilConcurrentConcurrentLinkedDeque_Node_itemOffset_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentConcurrentLinkedDeque_Node, itemOffset_, jlong)

FOUNDATION_EXPORT jlong JavaUtilConcurrentConcurrentLinkedDeque_Node_nextOffset_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentConcurrentLinkedDeque_Node, nextOffset_, jlong)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentConcurrentLinkedDeque_Node)

@interface JavaUtilConcurrentConcurrentLinkedDeque_AbstractItr : NSObject < JavaUtilIterator > {
}

- (JavaUtilConcurrentConcurrentLinkedDeque_Node *)startNode;

- (JavaUtilConcurrentConcurrentLinkedDeque_Node *)nextNodeWithJavaUtilConcurrentConcurrentLinkedDeque_Node:(JavaUtilConcurrentConcurrentLinkedDeque_Node *)p;

- (instancetype)initWithJavaUtilConcurrentConcurrentLinkedDeque:(JavaUtilConcurrentConcurrentLinkedDeque *)outer$;

- (jboolean)hasNext;

- (id)next;

- (void)remove;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentConcurrentLinkedDeque_AbstractItr)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentConcurrentLinkedDeque_AbstractItr)

@interface JavaUtilConcurrentConcurrentLinkedDeque_Itr : JavaUtilConcurrentConcurrentLinkedDeque_AbstractItr {
}

- (JavaUtilConcurrentConcurrentLinkedDeque_Node *)startNode;

- (JavaUtilConcurrentConcurrentLinkedDeque_Node *)nextNodeWithJavaUtilConcurrentConcurrentLinkedDeque_Node:(JavaUtilConcurrentConcurrentLinkedDeque_Node *)p;

- (instancetype)initWithJavaUtilConcurrentConcurrentLinkedDeque:(JavaUtilConcurrentConcurrentLinkedDeque *)outer$;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentConcurrentLinkedDeque_Itr)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentConcurrentLinkedDeque_Itr)

@interface JavaUtilConcurrentConcurrentLinkedDeque_DescendingItr : JavaUtilConcurrentConcurrentLinkedDeque_AbstractItr {
}

- (JavaUtilConcurrentConcurrentLinkedDeque_Node *)startNode;

- (JavaUtilConcurrentConcurrentLinkedDeque_Node *)nextNodeWithJavaUtilConcurrentConcurrentLinkedDeque_Node:(JavaUtilConcurrentConcurrentLinkedDeque_Node *)p;

- (instancetype)initWithJavaUtilConcurrentConcurrentLinkedDeque:(JavaUtilConcurrentConcurrentLinkedDeque *)outer$;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentConcurrentLinkedDeque_DescendingItr)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentConcurrentLinkedDeque_DescendingItr)

#endif // _JavaUtilConcurrentConcurrentLinkedDeque_H_
