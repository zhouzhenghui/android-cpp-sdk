/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.net.BindException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_BINDEXCEPTION_HPP_DECL
#define J2CPP_JAVA_NET_BINDEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace io { class IOException; } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace net { class SocketException; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }
namespace j2cpp { namespace java { namespace lang { class Exception; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/io/IOException.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>
#include <java/net/SocketException.hpp>


namespace j2cpp {

namespace java { namespace net {

	class BindException;
	class BindException
		: public object<BindException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit BindException(jobject jobj)
		: object<BindException>(jobj)
		{
		}

		operator local_ref<java::io::IOException>() const;
		operator local_ref<java::io::Serializable>() const;
		operator local_ref<java::net::SocketException>() const;
		operator local_ref<java::lang::Throwable>() const;
		operator local_ref<java::lang::Exception>() const;
		operator local_ref<java::lang::Object>() const;


		BindException();
		BindException(local_ref< java::lang::String > const&);
	}; //class BindException

} //namespace net
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_NET_BINDEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_BINDEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_NET_BINDEXCEPTION_HPP_IMPL

namespace j2cpp {



java::net::BindException::operator local_ref<java::io::IOException>() const
{
	return local_ref<java::io::IOException>(get_jobject());
}

java::net::BindException::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}

java::net::BindException::operator local_ref<java::net::SocketException>() const
{
	return local_ref<java::net::SocketException>(get_jobject());
}

java::net::BindException::operator local_ref<java::lang::Throwable>() const
{
	return local_ref<java::lang::Throwable>(get_jobject());
}

java::net::BindException::operator local_ref<java::lang::Exception>() const
{
	return local_ref<java::lang::Exception>(get_jobject());
}

java::net::BindException::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


java::net::BindException::BindException()
: object<java::net::BindException>(
	call_new_object<
		java::net::BindException::J2CPP_CLASS_NAME,
		java::net::BindException::J2CPP_METHOD_NAME(0),
		java::net::BindException::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



java::net::BindException::BindException(local_ref< java::lang::String > const &a0)
: object<java::net::BindException>(
	call_new_object<
		java::net::BindException::J2CPP_CLASS_NAME,
		java::net::BindException::J2CPP_METHOD_NAME(1),
		java::net::BindException::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}



J2CPP_DEFINE_CLASS(java::net::BindException,"java/net/BindException")
J2CPP_DEFINE_METHOD(java::net::BindException,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::net::BindException,1,"<init>","(Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_NET_BINDEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
