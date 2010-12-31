/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.security.ProtectionDomain
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_PROTECTIONDOMAIN_HPP_DECL
#define J2CPP_JAVA_SECURITY_PROTECTIONDOMAIN_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class ClassLoader; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace security { class Principal; } } }
namespace j2cpp { namespace java { namespace security { class Permission; } } }
namespace j2cpp { namespace java { namespace security { class PermissionCollection; } } }
namespace j2cpp { namespace java { namespace security { class CodeSource; } } }


#include <java/lang/ClassLoader.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/security/CodeSource.hpp>
#include <java/security/Permission.hpp>
#include <java/security/PermissionCollection.hpp>
#include <java/security/Principal.hpp>


namespace j2cpp {

namespace java { namespace security {

	class ProtectionDomain;
	class ProtectionDomain
		: public object<ProtectionDomain>
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

		explicit ProtectionDomain(jobject jobj)
		: object<ProtectionDomain>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		ProtectionDomain(local_ref< java::security::CodeSource > const&, local_ref< java::security::PermissionCollection > const&);
		ProtectionDomain(local_ref< java::security::CodeSource > const&, local_ref< java::security::PermissionCollection > const&, local_ref< java::lang::ClassLoader > const&, local_ref< array< local_ref< java::security::Principal >, 1> > const&);
		local_ref< java::lang::ClassLoader > getClassLoader();
		local_ref< java::security::CodeSource > getCodeSource();
		local_ref< java::security::PermissionCollection > getPermissions();
		local_ref< array< local_ref< java::security::Principal >, 1> > getPrincipals();
		jboolean implies(local_ref< java::security::Permission >  const&);
		local_ref< java::lang::String > toString();
	}; //class ProtectionDomain

} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_PROTECTIONDOMAIN_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_PROTECTIONDOMAIN_HPP_IMPL
#define J2CPP_JAVA_SECURITY_PROTECTIONDOMAIN_HPP_IMPL

namespace j2cpp {



java::security::ProtectionDomain::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


java::security::ProtectionDomain::ProtectionDomain(local_ref< java::security::CodeSource > const &a0, local_ref< java::security::PermissionCollection > const &a1)
: object<java::security::ProtectionDomain>(
	call_new_object<
		java::security::ProtectionDomain::J2CPP_CLASS_NAME,
		java::security::ProtectionDomain::J2CPP_METHOD_NAME(0),
		java::security::ProtectionDomain::J2CPP_METHOD_SIGNATURE(0)>
	(a0, a1)
)
{
}



java::security::ProtectionDomain::ProtectionDomain(local_ref< java::security::CodeSource > const &a0, local_ref< java::security::PermissionCollection > const &a1, local_ref< java::lang::ClassLoader > const &a2, local_ref< array< local_ref< java::security::Principal >, 1> > const &a3)
: object<java::security::ProtectionDomain>(
	call_new_object<
		java::security::ProtectionDomain::J2CPP_CLASS_NAME,
		java::security::ProtectionDomain::J2CPP_METHOD_NAME(1),
		java::security::ProtectionDomain::J2CPP_METHOD_SIGNATURE(1)>
	(a0, a1, a2, a3)
)
{
}


local_ref< java::lang::ClassLoader > java::security::ProtectionDomain::getClassLoader()
{
	return call_method<
		java::security::ProtectionDomain::J2CPP_CLASS_NAME,
		java::security::ProtectionDomain::J2CPP_METHOD_NAME(2),
		java::security::ProtectionDomain::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::ClassLoader > >
	(get_jobject());
}

local_ref< java::security::CodeSource > java::security::ProtectionDomain::getCodeSource()
{
	return call_method<
		java::security::ProtectionDomain::J2CPP_CLASS_NAME,
		java::security::ProtectionDomain::J2CPP_METHOD_NAME(3),
		java::security::ProtectionDomain::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::security::CodeSource > >
	(get_jobject());
}

local_ref< java::security::PermissionCollection > java::security::ProtectionDomain::getPermissions()
{
	return call_method<
		java::security::ProtectionDomain::J2CPP_CLASS_NAME,
		java::security::ProtectionDomain::J2CPP_METHOD_NAME(4),
		java::security::ProtectionDomain::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::security::PermissionCollection > >
	(get_jobject());
}

local_ref< array< local_ref< java::security::Principal >, 1> > java::security::ProtectionDomain::getPrincipals()
{
	return call_method<
		java::security::ProtectionDomain::J2CPP_CLASS_NAME,
		java::security::ProtectionDomain::J2CPP_METHOD_NAME(5),
		java::security::ProtectionDomain::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< array< local_ref< java::security::Principal >, 1> > >
	(get_jobject());
}

jboolean java::security::ProtectionDomain::implies(local_ref< java::security::Permission > const &a0)
{
	return call_method<
		java::security::ProtectionDomain::J2CPP_CLASS_NAME,
		java::security::ProtectionDomain::J2CPP_METHOD_NAME(6),
		java::security::ProtectionDomain::J2CPP_METHOD_SIGNATURE(6), 
		jboolean >
	(get_jobject(), a0);
}

local_ref< java::lang::String > java::security::ProtectionDomain::toString()
{
	return call_method<
		java::security::ProtectionDomain::J2CPP_CLASS_NAME,
		java::security::ProtectionDomain::J2CPP_METHOD_NAME(7),
		java::security::ProtectionDomain::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::lang::String > >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(java::security::ProtectionDomain,"java/security/ProtectionDomain")
J2CPP_DEFINE_METHOD(java::security::ProtectionDomain,0,"<init>","(Ljava/security/CodeSource;Ljava/security/PermissionCollection;)V")
J2CPP_DEFINE_METHOD(java::security::ProtectionDomain,1,"<init>","(Ljava/security/CodeSource;Ljava/security/PermissionCollection;Ljava/lang/ClassLoader;[java.security.Principal)V")
J2CPP_DEFINE_METHOD(java::security::ProtectionDomain,2,"getClassLoader","()Ljava/lang/ClassLoader;")
J2CPP_DEFINE_METHOD(java::security::ProtectionDomain,3,"getCodeSource","()Ljava/security/CodeSource;")
J2CPP_DEFINE_METHOD(java::security::ProtectionDomain,4,"getPermissions","()Ljava/security/PermissionCollection;")
J2CPP_DEFINE_METHOD(java::security::ProtectionDomain,5,"getPrincipals","()[java.security.Principal")
J2CPP_DEFINE_METHOD(java::security::ProtectionDomain,6,"implies","(Ljava/security/Permission;)Z")
J2CPP_DEFINE_METHOD(java::security::ProtectionDomain,7,"toString","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_PROTECTIONDOMAIN_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
