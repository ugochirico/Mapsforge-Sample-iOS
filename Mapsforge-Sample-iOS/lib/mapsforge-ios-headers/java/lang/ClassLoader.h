//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/lang/ClassLoader.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangClassLoader")
#ifdef RESTRICT_JavaLangClassLoader
#define INCLUDE_ALL_JavaLangClassLoader 0
#else
#define INCLUDE_ALL_JavaLangClassLoader 1
#endif
#undef RESTRICT_JavaLangClassLoader
#ifdef INCLUDE_JavaLangSystemClassLoader
#define INCLUDE_JavaLangClassLoader 1
#endif

#if !defined (JavaLangClassLoader_) && (INCLUDE_ALL_JavaLangClassLoader || defined(INCLUDE_JavaLangClassLoader))
#define JavaLangClassLoader_

@class IOSByteArray;
@class IOSClass;
@class IOSObjectArray;
@class JavaIoInputStream;
@class JavaLangPackage;
@class JavaNetURL;
@class JavaNioByteBuffer;
@class JavaSecurityProtectionDomain;
@protocol JavaUtilEnumeration;
@protocol JavaUtilMap;

/*!
 @brief A class loader is an object that is responsible for loading classes.The
  class <tt>ClassLoader</tt> is an abstract class.
 Given the <a href="#name">
 binary name</a> of a class, a class loader should attempt to
  locate or generate data that constitutes a definition for the class.  A
  typical strategy is to transform the name into a file name and then read a
  "class file" of that name from a file system. 
 <p> Every <code><tt>Class</tt></code> object contains a <code>reference</code>
  to the <tt>ClassLoader</tt> that defined
  it. 
 <p> <tt>Class</tt> objects for array classes are not created by class
  loaders, but are created automatically as required by the Java runtime.
  The class loader for an array class, as returned by <code>Class.getClassLoader()</code>
  is the same as the class loader for its element
  type; if the element type is a primitive type, then the array class has no
  class loader. 
 <p> Applications implement subclasses of <tt>ClassLoader</tt> in order to
  extend the manner in which the Java virtual machine dynamically loads
  classes. 
 <p> Class loaders may typically be used by security managers to indicate
  security domains. 
 <p> The <tt>ClassLoader</tt> class uses a delegation model to search for
  classes and resources.  Each instance of <tt>ClassLoader</tt> has an
  associated parent class loader.  When requested to find a class or
  resource, a <tt>ClassLoader</tt> instance will delegate the search for the
  class or resource to its parent class loader before attempting to find the
  class or resource itself.  The virtual machine's built-in class loader,
  called the "bootstrap class loader", does not itself have a parent but may
  serve as the parent of a <tt>ClassLoader</tt> instance. 
 <p> Class loaders that support concurrent loading of classes are known as 
 <em>parallel capable</em> class loaders and are required to register
  themselves at their class initialization time by invoking the 
 <code><tt>ClassLoader.registerAsParallelCapable</tt></code>
  method. Note that the <tt>ClassLoader</tt> class is registered as parallel
  capable by default. However, its subclasses still need to register themselves
  if they are parallel capable. <br>
  In environments in which the delegation model is not strictly
  hierarchical, class loaders need to be parallel capable, otherwise class
  loading can lead to deadlocks because the loader lock is held for the
  duration of the class loading process (see <code><tt>loadClass</tt></code>
  methods). 
 <p> Normally, the Java virtual machine loads classes from the local file
  system in a platform-dependent manner.  For example, on UNIX systems, the
  virtual machine loads classes from the directory defined by the 
 <tt>CLASSPATH</tt> environment variable. 
 <p> However, some classes may not originate from a file; they may originate
  from other sources, such as the network, or they could be constructed by an
  application.  The method <code><tt>defineClass</tt></code>
  converts an array of bytes into an instance of class 
 <tt>Class</tt>. Instances of this newly defined class can be created using 
 <code><tt>Class.newInstance</tt></code>.
  
 <p> The methods and constructors of objects created by a class loader may
  reference other classes.  To determine the class(es) referred to, the Java
  virtual machine invokes the <code><tt>loadClass</tt></code> method of
  the class loader that originally created the class. 
 <p> For example, an application could create a network class loader to
  download class files from a server.  Sample code might look like: 
 <blockquote>@code

    ClassLoader loader&nbsp;= new NetworkClassLoader(host,&nbsp;port);
    Object main&nbsp;= loader.loadClass("Main", true).newInstance();
              &nbsp;.&nbsp;.&nbsp;.
   
@endcode</blockquote>
  
 <p> The network class loader subclass must define the methods <code><tt>findClass</tt></code>
  and <tt>loadClassData</tt> to load a class
  from the network.  Once it has downloaded the bytes that make up the class,
  it should use the method <code><tt>defineClass</tt></code> to
  create a class instance.  A sample implementation is: 
 <blockquote>@code

      class NetworkClassLoader extends ClassLoader {
          String host;
          int port;
          public Class findClass(String name) {
              byte[] b = loadClassData(name);
              return defineClass(name, b, 0, b.length);
          }
          private byte[] loadClassData(String name) {
              // load the class data from the connection             
             &nbsp;.&nbsp;.&nbsp;.
          }        }    
  
@endcode</blockquote>
  
 <h4> <a name="name">Binary names</a> </h4>
  
 <p> Any class name provided as a <code>String</code> parameter to methods in 
 <tt>ClassLoader</tt> must be a binary name as defined by 
 <cite>The Java&trade; Language Specification</cite>.
  
 <p> Examples of valid class names include: 
 <blockquote>@code

    "java.lang.String"
    "javax.swing.JSpinner$DefaultEditor"
    "java.security.KeyStore$Builder$FileBuilder$1"
    "java.net.URLClassLoader$3$1" 
  
@endcode</blockquote>
 - seealso: #resolveClass(Class)
 @since 1.0
 */
