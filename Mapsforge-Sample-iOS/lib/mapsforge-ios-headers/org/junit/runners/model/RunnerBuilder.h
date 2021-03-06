//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/ugos/j2objc-master/junit/build_result/java/org/junit/runners/model/RunnerBuilder.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitRunnersModelRunnerBuilder")
#ifdef RESTRICT_OrgJunitRunnersModelRunnerBuilder
#define INCLUDE_ALL_OrgJunitRunnersModelRunnerBuilder 0
#else
#define INCLUDE_ALL_OrgJunitRunnersModelRunnerBuilder 1
#endif
#undef RESTRICT_OrgJunitRunnersModelRunnerBuilder

#if !defined (OrgJunitRunnersModelRunnerBuilder_) && (INCLUDE_ALL_OrgJunitRunnersModelRunnerBuilder || defined(INCLUDE_OrgJunitRunnersModelRunnerBuilder))
#define OrgJunitRunnersModelRunnerBuilder_

@class IOSClass;
@class IOSObjectArray;
@class OrgJunitRunnerRunner;
@protocol JavaUtilList;

@interface OrgJunitRunnersModelRunnerBuilder : NSObject

#pragma mark Public

- (instancetype)init;

- (OrgJunitRunnerRunner *)runnerForClassWithIOSClass:(IOSClass *)testClass;

- (id<JavaUtilList>)runnersWithIOSClass:(IOSClass *)parent
                      withIOSClassArray:(IOSObjectArray *)children;

- (id<JavaUtilList>)runnersWithIOSClass:(IOSClass *)parent
                       withJavaUtilList:(id<JavaUtilList>)children;

- (OrgJunitRunnerRunner *)safeRunnerForClassWithIOSClass:(IOSClass *)testClass;

#pragma mark Package-Private

- (IOSClass *)addParentWithIOSClass:(IOSClass *)parent;

- (void)removeParentWithIOSClass:(IOSClass *)klass;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitRunnersModelRunnerBuilder)

FOUNDATION_EXPORT void OrgJunitRunnersModelRunnerBuilder_init(OrgJunitRunnersModelRunnerBuilder *self);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRunnersModelRunnerBuilder)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgJunitRunnersModelRunnerBuilder")
