/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.impl.conn.DefaultHttpRoutePlanner
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_CONN_DEFAULTHTTPROUTEPLANNER_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_CONN_DEFAULTHTTPROUTEPLANNER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpRequest; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace protocol { class HttpContext; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace conn { namespace routing { class HttpRoutePlanner; } } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace conn { namespace routing { class HttpRoute; } } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace conn { namespace scheme { class SchemeRegistry; } } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpHost; } } } }


#include <java/lang/Object.hpp>
#include <org/apache/http/HttpHost.hpp>
#include <org/apache/http/HttpRequest.hpp>
#include <org/apache/http/conn/routing/HttpRoute.hpp>
#include <org/apache/http/conn/routing/HttpRoutePlanner.hpp>
#include <org/apache/http/conn/scheme/SchemeRegistry.hpp>
#include <org/apache/http/protocol/HttpContext.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl { namespace conn {

	class DefaultHttpRoutePlanner;
	class DefaultHttpRoutePlanner
		: public cpp_object<DefaultHttpRoutePlanner>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_FIELD(0)

		explicit DefaultHttpRoutePlanner(jobject jobj)
		: cpp_object<DefaultHttpRoutePlanner>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::apache::http::conn::routing::HttpRoutePlanner>() const;


		DefaultHttpRoutePlanner(local_ref< org::apache::http::conn::scheme::SchemeRegistry > const&);
		local_ref< org::apache::http::conn::routing::HttpRoute > determineRoute(local_ref< org::apache::http::HttpHost > const&, local_ref< org::apache::http::HttpRequest > const&, local_ref< org::apache::http::protocol::HttpContext > const&);

	}; //class DefaultHttpRoutePlanner

} //namespace conn
} //namespace impl
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_CONN_DEFAULTHTTPROUTEPLANNER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_CONN_DEFAULTHTTPROUTEPLANNER_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_CONN_DEFAULTHTTPROUTEPLANNER_HPP_IMPL

namespace j2cpp {



org::apache::http::impl::conn::DefaultHttpRoutePlanner::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}

org::apache::http::impl::conn::DefaultHttpRoutePlanner::operator local_ref<org::apache::http::conn::routing::HttpRoutePlanner>() const
{
	return local_ref<org::apache::http::conn::routing::HttpRoutePlanner>(get_jtype());
}


org::apache::http::impl::conn::DefaultHttpRoutePlanner::DefaultHttpRoutePlanner(local_ref< org::apache::http::conn::scheme::SchemeRegistry > const &a0)
: cpp_object<org::apache::http::impl::conn::DefaultHttpRoutePlanner>(
	environment::get().get_jenv()->NewObject(
		get_class<org::apache::http::impl::conn::DefaultHttpRoutePlanner::J2CPP_CLASS_NAME>(),
		get_method_id<org::apache::http::impl::conn::DefaultHttpRoutePlanner::J2CPP_CLASS_NAME, org::apache::http::impl::conn::DefaultHttpRoutePlanner::J2CPP_METHOD_NAME(0), org::apache::http::impl::conn::DefaultHttpRoutePlanner::J2CPP_METHOD_SIGNATURE(0), false>(),
		a0.get_jtype()
	)
)
{
}


local_ref< org::apache::http::conn::routing::HttpRoute > org::apache::http::impl::conn::DefaultHttpRoutePlanner::determineRoute(local_ref< org::apache::http::HttpHost > const &a0, local_ref< org::apache::http::HttpRequest > const &a1, local_ref< org::apache::http::protocol::HttpContext > const &a2)
{
	return local_ref< org::apache::http::conn::routing::HttpRoute >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}



J2CPP_DEFINE_CLASS(org::apache::http::impl::conn::DefaultHttpRoutePlanner,"org/apache/http/impl/conn/DefaultHttpRoutePlanner")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::DefaultHttpRoutePlanner,0,"<init>","(Lorg/apache/http/conn/scheme/SchemeRegistry;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::DefaultHttpRoutePlanner,1,"determineRoute","(Lorg/apache/http/HttpHost;Lorg/apache/http/HttpRequest;Lorg/apache/http/protocol/HttpContext;)Lorg/apache/http/conn/routing/HttpRoute;")
J2CPP_DEFINE_FIELD(org::apache::http::impl::conn::DefaultHttpRoutePlanner,0,"schemeRegistry","Lorg/apache/http/conn/scheme/SchemeRegistry;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_CONN_DEFAULTHTTPROUTEPLANNER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
