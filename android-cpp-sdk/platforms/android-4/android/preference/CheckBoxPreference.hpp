/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.preference.CheckBoxPreference
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_PREFERENCE_CHECKBOXPREFERENCE_HPP_DECL
#define J2CPP_ANDROID_PREFERENCE_CHECKBOXPREFERENCE_HPP_DECL


namespace j2cpp { namespace android { namespace preference { class Preference; } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace java { namespace lang { class Comparable; } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/content/Context.hpp>
#include <android/preference/Preference.hpp>
#include <android/util/AttributeSet.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace preference {

	class CheckBoxPreference;
	class CheckBoxPreference
		: public object<CheckBoxPreference>
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

		explicit CheckBoxPreference(jobject jobj)
		: object<CheckBoxPreference>(jobj)
		{
		}

		operator local_ref<android::preference::Preference>() const;
		operator local_ref<java::lang::Comparable>() const;
		operator local_ref<java::lang::Object>() const;


		CheckBoxPreference(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&, jint);
		CheckBoxPreference(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&);
		CheckBoxPreference(local_ref< android::content::Context > const&);
		void setChecked(jboolean);
		jboolean isChecked();
		jboolean shouldDisableDependents();
		void setSummaryOn(local_ref< java::lang::CharSequence >  const&);
		void setSummaryOn(jint);
		local_ref< java::lang::CharSequence > getSummaryOn();
		void setSummaryOff(local_ref< java::lang::CharSequence >  const&);
		void setSummaryOff(jint);
		local_ref< java::lang::CharSequence > getSummaryOff();
		jboolean getDisableDependentsState();
		void setDisableDependentsState(jboolean);
	}; //class CheckBoxPreference

} //namespace preference
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_PREFERENCE_CHECKBOXPREFERENCE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_PREFERENCE_CHECKBOXPREFERENCE_HPP_IMPL
#define J2CPP_ANDROID_PREFERENCE_CHECKBOXPREFERENCE_HPP_IMPL

namespace j2cpp {



android::preference::CheckBoxPreference::operator local_ref<android::preference::Preference>() const
{
	return local_ref<android::preference::Preference>(get_jobject());
}

android::preference::CheckBoxPreference::operator local_ref<java::lang::Comparable>() const
{
	return local_ref<java::lang::Comparable>(get_jobject());
}

android::preference::CheckBoxPreference::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::preference::CheckBoxPreference::CheckBoxPreference(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1, jint a2)
: object<android::preference::CheckBoxPreference>(
	call_new_object<
		android::preference::CheckBoxPreference::J2CPP_CLASS_NAME,
		android::preference::CheckBoxPreference::J2CPP_METHOD_NAME(0),
		android::preference::CheckBoxPreference::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1, a2)
)
{
}



android::preference::CheckBoxPreference::CheckBoxPreference(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1)
: object<android::preference::CheckBoxPreference>(
	call_new_object<
		android::preference::CheckBoxPreference::J2CPP_CLASS_NAME,
		android::preference::CheckBoxPreference::J2CPP_METHOD_NAME(1),
		android::preference::CheckBoxPreference::J2CPP_METHOD_SIGNATURE(1)
	>(a0, a1)
)
{
}



android::preference::CheckBoxPreference::CheckBoxPreference(local_ref< android::content::Context > const &a0)
: object<android::preference::CheckBoxPreference>(
	call_new_object<
		android::preference::CheckBoxPreference::J2CPP_CLASS_NAME,
		android::preference::CheckBoxPreference::J2CPP_METHOD_NAME(2),
		android::preference::CheckBoxPreference::J2CPP_METHOD_SIGNATURE(2)
	>(a0)
)
{
}




void android::preference::CheckBoxPreference::setChecked(jboolean a0)
{
	return call_method<
		android::preference::CheckBoxPreference::J2CPP_CLASS_NAME,
		android::preference::CheckBoxPreference::J2CPP_METHOD_NAME(5),
		android::preference::CheckBoxPreference::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject(), a0);
}

jboolean android::preference::CheckBoxPreference::isChecked()
{
	return call_method<
		android::preference::CheckBoxPreference::J2CPP_CLASS_NAME,
		android::preference::CheckBoxPreference::J2CPP_METHOD_NAME(6),
		android::preference::CheckBoxPreference::J2CPP_METHOD_SIGNATURE(6), 
		jboolean
	>(get_jobject());
}

jboolean android::preference::CheckBoxPreference::shouldDisableDependents()
{
	return call_method<
		android::preference::CheckBoxPreference::J2CPP_CLASS_NAME,
		android::preference::CheckBoxPreference::J2CPP_METHOD_NAME(7),
		android::preference::CheckBoxPreference::J2CPP_METHOD_SIGNATURE(7), 
		jboolean
	>(get_jobject());
}

void android::preference::CheckBoxPreference::setSummaryOn(local_ref< java::lang::CharSequence > const &a0)
{
	return call_method<
		android::preference::CheckBoxPreference::J2CPP_CLASS_NAME,
		android::preference::CheckBoxPreference::J2CPP_METHOD_NAME(8),
		android::preference::CheckBoxPreference::J2CPP_METHOD_SIGNATURE(8), 
		void
	>(get_jobject(), a0);
}

void android::preference::CheckBoxPreference::setSummaryOn(jint a0)
{
	return call_method<
		android::preference::CheckBoxPreference::J2CPP_CLASS_NAME,
		android::preference::CheckBoxPreference::J2CPP_METHOD_NAME(9),
		android::preference::CheckBoxPreference::J2CPP_METHOD_SIGNATURE(9), 
		void
	>(get_jobject(), a0);
}