@interface JavaLangClassLoader : NSObject {
 @public
  /*!
   @brief To avoid unloading individual classes, <code>java.lang.reflect.Proxy</code>
  only generates one class for each set of interfaces.This maps sets of
  interfaces to the proxy class that implements all of them.
   It is declared
  here so that these generated classes can be unloaded with their class
  loader.
   */
  id<JavaUtilMap> proxyCache_;
}

#pragma mark Public

/*!
 @brief Sets the default assertion status for this class loader to 
 <tt>false</tt> and discards any package defaults or class assertion
  status settings associated with the class loader.This method is
  provided so that class loaders can be made to ignore any command line or
  persistent assertion status settings and "start with a clean slate."
 </p>
 @since 1.4
 */
- (void)clearAssertionStatus;

/*!
 @brief Returns the parent class loader for delegation.Some implementations may
  use <tt>null</tt> to represent the bootstrap class loader.
 This method
  will return <tt>null</tt> in such implementations if this class loader's
  parent is the bootstrap class loader. 
 <p> If a security manager is present, and the invoker's class loader is
  not <tt>null</tt> and is not an ancestor of this class loader, then this
  method invokes the security manager's <code><tt>checkPermission</tt></code>
  method with a <code><tt>RuntimePermission("getClassLoader")</tt></code>
  permission to verify
  access to the parent class loader is permitted.  If not, a 
 <tt>SecurityException</tt> will be thrown.  </p>
 @return The parent <tt>ClassLoader</tt>
 @throw SecurityException
 If a security manager exists and its <tt>checkPermission</tt>
           method doesn't allow access to this class loader's parent class
           loader.
 @since 1.2
 */
- (JavaLangClassLoader *)getParent;

/*!
 @brief Finds the resource with the given name.A resource is some data
  (images, audio, text, etc) that can be accessed by class code in a way
  that is independent of the location of the code.
 <p> The name of a resource is a '<tt>/</tt>'-separated path name that
  identifies the resource. 
 <p> This method will first search the parent class loader for the
  resource; if the parent is <tt>null</tt> the path of the class loader
  built-in to the virtual machine is searched.  That failing, this method
  will invoke <code>findResource(String)</code> to find the resource.  </p>
 @param name The resource name
 @return A <tt>URL</tt> object for reading the resource, or
           <tt>null</tt> if the resource could not be found or the invoker
           doesn't have adequate  privileges to get the resource.
 @since 1.1
 */
- (JavaNetURL *)getResourceWithNSString:(NSString *)name;

/*!
 @brief Returns an input stream for reading the specified resource.
 <p> The search order is described in the documentation for <code>getResource(String)</code>
 .  </p>
 @param name The resource name
 @return An input stream for reading the resource, or <tt>null</tt>
           if the resource could not be found
 @since 1.1
 */
- (JavaIoInputStream *)getResourceAsStreamWithNSString:(NSString *)name;

/*!
 @brief Finds all the resources with the given name.A resource is some data
  (images, audio, text, etc) that can be accessed by class code in a way
  that is independent of the location of the code.
 <p>The name of a resource is a <tt>/</tt>-separated path name that
  identifies the resource. 
 <p> The search order is described in the documentation for <code>getResource(String)</code>
 .  </p>
 @param name The resource name
 @return An enumeration of <code><tt>URL</tt></code> objects for
           the resource.  If no resources could  be found, the enumeration
           will be empty.  Resources that the class loader doesn't have
           access to will not be in the enumeration.
 @throw IOException
 If I/O errors occur
 - seealso: #findResources(String)
 @since 1.2
 */
- (id<JavaUtilEnumeration>)getResourcesWithNSString:(NSString *)name;

