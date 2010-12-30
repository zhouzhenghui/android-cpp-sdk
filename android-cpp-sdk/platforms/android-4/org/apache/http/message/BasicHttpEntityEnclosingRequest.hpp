/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.message.BasicHttpEntityEnclosingRequest
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICHTTPENTITYENCLOSINGREQUEST_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICHTTPENTITYENCLOSINGREQUEST_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { class ProtocolVersion; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpEntityEnclosingRequest; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class RequestLine; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpEntity; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace message { class BasicHttpRequest; } } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/String.hpp>
#include <org/apache/http/HttpEntity.hpp>
#include <org/apache/http/HttpEntityEnclosingRequest.hpp>
#include <org/apache/http/ProtocolVersion.hpp>
#include <org/apache/http/RequestLine.hpp>
#include <org/apache/http/message/BasicHttpRequest.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace message {

	class BasicHttpEntityEnclosingRequest;
	class BasicHttpEntityEnclosingRequest
		: public object<BasicHttpEntityEnclosingRequest>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)

		explicit BasicHttpEntityEnclosingRequest(jobject jobj)
		: object<BasicHttpEntityEnclosingRequest>(jobj)
		{
		}

		operator local_ref<org::apache::http::message::BasicHttpRequest>() const;
		operator local_ref<org::apache::http::HttpEntityEnclosingRequest>() const;


		BasicHttpEntityEnclosingRequest(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		BasicHttpEntityEnclosingRequest(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, local_ref< org::apache::http::ProtocolVersion > const&);
		BasicHttpEntityEnclosingRequest(local_ref< org::apache::http::RequestLine > const&);
		local_ref< org::apache::http::HttpEntity > getEntity();
		void setEntity(local_ref< org::apache::http::HttpEntity >  const&);
		jboolean expectContinue();
	}; //class BasicHttpEntityEnclosingRequest

} //namespace message
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICHTTPENTITYENCLOSINGREQUEST_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICHTTPENTITYENCLOSINGREQUEST_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICHTTPENTITYENCLOSINGREQUEST_HPP_IMPL

namespace j2cpp {



org::apache::http::message::BasicHttpEntityEnclosingRequest::operator local_ref<org::apache::http::message::BasicHttpRequest>() const
{
	return local_ref<org::apache::http::message::BasicHttpRequest>(get_jobject());
}

org::apache::http::message::BasicHttpEntityEnclosingRequest::operator local_ref<org::apache::http::HttpEntityEnclosingRequest>() const
{
	return local_ref<org::apache::http::HttpEntityEnclosingRequest>(get_jobject());
}


org::apache::http::message::BasicHttpEntityEnclosingRequest::BasicHttpEntityEnclosingRequest(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
: object<org::apache::http::message::BasicHttpEntityEnclosingRequest>(
	call_new_object<
		org::apache::http::message::BasicHttpEntityEnclosingRequest::J2CPP_CLASS_NAME,
		org::apache::http::message::BasicHttpEntityEnclosingRequest::J2CPP_METHOD_NAME(0),
		org::apache::http::message::BasicHttpEntityEnclosingRequest::J2CPP_METHOD_SIGNATURE(0)>
	(a0, a1)
)
{
}



org::apache::http::message::BasicHttpEntityEnclosingRequest::BasicHttpEntityEnclosingRequest(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< org::apache::http::ProtocolVersion > const &a2)
: object<org::apache::http::message::BasicHttpEntityEnclosingRequest>(
	call_new_object<
		org::apache::http::message::BasicHttpEntityEnclosingRequest::J2CPP_CLASS_NAME,
		org::apache::http::message::BasicHttpEntityEnclosingRequest::J2CPP_METHOD_NAME(1),
		org::apache::http::message::BasicHttpEntityEnclosingRequest::J2CPP_METHOD_SIGNATURE(1)>
	(a0, a1, a2)
)
{
}



org::apache::http::message::BasicHttpEntityEnclosingRequest::BasicHttpEntityEnclosingRequest(local_ref< org::apache::http::RequestLine > const &a0)
: object<org::apache::http::message::BasicHttpEntityEnclosingRequest>(
	call_new_object<
		org::apache::http::message::BasicHttpEntityEnclosingRequest::J2CPP_CLASS_NAME,
		org::apache::http::message::BasicHttpEntityEnclosingRequest::J2CPP_METHOD_NAME(2),
		org::apache::http::message::BasicHttpEntityEnclosingRequest::J2CPP_METHOD_SIGNATURE(2)>
	(a0)
)
{
}


local_ref< org::apache::http::HttpEntity > org::apache::http::message::BasicHttpEntityEnclosingRequest::getEntity()
{
	return call_method<
		org::apache::http::message::BasicHttpEntityEnclosingRequest::J2CPP_CLASS_NAME,
		org::apache::http::message::BasicHttpEntityEnclosingRequest::J2CPP_METHOD_NAME(3),
		org::apache::http::message::BasicHttpEntityEnclosingRequest::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< org::apache::http::HttpEntity > >
	(get_jobject());
}

void org::apache::http::message::BasicHttpEntityEnclosingRequest::setEntity(local_ref< org::apache::http::HttpEntity > const &a0)
{
	return call_method<
		org::apache::http::message::BasicHttpEntityEnclosingRequest::J2CPP_CLASS_NAME,
		org::apache::http::message::BasicHttpEntityEnclosingRequest::J2CPP_METHOD_NAME(4),
		org::apache::http::message::BasicHttpEntityEnclosingRequest::J2CPP_METHOD_SIGNATURE(4), 
		void >
	(get_jobject(), a0);
}

jboolean org::apache::http::message::BasicHttpEntityEnclosingRequest::expectContinue()
{
	return call_method<
		org::apache::http::message::BasicHttpEntityEnclosingRequest::J2CPP_CLASS_NAME,
		org::apache::http::message::BasicHttpEntityEnclosingRequest::J2CPP_METHOD_NAME(5),
		org::apache::http::message::BasicHttpEntityEnclosingRequest::J2CPP_METHOD_SIGNATURE(5), 
		jboolean >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(org::apache::http::message::BasicHttpEntityEnclosingRequest,"org/apache/http/message/BasicHttpEntityEnclosingRequest")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicHttpEntityEnclosingRequest,0,"<init>","(Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicHttpEntityEnclosingRequest,1,"<init>","(Ljava/lang/String;Ljava/lang/String;Lorg/apache/http/ProtocolVersion;)V")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicHttpEntityEnclosingRequest,2,"<init>","(Lorg/apache/http/RequestLine;)V")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicHttpEntityEnclosingRequest,3,"getEntity","()Lorg/apache/http/HttpEntity;")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicHttpEntityEnclosingRequest,4,"setEntity","(Lorg/apache/http/HttpEntity;)V")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicHttpEntityEnclosingRequest,5,"expectContinue","()Z")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICHTTPENTITYENCLOSINGREQUEST_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
