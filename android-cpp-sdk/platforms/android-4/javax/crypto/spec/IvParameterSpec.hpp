/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: javax.crypto.spec.IvParameterSpec
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_CRYPTO_SPEC_IVPARAMETERSPEC_HPP_DECL
#define J2CPP_JAVAX_CRYPTO_SPEC_IVPARAMETERSPEC_HPP_DECL


namespace j2cpp { namespace java { namespace security { namespace spec { class AlgorithmParameterSpec; } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/security/spec/AlgorithmParameterSpec.hpp>


namespace j2cpp {

namespace javax { namespace crypto { namespace spec {

	class IvParameterSpec;
	class IvParameterSpec
		: public object<IvParameterSpec>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit IvParameterSpec(jobject jobj)
		: object<IvParameterSpec>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::security::spec::AlgorithmParameterSpec>() const;


		IvParameterSpec(local_ref< array<jbyte,1> > const&);
		IvParameterSpec(local_ref< array<jbyte,1> > const&, jint, jint);
		local_ref< array<jbyte,1> > getIV();
	}; //class IvParameterSpec

} //namespace spec
} //namespace crypto
} //namespace javax

} //namespace j2cpp

#endif //J2CPP_JAVAX_CRYPTO_SPEC_IVPARAMETERSPEC_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_CRYPTO_SPEC_IVPARAMETERSPEC_HPP_IMPL
#define J2CPP_JAVAX_CRYPTO_SPEC_IVPARAMETERSPEC_HPP_IMPL

namespace j2cpp {



javax::crypto::spec::IvParameterSpec::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

javax::crypto::spec::IvParameterSpec::operator local_ref<java::security::spec::AlgorithmParameterSpec>() const
{
	return local_ref<java::security::spec::AlgorithmParameterSpec>(get_jobject());
}


javax::crypto::spec::IvParameterSpec::IvParameterSpec(local_ref< array<jbyte,1> > const &a0)
: object<javax::crypto::spec::IvParameterSpec>(
	call_new_object<
		javax::crypto::spec::IvParameterSpec::J2CPP_CLASS_NAME,
		javax::crypto::spec::IvParameterSpec::J2CPP_METHOD_NAME(0),
		javax::crypto::spec::IvParameterSpec::J2CPP_METHOD_SIGNATURE(0)>
	(a0)
)
{
}



javax::crypto::spec::IvParameterSpec::IvParameterSpec(local_ref< array<jbyte,1> > const &a0, jint a1, jint a2)
: object<javax::crypto::spec::IvParameterSpec>(
	call_new_object<
		javax::crypto::spec::IvParameterSpec::J2CPP_CLASS_NAME,
		javax::crypto::spec::IvParameterSpec::J2CPP_METHOD_NAME(1),
		javax::crypto::spec::IvParameterSpec::J2CPP_METHOD_SIGNATURE(1)>
	(a0, a1, a2)
)
{
}


local_ref< array<jbyte,1> > javax::crypto::spec::IvParameterSpec::getIV()
{
	return call_method<
		javax::crypto::spec::IvParameterSpec::J2CPP_CLASS_NAME,
		javax::crypto::spec::IvParameterSpec::J2CPP_METHOD_NAME(2),
		javax::crypto::spec::IvParameterSpec::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< array<jbyte,1> > >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(javax::crypto::spec::IvParameterSpec,"javax/crypto/spec/IvParameterSpec")
J2CPP_DEFINE_METHOD(javax::crypto::spec::IvParameterSpec,0,"<init>","([B)V")
J2CPP_DEFINE_METHOD(javax::crypto::spec::IvParameterSpec,1,"<init>","([BII)V")
J2CPP_DEFINE_METHOD(javax::crypto::spec::IvParameterSpec,2,"getIV","()[B")

} //namespace j2cpp

#endif //J2CPP_JAVAX_CRYPTO_SPEC_IVPARAMETERSPEC_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
