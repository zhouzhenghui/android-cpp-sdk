/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.security.DigestException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_DIGESTEXCEPTION_HPP_DECL
#define J2CPP_JAVA_SECURITY_DIGESTEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace security { class GeneralSecurityException; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }


#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>
#include <java/security/GeneralSecurityException.hpp>


namespace j2cpp {

namespace java { namespace security {

	class DigestException;
	class DigestException
		: public object<DigestException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		explicit DigestException(jobject jobj)
		: object<DigestException>(jobj)
		{
		}

		operator local_ref<java::security::GeneralSecurityException>() const;


		DigestException(local_ref< java::lang::String > const&);
		DigestException();
		DigestException(local_ref< java::lang::String > const&, local_ref< java::lang::Throwable > const&);
		DigestException(local_ref< java::lang::Throwable > const&);
	}; //class DigestException

} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_DIGESTEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_DIGESTEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_SECURITY_DIGESTEXCEPTION_HPP_IMPL

namespace j2cpp {



java::security::DigestException::operator local_ref<java::security::GeneralSecurityException>() const
{
	return local_ref<java::security::GeneralSecurityException>(get_jobject());
}


java::security::DigestException::DigestException(local_ref< java::lang::String > const &a0)
: object<java::security::DigestException>(
	call_new_object<
		java::security::DigestException::J2CPP_CLASS_NAME,
		java::security::DigestException::J2CPP_METHOD_NAME(0),
		java::security::DigestException::J2CPP_METHOD_SIGNATURE(0)>
	(a0)
)
{
}



java::security::DigestException::DigestException()
: object<java::security::DigestException>(
	call_new_object<
		java::security::DigestException::J2CPP_CLASS_NAME,
		java::security::DigestException::J2CPP_METHOD_NAME(1),
		java::security::DigestException::J2CPP_METHOD_SIGNATURE(1)>
	()
)
{
}



java::security::DigestException::DigestException(local_ref< java::lang::String > const &a0, local_ref< java::lang::Throwable > const &a1)
: object<java::security::DigestException>(
	call_new_object<
		java::security::DigestException::J2CPP_CLASS_NAME,
		java::security::DigestException::J2CPP_METHOD_NAME(2),
		java::security::DigestException::J2CPP_METHOD_SIGNATURE(2)>
	(a0, a1)
)
{
}



java::security::DigestException::DigestException(local_ref< java::lang::Throwable > const &a0)
: object<java::security::DigestException>(
	call_new_object<
		java::security::DigestException::J2CPP_CLASS_NAME,
		java::security::DigestException::J2CPP_METHOD_NAME(3),
		java::security::DigestException::J2CPP_METHOD_SIGNATURE(3)>
	(a0)
)
{
}



J2CPP_DEFINE_CLASS(java::security::DigestException,"java/security/DigestException")
J2CPP_DEFINE_METHOD(java::security::DigestException,0,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::security::DigestException,1,"<init>","()V")
J2CPP_DEFINE_METHOD(java::security::DigestException,2,"<init>","(Ljava/lang/String;Ljava/lang/Throwable;)V")
J2CPP_DEFINE_METHOD(java::security::DigestException,3,"<init>","(Ljava/lang/Throwable;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_DIGESTEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
