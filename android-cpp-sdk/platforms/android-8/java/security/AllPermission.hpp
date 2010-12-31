/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.security.AllPermission
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_ALLPERMISSION_HPP_DECL
#define J2CPP_JAVA_SECURITY_ALLPERMISSION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace security { class Permission; } } }
namespace j2cpp { namespace java { namespace security { class PermissionCollection; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/security/Permission.hpp>
#include <java/security/PermissionCollection.hpp>


namespace j2cpp {

namespace java { namespace security {

	class AllPermission;
	class AllPermission
		: public object<AllPermission>
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

		explicit AllPermission(jobject jobj)
		: object<AllPermission>(jobj)
		{
		}

		operator local_ref<java::security::Permission>() const;


		AllPermission(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		AllPermission();
		jboolean equals(local_ref< java::lang::Object >  const&);
		jint hashCode();
		local_ref< java::lang::String > getActions();
		jboolean implies(local_ref< java::security::Permission >  const&);
		local_ref< java::security::PermissionCollection > newPermissionCollection();
	}; //class AllPermission

} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_ALLPERMISSION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_ALLPERMISSION_HPP_IMPL
#define J2CPP_JAVA_SECURITY_ALLPERMISSION_HPP_IMPL

namespace j2cpp {



java::security::AllPermission::operator local_ref<java::security::Permission>() const
{
	return local_ref<java::security::Permission>(get_jobject());
}


java::security::AllPermission::AllPermission(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
: object<java::security::AllPermission>(
	call_new_object<
		java::security::AllPermission::J2CPP_CLASS_NAME,
		java::security::AllPermission::J2CPP_METHOD_NAME(0),
		java::security::AllPermission::J2CPP_METHOD_SIGNATURE(0)>
	(a0, a1)
)
{
}



java::security::AllPermission::AllPermission()
: object<java::security::AllPermission>(
	call_new_object<
		java::security::AllPermission::J2CPP_CLASS_NAME,
		java::security::AllPermission::J2CPP_METHOD_NAME(1),
		java::security::AllPermission::J2CPP_METHOD_SIGNATURE(1)>
	()
)
{
}


jboolean java::security::AllPermission::equals(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::security::AllPermission::J2CPP_CLASS_NAME,
		java::security::AllPermission::J2CPP_METHOD_NAME(2),
		java::security::AllPermission::J2CPP_METHOD_SIGNATURE(2), 
		jboolean >
	(get_jobject(), a0);
}

jint java::security::AllPermission::hashCode()
{
	return call_method<
		java::security::AllPermission::J2CPP_CLASS_NAME,
		java::security::AllPermission::J2CPP_METHOD_NAME(3),
		java::security::AllPermission::J2CPP_METHOD_SIGNATURE(3), 
		jint >
	(get_jobject());
}

local_ref< java::lang::String > java::security::AllPermission::getActions()
{
	return call_method<
		java::security::AllPermission::J2CPP_CLASS_NAME,
		java::security::AllPermission::J2CPP_METHOD_NAME(4),
		java::security::AllPermission::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::lang::String > >
	(get_jobject());
}

jboolean java::security::AllPermission::implies(local_ref< java::security::Permission > const &a0)
{
	return call_method<
		java::security::AllPermission::J2CPP_CLASS_NAME,
		java::security::AllPermission::J2CPP_METHOD_NAME(5),
		java::security::AllPermission::J2CPP_METHOD_SIGNATURE(5), 
		jboolean >
	(get_jobject(), a0);
}

local_ref< java::security::PermissionCollection > java::security::AllPermission::newPermissionCollection()
{
	return call_method<
		java::security::AllPermission::J2CPP_CLASS_NAME,
		java::security::AllPermission::J2CPP_METHOD_NAME(6),
		java::security::AllPermission::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::security::PermissionCollection > >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(java::security::AllPermission,"java/security/AllPermission")
J2CPP_DEFINE_METHOD(java::security::AllPermission,0,"<init>","(Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::security::AllPermission,1,"<init>","()V")
J2CPP_DEFINE_METHOD(java::security::AllPermission,2,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::security::AllPermission,3,"hashCode","()I")
J2CPP_DEFINE_METHOD(java::security::AllPermission,4,"getActions","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::security::AllPermission,5,"implies","(Ljava/security/Permission;)Z")
J2CPP_DEFINE_METHOD(java::security::AllPermission,6,"newPermissionCollection","()Ljava/security/PermissionCollection;")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_ALLPERMISSION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
