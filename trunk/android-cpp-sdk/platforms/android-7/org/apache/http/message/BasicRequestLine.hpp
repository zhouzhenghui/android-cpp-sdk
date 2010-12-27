/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.message.BasicRequestLine
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICREQUESTLINE_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICREQUESTLINE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Cloneable; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class RequestLine; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class ProtocolVersion; } } } }


#include <java/lang/Cloneable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/apache/http/ProtocolVersion.hpp>
#include <org/apache/http/RequestLine.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace message {

	class BasicRequestLine;
	class BasicRequestLine
		: public cpp_object<BasicRequestLine>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)

		explicit BasicRequestLine(jobject jobj)
		: cpp_object<BasicRequestLine>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::apache::http::RequestLine>() const;
		operator local_ref<java::lang::Cloneable>() const;


		BasicRequestLine(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, local_ref< org::apache::http::ProtocolVersion > const&);
		local_ref< java::lang::String > getMethod();
		local_ref< org::apache::http::ProtocolVersion > getProtocolVersion();
		local_ref< java::lang::String > getUri();
		local_ref< java::lang::String > toString();
		local_ref< java::lang::Object > clone();
	}; //class BasicRequestLine

} //namespace message
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICREQUESTLINE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICREQUESTLINE_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICREQUESTLINE_HPP_IMPL

namespace j2cpp {



org::apache::http::message::BasicRequestLine::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}

org::apache::http::message::BasicRequestLine::operator local_ref<org::apache::http::RequestLine>() const
{
	return local_ref<org::apache::http::RequestLine>(get_jtype());
}

org::apache::http::message::BasicRequestLine::operator local_ref<java::lang::Cloneable>() const
{
	return local_ref<java::lang::Cloneable>(get_jtype());
}


org::apache::http::message::BasicRequestLine::BasicRequestLine(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< org::apache::http::ProtocolVersion > const &a2)
: cpp_object<org::apache::http::message::BasicRequestLine>(
	environment::get().get_jenv()->NewObject(
		get_class<org::apache::http::message::BasicRequestLine::J2CPP_CLASS_NAME>(),
		get_method_id<org::apache::http::message::BasicRequestLine::J2CPP_CLASS_NAME, org::apache::http::message::BasicRequestLine::J2CPP_METHOD_NAME(0), org::apache::http::message::BasicRequestLine::J2CPP_METHOD_SIGNATURE(0), false>(),
		a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
	)
)
{
}


local_ref< java::lang::String > org::apache::http::message::BasicRequestLine::getMethod()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

local_ref< org::apache::http::ProtocolVersion > org::apache::http::message::BasicRequestLine::getProtocolVersion()
{
	return local_ref< org::apache::http::ProtocolVersion >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

local_ref< java::lang::String > org::apache::http::message::BasicRequestLine::getUri()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

local_ref< java::lang::String > org::apache::http::message::BasicRequestLine::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

local_ref< java::lang::Object > org::apache::http::message::BasicRequestLine::clone()
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(org::apache::http::message::BasicRequestLine,"org/apache/http/message/BasicRequestLine")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicRequestLine,0,"<init>","(Ljava/lang/String;Ljava/lang/String;Lorg/apache/http/ProtocolVersion;)V")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicRequestLine,1,"getMethod","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicRequestLine,2,"getProtocolVersion","()Lorg/apache/http/ProtocolVersion;")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicRequestLine,3,"getUri","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicRequestLine,4,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicRequestLine,5,"clone","()Ljava/lang/Object;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICREQUESTLINE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
