/*================================================================================
  code generated by: java2cpp
  class: javax.crypto.interfaces.DHPrivateKey
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_CRYPTO_INTERFACES_DHPRIVATEKEY_HPP_DECL
#define J2CPP_JAVAX_CRYPTO_INTERFACES_DHPRIVATEKEY_HPP_DECL


namespace j2cpp { namespace javax { namespace crypto { namespace interfaces { class DHKey; } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace math { class BigInteger; } } }
namespace j2cpp { namespace java { namespace security { class PrivateKey; } } }


#include <java/lang/Object.hpp>
#include <java/math/BigInteger.hpp>
#include <java/security/PrivateKey.hpp>
#include <javax/crypto/interfaces/DHKey.hpp>


namespace j2cpp {

namespace javax { namespace crypto { namespace interfaces {

	class DHPrivateKey;
	class DHPrivateKey
		: public cpp_object<DHPrivateKey>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_FIELD(0)

		explicit DHPrivateKey(jobject jobj)
		: cpp_object<DHPrivateKey>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<javax::crypto::interfaces::DHKey>() const;
		operator local_ref<java::security::PrivateKey>() const;


		local_ref< java::math::BigInteger > getX();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_long > serialVersionUID;
	}; //class DHPrivateKey

} //namespace interfaces
} //namespace crypto
} //namespace javax

} //namespace j2cpp

#endif //J2CPP_JAVAX_CRYPTO_INTERFACES_DHPRIVATEKEY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_CRYPTO_INTERFACES_DHPRIVATEKEY_HPP_IMPL
#define J2CPP_JAVAX_CRYPTO_INTERFACES_DHPRIVATEKEY_HPP_IMPL

namespace j2cpp {



javax::crypto::interfaces::DHPrivateKey::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}

javax::crypto::interfaces::DHPrivateKey::operator local_ref<javax::crypto::interfaces::DHKey>() const
{
	return local_ref<javax::crypto::interfaces::DHKey>(get_jtype());
}

javax::crypto::interfaces::DHPrivateKey::operator local_ref<java::security::PrivateKey>() const
{
	return local_ref<java::security::PrivateKey>(get_jtype());
}

local_ref< java::math::BigInteger > javax::crypto::interfaces::DHPrivateKey::getX()
{
	return local_ref< java::math::BigInteger >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}


static_field<
	javax::crypto::interfaces::DHPrivateKey::J2CPP_CLASS_NAME,
	javax::crypto::interfaces::DHPrivateKey::J2CPP_FIELD_NAME(0),
	javax::crypto::interfaces::DHPrivateKey::J2CPP_FIELD_SIGNATURE(0),
	cpp_long
> javax::crypto::interfaces::DHPrivateKey::serialVersionUID;


J2CPP_DEFINE_CLASS(javax::crypto::interfaces::DHPrivateKey,"javax/crypto/interfaces/DHPrivateKey")
J2CPP_DEFINE_METHOD(javax::crypto::interfaces::DHPrivateKey,0,"getX","()Ljava/math/BigInteger;")
J2CPP_DEFINE_FIELD(javax::crypto::interfaces::DHPrivateKey,0,"serialVersionUID","J")

} //namespace j2cpp

#endif //J2CPP_JAVAX_CRYPTO_INTERFACES_DHPRIVATEKEY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
