/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.HttpResponseInterceptor
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_HTTPRESPONSEINTERCEPTOR_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_HTTPRESPONSEINTERCEPTOR_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace protocol { class HttpContext; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpResponse; } } } }


#include <java/lang/Object.hpp>
#include <org/apache/http/HttpResponse.hpp>
#include <org/apache/http/protocol/HttpContext.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http {

	class HttpResponseInterceptor;
	class HttpResponseInterceptor
		: public cpp_object<HttpResponseInterceptor>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit HttpResponseInterceptor(jobject jobj)
		: cpp_object<HttpResponseInterceptor>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		void process(local_ref< org::apache::http::HttpResponse > const&, local_ref< org::apache::http::protocol::HttpContext > const&);
	}; //class HttpResponseInterceptor

} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_HTTPRESPONSEINTERCEPTOR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_HTTPRESPONSEINTERCEPTOR_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_HTTPRESPONSEINTERCEPTOR_HPP_IMPL

namespace j2cpp {



org::apache::http::HttpResponseInterceptor::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}

void org::apache::http::HttpResponseInterceptor::process(local_ref< org::apache::http::HttpResponse > const &a0, local_ref< org::apache::http::protocol::HttpContext > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(org::apache::http::HttpResponseInterceptor,"org/apache/http/HttpResponseInterceptor")
J2CPP_DEFINE_METHOD(org::apache::http::HttpResponseInterceptor,0,"process","(Lorg/apache/http/HttpResponse;Lorg/apache/http/protocol/HttpContext;)V")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_HTTPRESPONSEINTERCEPTOR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
