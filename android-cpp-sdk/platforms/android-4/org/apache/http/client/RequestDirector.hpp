/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.client.RequestDirector
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CLIENT_REQUESTDIRECTOR_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_CLIENT_REQUESTDIRECTOR_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { namespace protocol { class HttpContext; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpHost; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpResponse; } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpRequest; } } } }


#include <java/lang/Object.hpp>
#include <org/apache/http/HttpHost.hpp>
#include <org/apache/http/HttpRequest.hpp>
#include <org/apache/http/HttpResponse.hpp>
#include <org/apache/http/protocol/HttpContext.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace client {

	class RequestDirector;
	class RequestDirector
		: public object<RequestDirector>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit RequestDirector(jobject jobj)
		: object<RequestDirector>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< org::apache::http::HttpResponse > execute(local_ref< org::apache::http::HttpHost >  const&, local_ref< org::apache::http::HttpRequest >  const&, local_ref< org::apache::http::protocol::HttpContext >  const&);
	}; //class RequestDirector

} //namespace client
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CLIENT_REQUESTDIRECTOR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CLIENT_REQUESTDIRECTOR_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_CLIENT_REQUESTDIRECTOR_HPP_IMPL

namespace j2cpp {



org::apache::http::client::RequestDirector::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

local_ref< org::apache::http::HttpResponse > org::apache::http::client::RequestDirector::execute(local_ref< org::apache::http::HttpHost > const &a0, local_ref< org::apache::http::HttpRequest > const &a1, local_ref< org::apache::http::protocol::HttpContext > const &a2)
{
	return call_method<
		org::apache::http::client::RequestDirector::J2CPP_CLASS_NAME,
		org::apache::http::client::RequestDirector::J2CPP_METHOD_NAME(0),
		org::apache::http::client::RequestDirector::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< org::apache::http::HttpResponse >
	>(get_jobject(), a0, a1, a2);
}


J2CPP_DEFINE_CLASS(org::apache::http::client::RequestDirector,"org/apache/http/client/RequestDirector")
J2CPP_DEFINE_METHOD(org::apache::http::client::RequestDirector,0,"execute","(Lorg/apache/http/HttpHost;Lorg/apache/http/HttpRequest;Lorg/apache/http/protocol/HttpContext;)Lorg/apache/http/HttpResponse;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CLIENT_REQUESTDIRECTOR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
