/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: javax.net.ServerSocketFactory
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_NET_SERVERSOCKETFACTORY_HPP_DECL
#define J2CPP_JAVAX_NET_SERVERSOCKETFACTORY_HPP_DECL


namespace j2cpp { namespace java { namespace net { class InetAddress; } } }
namespace j2cpp { namespace java { namespace net { class ServerSocket; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/net/InetAddress.hpp>
#include <java/net/ServerSocket.hpp>


namespace j2cpp {

namespace javax { namespace net {

	class ServerSocketFactory;
	class ServerSocketFactory
		: public object<ServerSocketFactory>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)

		explicit ServerSocketFactory(jobject jobj)
		: object<ServerSocketFactory>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		static local_ref< javax::net::ServerSocketFactory > getDefault();
		local_ref< java::net::ServerSocket > createServerSocket();
		local_ref< java::net::ServerSocket > createServerSocket(jint);
		local_ref< java::net::ServerSocket > createServerSocket(jint, jint);
		local_ref< java::net::ServerSocket > createServerSocket(jint, jint, local_ref< java::net::InetAddress >  const&);
	}; //class ServerSocketFactory

} //namespace net
} //namespace javax

} //namespace j2cpp

#endif //J2CPP_JAVAX_NET_SERVERSOCKETFACTORY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_NET_SERVERSOCKETFACTORY_HPP_IMPL
#define J2CPP_JAVAX_NET_SERVERSOCKETFACTORY_HPP_IMPL

namespace j2cpp {



javax::net::ServerSocketFactory::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


local_ref< javax::net::ServerSocketFactory > javax::net::ServerSocketFactory::getDefault()
{
	return call_static_method<
		javax::net::ServerSocketFactory::J2CPP_CLASS_NAME,
		javax::net::ServerSocketFactory::J2CPP_METHOD_NAME(1),
		javax::net::ServerSocketFactory::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< javax::net::ServerSocketFactory >
	>();
}

local_ref< java::net::ServerSocket > javax::net::ServerSocketFactory::createServerSocket()
{
	return call_method<
		javax::net::ServerSocketFactory::J2CPP_CLASS_NAME,
		javax::net::ServerSocketFactory::J2CPP_METHOD_NAME(2),
		javax::net::ServerSocketFactory::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::net::ServerSocket >
	>(get_jobject());
}

local_ref< java::net::ServerSocket > javax::net::ServerSocketFactory::createServerSocket(jint a0)
{
	return call_method<
		javax::net::ServerSocketFactory::J2CPP_CLASS_NAME,
		javax::net::ServerSocketFactory::J2CPP_METHOD_NAME(3),
		javax::net::ServerSocketFactory::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::net::ServerSocket >
	>(get_jobject(), a0);
}

local_ref< java::net::ServerSocket > javax::net::ServerSocketFactory::createServerSocket(jint a0, jint a1)
{
	return call_method<
		javax::net::ServerSocketFactory::J2CPP_CLASS_NAME,
		javax::net::ServerSocketFactory::J2CPP_METHOD_NAME(4),
		javax::net::ServerSocketFactory::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::net::ServerSocket >
	>(get_jobject(), a0, a1);
}

local_ref< java::net::ServerSocket > javax::net::ServerSocketFactory::createServerSocket(jint a0, jint a1, local_ref< java::net::InetAddress > const &a2)
{
	return call_method<
		javax::net::ServerSocketFactory::J2CPP_CLASS_NAME,
		javax::net::ServerSocketFactory::J2CPP_METHOD_NAME(5),
		javax::net::ServerSocketFactory::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::net::ServerSocket >
	>(get_jobject(), a0, a1, a2);
}


J2CPP_DEFINE_CLASS(javax::net::ServerSocketFactory,"javax/net/ServerSocketFactory")
J2CPP_DEFINE_METHOD(javax::net::ServerSocketFactory,0,"<init>","()V")
J2CPP_DEFINE_METHOD(javax::net::ServerSocketFactory,1,"getDefault","()Ljavax/net/ServerSocketFactory;")
J2CPP_DEFINE_METHOD(javax::net::ServerSocketFactory,2,"createServerSocket","()Ljava/net/ServerSocket;")
J2CPP_DEFINE_METHOD(javax::net::ServerSocketFactory,3,"createServerSocket","(I)Ljava/net/ServerSocket;")
J2CPP_DEFINE_METHOD(javax::net::ServerSocketFactory,4,"createServerSocket","(II)Ljava/net/ServerSocket;")
J2CPP_DEFINE_METHOD(javax::net::ServerSocketFactory,5,"createServerSocket","(IILjava/net/InetAddress;)Ljava/net/ServerSocket;")

} //namespace j2cpp

#endif //J2CPP_JAVAX_NET_SERVERSOCKETFACTORY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
