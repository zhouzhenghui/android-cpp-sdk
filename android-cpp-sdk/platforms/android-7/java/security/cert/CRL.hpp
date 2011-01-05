/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.security.cert.CRL
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_CERT_CRL_HPP_DECL
#define J2CPP_JAVA_SECURITY_CERT_CRL_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace security { namespace cert { class Certificate; } } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/security/cert/Certificate.hpp>


namespace j2cpp {

namespace java { namespace security { namespace cert {

	class CRL;
	class CRL
		: public object<CRL>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		explicit CRL(jobject jobj)
		: object<CRL>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< java::lang::String > getType();
		jboolean isRevoked(local_ref< java::security::cert::Certificate >  const&);
		local_ref< java::lang::String > toString();
	}; //class CRL

} //namespace cert
} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_CERT_CRL_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_CERT_CRL_HPP_IMPL
#define J2CPP_JAVA_SECURITY_CERT_CRL_HPP_IMPL

namespace j2cpp {



java::security::cert::CRL::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


local_ref< java::lang::String > java::security::cert::CRL::getType()
{
	return call_method<
		java::security::cert::CRL::J2CPP_CLASS_NAME,
		java::security::cert::CRL::J2CPP_METHOD_NAME(1),
		java::security::cert::CRL::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::String >
	>(get_jobject());
}

jboolean java::security::cert::CRL::isRevoked(local_ref< java::security::cert::Certificate > const &a0)
{
	return call_method<
		java::security::cert::CRL::J2CPP_CLASS_NAME,
		java::security::cert::CRL::J2CPP_METHOD_NAME(2),
		java::security::cert::CRL::J2CPP_METHOD_SIGNATURE(2), 
		jboolean
	>(get_jobject(), a0);
}

local_ref< java::lang::String > java::security::cert::CRL::toString()
{
	return call_method<
		java::security::cert::CRL::J2CPP_CLASS_NAME,
		java::security::cert::CRL::J2CPP_METHOD_NAME(3),
		java::security::cert::CRL::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::lang::String >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(java::security::cert::CRL,"java/security/cert/CRL")
J2CPP_DEFINE_METHOD(java::security::cert::CRL,0,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::security::cert::CRL,1,"getType","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::security::cert::CRL,2,"isRevoked","(Ljava/security/cert/Certificate;)Z")
J2CPP_DEFINE_METHOD(java::security::cert::CRL,3,"toString","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_CERT_CRL_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
