/*================================================================================
  code generated by: java2cpp
  class: java.net.PortUnreachableException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_PORTUNREACHABLEEXCEPTION_HPP_DECL
#define J2CPP_JAVA_NET_PORTUNREACHABLEEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace net { class SocketException; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/String.hpp>
#include <java/net/SocketException.hpp>


namespace j2cpp {

namespace java { namespace net {

	class PortUnreachableException;
	class PortUnreachableException
		: public cpp_object<PortUnreachableException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit PortUnreachableException(jobject jobj)
		: cpp_object<PortUnreachableException>(jobj)
		{
		}

		operator local_ref<java::net::SocketException>() const;


		PortUnreachableException();
		PortUnreachableException(local_ref< java::lang::String > const&);
	}; //class PortUnreachableException

} //namespace net
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_NET_PORTUNREACHABLEEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_PORTUNREACHABLEEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_NET_PORTUNREACHABLEEXCEPTION_HPP_IMPL

namespace j2cpp {



java::net::PortUnreachableException::operator local_ref<java::net::SocketException>() const
{
	return local_ref<java::net::SocketException>(get_jtype());
}


java::net::PortUnreachableException::PortUnreachableException()
: cpp_object<java::net::PortUnreachableException>(
	environment::get().get_jenv()->NewObject(
		get_class<java::net::PortUnreachableException::J2CPP_CLASS_NAME>(),
		get_method_id<java::net::PortUnreachableException::J2CPP_CLASS_NAME, java::net::PortUnreachableException::J2CPP_METHOD_NAME(0), java::net::PortUnreachableException::J2CPP_METHOD_SIGNATURE(0), false>()
	)
)
{
}



java::net::PortUnreachableException::PortUnreachableException(local_ref< java::lang::String > const &a0)
: cpp_object<java::net::PortUnreachableException>(
	environment::get().get_jenv()->NewObject(
		get_class<java::net::PortUnreachableException::J2CPP_CLASS_NAME>(),
		get_method_id<java::net::PortUnreachableException::J2CPP_CLASS_NAME, java::net::PortUnreachableException::J2CPP_METHOD_NAME(1), java::net::PortUnreachableException::J2CPP_METHOD_SIGNATURE(1), false>(),
		a0.get_jtype()
	)
)
{
}



J2CPP_DEFINE_CLASS(java::net::PortUnreachableException,"java/net/PortUnreachableException")
J2CPP_DEFINE_METHOD(java::net::PortUnreachableException,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::net::PortUnreachableException,1,"<init>","(Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_NET_PORTUNREACHABLEEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