/*!
 @brief Returns the system class loader for delegation.This is the default
  delegation parent for new <tt>ClassLoader</tt> instances, and is
  typically the class loader used to start the application.
 <p> This method is first invoked early in the runtime's startup
  sequence, at which point it creates the system class loader and sets it
  as the context class loader of the invoking <tt>Thread</tt>.
  
 <p> The default system class loader is an implementation-dependent
  instance of this class. 
 <p> If the system property "<tt>java.system.class.loader</tt>" is defined
  when this method is first invoked then the value of that property is
  taken to be the name of a class that will be returned as the system
  class loader.  The class is loaded using the default system class loader
  and must define a public constructor that takes a single parameter of
  type <tt>ClassLoader</tt> which is used as the delegation parent.  An
  instance is then created using this constructor with the default system
  class loader as the parameter.  The resulting class loader is defined
  to be the system class loader. 
 <p> If a security manager is present, and the invoker's class loader is
  not <tt>null</tt> and the invoker's class loader is not the same as or
  an ancestor of the system class loader, then this method invokes the
  security manager's <code><tt>checkPermission</tt></code>
  method with a <code><tt>RuntimePermission("getClassLoader")</tt></code>
  permission to verify
  access to the system class loader.  If not, a 
 <tt>SecurityException</tt> will be thrown.  </p>
 @return The system <tt>ClassLoader</tt> for delegation, or
           <tt>null</tt> if none
 @throw SecurityException
 If a security manager exists and its <tt>checkPermission</tt>
           method doesn't allow access to the system class loader.
 @throw IllegalStateException
 If invoked recursively during the construction of the class
           loader specified by the "<tt>java.system.class.loader</tt>"
           property.
 @throw Error
 If the system property "<tt>java.system.class.loader</tt>"
           is defined but the named class could not be loaded, the
           provider class does not define the required constructor, or an
           exception is thrown by that constructor when it is invoked. The
           underlying cause of the error can be retrieved via the          
 <code>Throwable.getCause()</code> method.
 */
+ (JavaLangClassLoader *)getSystemClassLoader;

/*!
 @brief Find a resource of the specified name from the search path used to load
  classes.This method locates the resource through the system class
  loader (see <code>getSystemClassLoader()</code>).
 </p>
 @param name The resource name
 @return A <code><tt>URL</tt></code> object for reading the
           resource, or <tt>null</tt> if the resource could not be found
 @since 1.1
 */
+ (JavaNetURL *)getSystemResourceWithNSString:(NSString *)name;

/*!
 @brief Open for reading, a resource of the specified name from the search path
  used to load classes.This method locates the resource through the
  system class loader (see <code>getSystemClassLoader()</code>).
 </p>
 @param name The resource name
 @return An input stream for reading the resource, or <tt>null</tt>
           if the resource could not be found
 @since 1.1
 */
+ (JavaIoInputStream *)getSystemResourceAsStreamWithNSString:(NSString *)name;

/*!
 @brief Finds all resources of the specified name from the search path used to
  load classes.The resources thus found are returned as an 
 <code><tt>Enumeration</tt></code> of <code><tt>URL</tt></code>
  objects.
 <p> The search order is described in the documentation for <code>getSystemResource(String)</code>
 .  </p>
 @param name The resource name
 @return An enumeration of resource <code><tt>URL</tt></code>
           objects
 @throw IOException
 If I/O errors occur
 @since 1.2
 */
+ (id<JavaUtilEnumeration>)getSystemResourcesWithNSString:(NSString *)name;

/*!
 @brief Loads the class with the specified <a href="#name">binary name</a>.
 This method searches for classes in the same manner as the <code>boolean)</code>
  method.  It is invoked by the Java virtual
  machine to resolve class references.  Invoking this method is equivalent
  to invoking <code>false)</tt></code>
 .  </p>
 @param name The 
  <a href="#name"> binary name </a>  of the class
 @return The resulting <tt>Class</tt> object
 @throw ClassNotFoundException
 If the class was not found
 */
- (IOSClass *)loadClassWithNSString:(NSString *)name;

/*!
 @brief Sets the desired assertion status for the named top-level class in this
  class loader and any nested classes contained therein.This setting
  takes precedence over the class loader's default assertion status, and
  over any applicable per-package default.
 This method has no effect if
  the named class has already been initialized.  (Once a class is
  initialized, its assertion status cannot change.) 
 <p> If the named class is not a top-level class, this invocation will
  have no effect on the actual assertion status of any class. </p>
 @param className_ The fully qualified class name of the top-level class whose
           assertion status is to be set.
 @param enabled <tt>
  true </tt>  if the named class is to have assertions          enabled when (and if) it is initialized, 
  <tt> false </tt>  if the          class is to have assertions disabled.
 @since 1.4
 */
