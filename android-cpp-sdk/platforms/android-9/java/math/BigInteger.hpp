/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.math.BigInteger
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_MATH_BIGINTEGER_HPP_DECL
#define J2CPP_JAVA_MATH_BIGINTEGER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Number; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Comparable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class Random; } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Number.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/Random.hpp>


namespace j2cpp {

namespace java { namespace math {

	class BigInteger;
	class BigInteger
		: public object<BigInteger>
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
		J2CPP_DECLARE_METHOD(14)
		J2CPP_DECLARE_METHOD(15)
		J2CPP_DECLARE_METHOD(16)
		J2CPP_DECLARE_METHOD(17)
		J2CPP_DECLARE_METHOD(18)
		J2CPP_DECLARE_METHOD(19)
		J2CPP_DECLARE_METHOD(20)
		J2CPP_DECLARE_METHOD(21)
		J2CPP_DECLARE_METHOD(22)
		J2CPP_DECLARE_METHOD(23)
		J2CPP_DECLARE_METHOD(24)
		J2CPP_DECLARE_METHOD(25)
		J2CPP_DECLARE_METHOD(26)
		J2CPP_DECLARE_METHOD(27)
		J2CPP_DECLARE_METHOD(28)
		J2CPP_DECLARE_METHOD(29)
		J2CPP_DECLARE_METHOD(30)
		J2CPP_DECLARE_METHOD(31)
		J2CPP_DECLARE_METHOD(32)
		J2CPP_DECLARE_METHOD(33)
		J2CPP_DECLARE_METHOD(34)
		J2CPP_DECLARE_METHOD(35)
		J2CPP_DECLARE_METHOD(36)
		J2CPP_DECLARE_METHOD(37)
		J2CPP_DECLARE_METHOD(38)
		J2CPP_DECLARE_METHOD(39)
		J2CPP_DECLARE_METHOD(40)
		J2CPP_DECLARE_METHOD(41)
		J2CPP_DECLARE_METHOD(42)
		J2CPP_DECLARE_METHOD(43)
		J2CPP_DECLARE_METHOD(44)
		J2CPP_DECLARE_METHOD(45)
		J2CPP_DECLARE_METHOD(46)
		J2CPP_DECLARE_METHOD(47)
		J2CPP_DECLARE_METHOD(48)
		J2CPP_DECLARE_METHOD(49)
		J2CPP_DECLARE_METHOD(50)
		J2CPP_DECLARE_METHOD(51)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)

		explicit BigInteger(jobject jobj)
		: object<BigInteger>(jobj)
		{
		}

		operator local_ref<java::lang::Number>() const;
		operator local_ref<java::lang::Comparable>() const;
		operator local_ref<java::io::Serializable>() const;


