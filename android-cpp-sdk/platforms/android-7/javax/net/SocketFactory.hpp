/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: javax.net.SocketFactory
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_NET_SOCKETFACTORY_HPP_DECL
#define J2CPP_JAVAX_NET_SOCKETFACTORY_HPP_DECL


namespace j2cpp { namespace java { namespace net { class InetAddress; } } }
namespace j2cpp { namespace java { namespace net { class Socket; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/net/InetAddress.hpp>
#include <java/net/Socket.hpp>


namespace j2cpp {

namespace javax { namespace net {

	class SocketFactory;
	class SocketFactory
		: public object<SocketFactory>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_METHOD(6)

		explicit SocketFactory(jobject jobj)
		: object<SocketFactory>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		static local_ref< javax::net::SocketFactory > getDefault();
		local_ref< java::net::Socket > createSocket();
		local_ref< java::net::Socket > createSocket(local_ref< java::lang::String >  const&, jint);
		local_ref< java::net::Socket > createSocket(local_ref< java::lang::String >  const&, jint, local_ref< java::net::InetAddress >  const&, jint);
		local_ref< java::net::Socket > createSocket(local_ref< java::net::InetAddress >  const&, jint);
		local_ref< java::net::Socket > createSocket(local_ref< java::net::InetAddress >  const&, jint, local_ref< java::net::InetAddress >  const&, jint);
	}; //class SocketFactory

} //namespace net
} //namespace javax

} //namespace j2cpp

#endif //J2CPP_JAVAX_NET_SOCKETFACTORY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_NET_SOCKETFACTORY_HPP_IMPL
#define J2CPP_JAVAX_NET_SOCKETFACTORY_HPP_IMPL

namespace j2cpp {



javax::net::SocketFactory::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


local_ref< javax::net::SocketFactory > javax::net::SocketFactory::getDefault()
{
	return call_static_method<
		javax::net::SocketFactory::J2CPP_CLASS_NAME,
		javax::net::SocketFactory::J2CPP_METHOD_NAME(1),
		javax::net::SocketFactory::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< javax::net::SocketFactory >
	>();
}

local_ref< java::net::Socket > javax::net::SocketFactory::createSocket()
{
	return call_method<
		javax::net::SocketFactory::J2CPP_CLASS_NAME,
		javax::net::SocketFactory::J2CPP_METHOD_NAME(2),
		javax::net::SocketFactory::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::net::Socket >
	>(get_jobject());
}

local_ref< java::net::Socket > javax::net::SocketFactory::createSocket(local_ref< java::lang::String > const &a0, jint a1)
{
	return call_method<
		javax::net::SocketFactory::J2CPP_CLASS_NAME,
		javax::net::SocketFactory::J2CPP_METHOD_NAME(3),
		javax::net::SocketFactory::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::net::Socket >
	>(get_jobject(), a0, a1);
}

local_ref< java::net::Socket > javax::net::SocketFactory::createSocket(local_ref< java::lang::String > const &a0, jint a1, local_ref< java::net::InetAddress > const &a2, jint a3)
{
	return call_method<
		javax::net::SocketFactory::J2CPP_CLASS_NAME,
		javax::net::SocketFactory::J2CPP_METHOD_NAME(4),
		javax::net::SocketFactory::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::net::Socket >
	>(get_jobject(), a0, a1, a2, a3);
}

local_ref< java::net::Socket > javax::net::SocketFactory::createSocket(local_ref< java::net::InetAddress > const &a0, jint a1)
{
	return call_method<
		javax::net::SocketFactory::J2CPP_CLASS_NAME,
		javax::net::SocketFactory::J2CPP_METHOD_NAME(5),
		javax::net::SocketFactory::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::net::Socket >
	>(get_jobject(), a0, a1);
}

local_ref< java::net::Socket > javax::net::SocketFactory::createSocket(local_ref< java::net::InetAddress > const &a0, jint a1, local_ref< java::net::InetAddress > const &a2, jint a3)
{
	return call_method<
		javax::net::SocketFactory::J2CPP_CLASS_NAME,
		javax::net::SocketFactory::J2CPP_METHOD_NAME(6),
		javax::net::SocketFactory::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::net::Socket >
	>(get_jobject(), a0, a1, a2, a3);
}


J2CPP_DEFINE_CLASS(javax::net::SocketFactory,"javax/net/SocketFactory")
J2CPP_DEFINE_METHOD(javax::net::SocketFactory,0,"<init>","()V")
J2CPP_DEFINE_METHOD(javax::net::SocketFactory,1,"getDefault","()Ljavax/net/SocketFactory;")
J2CPP_DEFINE_METHOD(javax::net::SocketFactory,2,"createSocket","()Ljava/net/Socket;")
J2CPP_DEFINE_METHOD(javax::net::SocketFactory,3,"createSocket","(Ljava/lang/String;I)Ljava/net/Socket;")
J2CPP_DEFINE_METHOD(javax::net::SocketFactory,4,"createSocket","(Ljava/lang/String;ILjava/net/InetAddress;I)Ljava/net/Socket;")
J2CPP_DEFINE_METHOD(javax::net::SocketFactory,5,"createSocket","(Ljava/net/InetAddress;I)Ljava/net/Socket;")
J2CPP_DEFINE_METHOD(javax::net::SocketFactory,6,"createSocket","(Ljava/net/InetAddress;ILjava/net/InetAddress;I)Ljava/net/Socket;")

} //namespace j2cpp

#endif //J2CPP_JAVAX_NET_SOCKETFACTORY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
