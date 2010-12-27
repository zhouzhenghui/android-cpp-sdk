/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.impl.client.RedirectLocations
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_REDIRECTLOCATIONS_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_REDIRECTLOCATIONS_HPP_DECL


namespace j2cpp { namespace java { namespace net { class URI; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/net/URI.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl { namespace client {

	class RedirectLocations;
	class RedirectLocations
		: public cpp_object<RedirectLocations>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		explicit RedirectLocations(jobject jobj)
		: cpp_object<RedirectLocations>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		RedirectLocations();
		cpp_boolean contains(local_ref< java::net::URI > const&);
		void add(local_ref< java::net::URI > const&);
		cpp_boolean remove(local_ref< java::net::URI > const&);
	}; //class RedirectLocations

} //namespace client
} //namespace impl
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_REDIRECTLOCATIONS_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_REDIRECTLOCATIONS_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_REDIRECTLOCATIONS_HPP_IMPL

namespace j2cpp {



org::apache::http::impl::client::RedirectLocations::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}


org::apache::http::impl::client::RedirectLocations::RedirectLocations()
: cpp_object<org::apache::http::impl::client::RedirectLocations>(
	environment::get().get_jenv()->NewObject(
		get_class<org::apache::http::impl::client::RedirectLocations::J2CPP_CLASS_NAME>(),
		get_method_id<org::apache::http::impl::client::RedirectLocations::J2CPP_CLASS_NAME, org::apache::http::impl::client::RedirectLocations::J2CPP_METHOD_NAME(0), org::apache::http::impl::client::RedirectLocations::J2CPP_METHOD_SIGNATURE(0), false>()
	)
)
{
}


cpp_boolean org::apache::http::impl::client::RedirectLocations::contains(local_ref< java::net::URI > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

void org::apache::http::impl::client::RedirectLocations::add(local_ref< java::net::URI > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean org::apache::http::impl::client::RedirectLocations::remove(local_ref< java::net::URI > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(org::apache::http::impl::client::RedirectLocations,"org/apache/http/impl/client/RedirectLocations")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::RedirectLocations,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::RedirectLocations,1,"contains","(Ljava/net/URI;)Z")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::RedirectLocations,2,"add","(Ljava/net/URI;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::RedirectLocations,3,"remove","(Ljava/net/URI;)Z")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_REDIRECTLOCATIONS_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
