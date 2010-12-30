/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.security.spec.EllipticCurve
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_SPEC_ELLIPTICCURVE_HPP_DECL
#define J2CPP_JAVA_SECURITY_SPEC_ELLIPTICCURVE_HPP_DECL


namespace j2cpp { namespace java { namespace math { class BigInteger; } } }
namespace j2cpp { namespace java { namespace security { namespace spec { class ECField; } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/math/BigInteger.hpp>
#include <java/security/spec/ECField.hpp>


namespace j2cpp {

namespace java { namespace security { namespace spec {

	class EllipticCurve;
	class EllipticCurve
		: public object<EllipticCurve>
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

		explicit EllipticCurve(jobject jobj)
		: object<EllipticCurve>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		EllipticCurve(local_ref< java::security::spec::ECField > const&, local_ref< java::math::BigInteger > const&, local_ref< java::math::BigInteger > const&, local_ref< array<jbyte,1> > const&);
		EllipticCurve(local_ref< java::security::spec::ECField > const&, local_ref< java::math::BigInteger > const&, local_ref< java::math::BigInteger > const&);
		local_ref< java::math::BigInteger > getA();
		local_ref< java::math::BigInteger > getB();
		local_ref< java::security::spec::ECField > getField();
		local_ref< array<jbyte,1> > getSeed();
		jboolean equals(local_ref< java::lang::Object >  const&);
		jint hashCode();
	}; //class EllipticCurve

} //namespace spec
} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_SPEC_ELLIPTICCURVE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_SPEC_ELLIPTICCURVE_HPP_IMPL
#define J2CPP_JAVA_SECURITY_SPEC_ELLIPTICCURVE_HPP_IMPL

namespace j2cpp {



java::security::spec::EllipticCurve::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


java::security::spec::EllipticCurve::EllipticCurve(local_ref< java::security::spec::ECField > const &a0, local_ref< java::math::BigInteger > const &a1, local_ref< java::math::BigInteger > const &a2, local_ref< array<jbyte,1> > const &a3)
: object<java::security::spec::EllipticCurve>(
	call_new_object<
		java::security::spec::EllipticCurve::J2CPP_CLASS_NAME,
		java::security::spec::EllipticCurve::J2CPP_METHOD_NAME(0),
		java::security::spec::EllipticCurve::J2CPP_METHOD_SIGNATURE(0)>
	(a0, a1, a2, a3)
)
{
}



java::security::spec::EllipticCurve::EllipticCurve(local_ref< java::security::spec::ECField > const &a0, local_ref< java::math::BigInteger > const &a1, local_ref< java::math::BigInteger > const &a2)
: object<java::security::spec::EllipticCurve>(
	call_new_object<
		java::security::spec::EllipticCurve::J2CPP_CLASS_NAME,
		java::security::spec::EllipticCurve::J2CPP_METHOD_NAME(1),
		java::security::spec::EllipticCurve::J2CPP_METHOD_SIGNATURE(1)>
	(a0, a1, a2)
)
{
}


local_ref< java::math::BigInteger > java::security::spec::EllipticCurve::getA()
{
	return call_method<
		java::security::spec::EllipticCurve::J2CPP_CLASS_NAME,
		java::security::spec::EllipticCurve::J2CPP_METHOD_NAME(2),
		java::security::spec::EllipticCurve::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::math::BigInteger > >
	(get_jobject());
}

local_ref< java::math::BigInteger > java::security::spec::EllipticCurve::getB()
{
	return call_method<
		java::security::spec::EllipticCurve::J2CPP_CLASS_NAME,
		java::security::spec::EllipticCurve::J2CPP_METHOD_NAME(3),
		java::security::spec::EllipticCurve::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::math::BigInteger > >
	(get_jobject());
}

local_ref< java::security::spec::ECField > java::security::spec::EllipticCurve::getField()
{
	return call_method<
		java::security::spec::EllipticCurve::J2CPP_CLASS_NAME,
		java::security::spec::EllipticCurve::J2CPP_METHOD_NAME(4),
		java::security::spec::EllipticCurve::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::security::spec::ECField > >
	(get_jobject());
}

local_ref< array<jbyte,1> > java::security::spec::EllipticCurve::getSeed()
{
	return call_method<
		java::security::spec::EllipticCurve::J2CPP_CLASS_NAME,
		java::security::spec::EllipticCurve::J2CPP_METHOD_NAME(5),
		java::security::spec::EllipticCurve::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< array<jbyte,1> > >
	(get_jobject());
}

jboolean java::security::spec::EllipticCurve::equals(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::security::spec::EllipticCurve::J2CPP_CLASS_NAME,
		java::security::spec::EllipticCurve::J2CPP_METHOD_NAME(6),
		java::security::spec::EllipticCurve::J2CPP_METHOD_SIGNATURE(6), 
		jboolean >
	(get_jobject(), a0);
}

jint java::security::spec::EllipticCurve::hashCode()
{
	return call_method<
		java::security::spec::EllipticCurve::J2CPP_CLASS_NAME,
		java::security::spec::EllipticCurve::J2CPP_METHOD_NAME(7),
		java::security::spec::EllipticCurve::J2CPP_METHOD_SIGNATURE(7), 
		jint >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(java::security::spec::EllipticCurve,"java/security/spec/EllipticCurve")
J2CPP_DEFINE_METHOD(java::security::spec::EllipticCurve,0,"<init>","(Ljava/security/spec/ECField;Ljava/math/BigInteger;Ljava/math/BigInteger;[B)V")
J2CPP_DEFINE_METHOD(java::security::spec::EllipticCurve,1,"<init>","(Ljava/security/spec/ECField;Ljava/math/BigInteger;Ljava/math/BigInteger;)V")
J2CPP_DEFINE_METHOD(java::security::spec::EllipticCurve,2,"getA","()Ljava/math/BigInteger;")
J2CPP_DEFINE_METHOD(java::security::spec::EllipticCurve,3,"getB","()Ljava/math/BigInteger;")
J2CPP_DEFINE_METHOD(java::security::spec::EllipticCurve,4,"getField","()Ljava/security/spec/ECField;")
J2CPP_DEFINE_METHOD(java::security::spec::EllipticCurve,5,"getSeed","()[B")
J2CPP_DEFINE_METHOD(java::security::spec::EllipticCurve,6,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::security::spec::EllipticCurve,7,"hashCode","()I")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_SPEC_ELLIPTICCURVE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
