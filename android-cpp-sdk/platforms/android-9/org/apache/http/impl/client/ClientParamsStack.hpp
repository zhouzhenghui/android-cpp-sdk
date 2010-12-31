/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.impl.client.ClientParamsStack
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_CLIENTPARAMSSTACK_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_CLIENTPARAMSSTACK_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace params { class AbstractHttpParams; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/apache/http/params/AbstractHttpParams.hpp>
#include <org/apache/http/params/HttpParams.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl { namespace client {

	class ClientParamsStack;
	class ClientParamsStack
		: public object<ClientParamsStack>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)

		explicit ClientParamsStack(jobject jobj)
		: object<ClientParamsStack>(jobj)
		{
		}

		operator local_ref<org::apache::http::params::AbstractHttpParams>() const;


		ClientParamsStack(local_ref< org::apache::http::params::HttpParams > const&, local_ref< org::apache::http::params::HttpParams > const&, local_ref< org::apache::http::params::HttpParams > const&, local_ref< org::apache::http::params::HttpParams > const&);
		ClientParamsStack(local_ref< org::apache::http::impl::client::ClientParamsStack > const&);
		ClientParamsStack(local_ref< org::apache::http::impl::client::ClientParamsStack > const&, local_ref< org::apache::http::params::HttpParams > const&, local_ref< org::apache::http::params::HttpParams > const&, local_ref< org::apache::http::params::HttpParams > const&, local_ref< org::apache::http::params::HttpParams > const&);
		local_ref< org::apache::http::params::HttpParams > getApplicationParams();
		local_ref< org::apache::http::params::HttpParams > getClientParams();
		local_ref< org::apache::http::params::HttpParams > getRequestParams();
		local_ref< org::apache::http::params::HttpParams > getOverrideParams();
		local_ref< java::lang::Object > getParameter(local_ref< java::lang::String >  const&);
		local_ref< org::apache::http::params::HttpParams > setParameter(local_ref< java::lang::String >  const&, local_ref< java::lang::Object >  const&);
		jboolean removeParameter(local_ref< java::lang::String >  const&);
		local_ref< org::apache::http::params::HttpParams > copy();

	}; //class ClientParamsStack

} //namespace client
} //namespace impl
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_CLIENTPARAMSSTACK_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_CLIENTPARAMSSTACK_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_CLIENTPARAMSSTACK_HPP_IMPL

