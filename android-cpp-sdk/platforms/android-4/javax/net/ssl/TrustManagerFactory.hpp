/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: javax.net.ssl.TrustManagerFactory
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_NET_SSL_TRUSTMANAGERFACTORY_HPP_DECL
#define J2CPP_JAVAX_NET_SSL_TRUSTMANAGERFACTORY_HPP_DECL


namespace j2cpp { namespace javax { namespace net { namespace ssl { class ManagerFactoryParameters; } } } }
namespace j2cpp { namespace javax { namespace net { namespace ssl { class TrustManager; } } } }
namespace j2cpp { namespace java { namespace security { class KeyStore; } } }
namespace j2cpp { namespace java { namespace security { class Provider; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/security/KeyStore.hpp>
#include <java/security/Provider.hpp>
#include <javax/net/ssl/ManagerFactoryParameters.hpp>
#include <javax/net/ssl/TrustManager.hpp>


namespace j2cpp {

namespace javax { namespace net { namespace ssl {

	class TrustManagerFactory;
	class TrustManagerFactory
		: public object<TrustManagerFactory>
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

		explicit TrustManagerFactory(jobject jobj)
		: object<TrustManagerFactory>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< java::lang::String > getAlgorithm();
		static local_ref< javax::net::ssl::TrustManagerFactory > getInstance(local_ref< java::lang::String >  const&);
		static local_ref< javax::net::ssl::TrustManagerFactory > getInstance(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		static local_ref< javax::net::ssl::TrustManagerFactory > getInstance(local_ref< java::lang::String >  const&, local_ref< java::security::Provider >  const&);
		local_ref< java::security::Provider > getProvider();
		void init(local_ref< java::security::KeyStore >  const&);
		void init(local_ref< javax::net::ssl::ManagerFactoryParameters >  const&);
		local_ref< array< local_ref< javax::net::ssl::TrustManager >, 1> > getTrustManagers();
		static local_ref< java::lang::String > getDefaultAlgorithm();
	}; //class TrustManagerFactory

} //namespace ssl
} //namespace net
} //namespace javax

} //namespace j2cpp

#endif //J2CPP_JAVAX_NET_SSL_TRUSTMANAGERFACTORY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_NET_SSL_TRUSTMANAGERFACTORY_HPP_IMPL
#define J2CPP_JAVAX_NET_SSL_TRUSTMANAGERFACTORY_HPP_IMPL

namespace j2cpp {



javax::net::ssl::TrustManagerFactory::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


local_ref< java::lang::String > javax::net::ssl::TrustManagerFactory::getAlgorithm()
{
	return call_method<
		javax::net::ssl::TrustManagerFactory::J2CPP_CLASS_NAME,
		javax::net::ssl::TrustManagerFactory::J2CPP_METHOD_NAME(1),
		javax::net::ssl::TrustManagerFactory::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::String > >
	(get_jobject());
}

local_ref< javax::net::ssl::TrustManagerFactory > javax::net::ssl::TrustManagerFactory::getInstance(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		javax::net::ssl::TrustManagerFactory::J2CPP_CLASS_NAME,
		javax::net::ssl::TrustManagerFactory::J2CPP_METHOD_NAME(2),
		javax::net::ssl::TrustManagerFactory::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< javax::net::ssl::TrustManagerFactory > >
	(a0);
}

local_ref< javax::net::ssl::TrustManagerFactory > javax::net::ssl::TrustManagerFactory::getInstance(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_static_method<
		javax::net::ssl::TrustManagerFactory::J2CPP_CLASS_NAME,
		javax::net::ssl::TrustManagerFactory::J2CPP_METHOD_NAME(3),
		javax::net::ssl::TrustManagerFactory::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< javax::net::ssl::TrustManagerFactory > >
	(a0, a1);
}

local_ref< javax::net::ssl::TrustManagerFactory > javax::net::ssl::TrustManagerFactory::getInstance(local_ref< java::lang::String > const &a0, local_ref< java::security::Provider > const &a1)
{
	return call_static_method<
		javax::net::ssl::TrustManagerFactory::J2CPP_CLASS_NAME,
		javax::net::ssl::TrustManagerFactory::J2CPP_METHOD_NAME(4),
		javax::net::ssl::TrustManagerFactory::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< javax::net::ssl::TrustManagerFactory > >
	(a0, a1);
}

local_ref< java::security::Provider > javax::net::ssl::TrustManagerFactory::getProvider()
{
	return call_method<
		javax::net::ssl::TrustManagerFactory::J2CPP_CLASS_NAME,
		javax::net::ssl::TrustManagerFactory::J2CPP_METHOD_NAME(5),
		javax::net::ssl::TrustManagerFactory::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::security::Provider > >
	(get_jobject());
}

void javax::net::ssl::TrustManagerFactory::init(local_ref< java::security::KeyStore > const &a0)
{
	return call_method<
		javax::net::ssl::TrustManagerFactory::J2CPP_CLASS_NAME,
		javax::net::ssl::TrustManagerFactory::J2CPP_METHOD_NAME(6),
		javax::net::ssl::TrustManagerFactory::J2CPP_METHOD_SIGNATURE(6), 
		void >
	(get_jobject(), a0);
}

void javax::net::ssl::TrustManagerFactory::init(local_ref< javax::net::ssl::ManagerFactoryParameters > const &a0)
{
	return call_method<
		javax::net::ssl::TrustManagerFactory::J2CPP_CLASS_NAME,
		javax::net::ssl::TrustManagerFactory::J2CPP_METHOD_NAME(7),
		javax::net::ssl::TrustManagerFactory::J2CPP_METHOD_SIGNATURE(7), 
		void >
	(get_jobject(), a0);
}

local_ref< array< local_ref< javax::net::ssl::TrustManager >, 1> > javax::net::ssl::TrustManagerFactory::getTrustManagers()
{
	return call_method<
		javax::net::ssl::TrustManagerFactory::J2CPP_CLASS_NAME,
		javax::net::ssl::TrustManagerFactory::J2CPP_METHOD_NAME(8),
		javax::net::ssl::TrustManagerFactory::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< array< local_ref< javax::net::ssl::TrustManager >, 1> > >
	(get_jobject());
}

local_ref< java::lang::String > javax::net::ssl::TrustManagerFactory::getDefaultAlgorithm()
{
	return call_static_method<
		javax::net::ssl::TrustManagerFactory::J2CPP_CLASS_NAME,
		javax::net::ssl::TrustManagerFactory::J2CPP_METHOD_NAME(9),
		javax::net::ssl::TrustManagerFactory::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< java::lang::String > >
	();
}


J2CPP_DEFINE_CLASS(javax::net::ssl::TrustManagerFactory,"javax/net/ssl/TrustManagerFactory")
J2CPP_DEFINE_METHOD(javax::net::ssl::TrustManagerFactory,0,"<init>","(Ljavax/net/ssl/TrustManagerFactorySpi;Ljava/security/Provider;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(javax::net::ssl::TrustManagerFactory,1,"getAlgorithm","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(javax::net::ssl::TrustManagerFactory,2,"getInstance","(Ljava/lang/String;)Ljavax/net/ssl/TrustManagerFactory;")
J2CPP_DEFINE_METHOD(javax::net::ssl::TrustManagerFactory,3,"getInstance","(Ljava/lang/String;Ljava/lang/String;)Ljavax/net/ssl/TrustManagerFactory;")
J2CPP_DEFINE_METHOD(javax::net::ssl::TrustManagerFactory,4,"getInstance","(Ljava/lang/String;Ljava/security/Provider;)Ljavax/net/ssl/TrustManagerFactory;")
J2CPP_DEFINE_METHOD(javax::net::ssl::TrustManagerFactory,5,"getProvider","()Ljava/security/Provider;")
J2CPP_DEFINE_METHOD(javax::net::ssl::TrustManagerFactory,6,"init","(Ljava/security/KeyStore;)V")
J2CPP_DEFINE_METHOD(javax::net::ssl::TrustManagerFactory,7,"init","(Ljavax/net/ssl/ManagerFactoryParameters;)V")
J2CPP_DEFINE_METHOD(javax::net::ssl::TrustManagerFactory,8,"getTrustManagers","()[javax.net.ssl.TrustManager")
J2CPP_DEFINE_METHOD(javax::net::ssl::TrustManagerFactory,9,"getDefaultAlgorithm","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVAX_NET_SSL_TRUSTMANAGERFACTORY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
