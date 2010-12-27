/*================================================================================
  code generated by: java2cpp
  class: android.hardware.GeomagneticField
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_HARDWARE_GEOMAGNETICFIELD_HPP_DECL
#define J2CPP_ANDROID_HARDWARE_GEOMAGNETICFIELD_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace hardware {

	class GeomagneticField;
	class GeomagneticField
		: public cpp_object<GeomagneticField>
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

		explicit GeomagneticField(jobject jobj)
		: cpp_object<GeomagneticField>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		GeomagneticField(cpp_float const&, cpp_float const&, cpp_float const&, cpp_long const&);
		cpp_float getX();
		cpp_float getY();
		cpp_float getZ();
		cpp_float getDeclination();
		cpp_float getInclination();
		cpp_float getHorizontalStrength();
		cpp_float getFieldStrength();
	}; //class GeomagneticField

} //namespace hardware
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_HARDWARE_GEOMAGNETICFIELD_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_HARDWARE_GEOMAGNETICFIELD_HPP_IMPL
#define J2CPP_ANDROID_HARDWARE_GEOMAGNETICFIELD_HPP_IMPL

namespace j2cpp {



android::hardware::GeomagneticField::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}


android::hardware::GeomagneticField::GeomagneticField(cpp_float const &a0, cpp_float const &a1, cpp_float const &a2, cpp_long const &a3)
: cpp_object<android::hardware::GeomagneticField>(
	environment::get().get_jenv()->NewObject(
		get_class<android::hardware::GeomagneticField::J2CPP_CLASS_NAME>(),
		get_method_id<android::hardware::GeomagneticField::J2CPP_CLASS_NAME, android::hardware::GeomagneticField::J2CPP_METHOD_NAME(0), android::hardware::GeomagneticField::J2CPP_METHOD_SIGNATURE(0), false>(),
		a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
	)
)
{
}


cpp_float android::hardware::GeomagneticField::getX()
{
	return cpp_float(
		environment::get().get_jenv()->CallFloatMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

cpp_float android::hardware::GeomagneticField::getY()
{
	return cpp_float(
		environment::get().get_jenv()->CallFloatMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

cpp_float android::hardware::GeomagneticField::getZ()
{
	return cpp_float(
		environment::get().get_jenv()->CallFloatMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

cpp_float android::hardware::GeomagneticField::getDeclination()
{
	return cpp_float(
		environment::get().get_jenv()->CallFloatMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

cpp_float android::hardware::GeomagneticField::getInclination()
{
	return cpp_float(
		environment::get().get_jenv()->CallFloatMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

cpp_float android::hardware::GeomagneticField::getHorizontalStrength()
{
	return cpp_float(
		environment::get().get_jenv()->CallFloatMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

cpp_float android::hardware::GeomagneticField::getFieldStrength()
{
	return cpp_float(
		environment::get().get_jenv()->CallFloatMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(android::hardware::GeomagneticField,"android/hardware/GeomagneticField")
J2CPP_DEFINE_METHOD(android::hardware::GeomagneticField,0,"<init>","(FFFJ)V")
J2CPP_DEFINE_METHOD(android::hardware::GeomagneticField,1,"getX","()F")
J2CPP_DEFINE_METHOD(android::hardware::GeomagneticField,2,"getY","()F")
J2CPP_DEFINE_METHOD(android::hardware::GeomagneticField,3,"getZ","()F")
J2CPP_DEFINE_METHOD(android::hardware::GeomagneticField,4,"getDeclination","()F")
J2CPP_DEFINE_METHOD(android::hardware::GeomagneticField,5,"getInclination","()F")
J2CPP_DEFINE_METHOD(android::hardware::GeomagneticField,6,"getHorizontalStrength","()F")
J2CPP_DEFINE_METHOD(android::hardware::GeomagneticField,7,"getFieldStrength","()F")

} //namespace j2cpp

#endif //J2CPP_ANDROID_HARDWARE_GEOMAGNETICFIELD_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
