//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/ugos/j2objc-master/junit/build_result/java/org/junit/runner/Runner.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitRunnerRunner")
#ifdef RESTRICT_OrgJunitRunnerRunner
#define INCLUDE_ALL_OrgJunitRunnerRunner 0
#else
#define INCLUDE_ALL_OrgJunitRunnerRunner 1
#endif
#undef RESTRICT_OrgJunitRunnerRunner

#if !defined (OrgJunitRunnerRunner_) && (INCLUDE_ALL_OrgJunitRunnerRunner || defined(INCLUDE_OrgJunitRunnerRunner))
#define OrgJunitRunnerRunner_

#define RESTRICT_OrgJunitRunnerDescribable 1
#define INCLUDE_OrgJunitRunnerDescribable 1
#include "org/junit/runner/Describable.h"

@class OrgJunitRunnerDescription;
@class OrgJunitRunnerNotificationRunNotifier;

@interface OrgJunitRunnerRunner : NSObject < OrgJunitRunnerDescribable >

#pragma mark Public

- (instancetype)init;

- (OrgJunitRunnerDescription *)getDescription;

- (void)runWithOrgJunitRunnerNotificationRunNotifier:(OrgJunitRunnerNotificationRunNotifier *)notifier;

- (jint)testCount;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitRunnerRunner)

FOUNDATION_EXPORT void OrgJunitRunnerRunner_init(OrgJunitRunnerRunner *self);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRunnerRunner)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgJunitRunnerRunner")
