/*================================================================================
  code generated by: java2cpp
  class: javax.crypto.spec.SecretKeySpec
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_CRYPTO_SPEC_SECRETKEYSPEC_HPP_DECL
#define J2CPP_JAVAX_CRYPTO_SPEC_SECRETKEYSPEC_HPP_DECL


namespace j2cpp { namespace javax { namespace crypto { class SecretKey; } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace security { namespace spec { class KeySpec; } } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/security/spec/KeySpec.hpp>
#include <javax/crypto/SecretKey.hpp>


namespace j2cpp {

namespace javax { namespace crypto { namespace spec {

	class SecretKeySpec;
	class SecretKeySpec
		: public cpp_object<SecretKeySpec>
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

		explicit SecretKeySpec(jobject jobj)
		: cpp_object<SecretKeySpec>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<javax::crypto::SecretKey>() const;
		operator local_ref<java::security::spec::KeySpec>() const;
		operator local_ref<java::io::Serializable>() const;


		SecretKeySpec(local_ref< cpp_byte_array<1> > const&, local_ref< java::lang::String > const&);
		SecretKeySpec(local_ref< cpp_byte_array<1> > const&, cpp_int const&, cpp_int const&, local_ref< java::lang::String > const&);
		local_ref< java::lang::String > getAlgorithm();
		local_ref< java::lang::String > getFormat();
		local_ref< cpp_byte_array<1> > getEncoded();
		cpp_int hashCode();
		cpp_boolean equals(local_ref< java::lang::Object > const&);
	}; //class SecretKeySpec

} //namespace spec
} //namespace crypto
} //namespace javax

} //namespace j2cpp

#endif //J2CPP_JAVAX_CRYPTO_SPEC_SECRETKEYSPEC_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_CRYPTO_SPEC_SECRETKEYSPEC_HPP_IMPL
#define J2CPP_JAVAX_CRYPTO_SPEC_SECRETKEYSPEC_HPP_IMPL

namespace j2cpp {



javax::crypto::spec::SecretKeySpec::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}

javax::crypto::spec::SecretKeySpec::operator local_ref<javax::crypto::SecretKey>() const
{
	return local_ref<javax::crypto::SecretKey>(get_jtype());
}

javax::crypto::spec::SecretKeySpec::operator local_ref<java::security::spec::KeySpec>() const
{
	return local_ref<java::security::spec::KeySpec>(get_jtype());
}

javax::crypto::spec::SecretKeySpec::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jtype());
}


javax::crypto::spec::SecretKeySpec::SecretKeySpec(local_ref< cpp_byte_array<1> > const &a0, local_ref< java::lang::String > const &a1)
: cpp_object<javax::crypto::spec::SecretKeySpec>(
	environment::get().get_jenv()->NewObject(
		get_class<javax::crypto::spec::SecretKeySpec::J2CPP_CLASS_NAME>(),
		get_method_id<javax::crypto::spec::SecretKeySpec::J2CPP_CLASS_NAME, javax::crypto::spec::SecretKeySpec::J2CPP_METHOD_NAME(0), javax::crypto::spec::SecretKeySpec::J2CPP_METHOD_SIGNATURE(0), false>(),
		a0.get_jtype(), a1.get_jtype()
	)
)
{
}



javax::crypto::spec::SecretKeySpec::SecretKeySpec(local_ref< cpp_byte_array<1> > const &a0, cpp_int const &a1, cpp_int const &a2, local_ref< java::lang::String > const &a3)
: cpp_object<javax::crypto::spec::SecretKeySpec>(
	environment::get().get_jenv()->NewObject(
		get_class<javax::crypto::spec::SecretKeySpec::J2CPP_CLASS_NAME>(),
		get_method_id<javax::crypto::spec::SecretKeySpec::J2CPP_CLASS_NAME, javax::crypto::spec::SecretKeySpec::J2CPP_METHOD_NAME(1), javax::crypto::spec::SecretKeySpec::J2CPP_METHOD_SIGNATURE(1), false>(),
		a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
	)
)
{
}


local_ref< java::lang::String > javax::crypto::spec::SecretKeySpec::getAlgorithm()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

local_ref< java::lang::String > javax::crypto::spec::SecretKeySpec::getFormat()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

local_ref< cpp_byte_array<1> > javax::crypto::spec::SecretKeySpec::getEncoded()
{
	return local_ref< cpp_byte_array<1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

cpp_int javax::crypto::spec::SecretKeySpec::hashCode()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

cpp_boolean javax::crypto::spec::SecretKeySpec::equals(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(javax::crypto::spec::SecretKeySpec,"javax/crypto/spec/SecretKeySpec")
J2CPP_DEFINE_METHOD(javax::crypto::spec::SecretKeySpec,0,"<init>","([BLjava/lang/String;)V")
J2CPP_DEFINE_METHOD(javax::crypto::spec::SecretKeySpec,1,"<init>","([BIILjava/lang/String;)V")
J2CPP_DEFINE_METHOD(javax::crypto::spec::SecretKeySpec,2,"getAlgorithm","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(javax::crypto::spec::SecretKeySpec,3,"getFormat","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(javax::crypto::spec::SecretKeySpec,4,"getEncoded","()[B")
J2CPP_DEFINE_METHOD(javax::crypto::spec::SecretKeySpec,5,"hashCode","()I")
J2CPP_DEFINE_METHOD(javax::crypto::spec::SecretKeySpec,6,"equals","(Ljava/lang/Object;)Z")

} //namespace j2cpp

#endif //J2CPP_JAVAX_CRYPTO_SPEC_SECRETKEYSPEC_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
