/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.conn.ssl.AbstractVerifier
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CONN_SSL_ABSTRACTVERIFIER_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_CONN_SSL_ABSTRACTVERIFIER_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { namespace conn { namespace ssl { class X509HostnameVerifier; } } } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace security { namespace cert { class X509Certificate; } } } }
namespace j2cpp { namespace javax { namespace net { namespace ssl { class HostnameVerifier; } } } }
namespace j2cpp { namespace javax { namespace net { namespace ssl { class SSLSocket; } } } }
namespace j2cpp { namespace javax { namespace net { namespace ssl { class SSLSession; } } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/security/cert/X509Certificate.hpp>
#include <javax/net/ssl/HostnameVerifier.hpp>
#include <javax/net/ssl/SSLSession.hpp>
#include <javax/net/ssl/SSLSocket.hpp>
#include <org/apache/http/conn/ssl/X509HostnameVerifier.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace conn { namespace ssl {

	class AbstractVerifier;
	class AbstractVerifier
		: public object<AbstractVerifier>
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

		explicit AbstractVerifier(jobject jobj)
		: object<AbstractVerifier>(jobj)
		{
		}

		operator local_ref<org::apache::http::conn::ssl::X509HostnameVerifier>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<javax::net::ssl::HostnameVerifier>() const;


		AbstractVerifier();
		void verify(local_ref< java::lang::String >  const&, local_ref< javax::net::ssl::SSLSocket >  const&);
		jboolean verify(local_ref< java::lang::String >  const&, local_ref< javax::net::ssl::SSLSession >  const&);
		void verify(local_ref< java::lang::String >  const&, local_ref< java::security::cert::X509Certificate >  const&);
		void verify(local_ref< java::lang::String >  const&, local_ref< array< local_ref< java::lang::String >, 1> >  const&, local_ref< array< local_ref< java::lang::String >, 1> >  const&, jboolean);
		static jboolean acceptableCountryWildcard(local_ref< java::lang::String >  const&);
		static local_ref< array< local_ref< java::lang::String >, 1> > getCNs(local_ref< java::security::cert::X509Certificate >  const&);
		static local_ref< array< local_ref< java::lang::String >, 1> > getDNSSubjectAlts(local_ref< java::security::cert::X509Certificate >  const&);
		static jint countDots(local_ref< java::lang::String >  const&);
	}; //class AbstractVerifier

} //namespace ssl
} //namespace conn
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CONN_SSL_ABSTRACTVERIFIER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CONN_SSL_ABSTRACTVERIFIER_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_CONN_SSL_ABSTRACTVERIFIER_HPP_IMPL

namespace j2cpp {



org::apache::http::conn::ssl::AbstractVerifier::operator local_ref<org::apache::http::conn::ssl::X509HostnameVerifier>() const
{
	return local_ref<org::apache::http::conn::ssl::X509HostnameVerifier>(get_jobject());
}

org::apache::http::conn::ssl::AbstractVerifier::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::apache::http::conn::ssl::AbstractVerifier::operator local_ref<javax::net::ssl::HostnameVerifier>() const
{
	return local_ref<javax::net::ssl::HostnameVerifier>(get_jobject());
}


org::apache::http::conn::ssl::AbstractVerifier::AbstractVerifier()
: object<org::apache::http::conn::ssl::AbstractVerifier>(
	call_new_object<
		org::apache::http::conn::ssl::AbstractVerifier::J2CPP_CLASS_NAME,
		org::apache::http::conn::ssl::AbstractVerifier::J2CPP_METHOD_NAME(0),
		org::apache::http::conn::ssl::AbstractVerifier::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


void org::apache::http::conn::ssl::AbstractVerifier::verify(local_ref< java::lang::String > const &a0, local_ref< javax::net::ssl::SSLSocket > const &a1)
{
	return call_method<
		org::apache::http::conn::ssl::AbstractVerifier::J2CPP_CLASS_NAME,
		org::apache::http::conn::ssl::AbstractVerifier::J2CPP_METHOD_NAME(1),
		org::apache::http::conn::ssl::AbstractVerifier::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject(), a0, a1);
}

jboolean org::apache::http::conn::ssl::AbstractVerifier::verify(local_ref< java::lang::String > const &a0, local_ref< javax::net::ssl::SSLSession > const &a1)
{
	return call_method<
		org::apache::http::conn::ssl::AbstractVerifier::J2CPP_CLASS_NAME,
		org::apache::http::conn::ssl::AbstractVerifier::J2CPP_METHOD_NAME(2),
		org::apache::http::conn::ssl::AbstractVerifier::J2CPP_METHOD_SIGNATURE(2), 
		jboolean
	>(get_jobject(), a0, a1);
}

void org::apache::http::conn::ssl::AbstractVerifier::verify(local_ref< java::lang::String > const &a0, local_ref< java::security::cert::X509Certificate > const &a1)
{
	return call_method<
		org::apache::http::conn::ssl::AbstractVerifier::J2CPP_CLASS_NAME,
		org::apache::http::conn::ssl::AbstractVerifier::J2CPP_METHOD_NAME(3),
		org::apache::http::conn::ssl::AbstractVerifier::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0, a1);
}

