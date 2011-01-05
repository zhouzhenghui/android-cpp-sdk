/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.text.format.DateFormat
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_FORMAT_DATEFORMAT_HPP_DECL
#define J2CPP_ANDROID_TEXT_FORMAT_DATEFORMAT_HPP_DECL


namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace java { namespace util { class Date; } } }
namespace j2cpp { namespace java { namespace util { class Calendar; } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace text { class DateFormat; } } }


#include <android/content/Context.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Object.hpp>
#include <java/text/DateFormat.hpp>
#include <java/util/Calendar.hpp>
#include <java/util/Date.hpp>


namespace j2cpp {

namespace android { namespace text { namespace format {

	class DateFormat;
	class DateFormat
		: public object<DateFormat>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)
		J2CPP_DECLARE_FIELD(6)
		J2CPP_DECLARE_FIELD(7)
		J2CPP_DECLARE_FIELD(8)
		J2CPP_DECLARE_FIELD(9)
		J2CPP_DECLARE_FIELD(10)
		J2CPP_DECLARE_FIELD(11)

		explicit DateFormat(jobject jobj)
		: object<DateFormat>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		DateFormat();
		static jboolean is24HourFormat(local_ref< android::content::Context >  const&);
		static local_ref< java::text::DateFormat > getTimeFormat(local_ref< android::content::Context >  const&);
		static local_ref< java::text::DateFormat > getDateFormat(local_ref< android::content::Context >  const&);
		static local_ref< java::text::DateFormat > getLongDateFormat(local_ref< android::content::Context >  const&);
		static local_ref< java::text::DateFormat > getMediumDateFormat(local_ref< android::content::Context >  const&);
		static local_ref< array<jchar,1> > getDateFormatOrder(local_ref< android::content::Context >  const&);
		static local_ref< java::lang::CharSequence > format(local_ref< java::lang::CharSequence >  const&, jlong);
		static local_ref< java::lang::CharSequence > format(local_ref< java::lang::CharSequence >  const&, local_ref< java::util::Date >  const&);
		static local_ref< java::lang::CharSequence > format(local_ref< java::lang::CharSequence >  const&, local_ref< java::util::Calendar >  const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jchar > QUOTE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jchar > AM_PM;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jchar > CAPITAL_AM_PM;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), jchar > DATE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), jchar > DAY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), jchar > HOUR;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), jchar > HOUR_OF_DAY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), jchar > MINUTE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), jchar > MONTH;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(9), J2CPP_FIELD_SIGNATURE(9), jchar > SECONDS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(10), J2CPP_FIELD_SIGNATURE(10), jchar > TIME_ZONE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(11), J2CPP_FIELD_SIGNATURE(11), jchar > YEAR;
	}; //class DateFormat

} //namespace format
} //namespace text
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_FORMAT_DATEFORMAT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_FORMAT_DATEFORMAT_HPP_IMPL
#define J2CPP_ANDROID_TEXT_FORMAT_DATEFORMAT_HPP_IMPL

