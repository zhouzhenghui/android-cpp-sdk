/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.impl.conn.tsccm.ThreadSafeClientConnManager
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_THREADSAFECLIENTCONNMANAGER_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_THREADSAFECLIENTCONNMANAGER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { namespace concurrent { class TimeUnit; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace conn { namespace routing { class HttpRoute; } } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace conn { class ClientConnectionRequest; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace conn { class ClientConnectionManager; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace conn { class ManagedClientConnection; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace conn { namespace scheme { class SchemeRegistry; } } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } } }


#include <java/lang/Object.hpp>
#include <java/util/concurrent/TimeUnit.hpp>
#include <org/apache/http/conn/ClientConnectionManager.hpp>
#include <org/apache/http/conn/ClientConnectionRequest.hpp>
#include <org/apache/http/conn/ManagedClientConnection.hpp>
#include <org/apache/http/conn/routing/HttpRoute.hpp>
#include <org/apache/http/conn/scheme/SchemeRegistry.hpp>
#include <org/apache/http/params/HttpParams.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl { namespace conn { namespace tsccm {

	class ThreadSafeClientConnManager;
	class ThreadSafeClientConnManager
		: public object<ThreadSafeClientConnManager>
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
		J2CPP_DECLARE_METHOD(10)
		J2CPP_DECLARE_METHOD(11)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)

		explicit ThreadSafeClientConnManager(jobject jobj)
		: object<ThreadSafeClientConnManager>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::apache::http::conn::ClientConnectionManager>() const;


		ThreadSafeClientConnManager(local_ref< org::apache::http::params::HttpParams > const&, local_ref< org::apache::http::conn::scheme::SchemeRegistry > const&);
		local_ref< org::apache::http::conn::scheme::SchemeRegistry > getSchemeRegistry();
		local_ref< org::apache::http::conn::ClientConnectionRequest > requestConnection(local_ref< org::apache::http::conn::routing::HttpRoute >  const&, local_ref< java::lang::Object >  const&);
		void releaseConnection(local_ref< org::apache::http::conn::ManagedClientConnection >  const&, jlong, local_ref< java::util::concurrent::TimeUnit >  const&);
		void shutdown();
		jint getConnectionsInPool(local_ref< org::apache::http::conn::routing::HttpRoute >  const&);
		jint getConnectionsInPool();
		void closeIdleConnections(jlong, local_ref< java::util::concurrent::TimeUnit >  const&);
		void closeExpiredConnections();

	}; //class ThreadSafeClientConnManager

} //namespace tsccm
} //namespace conn
} //namespace impl
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_THREADSAFECLIENTCONNMANAGER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_THREADSAFECLIENTCONNMANAGER_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_THREADSAFECLIENTCONNMANAGER_HPP_IMPL

namespace j2cpp {



org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager::operator local_ref<org::apache::http::conn::ClientConnectionManager>() const
{
	return local_ref<org::apache::http::conn::ClientConnectionManager>(get_jobject());
}


org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager::ThreadSafeClientConnManager(local_ref< org::apache::http::params::HttpParams > const &a0, local_ref< org::apache::http::conn::scheme::SchemeRegistry > const &a1)
: object<org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager>(
	call_new_object<
		org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager::J2CPP_CLASS_NAME,
		org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager::J2CPP_METHOD_NAME(0),
		org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1)
)
{
}





local_ref< org::apache::http::conn::scheme::SchemeRegistry > org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager::getSchemeRegistry()
{
	return call_method<
		org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager::J2CPP_CLASS_NAME,
		org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager::J2CPP_METHOD_NAME(4),
		org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< org::apache::http::conn::scheme::SchemeRegistry >
	>(get_jobject());
}

local_ref< org::apache::http::conn::ClientConnectionRequest > org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager::requestConnection(local_ref< org::apache::http::conn::routing::HttpRoute > const &a0, local_ref< java::lang::Object > const &a1)
{
	return call_method<
		org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager::J2CPP_CLASS_NAME,
		org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager::J2CPP_METHOD_NAME(5),
		org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< org::apache::http::conn::ClientConnectionRequest >
	>(get_jobject(), a0, a1);
}

