/*================================================================================
  code generated by: java2cpp
  class: javax.net.ServerSocketFactory
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_NET_SERVERSOCKETFACTORY_HPP_DECL
#define J2CPP_JAVAX_NET_SERVERSOCKETFACTORY_HPP_DECL


namespace j2cpp { namespace java { namespace net { class ServerSocket; } } }
namespace j2cpp { namespace java { namespace net { class InetAddress; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/net/InetAddress.hpp>
#include <java/net/ServerSocket.hpp>


namespace j2cpp {

namespace javax { namespace net {

	class ServerSocketFactory;
	class ServerSocketFactory
		: public cpp_object<ServerSocketFactory>
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
		: cpp_object<ServerSocketFactory>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		static local_ref< javax::net::ServerSocketFactory > getDefault();
		local_ref< java::net::ServerSocket > createServerSocket();
		local_ref< java::net::ServerSocket > createServerSocket(cpp_int const&);
		local_ref< java::net::ServerSocket > createServerSocket(cpp_int const&, cpp_int const&);
		local_ref< java::net::ServerSocket > createServerSocket(cpp_int const&, cpp_int const&, local_ref< java::net::InetAddress > const&);
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
	return local_ref<java::lang::Object>(get_jtype());
}


local_ref< javax::net::ServerSocketFactory > javax::net::ServerSocketFactory::getDefault()
{
	return local_ref< javax::net::ServerSocketFactory >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), true>()
		)
	);
}

local_ref< java::net::ServerSocket > javax::net::ServerSocketFactory::createServerSocket()
{
	return local_ref< java::net::ServerSocket >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

local_ref< java::net::ServerSocket > javax::net::ServerSocketFactory::createServerSocket(cpp_int const &a0)
{
	return local_ref< java::net::ServerSocket >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::net::ServerSocket > javax::net::ServerSocketFactory::createServerSocket(cpp_int const &a0, cpp_int const &a1)
{
	return local_ref< java::net::ServerSocket >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::net::ServerSocket > javax::net::ServerSocketFactory::createServerSocket(cpp_int const &a0, cpp_int const &a1, local_ref< java::net::InetAddress > const &a2)
{
	return local_ref< java::net::ServerSocket >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
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
