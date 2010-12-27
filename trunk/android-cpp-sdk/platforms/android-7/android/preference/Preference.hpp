/*================================================================================
  code generated by: java2cpp
  class: android.preference.Preference
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_PREFERENCE_PREFERENCE_HPP_DECL
#define J2CPP_ANDROID_PREFERENCE_PREFERENCE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Comparable; } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace android { namespace content { class Intent; } } }
namespace j2cpp { namespace android { namespace content { class SharedPreferences; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace content { namespace SharedPreferences_ { class Editor; } } } }
namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace android { namespace view { class ViewGroup; } } }
namespace j2cpp { namespace android { namespace view { class AbsSavedState; } } }
namespace j2cpp { namespace android { namespace preference { class PreferenceManager; } } }
namespace j2cpp { namespace android { namespace preference { namespace Preference_ { class OnPreferenceChangeListener; } } } }
namespace j2cpp { namespace android { namespace preference { namespace Preference_ { class OnPreferenceClickListener; } } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }
namespace j2cpp { namespace android { namespace os { class Parcel; } } }
namespace j2cpp { namespace android { namespace os { class Bundle; } } }
namespace j2cpp { namespace android { namespace os { class Parcelable; } } }
namespace j2cpp { namespace android { namespace os { namespace Parcelable_ { class Creator; } } } }


#include <android/content/Context.hpp>
#include <android/content/Intent.hpp>
#include <android/content/SharedPreferences.hpp>
#include <android/os/Bundle.hpp>
#include <android/os/Parcel.hpp>
#include <android/os/Parcelable.hpp>
#include <android/preference/Preference.hpp>
#include <android/preference/PreferenceManager.hpp>
#include <android/util/AttributeSet.hpp>
#include <android/view/AbsSavedState.hpp>
#include <android/view/View.hpp>
#include <android/view/ViewGroup.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace preference {

	class Preference;
	namespace Preference_ {

		class BaseSavedState;
		class BaseSavedState
			: public cpp_object<BaseSavedState>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_METHOD(2)
			J2CPP_DECLARE_FIELD(0)

			explicit BaseSavedState(jobject jobj)
			: cpp_object<BaseSavedState>(jobj)
			{
			}

			operator local_ref<android::view::AbsSavedState>() const;


			BaseSavedState(local_ref< android::os::Parcel > const&);
			BaseSavedState(local_ref< android::os::Parcelable > const&);

			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< android::os::Parcelable_::Creator > > CREATOR;
		}; //class BaseSavedState

		class OnPreferenceChangeListener;
		class OnPreferenceChangeListener
			: public cpp_object<OnPreferenceChangeListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			explicit OnPreferenceChangeListener(jobject jobj)
			: cpp_object<OnPreferenceChangeListener>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			cpp_boolean onPreferenceChange(local_ref< android::preference::Preference > const&, local_ref< java::lang::Object > const&);
		}; //class OnPreferenceChangeListener

		class OnPreferenceClickListener;
		class OnPreferenceClickListener
			: public cpp_object<OnPreferenceClickListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			explicit OnPreferenceClickListener(jobject jobj)
			: cpp_object<OnPreferenceClickListener>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			cpp_boolean onPreferenceClick(local_ref< android::preference::Preference > const&);
		}; //class OnPreferenceClickListener

	} //namespace Preference_

	class Preference
		: public cpp_object<Preference>
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
		J2CPP_DECLARE_METHOD(52)
		J2CPP_DECLARE_METHOD(53)
		J2CPP_DECLARE_METHOD(54)
		J2CPP_DECLARE_METHOD(55)
		J2CPP_DECLARE_METHOD(56)
		J2CPP_DECLARE_METHOD(57)
		J2CPP_DECLARE_METHOD(58)
		J2CPP_DECLARE_METHOD(59)
		J2CPP_DECLARE_METHOD(60)
		J2CPP_DECLARE_METHOD(61)
		J2CPP_DECLARE_METHOD(62)
		J2CPP_DECLARE_METHOD(63)
		J2CPP_DECLARE_METHOD(64)
		J2CPP_DECLARE_METHOD(65)
		J2CPP_DECLARE_METHOD(66)
		J2CPP_DECLARE_METHOD(67)
		J2CPP_DECLARE_METHOD(68)
		J2CPP_DECLARE_METHOD(69)
		J2CPP_DECLARE_METHOD(70)
		J2CPP_DECLARE_METHOD(71)
		J2CPP_DECLARE_METHOD(72)
		J2CPP_DECLARE_METHOD(73)
		J2CPP_DECLARE_FIELD(0)

		typedef Preference_::BaseSavedState BaseSavedState;
		typedef Preference_::OnPreferenceChangeListener OnPreferenceChangeListener;
		typedef Preference_::OnPreferenceClickListener OnPreferenceClickListener;

		explicit Preference(jobject jobj)
		: cpp_object<Preference>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::Comparable>() const;


		Preference(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&, cpp_int const&);
		Preference(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&);
		Preference(local_ref< android::content::Context > const&);
		void setIntent(local_ref< android::content::Intent > const&);
		local_ref< android::content::Intent > getIntent();
		void setLayoutResource(cpp_int const&);
		cpp_int getLayoutResource();
		void setWidgetLayoutResource(cpp_int const&);
		cpp_int getWidgetLayoutResource();
		local_ref< android::view::View > getView(local_ref< android::view::View > const&, local_ref< android::view::ViewGroup > const&);
		void setOrder(cpp_int const&);
		cpp_int getOrder();
		void setTitle(local_ref< java::lang::CharSequence > const&);
		void setTitle(cpp_int const&);
		local_ref< java::lang::CharSequence > getTitle();
		local_ref< java::lang::CharSequence > getSummary();
		void setSummary(local_ref< java::lang::CharSequence > const&);
		void setSummary(cpp_int const&);
		void setEnabled(cpp_boolean const&);
		cpp_boolean isEnabled();
		void setSelectable(cpp_boolean const&);
		cpp_boolean isSelectable();
		void setShouldDisableView(cpp_boolean const&);
		cpp_boolean getShouldDisableView();
		void setKey(local_ref< java::lang::String > const&);
		local_ref< java::lang::String > getKey();
		cpp_boolean hasKey();
		cpp_boolean isPersistent();
		void setPersistent(cpp_boolean const&);
		void setOnPreferenceChangeListener(local_ref< android::preference::Preference_::OnPreferenceChangeListener > const&);
		local_ref< android::preference::Preference_::OnPreferenceChangeListener > getOnPreferenceChangeListener();
		void setOnPreferenceClickListener(local_ref< android::preference::Preference_::OnPreferenceClickListener > const&);
		local_ref< android::preference::Preference_::OnPreferenceClickListener > getOnPreferenceClickListener();
		local_ref< android::content::Context > getContext();
		local_ref< android::content::SharedPreferences > getSharedPreferences();
		local_ref< android::content::SharedPreferences_::Editor > getEditor();
		cpp_boolean shouldCommit();
		cpp_int compareTo(local_ref< android::preference::Preference > const&);
		local_ref< android::preference::PreferenceManager > getPreferenceManager();
		void notifyDependencyChange(cpp_boolean const&);
		void onDependencyChanged(local_ref< android::preference::Preference > const&, cpp_boolean const&);
		cpp_boolean shouldDisableDependents();
		void setDependency(local_ref< java::lang::String > const&);
		local_ref< java::lang::String > getDependency();
		void setDefaultValue(local_ref< java::lang::Object > const&);
		local_ref< java::lang::String > toString();
		void saveHierarchyState(local_ref< android::os::Bundle > const&);
		void restoreHierarchyState(local_ref< android::os::Bundle > const&);
		cpp_int compareTo(local_ref< java::lang::Object > const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_int > DEFAULT_ORDER;
	}; //class Preference

} //namespace preference
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_PREFERENCE_PREFERENCE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_PREFERENCE_PREFERENCE_HPP_IMPL
#define J2CPP_ANDROID_PREFERENCE_PREFERENCE_HPP_IMPL

namespace j2cpp {




android::preference::Preference_::BaseSavedState::operator local_ref<android::view::AbsSavedState>() const
{
	return local_ref<android::view::AbsSavedState>(get_jtype());
}


android::preference::Preference_::BaseSavedState::BaseSavedState(local_ref< android::os::Parcel > const &a0)
: cpp_object<android::preference::Preference_::BaseSavedState>(
	environment::get().get_jenv()->NewObject(
		get_class<android::preference::Preference_::BaseSavedState::J2CPP_CLASS_NAME>(),
		get_method_id<android::preference::Preference_::BaseSavedState::J2CPP_CLASS_NAME, android::preference::Preference_::BaseSavedState::J2CPP_METHOD_NAME(0), android::preference::Preference_::BaseSavedState::J2CPP_METHOD_SIGNATURE(0), false>(),
		a0.get_jtype()
	)
)
{
}



android::preference::Preference_::BaseSavedState::BaseSavedState(local_ref< android::os::Parcelable > const &a0)
: cpp_object<android::preference::Preference_::BaseSavedState>(
	environment::get().get_jenv()->NewObject(
		get_class<android::preference::Preference_::BaseSavedState::J2CPP_CLASS_NAME>(),
		get_method_id<android::preference::Preference_::BaseSavedState::J2CPP_CLASS_NAME, android::preference::Preference_::BaseSavedState::J2CPP_METHOD_NAME(1), android::preference::Preference_::BaseSavedState::J2CPP_METHOD_SIGNATURE(1), false>(),
		a0.get_jtype()
	)
)
{
}




static_field<
	android::preference::Preference_::BaseSavedState::J2CPP_CLASS_NAME,
	android::preference::Preference_::BaseSavedState::J2CPP_FIELD_NAME(0),
	android::preference::Preference_::BaseSavedState::J2CPP_FIELD_SIGNATURE(0),
	local_ref< android::os::Parcelable_::Creator >
> android::preference::Preference_::BaseSavedState::CREATOR;


J2CPP_DEFINE_CLASS(android::preference::Preference_::BaseSavedState,"android/preference/Preference$BaseSavedState")
J2CPP_DEFINE_METHOD(android::preference::Preference_::BaseSavedState,0,"<init>","(Landroid/os/Parcel;)V")
J2CPP_DEFINE_METHOD(android::preference::Preference_::BaseSavedState,1,"<init>","(Landroid/os/Parcelable;)V")
J2CPP_DEFINE_METHOD(android::preference::Preference_::BaseSavedState,2,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::preference::Preference_::BaseSavedState,0,"CREATOR","Landroid/os/Parcelable$Creator;")


android::preference::Preference_::OnPreferenceChangeListener::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}

cpp_boolean android::preference::Preference_::OnPreferenceChangeListener::onPreferenceChange(local_ref< android::preference::Preference > const &a0, local_ref< java::lang::Object > const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::preference::Preference_::OnPreferenceChangeListener,"android/preference/Preference$OnPreferenceChangeListener")
J2CPP_DEFINE_METHOD(android::preference::Preference_::OnPreferenceChangeListener,0,"onPreferenceChange","(Landroid/preference/Preference;Ljava/lang/Object;)Z")


android::preference::Preference_::OnPreferenceClickListener::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}

cpp_boolean android::preference::Preference_::OnPreferenceClickListener::onPreferenceClick(local_ref< android::preference::Preference > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::preference::Preference_::OnPreferenceClickListener,"android/preference/Preference$OnPreferenceClickListener")
J2CPP_DEFINE_METHOD(android::preference::Preference_::OnPreferenceClickListener,0,"onPreferenceClick","(Landroid/preference/Preference;)Z")



android::preference::Preference::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}

android::preference::Preference::operator local_ref<java::lang::Comparable>() const
{
	return local_ref<java::lang::Comparable>(get_jtype());
}


android::preference::Preference::Preference(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1, cpp_int const &a2)
: cpp_object<android::preference::Preference>(
	environment::get().get_jenv()->NewObject(
		get_class<android::preference::Preference::J2CPP_CLASS_NAME>(),
		get_method_id<android::preference::Preference::J2CPP_CLASS_NAME, android::preference::Preference::J2CPP_METHOD_NAME(0), android::preference::Preference::J2CPP_METHOD_SIGNATURE(0), false>(),
		a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
	)
)
{
}



android::preference::Preference::Preference(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1)
: cpp_object<android::preference::Preference>(
	environment::get().get_jenv()->NewObject(
		get_class<android::preference::Preference::J2CPP_CLASS_NAME>(),
		get_method_id<android::preference::Preference::J2CPP_CLASS_NAME, android::preference::Preference::J2CPP_METHOD_NAME(1), android::preference::Preference::J2CPP_METHOD_SIGNATURE(1), false>(),
		a0.get_jtype(), a1.get_jtype()
	)
)
{
}



android::preference::Preference::Preference(local_ref< android::content::Context > const &a0)
: cpp_object<android::preference::Preference>(
	environment::get().get_jenv()->NewObject(
		get_class<android::preference::Preference::J2CPP_CLASS_NAME>(),
		get_method_id<android::preference::Preference::J2CPP_CLASS_NAME, android::preference::Preference::J2CPP_METHOD_NAME(2), android::preference::Preference::J2CPP_METHOD_SIGNATURE(2), false>(),
		a0.get_jtype()
	)
)
{
}



void android::preference::Preference::setIntent(local_ref< android::content::Intent > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::content::Intent > android::preference::Preference::getIntent()
{
	return local_ref< android::content::Intent >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

void android::preference::Preference::setLayoutResource(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::preference::Preference::getLayoutResource()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

void android::preference::Preference::setWidgetLayoutResource(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::preference::Preference::getWidgetLayoutResource()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}

local_ref< android::view::View > android::preference::Preference::getView(local_ref< android::view::View > const &a0, local_ref< android::view::ViewGroup > const &a1)
{
	return local_ref< android::view::View >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}



void android::preference::Preference::setOrder(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::preference::Preference::getOrder()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>()
		)
	);
}

void android::preference::Preference::setTitle(local_ref< java::lang::CharSequence > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>(),
			a0.get_jtype()
		)
	);
}

void android::preference::Preference::setTitle(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::CharSequence > android::preference::Preference::getTitle()
{
	return local_ref< java::lang::CharSequence >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>()
		)
	);
}

local_ref< java::lang::CharSequence > android::preference::Preference::getSummary()
{
	return local_ref< java::lang::CharSequence >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>()
		)
	);
}

void android::preference::Preference::setSummary(local_ref< java::lang::CharSequence > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), false>(),
			a0.get_jtype()
		)
	);
}

void android::preference::Preference::setSummary(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), false>(),
			a0.get_jtype()
		)
	);
}

void android::preference::Preference::setEnabled(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(21), J2CPP_METHOD_SIGNATURE(21), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::preference::Preference::isEnabled()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(22), J2CPP_METHOD_SIGNATURE(22), false>()
		)
	);
}

void android::preference::Preference::setSelectable(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(23), J2CPP_METHOD_SIGNATURE(23), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::preference::Preference::isSelectable()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(24), J2CPP_METHOD_SIGNATURE(24), false>()
		)
	);
}

void android::preference::Preference::setShouldDisableView(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(25), J2CPP_METHOD_SIGNATURE(25), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::preference::Preference::getShouldDisableView()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(26), J2CPP_METHOD_SIGNATURE(26), false>()
		)
	);
}


void android::preference::Preference::setKey(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(28), J2CPP_METHOD_SIGNATURE(28), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > android::preference::Preference::getKey()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(29), J2CPP_METHOD_SIGNATURE(29), false>()
		)
	);
}

cpp_boolean android::preference::Preference::hasKey()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(30), J2CPP_METHOD_SIGNATURE(30), false>()
		)
	);
}

cpp_boolean android::preference::Preference::isPersistent()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(31), J2CPP_METHOD_SIGNATURE(31), false>()
		)
	);
}


void android::preference::Preference::setPersistent(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(33), J2CPP_METHOD_SIGNATURE(33), false>(),
			a0.get_jtype()
		)
	);
}


void android::preference::Preference::setOnPreferenceChangeListener(local_ref< android::preference::Preference_::OnPreferenceChangeListener > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(35), J2CPP_METHOD_SIGNATURE(35), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::preference::Preference_::OnPreferenceChangeListener > android::preference::Preference::getOnPreferenceChangeListener()
{
	return local_ref< android::preference::Preference_::OnPreferenceChangeListener >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(36), J2CPP_METHOD_SIGNATURE(36), false>()
		)
	);
}

void android::preference::Preference::setOnPreferenceClickListener(local_ref< android::preference::Preference_::OnPreferenceClickListener > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(37), J2CPP_METHOD_SIGNATURE(37), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::preference::Preference_::OnPreferenceClickListener > android::preference::Preference::getOnPreferenceClickListener()
{
	return local_ref< android::preference::Preference_::OnPreferenceClickListener >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(38), J2CPP_METHOD_SIGNATURE(38), false>()
		)
	);
}

local_ref< android::content::Context > android::preference::Preference::getContext()
{
	return local_ref< android::content::Context >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(39), J2CPP_METHOD_SIGNATURE(39), false>()
		)
	);
}

local_ref< android::content::SharedPreferences > android::preference::Preference::getSharedPreferences()
{
	return local_ref< android::content::SharedPreferences >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(40), J2CPP_METHOD_SIGNATURE(40), false>()
		)
	);
}

local_ref< android::content::SharedPreferences_::Editor > android::preference::Preference::getEditor()
{
	return local_ref< android::content::SharedPreferences_::Editor >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(41), J2CPP_METHOD_SIGNATURE(41), false>()
		)
	);
}

cpp_boolean android::preference::Preference::shouldCommit()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(42), J2CPP_METHOD_SIGNATURE(42), false>()
		)
	);
}

cpp_int android::preference::Preference::compareTo(local_ref< android::preference::Preference > const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(43), J2CPP_METHOD_SIGNATURE(43), false>(),
			a0.get_jtype()
		)
	);
}



local_ref< android::preference::PreferenceManager > android::preference::Preference::getPreferenceManager()
{
	return local_ref< android::preference::PreferenceManager >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(46), J2CPP_METHOD_SIGNATURE(46), false>()
		)
	);
}




void android::preference::Preference::notifyDependencyChange(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(50), J2CPP_METHOD_SIGNATURE(50), false>(),
			a0.get_jtype()
		)
	);
}

void android::preference::Preference::onDependencyChanged(local_ref< android::preference::Preference > const &a0, cpp_boolean const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(51), J2CPP_METHOD_SIGNATURE(51), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean android::preference::Preference::shouldDisableDependents()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(52), J2CPP_METHOD_SIGNATURE(52), false>()
		)
	);
}

void android::preference::Preference::setDependency(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(53), J2CPP_METHOD_SIGNATURE(53), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > android::preference::Preference::getDependency()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(54), J2CPP_METHOD_SIGNATURE(54), false>()
		)
	);
}


void android::preference::Preference::setDefaultValue(local_ref< java::lang::Object > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(56), J2CPP_METHOD_SIGNATURE(56), false>(),
			a0.get_jtype()
		)
	);
}












local_ref< java::lang::String > android::preference::Preference::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(68), J2CPP_METHOD_SIGNATURE(68), false>()
		)
	);
}

void android::preference::Preference::saveHierarchyState(local_ref< android::os::Bundle > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(69), J2CPP_METHOD_SIGNATURE(69), false>(),
			a0.get_jtype()
		)
	);
}


void android::preference::Preference::restoreHierarchyState(local_ref< android::os::Bundle > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(71), J2CPP_METHOD_SIGNATURE(71), false>(),
			a0.get_jtype()
		)
	);
}


cpp_int android::preference::Preference::compareTo(local_ref< java::lang::Object > const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(73), J2CPP_METHOD_SIGNATURE(73), false>(),
			a0.get_jtype()
		)
	);
}


static_field<
	android::preference::Preference::J2CPP_CLASS_NAME,
	android::preference::Preference::J2CPP_FIELD_NAME(0),
	android::preference::Preference::J2CPP_FIELD_SIGNATURE(0),
	cpp_int
> android::preference::Preference::DEFAULT_ORDER;


J2CPP_DEFINE_CLASS(android::preference::Preference,"android/preference/Preference")
J2CPP_DEFINE_METHOD(android::preference::Preference,0,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;I)V")
J2CPP_DEFINE_METHOD(android::preference::Preference,1,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::preference::Preference,2,"<init>","(Landroid/content/Context;)V")
J2CPP_DEFINE_METHOD(android::preference::Preference,3,"onGetDefaultValue","(Landroid/content/res/TypedArray;I)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(android::preference::Preference,4,"setIntent","(Landroid/content/Intent;)V")
J2CPP_DEFINE_METHOD(android::preference::Preference,5,"getIntent","()Landroid/content/Intent;")
J2CPP_DEFINE_METHOD(android::preference::Preference,6,"setLayoutResource","(I)V")
J2CPP_DEFINE_METHOD(android::preference::Preference,7,"getLayoutResource","()I")
J2CPP_DEFINE_METHOD(android::preference::Preference,8,"setWidgetLayoutResource","(I)V")
J2CPP_DEFINE_METHOD(android::preference::Preference,9,"getWidgetLayoutResource","()I")
J2CPP_DEFINE_METHOD(android::preference::Preference,10,"getView","(Landroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;")
J2CPP_DEFINE_METHOD(android::preference::Preference,11,"onCreateView","(Landroid/view/ViewGroup;)Landroid/view/View;")
J2CPP_DEFINE_METHOD(android::preference::Preference,12,"onBindView","(Landroid/view/View;)V")
J2CPP_DEFINE_METHOD(android::preference::Preference,13,"setOrder","(I)V")
J2CPP_DEFINE_METHOD(android::preference::Preference,14,"getOrder","()I")
J2CPP_DEFINE_METHOD(android::preference::Preference,15,"setTitle","(Ljava/lang/CharSequence;)V")
J2CPP_DEFINE_METHOD(android::preference::Preference,16,"setTitle","(I)V")
J2CPP_DEFINE_METHOD(android::preference::Preference,17,"getTitle","()Ljava/lang/CharSequence;")
J2CPP_DEFINE_METHOD(android::preference::Preference,18,"getSummary","()Ljava/lang/CharSequence;")
J2CPP_DEFINE_METHOD(android::preference::Preference,19,"setSummary","(Ljava/lang/CharSequence;)V")
J2CPP_DEFINE_METHOD(android::preference::Preference,20,"setSummary","(I)V")
J2CPP_DEFINE_METHOD(android::preference::Preference,21,"setEnabled","(Z)V")
J2CPP_DEFINE_METHOD(android::preference::Preference,22,"isEnabled","()Z")
J2CPP_DEFINE_METHOD(android::preference::Preference,23,"setSelectable","(Z)V")
J2CPP_DEFINE_METHOD(android::preference::Preference,24,"isSelectable","()Z")
J2CPP_DEFINE_METHOD(android::preference::Preference,25,"setShouldDisableView","(Z)V")
J2CPP_DEFINE_METHOD(android::preference::Preference,26,"getShouldDisableView","()Z")
J2CPP_DEFINE_METHOD(android::preference::Preference,27,"onClick","()V")
J2CPP_DEFINE_METHOD(android::preference::Preference,28,"setKey","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::preference::Preference,29,"getKey","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::preference::Preference,30,"hasKey","()Z")
J2CPP_DEFINE_METHOD(android::preference::Preference,31,"isPersistent","()Z")
J2CPP_DEFINE_METHOD(android::preference::Preference,32,"shouldPersist","()Z")
J2CPP_DEFINE_METHOD(android::preference::Preference,33,"setPersistent","(Z)V")
J2CPP_DEFINE_METHOD(android::preference::Preference,34,"callChangeListener","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(android::preference::Preference,35,"setOnPreferenceChangeListener","(Landroid/preference/Preference$OnPreferenceChangeListener;)V")
J2CPP_DEFINE_METHOD(android::preference::Preference,36,"getOnPreferenceChangeListener","()Landroid/preference/Preference$OnPreferenceChangeListener;")
J2CPP_DEFINE_METHOD(android::preference::Preference,37,"setOnPreferenceClickListener","(Landroid/preference/Preference$OnPreferenceClickListener;)V")
J2CPP_DEFINE_METHOD(android::preference::Preference,38,"getOnPreferenceClickListener","()Landroid/preference/Preference$OnPreferenceClickListener;")
J2CPP_DEFINE_METHOD(android::preference::Preference,39,"getContext","()Landroid/content/Context;")
J2CPP_DEFINE_METHOD(android::preference::Preference,40,"getSharedPreferences","()Landroid/content/SharedPreferences;")
J2CPP_DEFINE_METHOD(android::preference::Preference,41,"getEditor","()Landroid/content/SharedPreferences$Editor;")
J2CPP_DEFINE_METHOD(android::preference::Preference,42,"shouldCommit","()Z")
J2CPP_DEFINE_METHOD(android::preference::Preference,43,"compareTo","(Landroid/preference/Preference;)I")
J2CPP_DEFINE_METHOD(android::preference::Preference,44,"notifyChanged","()V")
J2CPP_DEFINE_METHOD(android::preference::Preference,45,"notifyHierarchyChanged","()V")
J2CPP_DEFINE_METHOD(android::preference::Preference,46,"getPreferenceManager","()Landroid/preference/PreferenceManager;")
J2CPP_DEFINE_METHOD(android::preference::Preference,47,"onAttachedToHierarchy","(Landroid/preference/PreferenceManager;)V")
J2CPP_DEFINE_METHOD(android::preference::Preference,48,"onAttachedToActivity","()V")
J2CPP_DEFINE_METHOD(android::preference::Preference,49,"findPreferenceInHierarchy","(Ljava/lang/String;)Landroid/preference/Preference;")
J2CPP_DEFINE_METHOD(android::preference::Preference,50,"notifyDependencyChange","(Z)V")
J2CPP_DEFINE_METHOD(android::preference::Preference,51,"onDependencyChanged","(Landroid/preference/Preference;Z)V")
J2CPP_DEFINE_METHOD(android::preference::Preference,52,"shouldDisableDependents","()Z")
J2CPP_DEFINE_METHOD(android::preference::Preference,53,"setDependency","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::preference::Preference,54,"getDependency","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::preference::Preference,55,"onPrepareForRemoval","()V")
J2CPP_DEFINE_METHOD(android::preference::Preference,56,"setDefaultValue","(Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(android::preference::Preference,57,"onSetInitialValue","(ZLjava/lang/Object;)V")
J2CPP_DEFINE_METHOD(android::preference::Preference,58,"persistString","(Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(android::preference::Preference,59,"getPersistedString","(Ljava/lang/String;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::preference::Preference,60,"persistInt","(I)Z")
J2CPP_DEFINE_METHOD(android::preference::Preference,61,"getPersistedInt","(I)I")
J2CPP_DEFINE_METHOD(android::preference::Preference,62,"persistFloat","(F)Z")
J2CPP_DEFINE_METHOD(android::preference::Preference,63,"getPersistedFloat","(F)F")
J2CPP_DEFINE_METHOD(android::preference::Preference,64,"persistLong","(J)Z")
J2CPP_DEFINE_METHOD(android::preference::Preference,65,"getPersistedLong","(J)J")
J2CPP_DEFINE_METHOD(android::preference::Preference,66,"persistBoolean","(Z)Z")
J2CPP_DEFINE_METHOD(android::preference::Preference,67,"getPersistedBoolean","(Z)Z")
J2CPP_DEFINE_METHOD(android::preference::Preference,68,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::preference::Preference,69,"saveHierarchyState","(Landroid/os/Bundle;)V")
J2CPP_DEFINE_METHOD(android::preference::Preference,70,"onSaveInstanceState","()Landroid/os/Parcelable;")
J2CPP_DEFINE_METHOD(android::preference::Preference,71,"restoreHierarchyState","(Landroid/os/Bundle;)V")
J2CPP_DEFINE_METHOD(android::preference::Preference,72,"onRestoreInstanceState","(Landroid/os/Parcelable;)V")
J2CPP_DEFINE_METHOD(android::preference::Preference,73,"compareTo","(Ljava/lang/Object;)I")
J2CPP_DEFINE_FIELD(android::preference::Preference,0,"DEFAULT_ORDER","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_PREFERENCE_PREFERENCE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