- (void)setClassAssertionStatusWithNSString:(NSString *)className_
                                withBoolean:(jboolean)enabled;

/*!
 @brief Sets the default assertion status for this class loader.This setting
  determines whether classes loaded by this class loader and initialized
  in the future will have assertions enabled or disabled by default.
 This setting may be overridden on a per-package or per-class basis by
  invoking <code>boolean)</code> or <code>boolean)</code>
 .  </p>
 @param enabled <tt>
  true </tt>  if classes loaded by this class loader will          henceforth have assertions enabled by default, 
  <tt> false </tt>          if they will have assertions disabled by default.
 @since 1.4
 */
- (void)setDefaultAssertionStatusWithBoolean:(jboolean)enabled;

/*!
 @brief Sets the package default assertion status for the named package.The
  package default assertion status determines the assertion status for
  classes initialized in the future that belong to the named package or
  any of its "subpackages".
 <p> A subpackage of a package named p is any package whose name begins
  with "<tt>p.</tt>".  For example, <tt>javax.swing.text</tt> is a
  subpackage of <tt>javax.swing</tt>, and both <tt>java.util</tt> and 
 <tt>java.lang.reflect</tt> are subpackages of <tt>java</tt>.
  
 <p> In the event that multiple package defaults apply to a given class,
  the package default pertaining to the most specific package takes
  precedence over the others.  For example, if <tt>javax.lang</tt> and 
 <tt>javax.lang.reflect</tt> both have package defaults associated with
  them, the latter package default applies to classes in 
 <tt>javax.lang.reflect</tt>.
  
 <p> Package defaults take precedence over the class loader's default
  assertion status, and may be overridden on a per-class basis by invoking 
 <code>boolean)</code>.  </p>
 @param packageName The name of the package whose package default assertion status
           is to be set. A 
  <tt> null </tt>  value indicates the unnamed          package that is "current"
           (see section 7.4.2 of
            <cite> The Java &trade;  Language Specification </cite> .)
 @param enabled <tt>
  true </tt>  if classes loaded by this classloader and          belonging to the named package or any of its subpackages will
           have assertions enabled by default, 
  <tt> false </tt>  if they will          have assertions disabled by default.
 @since 1.4
 */
- (void)setPackageAssertionStatusWithNSString:(NSString *)packageName
                                  withBoolean:(jboolean)enabled;

#pragma mark Protected

/*!
 @brief Creates a new class loader using the <tt>ClassLoader</tt> returned by
  the method <code><tt>getSystemClassLoader()</tt></code>
  as the parent class loader.
 <p> If there is a security manager, its <code><tt>checkCreateClassLoader</tt></code>
  method is invoked.  This may result in
  a security exception.  </p>
 @throw SecurityException
 If a security manager exists and its
           <tt>checkCreateClassLoader</tt> method doesn't allow creation
           of a new class loader.
 */
- (instancetype)init;

/*!
 @brief Creates a new class loader using the specified parent class loader for
  delegation.
 <p> If there is a security manager, its <code><tt>checkCreateClassLoader</tt></code>
  method is invoked.  This may result in
  a security exception.  </p>
 @param parent The parent class loader
 @throw SecurityException
 If a security manager exists and its
           <tt>checkCreateClassLoader</tt> method doesn't allow creation
           of a new class loader.
 @since 1.2
 */
- (instancetype)initWithJavaLangClassLoader:(JavaLangClassLoader *)parent;

/*!
 @brief Converts an array of bytes into an instance of class <tt>Class</tt>.
 Before the <tt>Class</tt> can be used it must be resolved.  This method
  is deprecated in favor of the version that takes a <a href="#name">
 binary name</a> as its first argument, and is more secure.
 @param b The bytes that make up the class data.  The bytes in positions
            <tt> off
  </tt>  through  <tt> off+len-1 </tt>  should have the format          of a valid class file as defined by
            <cite> The Java
  &trade;  Virtual Machine Specification </cite> .
 @param off The start offset in 
  <tt> b </tt>  of the class data
 @param len The length of the class data
 @return The <tt>Class</tt> object that was created from the specified
           class data
 @throw ClassFormatError
 If the data did not contain a valid class
 @throw IndexOutOfBoundsException
 If either <tt>off</tt> or <tt>len</tt> is negative, or if
           <tt>off+len</tt> is greater than <tt>b.length</tt>.
 @throw SecurityException
 If an attempt is made to add this class to a package that
           contains classes that were signed by a different set of
           certificates than this class, or if an attempt is made
           to define a class in a package with a fully-qualified name
           that starts with "<code>java.</code>".
 - seealso: #loadClass(String, boolean)
 - seealso: #resolveClass(Class)
 */
- (IOSClass *)defineClassWithByteArray:(IOSByteArray *)b
                               withInt:(jint)off
                               withInt:(jint)len;