namespace j2cpp {



android::text::format::DateFormat::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::text::format::DateFormat::DateFormat()
: object<android::text::format::DateFormat>(
	call_new_object<
		android::text::format::DateFormat::J2CPP_CLASS_NAME,
		android::text::format::DateFormat::J2CPP_METHOD_NAME(0),
		android::text::format::DateFormat::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


jboolean android::text::format::DateFormat::is24HourFormat(local_ref< android::content::Context > const &a0)
{
	return call_static_method<
		android::text::format::DateFormat::J2CPP_CLASS_NAME,
		android::text::format::DateFormat::J2CPP_METHOD_NAME(1),
		android::text::format::DateFormat::J2CPP_METHOD_SIGNATURE(1), 
		jboolean
	>(a0);
}

local_ref< java::text::DateFormat > android::text::format::DateFormat::getTimeFormat(local_ref< android::content::Context > const &a0)
{
	return call_static_method<
		android::text::format::DateFormat::J2CPP_CLASS_NAME,
		android::text::format::DateFormat::J2CPP_METHOD_NAME(2),
		android::text::format::DateFormat::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::text::DateFormat >
	>(a0);
}

local_ref< java::text::DateFormat > android::text::format::DateFormat::getDateFormat(local_ref< android::content::Context > const &a0)
{
	return call_static_method<
		android::text::format::DateFormat::J2CPP_CLASS_NAME,
		android::text::format::DateFormat::J2CPP_METHOD_NAME(3),
		android::text::format::DateFormat::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::text::DateFormat >
	>(a0);
}

local_ref< java::text::DateFormat > android::text::format::DateFormat::getLongDateFormat(local_ref< android::content::Context > const &a0)
{
	return call_static_method<
		android::text::format::DateFormat::J2CPP_CLASS_NAME,
		android::text::format::DateFormat::J2CPP_METHOD_NAME(4),
		android::text::format::DateFormat::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::text::DateFormat >
	>(a0);
}

local_ref< java::text::DateFormat > android::text::format::DateFormat::getMediumDateFormat(local_ref< android::content::Context > const &a0)
{
	return call_static_method<
		android::text::format::DateFormat::J2CPP_CLASS_NAME,
		android::text::format::DateFormat::J2CPP_METHOD_NAME(5),
		android::text::format::DateFormat::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::text::DateFormat >
	>(a0);
}

local_ref< array<jchar,1> > android::text::format::DateFormat::getDateFormatOrder(local_ref< android::content::Context > const &a0)
{
	return call_static_method<
		android::text::format::DateFormat::J2CPP_CLASS_NAME,
		android::text::format::DateFormat::J2CPP_METHOD_NAME(6),
		android::text::format::DateFormat::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< array<jchar,1> >
	>(a0);
}

local_ref< java::lang::CharSequence > android::text::format::DateFormat::format(local_ref< java::lang::CharSequence > const &a0, jlong a1)
{
	return call_static_method<
		android::text::format::DateFormat::J2CPP_CLASS_NAME,
		android::text::format::DateFormat::J2CPP_METHOD_NAME(7),
		android::text::format::DateFormat::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::lang::CharSequence >
	>(a0, a1);
}

local_ref< java::lang::CharSequence > android::text::format::DateFormat::format(local_ref< java::lang::CharSequence > const &a0, local_ref< java::util::Date > const &a1)
{
	return call_static_method<
		android::text::format::DateFormat::J2CPP_CLASS_NAME,
		android::text::format::DateFormat::J2CPP_METHOD_NAME(8),
		android::text::format::DateFormat::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< java::lang::CharSequence >
	>(a0, a1);
}

local_ref< java::lang::CharSequence > android::text::format::DateFormat::format(local_ref< java::lang::CharSequence > const &a0, local_ref< java::util::Calendar > const &a1)
{
	return call_static_method<
		android::text::format::DateFormat::J2CPP_CLASS_NAME,
		android::text::format::DateFormat::J2CPP_METHOD_NAME(9),
		android::text::format::DateFormat::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< java::lang::CharSequence >
	>(a0, a1);
}


static_field<
	android::text::format::DateFormat::J2CPP_CLASS_NAME,
	android::text::format::DateFormat::J2CPP_FIELD_NAME(0),
	android::text::format::DateFormat::J2CPP_FIELD_SIGNATURE(0),
	jchar
> android::text::format::DateFormat::QUOTE;

static_field<
	android::text::format::DateFormat::J2CPP_CLASS_NAME,
	android::text::format::DateFormat::J2CPP_FIELD_NAME(1),
	android::text::format::DateFormat::J2CPP_FIELD_SIGNATURE(1),
	jchar
> android::text::format::DateFormat::AM_PM;

static_field<
	android::text::format::DateFormat::J2CPP_CLASS_NAME,
	android::text::format::DateFormat::J2CPP_FIELD_NAME(2),
	android::text::format::DateFormat::J2CPP_FIELD_SIGNATURE(2),
	jchar
> android::text::format::DateFormat::CAPITAL_AM_PM;

static_field<
	android::text::format::DateFormat::J2CPP_CLASS_NAME,
	android::text::format::DateFormat::J2CPP_FIELD_NAME(3),
	android::text::format::DateFormat::J2CPP_FIELD_SIGNATURE(3),
	jchar
> android::text::format::DateFormat::DATE;

static_field<
	android::text::format::DateFormat::J2CPP_CLASS_NAME,
	android::text::format::DateFormat::J2CPP_FIELD_NAME(4),
	android::text::format::DateFormat::J2CPP_FIELD_SIGNATURE(4),
	jchar
> android::text::format::DateFormat::DAY;

static_field<
	android::text::format::DateFormat::J2CPP_CLASS_NAME,
	android::text::format::DateFormat::J2CPP_FIELD_NAME(5),
	android::text::format::DateFormat::J2CPP_FIELD_SIGNATURE(5),
	jchar
> android::text::format::DateFormat::HOUR;

static_field<
	android::text::format::DateFormat::J2CPP_CLASS_NAME,
	android::text::format::DateFormat::J2CPP_FIELD_NAME(6),
	android::text::format::DateFormat::J2CPP_FIELD_SIGNATURE(6),
	jchar
> android::text::format::DateFormat::HOUR_OF_DAY;

static_field<
	android::text::format::DateFormat::J2CPP_CLASS_NAME,
	android::text::format::DateFormat::J2CPP_FIELD_NAME(7),
	android::text::format::DateFormat::J2CPP_FIELD_SIGNATURE(7),
	jchar
> android::text::format::DateFormat::MINUTE;

static_field<
	android::text::format::DateFormat::J2CPP_CLASS_NAME,
	android::text::format::DateFormat::J2CPP_FIELD_NAME(8),
	android::text::format::DateFormat::J2CPP_FIELD_SIGNATURE(8),
	jchar
> android::text::format::DateFormat::MONTH;

static_field<
	android::text::format::DateFormat::J2CPP_CLASS_NAME,
	android::text::format::DateFormat::J2CPP_FIELD_NAME(9),
	android::text::format::DateFormat::J2CPP_FIELD_SIGNATURE(9),
	jchar
> android::text::format::DateFormat::SECONDS;

static_field<
	android::text::format::DateFormat::J2CPP_CLASS_NAME,
	android::text::format::DateFormat::J2CPP_FIELD_NAME(10),
	android::text::format::DateFormat::J2CPP_FIELD_SIGNATURE(10),
	jchar
> android::text::format::DateFormat::TIME_ZONE;

static_field<
	android::text::format::DateFormat::J2CPP_CLASS_NAME,
	android::text::format::DateFormat::J2CPP_FIELD_NAME(11),
	android::text::format::DateFormat::J2CPP_FIELD_SIGNATURE(11),
	jchar
> android::text::format::DateFormat::YEAR;


J2CPP_DEFINE_CLASS(android::text::format::DateFormat,"android/text/format/DateFormat")
J2CPP_DEFINE_METHOD(android::text::format::DateFormat,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::text::format::DateFormat,1,"is24HourFormat","(Landroid/content/Context;)Z")
J2CPP_DEFINE_METHOD(android::text::format::DateFormat,2,"getTimeFormat","(Landroid/content/Context;)Ljava/text/DateFormat;")
J2CPP_DEFINE_METHOD(android::text::format::DateFormat,3,"getDateFormat","(Landroid/content/Context;)Ljava/text/DateFormat;")
J2CPP_DEFINE_METHOD(android::text::format::DateFormat,4,"getLongDateFormat","(Landroid/content/Context;)Ljava/text/DateFormat;")
J2CPP_DEFINE_METHOD(android::text::format::DateFormat,5,"getMediumDateFormat","(Landroid/content/Context;)Ljava/text/DateFormat;")
J2CPP_DEFINE_METHOD(android::text::format::DateFormat,6,"getDateFormatOrder","(Landroid/content/Context;)[C")
J2CPP_DEFINE_METHOD(android::text::format::DateFormat,7,"format","(Ljava/lang/CharSequence;J)Ljava/lang/CharSequence;")
J2CPP_DEFINE_METHOD(android::text::format::DateFormat,8,"format","(Ljava/lang/CharSequence;Ljava/util/Date;)Ljava/lang/CharSequence;")
J2CPP_DEFINE_METHOD(android::text::format::DateFormat,9,"format","(Ljava/lang/CharSequence;Ljava/util/Calendar;)Ljava/lang/CharSequence;")
J2CPP_DEFINE_FIELD(android::text::format::DateFormat,0,"QUOTE","C")
J2CPP_DEFINE_FIELD(android::text::format::DateFormat,1,"AM_PM","C")
J2CPP_DEFINE_FIELD(android::text::format::DateFormat,2,"CAPITAL_AM_PM","C")
J2CPP_DEFINE_FIELD(android::text::format::DateFormat,3,"DATE","C")
J2CPP_DEFINE_FIELD(android::text::format::DateFormat,4,"DAY","C")
J2CPP_DEFINE_FIELD(android::text::format::DateFormat,5,"HOUR","C")
J2CPP_DEFINE_FIELD(android::text::format::DateFormat,6,"HOUR_OF_DAY","C")
J2CPP_DEFINE_FIELD(android::text::format::DateFormat,7,"MINUTE","C")
J2CPP_DEFINE_FIELD(android::text::format::DateFormat,8,"MONTH","C")
J2CPP_DEFINE_FIELD(android::text::format::DateFormat,9,"SECONDS","C")
J2CPP_DEFINE_FIELD(android::text::format::DateFormat,10,"TIME_ZONE","C")
J2CPP_DEFINE_FIELD(android::text::format::DateFormat,11,"YEAR","C")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_FORMAT_DATEFORMAT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
