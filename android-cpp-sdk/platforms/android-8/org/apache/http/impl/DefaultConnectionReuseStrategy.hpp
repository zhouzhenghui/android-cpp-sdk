/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.impl.DefaultConnectionReuseStrategy
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_DEFAULTCONNECTIONREUSESTRATEGY_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_DEFAULTCONNECTIONREUSESTRATEGY_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { class ConnectionReuseStrategy; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpResponse; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace protocol { class HttpContext; } } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <org/apache/http/ConnectionReuseStrategy.hpp>
#include <org/apache/http/HttpResponse.hpp>
#include <org/apache/http/protocol/HttpContext.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl {

	class DefaultConnectionReuseStrategy;
	class DefaultConnectionReuseStrategy
		: public object<DefaultConnectionReuseStrategy>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit DefaultConnectionReuseStrategy(jobject jobj)
		: object<DefaultConnectionReuseStrategy>(jobj)
		{
		}

		operator local_ref<org::apache::http::ConnectionReuseStrategy>() const;
		operator local_ref<java::lang::Object>() const;


		DefaultConnectionReuseStrategy();
		jboolean keepAlive(local_ref< org::apache::http::HttpResponse >  const&, local_ref< org::apache::http::protocol::HttpContext >  const&);
	}; //class DefaultConnectionReuseStrategy

} //namespace impl
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_DEFAULTCONNECTIONREUSESTRATEGY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_DEFAULTCONNECTIONREUSESTRATEGY_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_DEFAULTCONNECTIONREUSESTRATEGY_HPP_IMPL

namespace j2cpp {



org::apache::http::impl::DefaultConnectionReuseStrategy::operator local_ref<org::apache::http::ConnectionReuseStrategy>() const
{
	return local_ref<org::apache::http::ConnectionReuseStrategy>(get_jobject());
}

org::apache::http::impl::DefaultConnectionReuseStrategy::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


org::apache::http::impl::DefaultConnectionReuseStrategy::DefaultConnectionReuseStrategy()
: object<org::apache::http::impl::DefaultConnectionReuseStrategy>(
	call_new_object<
		org::apache::http::impl::DefaultConnectionReuseStrategy::J2CPP_CLASS_NAME,
		org::apache::http::impl::DefaultConnectionReuseStrategy::J2CPP_METHOD_NAME(0),
		org::apache::http::impl::DefaultConnectionReuseStrategy::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


jboolean org::apache::http::impl::DefaultConnectionReuseStrategy::keepAlive(local_ref< org::apache::http::HttpResponse > const &a0, local_ref< org::apache::http::protocol::HttpContext > const &a1)
{
	return call_method<
		org::apache::http::impl::DefaultConnectionReuseStrategy::J2CPP_CLASS_NAME,
		org::apache::http::impl::DefaultConnectionReuseStrategy::J2CPP_METHOD_NAME(1),
		org::apache::http::impl::DefaultConnectionReuseStrategy::J2CPP_METHOD_SIGNATURE(1), 
		jboolean
	>(get_jobject(), a0, a1);
}



J2CPP_DEFINE_CLASS(org::apache::http::impl::DefaultConnectionReuseStrategy,"org/apache/http/impl/DefaultConnectionReuseStrategy")
J2CPP_DEFINE_METHOD(org::apache::http::impl::DefaultConnectionReuseStrategy,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::DefaultConnectionReuseStrategy,1,"keepAlive","(Lorg/apache/http/HttpResponse;Lorg/apache/http/protocol/HttpContext;)Z")
J2CPP_DEFINE_METHOD(org::apache::http::impl::DefaultConnectionReuseStrategy,2,"createTokenIterator","(Lorg/apache/http/HeaderIterator;)Lorg/apache/http/TokenIterator;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_DEFAULTCONNECTIONREUSESTRATEGY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
