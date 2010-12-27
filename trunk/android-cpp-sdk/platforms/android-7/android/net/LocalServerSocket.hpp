/*================================================================================
  code generated by: java2cpp
  class: android.net.LocalServerSocket
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_NET_LOCALSERVERSOCKET_HPP_DECL
#define J2CPP_ANDROID_NET_LOCALSERVERSOCKET_HPP_DECL


namespace j2cpp { namespace java { namespace io { class FileDescriptor; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace android { namespace net { class LocalSocketAddress; } } }
namespace j2cpp { namespace android { namespace net { class LocalSocket; } } }


#include <android/net/LocalSocket.hpp>
#include <android/net/LocalSocketAddress.hpp>
#include <java/io/FileDescriptor.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace net {

	class LocalServerSocket;
	class LocalServerSocket
		: public cpp_object<LocalServerSocket>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)

		explicit LocalServerSocket(jobject jobj)
		: cpp_object<LocalServerSocket>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		LocalServerSocket(local_ref< java::lang::String > const&);
		LocalServerSocket(local_ref< java::io::FileDescriptor > const&);
		local_ref< android::net::LocalSocketAddress > getLocalSocketAddress();
		local_ref< android::net::LocalSocket > accept();
		local_ref< java::io::FileDescriptor > getFileDescriptor();
		void close();
	}; //class LocalServerSocket

} //namespace net
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_NET_LOCALSERVERSOCKET_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_NET_LOCALSERVERSOCKET_HPP_IMPL
#define J2CPP_ANDROID_NET_LOCALSERVERSOCKET_HPP_IMPL

namespace j2cpp {



android::net::LocalServerSocket::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}


android::net::LocalServerSocket::LocalServerSocket(local_ref< java::lang::String > const &a0)
: cpp_object<android::net::LocalServerSocket>(
	environment::get().get_jenv()->NewObject(
		get_class<android::net::LocalServerSocket::J2CPP_CLASS_NAME>(),
		get_method_id<android::net::LocalServerSocket::J2CPP_CLASS_NAME, android::net::LocalServerSocket::J2CPP_METHOD_NAME(0), android::net::LocalServerSocket::J2CPP_METHOD_SIGNATURE(0), false>(),
		a0.get_jtype()
	)
)
{
}



android::net::LocalServerSocket::LocalServerSocket(local_ref< java::io::FileDescriptor > const &a0)
: cpp_object<android::net::LocalServerSocket>(
	environment::get().get_jenv()->NewObject(
		get_class<android::net::LocalServerSocket::J2CPP_CLASS_NAME>(),
		get_method_id<android::net::LocalServerSocket::J2CPP_CLASS_NAME, android::net::LocalServerSocket::J2CPP_METHOD_NAME(1), android::net::LocalServerSocket::J2CPP_METHOD_SIGNATURE(1), false>(),
		a0.get_jtype()
	)
)
{
}


local_ref< android::net::LocalSocketAddress > android::net::LocalServerSocket::getLocalSocketAddress()
{
	return local_ref< android::net::LocalSocketAddress >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

local_ref< android::net::LocalSocket > android::net::LocalServerSocket::accept()
{
	return local_ref< android::net::LocalSocket >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

local_ref< java::io::FileDescriptor > android::net::LocalServerSocket::getFileDescriptor()
{
	return local_ref< java::io::FileDescriptor >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

void android::net::LocalServerSocket::close()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(android::net::LocalServerSocket,"android/net/LocalServerSocket")
J2CPP_DEFINE_METHOD(android::net::LocalServerSocket,0,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::net::LocalServerSocket,1,"<init>","(Ljava/io/FileDescriptor;)V")
J2CPP_DEFINE_METHOD(android::net::LocalServerSocket,2,"getLocalSocketAddress","()Landroid/net/LocalSocketAddress;")
J2CPP_DEFINE_METHOD(android::net::LocalServerSocket,3,"accept","()Landroid/net/LocalSocket;")
J2CPP_DEFINE_METHOD(android::net::LocalServerSocket,4,"getFileDescriptor","()Ljava/io/FileDescriptor;")
J2CPP_DEFINE_METHOD(android::net::LocalServerSocket,5,"close","()V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_NET_LOCALSERVERSOCKET_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
