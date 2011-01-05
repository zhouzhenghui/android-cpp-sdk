/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.security.PrivilegedActionException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_PRIVILEGEDACTIONEXCEPTION_HPP_DECL
#define J2CPP_JAVA_SECURITY_PRIVILEGEDACTIONEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }
namespace j2cpp { namespace java { namespace lang { class Exception; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>


namespace j2cpp {

namespace java { namespace security {

	class PrivilegedActionException;
	class PrivilegedActionException
		: public object<PrivilegedActionException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		explicit PrivilegedActionException(jobject jobj)
		: object<PrivilegedActionException>(jobj)
		{
		}

		operator local_ref<java::io::Serializable>() const;
		operator local_ref<java::lang::Throwable>() const;
		operator local_ref<java::lang::Exception>() const;
		operator local_ref<java::lang::Object>() const;


		PrivilegedActionException(local_ref< java::lang::Exception > const&);
		local_ref< java::lang::Exception > getException();
		local_ref< java::lang::Throwable > getCause();
		local_ref< java::lang::String > toString();
	}; //class PrivilegedActionException

} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_PRIVILEGEDACTIONEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_PRIVILEGEDACTIONEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_SECURITY_PRIVILEGEDACTIONEXCEPTION_HPP_IMPL

namespace j2cpp {



java::security::PrivilegedActionException::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}

java::security::PrivilegedActionException::operator local_ref<java::lang::Throwable>() const
{
	return local_ref<java::lang::Throwable>(get_jobject());
}

java::security::PrivilegedActionException::operator local_ref<java::lang::Exception>() const
{
	return local_ref<java::lang::Exception>(get_jobject());
}

java::security::PrivilegedActionException::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


java::security::PrivilegedActionException::PrivilegedActionException(local_ref< java::lang::Exception > const &a0)
: object<java::security::PrivilegedActionException>(
	call_new_object<
		java::security::PrivilegedActionException::J2CPP_CLASS_NAME,
		java::security::PrivilegedActionException::J2CPP_METHOD_NAME(0),
		java::security::PrivilegedActionException::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}


local_ref< java::lang::Exception > java::security::PrivilegedActionException::getException()
{
	return call_method<
		java::security::PrivilegedActionException::J2CPP_CLASS_NAME,
		java::security::PrivilegedActionException::J2CPP_METHOD_NAME(1),
		java::security::PrivilegedActionException::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::Exception >
	>(get_jobject());
}

local_ref< java::lang::Throwable > java::security::PrivilegedActionException::getCause()
{
	return call_method<
		java::security::PrivilegedActionException::J2CPP_CLASS_NAME,
		java::security::PrivilegedActionException::J2CPP_METHOD_NAME(2),
		java::security::PrivilegedActionException::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::Throwable >
	>(get_jobject());
}

local_ref< java::lang::String > java::security::PrivilegedActionException::toString()
{
	return call_method<
		java::security::PrivilegedActionException::J2CPP_CLASS_NAME,
		java::security::PrivilegedActionException::J2CPP_METHOD_NAME(3),
		java::security::PrivilegedActionException::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::lang::String >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(java::security::PrivilegedActionException,"java/security/PrivilegedActionException")
J2CPP_DEFINE_METHOD(java::security::PrivilegedActionException,0,"<init>","(Ljava/lang/Exception;)V")
J2CPP_DEFINE_METHOD(java::security::PrivilegedActionException,1,"getException","()Ljava/lang/Exception;")
J2CPP_DEFINE_METHOD(java::security::PrivilegedActionException,2,"getCause","()Ljava/lang/Throwable;")
J2CPP_DEFINE_METHOD(java::security::PrivilegedActionException,3,"toString","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_PRIVILEGEDACTIONEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
