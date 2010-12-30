/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.text.SpannableString
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_SPANNABLESTRING_HPP_DECL
#define J2CPP_ANDROID_TEXT_SPANNABLESTRING_HPP_DECL


namespace j2cpp { namespace android { namespace text { class Spannable; } } }
namespace j2cpp { namespace android { namespace text { class SpannableStringInternal; } } }
namespace j2cpp { namespace android { namespace text { class GetChars; } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/text/GetChars.hpp>
#include <android/text/Spannable.hpp>
#include <android/text/SpannableStringInternal.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace text {

	class SpannableString;
	class SpannableString
		: public object<SpannableString>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)

		explicit SpannableString(jobject jobj)
		: object<SpannableString>(jobj)
		{
		}

		operator local_ref<android::text::SpannableStringInternal>() const;
		operator local_ref<java::lang::CharSequence>() const;
		operator local_ref<android::text::GetChars>() const;
		operator local_ref<android::text::Spannable>() const;


		SpannableString(local_ref< java::lang::CharSequence > const&);
		static local_ref< android::text::SpannableString > valueOf(local_ref< java::lang::CharSequence >  const&);
		void setSpan(local_ref< java::lang::Object >  const&, jint, jint, jint);
		void removeSpan(local_ref< java::lang::Object >  const&);
		local_ref< java::lang::CharSequence > subSequence(jint, jint);
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
	return local_ref<android::text::SpannableStringInternal>(get_jobject());
}

android::text::SpannableString::operator local_ref<java::lang::CharSequence>() const
{
	return local_ref<java::lang::CharSequence>(get_jobject());
}

android::text::SpannableString::operator local_ref<android::text::GetChars>() const
{
	return local_ref<android::text::GetChars>(get_jobject());
}

android::text::SpannableString::operator local_ref<android::text::Spannable>() const
{
	return local_ref<android::text::Spannable>(get_jobject());
}


android::text::SpannableString::SpannableString(local_ref< java::lang::CharSequence > const &a0)
: object<android::text::SpannableString>(
	call_new_object<
		android::text::SpannableString::J2CPP_CLASS_NAME,
		android::text::SpannableString::J2CPP_METHOD_NAME(0),
		android::text::SpannableString::J2CPP_METHOD_SIGNATURE(0)>
	(a0)
)
{
}


local_ref< android::text::SpannableString > android::text::SpannableString::valueOf(local_ref< java::lang::CharSequence > const &a0)
{
	return call_static_method<
		android::text::SpannableString::J2CPP_CLASS_NAME,
		android::text::SpannableString::J2CPP_METHOD_NAME(1),
		android::text::SpannableString::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< android::text::SpannableString > >
	(a0);
}

void android::text::SpannableString::setSpan(local_ref< java::lang::Object > const &a0, jint a1, jint a2, jint a3)
{
	return call_method<
		android::text::SpannableString::J2CPP_CLASS_NAME,
		android::text::SpannableString::J2CPP_METHOD_NAME(2),
		android::text::SpannableString::J2CPP_METHOD_SIGNATURE(2), 
		void >
	(get_jobject(), a0, a1, a2, a3);
}

void android::text::SpannableString::removeSpan(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		android::text::SpannableString::J2CPP_CLASS_NAME,
		android::text::SpannableString::J2CPP_METHOD_NAME(3),
		android::text::SpannableString::J2CPP_METHOD_SIGNATURE(3), 
		void >
	(get_jobject(), a0);
}

local_ref< java::lang::CharSequence > android::text::SpannableString::subSequence(jint a0, jint a1)
{
	return call_method<
		android::text::SpannableString::J2CPP_CLASS_NAME,
		android::text::SpannableString::J2CPP_METHOD_NAME(4),
		android::text::SpannableString::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::lang::CharSequence > >
	(get_jobject(), a0, a1);
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
