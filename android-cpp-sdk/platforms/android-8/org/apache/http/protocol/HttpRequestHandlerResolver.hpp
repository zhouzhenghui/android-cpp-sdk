/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.protocol.HttpRequestHandlerResolver
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_PROTOCOL_HTTPREQUESTHANDLERRESOLVER_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_PROTOCOL_HTTPREQUESTHANDLERRESOLVER_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { namespace protocol { class HttpRequestHandler; } } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/apache/http/protocol/HttpRequestHandler.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace protocol {

	class HttpRequestHandlerResolver;
	class HttpRequestHandlerResolver
		: public object<HttpRequestHandlerResolver>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit HttpRequestHandlerResolver(jobject jobj)
		: object<HttpRequestHandlerResolver>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< org::apache::http::protocol::HttpRequestHandler > lookup(local_ref< java::lang::String >  const&);
	}; //class HttpRequestHandlerResolver

} //namespace protocol
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_PROTOCOL_HTTPREQUESTHANDLERRESOLVER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_PROTOCOL_HTTPREQUESTHANDLERRESOLVER_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_PROTOCOL_HTTPREQUESTHANDLERRESOLVER_HPP_IMPL

namespace j2cpp {



org::apache::http::protocol::HttpRequestHandlerResolver::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

local_ref< org::apache::http::protocol::HttpRequestHandler > org::apache::http::protocol::HttpRequestHandlerResolver::lookup(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::apache::http::protocol::HttpRequestHandlerResolver::J2CPP_CLASS_NAME,
		org::apache::http::protocol::HttpRequestHandlerResolver::J2CPP_METHOD_NAME(0),
		org::apache::http::protocol::HttpRequestHandlerResolver::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< org::apache::http::protocol::HttpRequestHandler > >
	(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(org::apache::http::protocol::HttpRequestHandlerResolver,"org/apache/http/protocol/HttpRequestHandlerResolver")
J2CPP_DEFINE_METHOD(org::apache::http::protocol::HttpRequestHandlerResolver,0,"lookup","(Ljava/lang/String;)Lorg/apache/http/protocol/HttpRequestHandler;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_PROTOCOL_HTTPREQUESTHANDLERRESOLVER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
