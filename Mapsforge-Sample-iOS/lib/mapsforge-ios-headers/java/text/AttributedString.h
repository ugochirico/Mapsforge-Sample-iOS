//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/text/AttributedString.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaTextAttributedString")
#ifdef RESTRICT_JavaTextAttributedString
#define INCLUDE_ALL_JavaTextAttributedString 0
#else
#define INCLUDE_ALL_JavaTextAttributedString 1
#endif
#undef RESTRICT_JavaTextAttributedString

#if !defined (JavaTextAttributedString_) && (INCLUDE_ALL_JavaTextAttributedString || defined(INCLUDE_JavaTextAttributedString))
#define JavaTextAttributedString_

@class IOSIntArray;
@class IOSObjectArray;
@class JavaTextAttributedCharacterIterator_Attribute;
@protocol JavaTextAttributedCharacterIterator;
@protocol JavaUtilMap;

/*!
 @brief An AttributedString holds text and related attribute information.It
  may be used as the actual data storage in some cases where a text
  reader wants to access attributed text through the AttributedCharacterIterator
  interface.
 <p>
  An attribute is a key/value pair, identified by the key.  No two
  attributes on a given character can have the same key. 
 <p>The values for an attribute are immutable, or must not be mutated
  by clients or storage.  They are always passed by reference, and not
  cloned.
 - seealso: AttributedCharacterIterator
 - seealso: Annotation
 @since 1.2
 */
@interface JavaTextAttributedString : NSObject {
 @public
  NSString *text_;
  jint runArraySize_;
  jint runCount_;
  IOSIntArray *runStarts_;
  IOSObjectArray *runAttributes_;
  IOSObjectArray *runAttributeValues_;
}

#pragma mark Public

/*!
 @brief Constructs an AttributedString instance with the given attributed
  text represented by AttributedCharacterIterator.
 @param text The text for this attributed string.
 @throw NullPointerExceptionif <code>text</code> is null.
 */
- (instancetype)initWithJavaTextAttributedCharacterIterator:(id<JavaTextAttributedCharacterIterator>)text;

/*!
 @brief Constructs an AttributedString instance with the subrange of
  the given attributed text represented by
  AttributedCharacterIterator.If the given range produces an
  empty text, all attributes will be discarded.
 Note that any
  attributes wrapped by an Annotation object are discarded for a
  subrange of the original attribute range.
 @param text The text for this attributed string.
 @param beginIndex Index of the first character of the range.
 @param endIndex Index of the character following the last character  of the range.
 @throw NullPointerExceptionif <code>text</code> is null.
 @throw IllegalArgumentExceptionif the subrange given by
  beginIndex and endIndex is out of the text range.
 - seealso: java.text.Annotation
 */
- (instancetype)initWithJavaTextAttributedCharacterIterator:(id<JavaTextAttributedCharacterIterator>)text
                                                    withInt:(jint)beginIndex
                                                    withInt:(jint)endIndex;

/*!
 @brief Constructs an AttributedString instance with the subrange of
  the given attributed text represented by
  AttributedCharacterIterator.Only attributes that match the
  given attributes will be incorporated into the instance.
 If the
  given range produces an empty text, all attributes will be
  discarded. Note that any attributes wrapped by an Annotation
  object are discarded for a subrange of the original attribute
  range.
 @param text The text for this attributed string.
 @param beginIndex Index of the first character of the range.
 @param endIndex Index of the character following the last character  of the range.
 @param attributes Specifies attributes to be extracted  from the text. If null is specified, all available attributes will
   be used.
 @throw NullPointerExceptionif <code>text</code> is null.
 @throw IllegalArgumentExceptionif the subrange given by
  beginIndex and endIndex is out of the text range.
 - seealso: java.text.Annotation
 */
- (instancetype)initWithJavaTextAttributedCharacterIterator:(id<JavaTextAttributedCharacterIterator>)text
                                                    withInt:(jint)beginIndex
                                                    withInt:(jint)endIndex
     withJavaTextAttributedCharacterIterator_AttributeArray:(IOSObjectArray *)attributes;

/*!
 @brief Constructs an AttributedString instance with the given text.
 @param text The text for this attributed string.
 @throw NullPointerExceptionif <code>text</code> is null.
 */
- (instancetype)initWithNSString:(NSString *)text;

/*!
 @brief Constructs an AttributedString instance with the given text and attributes.
 @param text The text for this attributed string.
 @param attributes The attributes that apply to the entire string.
 @throw NullPointerExceptionif <code>text</code> or
             <code>attributes</code> is null.
 @throw IllegalArgumentExceptionif the text has length 0
  and the attributes parameter is not an empty Map (attributes
  cannot be applied to a 0-length range).
 */
- (instancetype)initWithNSString:(NSString *)text
                 withJavaUtilMap:(id<JavaUtilMap>)attributes;

/*!
 @brief Adds an attribute to the entire string.
 @param attribute the attribute key
 @param value the value of the attribute; may be null
 @throw NullPointerExceptionif <code>attribute</code> is null.
 @throw IllegalArgumentExceptionif the AttributedString has length 0
  (attributes cannot be applied to a 0-length range).
 */