local_ref< java::lang::CharSequence > android::preference::CheckBoxPreference::getSummaryOn()
{
	return call_method<
		android::preference::CheckBoxPreference::J2CPP_CLASS_NAME,
		android::preference::CheckBoxPreference::J2CPP_METHOD_NAME(10),
		android::preference::CheckBoxPreference::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< java::lang::CharSequence >
	>(get_jobject());
}

void android::preference::CheckBoxPreference::setSummaryOff(local_ref< java::lang::CharSequence > const &a0)
{
	return call_method<
		android::preference::CheckBoxPreference::J2CPP_CLASS_NAME,
		android::preference::CheckBoxPreference::J2CPP_METHOD_NAME(11),
		android::preference::CheckBoxPreference::J2CPP_METHOD_SIGNATURE(11), 
		void
	>(get_jobject(), a0);
}

void android::preference::CheckBoxPreference::setSummaryOff(jint a0)
{
	return call_method<
		android::preference::CheckBoxPreference::J2CPP_CLASS_NAME,
		android::preference::CheckBoxPreference::J2CPP_METHOD_NAME(12),
		android::preference::CheckBoxPreference::J2CPP_METHOD_SIGNATURE(12), 
		void
	>(get_jobject(), a0);
}

local_ref< java::lang::CharSequence > android::preference::CheckBoxPreference::getSummaryOff()
{
	return call_method<
		android::preference::CheckBoxPreference::J2CPP_CLASS_NAME,
		android::preference::CheckBoxPreference::J2CPP_METHOD_NAME(13),
		android::preference::CheckBoxPreference::J2CPP_METHOD_SIGNATURE(13), 
		local_ref< java::lang::CharSequence >
	>(get_jobject());
}

jboolean android::preference::CheckBoxPreference::getDisableDependentsState()
{
	return call_method<
		android::preference::CheckBoxPreference::J2CPP_CLASS_NAME,
		android::preference::CheckBoxPreference::J2CPP_METHOD_NAME(14),
		android::preference::CheckBoxPreference::J2CPP_METHOD_SIGNATURE(14), 
		jboolean
	>(get_jobject());
}

void android::preference::CheckBoxPreference::setDisableDependentsState(jboolean a0)
{
	return call_method<
		android::preference::CheckBoxPreference::J2CPP_CLASS_NAME,
		android::preference::CheckBoxPreference::J2CPP_METHOD_NAME(15),
		android::preference::CheckBoxPreference::J2CPP_METHOD_SIGNATURE(15), 
		void
	>(get_jobject(), a0);
}






J2CPP_DEFINE_CLASS(android::preference::CheckBoxPreference,"android/preference/CheckBoxPreference")
J2CPP_DEFINE_METHOD(android::preference::CheckBoxPreference,0,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;I)V")
J2CPP_DEFINE_METHOD(android::preference::CheckBoxPreference,1,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::preference::CheckBoxPreference,2,"<init>","(Landroid/content/Context;)V")
J2CPP_DEFINE_METHOD(android::preference::CheckBoxPreference,3,"onBindView","(Landroid/view/View;)V")
J2CPP_DEFINE_METHOD(android::preference::CheckBoxPreference,4,"onClick","()V")
J2CPP_DEFINE_METHOD(android::preference::CheckBoxPreference,5,"setChecked","(Z)V")
J2CPP_DEFINE_METHOD(android::preference::CheckBoxPreference,6,"isChecked","()Z")
J2CPP_DEFINE_METHOD(android::preference::CheckBoxPreference,7,"shouldDisableDependents","()Z")
J2CPP_DEFINE_METHOD(android::preference::CheckBoxPreference,8,"setSummaryOn","(Ljava/lang/CharSequence;)V")
J2CPP_DEFINE_METHOD(android::preference::CheckBoxPreference,9,"setSummaryOn","(I)V")
J2CPP_DEFINE_METHOD(android::preference::CheckBoxPreference,10,"getSummaryOn","()Ljava/lang/CharSequence;")
J2CPP_DEFINE_METHOD(android::preference::CheckBoxPreference,11,"setSummaryOff","(Ljava/lang/CharSequence;)V")
J2CPP_DEFINE_METHOD(android::preference::CheckBoxPreference,12,"setSummaryOff","(I)V")
J2CPP_DEFINE_METHOD(android::preference::CheckBoxPreference,13,"getSummaryOff","()Ljava/lang/CharSequence;")
J2CPP_DEFINE_METHOD(android::preference::CheckBoxPreference,14,"getDisableDependentsState","()Z")
J2CPP_DEFINE_METHOD(android::preference::CheckBoxPreference,15,"setDisableDependentsState","(Z)V")
J2CPP_DEFINE_METHOD(android::preference::CheckBoxPreference,16,"onGetDefaultValue","(Landroid/content/res/TypedArray;I)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(android::preference::CheckBoxPreference,17,"onSetInitialValue","(ZLjava/lang/Object;)V")
J2CPP_DEFINE_METHOD(android::preference::CheckBoxPreference,18,"onSaveInstanceState","()Landroid/os/Parcelable;")
J2CPP_DEFINE_METHOD(android::preference::CheckBoxPreference,19,"onRestoreInstanceState","(Landroid/os/Parcelable;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_PREFERENCE_CHECKBOXPREFERENCE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
