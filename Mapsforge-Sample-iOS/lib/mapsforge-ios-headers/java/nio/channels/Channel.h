//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/channels/Channel.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNioChannelsChannel")
#ifdef RESTRICT_JavaNioChannelsChannel
#define INCLUDE_ALL_JavaNioChannelsChannel 0
#else
#define INCLUDE_ALL_JavaNioChannelsChannel 1
#endif
#undef RESTRICT_JavaNioChannelsChannel

#if !defined (JavaNioChannelsChannel_) && (INCLUDE_ALL_JavaNioChannelsChannel || defined(INCLUDE_JavaNioChannelsChannel))
#define JavaNioChannelsChannel_

#define RESTRICT_JavaIoCloseable 1
#define INCLUDE_JavaIoCloseable 1
#include "java/io/Closeable.h"

/*!
 @brief A channel is a conduit to I/O services covering such items as files, sockets,
  hardware devices, I/O ports or some software component.
 <p>
  Channels are open upon creation, and can be closed explicitly. Once a channel
  is closed it cannot be re-opened, and any attempts to perform I/O operations
  on the closed channel result in a <code>ClosedChannelException</code>.
  <p>
  Particular implementations or sub-interfaces of <code>Channel</code> dictate
  whether they are thread-safe or not.
 */
@protocol JavaNioChannelsChannel < JavaIoCloseable, JavaObject >

/*!
 @brief Returns true if this channel is open.
 */
- (jboolean)isOpen;

/*!
 @brief Closes an open channel.If the channel is already closed then this method
  has no effect.
 If there is a problem with closing the channel then the
  method throws an IOException and the exception contains reasons for the
  failure. 
 <p>
  If an attempt is made to perform an operation on a closed channel then a 
 <code>ClosedChannelException</code> will be thrown on that attempt. 
 <p>
  If multiple threads attempt to simultaneously close a channel, then only
  one thread will run the closure code, and others will be blocked until
  the first returns.
 @throw IOException
 if a problem occurs closing the channel.
 */
- (void)close;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioChannelsChannel)

J2OBJC_TYPE_LITERAL_HEADER(JavaNioChannelsChannel)

#endif

#pragma pop_macro("INCLUDE_ALL_JavaNioChannelsChannel")
