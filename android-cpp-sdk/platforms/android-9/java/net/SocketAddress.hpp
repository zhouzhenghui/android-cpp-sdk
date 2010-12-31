/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.net.SocketAddress
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_SOCKETADDRESS_HPP_DECL
#define J2CPP_JAVA_NET_SOCKETADDRESS_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace java { namespace net {

	class SocketAddress;
	class SocketAddress
		: public object<SocketAddress>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit SocketAddress(jobject jobj)
		: object<SocketAddress>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::io::Serializable>() const;


		SocketAddress();
	}; //class SocketAddress

} //namespace net
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_NET_SOCKETADDRESS_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_SOCKETADDRESS_HPP_IMPL
#define J2CPP_JAVA_NET_SOCKETADDRESS_HPP_IMPL

namespace j2cpp {



java::net::SocketAddress::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::net::SocketAddress::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}


java::net::SocketAddress::SocketAddress()
: object<java::net::SocketAddress>(
	call_new_object<
		java::net::SocketAddress::J2CPP_CLASS_NAME,
		java::net::SocketAddress::J2CPP_METHOD_NAME(0),
		java::net::SocketAddress::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}



J2CPP_DEFINE_CLASS(java::net::SocketAddress,"java/net/SocketAddress")
J2CPP_DEFINE_METHOD(java::net::SocketAddress,0,"<init>","()V")

} //namespace j2cpp

#endif //J2CPP_JAVA_NET_SOCKETADDRESS_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
