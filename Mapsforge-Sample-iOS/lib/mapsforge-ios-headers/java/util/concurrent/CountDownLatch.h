//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/CountDownLatch.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilConcurrentCountDownLatch")
#ifdef RESTRICT_JavaUtilConcurrentCountDownLatch
#define INCLUDE_ALL_JavaUtilConcurrentCountDownLatch 0
#else
#define INCLUDE_ALL_JavaUtilConcurrentCountDownLatch 1
#endif
#undef RESTRICT_JavaUtilConcurrentCountDownLatch

#if !defined (JavaUtilConcurrentCountDownLatch_) && (INCLUDE_ALL_JavaUtilConcurrentCountDownLatch || defined(INCLUDE_JavaUtilConcurrentCountDownLatch))
#define JavaUtilConcurrentCountDownLatch_

@class JavaUtilConcurrentTimeUnit;

/*!
 @brief A synchronization aid that allows one or more threads to wait until
  a set of operations being performed in other threads completes.
 <p>A <code>CountDownLatch</code> is initialized with a given <em>count</em>.
  The <code>await</code> methods block until the current count reaches
  zero due to invocations of the <code>countDown</code> method, after which
  all waiting threads are released and any subsequent invocations of 
 <code>await</code> return immediately.  This is a one-shot phenomenon
  -- the count cannot be reset.  If you need a version that resets the
  count, consider using a <code>CyclicBarrier</code>.
  
 <p>A <code>CountDownLatch</code> is a versatile synchronization tool
  and can be used for a number of purposes.  A 
 <code>CountDownLatch</code> initialized with a count of one serves as a
  simple on/off latch, or gate: all threads invoking <code>await</code>
  wait at the gate until it is opened by a thread invoking <code>countDown</code>
 .  A <code>CountDownLatch</code> initialized to <em>N</em>
  can be used to make one thread wait until <em>N</em> threads have
  completed some action, or some action has been completed N times. 
 <p>A useful property of a <code>CountDownLatch</code> is that it
  doesn't require that threads calling <code>countDown</code> wait for
  the count to reach zero before proceeding, it simply prevents any
  thread from proceeding past an <code>await</code> until all
  threads could pass. 
 <p><b>Sample usage:</b> Here is a pair of classes in which a group
  of worker threads use two countdown latches: 
 <ul>
  <li>The first is a start signal that prevents any worker from proceeding
  until the driver is ready for them to proceed; 
 <li>The second is a completion signal that allows the driver to wait
  until all workers have completed. 
 </ul>
   @code
  class Driver { // ...
    void main() throws InterruptedException {
      CountDownLatch startSignal = new CountDownLatch(1);
      CountDownLatch doneSignal = new CountDownLatch(N);
      for (int i = 0; i < N; ++i) // create and start threads
        new Thread(new Worker(startSignal, doneSignal)).start();
      doSomethingElse();            // don't let run yet
      startSignal.countDown();      // let all threads proceed
      doSomethingElse();
      doneSignal.await();           // wait for all to finish
    }  }
  class Worker implements Runnable {
    private final CountDownLatch startSignal;
    private final CountDownLatch doneSignal;
    Worker(CountDownLatch startSignal, CountDownLatch doneSignal) {
      this.startSignal = startSignal;
      this.doneSignal = doneSignal;
    }
    public void run() {
      try {
        startSignal.await();
        doWork();
        doneSignal.countDown();
      } catch (InterruptedException ex) {} // return;    }
    void doWork() { ... } }
 
@endcode
  
 <p>Another typical usage would be to divide a problem into N parts,
  describe each part with a Runnable that executes that portion and
  counts down on the latch, and queue all the Runnables to an
  Executor.  When all sub-parts are complete, the coordinating thread
  will be able to pass through await. (When threads must repeatedly
  count down in this way, instead use a <code>CyclicBarrier</code>.)
   @code
  class Driver2 { // ...
    void main() throws InterruptedException {
      CountDownLatch doneSignal = new CountDownLatch(N);
      Executor e = ...
      for (int i = 0; i < N; ++i) // create and start threads
        e.execute(new WorkerRunnable(doneSignal, i));
      doneSignal.await();           // wait for all to finish
    }  }
  class WorkerRunnable implements Runnable {
    private final CountDownLatch doneSignal;
    private final int i;
    WorkerRunnable(CountDownLatch doneSignal, int i) {
      this.doneSignal = doneSignal;
      this.i = i;
    }
    public void run() {
      try {
        doWork(i);
        doneSignal.countDown();
      } catch (InterruptedException ex) {} // return;    }
    void doWork() { ... } }
 
@endcode
  
 <p>Memory consistency effects: Until the count reaches
  zero, actions in a thread prior to calling 
 <code>countDown()</code>
  <a href="package-summary.html#MemoryVisibility"><i>happen-before</i></a>
  actions following a successful return from a corresponding 
 <code>await()</code> in another thread.
 @since 1.5
 @author Doug Lea
 */
