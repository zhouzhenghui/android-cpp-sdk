/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.net.HttpRetryException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_HTTPRETRYEXCEPTION_HPP_DECL
#define J2CPP_JAVA_NET_HTTPRETRYEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Exception; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace io { class IOException; } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }


#include <java/io/IOException.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>


namespace j2cpp {

namespace java { namespace net {

	class HttpRetryException;
	class HttpRetryException
		: public object<HttpRetryException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)

		explicit HttpRetryException(jobject jobj)
		: object<HttpRetryException>(jobj)
		{
		}

		operator local_ref<java::lang::Exception>() const;
		operator local_ref<java::lang::Throwable>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::io::IOException>() const;
		operator local_ref<java::io::Serializable>() const;


		HttpRetryException(local_ref< java::lang::String > const&, jint);
		HttpRetryException(local_ref< java::lang::String > const&, jint, local_ref< java::lang::String > const&);
		local_ref< java::lang::String > getLocation();
		local_ref< java::lang::String > getReason();
		jint responseCode();
	}; //class HttpRetryException

} //namespace net
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_NET_HTTPRETRYEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_HTTPRETRYEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_NET_HTTPRETRYEXCEPTION_HPP_IMPL

namespace j2cpp {



java::net::HttpRetryException::operator local_ref<java::lang::Exception>() const
{
	return local_ref<java::lang::Exception>(get_jobject());
}

java::net::HttpRetryException::operator local_ref<java::lang::Throwable>() const
{
	return local_ref<java::lang::Throwable>(get_jobject());
}

java::net::HttpRetryException::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::net::HttpRetryException::operator local_ref<java::io::IOException>() const
{
	return local_ref<java::io::IOException>(get_jobject());
}

java::net::HttpRetryException::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}


java::net::HttpRetryException::HttpRetryException(local_ref< java::lang::String > const &a0, jint a1)
: object<java::net::HttpRetryException>(
	call_new_object<
		java::net::HttpRetryException::J2CPP_CLASS_NAME,
		java::net::HttpRetryException::J2CPP_METHOD_NAME(0),
		java::net::HttpRetryException::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1)
)
{
}



java::net::HttpRetryException::HttpRetryException(local_ref< java::lang::String > const &a0, jint a1, local_ref< java::lang::String > const &a2)
: object<java::net::HttpRetryException>(
	call_new_object<
		java::net::HttpRetryException::J2CPP_CLASS_NAME,
		java::net::HttpRetryException::J2CPP_METHOD_NAME(1),
		java::net::HttpRetryException::J2CPP_METHOD_SIGNATURE(1)
	>(a0, a1, a2)
)
{
}


local_ref< java::lang::String > java::net::HttpRetryException::getLocation()
{
	return call_method<
		java::net::HttpRetryException::J2CPP_CLASS_NAME,
		java::net::HttpRetryException::J2CPP_METHOD_NAME(2),
		java::net::HttpRetryException::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::String > java::net::HttpRetryException::getReason()
{
	return call_method<
		java::net::HttpRetryException::J2CPP_CLASS_NAME,
		java::net::HttpRetryException::J2CPP_METHOD_NAME(3),
		java::net::HttpRetryException::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::lang::String >
	>(get_jobject());
}

jint java::net::HttpRetryException::responseCode()
{
	return call_method<
		java::net::HttpRetryException::J2CPP_CLASS_NAME,
		java::net::HttpRetryException::J2CPP_METHOD_NAME(4),
		java::net::HttpRetryException::J2CPP_METHOD_SIGNATURE(4), 
		jint
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(java::net::HttpRetryException,"java/net/HttpRetryException")
J2CPP_DEFINE_METHOD(java::net::HttpRetryException,0,"<init>","(Ljava/lang/String;I)V")
J2CPP_DEFINE_METHOD(java::net::HttpRetryException,1,"<init>","(Ljava/lang/String;ILjava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::net::HttpRetryException,2,"getLocation","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::net::HttpRetryException,3,"getReason","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::net::HttpRetryException,4,"responseCode","()I")

} //namespace j2cpp

#endif //J2CPP_JAVA_NET_HTTPRETRYEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
