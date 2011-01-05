/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.message.BasicHeaderValueParser
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICHEADERVALUEPARSER_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICHEADERVALUEPARSER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class NameValuePair; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace util { class CharArrayBuffer; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HeaderElement; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace message { class ParserCursor; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace message { class HeaderValueParser; } } } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/apache/http/HeaderElement.hpp>
#include <org/apache/http/NameValuePair.hpp>
#include <org/apache/http/message/HeaderValueParser.hpp>
#include <org/apache/http/message/ParserCursor.hpp>
#include <org/apache/http/util/CharArrayBuffer.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace message {

	class BasicHeaderValueParser;
	class BasicHeaderValueParser
		: public object<BasicHeaderValueParser>
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
		J2CPP_DECLARE_METHOD(10)
		J2CPP_DECLARE_METHOD(11)
		J2CPP_DECLARE_METHOD(12)
		J2CPP_DECLARE_FIELD(0)

		explicit BasicHeaderValueParser(jobject jobj)
		: object<BasicHeaderValueParser>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::apache::http::message::HeaderValueParser>() const;


		BasicHeaderValueParser();
		static local_ref< array< local_ref< org::apache::http::HeaderElement >, 1> > parseElements(local_ref< java::lang::String >  const&, local_ref< org::apache::http::message::HeaderValueParser >  const&);
		local_ref< array< local_ref< org::apache::http::HeaderElement >, 1> > parseElements(local_ref< org::apache::http::util::CharArrayBuffer >  const&, local_ref< org::apache::http::message::ParserCursor >  const&);
		static local_ref< org::apache::http::HeaderElement > parseHeaderElement(local_ref< java::lang::String >  const&, local_ref< org::apache::http::message::HeaderValueParser >  const&);
		local_ref< org::apache::http::HeaderElement > parseHeaderElement(local_ref< org::apache::http::util::CharArrayBuffer >  const&, local_ref< org::apache::http::message::ParserCursor >  const&);
		static local_ref< array< local_ref< org::apache::http::NameValuePair >, 1> > parseParameters(local_ref< java::lang::String >  const&, local_ref< org::apache::http::message::HeaderValueParser >  const&);
		local_ref< array< local_ref< org::apache::http::NameValuePair >, 1> > parseParameters(local_ref< org::apache::http::util::CharArrayBuffer >  const&, local_ref< org::apache::http::message::ParserCursor >  const&);
		static local_ref< org::apache::http::NameValuePair > parseNameValuePair(local_ref< java::lang::String >  const&, local_ref< org::apache::http::message::HeaderValueParser >  const&);
		local_ref< org::apache::http::NameValuePair > parseNameValuePair(local_ref< org::apache::http::util::CharArrayBuffer >  const&, local_ref< org::apache::http::message::ParserCursor >  const&);
		local_ref< org::apache::http::NameValuePair > parseNameValuePair(local_ref< org::apache::http::util::CharArrayBuffer >  const&, local_ref< org::apache::http::message::ParserCursor >  const&, local_ref< array<jchar,1> >  const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< org::apache::http::message::BasicHeaderValueParser > > DEFAULT;
	}; //class BasicHeaderValueParser

} //namespace message
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICHEADERVALUEPARSER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICHEADERVALUEPARSER_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICHEADERVALUEPARSER_HPP_IMPL

