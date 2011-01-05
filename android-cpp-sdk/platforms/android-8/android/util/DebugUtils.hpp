/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.util.DebugUtils
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_UTIL_DEBUGUTILS_HPP_DECL
#define J2CPP_ANDROID_UTIL_DEBUGUTILS_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace util {

	class DebugUtils;
	class DebugUtils
		: public object<DebugUtils>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit DebugUtils(jobject jobj)
		: object<DebugUtils>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		DebugUtils();
		static jboolean isObjectSelected(local_ref< java::lang::Object >  const&);
	}; //class DebugUtils

} //namespace util
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_UTIL_DEBUGUTILS_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_UTIL_DEBUGUTILS_HPP_IMPL
#define J2CPP_ANDROID_UTIL_DEBUGUTILS_HPP_IMPL

namespace j2cpp {



android::util::DebugUtils::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::util::DebugUtils::DebugUtils()
: object<android::util::DebugUtils>(
	call_new_object<
		android::util::DebugUtils::J2CPP_CLASS_NAME,
		android::util::DebugUtils::J2CPP_METHOD_NAME(0),
		android::util::DebugUtils::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


jboolean android::util::DebugUtils::isObjectSelected(local_ref< java::lang::Object > const &a0)
{
	return call_static_method<
		android::util::DebugUtils::J2CPP_CLASS_NAME,
		android::util::DebugUtils::J2CPP_METHOD_NAME(1),
		android::util::DebugUtils::J2CPP_METHOD_SIGNATURE(1), 
		jboolean
	>(a0);
}


J2CPP_DEFINE_CLASS(android::util::DebugUtils,"android/util/DebugUtils")
J2CPP_DEFINE_METHOD(android::util::DebugUtils,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::util::DebugUtils,1,"isObjectSelected","(Ljava/lang/Object;)Z")

} //namespace j2cpp

#endif //J2CPP_ANDROID_UTIL_DEBUGUTILS_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
