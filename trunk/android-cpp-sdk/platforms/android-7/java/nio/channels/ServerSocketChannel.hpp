/*================================================================================
  code generated by: java2cpp
  class: java.nio.channels.ServerSocketChannel
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_CHANNELS_SERVERSOCKETCHANNEL_HPP_DECL
#define J2CPP_JAVA_NIO_CHANNELS_SERVERSOCKETCHANNEL_HPP_DECL


namespace j2cpp { namespace java { namespace net { class ServerSocket; } } }
namespace j2cpp { namespace java { namespace nio { namespace channels { namespace spi { class AbstractSelectableChannel; } } } } }
namespace j2cpp { namespace java { namespace nio { namespace channels { class SocketChannel; } } } }


#include <java/net/ServerSocket.hpp>
#include <java/nio/channels/SocketChannel.hpp>
#include <java/nio/channels/spi/AbstractSelectableChannel.hpp>


namespace j2cpp {

namespace java { namespace nio { namespace channels {

	class ServerSocketChannel;
	class ServerSocketChannel
		: public cpp_object<ServerSocketChannel>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)

		explicit ServerSocketChannel(jobject jobj)
		: cpp_object<ServerSocketChannel>(jobj)
		{
		}

		operator local_ref<java::nio::channels::spi::AbstractSelectableChannel>() const;


		static local_ref< java::nio::channels::ServerSocketChannel > open();
		cpp_int validOps();
		local_ref< java::net::ServerSocket > socket();
		local_ref< java::nio::channels::SocketChannel > accept();
	}; //class ServerSocketChannel

} //namespace channels
} //namespace nio
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_CHANNELS_SERVERSOCKETCHANNEL_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_CHANNELS_SERVERSOCKETCHANNEL_HPP_IMPL
#define J2CPP_JAVA_NIO_CHANNELS_SERVERSOCKETCHANNEL_HPP_IMPL

namespace j2cpp {



java::nio::channels::ServerSocketChannel::operator local_ref<java::nio::channels::spi::AbstractSelectableChannel>() const
{
	return local_ref<java::nio::channels::spi::AbstractSelectableChannel>(get_jtype());
}


local_ref< java::nio::channels::ServerSocketChannel > java::nio::channels::ServerSocketChannel::open()
{
	return local_ref< java::nio::channels::ServerSocketChannel >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), true>()
		)
	);
}

cpp_int java::nio::channels::ServerSocketChannel::validOps()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

local_ref< java::net::ServerSocket > java::nio::channels::ServerSocketChannel::socket()
{
	return local_ref< java::net::ServerSocket >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

local_ref< java::nio::channels::SocketChannel > java::nio::channels::ServerSocketChannel::accept()
{
	return local_ref< java::nio::channels::SocketChannel >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(java::nio::channels::ServerSocketChannel,"java/nio/channels/ServerSocketChannel")
J2CPP_DEFINE_METHOD(java::nio::channels::ServerSocketChannel,0,"<init>","(Ljava/nio/channels/spi/SelectorProvider;)V")
J2CPP_DEFINE_METHOD(java::nio::channels::ServerSocketChannel,1,"open","()Ljava/nio/channels/ServerSocketChannel;")
J2CPP_DEFINE_METHOD(java::nio::channels::ServerSocketChannel,2,"validOps","()I")
J2CPP_DEFINE_METHOD(java::nio::channels::ServerSocketChannel,3,"socket","()Ljava/net/ServerSocket;")
J2CPP_DEFINE_METHOD(java::nio::channels::ServerSocketChannel,4,"accept","()Ljava/nio/channels/SocketChannel;")

} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_CHANNELS_SERVERSOCKETCHANNEL_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
