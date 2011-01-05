/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.HeaderElement
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_HEADERELEMENT_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_HEADERELEMENT_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { class NameValuePair; } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/apache/http/NameValuePair.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http {

	class HeaderElement;
	class HeaderElement
		: public object<HeaderElement>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)

		explicit HeaderElement(jobject jobj)
		: object<HeaderElement>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< java::lang::String > getName();
		local_ref< java::lang::String > getValue();
		local_ref< array< local_ref< org::apache::http::NameValuePair >, 1> > getParameters();
		local_ref< org::apache::http::NameValuePair > getParameterByName(local_ref< java::lang::String >  const&);
		jint getParameterCount();
		local_ref< org::apache::http::NameValuePair > getParameter(jint);
	}; //class HeaderElement

} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_HEADERELEMENT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_HEADERELEMENT_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_HEADERELEMENT_HPP_IMPL

namespace j2cpp {



org::apache::http::HeaderElement::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

local_ref< java::lang::String > org::apache::http::HeaderElement::getName()
{
	return call_method<
		org::apache::http::HeaderElement::J2CPP_CLASS_NAME,
		org::apache::http::HeaderElement::J2CPP_METHOD_NAME(0),
		org::apache::http::HeaderElement::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::String > org::apache::http::HeaderElement::getValue()
{
	return call_method<
		org::apache::http::HeaderElement::J2CPP_CLASS_NAME,
		org::apache::http::HeaderElement::J2CPP_METHOD_NAME(1),
		org::apache::http::HeaderElement::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< array< local_ref< org::apache::http::NameValuePair >, 1> > org::apache::http::HeaderElement::getParameters()
{
	return call_method<
		org::apache::http::HeaderElement::J2CPP_CLASS_NAME,
		org::apache::http::HeaderElement::J2CPP_METHOD_NAME(2),
		org::apache::http::HeaderElement::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< array< local_ref< org::apache::http::NameValuePair >, 1> >
	>(get_jobject());
}

local_ref< org::apache::http::NameValuePair > org::apache::http::HeaderElement::getParameterByName(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::apache::http::HeaderElement::J2CPP_CLASS_NAME,
		org::apache::http::HeaderElement::J2CPP_METHOD_NAME(3),
		org::apache::http::HeaderElement::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< org::apache::http::NameValuePair >
	>(get_jobject(), a0);
}

jint org::apache::http::HeaderElement::getParameterCount()
{
	return call_method<
		org::apache::http::HeaderElement::J2CPP_CLASS_NAME,
		org::apache::http::HeaderElement::J2CPP_METHOD_NAME(4),
		org::apache::http::HeaderElement::J2CPP_METHOD_SIGNATURE(4), 
		jint
	>(get_jobject());
}

local_ref< org::apache::http::NameValuePair > org::apache::http::HeaderElement::getParameter(jint a0)
{
	return call_method<
		org::apache::http::HeaderElement::J2CPP_CLASS_NAME,
		org::apache::http::HeaderElement::J2CPP_METHOD_NAME(5),
		org::apache::http::HeaderElement::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< org::apache::http::NameValuePair >
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(org::apache::http::HeaderElement,"org/apache/http/HeaderElement")
J2CPP_DEFINE_METHOD(org::apache::http::HeaderElement,0,"getName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::HeaderElement,1,"getValue","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::HeaderElement,2,"getParameters","()[org.apache.http.NameValuePair")
J2CPP_DEFINE_METHOD(org::apache::http::HeaderElement,3,"getParameterByName","(Ljava/lang/String;)Lorg/apache/http/NameValuePair;")
J2CPP_DEFINE_METHOD(org::apache::http::HeaderElement,4,"getParameterCount","()I")
J2CPP_DEFINE_METHOD(org::apache::http::HeaderElement,5,"getParameter","(I)Lorg/apache/http/NameValuePair;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_HEADERELEMENT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
