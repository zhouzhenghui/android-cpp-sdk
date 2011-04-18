/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.client.ResponseHandler
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CLIENT_RESPONSEHANDLER_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_CLIENT_RESPONSEHANDLER_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { class HttpResponse; } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <org/apache/http/HttpResponse.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace client {

	class ResponseHandler;
	class ResponseHandler
		: public object<ResponseHandler>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit ResponseHandler(jobject jobj)
		: object<ResponseHandler>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< java::lang::Object > handleResponse(local_ref< org::apache::http::HttpResponse >  const&);
	}; //class ResponseHandler

} //namespace client
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CLIENT_RESPONSEHANDLER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CLIENT_RESPONSEHANDLER_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_CLIENT_RESPONSEHANDLER_HPP_IMPL

namespace j2cpp {



org::apache::http::client::ResponseHandler::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

local_ref< java::lang::Object > org::apache::http::client::ResponseHandler::handleResponse(local_ref< org::apache::http::HttpResponse > const &a0)
{
	return call_method<
		org::apache::http::client::ResponseHandler::J2CPP_CLASS_NAME,
		org::apache::http::client::ResponseHandler::J2CPP_METHOD_NAME(0),
		org::apache::http::client::ResponseHandler::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< java::lang::Object >
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(org::apache::http::client::ResponseHandler,"org/apache/http/client/ResponseHandler")
J2CPP_DEFINE_METHOD(org::apache::http::client::ResponseHandler,0,"handleResponse","(Lorg/apache/http/HttpResponse;)Ljava/lang/Object;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CLIENT_RESPONSEHANDLER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION