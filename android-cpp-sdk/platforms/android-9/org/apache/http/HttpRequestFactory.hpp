/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.HttpRequestFactory
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_HTTPREQUESTFACTORY_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_HTTPREQUESTFACTORY_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpRequest; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class RequestLine; } } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/apache/http/HttpRequest.hpp>
#include <org/apache/http/RequestLine.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http {

	class HttpRequestFactory;
	class HttpRequestFactory
		: public object<HttpRequestFactory>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit HttpRequestFactory(jobject jobj)
		: object<HttpRequestFactory>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< org::apache::http::HttpRequest > newHttpRequest(local_ref< org::apache::http::RequestLine >  const&);
		local_ref< org::apache::http::HttpRequest > newHttpRequest(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
	}; //class HttpRequestFactory

} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_HTTPREQUESTFACTORY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_HTTPREQUESTFACTORY_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_HTTPREQUESTFACTORY_HPP_IMPL

namespace j2cpp {



org::apache::http::HttpRequestFactory::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

local_ref< org::apache::http::HttpRequest > org::apache::http::HttpRequestFactory::newHttpRequest(local_ref< org::apache::http::RequestLine > const &a0)
{
	return call_method<
		org::apache::http::HttpRequestFactory::J2CPP_CLASS_NAME,
		org::apache::http::HttpRequestFactory::J2CPP_METHOD_NAME(0),
		org::apache::http::HttpRequestFactory::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< org::apache::http::HttpRequest > >
	(get_jobject(), a0);
}

local_ref< org::apache::http::HttpRequest > org::apache::http::HttpRequestFactory::newHttpRequest(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		org::apache::http::HttpRequestFactory::J2CPP_CLASS_NAME,
		org::apache::http::HttpRequestFactory::J2CPP_METHOD_NAME(1),
		org::apache::http::HttpRequestFactory::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< org::apache::http::HttpRequest > >
	(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(org::apache::http::HttpRequestFactory,"org/apache/http/HttpRequestFactory")
J2CPP_DEFINE_METHOD(org::apache::http::HttpRequestFactory,0,"newHttpRequest","(Lorg/apache/http/RequestLine;)Lorg/apache/http/HttpRequest;")
J2CPP_DEFINE_METHOD(org::apache::http::HttpRequestFactory,1,"newHttpRequest","(Ljava/lang/String;Ljava/lang/String;)Lorg/apache/http/HttpRequest;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_HTTPREQUESTFACTORY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
