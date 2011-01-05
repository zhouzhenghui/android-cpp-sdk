/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.HttpResponse
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_HTTPRESPONSE_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_HTTPRESPONSE_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { class ProtocolVersion; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpEntity; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class StatusLine; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpMessage; } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class Locale; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/Locale.hpp>
#include <org/apache/http/HttpEntity.hpp>
#include <org/apache/http/HttpMessage.hpp>
#include <org/apache/http/ProtocolVersion.hpp>
#include <org/apache/http/StatusLine.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http {

	class HttpResponse;
	class HttpResponse
		: public object<HttpResponse>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_METHOD(6)
		J2CPP_DECLARE_METHOD(7)
		J2CPP_DECLARE_METHOD(8)
		J2CPP_DECLARE_METHOD(9)

		explicit HttpResponse(jobject jobj)
		: object<HttpResponse>(jobj)
		{
		}

		operator local_ref<org::apache::http::HttpMessage>() const;
		operator local_ref<java::lang::Object>() const;


		local_ref< org::apache::http::StatusLine > getStatusLine();
		void setStatusLine(local_ref< org::apache::http::StatusLine >  const&);
		void setStatusLine(local_ref< org::apache::http::ProtocolVersion >  const&, jint);
		void setStatusLine(local_ref< org::apache::http::ProtocolVersion >  const&, jint, local_ref< java::lang::String >  const&);
		void setStatusCode(jint);
		void setReasonPhrase(local_ref< java::lang::String >  const&);
		local_ref< org::apache::http::HttpEntity > getEntity();
		void setEntity(local_ref< org::apache::http::HttpEntity >  const&);
		local_ref< java::util::Locale > getLocale();
		void setLocale(local_ref< java::util::Locale >  const&);
	}; //class HttpResponse

} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_HTTPRESPONSE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_HTTPRESPONSE_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_HTTPRESPONSE_HPP_IMPL

namespace j2cpp {



org::apache::http::HttpResponse::operator local_ref<org::apache::http::HttpMessage>() const
{
	return local_ref<org::apache::http::HttpMessage>(get_jobject());
}

org::apache::http::HttpResponse::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

local_ref< org::apache::http::StatusLine > org::apache::http::HttpResponse::getStatusLine()
{
	return call_method<
		org::apache::http::HttpResponse::J2CPP_CLASS_NAME,
		org::apache::http::HttpResponse::J2CPP_METHOD_NAME(0),
		org::apache::http::HttpResponse::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< org::apache::http::StatusLine >
	>(get_jobject());
}

void org::apache::http::HttpResponse::setStatusLine(local_ref< org::apache::http::StatusLine > const &a0)
{
	return call_method<
		org::apache::http::HttpResponse::J2CPP_CLASS_NAME,
		org::apache::http::HttpResponse::J2CPP_METHOD_NAME(1),
		org::apache::http::HttpResponse::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject(), a0);
}

void org::apache::http::HttpResponse::setStatusLine(local_ref< org::apache::http::ProtocolVersion > const &a0, jint a1)
{
	return call_method<
		org::apache::http::HttpResponse::J2CPP_CLASS_NAME,
		org::apache::http::HttpResponse::J2CPP_METHOD_NAME(2),
		org::apache::http::HttpResponse::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject(), a0, a1);
}

void org::apache::http::HttpResponse::setStatusLine(local_ref< org::apache::http::ProtocolVersion > const &a0, jint a1, local_ref< java::lang::String > const &a2)
{
	return call_method<
		org::apache::http::HttpResponse::J2CPP_CLASS_NAME,
		org::apache::http::HttpResponse::J2CPP_METHOD_NAME(3),
		org::apache::http::HttpResponse::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0, a1, a2);
}

void org::apache::http::HttpResponse::setStatusCode(jint a0)
{
	return call_method<
		org::apache::http::HttpResponse::J2CPP_CLASS_NAME,
		org::apache::http::HttpResponse::J2CPP_METHOD_NAME(4),
		org::apache::http::HttpResponse::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0);
}

void org::apache::http::HttpResponse::setReasonPhrase(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::apache::http::HttpResponse::J2CPP_CLASS_NAME,
		org::apache::http::HttpResponse::J2CPP_METHOD_NAME(5),
		org::apache::http::HttpResponse::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject(), a0);
}

local_ref< org::apache::http::HttpEntity > org::apache::http::HttpResponse::getEntity()
{
	return call_method<
		org::apache::http::HttpResponse::J2CPP_CLASS_NAME,
		org::apache::http::HttpResponse::J2CPP_METHOD_NAME(6),
		org::apache::http::HttpResponse::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< org::apache::http::HttpEntity >
	>(get_jobject());
}

void org::apache::http::HttpResponse::setEntity(local_ref< org::apache::http::HttpEntity > const &a0)
{
	return call_method<
		org::apache::http::HttpResponse::J2CPP_CLASS_NAME,
		org::apache::http::HttpResponse::J2CPP_METHOD_NAME(7),
		org::apache::http::HttpResponse::J2CPP_METHOD_SIGNATURE(7), 
		void
	>(get_jobject(), a0);
}

local_ref< java::util::Locale > org::apache::http::HttpResponse::getLocale()
{
	return call_method<
		org::apache::http::HttpResponse::J2CPP_CLASS_NAME,
		org::apache::http::HttpResponse::J2CPP_METHOD_NAME(8),
		org::apache::http::HttpResponse::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< java::util::Locale >
	>(get_jobject());
}

void org::apache::http::HttpResponse::setLocale(local_ref< java::util::Locale > const &a0)
{
	return call_method<
		org::apache::http::HttpResponse::J2CPP_CLASS_NAME,
		org::apache::http::HttpResponse::J2CPP_METHOD_NAME(9),
		org::apache::http::HttpResponse::J2CPP_METHOD_SIGNATURE(9), 
		void
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(org::apache::http::HttpResponse,"org/apache/http/HttpResponse")
J2CPP_DEFINE_METHOD(org::apache::http::HttpResponse,0,"getStatusLine","()Lorg/apache/http/StatusLine;")
J2CPP_DEFINE_METHOD(org::apache::http::HttpResponse,1,"setStatusLine","(Lorg/apache/http/StatusLine;)V")
J2CPP_DEFINE_METHOD(org::apache::http::HttpResponse,2,"setStatusLine","(Lorg/apache/http/ProtocolVersion;I)V")
J2CPP_DEFINE_METHOD(org::apache::http::HttpResponse,3,"setStatusLine","(Lorg/apache/http/ProtocolVersion;ILjava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::apache::http::HttpResponse,4,"setStatusCode","(I)V")
J2CPP_DEFINE_METHOD(org::apache::http::HttpResponse,5,"setReasonPhrase","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::apache::http::HttpResponse,6,"getEntity","()Lorg/apache/http/HttpEntity;")
J2CPP_DEFINE_METHOD(org::apache::http::HttpResponse,7,"setEntity","(Lorg/apache/http/HttpEntity;)V")
J2CPP_DEFINE_METHOD(org::apache::http::HttpResponse,8,"getLocale","()Ljava/util/Locale;")
J2CPP_DEFINE_METHOD(org::apache::http::HttpResponse,9,"setLocale","(Ljava/util/Locale;)V")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_HTTPRESPONSE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