namespace j2cpp {



org::apache::http::impl::client::ClientParamsStack::operator local_ref<org::apache::http::params::AbstractHttpParams>() const
{
	return local_ref<org::apache::http::params::AbstractHttpParams>(get_jobject());
}


org::apache::http::impl::client::ClientParamsStack::ClientParamsStack(local_ref< org::apache::http::params::HttpParams > const &a0, local_ref< org::apache::http::params::HttpParams > const &a1, local_ref< org::apache::http::params::HttpParams > const &a2, local_ref< org::apache::http::params::HttpParams > const &a3)
: object<org::apache::http::impl::client::ClientParamsStack>(
	call_new_object<
		org::apache::http::impl::client::ClientParamsStack::J2CPP_CLASS_NAME,
		org::apache::http::impl::client::ClientParamsStack::J2CPP_METHOD_NAME(0),
		org::apache::http::impl::client::ClientParamsStack::J2CPP_METHOD_SIGNATURE(0)>
	(a0, a1, a2, a3)
)
{
}



org::apache::http::impl::client::ClientParamsStack::ClientParamsStack(local_ref< org::apache::http::impl::client::ClientParamsStack > const &a0)
: object<org::apache::http::impl::client::ClientParamsStack>(
	call_new_object<
		org::apache::http::impl::client::ClientParamsStack::J2CPP_CLASS_NAME,
		org::apache::http::impl::client::ClientParamsStack::J2CPP_METHOD_NAME(1),
		org::apache::http::impl::client::ClientParamsStack::J2CPP_METHOD_SIGNATURE(1)>
	(a0)
)
{
}



org::apache::http::impl::client::ClientParamsStack::ClientParamsStack(local_ref< org::apache::http::impl::client::ClientParamsStack > const &a0, local_ref< org::apache::http::params::HttpParams > const &a1, local_ref< org::apache::http::params::HttpParams > const &a2, local_ref< org::apache::http::params::HttpParams > const &a3, local_ref< org::apache::http::params::HttpParams > const &a4)
: object<org::apache::http::impl::client::ClientParamsStack>(
	call_new_object<
		org::apache::http::impl::client::ClientParamsStack::J2CPP_CLASS_NAME,
		org::apache::http::impl::client::ClientParamsStack::J2CPP_METHOD_NAME(2),
		org::apache::http::impl::client::ClientParamsStack::J2CPP_METHOD_SIGNATURE(2)>
	(a0, a1, a2, a3, a4)
)
{
}


local_ref< org::apache::http::params::HttpParams > org::apache::http::impl::client::ClientParamsStack::getApplicationParams()
{
	return call_method<
		org::apache::http::impl::client::ClientParamsStack::J2CPP_CLASS_NAME,
		org::apache::http::impl::client::ClientParamsStack::J2CPP_METHOD_NAME(3),
		org::apache::http::impl::client::ClientParamsStack::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< org::apache::http::params::HttpParams > >
	(get_jobject());
}

local_ref< org::apache::http::params::HttpParams > org::apache::http::impl::client::ClientParamsStack::getClientParams()
{
	return call_method<
		org::apache::http::impl::client::ClientParamsStack::J2CPP_CLASS_NAME,
		org::apache::http::impl::client::ClientParamsStack::J2CPP_METHOD_NAME(4),
		org::apache::http::impl::client::ClientParamsStack::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< org::apache::http::params::HttpParams > >
	(get_jobject());
}

local_ref< org::apache::http::params::HttpParams > org::apache::http::impl::client::ClientParamsStack::getRequestParams()
{
	return call_method<
		org::apache::http::impl::client::ClientParamsStack::J2CPP_CLASS_NAME,
		org::apache::http::impl::client::ClientParamsStack::J2CPP_METHOD_NAME(5),
		org::apache::http::impl::client::ClientParamsStack::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< org::apache::http::params::HttpParams > >
	(get_jobject());
}

local_ref< org::apache::http::params::HttpParams > org::apache::http::impl::client::ClientParamsStack::getOverrideParams()
{
	return call_method<
		org::apache::http::impl::client::ClientParamsStack::J2CPP_CLASS_NAME,
		org::apache::http::impl::client::ClientParamsStack::J2CPP_METHOD_NAME(6),
		org::apache::http::impl::client::ClientParamsStack::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< org::apache::http::params::HttpParams > >
	(get_jobject());
}

local_ref< java::lang::Object > org::apache::http::impl::client::ClientParamsStack::getParameter(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::apache::http::impl::client::ClientParamsStack::J2CPP_CLASS_NAME,
		org::apache::http::impl::client::ClientParamsStack::J2CPP_METHOD_NAME(7),
		org::apache::http::impl::client::ClientParamsStack::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::lang::Object > >
	(get_jobject(), a0);
}

local_ref< org::apache::http::params::HttpParams > org::apache::http::impl::client::ClientParamsStack::setParameter(local_ref< java::lang::String > const &a0, local_ref< java::lang::Object > const &a1)
{
	return call_method<
		org::apache::http::impl::client::ClientParamsStack::J2CPP_CLASS_NAME,
		org::apache::http::impl::client::ClientParamsStack::J2CPP_METHOD_NAME(8),
		org::apache::http::impl::client::ClientParamsStack::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< org::apache::http::params::HttpParams > >
	(get_jobject(), a0, a1);
}

jboolean org::apache::http::impl::client::ClientParamsStack::removeParameter(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::apache::http::impl::client::ClientParamsStack::J2CPP_CLASS_NAME,
		org::apache::http::impl::client::ClientParamsStack::J2CPP_METHOD_NAME(9),
		org::apache::http::impl::client::ClientParamsStack::J2CPP_METHOD_SIGNATURE(9), 
		jboolean >
	(get_jobject(), a0);
}

local_ref< org::apache::http::params::HttpParams > org::apache::http::impl::client::ClientParamsStack::copy()
{
	return call_method<
		org::apache::http::impl::client::ClientParamsStack::J2CPP_CLASS_NAME,
		org::apache::http::impl::client::ClientParamsStack::J2CPP_METHOD_NAME(10),
		org::apache::http::impl::client::ClientParamsStack::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< org::apache::http::params::HttpParams > >
	(get_jobject());
}



J2CPP_DEFINE_CLASS(org::apache::http::impl::client::ClientParamsStack,"org/apache/http/impl/client/ClientParamsStack")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::ClientParamsStack,0,"<init>","(Lorg/apache/http/params/HttpParams;Lorg/apache/http/params/HttpParams;Lorg/apache/http/params/HttpParams;Lorg/apache/http/params/HttpParams;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::ClientParamsStack,1,"<init>","(Lorg/apache/http/impl/client/ClientParamsStack;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::ClientParamsStack,2,"<init>","(Lorg/apache/http/impl/client/ClientParamsStack;Lorg/apache/http/params/HttpParams;Lorg/apache/http/params/HttpParams;Lorg/apache/http/params/HttpParams;Lorg/apache/http/params/HttpParams;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::ClientParamsStack,3,"getApplicationParams","()Lorg/apache/http/params/HttpParams;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::ClientParamsStack,4,"getClientParams","()Lorg/apache/http/params/HttpParams;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::ClientParamsStack,5,"getRequestParams","()Lorg/apache/http/params/HttpParams;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::ClientParamsStack,6,"getOverrideParams","()Lorg/apache/http/params/HttpParams;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::ClientParamsStack,7,"getParameter","(Ljava/lang/String;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::ClientParamsStack,8,"setParameter","(Ljava/lang/String;Ljava/lang/Object;)Lorg/apache/http/params/HttpParams;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::ClientParamsStack,9,"removeParameter","(Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::ClientParamsStack,10,"copy","()Lorg/apache/http/params/HttpParams;")
J2CPP_DEFINE_FIELD(org::apache::http::impl::client::ClientParamsStack,0,"applicationParams","Lorg/apache/http/params/HttpParams;")
J2CPP_DEFINE_FIELD(org::apache::http::impl::client::ClientParamsStack,1,"clientParams","Lorg/apache/http/params/HttpParams;")
J2CPP_DEFINE_FIELD(org::apache::http::impl::client::ClientParamsStack,2,"requestParams","Lorg/apache/http/params/HttpParams;")
J2CPP_DEFINE_FIELD(org::apache::http::impl::client::ClientParamsStack,3,"overrideParams","Lorg/apache/http/params/HttpParams;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_CLIENTPARAMSSTACK_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
