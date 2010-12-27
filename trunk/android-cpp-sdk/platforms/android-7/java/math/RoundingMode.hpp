/*================================================================================
  code generated by: java2cpp
  class: java.math.RoundingMode
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_MATH_ROUNDINGMODE_HPP_DECL
#define J2CPP_JAVA_MATH_ROUNDINGMODE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Enum; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/Enum.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace math {

	class RoundingMode;
	class RoundingMode
		: public cpp_object<RoundingMode>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)
		J2CPP_DECLARE_FIELD(6)
		J2CPP_DECLARE_FIELD(7)
		J2CPP_DECLARE_FIELD(8)

		explicit RoundingMode(jobject jobj)
		: cpp_object<RoundingMode>(jobj)
		{
		}

		operator local_ref<java::lang::Enum>() const;


		static local_ref< cpp_object_array<java::math::RoundingMode, 1> > values();
		static local_ref< java::math::RoundingMode > valueOf(local_ref< java::lang::String > const&);
		static local_ref< java::math::RoundingMode > valueOf(cpp_int const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::math::RoundingMode > > CEILING;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::math::RoundingMode > > DOWN;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< java::math::RoundingMode > > FLOOR;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< java::math::RoundingMode > > HALF_DOWN;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), local_ref< java::math::RoundingMode > > HALF_EVEN;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), local_ref< java::math::RoundingMode > > HALF_UP;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), local_ref< java::math::RoundingMode > > UNNECESSARY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), local_ref< java::math::RoundingMode > > UP;
	}; //class RoundingMode

} //namespace math
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_MATH_ROUNDINGMODE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_MATH_ROUNDINGMODE_HPP_IMPL
#define J2CPP_JAVA_MATH_ROUNDINGMODE_HPP_IMPL

namespace j2cpp {



java::math::RoundingMode::operator local_ref<java::lang::Enum>() const
{
	return local_ref<java::lang::Enum>(get_jtype());
}

local_ref< cpp_object_array<java::math::RoundingMode, 1> > java::math::RoundingMode::values()
{
	return local_ref< cpp_object_array<java::math::RoundingMode, 1> >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), true>()
		)
	);
}

local_ref< java::math::RoundingMode > java::math::RoundingMode::valueOf(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::math::RoundingMode >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), true>(),
			a0.get_jtype()
		)
	);
}


local_ref< java::math::RoundingMode > java::math::RoundingMode::valueOf(cpp_int const &a0)
{
	return local_ref< java::math::RoundingMode >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), true>(),
			a0.get_jtype()
		)
	);
}



static_field<
	java::math::RoundingMode::J2CPP_CLASS_NAME,
	java::math::RoundingMode::J2CPP_FIELD_NAME(0),
	java::math::RoundingMode::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::math::RoundingMode >
> java::math::RoundingMode::CEILING;

static_field<
	java::math::RoundingMode::J2CPP_CLASS_NAME,
	java::math::RoundingMode::J2CPP_FIELD_NAME(1),
	java::math::RoundingMode::J2CPP_FIELD_SIGNATURE(1),
	local_ref< java::math::RoundingMode >
> java::math::RoundingMode::DOWN;

static_field<
	java::math::RoundingMode::J2CPP_CLASS_NAME,
	java::math::RoundingMode::J2CPP_FIELD_NAME(2),
	java::math::RoundingMode::J2CPP_FIELD_SIGNATURE(2),
	local_ref< java::math::RoundingMode >
> java::math::RoundingMode::FLOOR;

static_field<
	java::math::RoundingMode::J2CPP_CLASS_NAME,
	java::math::RoundingMode::J2CPP_FIELD_NAME(3),
	java::math::RoundingMode::J2CPP_FIELD_SIGNATURE(3),
	local_ref< java::math::RoundingMode >
> java::math::RoundingMode::HALF_DOWN;

static_field<
	java::math::RoundingMode::J2CPP_CLASS_NAME,
	java::math::RoundingMode::J2CPP_FIELD_NAME(4),
	java::math::RoundingMode::J2CPP_FIELD_SIGNATURE(4),
	local_ref< java::math::RoundingMode >
> java::math::RoundingMode::HALF_EVEN;

static_field<
	java::math::RoundingMode::J2CPP_CLASS_NAME,
	java::math::RoundingMode::J2CPP_FIELD_NAME(5),
	java::math::RoundingMode::J2CPP_FIELD_SIGNATURE(5),
	local_ref< java::math::RoundingMode >
> java::math::RoundingMode::HALF_UP;

static_field<
	java::math::RoundingMode::J2CPP_CLASS_NAME,
	java::math::RoundingMode::J2CPP_FIELD_NAME(6),
	java::math::RoundingMode::J2CPP_FIELD_SIGNATURE(6),
	local_ref< java::math::RoundingMode >
> java::math::RoundingMode::UNNECESSARY;

static_field<
	java::math::RoundingMode::J2CPP_CLASS_NAME,
	java::math::RoundingMode::J2CPP_FIELD_NAME(7),
	java::math::RoundingMode::J2CPP_FIELD_SIGNATURE(7),
	local_ref< java::math::RoundingMode >
> java::math::RoundingMode::UP;


J2CPP_DEFINE_CLASS(java::math::RoundingMode,"java/math/RoundingMode")
J2CPP_DEFINE_METHOD(java::math::RoundingMode,0,"values","()[java.math.RoundingMode")
J2CPP_DEFINE_METHOD(java::math::RoundingMode,1,"valueOf","(Ljava/lang/String;)Ljava/math/RoundingMode;")
J2CPP_DEFINE_METHOD(java::math::RoundingMode,2,"<init>","(Ljava/lang/String;I)V")
J2CPP_DEFINE_METHOD(java::math::RoundingMode,3,"valueOf","(I)Ljava/math/RoundingMode;")
J2CPP_DEFINE_METHOD(java::math::RoundingMode,4,"<clinit>","()V")
J2CPP_DEFINE_FIELD(java::math::RoundingMode,0,"CEILING","Ljava/math/RoundingMode;")
J2CPP_DEFINE_FIELD(java::math::RoundingMode,1,"DOWN","Ljava/math/RoundingMode;")
J2CPP_DEFINE_FIELD(java::math::RoundingMode,2,"FLOOR","Ljava/math/RoundingMode;")
J2CPP_DEFINE_FIELD(java::math::RoundingMode,3,"HALF_DOWN","Ljava/math/RoundingMode;")
J2CPP_DEFINE_FIELD(java::math::RoundingMode,4,"HALF_EVEN","Ljava/math/RoundingMode;")
J2CPP_DEFINE_FIELD(java::math::RoundingMode,5,"HALF_UP","Ljava/math/RoundingMode;")
J2CPP_DEFINE_FIELD(java::math::RoundingMode,6,"UNNECESSARY","Ljava/math/RoundingMode;")
J2CPP_DEFINE_FIELD(java::math::RoundingMode,7,"UP","Ljava/math/RoundingMode;")
J2CPP_DEFINE_FIELD(java::math::RoundingMode,8,"$VALUES","[java.math.RoundingMode")

} //namespace j2cpp

#endif //J2CPP_JAVA_MATH_ROUNDINGMODE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
