/*================================================================================
  code generated by: java2cpp
  class: javax.crypto.SecretKeyFactorySpi
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_CRYPTO_SECRETKEYFACTORYSPI_HPP_DECL
#define J2CPP_JAVAX_CRYPTO_SECRETKEYFACTORYSPI_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>


namespace j2cpp {

namespace javax { namespace crypto {

	class SecretKeyFactorySpi;
	class SecretKeyFactorySpi
		: public cpp_object<SecretKeyFactorySpi>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		explicit SecretKeyFactorySpi(jobject jobj)
		: cpp_object<SecretKeyFactorySpi>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		SecretKeyFactorySpi();
	}; //class SecretKeyFactorySpi

} //namespace crypto
} //namespace javax

} //namespace j2cpp

#endif //J2CPP_JAVAX_CRYPTO_SECRETKEYFACTORYSPI_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_CRYPTO_SECRETKEYFACTORYSPI_HPP_IMPL
#define J2CPP_JAVAX_CRYPTO_SECRETKEYFACTORYSPI_HPP_IMPL

namespace j2cpp {



javax::crypto::SecretKeyFactorySpi::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}


javax::crypto::SecretKeyFactorySpi::SecretKeyFactorySpi()
: cpp_object<javax::crypto::SecretKeyFactorySpi>(
	environment::get().get_jenv()->NewObject(
		get_class<javax::crypto::SecretKeyFactorySpi::J2CPP_CLASS_NAME>(),
		get_method_id<javax::crypto::SecretKeyFactorySpi::J2CPP_CLASS_NAME, javax::crypto::SecretKeyFactorySpi::J2CPP_METHOD_NAME(0), javax::crypto::SecretKeyFactorySpi::J2CPP_METHOD_SIGNATURE(0), false>()
	)
)
{
}






J2CPP_DEFINE_CLASS(javax::crypto::SecretKeyFactorySpi,"javax/crypto/SecretKeyFactorySpi")
J2CPP_DEFINE_METHOD(javax::crypto::SecretKeyFactorySpi,0,"<init>","()V")
J2CPP_DEFINE_METHOD(javax::crypto::SecretKeyFactorySpi,1,"engineGenerateSecret","(Ljava/security/spec/KeySpec;)Ljavax/crypto/SecretKey;")
J2CPP_DEFINE_METHOD(javax::crypto::SecretKeyFactorySpi,2,"engineGetKeySpec","(Ljavax/crypto/SecretKey;Ljava/lang/Class;)Ljava/security/spec/KeySpec;")
J2CPP_DEFINE_METHOD(javax::crypto::SecretKeyFactorySpi,3,"engineTranslateKey","(Ljavax/crypto/SecretKey;)Ljavax/crypto/SecretKey;")

} //namespace j2cpp

#endif //J2CPP_JAVAX_CRYPTO_SECRETKEYFACTORYSPI_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
