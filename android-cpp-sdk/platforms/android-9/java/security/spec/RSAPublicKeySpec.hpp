/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.security.spec.RSAPublicKeySpec
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_SPEC_RSAPUBLICKEYSPEC_HPP_DECL
#define J2CPP_JAVA_SECURITY_SPEC_RSAPUBLICKEYSPEC_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace security { namespace spec { class KeySpec; } } } }
namespace j2cpp { namespace java { namespace math { class BigInteger; } } }


#include <java/lang/Object.hpp>
#include <java/math/BigInteger.hpp>
#include <java/security/spec/KeySpec.hpp>


namespace j2cpp {

namespace java { namespace security { namespace spec {

	class RSAPublicKeySpec;
	class RSAPublicKeySpec
		: public object<RSAPublicKeySpec>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit RSAPublicKeySpec(jobject jobj)
		: object<RSAPublicKeySpec>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::security::spec::KeySpec>() const;


		RSAPublicKeySpec(local_ref< java::math::BigInteger > const&, local_ref< java::math::BigInteger > const&);
		local_ref< java::math::BigInteger > getModulus();
		local_ref< java::math::BigInteger > getPublicExponent();
	}; //class RSAPublicKeySpec

} //namespace spec
} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_SPEC_RSAPUBLICKEYSPEC_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_SPEC_RSAPUBLICKEYSPEC_HPP_IMPL
#define J2CPP_JAVA_SECURITY_SPEC_RSAPUBLICKEYSPEC_HPP_IMPL

namespace j2cpp {



java::security::spec::RSAPublicKeySpec::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::security::spec::RSAPublicKeySpec::operator local_ref<java::security::spec::KeySpec>() const
{
	return local_ref<java::security::spec::KeySpec>(get_jobject());
}


java::security::spec::RSAPublicKeySpec::RSAPublicKeySpec(local_ref< java::math::BigInteger > const &a0, local_ref< java::math::BigInteger > const &a1)
: object<java::security::spec::RSAPublicKeySpec>(
	call_new_object<
		java::security::spec::RSAPublicKeySpec::J2CPP_CLASS_NAME,
		java::security::spec::RSAPublicKeySpec::J2CPP_METHOD_NAME(0),
		java::security::spec::RSAPublicKeySpec::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1)
)
{
}


local_ref< java::math::BigInteger > java::security::spec::RSAPublicKeySpec::getModulus()
{
	return call_method<
		java::security::spec::RSAPublicKeySpec::J2CPP_CLASS_NAME,
		java::security::spec::RSAPublicKeySpec::J2CPP_METHOD_NAME(1),
		java::security::spec::RSAPublicKeySpec::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::math::BigInteger >
	>(get_jobject());
}

local_ref< java::math::BigInteger > java::security::spec::RSAPublicKeySpec::getPublicExponent()
{
	return call_method<
		java::security::spec::RSAPublicKeySpec::J2CPP_CLASS_NAME,
		java::security::spec::RSAPublicKeySpec::J2CPP_METHOD_NAME(2),
		java::security::spec::RSAPublicKeySpec::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::math::BigInteger >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(java::security::spec::RSAPublicKeySpec,"java/security/spec/RSAPublicKeySpec")
J2CPP_DEFINE_METHOD(java::security::spec::RSAPublicKeySpec,0,"<init>","(Ljava/math/BigInteger;Ljava/math/BigInteger;)V")
J2CPP_DEFINE_METHOD(java::security::spec::RSAPublicKeySpec,1,"getModulus","()Ljava/math/BigInteger;")
J2CPP_DEFINE_METHOD(java::security::spec::RSAPublicKeySpec,2,"getPublicExponent","()Ljava/math/BigInteger;")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_SPEC_RSAPUBLICKEYSPEC_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
