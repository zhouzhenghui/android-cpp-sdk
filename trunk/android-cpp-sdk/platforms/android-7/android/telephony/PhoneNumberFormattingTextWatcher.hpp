/*================================================================================
  code generated by: java2cpp
  class: android.telephony.PhoneNumberFormattingTextWatcher
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TELEPHONY_PHONENUMBERFORMATTINGTEXTWATCHER_HPP_DECL
#define J2CPP_ANDROID_TELEPHONY_PHONENUMBERFORMATTINGTEXTWATCHER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace android { namespace text { class Editable; } } }
namespace j2cpp { namespace android { namespace text { class TextWatcher; } } }


#include <android/text/Editable.hpp>
#include <android/text/TextWatcher.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace telephony {

	class PhoneNumberFormattingTextWatcher;
	class PhoneNumberFormattingTextWatcher
		: public cpp_object<PhoneNumberFormattingTextWatcher>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		explicit PhoneNumberFormattingTextWatcher(jobject jobj)
		: cpp_object<PhoneNumberFormattingTextWatcher>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::text::TextWatcher>() const;


		PhoneNumberFormattingTextWatcher();
		void afterTextChanged(local_ref< android::text::Editable > const&);
		void beforeTextChanged(local_ref< java::lang::CharSequence > const&, cpp_int const&, cpp_int const&, cpp_int const&);
		void onTextChanged(local_ref< java::lang::CharSequence > const&, cpp_int const&, cpp_int const&, cpp_int const&);
	}; //class PhoneNumberFormattingTextWatcher

} //namespace telephony
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TELEPHONY_PHONENUMBERFORMATTINGTEXTWATCHER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TELEPHONY_PHONENUMBERFORMATTINGTEXTWATCHER_HPP_IMPL
#define J2CPP_ANDROID_TELEPHONY_PHONENUMBERFORMATTINGTEXTWATCHER_HPP_IMPL

namespace j2cpp {



android::telephony::PhoneNumberFormattingTextWatcher::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}

android::telephony::PhoneNumberFormattingTextWatcher::operator local_ref<android::text::TextWatcher>() const
{
	return local_ref<android::text::TextWatcher>(get_jtype());
}


android::telephony::PhoneNumberFormattingTextWatcher::PhoneNumberFormattingTextWatcher()
: cpp_object<android::telephony::PhoneNumberFormattingTextWatcher>(
	environment::get().get_jenv()->NewObject(
		get_class<android::telephony::PhoneNumberFormattingTextWatcher::J2CPP_CLASS_NAME>(),
		get_method_id<android::telephony::PhoneNumberFormattingTextWatcher::J2CPP_CLASS_NAME, android::telephony::PhoneNumberFormattingTextWatcher::J2CPP_METHOD_NAME(0), android::telephony::PhoneNumberFormattingTextWatcher::J2CPP_METHOD_SIGNATURE(0), false>()
	)
)
{
}


void android::telephony::PhoneNumberFormattingTextWatcher::afterTextChanged(local_ref< android::text::Editable > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

void android::telephony::PhoneNumberFormattingTextWatcher::beforeTextChanged(local_ref< java::lang::CharSequence > const &a0, cpp_int const &a1, cpp_int const &a2, cpp_int const &a3)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

void android::telephony::PhoneNumberFormattingTextWatcher::onTextChanged(local_ref< java::lang::CharSequence > const &a0, cpp_int const &a1, cpp_int const &a2, cpp_int const &a3)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::telephony::PhoneNumberFormattingTextWatcher,"android/telephony/PhoneNumberFormattingTextWatcher")
J2CPP_DEFINE_METHOD(android::telephony::PhoneNumberFormattingTextWatcher,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::telephony::PhoneNumberFormattingTextWatcher,1,"afterTextChanged","(Landroid/text/Editable;)V")
J2CPP_DEFINE_METHOD(android::telephony::PhoneNumberFormattingTextWatcher,2,"beforeTextChanged","(Ljava/lang/CharSequence;III)V")
J2CPP_DEFINE_METHOD(android::telephony::PhoneNumberFormattingTextWatcher,3,"onTextChanged","(Ljava/lang/CharSequence;III)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TELEPHONY_PHONENUMBERFORMATTINGTEXTWATCHER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
