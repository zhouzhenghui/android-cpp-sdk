/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.lang.SecurityException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_SECURITYEXCEPTION_HPP_DECL
#define J2CPP_JAVA_LANG_SECURITYEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class RuntimeException; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }


#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>


namespace j2cpp {

namespace java { namespace lang {

	class SecurityException;
	class SecurityException
		: public object<SecurityException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		explicit SecurityException(jobject jobj)
		: object<SecurityException>(jobj)
		{
		}

		operator local_ref<java::lang::RuntimeException>() const;


		SecurityException();
		SecurityException(local_ref< java::lang::String > const&);
		SecurityException(local_ref< java::lang::String > const&, local_ref< java::lang::Throwable > const&);
		SecurityException(local_ref< java::lang::Throwable > const&);
	}; //class SecurityException

} //namespace lang
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_SECURITYEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_SECURITYEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_LANG_SECURITYEXCEPTION_HPP_IMPL

namespace j2cpp {



java::lang::SecurityException::operator local_ref<java::lang::RuntimeException>() const
{
	return local_ref<java::lang::RuntimeException>(get_jobject());
}


java::lang::SecurityException::SecurityException()
: object<java::lang::SecurityException>(
	call_new_object<
		java::lang::SecurityException::J2CPP_CLASS_NAME,
		java::lang::SecurityException::J2CPP_METHOD_NAME(0),
		java::lang::SecurityException::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}



java::lang::SecurityException::SecurityException(local_ref< java::lang::String > const &a0)
: object<java::lang::SecurityException>(
	call_new_object<
		java::lang::SecurityException::J2CPP_CLASS_NAME,
		java::lang::SecurityException::J2CPP_METHOD_NAME(1),
		java::lang::SecurityException::J2CPP_METHOD_SIGNATURE(1)>
	(a0)
)
{
}



java::lang::SecurityException::SecurityException(local_ref< java::lang::String > const &a0, local_ref< java::lang::Throwable > const &a1)
: object<java::lang::SecurityException>(
	call_new_object<
		java::lang::SecurityException::J2CPP_CLASS_NAME,
		java::lang::SecurityException::J2CPP_METHOD_NAME(2),
		java::lang::SecurityException::J2CPP_METHOD_SIGNATURE(2)>
	(a0, a1)
)
{
}



java::lang::SecurityException::SecurityException(local_ref< java::lang::Throwable > const &a0)
: object<java::lang::SecurityException>(
	call_new_object<
		java::lang::SecurityException::J2CPP_CLASS_NAME,
		java::lang::SecurityException::J2CPP_METHOD_NAME(3),
		java::lang::SecurityException::J2CPP_METHOD_SIGNATURE(3)>
	(a0)
)
{
}



J2CPP_DEFINE_CLASS(java::lang::SecurityException,"java/lang/SecurityException")
J2CPP_DEFINE_METHOD(java::lang::SecurityException,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::lang::SecurityException,1,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::lang::SecurityException,2,"<init>","(Ljava/lang/String;Ljava/lang/Throwable;)V")
J2CPP_DEFINE_METHOD(java::lang::SecurityException,3,"<init>","(Ljava/lang/Throwable;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_SECURITYEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
