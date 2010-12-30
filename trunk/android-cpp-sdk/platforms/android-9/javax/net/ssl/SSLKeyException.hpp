/*================================================================================
  code generated by: java2cpp
  class: javax.net.ssl.SSLKeyException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_NET_SSL_SSLKEYEXCEPTION_HPP_DECL
#define J2CPP_JAVAX_NET_SSL_SSLKEYEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/String.hpp>


namespace j2cpp {

namespace javax { namespace net { namespace ssl {

	class SSLKeyException;
	class SSLKeyException
		: public cpp_object<SSLKeyException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		SSLKeyException(jobject jobj)
		: cpp_object<SSLKeyException>(jobj)
		{
		}

	}; //class SSLKeyException

} //namespace ssl
} //namespace net
} //namespace javax


} //namespace j2cpp

#endif //J2CPP_JAVAX_NET_SSL_SSLKEYEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_NET_SSL_SSLKEYEXCEPTION_HPP_IMPL
#define J2CPP_JAVAX_NET_SSL_SSLKEYEXCEPTION_HPP_IMPL

namespace j2cpp {


template <>
local_ref< javax::net::ssl::SSLKeyException > create< javax::net::ssl::SSLKeyException>(local_ref< java::lang::String > const &a0)
{
	return local_ref< javax::net::ssl::SSLKeyException >(
		environment::get().get_jenv()->NewObject(
			get_class<javax::net::ssl::SSLKeyException::J2CPP_CLASS_NAME>(),
			get_method_id<javax::net::ssl::SSLKeyException::J2CPP_CLASS_NAME, javax::net::ssl::SSLKeyException::J2CPP_METHOD_NAME(0), javax::net::ssl::SSLKeyException::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(javax::net::ssl::SSLKeyException,"javax/net/ssl/SSLKeyException")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLKeyException,0,"<init>","(Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_JAVAX_NET_SSL_SSLKEYEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION