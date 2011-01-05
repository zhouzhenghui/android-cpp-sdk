/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
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
		: public object<DisplayMetrics>
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
		: object<DisplayMetrics>(jobj)
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
		void setTo(local_ref< android::util::DisplayMetrics >  const&);
		void setToDefaults();
		local_ref< java::lang::String > toString();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > DENSITY_LOW;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > DENSITY_MEDIUM;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jint > DENSITY_HIGH;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), jint > DENSITY_DEFAULT;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), jint > widthPixels;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), jint > heightPixels;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), jfloat > density;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), jint > densityDpi;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), jfloat > scaledDensity;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(9), J2CPP_FIELD_SIGNATURE(9), jfloat > xdpi;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(10), J2CPP_FIELD_SIGNATURE(10), jfloat > ydpi;
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
	return local_ref<java::lang::Object>(get_jobject());
}


android::util::DisplayMetrics::DisplayMetrics()
: object<android::util::DisplayMetrics>(
	call_new_object<
		android::util::DisplayMetrics::J2CPP_CLASS_NAME,
		android::util::DisplayMetrics::J2CPP_METHOD_NAME(0),
		android::util::DisplayMetrics::J2CPP_METHOD_SIGNATURE(0)
	>()
)
, widthPixels(get_jobject())
, heightPixels(get_jobject())
, density(get_jobject())
, densityDpi(get_jobject())
, scaledDensity(get_jobject())
, xdpi(get_jobject())
, ydpi(get_jobject())
{
}


void android::util::DisplayMetrics::setTo(local_ref< android::util::DisplayMetrics > const &a0)
{
	return call_method<
		android::util::DisplayMetrics::J2CPP_CLASS_NAME,
		android::util::DisplayMetrics::J2CPP_METHOD_NAME(1),
		android::util::DisplayMetrics::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject(), a0);
}

void android::util::DisplayMetrics::setToDefaults()
{
	return call_method<
		android::util::DisplayMetrics::J2CPP_CLASS_NAME,
		android::util::DisplayMetrics::J2CPP_METHOD_NAME(2),
		android::util::DisplayMetrics::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject());
}

local_ref< java::lang::String > android::util::DisplayMetrics::toString()
{
	return call_method<
		android::util::DisplayMetrics::J2CPP_CLASS_NAME,
		android::util::DisplayMetrics::J2CPP_METHOD_NAME(3),
		android::util::DisplayMetrics::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::lang::String >
	>(get_jobject());
}


static_field<
	android::util::DisplayMetrics::J2CPP_CLASS_NAME,
	android::util::DisplayMetrics::J2CPP_FIELD_NAME(0),
	android::util::DisplayMetrics::J2CPP_FIELD_SIGNATURE(0),
	jint
> android::util::DisplayMetrics::DENSITY_LOW;

static_field<
	android::util::DisplayMetrics::J2CPP_CLASS_NAME,
	android::util::DisplayMetrics::J2CPP_FIELD_NAME(1),
	android::util::DisplayMetrics::J2CPP_FIELD_SIGNATURE(1),
	jint
> android::util::DisplayMetrics::DENSITY_MEDIUM;

static_field<
	android::util::DisplayMetrics::J2CPP_CLASS_NAME,
	android::util::DisplayMetrics::J2CPP_FIELD_NAME(2),
	android::util::DisplayMetrics::J2CPP_FIELD_SIGNATURE(2),
	jint
> android::util::DisplayMetrics::DENSITY_HIGH;

static_field<
	android::util::DisplayMetrics::J2CPP_CLASS_NAME,
	android::util::DisplayMetrics::J2CPP_FIELD_NAME(3),
	android::util::DisplayMetrics::J2CPP_FIELD_SIGNATURE(3),
	jint
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
