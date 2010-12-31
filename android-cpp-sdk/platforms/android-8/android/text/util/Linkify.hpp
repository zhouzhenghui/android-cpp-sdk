/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.text.util.Linkify
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_UTIL_LINKIFY_HPP_DECL
#define J2CPP_ANDROID_TEXT_UTIL_LINKIFY_HPP_DECL


namespace j2cpp { namespace android { namespace widget { class TextView; } } }
namespace j2cpp { namespace android { namespace text { class Spannable; } } }
namespace j2cpp { namespace android { namespace text { namespace util { namespace Linkify_ { class TransformFilter; } } } } }
namespace j2cpp { namespace android { namespace text { namespace util { namespace Linkify_ { class MatchFilter; } } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { namespace regex { class Matcher; } } } }
namespace j2cpp { namespace java { namespace util { namespace regex { class Pattern; } } } }


#include <android/text/Spannable.hpp>
#include <android/text/util/Linkify.hpp>
#include <android/widget/TextView.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/regex/Matcher.hpp>
#include <java/util/regex/Pattern.hpp>


namespace j2cpp {

namespace android { namespace text { namespace util {

	class Linkify;
	namespace Linkify_ {

		class TransformFilter;
		class TransformFilter
			: public object<TransformFilter>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			explicit TransformFilter(jobject jobj)
			: object<TransformFilter>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			local_ref< java::lang::String > transformUrl(local_ref< java::util::regex::Matcher >  const&, local_ref< java::lang::String >  const&);
		}; //class TransformFilter

		class MatchFilter;
		class MatchFilter
			: public object<MatchFilter>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			explicit MatchFilter(jobject jobj)
			: object<MatchFilter>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			jboolean acceptMatch(local_ref< java::lang::CharSequence >  const&, jint, jint);
		}; //class MatchFilter

	} //namespace Linkify_

	class Linkify
		: public object<Linkify>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)
		J2CPP_DECLARE_FIELD(6)
		J2CPP_DECLARE_FIELD(7)

		typedef Linkify_::TransformFilter TransformFilter;
		typedef Linkify_::MatchFilter MatchFilter;

		explicit Linkify(jobject jobj)
		: object<Linkify>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		Linkify();
		static jboolean addLinks(local_ref< android::text::Spannable >  const&, jint);
		static jboolean addLinks(local_ref< android::widget::TextView >  const&, jint);
		static void addLinks(local_ref< android::widget::TextView >  const&, local_ref< java::util::regex::Pattern >  const&, local_ref< java::lang::String >  const&);
		static void addLinks(local_ref< android::widget::TextView >  const&, local_ref< java::util::regex::Pattern >  const&, local_ref< java::lang::String >  const&, local_ref< android::text::util::Linkify_::MatchFilter >  const&, local_ref< android::text::util::Linkify_::TransformFilter >  const&);
		static jboolean addLinks(local_ref< android::text::Spannable >  const&, local_ref< java::util::regex::Pattern >  const&, local_ref< java::lang::String >  const&);
		static jboolean addLinks(local_ref< android::text::Spannable >  const&, local_ref< java::util::regex::Pattern >  const&, local_ref< java::lang::String >  const&, local_ref< android::text::util::Linkify_::MatchFilter >  const&, local_ref< android::text::util::Linkify_::TransformFilter >  const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > WEB_URLS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > EMAIL_ADDRESSES;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jint > PHONE_NUMBERS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), jint > MAP_ADDRESSES;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), jint > ALL;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), local_ref< android::text::util::Linkify_::MatchFilter > > sUrlMatchFilter;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), local_ref< android::text::util::Linkify_::MatchFilter > > sPhoneNumberMatchFilter;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), local_ref< android::text::util::Linkify_::TransformFilter > > sPhoneNumberTransformFilter;
	}; //class Linkify

} //namespace util
} //namespace text
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_UTIL_LINKIFY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_UTIL_LINKIFY_HPP_IMPL
#define J2CPP_ANDROID_TEXT_UTIL_LINKIFY_HPP_IMPL

