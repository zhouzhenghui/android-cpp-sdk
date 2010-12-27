/*================================================================================
  code generated by: java2cpp
  class: android.text.SpannableString
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_SPANNABLESTRING_HPP_DECL
#define J2CPP_ANDROID_TEXT_SPANNABLESTRING_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace android { namespace text { class Spannable; } } }
namespace j2cpp { namespace android { namespace text { class GetChars; } } }
namespace j2cpp { namespace android { namespace text { class SpannableStringInternal; } } }


#include <android/text/GetChars.hpp>
#include <android/text/Spannable.hpp>
#include <android/text/SpannableStringInternal.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace text {

	class SpannableString;
	class SpannableString
		: public cpp_object<SpannableString>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)

		explicit SpannableString(jobject jobj)
		: cpp_object<SpannableString>(jobj)
		{
		}

		operator local_ref<android::text::SpannableStringInternal>() const;
		operator local_ref<java::lang::CharSequence>() const;
		operator local_ref<android::text::GetChars>() const;
		operator local_ref<android::text::Spannable>() const;


		SpannableString(local_ref< java::lang::CharSequence > const&);
		static local_ref< android::text::SpannableString > valueOf(local_ref< java::lang::CharSequence > const&);
		void setSpan(local_ref< java::lang::Object > const&, cpp_int const&, cpp_int const&, cpp_int const&);
		void removeSpan(local_ref< java::lang::Object > const&);
		local_ref< java::lang::CharSequence > subSequence(cpp_int const&, cpp_int const&);
	}; //class SpannableString

} //namespace text
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_SPANNABLESTRING_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_SPANNABLESTRING_HPP_IMPL
#define J2CPP_ANDROID_TEXT_SPANNABLESTRING_HPP_IMPL

namespace j2cpp {



android::text::SpannableString::operator local_ref<android::text::SpannableStringInternal>() const
{
	return local_ref<android::text::SpannableStringInternal>(get_jtype());
}

android::text::SpannableString::operator local_ref<java::lang::CharSequence>() const
{
	return local_ref<java::lang::CharSequence>(get_jtype());
}

android::text::SpannableString::operator local_ref<android::text::GetChars>() const
{
	return local_ref<android::text::GetChars>(get_jtype());
}

android::text::SpannableString::operator local_ref<android::text::Spannable>() const
{
	return local_ref<android::text::Spannable>(get_jtype());
}


android::text::SpannableString::SpannableString(local_ref< java::lang::CharSequence > const &a0)
: cpp_object<android::text::SpannableString>(
	environment::get().get_jenv()->NewObject(
		get_class<android::text::SpannableString::J2CPP_CLASS_NAME>(),
		get_method_id<android::text::SpannableString::J2CPP_CLASS_NAME, android::text::SpannableString::J2CPP_METHOD_NAME(0), android::text::SpannableString::J2CPP_METHOD_SIGNATURE(0), false>(),
		a0.get_jtype()
	)
)
{
}


local_ref< android::text::SpannableString > android::text::SpannableString::valueOf(local_ref< java::lang::CharSequence > const &a0)
{
	return local_ref< android::text::SpannableString >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), true>(),
			a0.get_jtype()
		)
	);
}

void android::text::SpannableString::setSpan(local_ref< java::lang::Object > const &a0, cpp_int const &a1, cpp_int const &a2, cpp_int const &a3)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

void android::text::SpannableString::removeSpan(local_ref< java::lang::Object > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::CharSequence > android::text::SpannableString::subSequence(cpp_int const &a0, cpp_int const &a1)
{
	return local_ref< java::lang::CharSequence >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::text::SpannableString,"android/text/SpannableString")
J2CPP_DEFINE_METHOD(android::text::SpannableString,0,"<init>","(Ljava/lang/CharSequence;)V")
J2CPP_DEFINE_METHOD(android::text::SpannableString,1,"valueOf","(Ljava/lang/CharSequence;)Landroid/text/SpannableString;")
J2CPP_DEFINE_METHOD(android::text::SpannableString,2,"setSpan","(Ljava/lang/Object;III)V")
J2CPP_DEFINE_METHOD(android::text::SpannableString,3,"removeSpan","(Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(android::text::SpannableString,4,"subSequence","(II)Ljava/lang/CharSequence;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_SPANNABLESTRING_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
