/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.preference.RingtonePreference
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_PREFERENCE_RINGTONEPREFERENCE_HPP_DECL
#define J2CPP_ANDROID_PREFERENCE_RINGTONEPREFERENCE_HPP_DECL


namespace j2cpp { namespace android { namespace preference { class Preference; } } }
namespace j2cpp { namespace android { namespace preference { namespace PreferenceManager_ { class OnActivityResultListener; } } } }
namespace j2cpp { namespace android { namespace content { class Intent; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }


#include <android/content/Context.hpp>
#include <android/content/Intent.hpp>
#include <android/preference/Preference.hpp>
#include <android/preference/PreferenceManager.hpp>
#include <android/util/AttributeSet.hpp>


namespace j2cpp {

namespace android { namespace preference {

	class RingtonePreference;
	class RingtonePreference
		: public object<RingtonePreference>
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

		explicit RingtonePreference(jobject jobj)
		: object<RingtonePreference>(jobj)
		{
		}

		operator local_ref<android::preference::Preference>() const;
		operator local_ref<android::preference::PreferenceManager_::OnActivityResultListener>() const;


		RingtonePreference(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&, jint);
		RingtonePreference(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&);
		RingtonePreference(local_ref< android::content::Context > const&);
		jint getRingtoneType();
		void setRingtoneType(jint);
		jboolean getShowDefault();
		void setShowDefault(jboolean);
		jboolean getShowSilent();
		void setShowSilent(jboolean);
		jboolean onActivityResult(jint, jint, local_ref< android::content::Intent >  const&);
	}; //class RingtonePreference

} //namespace preference
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_PREFERENCE_RINGTONEPREFERENCE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_PREFERENCE_RINGTONEPREFERENCE_HPP_IMPL
#define J2CPP_ANDROID_PREFERENCE_RINGTONEPREFERENCE_HPP_IMPL

namespace j2cpp {



android::preference::RingtonePreference::operator local_ref<android::preference::Preference>() const
{
	return local_ref<android::preference::Preference>(get_jobject());
}

android::preference::RingtonePreference::operator local_ref<android::preference::PreferenceManager_::OnActivityResultListener>() const
{
	return local_ref<android::preference::PreferenceManager_::OnActivityResultListener>(get_jobject());
}


android::preference::RingtonePreference::RingtonePreference(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1, jint a2)
: object<android::preference::RingtonePreference>(
	call_new_object<
		android::preference::RingtonePreference::J2CPP_CLASS_NAME,
		android::preference::RingtonePreference::J2CPP_METHOD_NAME(0),
		android::preference::RingtonePreference::J2CPP_METHOD_SIGNATURE(0)>
	(a0, a1, a2)
)
{
}



android::preference::RingtonePreference::RingtonePreference(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1)
: object<android::preference::RingtonePreference>(
	call_new_object<
		android::preference::RingtonePreference::J2CPP_CLASS_NAME,
		android::preference::RingtonePreference::J2CPP_METHOD_NAME(1),
		android::preference::RingtonePreference::J2CPP_METHOD_SIGNATURE(1)>
	(a0, a1)
)
{
}



android::preference::RingtonePreference::RingtonePreference(local_ref< android::content::Context > const &a0)
: object<android::preference::RingtonePreference>(
	call_new_object<
		android::preference::RingtonePreference::J2CPP_CLASS_NAME,
		android::preference::RingtonePreference::J2CPP_METHOD_NAME(2),
		android::preference::RingtonePreference::J2CPP_METHOD_SIGNATURE(2)>
	(a0)
)
{
}


jint android::preference::RingtonePreference::getRingtoneType()
{
	return call_method<
		android::preference::RingtonePreference::J2CPP_CLASS_NAME,
		android::preference::RingtonePreference::J2CPP_METHOD_NAME(3),
		android::preference::RingtonePreference::J2CPP_METHOD_SIGNATURE(3), 
		jint >
	(get_jobject());
}

void android::preference::RingtonePreference::setRingtoneType(jint a0)
{
	return call_method<
		android::preference::RingtonePreference::J2CPP_CLASS_NAME,
		android::preference::RingtonePreference::J2CPP_METHOD_NAME(4),
		android::preference::RingtonePreference::J2CPP_METHOD_SIGNATURE(4), 
		void >
	(get_jobject(), a0);
}

jboolean android::preference::RingtonePreference::getShowDefault()
{
	return call_method<
		android::preference::RingtonePreference::J2CPP_CLASS_NAME,
		android::preference::RingtonePreference::J2CPP_METHOD_NAME(5),
		android::preference::RingtonePreference::J2CPP_METHOD_SIGNATURE(5), 
		jboolean >
	(get_jobject());
}

void android::preference::RingtonePreference::setShowDefault(jboolean a0)
{
	return call_method<
		android::preference::RingtonePreference::J2CPP_CLASS_NAME,
		android::preference::RingtonePreference::J2CPP_METHOD_NAME(6),
		android::preference::RingtonePreference::J2CPP_METHOD_SIGNATURE(6), 
		void >
	(get_jobject(), a0);
}

jboolean android::preference::RingtonePreference::getShowSilent()
{
	return call_method<
		android::preference::RingtonePreference::J2CPP_CLASS_NAME,
		android::preference::RingtonePreference::J2CPP_METHOD_NAME(7),
		android::preference::RingtonePreference::J2CPP_METHOD_SIGNATURE(7), 
		jboolean >
	(get_jobject());
}

void android::preference::RingtonePreference::setShowSilent(jboolean a0)
{
	return call_method<
		android::preference::RingtonePreference::J2CPP_CLASS_NAME,
		android::preference::RingtonePreference::J2CPP_METHOD_NAME(8),
		android::preference::RingtonePreference::J2CPP_METHOD_SIGNATURE(8), 
		void >
	(get_jobject(), a0);
}








jboolean android::preference::RingtonePreference::onActivityResult(jint a0, jint a1, local_ref< android::content::Intent > const &a2)
{
	return call_method<
		android::preference::RingtonePreference::J2CPP_CLASS_NAME,
		android::preference::RingtonePreference::J2CPP_METHOD_NAME(16),
		android::preference::RingtonePreference::J2CPP_METHOD_SIGNATURE(16), 
		jboolean >
	(get_jobject(), a0, a1, a2);
}


J2CPP_DEFINE_CLASS(android::preference::RingtonePreference,"android/preference/RingtonePreference")
J2CPP_DEFINE_METHOD(android::preference::RingtonePreference,0,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;I)V")
J2CPP_DEFINE_METHOD(android::preference::RingtonePreference,1,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::preference::RingtonePreference,2,"<init>","(Landroid/content/Context;)V")
J2CPP_DEFINE_METHOD(android::preference::RingtonePreference,3,"getRingtoneType","()I")
J2CPP_DEFINE_METHOD(android::preference::RingtonePreference,4,"setRingtoneType","(I)V")
J2CPP_DEFINE_METHOD(android::preference::RingtonePreference,5,"getShowDefault","()Z")
J2CPP_DEFINE_METHOD(android::preference::RingtonePreference,6,"setShowDefault","(Z)V")
J2CPP_DEFINE_METHOD(android::preference::RingtonePreference,7,"getShowSilent","()Z")
J2CPP_DEFINE_METHOD(android::preference::RingtonePreference,8,"setShowSilent","(Z)V")
J2CPP_DEFINE_METHOD(android::preference::RingtonePreference,9,"onClick","()V")
J2CPP_DEFINE_METHOD(android::preference::RingtonePreference,10,"onPrepareRingtonePickerIntent","(Landroid/content/Intent;)V")
J2CPP_DEFINE_METHOD(android::preference::RingtonePreference,11,"onSaveRingtone","(Landroid/net/Uri;)V")
J2CPP_DEFINE_METHOD(android::preference::RingtonePreference,12,"onRestoreRingtone","()Landroid/net/Uri;")
J2CPP_DEFINE_METHOD(android::preference::RingtonePreference,13,"onGetDefaultValue","(Landroid/content/res/TypedArray;I)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(android::preference::RingtonePreference,14,"onSetInitialValue","(ZLjava/lang/Object;)V")
J2CPP_DEFINE_METHOD(android::preference::RingtonePreference,15,"onAttachedToHierarchy","(Landroid/preference/PreferenceManager;)V")
J2CPP_DEFINE_METHOD(android::preference::RingtonePreference,16,"onActivityResult","(IILandroid/content/Intent;)Z")

} //namespace j2cpp

#endif //J2CPP_ANDROID_PREFERENCE_RINGTONEPREFERENCE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
