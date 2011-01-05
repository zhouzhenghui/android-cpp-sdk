/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.util.TimeUtils
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_UTIL_TIMEUTILS_HPP_DECL
#define J2CPP_ANDROID_UTIL_TIMEUTILS_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace util { class TimeZone; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/TimeZone.hpp>


namespace j2cpp {

namespace android { namespace util {

	class TimeUtils;
	class TimeUtils
		: public object<TimeUtils>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit TimeUtils(jobject jobj)
		: object<TimeUtils>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		TimeUtils();
		static local_ref< java::util::TimeZone > getTimeZone(jint, jboolean, jlong, local_ref< java::lang::String >  const&);
		static local_ref< java::lang::String > getTimeZoneDatabaseVersion();
	}; //class TimeUtils

} //namespace util
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_UTIL_TIMEUTILS_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_UTIL_TIMEUTILS_HPP_IMPL
#define J2CPP_ANDROID_UTIL_TIMEUTILS_HPP_IMPL

namespace j2cpp {



android::util::TimeUtils::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::util::TimeUtils::TimeUtils()
: object<android::util::TimeUtils>(
	call_new_object<
		android::util::TimeUtils::J2CPP_CLASS_NAME,
		android::util::TimeUtils::J2CPP_METHOD_NAME(0),
		android::util::TimeUtils::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


local_ref< java::util::TimeZone > android::util::TimeUtils::getTimeZone(jint a0, jboolean a1, jlong a2, local_ref< java::lang::String > const &a3)
{
	return call_static_method<
		android::util::TimeUtils::J2CPP_CLASS_NAME,
		android::util::TimeUtils::J2CPP_METHOD_NAME(1),
		android::util::TimeUtils::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::util::TimeZone >
	>(a0, a1, a2, a3);
}

local_ref< java::lang::String > android::util::TimeUtils::getTimeZoneDatabaseVersion()
{
	return call_static_method<
		android::util::TimeUtils::J2CPP_CLASS_NAME,
		android::util::TimeUtils::J2CPP_METHOD_NAME(2),
		android::util::TimeUtils::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::String >
	>();
}


J2CPP_DEFINE_CLASS(android::util::TimeUtils,"android/util/TimeUtils")
J2CPP_DEFINE_METHOD(android::util::TimeUtils,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::util::TimeUtils,1,"getTimeZone","(IZJLjava/lang/String;)Ljava/util/TimeZone;")
J2CPP_DEFINE_METHOD(android::util::TimeUtils,2,"getTimeZoneDatabaseVersion","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_UTIL_TIMEUTILS_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
