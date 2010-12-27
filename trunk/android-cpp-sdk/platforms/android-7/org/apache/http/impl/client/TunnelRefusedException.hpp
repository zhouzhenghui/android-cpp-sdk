/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.impl.client.TunnelRefusedException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_TUNNELREFUSEDEXCEPTION_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_TUNNELREFUSEDEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpException; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpResponse; } } } }


#include <java/lang/String.hpp>
#include <org/apache/http/HttpException.hpp>
#include <org/apache/http/HttpResponse.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl { namespace client {

	class TunnelRefusedException;
	class TunnelRefusedException
		: public cpp_object<TunnelRefusedException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit TunnelRefusedException(jobject jobj)
		: cpp_object<TunnelRefusedException>(jobj)
		{
		}

		operator local_ref<org::apache::http::HttpException>() const;


		TunnelRefusedException(local_ref< java::lang::String > const&, local_ref< org::apache::http::HttpResponse > const&);
		local_ref< org::apache::http::HttpResponse > getResponse();
	}; //class TunnelRefusedException

} //namespace client
} //namespace impl
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_TUNNELREFUSEDEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_TUNNELREFUSEDEXCEPTION_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_TUNNELREFUSEDEXCEPTION_HPP_IMPL

namespace j2cpp {



org::apache::http::impl::client::TunnelRefusedException::operator local_ref<org::apache::http::HttpException>() const
{
	return local_ref<org::apache::http::HttpException>(get_jtype());
}


org::apache::http::impl::client::TunnelRefusedException::TunnelRefusedException(local_ref< java::lang::String > const &a0, local_ref< org::apache::http::HttpResponse > const &a1)
: cpp_object<org::apache::http::impl::client::TunnelRefusedException>(
	environment::get().get_jenv()->NewObject(
		get_class<org::apache::http::impl::client::TunnelRefusedException::J2CPP_CLASS_NAME>(),
		get_method_id<org::apache::http::impl::client::TunnelRefusedException::J2CPP_CLASS_NAME, org::apache::http::impl::client::TunnelRefusedException::J2CPP_METHOD_NAME(0), org::apache::http::impl::client::TunnelRefusedException::J2CPP_METHOD_SIGNATURE(0), false>(),
		a0.get_jtype(), a1.get_jtype()
	)
)
{
}


local_ref< org::apache::http::HttpResponse > org::apache::http::impl::client::TunnelRefusedException::getResponse()
{
	return local_ref< org::apache::http::HttpResponse >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(org::apache::http::impl::client::TunnelRefusedException,"org/apache/http/impl/client/TunnelRefusedException")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::TunnelRefusedException,0,"<init>","(Ljava/lang/String;Lorg/apache/http/HttpResponse;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::TunnelRefusedException,1,"getResponse","()Lorg/apache/http/HttpResponse;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_TUNNELREFUSEDEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