/*!
 @brief Converts an array of bytes into an instance of class <tt>Class</tt>.
 Before the <tt>Class</tt> can be used it must be resolved. 
 <p> This method assigns a default <code><tt>ProtectionDomain</tt></code>
  to the newly defined class.  The 
 <tt>ProtectionDomain</tt> is effectively granted the same set of
  permissions returned when <code>CodeSource(null, null))</tt></code>
  is invoked.  The default domain is created on the first invocation of 
 <code><tt>defineClass</tt></code>,
  and re-used on subsequent invocations. 
 <p> To assign a specific <tt>ProtectionDomain</tt> to the class, use the 
 <code><tt>defineClass</tt></code>
  method that takes a 
 <tt>ProtectionDomain</tt> as one of its arguments.  </p>
 @param name The expected 
  <a href="#name"> binary name </a>  of the class, or           <tt>
  null </tt>  if not known
 @param b The bytes that make up the class data.  The bytes in positions
            <tt> off
  </tt>  through  <tt> off+len-1 </tt>  should have the format          of a valid class file as defined by
            <cite> The Java
  &trade;  Virtual Machine Specification </cite> .
 @param off The start offset in 
  <tt> b </tt>  of the class data
 @param len The length of the class data
 @return The <tt>Class</tt> object that was created from the specified
           class data.
 @throw ClassFormatError
 If the data did not contain a valid class
 @throw IndexOutOfBoundsException
 If either <tt>off</tt> or <tt>len</tt> is negative, or if
           <tt>off+len</tt> is greater than <tt>b.length</tt>.
 @throw SecurityException
 If an attempt is made to add this class to a package that
           contains classes that were signed by a different set of
           certificates than this class (which is unsigned), or if          
 <tt>name</tt> begins with "<tt>java.</tt>".
 - seealso: #loadClass(String, boolean)
 - seealso: #resolveClass(Class)
 - seealso: java.security.CodeSource
 - seealso: java.security.SecureClassLoader
 @since 1.1
 */
- (IOSClass *)defineClassWithNSString:(NSString *)name
                        withByteArray:(IOSByteArray *)b
                              withInt:(jint)off
                              withInt:(jint)len;

/*!
 @brief Converts an array of bytes into an instance of class <tt>Class</tt>,
  with an optional <tt>ProtectionDomain</tt>.If the domain is 
 <tt>null</tt>, then a default domain will be assigned to the class as
  specified in the documentation for <code>byte[],
 int, int)</code>
 .
 Before the class can be used it must be resolved. 
 <p> The first class defined in a package determines the exact set of
  certificates that all subsequent classes defined in that package must
  contain.  The set of certificates for a class is obtained from the 
 <code><tt>CodeSource</tt></code> within the 
 <tt>ProtectionDomain</tt> of the class.  Any classes added to that
  package must contain the same set of certificates or a 
 <tt>SecurityException</tt> will be thrown.  Note that if 
 <tt>name</tt> is <tt>null</tt>, this check is not performed.
  You should always pass in the <a href="#name">binary name</a> of the
  class you are defining as well as the bytes.  This ensures that the
  class you are defining is indeed the class you think it is. 
 <p> The specified <tt>name</tt> cannot begin with "<tt>java.</tt>", since
  all classes in the "<tt>java.*</tt> packages can only be defined by the
  bootstrap class loader.  If <tt>name</tt> is not <tt>null</tt>, it
  must be equal to the <a href="#name">binary name</a> of the class
  specified by the byte array "<tt>b</tt>", otherwise a <code>NoClassDefFoundError</code>
  will be thrown.  </p>
 @param name The expected 
  <a href="#name"> binary name </a>  of the class, or           <tt>
  null </tt>  if not known
 @param b The bytes that make up the class data. The bytes in positions
            <tt> off
  </tt>  through  <tt> off+len-1 </tt>  should have the format          of a valid class file as defined by
            <cite> The Java
  &trade;  Virtual Machine Specification </cite> .
 @param off The start offset in 
  <tt> b </tt>  of the class data
 @param len The length of the class data
 @param protectionDomain The ProtectionDomain of the class
 @return The <tt>Class</tt> object created from the data,
           and optional <tt>ProtectionDomain</tt>.
 @throw ClassFormatError
 If the data did not contain a valid class
 @throw NoClassDefFoundError
 If <tt>name</tt> is not equal to the <a href="#name">binary
           name</a> of the class specified by <tt>b</tt>
 @throw IndexOutOfBoundsException
 If either <tt>off</tt> or <tt>len</tt> is negative, or if
           <tt>off+len</tt> is greater than <tt>b.length</tt>.
 @throw SecurityException
 If an attempt is made to add this class to a package that
           contains classes that were signed by a different set of
           certificates than this class, or if <tt>name</tt> begins with
           "<tt>java.</tt>".
 */
