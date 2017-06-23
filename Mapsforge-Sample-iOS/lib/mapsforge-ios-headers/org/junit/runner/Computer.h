//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/ugos/j2objc-master/junit/build_result/java/org/junit/runner/Computer.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitRunnerComputer")
#ifdef RESTRICT_OrgJunitRunnerComputer
#define INCLUDE_ALL_OrgJunitRunnerComputer 0
#else
#define INCLUDE_ALL_OrgJunitRunnerComputer 1
#endif
#undef RESTRICT_OrgJunitRunnerComputer

#if !defined (OrgJunitRunnerComputer_) && (INCLUDE_ALL_OrgJunitRunnerComputer || defined(INCLUDE_OrgJunitRunnerComputer))
#define OrgJunitRunnerComputer_

@class IOSClass;
@class IOSObjectArray;
@class OrgJunitRunnerRunner;
@class OrgJunitRunnersModelRunnerBuilder;

@interface OrgJunitRunnerComputer : NSObject

#pragma mark Public

- (instancetype)init;

- (OrgJunitRunnerRunner *)getSuiteWithOrgJunitRunnersModelRunnerBuilder:(OrgJunitRunnersModelRunnerBuilder *)builder
                                                      withIOSClassArray:(IOSObjectArray *)classes;

+ (OrgJunitRunnerComputer *)serial;

#pragma mark Protected

- (OrgJunitRunnerRunner *)getRunnerWithOrgJunitRunnersModelRunnerBuilder:(OrgJunitRunnersModelRunnerBuilder *)builder
                                                            withIOSClass:(IOSClass *)testClass;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitRunnerComputer)

FOUNDATION_EXPORT void OrgJunitRunnerComputer_init(OrgJunitRunnerComputer *self);

FOUNDATION_EXPORT OrgJunitRunnerComputer *new_OrgJunitRunnerComputer_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitRunnerComputer *create_OrgJunitRunnerComputer_init();

FOUNDATION_EXPORT OrgJunitRunnerComputer *OrgJunitRunnerComputer_serial();

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRunnerComputer)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgJunitRunnerComputer")
