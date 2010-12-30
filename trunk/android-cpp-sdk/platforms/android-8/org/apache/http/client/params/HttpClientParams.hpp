/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.client.params.HttpClientParams
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CLIENT_PARAMS_HTTPCLIENTPARAMS_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_CLIENT_PARAMS_HTTPCLIENTPARAMS_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/String.hpp>
#include <org/apache/http/params/HttpParams.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace client { namespace params {

	class HttpClientParams;
	class HttpClientParams
		: public cpp_object<HttpClientParams>
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

		HttpClientParams(jobject jobj)
		: cpp_object<HttpClientParams>(jobj)
		{
		}

		static cpp_boolean isRedirecting(local_ref< org::apache::http::params::HttpParams > const&);
		static void setRedirecting(local_ref< org::apache::http::params::HttpParams > const&, cpp_boolean const&);
		static cpp_boolean isAuthenticating(local_ref< org::apache::http::params::HttpParams > const&);
		static void setAuthenticating(local_ref< org::apache::http::params::HttpParams > const&, cpp_boolean const&);
		static local_ref< java::lang::String > getCookiePolicy(local_ref< org::apache::http::params::HttpParams > const&);
		static void setCookiePolicy(local_ref< org::apache::http::params::HttpParams > const&, local_ref< java::lang::String > const&);
	}; //class HttpClientParams

} //namespace params
} //namespace client
} //namespace http
} //namespace apache
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CLIENT_PARAMS_HTTPCLIENTPARAMS_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CLIENT_PARAMS_HTTPCLIENTPARAMS_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_CLIENT_PARAMS_HTTPCLIENTPARAMS_HPP_IMPL

namespace j2cpp {


template <>
local_ref< org::apache::http::client::params::HttpClientParams > create< org::apache::http::client::params::HttpClientParams>()
{
	return local_ref< org::apache::http::client::params::HttpClientParams >(
		environment::get().get_jenv()->NewObject(
			get_class<org::apache::http::client::params::HttpClientParams::J2CPP_CLASS_NAME>(),
			get_method_id<org::apache::http::client::params::HttpClientParams::J2CPP_CLASS_NAME, org::apache::http::client::params::HttpClientParams::J2CPP_METHOD_NAME(0), org::apache::http::client::params::HttpClientParams::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

cpp_boolean org::apache::http::client::params::HttpClientParams::isRedirecting(local_ref< org::apache::http::params::HttpParams > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallStaticBooleanMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), true>(),
			a0.get_jtype()
		)
	);
}

void org::apache::http::client::params::HttpClientParams::setRedirecting(local_ref< org::apache::http::params::HttpParams > const &a0, cpp_boolean const &a1)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean org::apache::http::client::params::HttpClientParams::isAuthenticating(local_ref< org::apache::http::params::HttpParams > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallStaticBooleanMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), true>(),
			a0.get_jtype()
		)
	);
}

void org::apache::http::client::params::HttpClientParams::setAuthenticating(local_ref< org::apache::http::params::HttpParams > const &a0, cpp_boolean const &a1)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::lang::String > org::apache::http::client::params::HttpClientParams::getCookiePolicy(local_ref< org::apache::http::params::HttpParams > const &a0)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), true>(),
			a0.get_jtype()
		)
	);
}

void org::apache::http::client::params::HttpClientParams::setCookiePolicy(local_ref< org::apache::http::params::HttpParams > const &a0, local_ref< java::lang::String > const &a1)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(org::apache::http::client::params::HttpClientParams,"org/apache/http/client/params/HttpClientParams")
J2CPP_DEFINE_METHOD(org::apache::http::client::params::HttpClientParams,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::client::params::HttpClientParams,1,"isRedirecting","(Lorg/apache/http/params/HttpParams;)Z")
J2CPP_DEFINE_METHOD(org::apache::http::client::params::HttpClientParams,2,"setRedirecting","(Lorg/apache/http/params/HttpParams;Z)V")
J2CPP_DEFINE_METHOD(org::apache::http::client::params::HttpClientParams,3,"isAuthenticating","(Lorg/apache/http/params/HttpParams;)Z")
J2CPP_DEFINE_METHOD(org::apache::http::client::params::HttpClientParams,4,"setAuthenticating","(Lorg/apache/http/params/HttpParams;Z)V")
J2CPP_DEFINE_METHOD(org::apache::http::client::params::HttpClientParams,5,"getCookiePolicy","(Lorg/apache/http/params/HttpParams;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::client::params::HttpClientParams,6,"setCookiePolicy","(Lorg/apache/http/params/HttpParams;Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CLIENT_PARAMS_HTTPCLIENTPARAMS_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION