/*================================================================================
  code generated by: java2cpp
  class: android.preference.PreferenceCategory
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_PREFERENCE_PREFERENCECATEGORY_HPP_DECL
#define J2CPP_ANDROID_PREFERENCE_PREFERENCECATEGORY_HPP_DECL


namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace preference { class PreferenceGroup; } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }


#include <android/content/Context.hpp>
#include <android/preference/PreferenceGroup.hpp>
#include <android/util/AttributeSet.hpp>


namespace j2cpp {

namespace android { namespace preference {

	class PreferenceCategory;
	class PreferenceCategory
		: public cpp_object<PreferenceCategory>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)

		explicit PreferenceCategory(jobject jobj)
		: cpp_object<PreferenceCategory>(jobj)
		{
		}

		operator local_ref<android::preference::PreferenceGroup>() const;


		PreferenceCategory(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&, cpp_int const&);
		PreferenceCategory(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&);
		PreferenceCategory(local_ref< android::content::Context > const&);
		cpp_boolean isEnabled();
	}; //class PreferenceCategory

} //namespace preference
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_PREFERENCE_PREFERENCECATEGORY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_PREFERENCE_PREFERENCECATEGORY_HPP_IMPL
#define J2CPP_ANDROID_PREFERENCE_PREFERENCECATEGORY_HPP_IMPL

namespace j2cpp {



android::preference::PreferenceCategory::operator local_ref<android::preference::PreferenceGroup>() const
{
	return local_ref<android::preference::PreferenceGroup>(get_jtype());
}


android::preference::PreferenceCategory::PreferenceCategory(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1, cpp_int const &a2)
: cpp_object<android::preference::PreferenceCategory>(
	environment::get().get_jenv()->NewObject(
		get_class<android::preference::PreferenceCategory::J2CPP_CLASS_NAME>(),
		get_method_id<android::preference::PreferenceCategory::J2CPP_CLASS_NAME, android::preference::PreferenceCategory::J2CPP_METHOD_NAME(0), android::preference::PreferenceCategory::J2CPP_METHOD_SIGNATURE(0), false>(),
		a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
	)
)
{
}



android::preference::PreferenceCategory::PreferenceCategory(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1)
: cpp_object<android::preference::PreferenceCategory>(
	environment::get().get_jenv()->NewObject(
		get_class<android::preference::PreferenceCategory::J2CPP_CLASS_NAME>(),
		get_method_id<android::preference::PreferenceCategory::J2CPP_CLASS_NAME, android::preference::PreferenceCategory::J2CPP_METHOD_NAME(1), android::preference::PreferenceCategory::J2CPP_METHOD_SIGNATURE(1), false>(),
		a0.get_jtype(), a1.get_jtype()
	)
)
{
}



android::preference::PreferenceCategory::PreferenceCategory(local_ref< android::content::Context > const &a0)
: cpp_object<android::preference::PreferenceCategory>(
	environment::get().get_jenv()->NewObject(
		get_class<android::preference::PreferenceCategory::J2CPP_CLASS_NAME>(),
		get_method_id<android::preference::PreferenceCategory::J2CPP_CLASS_NAME, android::preference::PreferenceCategory::J2CPP_METHOD_NAME(2), android::preference::PreferenceCategory::J2CPP_METHOD_SIGNATURE(2), false>(),
		a0.get_jtype()
	)
)
{
}



cpp_boolean android::preference::PreferenceCategory::isEnabled()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(android::preference::PreferenceCategory,"android/preference/PreferenceCategory")
J2CPP_DEFINE_METHOD(android::preference::PreferenceCategory,0,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;I)V")
J2CPP_DEFINE_METHOD(android::preference::PreferenceCategory,1,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::preference::PreferenceCategory,2,"<init>","(Landroid/content/Context;)V")
J2CPP_DEFINE_METHOD(android::preference::PreferenceCategory,3,"onPrepareAddPreference","(Landroid/preference/Preference;)Z")
J2CPP_DEFINE_METHOD(android::preference::PreferenceCategory,4,"isEnabled","()Z")

} //namespace j2cpp

#endif //J2CPP_ANDROID_PREFERENCE_PREFERENCECATEGORY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
