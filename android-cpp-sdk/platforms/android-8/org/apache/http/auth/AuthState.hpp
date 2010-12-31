/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.auth.AuthState
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_AUTH_AUTHSTATE_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_AUTH_AUTHSTATE_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { namespace auth { class AuthScope; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace auth { class Credentials; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace auth { class AuthScheme; } } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/apache/http/auth/AuthScheme.hpp>
#include <org/apache/http/auth/AuthScope.hpp>
#include <org/apache/http/auth/Credentials.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace auth {

	class AuthState;
	class AuthState
		: public object<AuthState>
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

		explicit AuthState(jobject jobj)
		: object<AuthState>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		AuthState();
		void invalidate();
		jboolean isValid();
		void setAuthScheme(local_ref< org::apache::http::auth::AuthScheme >  const&);
		local_ref< org::apache::http::auth::AuthScheme > getAuthScheme();
		local_ref< org::apache::http::auth::Credentials > getCredentials();
		void setCredentials(local_ref< org::apache::http::auth::Credentials >  const&);
		local_ref< org::apache::http::auth::AuthScope > getAuthScope();
		void setAuthScope(local_ref< org::apache::http::auth::AuthScope >  const&);
		local_ref< java::lang::String > toString();
	}; //class AuthState

} //namespace auth
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_AUTH_AUTHSTATE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_AUTH_AUTHSTATE_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_AUTH_AUTHSTATE_HPP_IMPL

namespace j2cpp {



org::apache::http::auth::AuthState::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


org::apache::http::auth::AuthState::AuthState()
: object<org::apache::http::auth::AuthState>(
	call_new_object<
		org::apache::http::auth::AuthState::J2CPP_CLASS_NAME,
		org::apache::http::auth::AuthState::J2CPP_METHOD_NAME(0),
		org::apache::http::auth::AuthState::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}


void org::apache::http::auth::AuthState::invalidate()
{
	return call_method<
		org::apache::http::auth::AuthState::J2CPP_CLASS_NAME,
		org::apache::http::auth::AuthState::J2CPP_METHOD_NAME(1),
		org::apache::http::auth::AuthState::J2CPP_METHOD_SIGNATURE(1), 
		void >
	(get_jobject());
}

jboolean org::apache::http::auth::AuthState::isValid()
{
	return call_method<
		org::apache::http::auth::AuthState::J2CPP_CLASS_NAME,
		org::apache::http::auth::AuthState::J2CPP_METHOD_NAME(2),
		org::apache::http::auth::AuthState::J2CPP_METHOD_SIGNATURE(2), 
		jboolean >
	(get_jobject());
}

void org::apache::http::auth::AuthState::setAuthScheme(local_ref< org::apache::http::auth::AuthScheme > const &a0)
{
	return call_method<
		org::apache::http::auth::AuthState::J2CPP_CLASS_NAME,
		org::apache::http::auth::AuthState::J2CPP_METHOD_NAME(3),
		org::apache::http::auth::AuthState::J2CPP_METHOD_SIGNATURE(3), 
		void >
	(get_jobject(), a0);
}

local_ref< org::apache::http::auth::AuthScheme > org::apache::http::auth::AuthState::getAuthScheme()
{
	return call_method<
		org::apache::http::auth::AuthState::J2CPP_CLASS_NAME,
		org::apache::http::auth::AuthState::J2CPP_METHOD_NAME(4),
		org::apache::http::auth::AuthState::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< org::apache::http::auth::AuthScheme > >
	(get_jobject());
}

local_ref< org::apache::http::auth::Credentials > org::apache::http::auth::AuthState::getCredentials()
{
	return call_method<
		org::apache::http::auth::AuthState::J2CPP_CLASS_NAME,
		org::apache::http::auth::AuthState::J2CPP_METHOD_NAME(5),
		org::apache::http::auth::AuthState::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< org::apache::http::auth::Credentials > >
	(get_jobject());
}

void org::apache::http::auth::AuthState::setCredentials(local_ref< org::apache::http::auth::Credentials > const &a0)
{
	return call_method<
		org::apache::http::auth::AuthState::J2CPP_CLASS_NAME,
		org::apache::http::auth::AuthState::J2CPP_METHOD_NAME(6),
		org::apache::http::auth::AuthState::J2CPP_METHOD_SIGNATURE(6), 
		void >
	(get_jobject(), a0);
}

local_ref< org::apache::http::auth::AuthScope > org::apache::http::auth::AuthState::getAuthScope()
{
	return call_method<
		org::apache::http::auth::AuthState::J2CPP_CLASS_NAME,
		org::apache::http::auth::AuthState::J2CPP_METHOD_NAME(7),
		org::apache::http::auth::AuthState::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< org::apache::http::auth::AuthScope > >
	(get_jobject());
}

void org::apache::http::auth::AuthState::setAuthScope(local_ref< org::apache::http::auth::AuthScope > const &a0)
{
	return call_method<
		org::apache::http::auth::AuthState::J2CPP_CLASS_NAME,
		org::apache::http::auth::AuthState::J2CPP_METHOD_NAME(8),
		org::apache::http::auth::AuthState::J2CPP_METHOD_SIGNATURE(8), 
		void >
	(get_jobject(), a0);
}

local_ref< java::lang::String > org::apache::http::auth::AuthState::toString()
{
	return call_method<
		org::apache::http::auth::AuthState::J2CPP_CLASS_NAME,
		org::apache::http::auth::AuthState::J2CPP_METHOD_NAME(9),
		org::apache::http::auth::AuthState::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< java::lang::String > >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(org::apache::http::auth::AuthState,"org/apache/http/auth/AuthState")
J2CPP_DEFINE_METHOD(org::apache::http::auth::AuthState,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::auth::AuthState,1,"invalidate","()V")
J2CPP_DEFINE_METHOD(org::apache::http::auth::AuthState,2,"isValid","()Z")
J2CPP_DEFINE_METHOD(org::apache::http::auth::AuthState,3,"setAuthScheme","(Lorg/apache/http/auth/AuthScheme;)V")
J2CPP_DEFINE_METHOD(org::apache::http::auth::AuthState,4,"getAuthScheme","()Lorg/apache/http/auth/AuthScheme;")
J2CPP_DEFINE_METHOD(org::apache::http::auth::AuthState,5,"getCredentials","()Lorg/apache/http/auth/Credentials;")
J2CPP_DEFINE_METHOD(org::apache::http::auth::AuthState,6,"setCredentials","(Lorg/apache/http/auth/Credentials;)V")
J2CPP_DEFINE_METHOD(org::apache::http::auth::AuthState,7,"getAuthScope","()Lorg/apache/http/auth/AuthScope;")
J2CPP_DEFINE_METHOD(org::apache::http::auth::AuthState,8,"setAuthScope","(Lorg/apache/http/auth/AuthScope;)V")
J2CPP_DEFINE_METHOD(org::apache::http::auth::AuthState,9,"toString","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_AUTH_AUTHSTATE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
