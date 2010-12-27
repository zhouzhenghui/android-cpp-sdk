/*================================================================================
  code generated by: java2cpp
  class: javax.crypto.KeyAgreement
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_CRYPTO_KEYAGREEMENT_HPP_DECL
#define J2CPP_JAVAX_CRYPTO_KEYAGREEMENT_HPP_DECL


namespace j2cpp { namespace javax { namespace crypto { class SecretKey; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace security { class Provider; } } }
namespace j2cpp { namespace java { namespace security { class Key; } } }
namespace j2cpp { namespace java { namespace security { class SecureRandom; } } }
namespace j2cpp { namespace java { namespace security { namespace spec { class AlgorithmParameterSpec; } } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/security/Key.hpp>
#include <java/security/Provider.hpp>
#include <java/security/SecureRandom.hpp>
#include <java/security/spec/AlgorithmParameterSpec.hpp>
#include <javax/crypto/SecretKey.hpp>


namespace j2cpp {

namespace javax { namespace crypto {

	class KeyAgreement;
	class KeyAgreement
		: public cpp_object<KeyAgreement>
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
		J2CPP_DECLARE_METHOD(11)
		J2CPP_DECLARE_METHOD(12)
		J2CPP_DECLARE_METHOD(13)

		explicit KeyAgreement(jobject jobj)
		: cpp_object<KeyAgreement>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< java::lang::String > getAlgorithm();
		local_ref< java::security::Provider > getProvider();
		static local_ref< javax::crypto::KeyAgreement > getInstance(local_ref< java::lang::String > const&);
		static local_ref< javax::crypto::KeyAgreement > getInstance(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		static local_ref< javax::crypto::KeyAgreement > getInstance(local_ref< java::lang::String > const&, local_ref< java::security::Provider > const&);
		void init(local_ref< java::security::Key > const&);
		void init(local_ref< java::security::Key > const&, local_ref< java::security::SecureRandom > const&);
		void init(local_ref< java::security::Key > const&, local_ref< java::security::spec::AlgorithmParameterSpec > const&);
		void init(local_ref< java::security::Key > const&, local_ref< java::security::spec::AlgorithmParameterSpec > const&, local_ref< java::security::SecureRandom > const&);
		local_ref< java::security::Key > doPhase(local_ref< java::security::Key > const&, cpp_boolean const&);
		local_ref< cpp_byte_array<1> > generateSecret();
		cpp_int generateSecret(local_ref< cpp_byte_array<1> > const&, cpp_int const&);
		local_ref< javax::crypto::SecretKey > generateSecret(local_ref< java::lang::String > const&);
	}; //class KeyAgreement

} //namespace crypto
} //namespace javax

} //namespace j2cpp

#endif //J2CPP_JAVAX_CRYPTO_KEYAGREEMENT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_CRYPTO_KEYAGREEMENT_HPP_IMPL
#define J2CPP_JAVAX_CRYPTO_KEYAGREEMENT_HPP_IMPL

namespace j2cpp {



javax::crypto::KeyAgreement::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}


local_ref< java::lang::String > javax::crypto::KeyAgreement::getAlgorithm()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

local_ref< java::security::Provider > javax::crypto::KeyAgreement::getProvider()
{
	return local_ref< java::security::Provider >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

local_ref< javax::crypto::KeyAgreement > javax::crypto::KeyAgreement::getInstance(local_ref< java::lang::String > const &a0)
{
	return local_ref< javax::crypto::KeyAgreement >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), true>(),
			a0.get_jtype()
		)
	);
}

local_ref< javax::crypto::KeyAgreement > javax::crypto::KeyAgreement::getInstance(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return local_ref< javax::crypto::KeyAgreement >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< javax::crypto::KeyAgreement > javax::crypto::KeyAgreement::getInstance(local_ref< java::lang::String > const &a0, local_ref< java::security::Provider > const &a1)
{
	return local_ref< javax::crypto::KeyAgreement >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void javax::crypto::KeyAgreement::init(local_ref< java::security::Key > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

void javax::crypto::KeyAgreement::init(local_ref< java::security::Key > const &a0, local_ref< java::security::SecureRandom > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void javax::crypto::KeyAgreement::init(local_ref< java::security::Key > const &a0, local_ref< java::security::spec::AlgorithmParameterSpec > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void javax::crypto::KeyAgreement::init(local_ref< java::security::Key > const &a0, local_ref< java::security::spec::AlgorithmParameterSpec > const &a1, local_ref< java::security::SecureRandom > const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< java::security::Key > javax::crypto::KeyAgreement::doPhase(local_ref< java::security::Key > const &a0, cpp_boolean const &a1)
{
	return local_ref< java::security::Key >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< cpp_byte_array<1> > javax::crypto::KeyAgreement::generateSecret()
{
	return local_ref< cpp_byte_array<1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>()
		)
	);
}

cpp_int javax::crypto::KeyAgreement::generateSecret(local_ref< cpp_byte_array<1> > const &a0, cpp_int const &a1)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< javax::crypto::SecretKey > javax::crypto::KeyAgreement::generateSecret(local_ref< java::lang::String > const &a0)
{
	return local_ref< javax::crypto::SecretKey >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(javax::crypto::KeyAgreement,"javax/crypto/KeyAgreement")
J2CPP_DEFINE_METHOD(javax::crypto::KeyAgreement,0,"<init>","(Ljavax/crypto/KeyAgreementSpi;Ljava/security/Provider;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(javax::crypto::KeyAgreement,1,"getAlgorithm","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(javax::crypto::KeyAgreement,2,"getProvider","()Ljava/security/Provider;")
J2CPP_DEFINE_METHOD(javax::crypto::KeyAgreement,3,"getInstance","(Ljava/lang/String;)Ljavax/crypto/KeyAgreement;")
J2CPP_DEFINE_METHOD(javax::crypto::KeyAgreement,4,"getInstance","(Ljava/lang/String;Ljava/lang/String;)Ljavax/crypto/KeyAgreement;")
J2CPP_DEFINE_METHOD(javax::crypto::KeyAgreement,5,"getInstance","(Ljava/lang/String;Ljava/security/Provider;)Ljavax/crypto/KeyAgreement;")
J2CPP_DEFINE_METHOD(javax::crypto::KeyAgreement,6,"init","(Ljava/security/Key;)V")
J2CPP_DEFINE_METHOD(javax::crypto::KeyAgreement,7,"init","(Ljava/security/Key;Ljava/security/SecureRandom;)V")
J2CPP_DEFINE_METHOD(javax::crypto::KeyAgreement,8,"init","(Ljava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;)V")
J2CPP_DEFINE_METHOD(javax::crypto::KeyAgreement,9,"init","(Ljava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)V")
J2CPP_DEFINE_METHOD(javax::crypto::KeyAgreement,10,"doPhase","(Ljava/security/Key;Z)Ljava/security/Key;")
J2CPP_DEFINE_METHOD(javax::crypto::KeyAgreement,11,"generateSecret","()[B")
J2CPP_DEFINE_METHOD(javax::crypto::KeyAgreement,12,"generateSecret","([BI)I")
J2CPP_DEFINE_METHOD(javax::crypto::KeyAgreement,13,"generateSecret","(Ljava/lang/String;)Ljavax/crypto/SecretKey;")

} //namespace j2cpp

#endif //J2CPP_JAVAX_CRYPTO_KEYAGREEMENT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