namespace j2cpp {



org::apache::http::message::BasicHeaderValueParser::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::apache::http::message::BasicHeaderValueParser::operator local_ref<org::apache::http::message::HeaderValueParser>() const
{
	return local_ref<org::apache::http::message::HeaderValueParser>(get_jobject());
}


org::apache::http::message::BasicHeaderValueParser::BasicHeaderValueParser()
: object<org::apache::http::message::BasicHeaderValueParser>(
	call_new_object<
		org::apache::http::message::BasicHeaderValueParser::J2CPP_CLASS_NAME,
		org::apache::http::message::BasicHeaderValueParser::J2CPP_METHOD_NAME(0),
		org::apache::http::message::BasicHeaderValueParser::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


local_ref< array< local_ref< org::apache::http::HeaderElement >, 1> > org::apache::http::message::BasicHeaderValueParser::parseElements(local_ref< java::lang::String > const &a0, local_ref< org::apache::http::message::HeaderValueParser > const &a1)
{
	return call_static_method<
		org::apache::http::message::BasicHeaderValueParser::J2CPP_CLASS_NAME,
		org::apache::http::message::BasicHeaderValueParser::J2CPP_METHOD_NAME(1),
		org::apache::http::message::BasicHeaderValueParser::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< array< local_ref< org::apache::http::HeaderElement >, 1> >
	>(a0, a1);
}

local_ref< array< local_ref< org::apache::http::HeaderElement >, 1> > org::apache::http::message::BasicHeaderValueParser::parseElements(local_ref< org::apache::http::util::CharArrayBuffer > const &a0, local_ref< org::apache::http::message::ParserCursor > const &a1)
{
	return call_method<
		org::apache::http::message::BasicHeaderValueParser::J2CPP_CLASS_NAME,
		org::apache::http::message::BasicHeaderValueParser::J2CPP_METHOD_NAME(2),
		org::apache::http::message::BasicHeaderValueParser::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< array< local_ref< org::apache::http::HeaderElement >, 1> >
	>(get_jobject(), a0, a1);
}

local_ref< org::apache::http::HeaderElement > org::apache::http::message::BasicHeaderValueParser::parseHeaderElement(local_ref< java::lang::String > const &a0, local_ref< org::apache::http::message::HeaderValueParser > const &a1)
{
	return call_static_method<
		org::apache::http::message::BasicHeaderValueParser::J2CPP_CLASS_NAME,
		org::apache::http::message::BasicHeaderValueParser::J2CPP_METHOD_NAME(3),
		org::apache::http::message::BasicHeaderValueParser::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< org::apache::http::HeaderElement >
	>(a0, a1);
}

local_ref< org::apache::http::HeaderElement > org::apache::http::message::BasicHeaderValueParser::parseHeaderElement(local_ref< org::apache::http::util::CharArrayBuffer > const &a0, local_ref< org::apache::http::message::ParserCursor > const &a1)
{
	return call_method<
		org::apache::http::message::BasicHeaderValueParser::J2CPP_CLASS_NAME,
		org::apache::http::message::BasicHeaderValueParser::J2CPP_METHOD_NAME(4),
		org::apache::http::message::BasicHeaderValueParser::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< org::apache::http::HeaderElement >
	>(get_jobject(), a0, a1);
}


local_ref< array< local_ref< org::apache::http::NameValuePair >, 1> > org::apache::http::message::BasicHeaderValueParser::parseParameters(local_ref< java::lang::String > const &a0, local_ref< org::apache::http::message::HeaderValueParser > const &a1)
{
	return call_static_method<
		org::apache::http::message::BasicHeaderValueParser::J2CPP_CLASS_NAME,
		org::apache::http::message::BasicHeaderValueParser::J2CPP_METHOD_NAME(6),
		org::apache::http::message::BasicHeaderValueParser::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< array< local_ref< org::apache::http::NameValuePair >, 1> >
	>(a0, a1);
}

local_ref< array< local_ref< org::apache::http::NameValuePair >, 1> > org::apache::http::message::BasicHeaderValueParser::parseParameters(local_ref< org::apache::http::util::CharArrayBuffer > const &a0, local_ref< org::apache::http::message::ParserCursor > const &a1)
{
	return call_method<
		org::apache::http::message::BasicHeaderValueParser::J2CPP_CLASS_NAME,
		org::apache::http::message::BasicHeaderValueParser::J2CPP_METHOD_NAME(7),
		org::apache::http::message::BasicHeaderValueParser::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< array< local_ref< org::apache::http::NameValuePair >, 1> >
	>(get_jobject(), a0, a1);
}

local_ref< org::apache::http::NameValuePair > org::apache::http::message::BasicHeaderValueParser::parseNameValuePair(local_ref< java::lang::String > const &a0, local_ref< org::apache::http::message::HeaderValueParser > const &a1)
{
	return call_static_method<
		org::apache::http::message::BasicHeaderValueParser::J2CPP_CLASS_NAME,
		org::apache::http::message::BasicHeaderValueParser::J2CPP_METHOD_NAME(8),
		org::apache::http::message::BasicHeaderValueParser::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< org::apache::http::NameValuePair >
	>(a0, a1);
}

local_ref< org::apache::http::NameValuePair > org::apache::http::message::BasicHeaderValueParser::parseNameValuePair(local_ref< org::apache::http::util::CharArrayBuffer > const &a0, local_ref< org::apache::http::message::ParserCursor > const &a1)
{
	return call_method<
		org::apache::http::message::BasicHeaderValueParser::J2CPP_CLASS_NAME,
		org::apache::http::message::BasicHeaderValueParser::J2CPP_METHOD_NAME(9),
		org::apache::http::message::BasicHeaderValueParser::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< org::apache::http::NameValuePair >
	>(get_jobject(), a0, a1);
}

local_ref< org::apache::http::NameValuePair > org::apache::http::message::BasicHeaderValueParser::parseNameValuePair(local_ref< org::apache::http::util::CharArrayBuffer > const &a0, local_ref< org::apache::http::message::ParserCursor > const &a1, local_ref< array<jchar,1> > const &a2)
{
	return call_method<
		org::apache::http::message::BasicHeaderValueParser::J2CPP_CLASS_NAME,
		org::apache::http::message::BasicHeaderValueParser::J2CPP_METHOD_NAME(10),
		org::apache::http::message::BasicHeaderValueParser::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< org::apache::http::NameValuePair >
	>(get_jobject(), a0, a1, a2);
}




static_field<
	org::apache::http::message::BasicHeaderValueParser::J2CPP_CLASS_NAME,
	org::apache::http::message::BasicHeaderValueParser::J2CPP_FIELD_NAME(0),
	org::apache::http::message::BasicHeaderValueParser::J2CPP_FIELD_SIGNATURE(0),
	local_ref< org::apache::http::message::BasicHeaderValueParser >
> org::apache::http::message::BasicHeaderValueParser::DEFAULT;


J2CPP_DEFINE_CLASS(org::apache::http::message::BasicHeaderValueParser,"org/apache/http/message/BasicHeaderValueParser")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicHeaderValueParser,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicHeaderValueParser,1,"parseElements","(Ljava/lang/String;Lorg/apache/http/message/HeaderValueParser;)[org.apache.http.HeaderElement")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicHeaderValueParser,2,"parseElements","(Lorg/apache/http/util/CharArrayBuffer;Lorg/apache/http/message/ParserCursor;)[org.apache.http.HeaderElement")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicHeaderValueParser,3,"parseHeaderElement","(Ljava/lang/String;Lorg/apache/http/message/HeaderValueParser;)Lorg/apache/http/HeaderElement;")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicHeaderValueParser,4,"parseHeaderElement","(Lorg/apache/http/util/CharArrayBuffer;Lorg/apache/http/message/ParserCursor;)Lorg/apache/http/HeaderElement;")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicHeaderValueParser,5,"createHeaderElement","(Ljava/lang/String;Ljava/lang/String;[org.apache.http.NameValuePair)Lorg/apache/http/HeaderElement;")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicHeaderValueParser,6,"parseParameters","(Ljava/lang/String;Lorg/apache/http/message/HeaderValueParser;)[org.apache.http.NameValuePair")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicHeaderValueParser,7,"parseParameters","(Lorg/apache/http/util/CharArrayBuffer;Lorg/apache/http/message/ParserCursor;)[org.apache.http.NameValuePair")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicHeaderValueParser,8,"parseNameValuePair","(Ljava/lang/String;Lorg/apache/http/message/HeaderValueParser;)Lorg/apache/http/NameValuePair;")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicHeaderValueParser,9,"parseNameValuePair","(Lorg/apache/http/util/CharArrayBuffer;Lorg/apache/http/message/ParserCursor;)Lorg/apache/http/NameValuePair;")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicHeaderValueParser,10,"parseNameValuePair","(Lorg/apache/http/util/CharArrayBuffer;Lorg/apache/http/message/ParserCursor;[C)Lorg/apache/http/NameValuePair;")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicHeaderValueParser,11,"createNameValuePair","(Ljava/lang/String;Ljava/lang/String;)Lorg/apache/http/NameValuePair;")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicHeaderValueParser,12,"<clinit>","()V")
J2CPP_DEFINE_FIELD(org::apache::http::message::BasicHeaderValueParser,0,"DEFAULT","Lorg/apache/http/message/BasicHeaderValueParser;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICHEADERVALUEPARSER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
