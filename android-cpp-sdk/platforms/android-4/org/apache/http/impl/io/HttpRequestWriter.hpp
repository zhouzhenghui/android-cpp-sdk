/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.impl.io.HttpRequestWriter
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_IO_HTTPREQUESTWRITER_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_IO_HTTPREQUESTWRITER_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { namespace io { class HttpMessageWriter; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace io { class SessionOutputBuffer; } } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace impl { namespace io { class AbstractMessageWriter; } } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace message { class LineFormatter; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } } }


#include <java/lang/Object.hpp>
#include <org/apache/http/impl/io/AbstractMessageWriter.hpp>
#include <org/apache/http/io/HttpMessageWriter.hpp>
#include <org/apache/http/io/SessionOutputBuffer.hpp>
#include <org/apache/http/message/LineFormatter.hpp>
#include <org/apache/http/params/HttpParams.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl { namespace io {

	class HttpRequestWriter;
	class HttpRequestWriter
		: public object<HttpRequestWriter>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit HttpRequestWriter(jobject jobj)
		: object<HttpRequestWriter>(jobj)
		{
		}

		operator local_ref<org::apache::http::io::HttpMessageWriter>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::apache::http::impl::io::AbstractMessageWriter>() const;


		HttpRequestWriter(local_ref< org::apache::http::io::SessionOutputBuffer > const&, local_ref< org::apache::http::message::LineFormatter > const&, local_ref< org::apache::http::params::HttpParams > const&);
	}; //class HttpRequestWriter

} //namespace io
} //namespace impl
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_IO_HTTPREQUESTWRITER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_IO_HTTPREQUESTWRITER_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_IO_HTTPREQUESTWRITER_HPP_IMPL

namespace j2cpp {



org::apache::http::impl::io::HttpRequestWriter::operator local_ref<org::apache::http::io::HttpMessageWriter>() const
{
	return local_ref<org::apache::http::io::HttpMessageWriter>(get_jobject());
}

org::apache::http::impl::io::HttpRequestWriter::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::apache::http::impl::io::HttpRequestWriter::operator local_ref<org::apache::http::impl::io::AbstractMessageWriter>() const
{
	return local_ref<org::apache::http::impl::io::AbstractMessageWriter>(get_jobject());
}


org::apache::http::impl::io::HttpRequestWriter::HttpRequestWriter(local_ref< org::apache::http::io::SessionOutputBuffer > const &a0, local_ref< org::apache::http::message::LineFormatter > const &a1, local_ref< org::apache::http::params::HttpParams > const &a2)
: object<org::apache::http::impl::io::HttpRequestWriter>(
	call_new_object<
		org::apache::http::impl::io::HttpRequestWriter::J2CPP_CLASS_NAME,
		org::apache::http::impl::io::HttpRequestWriter::J2CPP_METHOD_NAME(0),
		org::apache::http::impl::io::HttpRequestWriter::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1, a2)
)
{
}




J2CPP_DEFINE_CLASS(org::apache::http::impl::io::HttpRequestWriter,"org/apache/http/impl/io/HttpRequestWriter")
J2CPP_DEFINE_METHOD(org::apache::http::impl::io::HttpRequestWriter,0,"<init>","(Lorg/apache/http/io/SessionOutputBuffer;Lorg/apache/http/message/LineFormatter;Lorg/apache/http/params/HttpParams;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::io::HttpRequestWriter,1,"writeHeadLine","(Lorg/apache/http/HttpMessage;)V")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_IO_HTTPREQUESTWRITER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
