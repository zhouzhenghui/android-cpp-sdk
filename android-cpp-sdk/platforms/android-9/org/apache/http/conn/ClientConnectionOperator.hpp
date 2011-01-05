/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.conn.ClientConnectionOperator
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CONN_CLIENTCONNECTIONOPERATOR_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_CONN_CLIENTCONNECTIONOPERATOR_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace net { class InetAddress; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpHost; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace conn { class OperatedClientConnection; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace protocol { class HttpContext; } } } } }


#include <java/lang/Object.hpp>
#include <java/net/InetAddress.hpp>
#include <org/apache/http/HttpHost.hpp>
#include <org/apache/http/conn/OperatedClientConnection.hpp>
#include <org/apache/http/params/HttpParams.hpp>
#include <org/apache/http/protocol/HttpContext.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace conn {

	class ClientConnectionOperator;
	class ClientConnectionOperator
		: public object<ClientConnectionOperator>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit ClientConnectionOperator(jobject jobj)
		: object<ClientConnectionOperator>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< org::apache::http::conn::OperatedClientConnection > createConnection();
		void openConnection(local_ref< org::apache::http::conn::OperatedClientConnection >  const&, local_ref< org::apache::http::HttpHost >  const&, local_ref< java::net::InetAddress >  const&, local_ref< org::apache::http::protocol::HttpContext >  const&, local_ref< org::apache::http::params::HttpParams >  const&);
		void updateSecureConnection(local_ref< org::apache::http::conn::OperatedClientConnection >  const&, local_ref< org::apache::http::HttpHost >  const&, local_ref< org::apache::http::protocol::HttpContext >  const&, local_ref< org::apache::http::params::HttpParams >  const&);
	}; //class ClientConnectionOperator

} //namespace conn
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CONN_CLIENTCONNECTIONOPERATOR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CONN_CLIENTCONNECTIONOPERATOR_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_CONN_CLIENTCONNECTIONOPERATOR_HPP_IMPL

namespace j2cpp {



org::apache::http::conn::ClientConnectionOperator::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

local_ref< org::apache::http::conn::OperatedClientConnection > org::apache::http::conn::ClientConnectionOperator::createConnection()
{
	return call_method<
		org::apache::http::conn::ClientConnectionOperator::J2CPP_CLASS_NAME,
		org::apache::http::conn::ClientConnectionOperator::J2CPP_METHOD_NAME(0),
		org::apache::http::conn::ClientConnectionOperator::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< org::apache::http::conn::OperatedClientConnection >
	>(get_jobject());
}

void org::apache::http::conn::ClientConnectionOperator::openConnection(local_ref< org::apache::http::conn::OperatedClientConnection > const &a0, local_ref< org::apache::http::HttpHost > const &a1, local_ref< java::net::InetAddress > const &a2, local_ref< org::apache::http::protocol::HttpContext > const &a3, local_ref< org::apache::http::params::HttpParams > const &a4)
{
	return call_method<
		org::apache::http::conn::ClientConnectionOperator::J2CPP_CLASS_NAME,
		org::apache::http::conn::ClientConnectionOperator::J2CPP_METHOD_NAME(1),
		org::apache::http::conn::ClientConnectionOperator::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject(), a0, a1, a2, a3, a4);
}

void org::apache::http::conn::ClientConnectionOperator::updateSecureConnection(local_ref< org::apache::http::conn::OperatedClientConnection > const &a0, local_ref< org::apache::http::HttpHost > const &a1, local_ref< org::apache::http::protocol::HttpContext > const &a2, local_ref< org::apache::http::params::HttpParams > const &a3)
{
	return call_method<
		org::apache::http::conn::ClientConnectionOperator::J2CPP_CLASS_NAME,
		org::apache::http::conn::ClientConnectionOperator::J2CPP_METHOD_NAME(2),
		org::apache::http::conn::ClientConnectionOperator::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject(), a0, a1, a2, a3);
}


J2CPP_DEFINE_CLASS(org::apache::http::conn::ClientConnectionOperator,"org/apache/http/conn/ClientConnectionOperator")
J2CPP_DEFINE_METHOD(org::apache::http::conn::ClientConnectionOperator,0,"createConnection","()Lorg/apache/http/conn/OperatedClientConnection;")
J2CPP_DEFINE_METHOD(org::apache::http::conn::ClientConnectionOperator,1,"openConnection","(Lorg/apache/http/conn/OperatedClientConnection;Lorg/apache/http/HttpHost;Ljava/net/InetAddress;Lorg/apache/http/protocol/HttpContext;Lorg/apache/http/params/HttpParams;)V")
J2CPP_DEFINE_METHOD(org::apache::http::conn::ClientConnectionOperator,2,"updateSecureConnection","(Lorg/apache/http/conn/OperatedClientConnection;Lorg/apache/http/HttpHost;Lorg/apache/http/protocol/HttpContext;Lorg/apache/http/params/HttpParams;)V")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CONN_CLIENTCONNECTIONOPERATOR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