- (void)addAttributeWithJavaTextAttributedCharacterIterator_Attribute:(JavaTextAttributedCharacterIterator_Attribute *)attribute
                                                               withId:(id)value;

/*!
 @brief Adds an attribute to a subrange of the string.
 @param attribute the attribute key
 @param value The value of the attribute. May be null.
 @param beginIndex Index of the first character of the range.
 @param endIndex Index of the character following the last character of the range.
 @throw NullPointerExceptionif <code>attribute</code> is null.
 @throw IllegalArgumentExceptionif beginIndex is less then 0, endIndex is
  greater than the length of the string, or beginIndex and endIndex together don't
  define a non-empty subrange of the string.
 */
- (void)addAttributeWithJavaTextAttributedCharacterIterator_Attribute:(JavaTextAttributedCharacterIterator_Attribute *)attribute
                                                               withId:(id)value
                                                              withInt:(jint)beginIndex
                                                              withInt:(jint)endIndex;

/*!
 @brief Adds a set of attributes to a subrange of the string.
 @param attributes The attributes to be added to the string.
 @param beginIndex Index of the first character of the range.
 @param endIndex Index of the character following the last  character of the range.
 @throw NullPointerExceptionif <code>attributes</code> is null.
 @throw IllegalArgumentExceptionif beginIndex is less then
  0, endIndex is greater than the length of the string, or
  beginIndex and endIndex together don't define a non-empty
  subrange of the string and the attributes parameter is not an
  empty Map.
 */
- (void)addAttributesWithJavaUtilMap:(id<JavaUtilMap>)attributes
                             withInt:(jint)beginIndex
                             withInt:(jint)endIndex;

/*!
 @brief Creates an AttributedCharacterIterator instance that provides access to the entire contents of
  this string.
 @return An iterator providing access to the text and its attributes.
 */
- (id<JavaTextAttributedCharacterIterator>)getIterator;

/*!
 @brief Creates an AttributedCharacterIterator instance that provides access to
  selected contents of this string.
 Information about attributes not listed in attributes that the
  implementor may have need not be made accessible through the iterator.
  If the list is null, all available attribute information should be made
  accessible.
 @param attributes a list of attributes that the client is interested in
 @return an iterator providing access to the entire text and its selected attributes
 */
- (id<JavaTextAttributedCharacterIterator>)getIteratorWithJavaTextAttributedCharacterIterator_AttributeArray:(IOSObjectArray *)attributes;

/*!
 @brief Creates an AttributedCharacterIterator instance that provides access to
  selected contents of this string.
 Information about attributes not listed in attributes that the
  implementor may have need not be made accessible through the iterator.
  If the list is null, all available attribute information should be made
  accessible.
 @param attributes a list of attributes that the client is interested in
 @param beginIndex the index of the first character
 @param endIndex the index of the character following the last character
 @return an iterator providing access to the text and its attributes
 @throw IllegalArgumentExceptionif beginIndex is less then 0,
  endIndex is greater than the length of the string, or beginIndex is
  greater than endIndex.
 */
- (id<JavaTextAttributedCharacterIterator>)getIteratorWithJavaTextAttributedCharacterIterator_AttributeArray:(IOSObjectArray *)attributes
                                                                                                     withInt:(jint)beginIndex
                                                                                                     withInt:(jint)endIndex;

#pragma mark Package-Private

/*!
 @brief Constructs an AttributedString instance with the given
  AttributedCharacterIterators.
 @param iterators AttributedCharacterIterators to construct  AttributedString from.
 @throw NullPointerExceptionif iterators is null
 */
- (instancetype)initWithJavaTextAttributedCharacterIteratorArray:(IOSObjectArray *)iterators;

- (jint)length;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaTextAttributedString)

J2OBJC_FIELD_SETTER(JavaTextAttributedString, text_, NSString *)
J2OBJC_FIELD_SETTER(JavaTextAttributedString, runStarts_, IOSIntArray *)
J2OBJC_FIELD_SETTER(JavaTextAttributedString, runAttributes_, IOSObjectArray *)
J2OBJC_FIELD_SETTER(JavaTextAttributedString, runAttributeValues_, IOSObjectArray *)

FOUNDATION_EXPORT void JavaTextAttributedString_initWithJavaTextAttributedCharacterIteratorArray_(JavaTextAttributedString *self, IOSObjectArray *iterators);

FOUNDATION_EXPORT JavaTextAttributedString *new_JavaTextAttributedString_initWithJavaTextAttributedCharacterIteratorArray_(IOSObjectArray *iterators) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaTextAttributedString *create_JavaTextAttributedString_initWithJavaTextAttributedCharacterIteratorArray_(IOSObjectArray *iterators);

FOUNDATION_EXPORT void JavaTextAttributedString_initWithNSString_(JavaTextAttributedString *self, NSString *text);

