/*================================================================================
  code generated by: java2cpp
  class: java.security.spec.DSAPublicKeySpec
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_SPEC_DSAPUBLICKEYSPEC_HPP_DECL
#define J2CPP_JAVA_SECURITY_SPEC_DSAPUBLICKEYSPEC_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace math { class BigInteger; } } }
namespace j2cpp { namespace java { namespace security { namespace spec { class KeySpec; } } } }


#include <java/lang/Object.hpp>
#include <java/math/BigInteger.hpp>
#include <java/security/spec/KeySpec.hpp>


namespace j2cpp {

namespace java { namespace security { namespace spec {

	class DSAPublicKeySpec;
	class DSAPublicKeySpec
		: public cpp_object<DSAPublicKeySpec>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)

		explicit DSAPublicKeySpec(jobject jobj)
		: cpp_object<DSAPublicKeySpec>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::security::spec::KeySpec>() const;


		DSAPublicKeySpec(local_ref< java::math::BigInteger > const&, local_ref< java::math::BigInteger > const&, local_ref< java::math::BigInteger > const&, local_ref< java::math::BigInteger > const&);
		local_ref< java::math::BigInteger > getG();
		local_ref< java::math::BigInteger > getP();
		local_ref< java::math::BigInteger > getQ();
		local_ref< java::math::BigInteger > getY();
	}; //class DSAPublicKeySpec

} //namespace spec
} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_SPEC_DSAPUBLICKEYSPEC_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_SPEC_DSAPUBLICKEYSPEC_HPP_IMPL
#define J2CPP_JAVA_SECURITY_SPEC_DSAPUBLICKEYSPEC_HPP_IMPL

namespace j2cpp {



java::security::spec::DSAPublicKeySpec::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}

java::security::spec::DSAPublicKeySpec::operator local_ref<java::security::spec::KeySpec>() const
{
	return local_ref<java::security::spec::KeySpec>(get_jtype());
}


java::security::spec::DSAPublicKeySpec::DSAPublicKeySpec(local_ref< java::math::BigInteger > const &a0, local_ref< java::math::BigInteger > const &a1, local_ref< java::math::BigInteger > const &a2, local_ref< java::math::BigInteger > const &a3)
: cpp_object<java::security::spec::DSAPublicKeySpec>(
	environment::get().get_jenv()->NewObject(
		get_class<java::security::spec::DSAPublicKeySpec::J2CPP_CLASS_NAME>(),
		get_method_id<java::security::spec::DSAPublicKeySpec::J2CPP_CLASS_NAME, java::security::spec::DSAPublicKeySpec::J2CPP_METHOD_NAME(0), java::security::spec::DSAPublicKeySpec::J2CPP_METHOD_SIGNATURE(0), false>(),
		a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
	)
)
{
}


local_ref< java::math::BigInteger > java::security::spec::DSAPublicKeySpec::getG()
{
	return local_ref< java::math::BigInteger >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

local_ref< java::math::BigInteger > java::security::spec::DSAPublicKeySpec::getP()
{
	return local_ref< java::math::BigInteger >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

local_ref< java::math::BigInteger > java::security::spec::DSAPublicKeySpec::getQ()
{
	return local_ref< java::math::BigInteger >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

local_ref< java::math::BigInteger > java::security::spec::DSAPublicKeySpec::getY()
{
	return local_ref< java::math::BigInteger >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(java::security::spec::DSAPublicKeySpec,"java/security/spec/DSAPublicKeySpec")
J2CPP_DEFINE_METHOD(java::security::spec::DSAPublicKeySpec,0,"<init>","(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;)V")
J2CPP_DEFINE_METHOD(java::security::spec::DSAPublicKeySpec,1,"getG","()Ljava/math/BigInteger;")
J2CPP_DEFINE_METHOD(java::security::spec::DSAPublicKeySpec,2,"getP","()Ljava/math/BigInteger;")
J2CPP_DEFINE_METHOD(java::security::spec::DSAPublicKeySpec,3,"getQ","()Ljava/math/BigInteger;")
J2CPP_DEFINE_METHOD(java::security::spec::DSAPublicKeySpec,4,"getY","()Ljava/math/BigInteger;")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_SPEC_DSAPUBLICKEYSPEC_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
