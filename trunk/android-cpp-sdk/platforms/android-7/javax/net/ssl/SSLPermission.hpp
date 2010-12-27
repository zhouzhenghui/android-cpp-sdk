/*================================================================================
  code generated by: java2cpp
  class: javax.net.ssl.SSLPermission
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_NET_SSL_SSLPERMISSION_HPP_DECL
#define J2CPP_JAVAX_NET_SSL_SSLPERMISSION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace security { class BasicPermission; } } }


#include <java/lang/String.hpp>
#include <java/security/BasicPermission.hpp>


namespace j2cpp {

namespace javax { namespace net { namespace ssl {

	class SSLPermission;
	class SSLPermission
		: public cpp_object<SSLPermission>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit SSLPermission(jobject jobj)
		: cpp_object<SSLPermission>(jobj)
		{
		}

		operator local_ref<java::security::BasicPermission>() const;


		SSLPermission(local_ref< java::lang::String > const&);
		SSLPermission(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
	}; //class SSLPermission

} //namespace ssl
} //namespace net
} //namespace javax

} //namespace j2cpp

#endif //J2CPP_JAVAX_NET_SSL_SSLPERMISSION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_NET_SSL_SSLPERMISSION_HPP_IMPL
#define J2CPP_JAVAX_NET_SSL_SSLPERMISSION_HPP_IMPL

namespace j2cpp {



javax::net::ssl::SSLPermission::operator local_ref<java::security::BasicPermission>() const
{
	return local_ref<java::security::BasicPermission>(get_jtype());
}


javax::net::ssl::SSLPermission::SSLPermission(local_ref< java::lang::String > const &a0)
: cpp_object<javax::net::ssl::SSLPermission>(
	environment::get().get_jenv()->NewObject(
		get_class<javax::net::ssl::SSLPermission::J2CPP_CLASS_NAME>(),
		get_method_id<javax::net::ssl::SSLPermission::J2CPP_CLASS_NAME, javax::net::ssl::SSLPermission::J2CPP_METHOD_NAME(0), javax::net::ssl::SSLPermission::J2CPP_METHOD_SIGNATURE(0), false>(),
		a0.get_jtype()
	)
)
{
}



javax::net::ssl::SSLPermission::SSLPermission(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
: cpp_object<javax::net::ssl::SSLPermission>(
	environment::get().get_jenv()->NewObject(
		get_class<javax::net::ssl::SSLPermission::J2CPP_CLASS_NAME>(),
		get_method_id<javax::net::ssl::SSLPermission::J2CPP_CLASS_NAME, javax::net::ssl::SSLPermission::J2CPP_METHOD_NAME(1), javax::net::ssl::SSLPermission::J2CPP_METHOD_SIGNATURE(1), false>(),
		a0.get_jtype(), a1.get_jtype()
	)
)
{
}



J2CPP_DEFINE_CLASS(javax::net::ssl::SSLPermission,"javax/net/ssl/SSLPermission")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLPermission,0,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLPermission,1,"<init>","(Ljava/lang/String;Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_JAVAX_NET_SSL_SSLPERMISSION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
