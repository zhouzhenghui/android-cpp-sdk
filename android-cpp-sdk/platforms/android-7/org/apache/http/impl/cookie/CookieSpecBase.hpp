/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.impl.cookie.CookieSpecBase
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_COOKIE_COOKIESPECBASE_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_COOKIE_COOKIESPECBASE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace cookie { class CookieOrigin; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace cookie { class Cookie; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace cookie { class CookieSpec; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace impl { namespace cookie { class AbstractCookieSpec; } } } } } }


#include <java/lang/Object.hpp>
#include <org/apache/http/cookie/Cookie.hpp>
#include <org/apache/http/cookie/CookieOrigin.hpp>
#include <org/apache/http/cookie/CookieSpec.hpp>
#include <org/apache/http/impl/cookie/AbstractCookieSpec.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl { namespace cookie {

	class CookieSpecBase;
	class CookieSpecBase
		: public object<CookieSpecBase>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)

		explicit CookieSpecBase(jobject jobj)
		: object<CookieSpecBase>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::apache::http::cookie::CookieSpec>() const;
		operator local_ref<org::apache::http::impl::cookie::AbstractCookieSpec>() const;


		CookieSpecBase();
		void validate(local_ref< org::apache::http::cookie::Cookie >  const&, local_ref< org::apache::http::cookie::CookieOrigin >  const&);
		jboolean match(local_ref< org::apache::http::cookie::Cookie >  const&, local_ref< org::apache::http::cookie::CookieOrigin >  const&);
	}; //class CookieSpecBase

} //namespace cookie
} //namespace impl
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_COOKIE_COOKIESPECBASE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_COOKIE_COOKIESPECBASE_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_COOKIE_COOKIESPECBASE_HPP_IMPL

namespace j2cpp {



org::apache::http::impl::cookie::CookieSpecBase::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::apache::http::impl::cookie::CookieSpecBase::operator local_ref<org::apache::http::cookie::CookieSpec>() const
{
	return local_ref<org::apache::http::cookie::CookieSpec>(get_jobject());
}

org::apache::http::impl::cookie::CookieSpecBase::operator local_ref<org::apache::http::impl::cookie::AbstractCookieSpec>() const
{
	return local_ref<org::apache::http::impl::cookie::AbstractCookieSpec>(get_jobject());
}


org::apache::http::impl::cookie::CookieSpecBase::CookieSpecBase()
: object<org::apache::http::impl::cookie::CookieSpecBase>(
	call_new_object<
		org::apache::http::impl::cookie::CookieSpecBase::J2CPP_CLASS_NAME,
		org::apache::http::impl::cookie::CookieSpecBase::J2CPP_METHOD_NAME(0),
		org::apache::http::impl::cookie::CookieSpecBase::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}





void org::apache::http::impl::cookie::CookieSpecBase::validate(local_ref< org::apache::http::cookie::Cookie > const &a0, local_ref< org::apache::http::cookie::CookieOrigin > const &a1)
{
	return call_method<
		org::apache::http::impl::cookie::CookieSpecBase::J2CPP_CLASS_NAME,
		org::apache::http::impl::cookie::CookieSpecBase::J2CPP_METHOD_NAME(4),
		org::apache::http::impl::cookie::CookieSpecBase::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0, a1);
}

jboolean org::apache::http::impl::cookie::CookieSpecBase::match(local_ref< org::apache::http::cookie::Cookie > const &a0, local_ref< org::apache::http::cookie::CookieOrigin > const &a1)
{
	return call_method<
		org::apache::http::impl::cookie::CookieSpecBase::J2CPP_CLASS_NAME,
		org::apache::http::impl::cookie::CookieSpecBase::J2CPP_METHOD_NAME(5),
		org::apache::http::impl::cookie::CookieSpecBase::J2CPP_METHOD_SIGNATURE(5), 
		jboolean
	>(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(org::apache::http::impl::cookie::CookieSpecBase,"org/apache/http/impl/cookie/CookieSpecBase")
J2CPP_DEFINE_METHOD(org::apache::http::impl::cookie::CookieSpecBase,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::cookie::CookieSpecBase,1,"getDefaultPath","(Lorg/apache/http/cookie/CookieOrigin;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::cookie::CookieSpecBase,2,"getDefaultDomain","(Lorg/apache/http/cookie/CookieOrigin;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::cookie::CookieSpecBase,3,"parse","([org.apache.http.HeaderElementLorg/apache/http/cookie/CookieOrigin;)Ljava/util/List;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::cookie::CookieSpecBase,4,"validate","(Lorg/apache/http/cookie/Cookie;Lorg/apache/http/cookie/CookieOrigin;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::cookie::CookieSpecBase,5,"match","(Lorg/apache/http/cookie/Cookie;Lorg/apache/http/cookie/CookieOrigin;)Z")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_COOKIE_COOKIESPECBASE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
