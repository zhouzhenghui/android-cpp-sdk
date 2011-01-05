/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.security.Signer
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_SIGNER_HPP_DECL
#define J2CPP_JAVA_SECURITY_SIGNER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace security { class IdentityScope; } } }
namespace j2cpp { namespace java { namespace security { class Principal; } } }
namespace j2cpp { namespace java { namespace security { class Identity; } } }
namespace j2cpp { namespace java { namespace security { class PrivateKey; } } }
namespace j2cpp { namespace java { namespace security { class KeyPair; } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/security/Identity.hpp>
#include <java/security/IdentityScope.hpp>
#include <java/security/KeyPair.hpp>
#include <java/security/Principal.hpp>
#include <java/security/PrivateKey.hpp>


namespace j2cpp {

namespace java { namespace security {

	class Signer;
	class Signer
		: public object<Signer>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)

		explicit Signer(jobject jobj)
		: object<Signer>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::security::Principal>() const;
		operator local_ref<java::security::Identity>() const;
		operator local_ref<java::io::Serializable>() const;


		Signer(local_ref< java::lang::String > const&);
		Signer(local_ref< java::lang::String > const&, local_ref< java::security::IdentityScope > const&);
		local_ref< java::security::PrivateKey > getPrivateKey();
		void setKeyPair(local_ref< java::security::KeyPair >  const&);
		local_ref< java::lang::String > toString();
	}; //class Signer

} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_SIGNER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_SIGNER_HPP_IMPL
#define J2CPP_JAVA_SECURITY_SIGNER_HPP_IMPL

namespace j2cpp {



java::security::Signer::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::security::Signer::operator local_ref<java::security::Principal>() const
{
	return local_ref<java::security::Principal>(get_jobject());
}

java::security::Signer::operator local_ref<java::security::Identity>() const
{
	return local_ref<java::security::Identity>(get_jobject());
}

java::security::Signer::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}



java::security::Signer::Signer(local_ref< java::lang::String > const &a0)
: object<java::security::Signer>(
	call_new_object<
		java::security::Signer::J2CPP_CLASS_NAME,
		java::security::Signer::J2CPP_METHOD_NAME(1),
		java::security::Signer::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}



java::security::Signer::Signer(local_ref< java::lang::String > const &a0, local_ref< java::security::IdentityScope > const &a1)
: object<java::security::Signer>(
	call_new_object<
		java::security::Signer::J2CPP_CLASS_NAME,
		java::security::Signer::J2CPP_METHOD_NAME(2),
		java::security::Signer::J2CPP_METHOD_SIGNATURE(2)
	>(a0, a1)
)
{
}


local_ref< java::security::PrivateKey > java::security::Signer::getPrivateKey()
{
	return call_method<
		java::security::Signer::J2CPP_CLASS_NAME,
		java::security::Signer::J2CPP_METHOD_NAME(3),
		java::security::Signer::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::security::PrivateKey >
	>(get_jobject());
}

void java::security::Signer::setKeyPair(local_ref< java::security::KeyPair > const &a0)
{
	return call_method<
		java::security::Signer::J2CPP_CLASS_NAME,
		java::security::Signer::J2CPP_METHOD_NAME(4),
		java::security::Signer::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0);
}

local_ref< java::lang::String > java::security::Signer::toString()
{
	return call_method<
		java::security::Signer::J2CPP_CLASS_NAME,
		java::security::Signer::J2CPP_METHOD_NAME(5),
		java::security::Signer::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::lang::String >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(java::security::Signer,"java/security/Signer")
J2CPP_DEFINE_METHOD(java::security::Signer,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::security::Signer,1,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::security::Signer,2,"<init>","(Ljava/lang/String;Ljava/security/IdentityScope;)V")
J2CPP_DEFINE_METHOD(java::security::Signer,3,"getPrivateKey","()Ljava/security/PrivateKey;")
J2CPP_DEFINE_METHOD(java::security::Signer,4,"setKeyPair","(Ljava/security/KeyPair;)V")
J2CPP_DEFINE_METHOD(java::security::Signer,5,"toString","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_SIGNER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
