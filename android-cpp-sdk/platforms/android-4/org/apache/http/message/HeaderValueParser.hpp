/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.message.HeaderValueParser
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_MESSAGE_HEADERVALUEPARSER_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_MESSAGE_HEADERVALUEPARSER_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { class NameValuePair; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace util { class CharArrayBuffer; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HeaderElement; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace message { class ParserCursor; } } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <org/apache/http/HeaderElement.hpp>
#include <org/apache/http/NameValuePair.hpp>
#include <org/apache/http/message/ParserCursor.hpp>
#include <org/apache/http/util/CharArrayBuffer.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace message {

	class HeaderValueParser;
	class HeaderValueParser
		: public object<HeaderValueParser>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		explicit HeaderValueParser(jobject jobj)
		: object<HeaderValueParser>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< array< local_ref< org::apache::http::HeaderElement >, 1> > parseElements(local_ref< org::apache::http::util::CharArrayBuffer >  const&, local_ref< org::apache::http::message::ParserCursor >  const&);
		local_ref< org::apache::http::HeaderElement > parseHeaderElement(local_ref< org::apache::http::util::CharArrayBuffer >  const&, local_ref< org::apache::http::message::ParserCursor >  const&);
		local_ref< array< local_ref< org::apache::http::NameValuePair >, 1> > parseParameters(local_ref< org::apache::http::util::CharArrayBuffer >  const&, local_ref< org::apache::http::message::ParserCursor >  const&);
		local_ref< org::apache::http::NameValuePair > parseNameValuePair(local_ref< org::apache::http::util::CharArrayBuffer >  const&, local_ref< org::apache::http::message::ParserCursor >  const&);
	}; //class HeaderValueParser

} //namespace message
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_MESSAGE_HEADERVALUEPARSER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_MESSAGE_HEADERVALUEPARSER_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_MESSAGE_HEADERVALUEPARSER_HPP_IMPL

namespace j2cpp {



org::apache::http::message::HeaderValueParser::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

local_ref< array< local_ref< org::apache::http::HeaderElement >, 1> > org::apache::http::message::HeaderValueParser::parseElements(local_ref< org::apache::http::util::CharArrayBuffer > const &a0, local_ref< org::apache::http::message::ParserCursor > const &a1)
{
	return call_method<
		org::apache::http::message::HeaderValueParser::J2CPP_CLASS_NAME,
		org::apache::http::message::HeaderValueParser::J2CPP_METHOD_NAME(0),
		org::apache::http::message::HeaderValueParser::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< array< local_ref< org::apache::http::HeaderElement >, 1> > >
	(get_jobject(), a0, a1);
}

local_ref< org::apache::http::HeaderElement > org::apache::http::message::HeaderValueParser::parseHeaderElement(local_ref< org::apache::http::util::CharArrayBuffer > const &a0, local_ref< org::apache::http::message::ParserCursor > const &a1)
{
	return call_method<
		org::apache::http::message::HeaderValueParser::J2CPP_CLASS_NAME,
		org::apache::http::message::HeaderValueParser::J2CPP_METHOD_NAME(1),
		org::apache::http::message::HeaderValueParser::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< org::apache::http::HeaderElement > >
	(get_jobject(), a0, a1);
}

local_ref< array< local_ref< org::apache::http::NameValuePair >, 1> > org::apache::http::message::HeaderValueParser::parseParameters(local_ref< org::apache::http::util::CharArrayBuffer > const &a0, local_ref< org::apache::http::message::ParserCursor > const &a1)
{
	return call_method<
		org::apache::http::message::HeaderValueParser::J2CPP_CLASS_NAME,
		org::apache::http::message::HeaderValueParser::J2CPP_METHOD_NAME(2),
		org::apache::http::message::HeaderValueParser::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< array< local_ref< org::apache::http::NameValuePair >, 1> > >
	(get_jobject(), a0, a1);
}

local_ref< org::apache::http::NameValuePair > org::apache::http::message::HeaderValueParser::parseNameValuePair(local_ref< org::apache::http::util::CharArrayBuffer > const &a0, local_ref< org::apache::http::message::ParserCursor > const &a1)
{
	return call_method<
		org::apache::http::message::HeaderValueParser::J2CPP_CLASS_NAME,
		org::apache::http::message::HeaderValueParser::J2CPP_METHOD_NAME(3),
		org::apache::http::message::HeaderValueParser::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< org::apache::http::NameValuePair > >
	(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(org::apache::http::message::HeaderValueParser,"org/apache/http/message/HeaderValueParser")
J2CPP_DEFINE_METHOD(org::apache::http::message::HeaderValueParser,0,"parseElements","(Lorg/apache/http/util/CharArrayBuffer;Lorg/apache/http/message/ParserCursor;)[org.apache.http.HeaderElement")
J2CPP_DEFINE_METHOD(org::apache::http::message::HeaderValueParser,1,"parseHeaderElement","(Lorg/apache/http/util/CharArrayBuffer;Lorg/apache/http/message/ParserCursor;)Lorg/apache/http/HeaderElement;")
J2CPP_DEFINE_METHOD(org::apache::http::message::HeaderValueParser,2,"parseParameters","(Lorg/apache/http/util/CharArrayBuffer;Lorg/apache/http/message/ParserCursor;)[org.apache.http.NameValuePair")
J2CPP_DEFINE_METHOD(org::apache::http::message::HeaderValueParser,3,"parseNameValuePair","(Lorg/apache/http/util/CharArrayBuffer;Lorg/apache/http/message/ParserCursor;)Lorg/apache/http/NameValuePair;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_MESSAGE_HEADERVALUEPARSER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
