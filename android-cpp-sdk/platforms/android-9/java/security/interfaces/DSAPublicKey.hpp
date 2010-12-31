/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.security.interfaces.DSAPublicKey
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_INTERFACES_DSAPUBLICKEY_HPP_DECL
#define J2CPP_JAVA_SECURITY_INTERFACES_DSAPUBLICKEY_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace security { class PublicKey; } } }
namespace j2cpp { namespace java { namespace security { namespace interfaces { class DSAKey; } } } }
namespace j2cpp { namespace java { namespace math { class BigInteger; } } }


#include <java/lang/Object.hpp>
#include <java/math/BigInteger.hpp>
#include <java/security/PublicKey.hpp>
#include <java/security/interfaces/DSAKey.hpp>


namespace j2cpp {

namespace java { namespace security { namespace interfaces {

	class DSAPublicKey;
	class DSAPublicKey
		: public object<DSAPublicKey>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_FIELD(0)

		explicit DSAPublicKey(jobject jobj)
		: object<DSAPublicKey>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::security::interfaces::DSAKey>() const;
		operator local_ref<java::security::PublicKey>() const;


		local_ref< java::math::BigInteger > getY();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jlong > serialVersionUID;
	}; //class DSAPublicKey

} //namespace interfaces
} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_INTERFACES_DSAPUBLICKEY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_INTERFACES_DSAPUBLICKEY_HPP_IMPL
#define J2CPP_JAVA_SECURITY_INTERFACES_DSAPUBLICKEY_HPP_IMPL

namespace j2cpp {



java::security::interfaces::DSAPublicKey::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::security::interfaces::DSAPublicKey::operator local_ref<java::security::interfaces::DSAKey>() const
{
	return local_ref<java::security::interfaces::DSAKey>(get_jobject());
}

java::security::interfaces::DSAPublicKey::operator local_ref<java::security::PublicKey>() const
{
	return local_ref<java::security::PublicKey>(get_jobject());
}

local_ref< java::math::BigInteger > java::security::interfaces::DSAPublicKey::getY()
{
	return call_method<
		java::security::interfaces::DSAPublicKey::J2CPP_CLASS_NAME,
		java::security::interfaces::DSAPublicKey::J2CPP_METHOD_NAME(0),
		java::security::interfaces::DSAPublicKey::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< java::math::BigInteger > >
	(get_jobject());
}


static_field<
	java::security::interfaces::DSAPublicKey::J2CPP_CLASS_NAME,
	java::security::interfaces::DSAPublicKey::J2CPP_FIELD_NAME(0),
	java::security::interfaces::DSAPublicKey::J2CPP_FIELD_SIGNATURE(0),
	jlong
> java::security::interfaces::DSAPublicKey::serialVersionUID;


J2CPP_DEFINE_CLASS(java::security::interfaces::DSAPublicKey,"java/security/interfaces/DSAPublicKey")
J2CPP_DEFINE_METHOD(java::security::interfaces::DSAPublicKey,0,"getY","()Ljava/math/BigInteger;")
J2CPP_DEFINE_FIELD(java::security::interfaces::DSAPublicKey,0,"serialVersionUID","J")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_INTERFACES_DSAPUBLICKEY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