void org::apache::http::conn::ssl::AbstractVerifier::verify(local_ref< java::lang::String > const &a0, local_ref< array< local_ref< java::lang::String >, 1> > const &a1, local_ref< array< local_ref< java::lang::String >, 1> > const &a2, jboolean a3)
{
	return call_method<
		org::apache::http::conn::ssl::AbstractVerifier::J2CPP_CLASS_NAME,
		org::apache::http::conn::ssl::AbstractVerifier::J2CPP_METHOD_NAME(4),
		org::apache::http::conn::ssl::AbstractVerifier::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0, a1, a2, a3);
}

jboolean org::apache::http::conn::ssl::AbstractVerifier::acceptableCountryWildcard(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		org::apache::http::conn::ssl::AbstractVerifier::J2CPP_CLASS_NAME,
		org::apache::http::conn::ssl::AbstractVerifier::J2CPP_METHOD_NAME(5),
		org::apache::http::conn::ssl::AbstractVerifier::J2CPP_METHOD_SIGNATURE(5), 
		jboolean
	>(a0);
}

local_ref< array< local_ref< java::lang::String >, 1> > org::apache::http::conn::ssl::AbstractVerifier::getCNs(local_ref< java::security::cert::X509Certificate > const &a0)
{
	return call_static_method<
		org::apache::http::conn::ssl::AbstractVerifier::J2CPP_CLASS_NAME,
		org::apache::http::conn::ssl::AbstractVerifier::J2CPP_METHOD_NAME(6),
		org::apache::http::conn::ssl::AbstractVerifier::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< array< local_ref< java::lang::String >, 1> >
	>(a0);
}

local_ref< array< local_ref< java::lang::String >, 1> > org::apache::http::conn::ssl::AbstractVerifier::getDNSSubjectAlts(local_ref< java::security::cert::X509Certificate > const &a0)
{
	return call_static_method<
		org::apache::http::conn::ssl::AbstractVerifier::J2CPP_CLASS_NAME,
		org::apache::http::conn::ssl::AbstractVerifier::J2CPP_METHOD_NAME(7),
		org::apache::http::conn::ssl::AbstractVerifier::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< array< local_ref< java::lang::String >, 1> >
	>(a0);
}

jint org::apache::http::conn::ssl::AbstractVerifier::countDots(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		org::apache::http::conn::ssl::AbstractVerifier::J2CPP_CLASS_NAME,
		org::apache::http::conn::ssl::AbstractVerifier::J2CPP_METHOD_NAME(8),
		org::apache::http::conn::ssl::AbstractVerifier::J2CPP_METHOD_SIGNATURE(8), 
		jint
	>(a0);
}


J2CPP_DEFINE_CLASS(org::apache::http::conn::ssl::AbstractVerifier,"org/apache/http/conn/ssl/AbstractVerifier")
J2CPP_DEFINE_METHOD(org::apache::http::conn::ssl::AbstractVerifier,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::conn::ssl::AbstractVerifier,1,"verify","(Ljava/lang/String;Ljavax/net/ssl/SSLSocket;)V")
J2CPP_DEFINE_METHOD(org::apache::http::conn::ssl::AbstractVerifier,2,"verify","(Ljava/lang/String;Ljavax/net/ssl/SSLSession;)Z")
J2CPP_DEFINE_METHOD(org::apache::http::conn::ssl::AbstractVerifier,3,"verify","(Ljava/lang/String;Ljava/security/cert/X509Certificate;)V")
J2CPP_DEFINE_METHOD(org::apache::http::conn::ssl::AbstractVerifier,4,"verify","(Ljava/lang/String;[java.lang.String[java.lang.StringZ)V")
J2CPP_DEFINE_METHOD(org::apache::http::conn::ssl::AbstractVerifier,5,"acceptableCountryWildcard","(Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(org::apache::http::conn::ssl::AbstractVerifier,6,"getCNs","(Ljava/security/cert/X509Certificate;)[java.lang.String")
J2CPP_DEFINE_METHOD(org::apache::http::conn::ssl::AbstractVerifier,7,"getDNSSubjectAlts","(Ljava/security/cert/X509Certificate;)[java.lang.String")
J2CPP_DEFINE_METHOD(org::apache::http::conn::ssl::AbstractVerifier,8,"countDots","(Ljava/lang/String;)I")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CONN_SSL_ABSTRACTVERIFIER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
