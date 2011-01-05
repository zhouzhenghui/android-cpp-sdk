/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.conn.params.ConnRouteParams
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CONN_PARAMS_CONNROUTEPARAMS_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_CONN_PARAMS_CONNROUTEPARAMS_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { class HttpHost; } } } }
namespace j2cpp { namespace java { namespace net { class InetAddress; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace conn { namespace routing { class HttpRoute; } } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace conn { namespace params { class ConnRoutePNames; } } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } } }


#include <java/lang/Object.hpp>
#include <java/net/InetAddress.hpp>
#include <org/apache/http/HttpHost.hpp>
#include <org/apache/http/conn/params/ConnRoutePNames.hpp>
#include <org/apache/http/conn/routing/HttpRoute.hpp>
#include <org/apache/http/params/HttpParams.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace conn { namespace params {

	class ConnRouteParams;
	class ConnRouteParams
		: public object<ConnRouteParams>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)

		explicit ConnRouteParams(jobject jobj)
		: object<ConnRouteParams>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::apache::http::conn::params::ConnRoutePNames>() const;


		static local_ref< org::apache::http::HttpHost > getDefaultProxy(local_ref< org::apache::http::params::HttpParams >  const&);
		static void setDefaultProxy(local_ref< org::apache::http::params::HttpParams >  const&, local_ref< org::apache::http::HttpHost >  const&);
		static local_ref< org::apache::http::conn::routing::HttpRoute > getForcedRoute(local_ref< org::apache::http::params::HttpParams >  const&);
		static void setForcedRoute(local_ref< org::apache::http::params::HttpParams >  const&, local_ref< org::apache::http::conn::routing::HttpRoute >  const&);
		static local_ref< java::net::InetAddress > getLocalAddress(local_ref< org::apache::http::params::HttpParams >  const&);
		static void setLocalAddress(local_ref< org::apache::http::params::HttpParams >  const&, local_ref< java::net::InetAddress >  const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< org::apache::http::HttpHost > > NO_HOST;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< org::apache::http::conn::routing::HttpRoute > > NO_ROUTE;
	}; //class ConnRouteParams

} //namespace params
} //namespace conn
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CONN_PARAMS_CONNROUTEPARAMS_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CONN_PARAMS_CONNROUTEPARAMS_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_CONN_PARAMS_CONNROUTEPARAMS_HPP_IMPL

