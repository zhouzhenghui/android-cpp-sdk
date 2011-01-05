/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.conn.ssl.X509HostnameVerifier
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CONN_SSL_X509HOSTNAMEVERIFIER_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_CONN_SSL_X509HOSTNAMEVERIFIER_HPP_DECL


namespace j2cpp { namespace java { namespace security { namespace cert { class X509Certificate; } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace javax { namespace net { namespace ssl { class HostnameVerifier; } } } }
namespace j2cpp { namespace javax { namespace net { namespace ssl { class SSLSession; } } } }
namespace j2cpp { namespace javax { namespace net { namespace ssl { class SSLSocket; } } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/security/cert/X509Certificate.hpp>
#include <javax/net/ssl/HostnameVerifier.hpp>
#include <javax/net/ssl/SSLSession.hpp>
#include <javax/net/ssl/SSLSocket.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace conn { namespace ssl {

	class X509HostnameVerifier;
	class X509HostnameVerifier
		: public object<X509HostnameVerifier>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		explicit X509HostnameVerifier(jobject jobj)
		: object<X509HostnameVerifier>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<javax::net::ssl::HostnameVerifier>() const;


		jboolean verify(local_ref< java::lang::String >  const&, local_ref< javax::net::ssl::SSLSession >  const&);
		void verify(local_ref< java::lang::String >  const&, local_ref< javax::net::ssl::SSLSocket >  const&);
		void verify(local_ref< java::lang::String >  const&, local_ref< java::security::cert::X509Certificate >  const&);
		void verify(local_ref< java::lang::String >  const&, local_ref< array< local_ref< java::lang::String >, 1> >  const&, local_ref< array< local_ref< java::lang::String >, 1> >  const&);
	}; //class X509HostnameVerifier

} //namespace ssl
} //namespace conn
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CONN_SSL_X509HOSTNAMEVERIFIER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CONN_SSL_X509HOSTNAMEVERIFIER_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_CONN_SSL_X509HOSTNAMEVERIFIER_HPP_IMPL

namespace j2cpp {



org::apache::http::conn::ssl::X509HostnameVerifier::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::apache::http::conn::ssl::X509HostnameVerifier::operator local_ref<javax::net::ssl::HostnameVerifier>() const
{
	return local_ref<javax::net::ssl::HostnameVerifier>(get_jobject());
}

jboolean org::apache::http::conn::ssl::X509HostnameVerifier::verify(local_ref< java::lang::String > const &a0, local_ref< javax::net::ssl::SSLSession > const &a1)
{
	return call_method<
		org::apache::http::conn::ssl::X509HostnameVerifier::J2CPP_CLASS_NAME,
		org::apache::http::conn::ssl::X509HostnameVerifier::J2CPP_METHOD_NAME(0),
		org::apache::http::conn::ssl::X509HostnameVerifier::J2CPP_METHOD_SIGNATURE(0), 
		jboolean
	>(get_jobject(), a0, a1);
}

void org::apache::http::conn::ssl::X509HostnameVerifier::verify(local_ref< java::lang::String > const &a0, local_ref< javax::net::ssl::SSLSocket > const &a1)
{
	return call_method<
		org::apache::http::conn::ssl::X509HostnameVerifier::J2CPP_CLASS_NAME,
		org::apache::http::conn::ssl::X509HostnameVerifier::J2CPP_METHOD_NAME(1),
		org::apache::http::conn::ssl::X509HostnameVerifier::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject(), a0, a1);
}

void org::apache::http::conn::ssl::X509HostnameVerifier::verify(local_ref< java::lang::String > const &a0, local_ref< java::security::cert::X509Certificate > const &a1)
{
	return call_method<
		org::apache::http::conn::ssl::X509HostnameVerifier::J2CPP_CLASS_NAME,
		org::apache::http::conn::ssl::X509HostnameVerifier::J2CPP_METHOD_NAME(2),
		org::apache::http::conn::ssl::X509HostnameVerifier::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject(), a0, a1);
}

void org::apache::http::conn::ssl::X509HostnameVerifier::verify(local_ref< java::lang::String > const &a0, local_ref< array< local_ref< java::lang::String >, 1> > const &a1, local_ref< array< local_ref< java::lang::String >, 1> > const &a2)
{
	return call_method<
		org::apache::http::conn::ssl::X509HostnameVerifier::J2CPP_CLASS_NAME,
		org::apache::http::conn::ssl::X509HostnameVerifier::J2CPP_METHOD_NAME(3),
		org::apache::http::conn::ssl::X509HostnameVerifier::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0, a1, a2);
}


J2CPP_DEFINE_CLASS(org::apache::http::conn::ssl::X509HostnameVerifier,"org/apache/http/conn/ssl/X509HostnameVerifier")
J2CPP_DEFINE_METHOD(org::apache::http::conn::ssl::X509HostnameVerifier,0,"verify","(Ljava/lang/String;Ljavax/net/ssl/SSLSession;)Z")
J2CPP_DEFINE_METHOD(org::apache::http::conn::ssl::X509HostnameVerifier,1,"verify","(Ljava/lang/String;Ljavax/net/ssl/SSLSocket;)V")
J2CPP_DEFINE_METHOD(org::apache::http::conn::ssl::X509HostnameVerifier,2,"verify","(Ljava/lang/String;Ljava/security/cert/X509Certificate;)V")
J2CPP_DEFINE_METHOD(org::apache::http::conn::ssl::X509HostnameVerifier,3,"verify","(Ljava/lang/String;[java.lang.String[java.lang.String)V")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CONN_SSL_X509HOSTNAMEVERIFIER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
