/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.security.AccessController
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_ACCESSCONTROLLER_HPP_DECL
#define J2CPP_JAVA_SECURITY_ACCESSCONTROLLER_HPP_DECL


namespace j2cpp { namespace java { namespace security { class PrivilegedAction; } } }
namespace j2cpp { namespace java { namespace security { class Permission; } } }
namespace j2cpp { namespace java { namespace security { class AccessControlContext; } } }
namespace j2cpp { namespace java { namespace security { class PrivilegedExceptionAction; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/security/AccessControlContext.hpp>
#include <java/security/Permission.hpp>
#include <java/security/PrivilegedAction.hpp>
#include <java/security/PrivilegedExceptionAction.hpp>


namespace j2cpp {

namespace java { namespace security {

	class AccessController;
	class AccessController
		: public object<AccessController>
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

		explicit AccessController(jobject jobj)
		: object<AccessController>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		static local_ref< java::lang::Object > doPrivileged(local_ref< java::security::PrivilegedAction >  const&);
		static local_ref< java::lang::Object > doPrivileged(local_ref< java::security::PrivilegedAction >  const&, local_ref< java::security::AccessControlContext >  const&);
		static local_ref< java::lang::Object > doPrivileged(local_ref< java::security::PrivilegedExceptionAction >  const&);
		static local_ref< java::lang::Object > doPrivileged(local_ref< java::security::PrivilegedExceptionAction >  const&, local_ref< java::security::AccessControlContext >  const&);
		static void checkPermission(local_ref< java::security::Permission >  const&);
		static local_ref< java::security::AccessControlContext > getContext();
	}; //class AccessController

} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_ACCESSCONTROLLER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_ACCESSCONTROLLER_HPP_IMPL
#define J2CPP_JAVA_SECURITY_ACCESSCONTROLLER_HPP_IMPL

namespace j2cpp {



java::security::AccessController::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


local_ref< java::lang::Object > java::security::AccessController::doPrivileged(local_ref< java::security::PrivilegedAction > const &a0)
{
	return call_static_method<
		java::security::AccessController::J2CPP_CLASS_NAME,
		java::security::AccessController::J2CPP_METHOD_NAME(1),
		java::security::AccessController::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::Object >
	>(a0);
}

local_ref< java::lang::Object > java::security::AccessController::doPrivileged(local_ref< java::security::PrivilegedAction > const &a0, local_ref< java::security::AccessControlContext > const &a1)
{
	return call_static_method<
		java::security::AccessController::J2CPP_CLASS_NAME,
		java::security::AccessController::J2CPP_METHOD_NAME(2),
		java::security::AccessController::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::Object >
	>(a0, a1);
}

local_ref< java::lang::Object > java::security::AccessController::doPrivileged(local_ref< java::security::PrivilegedExceptionAction > const &a0)
{
	return call_static_method<
		java::security::AccessController::J2CPP_CLASS_NAME,
		java::security::AccessController::J2CPP_METHOD_NAME(3),
		java::security::AccessController::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::lang::Object >
	>(a0);
}

local_ref< java::lang::Object > java::security::AccessController::doPrivileged(local_ref< java::security::PrivilegedExceptionAction > const &a0, local_ref< java::security::AccessControlContext > const &a1)
{
	return call_static_method<
		java::security::AccessController::J2CPP_CLASS_NAME,
		java::security::AccessController::J2CPP_METHOD_NAME(4),
		java::security::AccessController::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::lang::Object >
	>(a0, a1);
}

void java::security::AccessController::checkPermission(local_ref< java::security::Permission > const &a0)
{
	return call_static_method<
		java::security::AccessController::J2CPP_CLASS_NAME,
		java::security::AccessController::J2CPP_METHOD_NAME(5),
		java::security::AccessController::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(a0);
}

local_ref< java::security::AccessControlContext > java::security::AccessController::getContext()
{
	return call_static_method<
		java::security::AccessController::J2CPP_CLASS_NAME,
		java::security::AccessController::J2CPP_METHOD_NAME(6),
		java::security::AccessController::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::security::AccessControlContext >
	>();
}


J2CPP_DEFINE_CLASS(java::security::AccessController,"java/security/AccessController")
J2CPP_DEFINE_METHOD(java::security::AccessController,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::security::AccessController,1,"doPrivileged","(Ljava/security/PrivilegedAction;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::security::AccessController,2,"doPrivileged","(Ljava/security/PrivilegedAction;Ljava/security/AccessControlContext;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::security::AccessController,3,"doPrivileged","(Ljava/security/PrivilegedExceptionAction;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::security::AccessController,4,"doPrivileged","(Ljava/security/PrivilegedExceptionAction;Ljava/security/AccessControlContext;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::security::AccessController,5,"checkPermission","(Ljava/security/Permission;)V")
J2CPP_DEFINE_METHOD(java::security::AccessController,6,"getContext","()Ljava/security/AccessControlContext;")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_ACCESSCONTROLLER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
