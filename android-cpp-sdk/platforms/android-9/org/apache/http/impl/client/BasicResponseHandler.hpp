/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.impl.client.BasicResponseHandler
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_BASICRESPONSEHANDLER_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_BASICRESPONSEHANDLER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpResponse; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace client { class ResponseHandler; } } } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/apache/http/HttpResponse.hpp>
#include <org/apache/http/client/ResponseHandler.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl { namespace client {

	class BasicResponseHandler;
	class BasicResponseHandler
		: public object<BasicResponseHandler>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit BasicResponseHandler(jobject jobj)
		: object<BasicResponseHandler>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::apache::http::client::ResponseHandler>() const;


		BasicResponseHandler();
		local_ref< java::lang::String > handleResponse(local_ref< org::apache::http::HttpResponse >  const&);
		local_ref< java::lang::Object > handleResponse_1(local_ref< org::apache::http::HttpResponse >  const&);
	}; //class BasicResponseHandler

} //namespace client
} //namespace impl
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_BASICRESPONSEHANDLER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_BASICRESPONSEHANDLER_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_BASICRESPONSEHANDLER_HPP_IMPL

namespace j2cpp {



org::apache::http::impl::client::BasicResponseHandler::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::apache::http::impl::client::BasicResponseHandler::operator local_ref<org::apache::http::client::ResponseHandler>() const
{
	return local_ref<org::apache::http::client::ResponseHandler>(get_jobject());
}


org::apache::http::impl::client::BasicResponseHandler::BasicResponseHandler()
: object<org::apache::http::impl::client::BasicResponseHandler>(
	call_new_object<
		org::apache::http::impl::client::BasicResponseHandler::J2CPP_CLASS_NAME,
		org::apache::http::impl::client::BasicResponseHandler::J2CPP_METHOD_NAME(0),
		org::apache::http::impl::client::BasicResponseHandler::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


local_ref< java::lang::String > org::apache::http::impl::client::BasicResponseHandler::handleResponse(local_ref< org::apache::http::HttpResponse > const &a0)
{
	return call_method<
		org::apache::http::impl::client::BasicResponseHandler::J2CPP_CLASS_NAME,
		org::apache::http::impl::client::BasicResponseHandler::J2CPP_METHOD_NAME(1),
		org::apache::http::impl::client::BasicResponseHandler::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::String >
	>(get_jobject(), a0);
}

local_ref< java::lang::Object > org::apache::http::impl::client::BasicResponseHandler::handleResponse_1(local_ref< org::apache::http::HttpResponse > const &a0)
{
	return call_method<
		org::apache::http::impl::client::BasicResponseHandler::J2CPP_CLASS_NAME,
		org::apache::http::impl::client::BasicResponseHandler::J2CPP_METHOD_NAME(2),
		org::apache::http::impl::client::BasicResponseHandler::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::Object >
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(org::apache::http::impl::client::BasicResponseHandler,"org/apache/http/impl/client/BasicResponseHandler")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::BasicResponseHandler,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::BasicResponseHandler,1,"handleResponse","(Lorg/apache/http/HttpResponse;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::BasicResponseHandler,2,"handleResponse","(Lorg/apache/http/HttpResponse;)Ljava/lang/Object;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_BASICRESPONSEHANDLER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