FOUNDATION_EXPORT JavaTextAttributedString *new_JavaTextAttributedString_initWithNSString_(NSString *text) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaTextAttributedString *create_JavaTextAttributedString_initWithNSString_(NSString *text);

FOUNDATION_EXPORT void JavaTextAttributedString_initWithNSString_withJavaUtilMap_(JavaTextAttributedString *self, NSString *text, id<JavaUtilMap> attributes);

FOUNDATION_EXPORT JavaTextAttributedString *new_JavaTextAttributedString_initWithNSString_withJavaUtilMap_(NSString *text, id<JavaUtilMap> attributes) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaTextAttributedString *create_JavaTextAttributedString_initWithNSString_withJavaUtilMap_(NSString *text, id<JavaUtilMap> attributes);

FOUNDATION_EXPORT void JavaTextAttributedString_initWithJavaTextAttributedCharacterIterator_(JavaTextAttributedString *self, id<JavaTextAttributedCharacterIterator> text);

FOUNDATION_EXPORT JavaTextAttributedString *new_JavaTextAttributedString_initWithJavaTextAttributedCharacterIterator_(id<JavaTextAttributedCharacterIterator> text) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaTextAttributedString *create_JavaTextAttributedString_initWithJavaTextAttributedCharacterIterator_(id<JavaTextAttributedCharacterIterator> text);

FOUNDATION_EXPORT void JavaTextAttributedString_initWithJavaTextAttributedCharacterIterator_withInt_withInt_(JavaTextAttributedString *self, id<JavaTextAttributedCharacterIterator> text, jint beginIndex, jint endIndex);

FOUNDATION_EXPORT JavaTextAttributedString *new_JavaTextAttributedString_initWithJavaTextAttributedCharacterIterator_withInt_withInt_(id<JavaTextAttributedCharacterIterator> text, jint beginIndex, jint endIndex) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaTextAttributedString *create_JavaTextAttributedString_initWithJavaTextAttributedCharacterIterator_withInt_withInt_(id<JavaTextAttributedCharacterIterator> text, jint beginIndex, jint endIndex);

FOUNDATION_EXPORT void JavaTextAttributedString_initWithJavaTextAttributedCharacterIterator_withInt_withInt_withJavaTextAttributedCharacterIterator_AttributeArray_(JavaTextAttributedString *self, id<JavaTextAttributedCharacterIterator> text, jint beginIndex, jint endIndex, IOSObjectArray *attributes);

FOUNDATION_EXPORT JavaTextAttributedString *new_JavaTextAttributedString_initWithJavaTextAttributedCharacterIterator_withInt_withInt_withJavaTextAttributedCharacterIterator_AttributeArray_(id<JavaTextAttributedCharacterIterator> text, jint beginIndex, jint endIndex, IOSObjectArray *attributes) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaTextAttributedString *create_JavaTextAttributedString_initWithJavaTextAttributedCharacterIterator_withInt_withInt_withJavaTextAttributedCharacterIterator_AttributeArray_(id<JavaTextAttributedCharacterIterator> text, jint beginIndex, jint endIndex, IOSObjectArray *attributes);

J2OBJC_TYPE_LITERAL_HEADER(JavaTextAttributedString)

#endif

#if !defined (JavaTextAttributeEntry_) && (INCLUDE_ALL_JavaTextAttributedString || defined(INCLUDE_JavaTextAttributeEntry))
#define JavaTextAttributeEntry_

#define RESTRICT_JavaUtilMap 1
#define INCLUDE_JavaUtilMap_Entry 1
#include "java/util/Map.h"

@class JavaTextAttributedCharacterIterator_Attribute;

@interface JavaTextAttributeEntry : NSObject < JavaUtilMap_Entry >

#pragma mark Public

- (jboolean)isEqual:(id)o;

- (id)getKey;

- (id)getValue;

- (NSUInteger)hash;

- (id)setValueWithId:(id)newValue;

- (NSString *)description;

#pragma mark Package-Private

- (instancetype)initWithJavaTextAttributedCharacterIterator_Attribute:(JavaTextAttributedCharacterIterator_Attribute *)key
                                                               withId:(id)value;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaTextAttributeEntry)

FOUNDATION_EXPORT void JavaTextAttributeEntry_initWithJavaTextAttributedCharacterIterator_Attribute_withId_(JavaTextAttributeEntry *self, JavaTextAttributedCharacterIterator_Attribute *key, id value);

FOUNDATION_EXPORT JavaTextAttributeEntry *new_JavaTextAttributeEntry_initWithJavaTextAttributedCharacterIterator_Attribute_withId_(JavaTextAttributedCharacterIterator_Attribute *key, id value) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaTextAttributeEntry *create_JavaTextAttributeEntry_initWithJavaTextAttributedCharacterIterator_Attribute_withId_(JavaTextAttributedCharacterIterator_Attribute *key, id value);

J2OBJC_TYPE_LITERAL_HEADER(JavaTextAttributeEntry)

#endif

#pragma pop_macro("INCLUDE_ALL_JavaTextAttributedString")
