/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.security.cert.CertPathValidator
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_CERT_CERTPATHVALIDATOR_HPP_DECL
#define J2CPP_JAVA_SECURITY_CERT_CERTPATHVALIDATOR_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace security { namespace cert { class CertPath; } } } }
namespace j2cpp { namespace java { namespace security { namespace cert { class CertPathValidatorResult; } } } }
namespace j2cpp { namespace java { namespace security { namespace cert { class CertPathParameters; } } } }
namespace j2cpp { namespace java { namespace security { class Provider; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/security/Provider.hpp>
#include <java/security/cert/CertPath.hpp>
#include <java/security/cert/CertPathParameters.hpp>
#include <java/security/cert/CertPathValidatorResult.hpp>


namespace j2cpp {

namespace java { namespace security { namespace cert {

	class CertPathValidator;
	class CertPathValidator
		: public object<CertPathValidator>
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

		explicit CertPathValidator(jobject jobj)
		: object<CertPathValidator>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< java::lang::String > getAlgorithm();
		local_ref< java::security::Provider > getProvider();
		static local_ref< java::security::cert::CertPathValidator > getInstance(local_ref< java::lang::String >  const&);
		static local_ref< java::security::cert::CertPathValidator > getInstance(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		static local_ref< java::security::cert::CertPathValidator > getInstance(local_ref< java::lang::String >  const&, local_ref< java::security::Provider >  const&);
		local_ref< java::security::cert::CertPathValidatorResult > validate(local_ref< java::security::cert::CertPath >  const&, local_ref< java::security::cert::CertPathParameters >  const&);
		static local_ref< java::lang::String > getDefaultType();
	}; //class CertPathValidator

} //namespace cert
} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_CERT_CERTPATHVALIDATOR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_CERT_CERTPATHVALIDATOR_HPP_IMPL
#define J2CPP_JAVA_SECURITY_CERT_CERTPATHVALIDATOR_HPP_IMPL

namespace j2cpp {



java::security::cert::CertPathValidator::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


local_ref< java::lang::String > java::security::cert::CertPathValidator::getAlgorithm()
{
	return call_method<
		java::security::cert::CertPathValidator::J2CPP_CLASS_NAME,
		java::security::cert::CertPathValidator::J2CPP_METHOD_NAME(1),
		java::security::cert::CertPathValidator::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::String > >
	(get_jobject());
}

local_ref< java::security::Provider > java::security::cert::CertPathValidator::getProvider()
{
	return call_method<
		java::security::cert::CertPathValidator::J2CPP_CLASS_NAME,
		java::security::cert::CertPathValidator::J2CPP_METHOD_NAME(2),
		java::security::cert::CertPathValidator::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::security::Provider > >
	(get_jobject());
}

local_ref< java::security::cert::CertPathValidator > java::security::cert::CertPathValidator::getInstance(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		java::security::cert::CertPathValidator::J2CPP_CLASS_NAME,
		java::security::cert::CertPathValidator::J2CPP_METHOD_NAME(3),
		java::security::cert::CertPathValidator::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::security::cert::CertPathValidator > >
	(a0);
}

local_ref< java::security::cert::CertPathValidator > java::security::cert::CertPathValidator::getInstance(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_static_method<
		java::security::cert::CertPathValidator::J2CPP_CLASS_NAME,
		java::security::cert::CertPathValidator::J2CPP_METHOD_NAME(4),
		java::security::cert::CertPathValidator::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::security::cert::CertPathValidator > >
	(a0, a1);
}

local_ref< java::security::cert::CertPathValidator > java::security::cert::CertPathValidator::getInstance(local_ref< java::lang::String > const &a0, local_ref< java::security::Provider > const &a1)
{
	return call_static_method<
		java::security::cert::CertPathValidator::J2CPP_CLASS_NAME,
		java::security::cert::CertPathValidator::J2CPP_METHOD_NAME(5),
		java::security::cert::CertPathValidator::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::security::cert::CertPathValidator > >
	(a0, a1);
}

local_ref< java::security::cert::CertPathValidatorResult > java::security::cert::CertPathValidator::validate(local_ref< java::security::cert::CertPath > const &a0, local_ref< java::security::cert::CertPathParameters > const &a1)
{
	return call_method<
		java::security::cert::CertPathValidator::J2CPP_CLASS_NAME,
		java::security::cert::CertPathValidator::J2CPP_METHOD_NAME(6),
		java::security::cert::CertPathValidator::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::security::cert::CertPathValidatorResult > >
	(get_jobject(), a0, a1);
}

local_ref< java::lang::String > java::security::cert::CertPathValidator::getDefaultType()
{
	return call_static_method<
		java::security::cert::CertPathValidator::J2CPP_CLASS_NAME,
		java::security::cert::CertPathValidator::J2CPP_METHOD_NAME(7),
		java::security::cert::CertPathValidator::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::lang::String > >
	();
}


J2CPP_DEFINE_CLASS(java::security::cert::CertPathValidator,"java/security/cert/CertPathValidator")
J2CPP_DEFINE_METHOD(java::security::cert::CertPathValidator,0,"<init>","(Ljava/security/cert/CertPathValidatorSpi;Ljava/security/Provider;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::security::cert::CertPathValidator,1,"getAlgorithm","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::security::cert::CertPathValidator,2,"getProvider","()Ljava/security/Provider;")
J2CPP_DEFINE_METHOD(java::security::cert::CertPathValidator,3,"getInstance","(Ljava/lang/String;)Ljava/security/cert/CertPathValidator;")
J2CPP_DEFINE_METHOD(java::security::cert::CertPathValidator,4,"getInstance","(Ljava/lang/String;Ljava/lang/String;)Ljava/security/cert/CertPathValidator;")
J2CPP_DEFINE_METHOD(java::security::cert::CertPathValidator,5,"getInstance","(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/cert/CertPathValidator;")
J2CPP_DEFINE_METHOD(java::security::cert::CertPathValidator,6,"validate","(Ljava/security/cert/CertPath;Ljava/security/cert/CertPathParameters;)Ljava/security/cert/CertPathValidatorResult;")
J2CPP_DEFINE_METHOD(java::security::cert::CertPathValidator,7,"getDefaultType","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_CERT_CERTPATHVALIDATOR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