- (IOSClass *)defineClassWithNSString:(NSString *)name
                        withByteArray:(IOSByteArray *)b
                              withInt:(jint)off
                              withInt:(jint)len
     withJavaSecurityProtectionDomain:(JavaSecurityProtectionDomain *)protectionDomain;

/*!
 @brief Converts a <code><tt>ByteBuffer</tt></code>
  into an instance of class <tt>Class</tt>,
  with an optional <tt>ProtectionDomain</tt>.If the domain is 
 <tt>null</tt>, then a default domain will be assigned to the class as
  specified in the documentation for <code>byte[],
 int, int)</code>
 .
 Before the class can be used it must be resolved. 
 <p>The rules about the first class defined in a package determining the
  set of certificates for the package, and the restrictions on class names
  are identical to those specified in the documentation for <code>byte[], int, int, ProtectionDomain)</code>
 .
  
 <p> An invocation of this method of the form 
 <i>cl</i><tt>.defineClass(</tt><i>name</i><tt>,</tt>
  <i>bBuffer</i><tt>,</tt> <i>pd</i><tt>)</tt> yields exactly the same
  result as the statements 
 <blockquote><tt>
  ...<br>
  byte[] temp = new byte[</tt><i>bBuffer</i><tt>.<code>remaining</code>
 ()];<br>
      </tt><i>bBuffer</i><tt>.<code>get</code>
 (temp);<br>
      return <code></tt><i>cl</i><tt>.defineClass</code>
 (</tt><i>name</i><tt>, temp, 0,
  temp.length, </tt><i>pd</i><tt>);<br>
  </tt></blockquote>
 @param name The expected 
  <a href="#name"> binary name </a> . of the class, or           <tt>
  null </tt>  if not known
 @param b The bytes that make up the class data. The bytes from positions
            <tt> b.position()
  </tt>  through  <tt> b.position() + b.limit() -1           </tt>
   should have the format of a valid class file as defined by           <cite> The Java
  &trade;  Virtual Machine Specification </cite> .
 @param protectionDomain The ProtectionDomain of the class, or 
  <tt> null </tt> .
 @return The <tt>Class</tt> object created from the data,
           and optional <tt>ProtectionDomain</tt>.
 @throw ClassFormatError
 If the data did not contain a valid class.
 @throw NoClassDefFoundError
 If <tt>name</tt> is not equal to the <a href="#name">binary
           name</a> of the class specified by <tt>b</tt>
 @throw SecurityException
 If an attempt is made to add this class to a package that
           contains classes that were signed by a different set of
           certificates than this class, or if <tt>name</tt> begins with
           "<tt>java.</tt>".
 - seealso: #defineClass(String, byte[], int, int, ProtectionDomain)
 @since 1.5
 */
- (IOSClass *)defineClassWithNSString:(NSString *)name
                withJavaNioByteBuffer:(JavaNioByteBuffer *)b
     withJavaSecurityProtectionDomain:(JavaSecurityProtectionDomain *)protectionDomain;

/*!
 @brief Defines a package by name in this <tt>ClassLoader</tt>.This allows
  class loaders to define the packages for their classes.
 Packages must
  be created before the class is defined, and package names must be
  unique within a class loader and cannot be redefined or changed once
  created.  </p>
 @param name The package name
 @param specTitle The specification title
 @param specVersion The specification version
 @param specVendor The specification vendor
 @param implTitle The implementation title
 @param implVersion The implementation version
 @param implVendor The implementation vendor
 @param sealBase If not 
  <tt> null </tt> , then this package is sealed with          respect to the given code source 
 <code><tt>URL</tt></code>
    object.  Otherwise, the package is not sealed.
 @return The newly defined <tt>Package</tt> object
 @throw IllegalArgumentException
 If package name duplicates an existing package either in this
           class loader or one of its ancestors
 @since 1.2
 */
- (JavaLangPackage *)definePackageWithNSString:(NSString *)name
                                  withNSString:(NSString *)specTitle
                                  withNSString:(NSString *)specVersion
                                  withNSString:(NSString *)specVendor
                                  withNSString:(NSString *)implTitle
                                  withNSString:(NSString *)implVersion
                                  withNSString:(NSString *)implVendor
                                withJavaNetURL:(JavaNetURL *)sealBase;

/*!
 @brief Finds the class with the specified <a href="#name">binary name</a>.
 This method should be overridden by class loader implementations that
  follow the delegation model for loading classes, and will be invoked by the 
 <code><tt>loadClass</tt></code> method after checking the
  parent class loader for the requested class.  The default implementation
  throws a <tt>ClassNotFoundException</tt>.  </p>
 @param name The 
  <a href="#name"> binary name </a>  of the class
 @return The resulting <tt>Class</tt> object
 @throw ClassNotFoundException
 If the class could not be found
 @since 1.2
 */