void org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager::releaseConnection(local_ref< org::apache::http::conn::ManagedClientConnection > const &a0, jlong a1, local_ref< java::util::concurrent::TimeUnit > const &a2)
{
	return call_method<
		org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager::J2CPP_CLASS_NAME,
		org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager::J2CPP_METHOD_NAME(6),
		org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject(), a0, a1, a2);
}

void org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager::shutdown()
{
	return call_method<
		org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager::J2CPP_CLASS_NAME,
		org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager::J2CPP_METHOD_NAME(7),
		org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager::J2CPP_METHOD_SIGNATURE(7), 
		void
	>(get_jobject());
}

jint org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager::getConnectionsInPool(local_ref< org::apache::http::conn::routing::HttpRoute > const &a0)
{
	return call_method<
		org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager::J2CPP_CLASS_NAME,
		org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager::J2CPP_METHOD_NAME(8),
		org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager::J2CPP_METHOD_SIGNATURE(8), 
		jint
	>(get_jobject(), a0);
}

jint org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager::getConnectionsInPool()
{
	return call_method<
		org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager::J2CPP_CLASS_NAME,
		org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager::J2CPP_METHOD_NAME(9),
		org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager::J2CPP_METHOD_SIGNATURE(9), 
		jint
	>(get_jobject());
}

void org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager::closeIdleConnections(jlong a0, local_ref< java::util::concurrent::TimeUnit > const &a1)
{
	return call_method<
		org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager::J2CPP_CLASS_NAME,
		org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager::J2CPP_METHOD_NAME(10),
		org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager::J2CPP_METHOD_SIGNATURE(10), 
		void
	>(get_jobject(), a0, a1);
}

void org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager::closeExpiredConnections()
{
	return call_method<
		org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager::J2CPP_CLASS_NAME,
		org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager::J2CPP_METHOD_NAME(11),
		org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager::J2CPP_METHOD_SIGNATURE(11), 
		void
	>(get_jobject());
}



J2CPP_DEFINE_CLASS(org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager,"org/apache/http/impl/conn/tsccm/ThreadSafeClientConnManager")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager,0,"<init>","(Lorg/apache/http/params/HttpParams;Lorg/apache/http/conn/scheme/SchemeRegistry;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager,1,"finalize","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager,2,"createConnectionPool","(Lorg/apache/http/params/HttpParams;)Lorg/apache/http/impl/conn/tsccm/AbstractConnPool;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager,3,"createConnectionOperator","(Lorg/apache/http/conn/scheme/SchemeRegistry;)Lorg/apache/http/conn/ClientConnectionOperator;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager,4,"getSchemeRegistry","()Lorg/apache/http/conn/scheme/SchemeRegistry;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager,5,"requestConnection","(Lorg/apache/http/conn/routing/HttpRoute;Ljava/lang/Object;)Lorg/apache/http/conn/ClientConnectionRequest;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager,6,"releaseConnection","(Lorg/apache/http/conn/ManagedClientConnection;JLjava/util/concurrent/TimeUnit;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager,7,"shutdown","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager,8,"getConnectionsInPool","(Lorg/apache/http/conn/routing/HttpRoute;)I")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager,9,"getConnectionsInPool","()I")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager,10,"closeIdleConnections","(JLjava/util/concurrent/TimeUnit;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager,11,"closeExpiredConnections","()V")
J2CPP_DEFINE_FIELD(org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager,0,"schemeRegistry","Lorg/apache/http/conn/scheme/SchemeRegistry;")
J2CPP_DEFINE_FIELD(org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager,1,"connectionPool","Lorg/apache/http/impl/conn/tsccm/AbstractConnPool;")
J2CPP_DEFINE_FIELD(org::apache::http::impl::conn::tsccm::ThreadSafeClientConnManager,2,"connOperator","Lorg/apache/http/conn/ClientConnectionOperator;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_THREADSAFECLIENTCONNMANAGER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION