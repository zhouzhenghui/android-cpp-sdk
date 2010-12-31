/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.impl.io.HttpResponseParser
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_IO_HTTPRESPONSEPARSER_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_IO_HTTPRESPONSEPARSER_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { namespace message { class LineParser; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace impl { namespace io { class AbstractMessageParser; } } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpResponseFactory; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace io { class SessionInputBuffer; } } } } }


#include <org/apache/http/HttpResponseFactory.hpp>
#include <org/apache/http/impl/io/AbstractMessageParser.hpp>
#include <org/apache/http/io/SessionInputBuffer.hpp>
#include <org/apache/http/message/LineParser.hpp>
#include <org/apache/http/params/HttpParams.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl { namespace io {

	class HttpResponseParser;
	class HttpResponseParser
		: public object<HttpResponseParser>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit HttpResponseParser(jobject jobj)
		: object<HttpResponseParser>(jobj)
		{
		}

		operator local_ref<org::apache::http::impl::io::AbstractMessageParser>() const;


		HttpResponseParser(local_ref< org::apache::http::io::SessionInputBuffer > const&, local_ref< org::apache::http::message::LineParser > const&, local_ref< org::apache::http::HttpResponseFactory > const&, local_ref< org::apache::http::params::HttpParams > const&);
	}; //class HttpResponseParser

} //namespace io
} //namespace impl
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_IO_HTTPRESPONSEPARSER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_IO_HTTPRESPONSEPARSER_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_IO_HTTPRESPONSEPARSER_HPP_IMPL

namespace j2cpp {



org::apache::http::impl::io::HttpResponseParser::operator local_ref<org::apache::http::impl::io::AbstractMessageParser>() const
{
	return local_ref<org::apache::http::impl::io::AbstractMessageParser>(get_jobject());
}


org::apache::http::impl::io::HttpResponseParser::HttpResponseParser(local_ref< org::apache::http::io::SessionInputBuffer > const &a0, local_ref< org::apache::http::message::LineParser > const &a1, local_ref< org::apache::http::HttpResponseFactory > const &a2, local_ref< org::apache::http::params::HttpParams > const &a3)
: object<org::apache::http::impl::io::HttpResponseParser>(
	call_new_object<
		org::apache::http::impl::io::HttpResponseParser::J2CPP_CLASS_NAME,
		org::apache::http::impl::io::HttpResponseParser::J2CPP_METHOD_NAME(0),
		org::apache::http::impl::io::HttpResponseParser::J2CPP_METHOD_SIGNATURE(0)>
	(a0, a1, a2, a3)
)
{
}




J2CPP_DEFINE_CLASS(org::apache::http::impl::io::HttpResponseParser,"org/apache/http/impl/io/HttpResponseParser")
J2CPP_DEFINE_METHOD(org::apache::http::impl::io::HttpResponseParser,0,"<init>","(Lorg/apache/http/io/SessionInputBuffer;Lorg/apache/http/message/LineParser;Lorg/apache/http/HttpResponseFactory;Lorg/apache/http/params/HttpParams;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::io::HttpResponseParser,1,"parseHead","(Lorg/apache/http/io/SessionInputBuffer;)Lorg/apache/http/HttpMessage;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_IO_HTTPRESPONSEPARSER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
