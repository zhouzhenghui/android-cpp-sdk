/*================================================================================
  code generated by: java2cpp
  class: java.security.UnresolvedPermission
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_UNRESOLVEDPERMISSION_HPP_DECL
#define J2CPP_JAVA_SECURITY_UNRESOLVEDPERMISSION_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace security { class Permission; } } }
namespace j2cpp { namespace java { namespace security { class PermissionCollection; } } }
namespace j2cpp { namespace java { namespace security { namespace cert { class Certificate; } } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/security/Permission.hpp>
#include <java/security/PermissionCollection.hpp>
#include <java/security/cert/Certificate.hpp>


namespace j2cpp {

namespace java { namespace security {

	class UnresolvedPermission;
	class UnresolvedPermission
		: public cpp_object<UnresolvedPermission>
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
		J2CPP_DECLARE_METHOD(10)

		explicit UnresolvedPermission(jobject jobj)
		: cpp_object<UnresolvedPermission>(jobj)
		{
		}

		operator local_ref<java::security::Permission>() const;
		operator local_ref<java::io::Serializable>() const;


		UnresolvedPermission(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, local_ref< cpp_object_array<java::security::cert::Certificate, 1> > const&);
		cpp_boolean equals(local_ref< java::lang::Object > const&);
		cpp_int hashCode();
		local_ref< java::lang::String > getActions();
		local_ref< java::lang::String > getUnresolvedName();
		local_ref< java::lang::String > getUnresolvedActions();
		local_ref< java::lang::String > getUnresolvedType();
		local_ref< cpp_object_array<java::security::cert::Certificate, 1> > getUnresolvedCerts();
		cpp_boolean implies(local_ref< java::security::Permission > const&);
		local_ref< java::lang::String > toString();
		local_ref< java::security::PermissionCollection > newPermissionCollection();
	}; //class UnresolvedPermission

} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_UNRESOLVEDPERMISSION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_UNRESOLVEDPERMISSION_HPP_IMPL
#define J2CPP_JAVA_SECURITY_UNRESOLVEDPERMISSION_HPP_IMPL

namespace j2cpp {



java::security::UnresolvedPermission::operator local_ref<java::security::Permission>() const
{
	return local_ref<java::security::Permission>(get_jtype());
}

java::security::UnresolvedPermission::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jtype());
}


java::security::UnresolvedPermission::UnresolvedPermission(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::String > const &a2, local_ref< cpp_object_array<java::security::cert::Certificate, 1> > const &a3)
: cpp_object<java::security::UnresolvedPermission>(
	environment::get().get_jenv()->NewObject(
		get_class<java::security::UnresolvedPermission::J2CPP_CLASS_NAME>(),
		get_method_id<java::security::UnresolvedPermission::J2CPP_CLASS_NAME, java::security::UnresolvedPermission::J2CPP_METHOD_NAME(0), java::security::UnresolvedPermission::J2CPP_METHOD_SIGNATURE(0), false>(),
		a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
	)
)
{
}


cpp_boolean java::security::UnresolvedPermission::equals(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::security::UnresolvedPermission::hashCode()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

local_ref< java::lang::String > java::security::UnresolvedPermission::getActions()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

local_ref< java::lang::String > java::security::UnresolvedPermission::getUnresolvedName()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

local_ref< java::lang::String > java::security::UnresolvedPermission::getUnresolvedActions()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

local_ref< java::lang::String > java::security::UnresolvedPermission::getUnresolvedType()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

local_ref< cpp_object_array<java::security::cert::Certificate, 1> > java::security::UnresolvedPermission::getUnresolvedCerts()
{
	return local_ref< cpp_object_array<java::security::cert::Certificate, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

cpp_boolean java::security::UnresolvedPermission::implies(local_ref< java::security::Permission > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > java::security::UnresolvedPermission::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}

local_ref< java::security::PermissionCollection > java::security::UnresolvedPermission::newPermissionCollection()
{
	return local_ref< java::security::PermissionCollection >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(java::security::UnresolvedPermission,"java/security/UnresolvedPermission")
J2CPP_DEFINE_METHOD(java::security::UnresolvedPermission,0,"<init>","(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[java.security.cert.Certificate)V")
J2CPP_DEFINE_METHOD(java::security::UnresolvedPermission,1,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::security::UnresolvedPermission,2,"hashCode","()I")
J2CPP_DEFINE_METHOD(java::security::UnresolvedPermission,3,"getActions","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::security::UnresolvedPermission,4,"getUnresolvedName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::security::UnresolvedPermission,5,"getUnresolvedActions","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::security::UnresolvedPermission,6,"getUnresolvedType","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::security::UnresolvedPermission,7,"getUnresolvedCerts","()[java.security.cert.Certificate")
J2CPP_DEFINE_METHOD(java::security::UnresolvedPermission,8,"implies","(Ljava/security/Permission;)Z")
J2CPP_DEFINE_METHOD(java::security::UnresolvedPermission,9,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::security::UnresolvedPermission,10,"newPermissionCollection","()Ljava/security/PermissionCollection;")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_UNRESOLVEDPERMISSION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
