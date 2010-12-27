/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.message.BasicHeader
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICHEADER_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICHEADER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Cloneable; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HeaderElement; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class Header; } } } }


#include <java/lang/Cloneable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/apache/http/Header.hpp>
#include <org/apache/http/HeaderElement.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace message {

	class BasicHeader;
	class BasicHeader
		: public cpp_object<BasicHeader>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)

		explicit BasicHeader(jobject jobj)
		: cpp_object<BasicHeader>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::apache::http::Header>() const;
		operator local_ref<java::lang::Cloneable>() const;


		BasicHeader(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		local_ref< java::lang::String > getName();
		local_ref< java::lang::String > getValue();
		local_ref< java::lang::String > toString();
		local_ref< cpp_object_array<org::apache::http::HeaderElement, 1> > getElements();
		local_ref< java::lang::Object > clone();
	}; //class BasicHeader

} //namespace message
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICHEADER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICHEADER_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICHEADER_HPP_IMPL

namespace j2cpp {



org::apache::http::message::BasicHeader::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}

org::apache::http::message::BasicHeader::operator local_ref<org::apache::http::Header>() const
{
	return local_ref<org::apache::http::Header>(get_jtype());
}

org::apache::http::message::BasicHeader::operator local_ref<java::lang::Cloneable>() const
{
	return local_ref<java::lang::Cloneable>(get_jtype());
}


org::apache::http::message::BasicHeader::BasicHeader(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
: cpp_object<org::apache::http::message::BasicHeader>(
	environment::get().get_jenv()->NewObject(
		get_class<org::apache::http::message::BasicHeader::J2CPP_CLASS_NAME>(),
		get_method_id<org::apache::http::message::BasicHeader::J2CPP_CLASS_NAME, org::apache::http::message::BasicHeader::J2CPP_METHOD_NAME(0), org::apache::http::message::BasicHeader::J2CPP_METHOD_SIGNATURE(0), false>(),
		a0.get_jtype(), a1.get_jtype()
	)
)
{
}


local_ref< java::lang::String > org::apache::http::message::BasicHeader::getName()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

local_ref< java::lang::String > org::apache::http::message::BasicHeader::getValue()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

local_ref< java::lang::String > org::apache::http::message::BasicHeader::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

local_ref< cpp_object_array<org::apache::http::HeaderElement, 1> > org::apache::http::message::BasicHeader::getElements()
{
	return local_ref< cpp_object_array<org::apache::http::HeaderElement, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

local_ref< java::lang::Object > org::apache::http::message::BasicHeader::clone()
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(org::apache::http::message::BasicHeader,"org/apache/http/message/BasicHeader")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicHeader,0,"<init>","(Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicHeader,1,"getName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicHeader,2,"getValue","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicHeader,3,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicHeader,4,"getElements","()[org.apache.http.HeaderElement")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicHeader,5,"clone","()Ljava/lang/Object;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICHEADER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
