/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.conn.routing.BasicRouteDirector
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CONN_ROUTING_BASICROUTEDIRECTOR_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_CONN_ROUTING_BASICROUTEDIRECTOR_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { namespace conn { namespace routing { class RouteInfo; } } } } } }


#include <org/apache/http/conn/routing/RouteInfo.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace conn { namespace routing {

	class BasicRouteDirector;
	class BasicRouteDirector
		: public cpp_object<BasicRouteDirector>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)

		BasicRouteDirector(jobject jobj)
		: cpp_object<BasicRouteDirector>(jobj)
		{
		}

		cpp_int nextStep(local_ref< org::apache::http::conn::routing::RouteInfo > const&, local_ref< org::apache::http::conn::routing::RouteInfo > const&);
	}; //class BasicRouteDirector

} //namespace routing
} //namespace conn
} //namespace http
} //namespace apache
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CONN_ROUTING_BASICROUTEDIRECTOR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CONN_ROUTING_BASICROUTEDIRECTOR_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_CONN_ROUTING_BASICROUTEDIRECTOR_HPP_IMPL

namespace j2cpp {


template <>
local_ref< org::apache::http::conn::routing::BasicRouteDirector > create< org::apache::http::conn::routing::BasicRouteDirector>()
{
	return local_ref< org::apache::http::conn::routing::BasicRouteDirector >(
		environment::get().get_jenv()->NewObject(
			get_class<org::apache::http::conn::routing::BasicRouteDirector::J2CPP_CLASS_NAME>(),
			get_method_id<org::apache::http::conn::routing::BasicRouteDirector::J2CPP_CLASS_NAME, org::apache::http::conn::routing::BasicRouteDirector::J2CPP_METHOD_NAME(0), org::apache::http::conn::routing::BasicRouteDirector::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

cpp_int org::apache::http::conn::routing::BasicRouteDirector::nextStep(local_ref< org::apache::http::conn::routing::RouteInfo > const &a0, local_ref< org::apache::http::conn::routing::RouteInfo > const &a1)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}





J2CPP_DEFINE_CLASS(org::apache::http::conn::routing::BasicRouteDirector,"org/apache/http/conn/routing/BasicRouteDirector")
J2CPP_DEFINE_METHOD(org::apache::http::conn::routing::BasicRouteDirector,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::conn::routing::BasicRouteDirector,1,"nextStep","(Lorg/apache/http/conn/routing/RouteInfo;Lorg/apache/http/conn/routing/RouteInfo;)I")
J2CPP_DEFINE_METHOD(org::apache::http::conn::routing::BasicRouteDirector,2,"firstStep","(Lorg/apache/http/conn/routing/RouteInfo;)I")
J2CPP_DEFINE_METHOD(org::apache::http::conn::routing::BasicRouteDirector,3,"directStep","(Lorg/apache/http/conn/routing/RouteInfo;Lorg/apache/http/conn/routing/RouteInfo;)I")
J2CPP_DEFINE_METHOD(org::apache::http::conn::routing::BasicRouteDirector,4,"proxiedStep","(Lorg/apache/http/conn/routing/RouteInfo;Lorg/apache/http/conn/routing/RouteInfo;)I")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CONN_ROUTING_BASICROUTEDIRECTOR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION