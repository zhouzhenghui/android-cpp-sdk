/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.conn.ssl.AllowAllHostnameVerifier
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CONN_SSL_ALLOWALLHOSTNAMEVERIFIER_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_CONN_SSL_ALLOWALLHOSTNAMEVERIFIER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace javax { namespace net { namespace ssl { class HostnameVerifier; } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace conn { namespace ssl { class X509HostnameVerifier; } } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace conn { namespace ssl { class AbstractVerifier; } } } } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <javax/net/ssl/HostnameVerifier.hpp>
#include <org/apache/http/conn/ssl/AbstractVerifier.hpp>
#include <org/apache/http/conn/ssl/X509HostnameVerifier.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace conn { namespace ssl {

	class AllowAllHostnameVerifier;
	class AllowAllHostnameVerifier
		: public object<AllowAllHostnameVerifier>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit AllowAllHostnameVerifier(jobject jobj)
		: object<AllowAllHostnameVerifier>(jobj)
		{
		}

		operator local_ref<javax::net::ssl::HostnameVerifier>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::apache::http::conn::ssl::X509HostnameVerifier>() const;
		operator local_ref<org::apache::http::conn::ssl::AbstractVerifier>() const;


		AllowAllHostnameVerifier();
		void verify(local_ref< java::lang::String >  const&, local_ref< array< local_ref< java::lang::String >, 1> >  const&, local_ref< array< local_ref< java::lang::String >, 1> >  const&);
		local_ref< java::lang::String > toString();
	}; //class AllowAllHostnameVerifier

} //namespace ssl
} //namespace conn
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CONN_SSL_ALLOWALLHOSTNAMEVERIFIER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CONN_SSL_ALLOWALLHOSTNAMEVERIFIER_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_CONN_SSL_ALLOWALLHOSTNAMEVERIFIER_HPP_IMPL

namespace j2cpp {



org::apache::http::conn::ssl::AllowAllHostnameVerifier::operator local_ref<javax::net::ssl::HostnameVerifier>() const
{
	return local_ref<javax::net::ssl::HostnameVerifier>(get_jobject());
}

org::apache::http::conn::ssl::AllowAllHostnameVerifier::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::apache::http::conn::ssl::AllowAllHostnameVerifier::operator local_ref<org::apache::http::conn::ssl::X509HostnameVerifier>() const
{
	return local_ref<org::apache::http::conn::ssl::X509HostnameVerifier>(get_jobject());
}

org::apache::http::conn::ssl::AllowAllHostnameVerifier::operator local_ref<org::apache::http::conn::ssl::AbstractVerifier>() const
{
	return local_ref<org::apache::http::conn::ssl::AbstractVerifier>(get_jobject());
}


org::apache::http::conn::ssl::AllowAllHostnameVerifier::AllowAllHostnameVerifier()
: object<org::apache::http::conn::ssl::AllowAllHostnameVerifier>(
	call_new_object<
		org::apache::http::conn::ssl::AllowAllHostnameVerifier::J2CPP_CLASS_NAME,
		org::apache::http::conn::ssl::AllowAllHostnameVerifier::J2CPP_METHOD_NAME(0),
		org::apache::http::conn::ssl::AllowAllHostnameVerifier::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


void org::apache::http::conn::ssl::AllowAllHostnameVerifier::verify(local_ref< java::lang::String > const &a0, local_ref< array< local_ref< java::lang::String >, 1> > const &a1, local_ref< array< local_ref< java::lang::String >, 1> > const &a2)
{
	return call_method<
		org::apache::http::conn::ssl::AllowAllHostnameVerifier::J2CPP_CLASS_NAME,
		org::apache::http::conn::ssl::AllowAllHostnameVerifier::J2CPP_METHOD_NAME(1),
		org::apache::http::conn::ssl::AllowAllHostnameVerifier::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject(), a0, a1, a2);
}

local_ref< java::lang::String > org::apache::http::conn::ssl::AllowAllHostnameVerifier::toString()
{
	return call_method<
		org::apache::http::conn::ssl::AllowAllHostnameVerifier::J2CPP_CLASS_NAME,
		org::apache::http::conn::ssl::AllowAllHostnameVerifier::J2CPP_METHOD_NAME(2),
		org::apache::http::conn::ssl::AllowAllHostnameVerifier::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::String >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(org::apache::http::conn::ssl::AllowAllHostnameVerifier,"org/apache/http/conn/ssl/AllowAllHostnameVerifier")
J2CPP_DEFINE_METHOD(org::apache::http::conn::ssl::AllowAllHostnameVerifier,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::conn::ssl::AllowAllHostnameVerifier,1,"verify","(Ljava/lang/String;[java.lang.String[java.lang.String)V")
J2CPP_DEFINE_METHOD(org::apache::http::conn::ssl::AllowAllHostnameVerifier,2,"toString","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CONN_SSL_ALLOWALLHOSTNAMEVERIFIER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
