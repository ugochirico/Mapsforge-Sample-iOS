//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/ugos/j2objc-master/junit/build_result/java/org/hamcrest/BaseDescription.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgHamcrestBaseDescription")
#ifdef RESTRICT_OrgHamcrestBaseDescription
#define INCLUDE_ALL_OrgHamcrestBaseDescription 0
#else
#define INCLUDE_ALL_OrgHamcrestBaseDescription 1
#endif
#undef RESTRICT_OrgHamcrestBaseDescription

#if !defined (OrgHamcrestBaseDescription_) && (INCLUDE_ALL_OrgHamcrestBaseDescription || defined(INCLUDE_OrgHamcrestBaseDescription))
#define OrgHamcrestBaseDescription_

#define RESTRICT_OrgHamcrestDescription 1
#define INCLUDE_OrgHamcrestDescription 1
#include "org/hamcrest/Description.h"

@class IOSObjectArray;
@protocol JavaLangIterable;
@protocol OrgHamcrestSelfDescribing;

@interface OrgHamcrestBaseDescription : NSObject < OrgHamcrestDescription >

#pragma mark Public

- (instancetype)init;

- (id<OrgHamcrestDescription>)appendDescriptionOfWithOrgHamcrestSelfDescribing:(id<OrgHamcrestSelfDescribing>)value;

- (id<OrgHamcrestDescription>)appendListWithNSString:(NSString *)start
                                        withNSString:(NSString *)separator
                                        withNSString:(NSString *)end
                                withJavaLangIterable:(id<JavaLangIterable>)values;

- (id<OrgHamcrestDescription>)appendTextWithNSString:(NSString *)text;

- (id<OrgHamcrestDescription>)appendValueWithId:(id)value;

- (id<OrgHamcrestDescription>)appendValueListWithNSString:(NSString *)start
                                             withNSString:(NSString *)separator
                                             withNSString:(NSString *)end
                                     withJavaLangIterable:(id<JavaLangIterable>)values;

- (id<OrgHamcrestDescription>)appendValueListWithNSString:(NSString *)start
                                             withNSString:(NSString *)separator
                                             withNSString:(NSString *)end
                                        withNSObjectArray:(IOSObjectArray *)values;

#pragma mark Protected

- (void)appendWithChar:(jchar)c;

- (void)appendWithNSString:(NSString *)str;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgHamcrestBaseDescription)

FOUNDATION_EXPORT void OrgHamcrestBaseDescription_init(OrgHamcrestBaseDescription *self);

J2OBJC_TYPE_LITERAL_HEADER(OrgHamcrestBaseDescription)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgHamcrestBaseDescription")
