/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.security.interfaces.ECPrivateKey
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_INTERFACES_ECPRIVATEKEY_HPP_DECL
#define J2CPP_JAVA_SECURITY_INTERFACES_ECPRIVATEKEY_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace security { class PrivateKey; } } }
namespace j2cpp { namespace java { namespace security { namespace interfaces { class ECKey; } } } }
namespace j2cpp { namespace java { namespace math { class BigInteger; } } }


#include <java/lang/Object.hpp>
#include <java/math/BigInteger.hpp>
#include <java/security/PrivateKey.hpp>
#include <java/security/interfaces/ECKey.hpp>


namespace j2cpp {

namespace java { namespace security { namespace interfaces {

	class ECPrivateKey;
	class ECPrivateKey
		: public object<ECPrivateKey>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_FIELD(0)

		explicit ECPrivateKey(jobject jobj)
		: object<ECPrivateKey>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::security::PrivateKey>() const;
		operator local_ref<java::security::interfaces::ECKey>() const;


		local_ref< java::math::BigInteger > getS();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jlong > serialVersionUID;
	}; //class ECPrivateKey

} //namespace interfaces
} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_INTERFACES_ECPRIVATEKEY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_INTERFACES_ECPRIVATEKEY_HPP_IMPL
#define J2CPP_JAVA_SECURITY_INTERFACES_ECPRIVATEKEY_HPP_IMPL

namespace j2cpp {



java::security::interfaces::ECPrivateKey::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::security::interfaces::ECPrivateKey::operator local_ref<java::security::PrivateKey>() const
{
	return local_ref<java::security::PrivateKey>(get_jobject());
}

java::security::interfaces::ECPrivateKey::operator local_ref<java::security::interfaces::ECKey>() const
{
	return local_ref<java::security::interfaces::ECKey>(get_jobject());
}

local_ref< java::math::BigInteger > java::security::interfaces::ECPrivateKey::getS()
{
	return call_method<
		java::security::interfaces::ECPrivateKey::J2CPP_CLASS_NAME,
		java::security::interfaces::ECPrivateKey::J2CPP_METHOD_NAME(0),
		java::security::interfaces::ECPrivateKey::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< java::math::BigInteger > >
	(get_jobject());
}


static_field<
	java::security::interfaces::ECPrivateKey::J2CPP_CLASS_NAME,
	java::security::interfaces::ECPrivateKey::J2CPP_FIELD_NAME(0),
	java::security::interfaces::ECPrivateKey::J2CPP_FIELD_SIGNATURE(0),
	jlong
> java::security::interfaces::ECPrivateKey::serialVersionUID;


J2CPP_DEFINE_CLASS(java::security::interfaces::ECPrivateKey,"java/security/interfaces/ECPrivateKey")
J2CPP_DEFINE_METHOD(java::security::interfaces::ECPrivateKey,0,"getS","()Ljava/math/BigInteger;")
J2CPP_DEFINE_FIELD(java::security::interfaces::ECPrivateKey,0,"serialVersionUID","J")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_INTERFACES_ECPRIVATEKEY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
