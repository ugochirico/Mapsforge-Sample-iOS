//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/Delayed.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilConcurrentDelayed")
#ifdef RESTRICT_JavaUtilConcurrentDelayed
#define INCLUDE_ALL_JavaUtilConcurrentDelayed 0
#else
#define INCLUDE_ALL_JavaUtilConcurrentDelayed 1
#endif
#undef RESTRICT_JavaUtilConcurrentDelayed

#if !defined (JavaUtilConcurrentDelayed_) && (INCLUDE_ALL_JavaUtilConcurrentDelayed || defined(INCLUDE_JavaUtilConcurrentDelayed))
#define JavaUtilConcurrentDelayed_

#define RESTRICT_JavaLangComparable 1
#define INCLUDE_JavaLangComparable 1
#include "java/lang/Comparable.h"

@class JavaUtilConcurrentTimeUnit;

/*!
 @brief A mix-in style interface for marking objects that should be
  acted upon after a given delay.
 <p>An implementation of this interface must define a 
 <code>compareTo</code> method that provides an ordering consistent with
  its <code>getDelay</code> method.
 @since 1.5
 @author Doug Lea
 */
@protocol JavaUtilConcurrentDelayed < JavaLangComparable, JavaObject >

/*!
 @brief Returns the remaining delay associated with this object, in the
  given time unit.
 @param unit the time unit
 @return the remaining delay; zero or negative values indicate
  that the delay has already elapsed
 */
- (jlong)getDelayWithJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentDelayed)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentDelayed)

#endif

#pragma pop_macro("INCLUDE_ALL_JavaUtilConcurrentDelayed")
