//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/channels/ServerSocketChannel.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNioChannelsServerSocketChannel")
#ifdef RESTRICT_JavaNioChannelsServerSocketChannel
#define INCLUDE_ALL_JavaNioChannelsServerSocketChannel 0
#else
#define INCLUDE_ALL_JavaNioChannelsServerSocketChannel 1
#endif
#undef RESTRICT_JavaNioChannelsServerSocketChannel

#if !defined (JavaNioChannelsServerSocketChannel_) && (INCLUDE_ALL_JavaNioChannelsServerSocketChannel || defined(INCLUDE_JavaNioChannelsServerSocketChannel))
#define JavaNioChannelsServerSocketChannel_

#define RESTRICT_JavaNioChannelsSpiAbstractSelectableChannel 1
#define INCLUDE_JavaNioChannelsSpiAbstractSelectableChannel 1
#include "java/nio/channels/spi/AbstractSelectableChannel.h"

#define RESTRICT_JavaNioChannelsNetworkChannel 1
#define INCLUDE_JavaNioChannelsNetworkChannel 1
#include "java/nio/channels/NetworkChannel.h"

@class JavaNetServerSocket;
@class JavaNetSocketAddress;
@class JavaNioChannelsSocketChannel;
@class JavaNioChannelsSpiSelectorProvider;
@protocol JavaNetSocketOption;
@protocol JavaUtilSet;

/*!
 @brief A <code>ServerSocketChannel</code> is a partial abstraction of a selectable,
  stream-oriented listening socket.Binding and manipulation of socket options
  can only be done through the associated <code>ServerSocket</code> object, returned
  by calling <code>socket()</code>.
 ServerSocketChannels can not be constructed for
  an already existing server-socket, nor can a <code>java.net.SocketImpl</code> be assigned. 
 <p>
  A server-socket channel is open but not bound when created by the <code>open()</code>
  method. Calling <code>accept</code> before bound will cause a 
 <code>NotYetBoundException</code>. It can be bound by calling the bind method of a
  related <code>ServerSocket</code> instance.
 */
@interface JavaNioChannelsServerSocketChannel : JavaNioChannelsSpiAbstractSelectableChannel < JavaNioChannelsNetworkChannel >

#pragma mark Public

/*!
 @brief Accepts a connection to this server-socket channel.
 <p>
  This method returns <code>null</code> when this channel is non-blocking and no
  connection is available, otherwise it blocks until a new connection is
  available or an I/O error occurs. The socket channel returned by this
  method will always be in blocking mode. 
 <p>
  This method just executes the same security checks as the <code>accept()</code>
  method of the <code>ServerSocket</code> class.
 @return the accepted <code>SocketChannel</code> instance, or <code>null</code> if
          the channel is non-blocking and no connection is available.
 @throw AsynchronousCloseException
 if this channel is closed by another thread while this method
              is in operation.
 @throw ClosedByInterruptException
 if another thread interrupts the calling thread while this
              operation is in progress. The interrupt state of the calling
              thread is set and the channel is closed.
 @throw ClosedChannelException
 if this channel is closed.
 @throw IOException
 if another I/O error occurs.
 @throw NotYetBoundException
 if the socket has not yet been bound.
 */
- (JavaNioChannelsSocketChannel *)accept;

/*!
 @brief <p>This is equivalent to <code>bind(local, 0)</code>.
 */
- (JavaNioChannelsServerSocketChannel *)bindWithJavaNetSocketAddress:(JavaNetSocketAddress *)local;

/*!
 @brief Binds this server channel to the given local socket address.If the <code>localAddr</code> is set
  to <code>null</code> the socket will be bound to an available local address on any free port of
  the system.
 @param localAddr the local machine address and port to bind on.
 @param backlog the maximum number of unaccepted connections. Passing 0 or              a negative value yields the default backlog of 50.
 @return this <code>ServerSocketChannel</code>.
 @throw UnsupportedAddressTypeException
 if the <code>SocketAddress</code> is not supported.
 @throw ClosedChannelException
 if the channel is closed.
 @throw AlreadyBoundException
 if the channel is already bound.
 @throw IOException
 if another I/O error occurs.
 @since 1.7
 */
- (JavaNioChannelsServerSocketChannel *)bindWithJavaNetSocketAddress:(JavaNetSocketAddress *)localAddr
                                                             withInt:(jint)backlog;

/*!
 */
- (JavaNetSocketAddress *)getLocalAddress;

/*!
 */
- (id)getOptionWithJavaNetSocketOption:(id<JavaNetSocketOption>)option;

/*!
 @brief Creates an open and unbound server-socket channel.
 <p>
  This channel is created by calling <code>openServerSocketChannel</code> method
  of the default <code>SelectorProvider</code> instance.
 @return the new channel which is open but unbound.
 @throw IOException
 if an I/O error occurs.
 */
+ (JavaNioChannelsServerSocketChannel *)open;

/*!
 */
- (JavaNioChannelsServerSocketChannel *)setOptionWithJavaNetSocketOption:(id<JavaNetSocketOption>)option
                                                                  withId:(id)value;

/*!
 @brief Return the server-socket assigned this channel, which does not declare
  any public methods that are not declared in <code>ServerSocket</code>.
 @return the server-socket assigned to this channel.
 */
- (JavaNetServerSocket *)socket;

/*!
 */
- (id<JavaUtilSet>)supportedOptions;

/*!
 @brief Gets the valid operations of this channel.Server-socket channels support
  accepting operation, so this method returns <code>SelectionKey.OP_ACCEPT</code>
 .
 - seealso: java.nio.channels.SelectableChannel
 @return the operations supported by this channel.
 */
- (jint)validOps;

#pragma mark Protected

/*!
 @brief Constructs a new <code>ServerSocketChannel</code>.
 @param selectorProvider an instance of SelectorProvider.
 */
- (instancetype)initWithJavaNioChannelsSpiSelectorProvider:(JavaNioChannelsSpiSelectorProvider *)selectorProvider;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioChannelsServerSocketChannel)

FOUNDATION_EXPORT void JavaNioChannelsServerSocketChannel_initWithJavaNioChannelsSpiSelectorProvider_(JavaNioChannelsServerSocketChannel *self, JavaNioChannelsSpiSelectorProvider *selectorProvider);

FOUNDATION_EXPORT JavaNioChannelsServerSocketChannel *JavaNioChannelsServerSocketChannel_open();

J2OBJC_TYPE_LITERAL_HEADER(JavaNioChannelsServerSocketChannel)

#endif

#pragma pop_macro("INCLUDE_ALL_JavaNioChannelsServerSocketChannel")