namespace j2cpp {




android::text::util::Linkify_::TransformFilter::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

local_ref< java::lang::String > android::text::util::Linkify_::TransformFilter::transformUrl(local_ref< java::util::regex::Matcher > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		android::text::util::Linkify_::TransformFilter::J2CPP_CLASS_NAME,
		android::text::util::Linkify_::TransformFilter::J2CPP_METHOD_NAME(0),
		android::text::util::Linkify_::TransformFilter::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< java::lang::String > >
	(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(android::text::util::Linkify_::TransformFilter,"android/text/util/Linkify$TransformFilter")
J2CPP_DEFINE_METHOD(android::text::util::Linkify_::TransformFilter,0,"transformUrl","(Ljava/util/regex/Matcher;Ljava/lang/String;)Ljava/lang/String;")


android::text::util::Linkify_::MatchFilter::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

jboolean android::text::util::Linkify_::MatchFilter::acceptMatch(local_ref< java::lang::CharSequence > const &a0, jint a1, jint a2)
{
	return call_method<
		android::text::util::Linkify_::MatchFilter::J2CPP_CLASS_NAME,
		android::text::util::Linkify_::MatchFilter::J2CPP_METHOD_NAME(0),
		android::text::util::Linkify_::MatchFilter::J2CPP_METHOD_SIGNATURE(0), 
		jboolean >
	(get_jobject(), a0, a1, a2);
}


J2CPP_DEFINE_CLASS(android::text::util::Linkify_::MatchFilter,"android/text/util/Linkify$MatchFilter")
J2CPP_DEFINE_METHOD(android::text::util::Linkify_::MatchFilter,0,"acceptMatch","(Ljava/lang/CharSequence;II)Z")



android::text::util::Linkify::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::text::util::Linkify::Linkify()
: object<android::text::util::Linkify>(
	call_new_object<
		android::text::util::Linkify::J2CPP_CLASS_NAME,
		android::text::util::Linkify::J2CPP_METHOD_NAME(0),
		android::text::util::Linkify::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}


jboolean android::text::util::Linkify::addLinks(local_ref< android::text::Spannable > const &a0, jint a1)
{
	return call_static_method<
		android::text::util::Linkify::J2CPP_CLASS_NAME,
		android::text::util::Linkify::J2CPP_METHOD_NAME(1),
		android::text::util::Linkify::J2CPP_METHOD_SIGNATURE(1), 
		jboolean >
	(a0, a1);
}

jboolean android::text::util::Linkify::addLinks(local_ref< android::widget::TextView > const &a0, jint a1)
{
	return call_static_method<
		android::text::util::Linkify::J2CPP_CLASS_NAME,
		android::text::util::Linkify::J2CPP_METHOD_NAME(2),
		android::text::util::Linkify::J2CPP_METHOD_SIGNATURE(2), 
		jboolean >
	(a0, a1);
}

void android::text::util::Linkify::addLinks(local_ref< android::widget::TextView > const &a0, local_ref< java::util::regex::Pattern > const &a1, local_ref< java::lang::String > const &a2)
{
	return call_static_method<
		android::text::util::Linkify::J2CPP_CLASS_NAME,
		android::text::util::Linkify::J2CPP_METHOD_NAME(3),
		android::text::util::Linkify::J2CPP_METHOD_SIGNATURE(3), 
		void >
	(a0, a1, a2);
}

void android::text::util::Linkify::addLinks(local_ref< android::widget::TextView > const &a0, local_ref< java::util::regex::Pattern > const &a1, local_ref< java::lang::String > const &a2, local_ref< android::text::util::Linkify_::MatchFilter > const &a3, local_ref< android::text::util::Linkify_::TransformFilter > const &a4)
{
	return call_static_method<
		android::text::util::Linkify::J2CPP_CLASS_NAME,
		android::text::util::Linkify::J2CPP_METHOD_NAME(4),
		android::text::util::Linkify::J2CPP_METHOD_SIGNATURE(4), 
		void >
	(a0, a1, a2, a3, a4);
}

jboolean android::text::util::Linkify::addLinks(local_ref< android::text::Spannable > const &a0, local_ref< java::util::regex::Pattern > const &a1, local_ref< java::lang::String > const &a2)
{
	return call_static_method<
		android::text::util::Linkify::J2CPP_CLASS_NAME,
		android::text::util::Linkify::J2CPP_METHOD_NAME(5),
		android::text::util::Linkify::J2CPP_METHOD_SIGNATURE(5), 
		jboolean >
	(a0, a1, a2);
}

jboolean android::text::util::Linkify::addLinks(local_ref< android::text::Spannable > const &a0, local_ref< java::util::regex::Pattern > const &a1, local_ref< java::lang::String > const &a2, local_ref< android::text::util::Linkify_::MatchFilter > const &a3, local_ref< android::text::util::Linkify_::TransformFilter > const &a4)
{
	return call_static_method<
		android::text::util::Linkify::J2CPP_CLASS_NAME,
		android::text::util::Linkify::J2CPP_METHOD_NAME(6),
		android::text::util::Linkify::J2CPP_METHOD_SIGNATURE(6), 
		jboolean >
	(a0, a1, a2, a3, a4);
}



static_field<
	android::text::util::Linkify::J2CPP_CLASS_NAME,
	android::text::util::Linkify::J2CPP_FIELD_NAME(0),
	android::text::util::Linkify::J2CPP_FIELD_SIGNATURE(0),
	jint
> android::text::util::Linkify::WEB_URLS;

static_field<
	android::text::util::Linkify::J2CPP_CLASS_NAME,
	android::text::util::Linkify::J2CPP_FIELD_NAME(1),
	android::text::util::Linkify::J2CPP_FIELD_SIGNATURE(1),
	jint
> android::text::util::Linkify::EMAIL_ADDRESSES;

static_field<
	android::text::util::Linkify::J2CPP_CLASS_NAME,
	android::text::util::Linkify::J2CPP_FIELD_NAME(2),
	android::text::util::Linkify::J2CPP_FIELD_SIGNATURE(2),
	jint
> android::text::util::Linkify::PHONE_NUMBERS;

static_field<
	android::text::util::Linkify::J2CPP_CLASS_NAME,
	android::text::util::Linkify::J2CPP_FIELD_NAME(3),
	android::text::util::Linkify::J2CPP_FIELD_SIGNATURE(3),
	jint
> android::text::util::Linkify::MAP_ADDRESSES;

static_field<
	android::text::util::Linkify::J2CPP_CLASS_NAME,
	android::text::util::Linkify::J2CPP_FIELD_NAME(4),
	android::text::util::Linkify::J2CPP_FIELD_SIGNATURE(4),
	jint
> android::text::util::Linkify::ALL;

static_field<
	android::text::util::Linkify::J2CPP_CLASS_NAME,
	android::text::util::Linkify::J2CPP_FIELD_NAME(5),
	android::text::util::Linkify::J2CPP_FIELD_SIGNATURE(5),
	local_ref< android::text::util::Linkify_::MatchFilter >
> android::text::util::Linkify::sUrlMatchFilter;

static_field<
	android::text::util::Linkify::J2CPP_CLASS_NAME,
	android::text::util::Linkify::J2CPP_FIELD_NAME(6),
	android::text::util::Linkify::J2CPP_FIELD_SIGNATURE(6),
	local_ref< android::text::util::Linkify_::MatchFilter >
> android::text::util::Linkify::sPhoneNumberMatchFilter;

static_field<
	android::text::util::Linkify::J2CPP_CLASS_NAME,
	android::text::util::Linkify::J2CPP_FIELD_NAME(7),
	android::text::util::Linkify::J2CPP_FIELD_SIGNATURE(7),
	local_ref< android::text::util::Linkify_::TransformFilter >
> android::text::util::Linkify::sPhoneNumberTransformFilter;


J2CPP_DEFINE_CLASS(android::text::util::Linkify,"android/text/util/Linkify")
J2CPP_DEFINE_METHOD(android::text::util::Linkify,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::text::util::Linkify,1,"addLinks","(Landroid/text/Spannable;I)Z")
J2CPP_DEFINE_METHOD(android::text::util::Linkify,2,"addLinks","(Landroid/widget/TextView;I)Z")
J2CPP_DEFINE_METHOD(android::text::util::Linkify,3,"addLinks","(Landroid/widget/TextView;Ljava/util/regex/Pattern;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::text::util::Linkify,4,"addLinks","(Landroid/widget/TextView;Ljava/util/regex/Pattern;Ljava/lang/String;Landroid/text/util/Linkify$MatchFilter;Landroid/text/util/Linkify$TransformFilter;)V")
J2CPP_DEFINE_METHOD(android::text::util::Linkify,5,"addLinks","(Landroid/text/Spannable;Ljava/util/regex/Pattern;Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(android::text::util::Linkify,6,"addLinks","(Landroid/text/Spannable;Ljava/util/regex/Pattern;Ljava/lang/String;Landroid/text/util/Linkify$MatchFilter;Landroid/text/util/Linkify$TransformFilter;)Z")
J2CPP_DEFINE_METHOD(android::text::util::Linkify,7,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::text::util::Linkify,0,"WEB_URLS","I")
J2CPP_DEFINE_FIELD(android::text::util::Linkify,1,"EMAIL_ADDRESSES","I")
J2CPP_DEFINE_FIELD(android::text::util::Linkify,2,"PHONE_NUMBERS","I")
J2CPP_DEFINE_FIELD(android::text::util::Linkify,3,"MAP_ADDRESSES","I")
J2CPP_DEFINE_FIELD(android::text::util::Linkify,4,"ALL","I")
J2CPP_DEFINE_FIELD(android::text::util::Linkify,5,"sUrlMatchFilter","Landroid/text/util/Linkify$MatchFilter;")
J2CPP_DEFINE_FIELD(android::text::util::Linkify,6,"sPhoneNumberMatchFilter","Landroid/text/util/Linkify$MatchFilter;")
J2CPP_DEFINE_FIELD(android::text::util::Linkify,7,"sPhoneNumberTransformFilter","Landroid/text/util/Linkify$TransformFilter;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_UTIL_LINKIFY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
