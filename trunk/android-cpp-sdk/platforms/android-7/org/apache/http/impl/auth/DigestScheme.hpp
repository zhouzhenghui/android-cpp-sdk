/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.impl.auth.DigestScheme
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_AUTH_DIGESTSCHEME_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_AUTH_DIGESTSCHEME_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpRequest; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class Header; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace impl { namespace auth { class RFC2617Scheme; } } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace auth { class Credentials; } } } } }


#include <java/lang/String.hpp>
#include <org/apache/http/Header.hpp>
#include <org/apache/http/HttpRequest.hpp>
#include <org/apache/http/auth/Credentials.hpp>
#include <org/apache/http/impl/auth/RFC2617Scheme.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl { namespace auth {

	class DigestScheme;
	class DigestScheme
		: public cpp_object<DigestScheme>
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

		explicit DigestScheme(jobject jobj)
		: cpp_object<DigestScheme>(jobj)
		{
		}

		operator local_ref<org::apache::http::impl::auth::RFC2617Scheme>() const;


		DigestScheme();
		void processChallenge(local_ref< org::apache::http::Header > const&);
		cpp_boolean isComplete();
		local_ref< java::lang::String > getSchemeName();
		cpp_boolean isConnectionBased();
		void overrideParamter(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		local_ref< org::apache::http::Header > authenticate(local_ref< org::apache::http::auth::Credentials > const&, local_ref< org::apache::http::HttpRequest > const&);
		static local_ref< java::lang::String > createCnonce();
	}; //class DigestScheme

} //namespace auth
} //namespace impl
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_AUTH_DIGESTSCHEME_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_AUTH_DIGESTSCHEME_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_AUTH_DIGESTSCHEME_HPP_IMPL

namespace j2cpp {



org::apache::http::impl::auth::DigestScheme::operator local_ref<org::apache::http::impl::auth::RFC2617Scheme>() const
{
	return local_ref<org::apache::http::impl::auth::RFC2617Scheme>(get_jtype());
}


org::apache::http::impl::auth::DigestScheme::DigestScheme()
: cpp_object<org::apache::http::impl::auth::DigestScheme>(
	environment::get().get_jenv()->NewObject(
		get_class<org::apache::http::impl::auth::DigestScheme::J2CPP_CLASS_NAME>(),
		get_method_id<org::apache::http::impl::auth::DigestScheme::J2CPP_CLASS_NAME, org::apache::http::impl::auth::DigestScheme::J2CPP_METHOD_NAME(0), org::apache::http::impl::auth::DigestScheme::J2CPP_METHOD_SIGNATURE(0), false>()
	)
)
{
}


void org::apache::http::impl::auth::DigestScheme::processChallenge(local_ref< org::apache::http::Header > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean org::apache::http::impl::auth::DigestScheme::isComplete()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

local_ref< java::lang::String > org::apache::http::impl::auth::DigestScheme::getSchemeName()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

cpp_boolean org::apache::http::impl::auth::DigestScheme::isConnectionBased()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

void org::apache::http::impl::auth::DigestScheme::overrideParamter(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< org::apache::http::Header > org::apache::http::impl::auth::DigestScheme::authenticate(local_ref< org::apache::http::auth::Credentials > const &a0, local_ref< org::apache::http::HttpRequest > const &a1)
{
	return local_ref< org::apache::http::Header >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::lang::String > org::apache::http::impl::auth::DigestScheme::createCnonce()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), true>()
		)
	);
}


J2CPP_DEFINE_CLASS(org::apache::http::impl::auth::DigestScheme,"org/apache/http/impl/auth/DigestScheme")
J2CPP_DEFINE_METHOD(org::apache::http::impl::auth::DigestScheme,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::auth::DigestScheme,1,"processChallenge","(Lorg/apache/http/Header;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::auth::DigestScheme,2,"isComplete","()Z")
J2CPP_DEFINE_METHOD(org::apache::http::impl::auth::DigestScheme,3,"getSchemeName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::auth::DigestScheme,4,"isConnectionBased","()Z")
J2CPP_DEFINE_METHOD(org::apache::http::impl::auth::DigestScheme,5,"overrideParamter","(Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::auth::DigestScheme,6,"authenticate","(Lorg/apache/http/auth/Credentials;Lorg/apache/http/HttpRequest;)Lorg/apache/http/Header;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::auth::DigestScheme,7,"createCnonce","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_AUTH_DIGESTSCHEME_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
