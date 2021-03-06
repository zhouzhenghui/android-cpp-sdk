/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.security.cert.LDAPCertStoreParameters
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_CERT_LDAPCERTSTOREPARAMETERS_HPP_DECL
#define J2CPP_JAVA_SECURITY_CERT_LDAPCERTSTOREPARAMETERS_HPP_DECL


namespace j2cpp { namespace java { namespace security { namespace cert { class CertStoreParameters; } } } }
namespace j2cpp { namespace java { namespace lang { class Cloneable; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Cloneable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/security/cert/CertStoreParameters.hpp>


namespace j2cpp {

namespace java { namespace security { namespace cert {

	class LDAPCertStoreParameters;
	class LDAPCertStoreParameters
		: public object<LDAPCertStoreParameters>
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

		explicit LDAPCertStoreParameters(jobject jobj)
		: object<LDAPCertStoreParameters>(jobj)
		{
		}

		operator local_ref<java::security::cert::CertStoreParameters>() const;
		operator local_ref<java::lang::Cloneable>() const;
		operator local_ref<java::lang::Object>() const;


		LDAPCertStoreParameters(local_ref< java::lang::String > const&, jint);
		LDAPCertStoreParameters();
		LDAPCertStoreParameters(local_ref< java::lang::String > const&);
		local_ref< java::lang::Object > clone();
		jint getPort();
		local_ref< java::lang::String > getServerName();
		local_ref< java::lang::String > toString();
	}; //class LDAPCertStoreParameters

} //namespace cert
} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_CERT_LDAPCERTSTOREPARAMETERS_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_CERT_LDAPCERTSTOREPARAMETERS_HPP_IMPL
#define J2CPP_JAVA_SECURITY_CERT_LDAPCERTSTOREPARAMETERS_HPP_IMPL

namespace j2cpp {



java::security::cert::LDAPCertStoreParameters::operator local_ref<java::security::cert::CertStoreParameters>() const
{
	return local_ref<java::security::cert::CertStoreParameters>(get_jobject());
}

java::security::cert::LDAPCertStoreParameters::operator local_ref<java::lang::Cloneable>() const
{
	return local_ref<java::lang::Cloneable>(get_jobject());
}

java::security::cert::LDAPCertStoreParameters::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


java::security::cert::LDAPCertStoreParameters::LDAPCertStoreParameters(local_ref< java::lang::String > const &a0, jint a1)
: object<java::security::cert::LDAPCertStoreParameters>(
	call_new_object<
		java::security::cert::LDAPCertStoreParameters::J2CPP_CLASS_NAME,
		java::security::cert::LDAPCertStoreParameters::J2CPP_METHOD_NAME(0),
		java::security::cert::LDAPCertStoreParameters::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1)
)
{
}



java::security::cert::LDAPCertStoreParameters::LDAPCertStoreParameters()
: object<java::security::cert::LDAPCertStoreParameters>(
	call_new_object<
		java::security::cert::LDAPCertStoreParameters::J2CPP_CLASS_NAME,
		java::security::cert::LDAPCertStoreParameters::J2CPP_METHOD_NAME(1),
		java::security::cert::LDAPCertStoreParameters::J2CPP_METHOD_SIGNATURE(1)
	>()
)
{
}



java::security::cert::LDAPCertStoreParameters::LDAPCertStoreParameters(local_ref< java::lang::String > const &a0)
: object<java::security::cert::LDAPCertStoreParameters>(
	call_new_object<
		java::security::cert::LDAPCertStoreParameters::J2CPP_CLASS_NAME,
		java::security::cert::LDAPCertStoreParameters::J2CPP_METHOD_NAME(2),
		java::security::cert::LDAPCertStoreParameters::J2CPP_METHOD_SIGNATURE(2)
	>(a0)
)
{
}


local_ref< java::lang::Object > java::security::cert::LDAPCertStoreParameters::clone()
{
	return call_method<
		java::security::cert::LDAPCertStoreParameters::J2CPP_CLASS_NAME,
		java::security::cert::LDAPCertStoreParameters::J2CPP_METHOD_NAME(3),
		java::security::cert::LDAPCertStoreParameters::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::lang::Object >
	>(get_jobject());
}

jint java::security::cert::LDAPCertStoreParameters::getPort()
{
	return call_method<
		java::security::cert::LDAPCertStoreParameters::J2CPP_CLASS_NAME,
		java::security::cert::LDAPCertStoreParameters::J2CPP_METHOD_NAME(4),
		java::security::cert::LDAPCertStoreParameters::J2CPP_METHOD_SIGNATURE(4), 
		jint
	>(get_jobject());
}

local_ref< java::lang::String > java::security::cert::LDAPCertStoreParameters::getServerName()
{
	return call_method<
		java::security::cert::LDAPCertStoreParameters::J2CPP_CLASS_NAME,
		java::security::cert::LDAPCertStoreParameters::J2CPP_METHOD_NAME(5),
		java::security::cert::LDAPCertStoreParameters::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::String > java::security::cert::LDAPCertStoreParameters::toString()
{
	return call_method<
		java::security::cert::LDAPCertStoreParameters::J2CPP_CLASS_NAME,
		java::security::cert::LDAPCertStoreParameters::J2CPP_METHOD_NAME(6),
		java::security::cert::LDAPCertStoreParameters::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::lang::String >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(java::security::cert::LDAPCertStoreParameters,"java/security/cert/LDAPCertStoreParameters")
J2CPP_DEFINE_METHOD(java::security::cert::LDAPCertStoreParameters,0,"<init>","(Ljava/lang/String;I)V")
J2CPP_DEFINE_METHOD(java::security::cert::LDAPCertStoreParameters,1,"<init>","()V")
J2CPP_DEFINE_METHOD(java::security::cert::LDAPCertStoreParameters,2,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::security::cert::LDAPCertStoreParameters,3,"clone","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::security::cert::LDAPCertStoreParameters,4,"getPort","()I")
J2CPP_DEFINE_METHOD(java::security::cert::LDAPCertStoreParameters,5,"getServerName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::security::cert::LDAPCertStoreParameters,6,"toString","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_CERT_LDAPCERTSTOREPARAMETERS_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