@interface JavaUtilConcurrentCountDownLatch : NSObject

#pragma mark Public

/*!
 @brief Constructs a <code>CountDownLatch</code> initialized with the given count.
 @param count the number of times <code>countDown</code>  must be invoked
          before threads can pass through <code>await</code>
 @throw IllegalArgumentExceptionif <code>count</code> is negative
 */
- (instancetype)initWithInt:(jint)count;

/*!
 @brief Causes the current thread to wait until the latch has counted down to
  zero, unless the thread is interrupted.
 <p>If the current count is zero then this method returns immediately. 
 <p>If the current count is greater than zero then the current
  thread becomes disabled for thread scheduling purposes and lies
  dormant until one of two things happen: 
 <ul>
  <li>The count reaches zero due to invocations of the 
 <code>countDown</code> method; or 
 <li>Some other thread interrupts
  the current thread. 
 </ul>
  
 <p>If the current thread: 
 <ul>
  <li>has its interrupted status set on entry to this method; or 
 <li>is interrupted while waiting, 
 </ul>
  then <code>InterruptedException</code> is thrown and the current thread's
  interrupted status is cleared.
 @throw InterruptedExceptionif the current thread is interrupted
          while waiting
 */
- (void)await;

/*!
 @brief Causes the current thread to wait until the latch has counted down to
  zero, unless the thread is interrupted,
  or the specified waiting time elapses.
 <p>If the current count is zero then this method returns immediately
  with the value <code>true</code>.
  
 <p>If the current count is greater than zero then the current
  thread becomes disabled for thread scheduling purposes and lies
  dormant until one of three things happen: 
 <ul>
  <li>The count reaches zero due to invocations of the 
 <code>countDown</code> method; or 
 <li>Some other thread interrupts
  the current thread; or 
 <li>The specified waiting time elapses. 
 </ul>
  
 <p>If the count reaches zero then the method returns with the
  value <code>true</code>.
  
 <p>If the current thread: 
 <ul>
  <li>has its interrupted status set on entry to this method; or 
 <li>is interrupted while waiting, 
 </ul>
  then <code>InterruptedException</code> is thrown and the current thread's
  interrupted status is cleared. 
 <p>If the specified waiting time elapses then the value <code>false</code>
  is returned.  If the time is less than or equal to zero, the method
  will not wait at all.
 @param timeout the maximum time to wait
 @param unit the time unit of the <code>timeout</code>  argument
 @return <code>true</code> if the count reached zero and <code>false</code>
          if the waiting time elapsed before the count reached zero
 @throw InterruptedExceptionif the current thread is interrupted
          while waiting
 */
- (jboolean)awaitWithLong:(jlong)timeout
withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

/*!
 @brief Decrements the count of the latch, releasing all waiting threads if
  the count reaches zero.
 <p>If the current count is greater than zero then it is decremented.
  If the new count is zero then all waiting threads are re-enabled for
  thread scheduling purposes. 
 <p>If the current count equals zero then nothing happens.
 */
- (void)countDown;

/*!
 @brief Returns the current count.
 <p>This method is typically used for debugging and testing purposes.
 @return the current count
 */
- (jlong)getCount;

/*!
 @brief Returns a string identifying this latch, as well as its state.
 The state, in brackets, includes the String <code>"Count ="</code>
  followed by the current count.
 @return a string identifying this latch, as well as its state
 */
- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentCountDownLatch)

FOUNDATION_EXPORT void JavaUtilConcurrentCountDownLatch_initWithInt_(JavaUtilConcurrentCountDownLatch *self, jint count);

FOUNDATION_EXPORT JavaUtilConcurrentCountDownLatch *new_JavaUtilConcurrentCountDownLatch_initWithInt_(jint count) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilConcurrentCountDownLatch *create_JavaUtilConcurrentCountDownLatch_initWithInt_(jint count);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentCountDownLatch)

#endif

#pragma pop_macro("INCLUDE_ALL_JavaUtilConcurrentCountDownLatch")
