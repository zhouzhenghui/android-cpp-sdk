/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.impl.cookie.AbstractCookieSpec
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_COOKIE_ABSTRACTCOOKIESPEC_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_COOKIE_ABSTRACTCOOKIESPEC_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace cookie { class CookieAttributeHandler; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace cookie { class CookieSpec; } } } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/apache/http/cookie/CookieAttributeHandler.hpp>
#include <org/apache/http/cookie/CookieSpec.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl { namespace cookie {

	class AbstractCookieSpec;
	class AbstractCookieSpec
		: public object<AbstractCookieSpec>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)

		explicit AbstractCookieSpec(jobject jobj)
		: object<AbstractCookieSpec>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::apache::http::cookie::CookieSpec>() const;


		AbstractCookieSpec();
		void registerAttribHandler(local_ref< java::lang::String >  const&, local_ref< org::apache::http::cookie::CookieAttributeHandler >  const&);
	}; //class AbstractCookieSpec

} //namespace cookie
} //namespace impl
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_COOKIE_ABSTRACTCOOKIESPEC_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_COOKIE_ABSTRACTCOOKIESPEC_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_COOKIE_ABSTRACTCOOKIESPEC_HPP_IMPL

namespace j2cpp {



org::apache::http::impl::cookie::AbstractCookieSpec::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::apache::http::impl::cookie::AbstractCookieSpec::operator local_ref<org::apache::http::cookie::CookieSpec>() const
{
	return local_ref<org::apache::http::cookie::CookieSpec>(get_jobject());
}


org::apache::http::impl::cookie::AbstractCookieSpec::AbstractCookieSpec()
: object<org::apache::http::impl::cookie::AbstractCookieSpec>(
	call_new_object<
		org::apache::http::impl::cookie::AbstractCookieSpec::J2CPP_CLASS_NAME,
		org::apache::http::impl::cookie::AbstractCookieSpec::J2CPP_METHOD_NAME(0),
		org::apache::http::impl::cookie::AbstractCookieSpec::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


void org::apache::http::impl::cookie::AbstractCookieSpec::registerAttribHandler(local_ref< java::lang::String > const &a0, local_ref< org::apache::http::cookie::CookieAttributeHandler > const &a1)
{
	return call_method<
		org::apache::http::impl::cookie::AbstractCookieSpec::J2CPP_CLASS_NAME,
		org::apache::http::impl::cookie::AbstractCookieSpec::J2CPP_METHOD_NAME(1),
		org::apache::http::impl::cookie::AbstractCookieSpec::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject(), a0, a1);
}





J2CPP_DEFINE_CLASS(org::apache::http::impl::cookie::AbstractCookieSpec,"org/apache/http/impl/cookie/AbstractCookieSpec")
J2CPP_DEFINE_METHOD(org::apache::http::impl::cookie::AbstractCookieSpec,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::cookie::AbstractCookieSpec,1,"registerAttribHandler","(Ljava/lang/String;Lorg/apache/http/cookie/CookieAttributeHandler;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::cookie::AbstractCookieSpec,2,"findAttribHandler","(Ljava/lang/String;)Lorg/apache/http/cookie/CookieAttributeHandler;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::cookie::AbstractCookieSpec,3,"getAttribHandler","(Ljava/lang/String;)Lorg/apache/http/cookie/CookieAttributeHandler;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::cookie::AbstractCookieSpec,4,"getAttribHandlers","()Ljava/util/Collection;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_COOKIE_ABSTRACTCOOKIESPEC_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