- (IOSClass *)findClassWithNSString:(NSString *)name;

/*!
 @brief Returns the absolute path name of a native library.The VM invokes this
  method to locate the native libraries that belong to classes loaded with
  this class loader.
 If this method returns <tt>null</tt>, the VM
  searches the library along the path specified as the
  "<tt>java.library.path</tt>" property.  </p>
 @param libname The library name
 @return The absolute path of the native library
 - seealso: System#loadLibrary(String)
 - seealso: System#mapLibraryName(String)
 @since 1.2
 */
- (NSString *)findLibraryWithNSString:(NSString *)libname;

/*!
 @brief Returns the class with the given <a href="#name">binary name</a> if this
  loader has been recorded by the Java virtual machine as an initiating
  loader of a class with that <a href="#name">binary name</a>.Otherwise
  <tt>null</tt> is returned.
 </p>
 @param name The 
  <a href="#name"> binary name </a>  of the class
 @return The <tt>Class</tt> object, or <tt>null</tt> if the class has
           not been loaded
 @since 1.1
 */
- (IOSClass *)findLoadedClassWithNSString:(NSString *)name;

/*!
 @brief Finds the resource with the given name.Class loader implementations
  should override this method to specify where to find resources.
 </p>
 @param name The resource name
 @return A <tt>URL</tt> object for reading the resource, or
           <tt>null</tt> if the resource could not be found
 @since 1.2
 */
- (JavaNetURL *)findResourceWithNSString:(NSString *)name;

/*!
 @brief Returns an enumeration of <code><tt>URL</tt></code> objects
  representing all the resources with the given name.Class loader
  implementations should override this method to specify where to load
  resources from.
 </p>
 @param name The resource name
 @return An enumeration of <code><tt>URL</tt></code> objects for
           the resources
 @throw IOException
 If I/O errors occur
 @since 1.2
 */
- (id<JavaUtilEnumeration>)findResourcesWithNSString:(NSString *)name;

/*!
 @brief Finds a class with the specified <a href="#name">binary name</a>,
  loading it if necessary.
 <p> This method loads the class through the system class loader (see 
 <code>getSystemClassLoader()</code>).  The <tt>Class</tt> object returned
  might have more than one <tt>ClassLoader</tt> associated with it.
  Subclasses of <tt>ClassLoader</tt> need not usually invoke this method,
  because most class loaders need to override just <code>findClass(String)</code>
 .  </p>
 @param name The 
  <a href="#name"> binary name </a>  of the class
 @return The <tt>Class</tt> object for the specified <tt>name</tt>
 @throw ClassNotFoundException
 If the class could not be found
 - seealso: #ClassLoader(ClassLoader)
 - seealso: #getParent()
 */
- (IOSClass *)findSystemClassWithNSString:(NSString *)name;

/*!
 @brief Returns a <tt>Package</tt> that has been defined by this class loader
  or any of its ancestors.
 </p>
 @param name The package name
 @return The <tt>Package</tt> corresponding to the given name, or
           <tt>null</tt> if not found
 @since 1.2
 */
- (JavaLangPackage *)getPackageWithNSString:(NSString *)name;

/*!
 @brief Returns all of the <tt>Packages</tt> defined by this class loader and
  its ancestors.
 </p>
 @return The array of <tt>Package</tt> objects defined by this
           <tt>ClassLoader</tt>
 @since 1.2
 */
- (IOSObjectArray *)getPackages;

/*!
 @brief Loads the class with the specified <a href="#name">binary name</a>.The
  default implementation of this method searches for classes in the
  following order: 
 <p><ol>
    
 <li><p> Invoke <code>findLoadedClass(String)</code> to check if the class
    has already been loaded.
 </p></li>
    
 <li><p> Invoke the <code><tt>loadClass</tt></code> method
    on the parent class loader.  If the parent is <tt>null</tt> the class
    loader built-in to the virtual machine is used, instead.  </p></li>
    
 <li><p> Invoke the <code>findClass(String)</code> method to find the
    class.  </p></li>
  
 </ol>
  
 <p> If the class was found using the above steps, and the 
 <tt>resolve</tt> flag is true, this method will then invoke the <code>resolveClass(Class)</code>
  method on the resulting <tt>Class</tt> object. 
 <p> Subclasses of <tt>ClassLoader</tt> are encouraged to override <code>findClass(String)</code>
 , rather than this method.  </p>
 @param name The 
  <a href="#name"> binary name </a>  of the class
 @param resolve If 
  <tt> true </tt>  then resolve the class
 @return The resulting <tt>Class</tt> object
 @throw ClassNotFoundException
 If the class could not be found
 */
