/*================================================================================
  code generated by: java2cpp
  class: android.util.DisplayMetrics
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_UTIL_DISPLAYMETRICS_HPP_DECL
#define J2CPP_ANDROID_UTIL_DISPLAYMETRICS_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace util {

	class DisplayMetrics;
	class DisplayMetrics
		: public cpp_object<DisplayMetrics>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)
		J2CPP_DECLARE_FIELD(6)
		J2CPP_DECLARE_FIELD(7)
		J2CPP_DECLARE_FIELD(8)
		J2CPP_DECLARE_FIELD(9)
		J2CPP_DECLARE_FIELD(10)

		explicit DisplayMetrics(jobject jobj)
		: cpp_object<DisplayMetrics>(jobj)
, widthPixels(jobj)
, heightPixels(jobj)
, density(jobj)
, densityDpi(jobj)
, scaledDensity(jobj)
, xdpi(jobj)
, ydpi(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		DisplayMetrics();
		void setTo(local_ref< android::util::DisplayMetrics > const&);
		void setToDefaults();
		local_ref< java::lang::String > toString();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_int > DENSITY_LOW;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), cpp_int > DENSITY_MEDIUM;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), cpp_int > DENSITY_HIGH;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), cpp_int > DENSITY_DEFAULT;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), cpp_int > widthPixels;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), cpp_int > heightPixels;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), cpp_float > density;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), cpp_int > densityDpi;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), cpp_float > scaledDensity;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(9), J2CPP_FIELD_SIGNATURE(9), cpp_float > xdpi;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(10), J2CPP_FIELD_SIGNATURE(10), cpp_float > ydpi;
	}; //class DisplayMetrics

} //namespace util
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_UTIL_DISPLAYMETRICS_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_UTIL_DISPLAYMETRICS_HPP_IMPL
#define J2CPP_ANDROID_UTIL_DISPLAYMETRICS_HPP_IMPL

namespace j2cpp {



android::util::DisplayMetrics::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}


android::util::DisplayMetrics::DisplayMetrics()
: cpp_object<android::util::DisplayMetrics>(
	environment::get().get_jenv()->NewObject(
		get_class<android::util::DisplayMetrics::J2CPP_CLASS_NAME>(),
		get_method_id<android::util::DisplayMetrics::J2CPP_CLASS_NAME, android::util::DisplayMetrics::J2CPP_METHOD_NAME(0), android::util::DisplayMetrics::J2CPP_METHOD_SIGNATURE(0), false>()
	)
)
, widthPixels(get_jtype())
, heightPixels(get_jtype())
, density(get_jtype())
, densityDpi(get_jtype())
, scaledDensity(get_jtype())
, xdpi(get_jtype())
, ydpi(get_jtype())
{
}


void android::util::DisplayMetrics::setTo(local_ref< android::util::DisplayMetrics > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

void android::util::DisplayMetrics::setToDefaults()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

local_ref< java::lang::String > android::util::DisplayMetrics::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}


static_field<
	android::util::DisplayMetrics::J2CPP_CLASS_NAME,
	android::util::DisplayMetrics::J2CPP_FIELD_NAME(0),
	android::util::DisplayMetrics::J2CPP_FIELD_SIGNATURE(0),
	cpp_int
> android::util::DisplayMetrics::DENSITY_LOW;

static_field<
	android::util::DisplayMetrics::J2CPP_CLASS_NAME,
	android::util::DisplayMetrics::J2CPP_FIELD_NAME(1),
	android::util::DisplayMetrics::J2CPP_FIELD_SIGNATURE(1),
	cpp_int
> android::util::DisplayMetrics::DENSITY_MEDIUM;

static_field<
	android::util::DisplayMetrics::J2CPP_CLASS_NAME,
	android::util::DisplayMetrics::J2CPP_FIELD_NAME(2),
	android::util::DisplayMetrics::J2CPP_FIELD_SIGNATURE(2),
	cpp_int
> android::util::DisplayMetrics::DENSITY_HIGH;

static_field<
	android::util::DisplayMetrics::J2CPP_CLASS_NAME,
	android::util::DisplayMetrics::J2CPP_FIELD_NAME(3),
	android::util::DisplayMetrics::J2CPP_FIELD_SIGNATURE(3),
	cpp_int
> android::util::DisplayMetrics::DENSITY_DEFAULT;


J2CPP_DEFINE_CLASS(android::util::DisplayMetrics,"android/util/DisplayMetrics")
J2CPP_DEFINE_METHOD(android::util::DisplayMetrics,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::util::DisplayMetrics,1,"setTo","(Landroid/util/DisplayMetrics;)V")
J2CPP_DEFINE_METHOD(android::util::DisplayMetrics,2,"setToDefaults","()V")
J2CPP_DEFINE_METHOD(android::util::DisplayMetrics,3,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::util::DisplayMetrics,0,"DENSITY_LOW","I")
J2CPP_DEFINE_FIELD(android::util::DisplayMetrics,1,"DENSITY_MEDIUM","I")
J2CPP_DEFINE_FIELD(android::util::DisplayMetrics,2,"DENSITY_HIGH","I")
J2CPP_DEFINE_FIELD(android::util::DisplayMetrics,3,"DENSITY_DEFAULT","I")
J2CPP_DEFINE_FIELD(android::util::DisplayMetrics,4,"widthPixels","I")
J2CPP_DEFINE_FIELD(android::util::DisplayMetrics,5,"heightPixels","I")
J2CPP_DEFINE_FIELD(android::util::DisplayMetrics,6,"density","F")
J2CPP_DEFINE_FIELD(android::util::DisplayMetrics,7,"densityDpi","I")
J2CPP_DEFINE_FIELD(android::util::DisplayMetrics,8,"scaledDensity","F")
J2CPP_DEFINE_FIELD(android::util::DisplayMetrics,9,"xdpi","F")
J2CPP_DEFINE_FIELD(android::util::DisplayMetrics,10,"ydpi","F")

} //namespace j2cpp

#endif //J2CPP_ANDROID_UTIL_DISPLAYMETRICS_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION