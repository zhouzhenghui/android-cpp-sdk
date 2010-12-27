/*================================================================================
  code generated by: java2cpp
  class: javax.crypto.SecretKey
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_CRYPTO_SECRETKEY_HPP_DECL
#define J2CPP_JAVAX_CRYPTO_SECRETKEY_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace security { class Key; } } }


#include <java/lang/Object.hpp>
#include <java/security/Key.hpp>


namespace j2cpp {

namespace javax { namespace crypto {

	class SecretKey;
	class SecretKey
		: public cpp_object<SecretKey>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_FIELD(0)

		explicit SecretKey(jobject jobj)
		: cpp_object<SecretKey>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::security::Key>() const;


		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_long > serialVersionUID;
	}; //class SecretKey

} //namespace crypto
} //namespace javax

} //namespace j2cpp

#endif //J2CPP_JAVAX_CRYPTO_SECRETKEY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_CRYPTO_SECRETKEY_HPP_IMPL
#define J2CPP_JAVAX_CRYPTO_SECRETKEY_HPP_IMPL

namespace j2cpp {



javax::crypto::SecretKey::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}

javax::crypto::SecretKey::operator local_ref<java::security::Key>() const
{
	return local_ref<java::security::Key>(get_jtype());
}

static_field<
	javax::crypto::SecretKey::J2CPP_CLASS_NAME,
	javax::crypto::SecretKey::J2CPP_FIELD_NAME(0),
	javax::crypto::SecretKey::J2CPP_FIELD_SIGNATURE(0),
	cpp_long
> javax::crypto::SecretKey::serialVersionUID;


J2CPP_DEFINE_CLASS(javax::crypto::SecretKey,"javax/crypto/SecretKey")
J2CPP_DEFINE_FIELD(javax::crypto::SecretKey,0,"serialVersionUID","J")

} //namespace j2cpp

#endif //J2CPP_JAVAX_CRYPTO_SECRETKEY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
