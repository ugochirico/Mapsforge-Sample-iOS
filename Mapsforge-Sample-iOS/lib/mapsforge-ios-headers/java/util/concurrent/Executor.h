//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/Executor.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilConcurrentExecutor")
#ifdef RESTRICT_JavaUtilConcurrentExecutor
#define INCLUDE_ALL_JavaUtilConcurrentExecutor 0
#else
#define INCLUDE_ALL_JavaUtilConcurrentExecutor 1
#endif
#undef RESTRICT_JavaUtilConcurrentExecutor

#if !defined (JavaUtilConcurrentExecutor_) && (INCLUDE_ALL_JavaUtilConcurrentExecutor || defined(INCLUDE_JavaUtilConcurrentExecutor))
#define JavaUtilConcurrentExecutor_

@protocol JavaLangRunnable;

/*!
 @brief An object that executes submitted <code>Runnable</code> tasks.This
  interface provides a way of decoupling task submission from the
  mechanics of how each task will be run, including details of thread
  use, scheduling, etc.
 An <code>Executor</code> is normally used
  instead of explicitly creating threads. For example, rather than
  invoking <code>new Thread(new RunnableTask()).start()</code> for each
  of a set of tasks, you might use: 
 @code

  Executor executor = <em>anExecutor</em>;
  executor.execute(new RunnableTask1());
  executor.execute(new RunnableTask2());
  ... 
  
@endcode
  However, the <code>Executor</code> interface does not strictly
  require that execution be asynchronous. In the simplest case, an
  executor can run the submitted task immediately in the caller's
  thread:
   @code
  class DirectExecutor implements Executor {
    public void execute(Runnable r) {
      r.run();
    }  }
 
@endcode
  More typically, tasks are executed in some thread other
  than the caller's thread.  The executor below spawns a new thread
  for each task.
   @code
  class ThreadPerTaskExecutor implements Executor {
    public void execute(Runnable r) {
      new Thread(r).start();
    }  }
 
@endcode
  Many <code>Executor</code> implementations impose some sort of
  limitation on how and when tasks are scheduled.  The executor below
  serializes the submission of tasks to a second executor,
  illustrating a composite executor.
   @code
  class SerialExecutor implements Executor {
    final Queue<Runnable> tasks = new ArrayDeque<>();
    final Executor executor;
    Runnable active;
    SerialExecutor(Executor executor) {
      this.executor = executor;
    }
    public synchronized void execute(final Runnable r) {
      tasks.add(new Runnable() {
        public void run() {
          try {
            r.run();
          } finally {
            scheduleNext();
          }        }
      });
      if (active == null) {
        scheduleNext();
      }    }
    protected synchronized void scheduleNext() {
      if ((active = tasks.poll()) != null) {
        executor.execute(active);
      }    }    }
 
@endcode
  The <code>Executor</code> implementations provided in this package
  implement <code>ExecutorService</code>, which is a more extensive
  interface.  The <code>ThreadPoolExecutor</code> class provides an
  extensible thread pool implementation. The <code>Executors</code> class
  provides convenient factory methods for these Executors. 
 <p>Memory consistency effects: Actions in a thread prior to
  submitting a <code>Runnable</code> object to an <code>Executor</code>
  <a href="package-summary.html#MemoryVisibility"><i>happen-before</i></a>
  its execution begins, perhaps in another thread.
 @since 1.5
 @author Doug Lea
 */
@protocol JavaUtilConcurrentExecutor < JavaObject >

/*!
 @brief Executes the given command at some time in the future.The command
  may execute in a new thread, in a pooled thread, or in the calling
  thread, at the discretion of the <code>Executor</code> implementation.
 @param command the runnable task
 @throw RejectedExecutionExceptionif this task cannot be
  accepted for execution
 @throw NullPointerExceptionif command is null
 */
- (void)executeWithJavaLangRunnable:(id<JavaLangRunnable>)command;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentExecutor)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentExecutor)

#endif

#pragma pop_macro("INCLUDE_ALL_JavaUtilConcurrentExecutor")
