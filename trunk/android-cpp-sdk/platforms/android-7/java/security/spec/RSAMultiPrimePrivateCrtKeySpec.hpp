/*================================================================================
  code generated by: java2cpp
  class: java.security.spec.RSAMultiPrimePrivateCrtKeySpec
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_SPEC_RSAMULTIPRIMEPRIVATECRTKEYSPEC_HPP_DECL
#define J2CPP_JAVA_SECURITY_SPEC_RSAMULTIPRIMEPRIVATECRTKEYSPEC_HPP_DECL


namespace j2cpp { namespace java { namespace math { class BigInteger; } } }
namespace j2cpp { namespace java { namespace security { namespace spec { class RSAOtherPrimeInfo; } } } }
namespace j2cpp { namespace java { namespace security { namespace spec { class RSAPrivateKeySpec; } } } }


#include <java/math/BigInteger.hpp>
#include <java/security/spec/RSAOtherPrimeInfo.hpp>
#include <java/security/spec/RSAPrivateKeySpec.hpp>


namespace j2cpp {

namespace java { namespace security { namespace spec {

	class RSAMultiPrimePrivateCrtKeySpec;
	class RSAMultiPrimePrivateCrtKeySpec
		: public cpp_object<RSAMultiPrimePrivateCrtKeySpec>
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

		explicit RSAMultiPrimePrivateCrtKeySpec(jobject jobj)
		: cpp_object<RSAMultiPrimePrivateCrtKeySpec>(jobj)
		{
		}

		operator local_ref<java::security::spec::RSAPrivateKeySpec>() const;


		RSAMultiPrimePrivateCrtKeySpec(local_ref< java::math::BigInteger > const&, local_ref< java::math::BigInteger > const&, local_ref< java::math::BigInteger > const&, local_ref< java::math::BigInteger > const&, local_ref< java::math::BigInteger > const&, local_ref< java::math::BigInteger > const&, local_ref< java::math::BigInteger > const&, local_ref< java::math::BigInteger > const&, local_ref< cpp_object_array<java::security::spec::RSAOtherPrimeInfo, 1> > const&);
		local_ref< java::math::BigInteger > getCrtCoefficient();
		local_ref< cpp_object_array<java::security::spec::RSAOtherPrimeInfo, 1> > getOtherPrimeInfo();
		local_ref< java::math::BigInteger > getPrimeExponentP();
		local_ref< java::math::BigInteger > getPrimeExponentQ();
		local_ref< java::math::BigInteger > getPrimeP();
		local_ref< java::math::BigInteger > getPrimeQ();
		local_ref< java::math::BigInteger > getPublicExponent();
	}; //class RSAMultiPrimePrivateCrtKeySpec

} //namespace spec
} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_SPEC_RSAMULTIPRIMEPRIVATECRTKEYSPEC_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_SPEC_RSAMULTIPRIMEPRIVATECRTKEYSPEC_HPP_IMPL
#define J2CPP_JAVA_SECURITY_SPEC_RSAMULTIPRIMEPRIVATECRTKEYSPEC_HPP_IMPL

namespace j2cpp {



java::security::spec::RSAMultiPrimePrivateCrtKeySpec::operator local_ref<java::security::spec::RSAPrivateKeySpec>() const
{
	return local_ref<java::security::spec::RSAPrivateKeySpec>(get_jtype());
}


java::security::spec::RSAMultiPrimePrivateCrtKeySpec::RSAMultiPrimePrivateCrtKeySpec(local_ref< java::math::BigInteger > const &a0, local_ref< java::math::BigInteger > const &a1, local_ref< java::math::BigInteger > const &a2, local_ref< java::math::BigInteger > const &a3, local_ref< java::math::BigInteger > const &a4, local_ref< java::math::BigInteger > const &a5, local_ref< java::math::BigInteger > const &a6, local_ref< java::math::BigInteger > const &a7, local_ref< cpp_object_array<java::security::spec::RSAOtherPrimeInfo, 1> > const &a8)
: cpp_object<java::security::spec::RSAMultiPrimePrivateCrtKeySpec>(
	environment::get().get_jenv()->NewObject(
		get_class<java::security::spec::RSAMultiPrimePrivateCrtKeySpec::J2CPP_CLASS_NAME>(),
		get_method_id<java::security::spec::RSAMultiPrimePrivateCrtKeySpec::J2CPP_CLASS_NAME, java::security::spec::RSAMultiPrimePrivateCrtKeySpec::J2CPP_METHOD_NAME(0), java::security::spec::RSAMultiPrimePrivateCrtKeySpec::J2CPP_METHOD_SIGNATURE(0), false>(),
		a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype(), a5.get_jtype(), a6.get_jtype(), a7.get_jtype(), a8.get_jtype()
	)
)
{
}


local_ref< java::math::BigInteger > java::security::spec::RSAMultiPrimePrivateCrtKeySpec::getCrtCoefficient()
{
	return local_ref< java::math::BigInteger >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

local_ref< cpp_object_array<java::security::spec::RSAOtherPrimeInfo, 1> > java::security::spec::RSAMultiPrimePrivateCrtKeySpec::getOtherPrimeInfo()
{
	return local_ref< cpp_object_array<java::security::spec::RSAOtherPrimeInfo, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

local_ref< java::math::BigInteger > java::security::spec::RSAMultiPrimePrivateCrtKeySpec::getPrimeExponentP()
{
	return local_ref< java::math::BigInteger >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

local_ref< java::math::BigInteger > java::security::spec::RSAMultiPrimePrivateCrtKeySpec::getPrimeExponentQ()
{
	return local_ref< java::math::BigInteger >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

local_ref< java::math::BigInteger > java::security::spec::RSAMultiPrimePrivateCrtKeySpec::getPrimeP()
{
	return local_ref< java::math::BigInteger >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

local_ref< java::math::BigInteger > java::security::spec::RSAMultiPrimePrivateCrtKeySpec::getPrimeQ()
{
	return local_ref< java::math::BigInteger >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

local_ref< java::math::BigInteger > java::security::spec::RSAMultiPrimePrivateCrtKeySpec::getPublicExponent()
{
	return local_ref< java::math::BigInteger >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(java::security::spec::RSAMultiPrimePrivateCrtKeySpec,"java/security/spec/RSAMultiPrimePrivateCrtKeySpec")
J2CPP_DEFINE_METHOD(java::security::spec::RSAMultiPrimePrivateCrtKeySpec,0,"<init>","(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;[java.security.spec.RSAOtherPrimeInfo)V")
J2CPP_DEFINE_METHOD(java::security::spec::RSAMultiPrimePrivateCrtKeySpec,1,"getCrtCoefficient","()Ljava/math/BigInteger;")
J2CPP_DEFINE_METHOD(java::security::spec::RSAMultiPrimePrivateCrtKeySpec,2,"getOtherPrimeInfo","()[java.security.spec.RSAOtherPrimeInfo")
J2CPP_DEFINE_METHOD(java::security::spec::RSAMultiPrimePrivateCrtKeySpec,3,"getPrimeExponentP","()Ljava/math/BigInteger;")
J2CPP_DEFINE_METHOD(java::security::spec::RSAMultiPrimePrivateCrtKeySpec,4,"getPrimeExponentQ","()Ljava/math/BigInteger;")
J2CPP_DEFINE_METHOD(java::security::spec::RSAMultiPrimePrivateCrtKeySpec,5,"getPrimeP","()Ljava/math/BigInteger;")
J2CPP_DEFINE_METHOD(java::security::spec::RSAMultiPrimePrivateCrtKeySpec,6,"getPrimeQ","()Ljava/math/BigInteger;")
J2CPP_DEFINE_METHOD(java::security::spec::RSAMultiPrimePrivateCrtKeySpec,7,"getPublicExponent","()Ljava/math/BigInteger;")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_SPEC_RSAMULTIPRIMEPRIVATECRTKEYSPEC_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