- (IOSClass *)loadClassWithNSString:(NSString *)name
                        withBoolean:(jboolean)resolve;

/*!
 @brief Registers the caller as parallel capable.
 </p>
  The registration succeeds if and only if all of the following
  conditions are met: <br>
  1. no instance of the caller has been created</p>
  2. all of the super classes (except class Object) of the caller are
  registered as parallel capable</p>
  Note that once a class loader is registered as parallel capable, there
  is no way to change it back. </p>
 @return true if the caller is successfully registered as
           parallel capable and false if otherwise.
 @since 1.7
 */
+ (jboolean)registerAsParallelCapable;

/*!
 @brief Links the specified class.This (misleadingly named) method may be
  used by a class loader to link a class.
 If the class <tt>c</tt> has
  already been linked, then this method simply returns. Otherwise, the
  class is linked as described in the "Execution" chapter of 
 <cite>The Java&trade; Language Specification</cite>.
  </p>
 @param c The class to link
 @throw NullPointerException
 If <tt>c</tt> is <tt>null</tt>.
 - seealso: #defineClass(String, byte[], int, int)
 */
- (void)resolveClassWithIOSClass:(IOSClass *)c;

/*!
 @brief Sets the signers of a class.This should be invoked after defining a
  class.
 </p>
 @param c The 
  <tt> Class </tt>  object
 @param signers The signers for the class
 @since 1.1
 */
- (void)setSignersWithIOSClass:(IOSClass *)c
             withNSObjectArray:(IOSObjectArray *)signers;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangClassLoader)

J2OBJC_FIELD_SETTER(JavaLangClassLoader, proxyCache_, id<JavaUtilMap>)

FOUNDATION_EXPORT void JavaLangClassLoader_initWithJavaLangClassLoader_(JavaLangClassLoader *self, JavaLangClassLoader *parent);

FOUNDATION_EXPORT void JavaLangClassLoader_init(JavaLangClassLoader *self);

FOUNDATION_EXPORT jboolean JavaLangClassLoader_registerAsParallelCapable();

FOUNDATION_EXPORT JavaNetURL *JavaLangClassLoader_getSystemResourceWithNSString_(NSString *name);

FOUNDATION_EXPORT id<JavaUtilEnumeration> JavaLangClassLoader_getSystemResourcesWithNSString_(NSString *name);

FOUNDATION_EXPORT JavaIoInputStream *JavaLangClassLoader_getSystemResourceAsStreamWithNSString_(NSString *name);

FOUNDATION_EXPORT JavaLangClassLoader *JavaLangClassLoader_getSystemClassLoader();

J2OBJC_TYPE_LITERAL_HEADER(JavaLangClassLoader)

#endif

#if !defined (JavaLangSystemClassLoader_) && (INCLUDE_ALL_JavaLangClassLoader || defined(INCLUDE_JavaLangSystemClassLoader))
#define JavaLangSystemClassLoader_

@class IOSClass;
@class JavaIoInputStream;
@class JavaLangClassLoader;
@class JavaNetURL;
@protocol JavaUtilEnumeration;

/*!
 @brief ClassLoader for iOS and OS X.
 */
@interface JavaLangSystemClassLoader : JavaLangClassLoader

#pragma mark Public

- (JavaNetURL *)getResourceWithNSString:(NSString *)resName;

- (JavaIoInputStream *)getResourceAsStreamWithNSString:(NSString *)name;

- (id<JavaUtilEnumeration>)getResourcesWithNSString:(NSString *)resName;

#pragma mark Protected

- (IOSClass *)findClassWithNSString:(NSString *)name;

- (JavaNetURL *)findResourceWithNSString:(NSString *)name;

- (id<JavaUtilEnumeration>)findResourcesWithNSString:(NSString *)name;

- (IOSClass *)loadClassWithNSString:(NSString *)name
                        withBoolean:(jboolean)resolve;

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_STATIC_INIT(JavaLangSystemClassLoader)

inline JavaLangClassLoader *JavaLangSystemClassLoader_get_loader();
inline JavaLangClassLoader *JavaLangSystemClassLoader_set_loader(JavaLangClassLoader *value);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaLangClassLoader *JavaLangSystemClassLoader_loader;
J2OBJC_STATIC_FIELD_OBJ(JavaLangSystemClassLoader, loader, JavaLangClassLoader *)

FOUNDATION_EXPORT void JavaLangSystemClassLoader_init(JavaLangSystemClassLoader *self);

FOUNDATION_EXPORT JavaLangSystemClassLoader *new_JavaLangSystemClassLoader_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangSystemClassLoader *create_JavaLangSystemClassLoader_init();

J2OBJC_TYPE_LITERAL_HEADER(JavaLangSystemClassLoader)

#endif

#pragma pop_macro("INCLUDE_ALL_JavaLangClassLoader")