namespace j2cpp {



org::apache::http::conn::params::ConnRouteParams::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::apache::http::conn::params::ConnRouteParams::operator local_ref<org::apache::http::conn::params::ConnRoutePNames>() const
{
	return local_ref<org::apache::http::conn::params::ConnRoutePNames>(get_jobject());
}


local_ref< org::apache::http::HttpHost > org::apache::http::conn::params::ConnRouteParams::getDefaultProxy(local_ref< org::apache::http::params::HttpParams > const &a0)
{
	return call_static_method<
		org::apache::http::conn::params::ConnRouteParams::J2CPP_CLASS_NAME,
		org::apache::http::conn::params::ConnRouteParams::J2CPP_METHOD_NAME(1),
		org::apache::http::conn::params::ConnRouteParams::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< org::apache::http::HttpHost >
	>(a0);
}

void org::apache::http::conn::params::ConnRouteParams::setDefaultProxy(local_ref< org::apache::http::params::HttpParams > const &a0, local_ref< org::apache::http::HttpHost > const &a1)
{
	return call_static_method<
		org::apache::http::conn::params::ConnRouteParams::J2CPP_CLASS_NAME,
		org::apache::http::conn::params::ConnRouteParams::J2CPP_METHOD_NAME(2),
		org::apache::http::conn::params::ConnRouteParams::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(a0, a1);
}

local_ref< org::apache::http::conn::routing::HttpRoute > org::apache::http::conn::params::ConnRouteParams::getForcedRoute(local_ref< org::apache::http::params::HttpParams > const &a0)
{
	return call_static_method<
		org::apache::http::conn::params::ConnRouteParams::J2CPP_CLASS_NAME,
		org::apache::http::conn::params::ConnRouteParams::J2CPP_METHOD_NAME(3),
		org::apache::http::conn::params::ConnRouteParams::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< org::apache::http::conn::routing::HttpRoute >
	>(a0);
}

void org::apache::http::conn::params::ConnRouteParams::setForcedRoute(local_ref< org::apache::http::params::HttpParams > const &a0, local_ref< org::apache::http::conn::routing::HttpRoute > const &a1)
{
	return call_static_method<
		org::apache::http::conn::params::ConnRouteParams::J2CPP_CLASS_NAME,
		org::apache::http::conn::params::ConnRouteParams::J2CPP_METHOD_NAME(4),
		org::apache::http::conn::params::ConnRouteParams::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(a0, a1);
}

local_ref< java::net::InetAddress > org::apache::http::conn::params::ConnRouteParams::getLocalAddress(local_ref< org::apache::http::params::HttpParams > const &a0)
{
	return call_static_method<
		org::apache::http::conn::params::ConnRouteParams::J2CPP_CLASS_NAME,
		org::apache::http::conn::params::ConnRouteParams::J2CPP_METHOD_NAME(5),
		org::apache::http::conn::params::ConnRouteParams::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::net::InetAddress >
	>(a0);
}

void org::apache::http::conn::params::ConnRouteParams::setLocalAddress(local_ref< org::apache::http::params::HttpParams > const &a0, local_ref< java::net::InetAddress > const &a1)
{
	return call_static_method<
		org::apache::http::conn::params::ConnRouteParams::J2CPP_CLASS_NAME,
		org::apache::http::conn::params::ConnRouteParams::J2CPP_METHOD_NAME(6),
		org::apache::http::conn::params::ConnRouteParams::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(a0, a1);
}



static_field<
	org::apache::http::conn::params::ConnRouteParams::J2CPP_CLASS_NAME,
	org::apache::http::conn::params::ConnRouteParams::J2CPP_FIELD_NAME(0),
	org::apache::http::conn::params::ConnRouteParams::J2CPP_FIELD_SIGNATURE(0),
	local_ref< org::apache::http::HttpHost >
> org::apache::http::conn::params::ConnRouteParams::NO_HOST;

static_field<
	org::apache::http::conn::params::ConnRouteParams::J2CPP_CLASS_NAME,
	org::apache::http::conn::params::ConnRouteParams::J2CPP_FIELD_NAME(1),
	org::apache::http::conn::params::ConnRouteParams::J2CPP_FIELD_SIGNATURE(1),
	local_ref< org::apache::http::conn::routing::HttpRoute >
> org::apache::http::conn::params::ConnRouteParams::NO_ROUTE;


J2CPP_DEFINE_CLASS(org::apache::http::conn::params::ConnRouteParams,"org/apache/http/conn/params/ConnRouteParams")
J2CPP_DEFINE_METHOD(org::apache::http::conn::params::ConnRouteParams,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::conn::params::ConnRouteParams,1,"getDefaultProxy","(Lorg/apache/http/params/HttpParams;)Lorg/apache/http/HttpHost;")
J2CPP_DEFINE_METHOD(org::apache::http::conn::params::ConnRouteParams,2,"setDefaultProxy","(Lorg/apache/http/params/HttpParams;Lorg/apache/http/HttpHost;)V")
J2CPP_DEFINE_METHOD(org::apache::http::conn::params::ConnRouteParams,3,"getForcedRoute","(Lorg/apache/http/params/HttpParams;)Lorg/apache/http/conn/routing/HttpRoute;")
J2CPP_DEFINE_METHOD(org::apache::http::conn::params::ConnRouteParams,4,"setForcedRoute","(Lorg/apache/http/params/HttpParams;Lorg/apache/http/conn/routing/HttpRoute;)V")
J2CPP_DEFINE_METHOD(org::apache::http::conn::params::ConnRouteParams,5,"getLocalAddress","(Lorg/apache/http/params/HttpParams;)Ljava/net/InetAddress;")
J2CPP_DEFINE_METHOD(org::apache::http::conn::params::ConnRouteParams,6,"setLocalAddress","(Lorg/apache/http/params/HttpParams;Ljava/net/InetAddress;)V")
J2CPP_DEFINE_METHOD(org::apache::http::conn::params::ConnRouteParams,7,"<clinit>","()V")
J2CPP_DEFINE_FIELD(org::apache::http::conn::params::ConnRouteParams,0,"NO_HOST","Lorg/apache/http/HttpHost;")
J2CPP_DEFINE_FIELD(org::apache::http::conn::params::ConnRouteParams,1,"NO_ROUTE","Lorg/apache/http/conn/routing/HttpRoute;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CONN_PARAMS_CONNROUTEPARAMS_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
