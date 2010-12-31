/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.impl.cookie.NetscapeDraftHeaderParser
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_COOKIE_NETSCAPEDRAFTHEADERPARSER_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_COOKIE_NETSCAPEDRAFTHEADERPARSER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace util { class CharArrayBuffer; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HeaderElement; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace message { class ParserCursor; } } } } }


#include <java/lang/Object.hpp>
#include <org/apache/http/HeaderElement.hpp>
#include <org/apache/http/message/ParserCursor.hpp>
#include <org/apache/http/util/CharArrayBuffer.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl { namespace cookie {

	class NetscapeDraftHeaderParser;
	class NetscapeDraftHeaderParser
		: public object<NetscapeDraftHeaderParser>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_FIELD(0)

		explicit NetscapeDraftHeaderParser(jobject jobj)
		: object<NetscapeDraftHeaderParser>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		NetscapeDraftHeaderParser();
		local_ref< org::apache::http::HeaderElement > parseHeader(local_ref< org::apache::http::util::CharArrayBuffer >  const&, local_ref< org::apache::http::message::ParserCursor >  const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< org::apache::http::impl::cookie::NetscapeDraftHeaderParser > > DEFAULT;
	}; //class NetscapeDraftHeaderParser

} //namespace cookie
} //namespace impl
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_COOKIE_NETSCAPEDRAFTHEADERPARSER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_COOKIE_NETSCAPEDRAFTHEADERPARSER_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_COOKIE_NETSCAPEDRAFTHEADERPARSER_HPP_IMPL

namespace j2cpp {



org::apache::http::impl::cookie::NetscapeDraftHeaderParser::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


org::apache::http::impl::cookie::NetscapeDraftHeaderParser::NetscapeDraftHeaderParser()
: object<org::apache::http::impl::cookie::NetscapeDraftHeaderParser>(
	call_new_object<
		org::apache::http::impl::cookie::NetscapeDraftHeaderParser::J2CPP_CLASS_NAME,
		org::apache::http::impl::cookie::NetscapeDraftHeaderParser::J2CPP_METHOD_NAME(0),
		org::apache::http::impl::cookie::NetscapeDraftHeaderParser::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}


local_ref< org::apache::http::HeaderElement > org::apache::http::impl::cookie::NetscapeDraftHeaderParser::parseHeader(local_ref< org::apache::http::util::CharArrayBuffer > const &a0, local_ref< org::apache::http::message::ParserCursor > const &a1)
{
	return call_method<
		org::apache::http::impl::cookie::NetscapeDraftHeaderParser::J2CPP_CLASS_NAME,
		org::apache::http::impl::cookie::NetscapeDraftHeaderParser::J2CPP_METHOD_NAME(1),
		org::apache::http::impl::cookie::NetscapeDraftHeaderParser::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< org::apache::http::HeaderElement > >
	(get_jobject(), a0, a1);
}



static_field<
	org::apache::http::impl::cookie::NetscapeDraftHeaderParser::J2CPP_CLASS_NAME,
	org::apache::http::impl::cookie::NetscapeDraftHeaderParser::J2CPP_FIELD_NAME(0),
	org::apache::http::impl::cookie::NetscapeDraftHeaderParser::J2CPP_FIELD_SIGNATURE(0),
	local_ref< org::apache::http::impl::cookie::NetscapeDraftHeaderParser >
> org::apache::http::impl::cookie::NetscapeDraftHeaderParser::DEFAULT;


J2CPP_DEFINE_CLASS(org::apache::http::impl::cookie::NetscapeDraftHeaderParser,"org/apache/http/impl/cookie/NetscapeDraftHeaderParser")
J2CPP_DEFINE_METHOD(org::apache::http::impl::cookie::NetscapeDraftHeaderParser,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::cookie::NetscapeDraftHeaderParser,1,"parseHeader","(Lorg/apache/http/util/CharArrayBuffer;Lorg/apache/http/message/ParserCursor;)Lorg/apache/http/HeaderElement;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::cookie::NetscapeDraftHeaderParser,2,"<clinit>","()V")
J2CPP_DEFINE_FIELD(org::apache::http::impl::cookie::NetscapeDraftHeaderParser,0,"DEFAULT","Lorg/apache/http/impl/cookie/NetscapeDraftHeaderParser;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_COOKIE_NETSCAPEDRAFTHEADERPARSER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
