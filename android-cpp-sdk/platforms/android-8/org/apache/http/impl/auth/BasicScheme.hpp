/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.impl.auth.BasicScheme
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_AUTH_BASICSCHEME_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_AUTH_BASICSCHEME_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { namespace impl { namespace auth { class RFC2617Scheme; } } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class Header; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace auth { class Credentials; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpRequest; } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/String.hpp>
#include <org/apache/http/Header.hpp>
#include <org/apache/http/HttpRequest.hpp>
#include <org/apache/http/auth/Credentials.hpp>
#include <org/apache/http/impl/auth/RFC2617Scheme.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl { namespace auth {

	class BasicScheme;
	class BasicScheme
		: public object<BasicScheme>
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

		explicit BasicScheme(jobject jobj)
		: object<BasicScheme>(jobj)
		{
		}

		operator local_ref<org::apache::http::impl::auth::RFC2617Scheme>() const;


		BasicScheme();
		local_ref< java::lang::String > getSchemeName();
		void processChallenge(local_ref< org::apache::http::Header >  const&);
		jboolean isComplete();
		jboolean isConnectionBased();
		local_ref< org::apache::http::Header > authenticate(local_ref< org::apache::http::auth::Credentials >  const&, local_ref< org::apache::http::HttpRequest >  const&);
		static local_ref< org::apache::http::Header > authenticate(local_ref< org::apache::http::auth::Credentials >  const&, local_ref< java::lang::String >  const&, jboolean);
	}; //class BasicScheme

} //namespace auth
} //namespace impl
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_AUTH_BASICSCHEME_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_AUTH_BASICSCHEME_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_AUTH_BASICSCHEME_HPP_IMPL

namespace j2cpp {



org::apache::http::impl::auth::BasicScheme::operator local_ref<org::apache::http::impl::auth::RFC2617Scheme>() const
{
	return local_ref<org::apache::http::impl::auth::RFC2617Scheme>(get_jobject());
}


org::apache::http::impl::auth::BasicScheme::BasicScheme()
: object<org::apache::http::impl::auth::BasicScheme>(
	call_new_object<
		org::apache::http::impl::auth::BasicScheme::J2CPP_CLASS_NAME,
		org::apache::http::impl::auth::BasicScheme::J2CPP_METHOD_NAME(0),
		org::apache::http::impl::auth::BasicScheme::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}


local_ref< java::lang::String > org::apache::http::impl::auth::BasicScheme::getSchemeName()
{
	return call_method<
		org::apache::http::impl::auth::BasicScheme::J2CPP_CLASS_NAME,
		org::apache::http::impl::auth::BasicScheme::J2CPP_METHOD_NAME(1),
		org::apache::http::impl::auth::BasicScheme::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::String > >
	(get_jobject());
}

void org::apache::http::impl::auth::BasicScheme::processChallenge(local_ref< org::apache::http::Header > const &a0)
{
	return call_method<
		org::apache::http::impl::auth::BasicScheme::J2CPP_CLASS_NAME,
		org::apache::http::impl::auth::BasicScheme::J2CPP_METHOD_NAME(2),
		org::apache::http::impl::auth::BasicScheme::J2CPP_METHOD_SIGNATURE(2), 
		void >
	(get_jobject(), a0);
}

jboolean org::apache::http::impl::auth::BasicScheme::isComplete()
{
	return call_method<
		org::apache::http::impl::auth::BasicScheme::J2CPP_CLASS_NAME,
		org::apache::http::impl::auth::BasicScheme::J2CPP_METHOD_NAME(3),
		org::apache::http::impl::auth::BasicScheme::J2CPP_METHOD_SIGNATURE(3), 
		jboolean >
	(get_jobject());
}

jboolean org::apache::http::impl::auth::BasicScheme::isConnectionBased()
{
	return call_method<
		org::apache::http::impl::auth::BasicScheme::J2CPP_CLASS_NAME,
		org::apache::http::impl::auth::BasicScheme::J2CPP_METHOD_NAME(4),
		org::apache::http::impl::auth::BasicScheme::J2CPP_METHOD_SIGNATURE(4), 
		jboolean >
	(get_jobject());
}

local_ref< org::apache::http::Header > org::apache::http::impl::auth::BasicScheme::authenticate(local_ref< org::apache::http::auth::Credentials > const &a0, local_ref< org::apache::http::HttpRequest > const &a1)
{
	return call_method<
		org::apache::http::impl::auth::BasicScheme::J2CPP_CLASS_NAME,
		org::apache::http::impl::auth::BasicScheme::J2CPP_METHOD_NAME(5),
		org::apache::http::impl::auth::BasicScheme::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< org::apache::http::Header > >
	(get_jobject(), a0, a1);
}

local_ref< org::apache::http::Header > org::apache::http::impl::auth::BasicScheme::authenticate(local_ref< org::apache::http::auth::Credentials > const &a0, local_ref< java::lang::String > const &a1, jboolean a2)
{
	return call_static_method<
		org::apache::http::impl::auth::BasicScheme::J2CPP_CLASS_NAME,
		org::apache::http::impl::auth::BasicScheme::J2CPP_METHOD_NAME(6),
		org::apache::http::impl::auth::BasicScheme::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< org::apache::http::Header > >
	(a0, a1, a2);
}


J2CPP_DEFINE_CLASS(org::apache::http::impl::auth::BasicScheme,"org/apache/http/impl/auth/BasicScheme")
J2CPP_DEFINE_METHOD(org::apache::http::impl::auth::BasicScheme,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::auth::BasicScheme,1,"getSchemeName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::auth::BasicScheme,2,"processChallenge","(Lorg/apache/http/Header;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::auth::BasicScheme,3,"isComplete","()Z")
J2CPP_DEFINE_METHOD(org::apache::http::impl::auth::BasicScheme,4,"isConnectionBased","()Z")
J2CPP_DEFINE_METHOD(org::apache::http::impl::auth::BasicScheme,5,"authenticate","(Lorg/apache/http/auth/Credentials;Lorg/apache/http/HttpRequest;)Lorg/apache/http/Header;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::auth::BasicScheme,6,"authenticate","(Lorg/apache/http/auth/Credentials;Ljava/lang/String;Z)Lorg/apache/http/Header;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_AUTH_BASICSCHEME_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
