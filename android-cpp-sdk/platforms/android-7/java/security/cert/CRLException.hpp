/*================================================================================
  code generated by: java2cpp
  class: java.security.cert.CRLException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_CERT_CRLEXCEPTION_HPP_DECL
#define J2CPP_JAVA_SECURITY_CERT_CRLEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }
namespace j2cpp { namespace java { namespace security { class GeneralSecurityException; } } }


#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>
#include <java/security/GeneralSecurityException.hpp>


namespace j2cpp {

namespace java { namespace security { namespace cert {

	class CRLException;
	class CRLException
		: public cpp_object<CRLException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		explicit CRLException(jobject jobj)
		: cpp_object<CRLException>(jobj)
		{
		}

		operator local_ref<java::security::GeneralSecurityException>() const;


		CRLException(local_ref< java::lang::String > const&);
		CRLException();
		CRLException(local_ref< java::lang::String > const&, local_ref< java::lang::Throwable > const&);
		CRLException(local_ref< java::lang::Throwable > const&);
	}; //class CRLException

} //namespace cert
} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_CERT_CRLEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_CERT_CRLEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_SECURITY_CERT_CRLEXCEPTION_HPP_IMPL

namespace j2cpp {



java::security::cert::CRLException::operator local_ref<java::security::GeneralSecurityException>() const
{
	return local_ref<java::security::GeneralSecurityException>(get_jtype());
}


java::security::cert::CRLException::CRLException(local_ref< java::lang::String > const &a0)
: cpp_object<java::security::cert::CRLException>(
	environment::get().get_jenv()->NewObject(
		get_class<java::security::cert::CRLException::J2CPP_CLASS_NAME>(),
		get_method_id<java::security::cert::CRLException::J2CPP_CLASS_NAME, java::security::cert::CRLException::J2CPP_METHOD_NAME(0), java::security::cert::CRLException::J2CPP_METHOD_SIGNATURE(0), false>(),
		a0.get_jtype()
	)
)
{
}



java::security::cert::CRLException::CRLException()
: cpp_object<java::security::cert::CRLException>(
	environment::get().get_jenv()->NewObject(
		get_class<java::security::cert::CRLException::J2CPP_CLASS_NAME>(),
		get_method_id<java::security::cert::CRLException::J2CPP_CLASS_NAME, java::security::cert::CRLException::J2CPP_METHOD_NAME(1), java::security::cert::CRLException::J2CPP_METHOD_SIGNATURE(1), false>()
	)
)
{
}



java::security::cert::CRLException::CRLException(local_ref< java::lang::String > const &a0, local_ref< java::lang::Throwable > const &a1)
: cpp_object<java::security::cert::CRLException>(
	environment::get().get_jenv()->NewObject(
		get_class<java::security::cert::CRLException::J2CPP_CLASS_NAME>(),
		get_method_id<java::security::cert::CRLException::J2CPP_CLASS_NAME, java::security::cert::CRLException::J2CPP_METHOD_NAME(2), java::security::cert::CRLException::J2CPP_METHOD_SIGNATURE(2), false>(),
		a0.get_jtype(), a1.get_jtype()
	)
)
{
}



java::security::cert::CRLException::CRLException(local_ref< java::lang::Throwable > const &a0)
: cpp_object<java::security::cert::CRLException>(
	environment::get().get_jenv()->NewObject(
		get_class<java::security::cert::CRLException::J2CPP_CLASS_NAME>(),
		get_method_id<java::security::cert::CRLException::J2CPP_CLASS_NAME, java::security::cert::CRLException::J2CPP_METHOD_NAME(3), java::security::cert::CRLException::J2CPP_METHOD_SIGNATURE(3), false>(),
		a0.get_jtype()
	)
)
{
}



J2CPP_DEFINE_CLASS(java::security::cert::CRLException,"java/security/cert/CRLException")
J2CPP_DEFINE_METHOD(java::security::cert::CRLException,0,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::security::cert::CRLException,1,"<init>","()V")
J2CPP_DEFINE_METHOD(java::security::cert::CRLException,2,"<init>","(Ljava/lang/String;Ljava/lang/Throwable;)V")
J2CPP_DEFINE_METHOD(java::security::cert::CRLException,3,"<init>","(Ljava/lang/Throwable;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_CERT_CRLEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
