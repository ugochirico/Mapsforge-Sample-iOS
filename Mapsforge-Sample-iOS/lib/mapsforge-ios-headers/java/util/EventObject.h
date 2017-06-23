//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/EventObject.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilEventObject")
#ifdef RESTRICT_JavaUtilEventObject
#define INCLUDE_ALL_JavaUtilEventObject 0
#else
#define INCLUDE_ALL_JavaUtilEventObject 1
#endif
#undef RESTRICT_JavaUtilEventObject

#if !defined (JavaUtilEventObject_) && (INCLUDE_ALL_JavaUtilEventObject || defined(INCLUDE_JavaUtilEventObject))
#define JavaUtilEventObject_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

/*!
 @brief <code>EventObject</code>s represent events.Typically applications subclass this class to
  add event specific information.
 - seealso: EventListener
 */
@interface JavaUtilEventObject : NSObject < JavaIoSerializable > {
 @public
  id source_;
}

#pragma mark Public

/*!
 @brief Constructs a new instance of this class.
 @param source the object which fired the event.
 */
- (instancetype)initWithId:(id)source;

/*!
 @brief Returns the object which fired the event.
 */
- (id)getSource;

/*!
 @brief Returns the string representation of this <code>EventObject</code>.
 */
- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilEventObject)

J2OBJC_FIELD_SETTER(JavaUtilEventObject, source_, id)

FOUNDATION_EXPORT void JavaUtilEventObject_initWithId_(JavaUtilEventObject *self, id source);

FOUNDATION_EXPORT JavaUtilEventObject *new_JavaUtilEventObject_initWithId_(id source) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilEventObject *create_JavaUtilEventObject_initWithId_(id source);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilEventObject)

#endif

#pragma pop_macro("INCLUDE_ALL_JavaUtilEventObject")