		BigInteger(jint, local_ref< java::util::Random > const&);
		BigInteger(jint, jint, local_ref< java::util::Random > const&);
		BigInteger(local_ref< java::lang::String > const&);
		BigInteger(local_ref< java::lang::String > const&, jint);
		BigInteger(jint, local_ref< array<jbyte,1> > const&);
		BigInteger(local_ref< array<jbyte,1> > const&);
		static local_ref< java::math::BigInteger > valueOf(jlong);
		local_ref< array<jbyte,1> > toByteArray();
		local_ref< java::math::BigInteger > abs();
		local_ref< java::math::BigInteger > negate();
		local_ref< java::math::BigInteger > add(local_ref< java::math::BigInteger >  const&);
		local_ref< java::math::BigInteger > subtract(local_ref< java::math::BigInteger >  const&);
		jint signum();
		local_ref< java::math::BigInteger > shiftRight(jint);
		local_ref< java::math::BigInteger > shiftLeft(jint);
		jint bitLength();
		jboolean testBit(jint);
		local_ref< java::math::BigInteger > setBit(jint);
		local_ref< java::math::BigInteger > clearBit(jint);
		local_ref< java::math::BigInteger > flipBit(jint);
		jint getLowestSetBit();
		jint bitCount();
		local_ref< java::math::BigInteger > not();
		local_ref< java::math::BigInteger > and_(local_ref< java::math::BigInteger >  const&);
		local_ref< java::math::BigInteger > or_(local_ref< java::math::BigInteger >  const&);
		local_ref< java::math::BigInteger > xor_(local_ref< java::math::BigInteger >  const&);
		local_ref< java::math::BigInteger > andNot(local_ref< java::math::BigInteger >  const&);
		jint intValue();
		jlong longValue();
		jfloat floatValue();
		jdouble doubleValue();
		jint compareTo(local_ref< java::math::BigInteger >  const&);
		local_ref< java::math::BigInteger > min(local_ref< java::math::BigInteger >  const&);
		local_ref< java::math::BigInteger > max(local_ref< java::math::BigInteger >  const&);
		jint hashCode();
		jboolean equals(local_ref< java::lang::Object >  const&);
		local_ref< java::lang::String > toString();
		local_ref< java::lang::String > toString(jint);
		local_ref< java::math::BigInteger > gcd(local_ref< java::math::BigInteger >  const&);
		local_ref< java::math::BigInteger > multiply(local_ref< java::math::BigInteger >  const&);
		local_ref< java::math::BigInteger > pow(jint);
		local_ref< array< local_ref< java::math::BigInteger >, 1> > divideAndRemainder(local_ref< java::math::BigInteger >  const&);
		local_ref< java::math::BigInteger > divide(local_ref< java::math::BigInteger >  const&);
		local_ref< java::math::BigInteger > remainder(local_ref< java::math::BigInteger >  const&);
		local_ref< java::math::BigInteger > modInverse(local_ref< java::math::BigInteger >  const&);
		local_ref< java::math::BigInteger > modPow(local_ref< java::math::BigInteger >  const&, local_ref< java::math::BigInteger >  const&);
		local_ref< java::math::BigInteger > mod(local_ref< java::math::BigInteger >  const&);
		jboolean isProbablePrime(jint);
		local_ref< java::math::BigInteger > nextProbablePrime();
		static local_ref< java::math::BigInteger > probablePrime(jint, local_ref< java::util::Random >  const&);
		jint compareTo(local_ref< java::lang::Object >  const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::math::BigInteger > > ZERO;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::math::BigInteger > > ONE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< java::math::BigInteger > > TEN;
	}; //class BigInteger

} //namespace math
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_MATH_BIGINTEGER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_MATH_BIGINTEGER_HPP_IMPL
#define J2CPP_JAVA_MATH_BIGINTEGER_HPP_IMPL

namespace j2cpp {



java::math::BigInteger::operator local_ref<java::lang::Number>() const
{
	return local_ref<java::lang::Number>(get_jobject());
}

java::math::BigInteger::operator local_ref<java::lang::Comparable>() const
{
	return local_ref<java::lang::Comparable>(get_jobject());
}

java::math::BigInteger::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}


java::math::BigInteger::BigInteger(jint a0, local_ref< java::util::Random > const &a1)
: object<java::math::BigInteger>(
	call_new_object<
		java::math::BigInteger::J2CPP_CLASS_NAME,
		java::math::BigInteger::J2CPP_METHOD_NAME(0),
		java::math::BigInteger::J2CPP_METHOD_SIGNATURE(0)>
	(a0, a1)
)
{
}



java::math::BigInteger::BigInteger(jint a0, jint a1, local_ref< java::util::Random > const &a2)
: object<java::math::BigInteger>(
	call_new_object<
		java::math::BigInteger::J2CPP_CLASS_NAME,
		java::math::BigInteger::J2CPP_METHOD_NAME(1),
		java::math::BigInteger::J2CPP_METHOD_SIGNATURE(1)>
	(a0, a1, a2)
)
{
}



java::math::BigInteger::BigInteger(local_ref< java::lang::String > const &a0)
: object<java::math::BigInteger>(
	call_new_object<
		java::math::BigInteger::J2CPP_CLASS_NAME,
		java::math::BigInteger::J2CPP_METHOD_NAME(2),
		java::math::BigInteger::J2CPP_METHOD_SIGNATURE(2)>
	(a0)
)
{
}



java::math::BigInteger::BigInteger(local_ref< java::lang::String > const &a0, jint a1)
: object<java::math::BigInteger>(
	call_new_object<
		java::math::BigInteger::J2CPP_CLASS_NAME,
		java::math::BigInteger::J2CPP_METHOD_NAME(3),
		java::math::BigInteger::J2CPP_METHOD_SIGNATURE(3)>
	(a0, a1)
)
{
}



java::math::BigInteger::BigInteger(jint a0, local_ref< array<jbyte,1> > const &a1)
: object<java::math::BigInteger>(
	call_new_object<
		java::math::BigInteger::J2CPP_CLASS_NAME,
		java::math::BigInteger::J2CPP_METHOD_NAME(4),
		java::math::BigInteger::J2CPP_METHOD_SIGNATURE(4)>
	(a0, a1)
)
{
}



java::math::BigInteger::BigInteger(local_ref< array<jbyte,1> > const &a0)
: object<java::math::BigInteger>(
	call_new_object<
		java::math::BigInteger::J2CPP_CLASS_NAME,
		java::math::BigInteger::J2CPP_METHOD_NAME(5),
		java::math::BigInteger::J2CPP_METHOD_SIGNATURE(5)>
	(a0)
)
{
}


local_ref< java::math::BigInteger > java::math::BigInteger::valueOf(jlong a0)
{
	return call_static_method<
		java::math::BigInteger::J2CPP_CLASS_NAME,
		java::math::BigInteger::J2CPP_METHOD_NAME(6),
		java::math::BigInteger::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::math::BigInteger > >
	(a0);
}

local_ref< array<jbyte,1> > java::math::BigInteger::toByteArray()
{
	return call_method<
		java::math::BigInteger::J2CPP_CLASS_NAME,
		java::math::BigInteger::J2CPP_METHOD_NAME(7),
		java::math::BigInteger::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< array<jbyte,1> > >
	(get_jobject());
}

local_ref< java::math::BigInteger > java::math::BigInteger::abs()
{
	return call_method<
		java::math::BigInteger::J2CPP_CLASS_NAME,
		java::math::BigInteger::J2CPP_METHOD_NAME(8),
		java::math::BigInteger::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< java::math::BigInteger > >
	(get_jobject());
}

local_ref< java::math::BigInteger > java::math::BigInteger::negate()
{
	return call_method<
		java::math::BigInteger::J2CPP_CLASS_NAME,
		java::math::BigInteger::J2CPP_METHOD_NAME(9),
		java::math::BigInteger::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< java::math::BigInteger > >
	(get_jobject());
}

local_ref< java::math::BigInteger > java::math::BigInteger::add(local_ref< java::math::BigInteger > const &a0)
{
	return call_method<
		java::math::BigInteger::J2CPP_CLASS_NAME,
		java::math::BigInteger::J2CPP_METHOD_NAME(10),
		java::math::BigInteger::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< java::math::BigInteger > >
	(get_jobject(), a0);
}

local_ref< java::math::BigInteger > java::math::BigInteger::subtract(local_ref< java::math::BigInteger > const &a0)
{
	return call_method<
		java::math::BigInteger::J2CPP_CLASS_NAME,
		java::math::BigInteger::J2CPP_METHOD_NAME(11),
		java::math::BigInteger::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< java::math::BigInteger > >
	(get_jobject(), a0);
}

jint java::math::BigInteger::signum()
{
	return call_method<
		java::math::BigInteger::J2CPP_CLASS_NAME,
		java::math::BigInteger::J2CPP_METHOD_NAME(12),
		java::math::BigInteger::J2CPP_METHOD_SIGNATURE(12), 
		jint >
	(get_jobject());
}

local_ref< java::math::BigInteger > java::math::BigInteger::shiftRight(jint a0)
{
	return call_method<
		java::math::BigInteger::J2CPP_CLASS_NAME,
		java::math::BigInteger::J2CPP_METHOD_NAME(13),
		java::math::BigInteger::J2CPP_METHOD_SIGNATURE(13), 
		local_ref< java::math::BigInteger > >
	(get_jobject(), a0);
}

local_ref< java::math::BigInteger > java::math::BigInteger::shiftLeft(jint a0)
{
	return call_method<
		java::math::BigInteger::J2CPP_CLASS_NAME,
		java::math::BigInteger::J2CPP_METHOD_NAME(14),
		java::math::BigInteger::J2CPP_METHOD_SIGNATURE(14), 
		local_ref< java::math::BigInteger > >
	(get_jobject(), a0);
}

jint java::math::BigInteger::bitLength()
{
	return call_method<
		java::math::BigInteger::J2CPP_CLASS_NAME,
		java::math::BigInteger::J2CPP_METHOD_NAME(15),
		java::math::BigInteger::J2CPP_METHOD_SIGNATURE(15), 
		jint >
	(get_jobject());
}

jboolean java::math::BigInteger::testBit(jint a0)
{
	return call_method<
		java::math::BigInteger::J2CPP_CLASS_NAME,
		java::math::BigInteger::J2CPP_METHOD_NAME(16),
		java::math::BigInteger::J2CPP_METHOD_SIGNATURE(16), 
		jboolean >
	(get_jobject(), a0);
}

local_ref< java::math::BigInteger > java::math::BigInteger::setBit(jint a0)
{
	return call_method<
		java::math::BigInteger::J2CPP_CLASS_NAME,
		java::math::BigInteger::J2CPP_METHOD_NAME(17),
		java::math::BigInteger::J2CPP_METHOD_SIGNATURE(17), 
		local_ref< java::math::BigInteger > >
	(get_jobject(), a0);
}

local_ref< java::math::BigInteger > java::math::BigInteger::clearBit(jint a0)
{
	return call_method<
		java::math::BigInteger::J2CPP_CLASS_NAME,
		java::math::BigInteger::J2CPP_METHOD_NAME(18),
		java::math::BigInteger::J2CPP_METHOD_SIGNATURE(18), 
		local_ref< java::math::BigInteger > >
	(get_jobject(), a0);
}

local_ref< java::math::BigInteger > java::math::BigInteger::flipBit(jint a0)
{
	return call_method<
		java::math::BigInteger::J2CPP_CLASS_NAME,
		java::math::BigInteger::J2CPP_METHOD_NAME(19),
		java::math::BigInteger::J2CPP_METHOD_SIGNATURE(19), 
		local_ref< java::math::BigInteger > >
	(get_jobject(), a0);
}

jint java::math::BigInteger::getLowestSetBit()
{
	return call_method<
		java::math::BigInteger::J2CPP_CLASS_NAME,
		java::math::BigInteger::J2CPP_METHOD_NAME(20),
		java::math::BigInteger::J2CPP_METHOD_SIGNATURE(20), 
		jint >
	(get_jobject());
}

jint java::math::BigInteger::bitCount()
{
	return call_method<
		java::math::BigInteger::J2CPP_CLASS_NAME,
		java::math::BigInteger::J2CPP_METHOD_NAME(21),
		java::math::BigInteger::J2CPP_METHOD_SIGNATURE(21), 
		jint >
	(get_jobject());
}

local_ref< java::math::BigInteger > java::math::BigInteger::not()
{
	return call_method<
		java::math::BigInteger::J2CPP_CLASS_NAME,
		java::math::BigInteger::J2CPP_METHOD_NAME(22),
		java::math::BigInteger::J2CPP_METHOD_SIGNATURE(22), 
		local_ref< java::math::BigInteger > >
	(get_jobject());
}

local_ref< java::math::BigInteger > java::math::BigInteger::and_(local_ref< java::math::BigInteger > const &a0)
{
	return call_method<
		java::math::BigInteger::J2CPP_CLASS_NAME,
		java::math::BigInteger::J2CPP_METHOD_NAME(23),
		java::math::BigInteger::J2CPP_METHOD_SIGNATURE(23), 
		local_ref< java::math::BigInteger > >
	(get_jobject(), a0);
}

local_ref< java::math::BigInteger > java::math::BigInteger::or_(local_ref< java::math::BigInteger > const &a0)
{
	return call_method<
		java::math::BigInteger::J2CPP_CLASS_NAME,
		java::math::BigInteger::J2CPP_METHOD_NAME(24),
		java::math::BigInteger::J2CPP_METHOD_SIGNATURE(24), 
		local_ref< java::math::BigInteger > >
	(get_jobject(), a0);
}

local_ref< java::math::BigInteger > java::math::BigInteger::xor_(local_ref< java::math::BigInteger > const &a0)
{
	return call_method<
		java::math::BigInteger::J2CPP_CLASS_NAME,
		java::math::BigInteger::J2CPP_METHOD_NAME(25),
		java::math::BigInteger::J2CPP_METHOD_SIGNATURE(25), 
		local_ref< java::math::BigInteger > >
	(get_jobject(), a0);
}

local_ref< java::math::BigInteger > java::math::BigInteger::andNot(local_ref< java::math::BigInteger > const &a0)
{
	return call_method<
		java::math::BigInteger::J2CPP_CLASS_NAME,
		java::math::BigInteger::J2CPP_METHOD_NAME(26),
		java::math::BigInteger::J2CPP_METHOD_SIGNATURE(26), 
		local_ref< java::math::BigInteger > >
	(get_jobject(), a0);
}

jint java::math::BigInteger::intValue()
{
	return call_method<
		java::math::BigInteger::J2CPP_CLASS_NAME,
		java::math::BigInteger::J2CPP_METHOD_NAME(27),
		java::math::BigInteger::J2CPP_METHOD_SIGNATURE(27), 
		jint >
	(get_jobject());
}

jlong java::math::BigInteger::longValue()
{
	return call_method<
		java::math::BigInteger::J2CPP_CLASS_NAME,
		java::math::BigInteger::J2CPP_METHOD_NAME(28),
		java::math::BigInteger::J2CPP_METHOD_SIGNATURE(28), 
		jlong >
	(get_jobject());
}

jfloat java::math::BigInteger::floatValue()
{
	return call_method<
		java::math::BigInteger::J2CPP_CLASS_NAME,
		java::math::BigInteger::J2CPP_METHOD_NAME(29),
		java::math::BigInteger::J2CPP_METHOD_SIGNATURE(29), 
		jfloat >
	(get_jobject());
}

jdouble java::math::BigInteger::doubleValue()
{
	return call_method<
		java::math::BigInteger::J2CPP_CLASS_NAME,
		java::math::BigInteger::J2CPP_METHOD_NAME(30),
		java::math::BigInteger::J2CPP_METHOD_SIGNATURE(30), 
		jdouble >
	(get_jobject());
}

jint java::math::BigInteger::compareTo(local_ref< java::math::BigInteger > const &a0)
{
	return call_method<
		java::math::BigInteger::J2CPP_CLASS_NAME,
		java::math::BigInteger::J2CPP_METHOD_NAME(31),
		java::math::BigInteger::J2CPP_METHOD_SIGNATURE(31), 
		jint >
	(get_jobject(), a0);
}

local_ref< java::math::BigInteger > java::math::BigInteger::min(local_ref< java::math::BigInteger > const &a0)
{
	return call_method<
		java::math::BigInteger::J2CPP_CLASS_NAME,
		java::math::BigInteger::J2CPP_METHOD_NAME(32),
		java::math::BigInteger::J2CPP_METHOD_SIGNATURE(32), 
		local_ref< java::math::BigInteger > >
	(get_jobject(), a0);
}

local_ref< java::math::BigInteger > java::math::BigInteger::max(local_ref< java::math::BigInteger > const &a0)
{
	return call_method<
		java::math::BigInteger::J2CPP_CLASS_NAME,
		java::math::BigInteger::J2CPP_METHOD_NAME(33),
		java::math::BigInteger::J2CPP_METHOD_SIGNATURE(33), 
		local_ref< java::math::BigInteger > >
	(get_jobject(), a0);
}

jint java::math::BigInteger::hashCode()
{
	return call_method<
		java::math::BigInteger::J2CPP_CLASS_NAME,
		java::math::BigInteger::J2CPP_METHOD_NAME(34),
		java::math::BigInteger::J2CPP_METHOD_SIGNATURE(34), 
		jint >
	(get_jobject());
}

jboolean java::math::BigInteger::equals(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::math::BigInteger::J2CPP_CLASS_NAME,
		java::math::BigInteger::J2CPP_METHOD_NAME(35),
		java::math::BigInteger::J2CPP_METHOD_SIGNATURE(35), 
		jboolean >
	(get_jobject(), a0);
}

local_ref< java::lang::String > java::math::BigInteger::toString()
{
	return call_method<
		java::math::BigInteger::J2CPP_CLASS_NAME,
		java::math::BigInteger::J2CPP_METHOD_NAME(36),
		java::math::BigInteger::J2CPP_METHOD_SIGNATURE(36), 
		local_ref< java::lang::String > >
	(get_jobject());
}

local_ref< java::lang::String > java::math::BigInteger::toString(jint a0)
{
	return call_method<
		java::math::BigInteger::J2CPP_CLASS_NAME,
		java::math::BigInteger::J2CPP_METHOD_NAME(37),
		java::math::BigInteger::J2CPP_METHOD_SIGNATURE(37), 
		local_ref< java::lang::String > >
	(get_jobject(), a0);
}

local_ref< java::math::BigInteger > java::math::BigInteger::gcd(local_ref< java::math::BigInteger > const &a0)
{
	return call_method<
		java::math::BigInteger::J2CPP_CLASS_NAME,
		java::math::BigInteger::J2CPP_METHOD_NAME(38),
		java::math::BigInteger::J2CPP_METHOD_SIGNATURE(38), 
		local_ref< java::math::BigInteger > >
	(get_jobject(), a0);
}

local_ref< java::math::BigInteger > java::math::BigInteger::multiply(local_ref< java::math::BigInteger > const &a0)
{
	return call_method<
		java::math::BigInteger::J2CPP_CLASS_NAME,
		java::math::BigInteger::J2CPP_METHOD_NAME(39),
		java::math::BigInteger::J2CPP_METHOD_SIGNATURE(39), 
		local_ref< java::math::BigInteger > >
	(get_jobject(), a0);
}

local_ref< java::math::BigInteger > java::math::BigInteger::pow(jint a0)
{
	return call_method<
		java::math::BigInteger::J2CPP_CLASS_NAME,
		java::math::BigInteger::J2CPP_METHOD_NAME(40),
		java::math::BigInteger::J2CPP_METHOD_SIGNATURE(40), 
		local_ref< java::math::BigInteger > >
	(get_jobject(), a0);
}

local_ref< array< local_ref< java::math::BigInteger >, 1> > java::math::BigInteger::divideAndRemainder(local_ref< java::math::BigInteger > const &a0)
{
	return call_method<
		java::math::BigInteger::J2CPP_CLASS_NAME,
		java::math::BigInteger::J2CPP_METHOD_NAME(41),
		java::math::BigInteger::J2CPP_METHOD_SIGNATURE(41), 
		local_ref< array< local_ref< java::math::BigInteger >, 1> > >
	(get_jobject(), a0);
}

local_ref< java::math::BigInteger > java::math::BigInteger::divide(local_ref< java::math::BigInteger > const &a0)
{
	return call_method<
		java::math::BigInteger::J2CPP_CLASS_NAME,
		java::math::BigInteger::J2CPP_METHOD_NAME(42),
		java::math::BigInteger::J2CPP_METHOD_SIGNATURE(42), 
		local_ref< java::math::BigInteger > >
	(get_jobject(), a0);
}

local_ref< java::math::BigInteger > java::math::BigInteger::remainder(local_ref< java::math::BigInteger > const &a0)
{
	return call_method<
		java::math::BigInteger::J2CPP_CLASS_NAME,
		java::math::BigInteger::J2CPP_METHOD_NAME(43),
		java::math::BigInteger::J2CPP_METHOD_SIGNATURE(43), 
		local_ref< java::math::BigInteger > >
	(get_jobject(), a0);
}

local_ref< java::math::BigInteger > java::math::BigInteger::modInverse(local_ref< java::math::BigInteger > const &a0)
{
	return call_method<
		java::math::BigInteger::J2CPP_CLASS_NAME,
		java::math::BigInteger::J2CPP_METHOD_NAME(44),
		java::math::BigInteger::J2CPP_METHOD_SIGNATURE(44), 
		local_ref< java::math::BigInteger > >
	(get_jobject(), a0);
}

local_ref< java::math::BigInteger > java::math::BigInteger::modPow(local_ref< java::math::BigInteger > const &a0, local_ref< java::math::BigInteger > const &a1)
{
	return call_method<
		java::math::BigInteger::J2CPP_CLASS_NAME,
		java::math::BigInteger::J2CPP_METHOD_NAME(45),
		java::math::BigInteger::J2CPP_METHOD_SIGNATURE(45), 
		local_ref< java::math::BigInteger > >
	(get_jobject(), a0, a1);
}

local_ref< java::math::BigInteger > java::math::BigInteger::mod(local_ref< java::math::BigInteger > const &a0)
{
	return call_method<
		java::math::BigInteger::J2CPP_CLASS_NAME,
		java::math::BigInteger::J2CPP_METHOD_NAME(46),
		java::math::BigInteger::J2CPP_METHOD_SIGNATURE(46), 
		local_ref< java::math::BigInteger > >
	(get_jobject(), a0);
}

jboolean java::math::BigInteger::isProbablePrime(jint a0)
{
	return call_method<
		java::math::BigInteger::J2CPP_CLASS_NAME,
		java::math::BigInteger::J2CPP_METHOD_NAME(47),
		java::math::BigInteger::J2CPP_METHOD_SIGNATURE(47), 
		jboolean >
	(get_jobject(), a0);
}

local_ref< java::math::BigInteger > java::math::BigInteger::nextProbablePrime()
{
	return call_method<
		java::math::BigInteger::J2CPP_CLASS_NAME,
		java::math::BigInteger::J2CPP_METHOD_NAME(48),
		java::math::BigInteger::J2CPP_METHOD_SIGNATURE(48), 
		local_ref< java::math::BigInteger > >
	(get_jobject());
}

local_ref< java::math::BigInteger > java::math::BigInteger::probablePrime(jint a0, local_ref< java::util::Random > const &a1)
{
	return call_static_method<
		java::math::BigInteger::J2CPP_CLASS_NAME,
		java::math::BigInteger::J2CPP_METHOD_NAME(49),
		java::math::BigInteger::J2CPP_METHOD_SIGNATURE(49), 
		local_ref< java::math::BigInteger > >
	(a0, a1);
}

jint java::math::BigInteger::compareTo(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::math::BigInteger::J2CPP_CLASS_NAME,
		java::math::BigInteger::J2CPP_METHOD_NAME(50),
		java::math::BigInteger::J2CPP_METHOD_SIGNATURE(50), 
		jint >
	(get_jobject(), a0);
}



static_field<
	java::math::BigInteger::J2CPP_CLASS_NAME,
	java::math::BigInteger::J2CPP_FIELD_NAME(0),
	java::math::BigInteger::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::math::BigInteger >
> java::math::BigInteger::ZERO;

static_field<
	java::math::BigInteger::J2CPP_CLASS_NAME,
	java::math::BigInteger::J2CPP_FIELD_NAME(1),
	java::math::BigInteger::J2CPP_FIELD_SIGNATURE(1),
	local_ref< java::math::BigInteger >
> java::math::BigInteger::ONE;

static_field<
	java::math::BigInteger::J2CPP_CLASS_NAME,
	java::math::BigInteger::J2CPP_FIELD_NAME(2),
	java::math::BigInteger::J2CPP_FIELD_SIGNATURE(2),
	local_ref< java::math::BigInteger >
> java::math::BigInteger::TEN;


J2CPP_DEFINE_CLASS(java::math::BigInteger,"java/math/BigInteger")
J2CPP_DEFINE_METHOD(java::math::BigInteger,0,"<init>","(ILjava/util/Random;)V")
J2CPP_DEFINE_METHOD(java::math::BigInteger,1,"<init>","(IILjava/util/Random;)V")
J2CPP_DEFINE_METHOD(java::math::BigInteger,2,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::math::BigInteger,3,"<init>","(Ljava/lang/String;I)V")
J2CPP_DEFINE_METHOD(java::math::BigInteger,4,"<init>","(I[B)V")
J2CPP_DEFINE_METHOD(java::math::BigInteger,5,"<init>","([B)V")
J2CPP_DEFINE_METHOD(java::math::BigInteger,6,"valueOf","(J)Ljava/math/BigInteger;")
J2CPP_DEFINE_METHOD(java::math::BigInteger,7,"toByteArray","()[B")
J2CPP_DEFINE_METHOD(java::math::BigInteger,8,"abs","()Ljava/math/BigInteger;")
J2CPP_DEFINE_METHOD(java::math::BigInteger,9,"negate","()Ljava/math/BigInteger;")
J2CPP_DEFINE_METHOD(java::math::BigInteger,10,"add","(Ljava/math/BigInteger;)Ljava/math/BigInteger;")
J2CPP_DEFINE_METHOD(java::math::BigInteger,11,"subtract","(Ljava/math/BigInteger;)Ljava/math/BigInteger;")
J2CPP_DEFINE_METHOD(java::math::BigInteger,12,"signum","()I")
J2CPP_DEFINE_METHOD(java::math::BigInteger,13,"shiftRight","(I)Ljava/math/BigInteger;")
J2CPP_DEFINE_METHOD(java::math::BigInteger,14,"shiftLeft","(I)Ljava/math/BigInteger;")
J2CPP_DEFINE_METHOD(java::math::BigInteger,15,"bitLength","()I")
J2CPP_DEFINE_METHOD(java::math::BigInteger,16,"testBit","(I)Z")
J2CPP_DEFINE_METHOD(java::math::BigInteger,17,"setBit","(I)Ljava/math/BigInteger;")
J2CPP_DEFINE_METHOD(java::math::BigInteger,18,"clearBit","(I)Ljava/math/BigInteger;")
J2CPP_DEFINE_METHOD(java::math::BigInteger,19,"flipBit","(I)Ljava/math/BigInteger;")
J2CPP_DEFINE_METHOD(java::math::BigInteger,20,"getLowestSetBit","()I")
J2CPP_DEFINE_METHOD(java::math::BigInteger,21,"bitCount","()I")
J2CPP_DEFINE_METHOD(java::math::BigInteger,22,"not","()Ljava/math/BigInteger;")
J2CPP_DEFINE_METHOD(java::math::BigInteger,23,"and","(Ljava/math/BigInteger;)Ljava/math/BigInteger;")
J2CPP_DEFINE_METHOD(java::math::BigInteger,24,"or","(Ljava/math/BigInteger;)Ljava/math/BigInteger;")
J2CPP_DEFINE_METHOD(java::math::BigInteger,25,"xor","(Ljava/math/BigInteger;)Ljava/math/BigInteger;")
J2CPP_DEFINE_METHOD(java::math::BigInteger,26,"andNot","(Ljava/math/BigInteger;)Ljava/math/BigInteger;")
J2CPP_DEFINE_METHOD(java::math::BigInteger,27,"intValue","()I")
J2CPP_DEFINE_METHOD(java::math::BigInteger,28,"longValue","()J")
J2CPP_DEFINE_METHOD(java::math::BigInteger,29,"floatValue","()F")
J2CPP_DEFINE_METHOD(java::math::BigInteger,30,"doubleValue","()D")
J2CPP_DEFINE_METHOD(java::math::BigInteger,31,"compareTo","(Ljava/math/BigInteger;)I")
J2CPP_DEFINE_METHOD(java::math::BigInteger,32,"min","(Ljava/math/BigInteger;)Ljava/math/BigInteger;")
J2CPP_DEFINE_METHOD(java::math::BigInteger,33,"max","(Ljava/math/BigInteger;)Ljava/math/BigInteger;")
J2CPP_DEFINE_METHOD(java::math::BigInteger,34,"hashCode","()I")
J2CPP_DEFINE_METHOD(java::math::BigInteger,35,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::math::BigInteger,36,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::math::BigInteger,37,"toString","(I)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::math::BigInteger,38,"gcd","(Ljava/math/BigInteger;)Ljava/math/BigInteger;")
J2CPP_DEFINE_METHOD(java::math::BigInteger,39,"multiply","(Ljava/math/BigInteger;)Ljava/math/BigInteger;")
J2CPP_DEFINE_METHOD(java::math::BigInteger,40,"pow","(I)Ljava/math/BigInteger;")
J2CPP_DEFINE_METHOD(java::math::BigInteger,41,"divideAndRemainder","(Ljava/math/BigInteger;)[java.math.BigInteger")
J2CPP_DEFINE_METHOD(java::math::BigInteger,42,"divide","(Ljava/math/BigInteger;)Ljava/math/BigInteger;")
J2CPP_DEFINE_METHOD(java::math::BigInteger,43,"remainder","(Ljava/math/BigInteger;)Ljava/math/BigInteger;")
J2CPP_DEFINE_METHOD(java::math::BigInteger,44,"modInverse","(Ljava/math/BigInteger;)Ljava/math/BigInteger;")
J2CPP_DEFINE_METHOD(java::math::BigInteger,45,"modPow","(Ljava/math/BigInteger;Ljava/math/BigInteger;)Ljava/math/BigInteger;")
J2CPP_DEFINE_METHOD(java::math::BigInteger,46,"mod","(Ljava/math/BigInteger;)Ljava/math/BigInteger;")
J2CPP_DEFINE_METHOD(java::math::BigInteger,47,"isProbablePrime","(I)Z")
J2CPP_DEFINE_METHOD(java::math::BigInteger,48,"nextProbablePrime","()Ljava/math/BigInteger;")
J2CPP_DEFINE_METHOD(java::math::BigInteger,49,"probablePrime","(ILjava/util/Random;)Ljava/math/BigInteger;")
J2CPP_DEFINE_METHOD(java::math::BigInteger,50,"compareTo","(Ljava/lang/Object;)I")
J2CPP_DEFINE_METHOD(java::math::BigInteger,51,"<clinit>","()V")
J2CPP_DEFINE_FIELD(java::math::BigInteger,0,"ZERO","Ljava/math/BigInteger;")
J2CPP_DEFINE_FIELD(java::math::BigInteger,1,"ONE","Ljava/math/BigInteger;")
J2CPP_DEFINE_FIELD(java::math::BigInteger,2,"TEN","Ljava/math/BigInteger;")

} //namespace j2cpp

#endif //J2CPP_JAVA_MATH_BIGINTEGER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
