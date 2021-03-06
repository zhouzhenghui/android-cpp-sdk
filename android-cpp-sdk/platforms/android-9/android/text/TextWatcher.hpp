/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.text.TextWatcher
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_TEXTWATCHER_HPP_DECL
#define J2CPP_ANDROID_TEXT_TEXTWATCHER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace text { class Editable; } } }
namespace j2cpp { namespace android { namespace text { class NoCopySpan; } } }


#include <android/text/Editable.hpp>
#include <android/text/NoCopySpan.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace text {

	class TextWatcher;
	class TextWatcher
		: public object<TextWatcher>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit TextWatcher(jobject jobj)
		: object<TextWatcher>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::text::NoCopySpan>() const;


		void beforeTextChanged(local_ref< java::lang::CharSequence >  const&, jint, jint, jint);
		void onTextChanged(local_ref< java::lang::CharSequence >  const&, jint, jint, jint);
		void afterTextChanged(local_ref< android::text::Editable >  const&);
	}; //class TextWatcher

} //namespace text
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_TEXTWATCHER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_TEXTWATCHER_HPP_IMPL
#define J2CPP_ANDROID_TEXT_TEXTWATCHER_HPP_IMPL

namespace j2cpp {



android::text::TextWatcher::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::text::TextWatcher::operator local_ref<android::text::NoCopySpan>() const
{
	return local_ref<android::text::NoCopySpan>(get_jobject());
}

void android::text::TextWatcher::beforeTextChanged(local_ref< java::lang::CharSequence > const &a0, jint a1, jint a2, jint a3)
{
	return call_method<
		android::text::TextWatcher::J2CPP_CLASS_NAME,
		android::text::TextWatcher::J2CPP_METHOD_NAME(0),
		android::text::TextWatcher::J2CPP_METHOD_SIGNATURE(0), 
		void
	>(get_jobject(), a0, a1, a2, a3);
}

void android::text::TextWatcher::onTextChanged(local_ref< java::lang::CharSequence > const &a0, jint a1, jint a2, jint a3)
{
	return call_method<
		android::text::TextWatcher::J2CPP_CLASS_NAME,
		android::text::TextWatcher::J2CPP_METHOD_NAME(1),
		android::text::TextWatcher::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject(), a0, a1, a2, a3);
}

void android::text::TextWatcher::afterTextChanged(local_ref< android::text::Editable > const &a0)
{
	return call_method<
		android::text::TextWatcher::J2CPP_CLASS_NAME,
		android::text::TextWatcher::J2CPP_METHOD_NAME(2),
		android::text::TextWatcher::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::text::TextWatcher,"android/text/TextWatcher")
J2CPP_DEFINE_METHOD(android::text::TextWatcher,0,"beforeTextChanged","(Ljava/lang/CharSequence;III)V")
J2CPP_DEFINE_METHOD(android::text::TextWatcher,1,"onTextChanged","(Ljava/lang/CharSequence;III)V")
J2CPP_DEFINE_METHOD(android::text::TextWatcher,2,"afterTextChanged","(Landroid/text/Editable;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_TEXTWATCHER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
