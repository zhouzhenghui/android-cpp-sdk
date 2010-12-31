/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.text.format.DateUtils
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_FORMAT_DATEUTILS_HPP_DECL
#define J2CPP_ANDROID_TEXT_FORMAT_DATEUTILS_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class StringBuilder; } } }
namespace j2cpp { namespace java { namespace util { class Formatter; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }


#include <android/content/Context.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/Formatter.hpp>


namespace j2cpp {

namespace android { namespace text { namespace format {

	class DateUtils;
	class DateUtils
		: public object<DateUtils>
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
		J2CPP_DECLARE_FIELD(12)
		J2CPP_DECLARE_FIELD(13)
		J2CPP_DECLARE_FIELD(14)
		J2CPP_DECLARE_FIELD(15)
		J2CPP_DECLARE_FIELD(16)
		J2CPP_DECLARE_FIELD(17)
		J2CPP_DECLARE_FIELD(18)
		J2CPP_DECLARE_FIELD(19)
		J2CPP_DECLARE_FIELD(20)
		J2CPP_DECLARE_FIELD(21)
		J2CPP_DECLARE_FIELD(22)
		J2CPP_DECLARE_FIELD(23)
		J2CPP_DECLARE_FIELD(24)
		J2CPP_DECLARE_FIELD(25)
		J2CPP_DECLARE_FIELD(26)
		J2CPP_DECLARE_FIELD(27)
		J2CPP_DECLARE_FIELD(28)
		J2CPP_DECLARE_FIELD(29)
		J2CPP_DECLARE_FIELD(30)
		J2CPP_DECLARE_FIELD(31)
		J2CPP_DECLARE_FIELD(32)
		J2CPP_DECLARE_FIELD(33)
		J2CPP_DECLARE_FIELD(34)
		J2CPP_DECLARE_FIELD(35)
		J2CPP_DECLARE_FIELD(36)
		J2CPP_DECLARE_FIELD(37)
		J2CPP_DECLARE_FIELD(38)
		J2CPP_DECLARE_FIELD(39)
		J2CPP_DECLARE_FIELD(40)
		J2CPP_DECLARE_FIELD(41)
		J2CPP_DECLARE_FIELD(42)
		J2CPP_DECLARE_FIELD(43)

		explicit DateUtils(jobject jobj)
		: object<DateUtils>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		DateUtils();
		static local_ref< java::lang::String > getDayOfWeekString(jint, jint);
		static local_ref< java::lang::String > getAMPMString(jint);
		static local_ref< java::lang::String > getMonthString(jint, jint);
		static local_ref< java::lang::CharSequence > getRelativeTimeSpanString(jlong);
		static local_ref< java::lang::CharSequence > getRelativeTimeSpanString(jlong, jlong, jlong);
		static local_ref< java::lang::CharSequence > getRelativeTimeSpanString(jlong, jlong, jlong, jint);
		static local_ref< java::lang::CharSequence > getRelativeDateTimeString(local_ref< android::content::Context >  const&, jlong, jlong, jlong, jint);
		static local_ref< java::lang::String > formatElapsedTime(jlong);
		static local_ref< java::lang::String > formatElapsedTime(local_ref< java::lang::StringBuilder >  const&, jlong);
		static local_ref< java::lang::CharSequence > formatSameDayTime(jlong, jlong, jint, jint);
		static jboolean isToday(jlong);
		static local_ref< java::lang::String > formatDateRange(local_ref< android::content::Context >  const&, jlong, jlong, jint);
		static local_ref< java::util::Formatter > formatDateRange(local_ref< android::content::Context >  const&, local_ref< java::util::Formatter >  const&, jlong, jlong, jint);
		static local_ref< java::util::Formatter > formatDateRange(local_ref< android::content::Context >  const&, local_ref< java::util::Formatter >  const&, jlong, jlong, jint, local_ref< java::lang::String >  const&);
		static local_ref< java::lang::String > formatDateTime(local_ref< android::content::Context >  const&, jlong, jint);
		static local_ref< java::lang::CharSequence > getRelativeTimeSpanString(local_ref< android::content::Context >  const&, jlong, jboolean);
		static local_ref< java::lang::CharSequence > getRelativeTimeSpanString(local_ref< android::content::Context >  const&, jlong);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jlong > SECOND_IN_MILLIS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jlong > MINUTE_IN_MILLIS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jlong > HOUR_IN_MILLIS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), jlong > DAY_IN_MILLIS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), jlong > WEEK_IN_MILLIS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), jlong > YEAR_IN_MILLIS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), jint > FORMAT_SHOW_TIME;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), jint > FORMAT_SHOW_WEEKDAY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), jint > FORMAT_SHOW_YEAR;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(9), J2CPP_FIELD_SIGNATURE(9), jint > FORMAT_NO_YEAR;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(10), J2CPP_FIELD_SIGNATURE(10), jint > FORMAT_SHOW_DATE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(11), J2CPP_FIELD_SIGNATURE(11), jint > FORMAT_NO_MONTH_DAY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(12), J2CPP_FIELD_SIGNATURE(12), jint > FORMAT_12HOUR;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(13), J2CPP_FIELD_SIGNATURE(13), jint > FORMAT_24HOUR;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(14), J2CPP_FIELD_SIGNATURE(14), jint > FORMAT_CAP_AMPM;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(15), J2CPP_FIELD_SIGNATURE(15), jint > FORMAT_NO_NOON;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(16), J2CPP_FIELD_SIGNATURE(16), jint > FORMAT_CAP_NOON;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(17), J2CPP_FIELD_SIGNATURE(17), jint > FORMAT_NO_MIDNIGHT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(18), J2CPP_FIELD_SIGNATURE(18), jint > FORMAT_CAP_MIDNIGHT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(19), J2CPP_FIELD_SIGNATURE(19), jint > FORMAT_UTC;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(20), J2CPP_FIELD_SIGNATURE(20), jint > FORMAT_ABBREV_TIME;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(21), J2CPP_FIELD_SIGNATURE(21), jint > FORMAT_ABBREV_WEEKDAY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(22), J2CPP_FIELD_SIGNATURE(22), jint > FORMAT_ABBREV_MONTH;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(23), J2CPP_FIELD_SIGNATURE(23), jint > FORMAT_NUMERIC_DATE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(24), J2CPP_FIELD_SIGNATURE(24), jint > FORMAT_ABBREV_RELATIVE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(25), J2CPP_FIELD_SIGNATURE(25), jint > FORMAT_ABBREV_ALL;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(26), J2CPP_FIELD_SIGNATURE(26), jint > FORMAT_CAP_NOON_MIDNIGHT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(27), J2CPP_FIELD_SIGNATURE(27), jint > FORMAT_NO_NOON_MIDNIGHT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(28), J2CPP_FIELD_SIGNATURE(28), local_ref< java::lang::String > > HOUR_MINUTE_24;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(29), J2CPP_FIELD_SIGNATURE(29), local_ref< java::lang::String > > MONTH_FORMAT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(30), J2CPP_FIELD_SIGNATURE(30), local_ref< java::lang::String > > ABBREV_MONTH_FORMAT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(31), J2CPP_FIELD_SIGNATURE(31), local_ref< java::lang::String > > NUMERIC_MONTH_FORMAT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(32), J2CPP_FIELD_SIGNATURE(32), local_ref< java::lang::String > > MONTH_DAY_FORMAT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(33), J2CPP_FIELD_SIGNATURE(33), local_ref< java::lang::String > > YEAR_FORMAT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(34), J2CPP_FIELD_SIGNATURE(34), local_ref< java::lang::String > > YEAR_FORMAT_TWO_DIGITS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(35), J2CPP_FIELD_SIGNATURE(35), local_ref< java::lang::String > > WEEKDAY_FORMAT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(36), J2CPP_FIELD_SIGNATURE(36), local_ref< java::lang::String > > ABBREV_WEEKDAY_FORMAT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(37), J2CPP_FIELD_SIGNATURE(37), local_ref< array<jint,1> > > sameYearTable;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(38), J2CPP_FIELD_SIGNATURE(38), local_ref< array<jint,1> > > sameMonthTable;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(39), J2CPP_FIELD_SIGNATURE(39), jint > LENGTH_LONG;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(40), J2CPP_FIELD_SIGNATURE(40), jint > LENGTH_MEDIUM;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(41), J2CPP_FIELD_SIGNATURE(41), jint > LENGTH_SHORT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(42), J2CPP_FIELD_SIGNATURE(42), jint > LENGTH_SHORTER;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(43), J2CPP_FIELD_SIGNATURE(43), jint > LENGTH_SHORTEST;
	}; //class DateUtils

} //namespace format
} //namespace text
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_FORMAT_DATEUTILS_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_FORMAT_DATEUTILS_HPP_IMPL
#define J2CPP_ANDROID_TEXT_FORMAT_DATEUTILS_HPP_IMPL

namespace j2cpp {



android::text::format::DateUtils::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::text::format::DateUtils::DateUtils()
: object<android::text::format::DateUtils>(
	call_new_object<
		android::text::format::DateUtils::J2CPP_CLASS_NAME,
		android::text::format::DateUtils::J2CPP_METHOD_NAME(0),
		android::text::format::DateUtils::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}


local_ref< java::lang::String > android::text::format::DateUtils::getDayOfWeekString(jint a0, jint a1)
{
	return call_static_method<
		android::text::format::DateUtils::J2CPP_CLASS_NAME,
		android::text::format::DateUtils::J2CPP_METHOD_NAME(1),
		android::text::format::DateUtils::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::String > >
	(a0, a1);
}

local_ref< java::lang::String > android::text::format::DateUtils::getAMPMString(jint a0)
{
	return call_static_method<
		android::text::format::DateUtils::J2CPP_CLASS_NAME,
		android::text::format::DateUtils::J2CPP_METHOD_NAME(2),
		android::text::format::DateUtils::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::String > >
	(a0);
}

local_ref< java::lang::String > android::text::format::DateUtils::getMonthString(jint a0, jint a1)
{
	return call_static_method<
		android::text::format::DateUtils::J2CPP_CLASS_NAME,
		android::text::format::DateUtils::J2CPP_METHOD_NAME(3),
		android::text::format::DateUtils::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::lang::String > >
	(a0, a1);
}

local_ref< java::lang::CharSequence > android::text::format::DateUtils::getRelativeTimeSpanString(jlong a0)
{
	return call_static_method<
		android::text::format::DateUtils::J2CPP_CLASS_NAME,
		android::text::format::DateUtils::J2CPP_METHOD_NAME(4),
		android::text::format::DateUtils::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::lang::CharSequence > >
	(a0);
}

local_ref< java::lang::CharSequence > android::text::format::DateUtils::getRelativeTimeSpanString(jlong a0, jlong a1, jlong a2)
{
	return call_static_method<
		android::text::format::DateUtils::J2CPP_CLASS_NAME,
		android::text::format::DateUtils::J2CPP_METHOD_NAME(5),
		android::text::format::DateUtils::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::lang::CharSequence > >
	(a0, a1, a2);
}

local_ref< java::lang::CharSequence > android::text::format::DateUtils::getRelativeTimeSpanString(jlong a0, jlong a1, jlong a2, jint a3)
{
	return call_static_method<
		android::text::format::DateUtils::J2CPP_CLASS_NAME,
		android::text::format::DateUtils::J2CPP_METHOD_NAME(6),
		android::text::format::DateUtils::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::lang::CharSequence > >
	(a0, a1, a2, a3);
}

local_ref< java::lang::CharSequence > android::text::format::DateUtils::getRelativeDateTimeString(local_ref< android::content::Context > const &a0, jlong a1, jlong a2, jlong a3, jint a4)
{
	return call_static_method<
		android::text::format::DateUtils::J2CPP_CLASS_NAME,
		android::text::format::DateUtils::J2CPP_METHOD_NAME(7),
		android::text::format::DateUtils::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::lang::CharSequence > >
	(a0, a1, a2, a3, a4);
}

local_ref< java::lang::String > android::text::format::DateUtils::formatElapsedTime(jlong a0)
{
	return call_static_method<
		android::text::format::DateUtils::J2CPP_CLASS_NAME,
		android::text::format::DateUtils::J2CPP_METHOD_NAME(8),
		android::text::format::DateUtils::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< java::lang::String > >
	(a0);
}

local_ref< java::lang::String > android::text::format::DateUtils::formatElapsedTime(local_ref< java::lang::StringBuilder > const &a0, jlong a1)
{
	return call_static_method<
		android::text::format::DateUtils::J2CPP_CLASS_NAME,
		android::text::format::DateUtils::J2CPP_METHOD_NAME(9),
		android::text::format::DateUtils::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< java::lang::String > >
	(a0, a1);
}

local_ref< java::lang::CharSequence > android::text::format::DateUtils::formatSameDayTime(jlong a0, jlong a1, jint a2, jint a3)
{
	return call_static_method<
		android::text::format::DateUtils::J2CPP_CLASS_NAME,
		android::text::format::DateUtils::J2CPP_METHOD_NAME(10),
		android::text::format::DateUtils::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< java::lang::CharSequence > >
	(a0, a1, a2, a3);
}

jboolean android::text::format::DateUtils::isToday(jlong a0)
{
	return call_static_method<
		android::text::format::DateUtils::J2CPP_CLASS_NAME,
		android::text::format::DateUtils::J2CPP_METHOD_NAME(11),
		android::text::format::DateUtils::J2CPP_METHOD_SIGNATURE(11), 
		jboolean >
	(a0);
}

local_ref< java::lang::String > android::text::format::DateUtils::formatDateRange(local_ref< android::content::Context > const &a0, jlong a1, jlong a2, jint a3)
{
	return call_static_method<
		android::text::format::DateUtils::J2CPP_CLASS_NAME,
		android::text::format::DateUtils::J2CPP_METHOD_NAME(12),
		android::text::format::DateUtils::J2CPP_METHOD_SIGNATURE(12), 
		local_ref< java::lang::String > >
	(a0, a1, a2, a3);
}

local_ref< java::util::Formatter > android::text::format::DateUtils::formatDateRange(local_ref< android::content::Context > const &a0, local_ref< java::util::Formatter > const &a1, jlong a2, jlong a3, jint a4)
{
	return call_static_method<
		android::text::format::DateUtils::J2CPP_CLASS_NAME,
		android::text::format::DateUtils::J2CPP_METHOD_NAME(13),
		android::text::format::DateUtils::J2CPP_METHOD_SIGNATURE(13), 
		local_ref< java::util::Formatter > >
	(a0, a1, a2, a3, a4);
}

local_ref< java::util::Formatter > android::text::format::DateUtils::formatDateRange(local_ref< android::content::Context > const &a0, local_ref< java::util::Formatter > const &a1, jlong a2, jlong a3, jint a4, local_ref< java::lang::String > const &a5)
{
	return call_static_method<
		android::text::format::DateUtils::J2CPP_CLASS_NAME,
		android::text::format::DateUtils::J2CPP_METHOD_NAME(14),
		android::text::format::DateUtils::J2CPP_METHOD_SIGNATURE(14), 
		local_ref< java::util::Formatter > >
	(a0, a1, a2, a3, a4, a5);
}

local_ref< java::lang::String > android::text::format::DateUtils::formatDateTime(local_ref< android::content::Context > const &a0, jlong a1, jint a2)
{
	return call_static_method<
		android::text::format::DateUtils::J2CPP_CLASS_NAME,
		android::text::format::DateUtils::J2CPP_METHOD_NAME(15),
		android::text::format::DateUtils::J2CPP_METHOD_SIGNATURE(15), 
		local_ref< java::lang::String > >
	(a0, a1, a2);
}

local_ref< java::lang::CharSequence > android::text::format::DateUtils::getRelativeTimeSpanString(local_ref< android::content::Context > const &a0, jlong a1, jboolean a2)
{
	return call_static_method<
		android::text::format::DateUtils::J2CPP_CLASS_NAME,
		android::text::format::DateUtils::J2CPP_METHOD_NAME(16),
		android::text::format::DateUtils::J2CPP_METHOD_SIGNATURE(16), 
		local_ref< java::lang::CharSequence > >
	(a0, a1, a2);
}

local_ref< java::lang::CharSequence > android::text::format::DateUtils::getRelativeTimeSpanString(local_ref< android::content::Context > const &a0, jlong a1)
{
	return call_static_method<
		android::text::format::DateUtils::J2CPP_CLASS_NAME,
		android::text::format::DateUtils::J2CPP_METHOD_NAME(17),
		android::text::format::DateUtils::J2CPP_METHOD_SIGNATURE(17), 
		local_ref< java::lang::CharSequence > >
	(a0, a1);
}



static_field<
	android::text::format::DateUtils::J2CPP_CLASS_NAME,
	android::text::format::DateUtils::J2CPP_FIELD_NAME(0),
	android::text::format::DateUtils::J2CPP_FIELD_SIGNATURE(0),
	jlong
> android::text::format::DateUtils::SECOND_IN_MILLIS;

static_field<
	android::text::format::DateUtils::J2CPP_CLASS_NAME,
	android::text::format::DateUtils::J2CPP_FIELD_NAME(1),
	android::text::format::DateUtils::J2CPP_FIELD_SIGNATURE(1),
	jlong
> android::text::format::DateUtils::MINUTE_IN_MILLIS;

static_field<
	android::text::format::DateUtils::J2CPP_CLASS_NAME,
	android::text::format::DateUtils::J2CPP_FIELD_NAME(2),
	android::text::format::DateUtils::J2CPP_FIELD_SIGNATURE(2),
	jlong
> android::text::format::DateUtils::HOUR_IN_MILLIS;

static_field<
	android::text::format::DateUtils::J2CPP_CLASS_NAME,
	android::text::format::DateUtils::J2CPP_FIELD_NAME(3),
	android::text::format::DateUtils::J2CPP_FIELD_SIGNATURE(3),
	jlong
> android::text::format::DateUtils::DAY_IN_MILLIS;

static_field<
	android::text::format::DateUtils::J2CPP_CLASS_NAME,
	android::text::format::DateUtils::J2CPP_FIELD_NAME(4),
	android::text::format::DateUtils::J2CPP_FIELD_SIGNATURE(4),
	jlong
> android::text::format::DateUtils::WEEK_IN_MILLIS;

static_field<
	android::text::format::DateUtils::J2CPP_CLASS_NAME,
	android::text::format::DateUtils::J2CPP_FIELD_NAME(5),
	android::text::format::DateUtils::J2CPP_FIELD_SIGNATURE(5),
	jlong
> android::text::format::DateUtils::YEAR_IN_MILLIS;

static_field<
	android::text::format::DateUtils::J2CPP_CLASS_NAME,
	android::text::format::DateUtils::J2CPP_FIELD_NAME(6),
	android::text::format::DateUtils::J2CPP_FIELD_SIGNATURE(6),
	jint
> android::text::format::DateUtils::FORMAT_SHOW_TIME;

static_field<
	android::text::format::DateUtils::J2CPP_CLASS_NAME,
	android::text::format::DateUtils::J2CPP_FIELD_NAME(7),
	android::text::format::DateUtils::J2CPP_FIELD_SIGNATURE(7),
	jint
> android::text::format::DateUtils::FORMAT_SHOW_WEEKDAY;

static_field<
	android::text::format::DateUtils::J2CPP_CLASS_NAME,
	android::text::format::DateUtils::J2CPP_FIELD_NAME(8),
	android::text::format::DateUtils::J2CPP_FIELD_SIGNATURE(8),
	jint
> android::text::format::DateUtils::FORMAT_SHOW_YEAR;

static_field<
	android::text::format::DateUtils::J2CPP_CLASS_NAME,
	android::text::format::DateUtils::J2CPP_FIELD_NAME(9),
	android::text::format::DateUtils::J2CPP_FIELD_SIGNATURE(9),
	jint
> android::text::format::DateUtils::FORMAT_NO_YEAR;

static_field<
	android::text::format::DateUtils::J2CPP_CLASS_NAME,
	android::text::format::DateUtils::J2CPP_FIELD_NAME(10),
	android::text::format::DateUtils::J2CPP_FIELD_SIGNATURE(10),
	jint
> android::text::format::DateUtils::FORMAT_SHOW_DATE;

static_field<
	android::text::format::DateUtils::J2CPP_CLASS_NAME,
	android::text::format::DateUtils::J2CPP_FIELD_NAME(11),
	android::text::format::DateUtils::J2CPP_FIELD_SIGNATURE(11),
	jint
> android::text::format::DateUtils::FORMAT_NO_MONTH_DAY;

static_field<
	android::text::format::DateUtils::J2CPP_CLASS_NAME,
	android::text::format::DateUtils::J2CPP_FIELD_NAME(12),
	android::text::format::DateUtils::J2CPP_FIELD_SIGNATURE(12),
	jint
> android::text::format::DateUtils::FORMAT_12HOUR;

static_field<
	android::text::format::DateUtils::J2CPP_CLASS_NAME,
	android::text::format::DateUtils::J2CPP_FIELD_NAME(13),
	android::text::format::DateUtils::J2CPP_FIELD_SIGNATURE(13),
	jint
> android::text::format::DateUtils::FORMAT_24HOUR;

static_field<
	android::text::format::DateUtils::J2CPP_CLASS_NAME,
	android::text::format::DateUtils::J2CPP_FIELD_NAME(14),
	android::text::format::DateUtils::J2CPP_FIELD_SIGNATURE(14),
	jint
> android::text::format::DateUtils::FORMAT_CAP_AMPM;

static_field<
	android::text::format::DateUtils::J2CPP_CLASS_NAME,
	android::text::format::DateUtils::J2CPP_FIELD_NAME(15),
	android::text::format::DateUtils::J2CPP_FIELD_SIGNATURE(15),
	jint
> android::text::format::DateUtils::FORMAT_NO_NOON;

static_field<
	android::text::format::DateUtils::J2CPP_CLASS_NAME,
	android::text::format::DateUtils::J2CPP_FIELD_NAME(16),
	android::text::format::DateUtils::J2CPP_FIELD_SIGNATURE(16),
	jint
> android::text::format::DateUtils::FORMAT_CAP_NOON;

static_field<
	android::text::format::DateUtils::J2CPP_CLASS_NAME,
	android::text::format::DateUtils::J2CPP_FIELD_NAME(17),
	android::text::format::DateUtils::J2CPP_FIELD_SIGNATURE(17),
	jint
> android::text::format::DateUtils::FORMAT_NO_MIDNIGHT;

static_field<
	android::text::format::DateUtils::J2CPP_CLASS_NAME,
	android::text::format::DateUtils::J2CPP_FIELD_NAME(18),
	android::text::format::DateUtils::J2CPP_FIELD_SIGNATURE(18),
	jint
> android::text::format::DateUtils::FORMAT_CAP_MIDNIGHT;

static_field<
	android::text::format::DateUtils::J2CPP_CLASS_NAME,
	android::text::format::DateUtils::J2CPP_FIELD_NAME(19),
	android::text::format::DateUtils::J2CPP_FIELD_SIGNATURE(19),
	jint
> android::text::format::DateUtils::FORMAT_UTC;

static_field<
	android::text::format::DateUtils::J2CPP_CLASS_NAME,
	android::text::format::DateUtils::J2CPP_FIELD_NAME(20),
	android::text::format::DateUtils::J2CPP_FIELD_SIGNATURE(20),
	jint
> android::text::format::DateUtils::FORMAT_ABBREV_TIME;

static_field<
	android::text::format::DateUtils::J2CPP_CLASS_NAME,
	android::text::format::DateUtils::J2CPP_FIELD_NAME(21),
	android::text::format::DateUtils::J2CPP_FIELD_SIGNATURE(21),
	jint
> android::text::format::DateUtils::FORMAT_ABBREV_WEEKDAY;

static_field<
	android::text::format::DateUtils::J2CPP_CLASS_NAME,
	android::text::format::DateUtils::J2CPP_FIELD_NAME(22),
	android::text::format::DateUtils::J2CPP_FIELD_SIGNATURE(22),
	jint
> android::text::format::DateUtils::FORMAT_ABBREV_MONTH;

static_field<
	android::text::format::DateUtils::J2CPP_CLASS_NAME,
	android::text::format::DateUtils::J2CPP_FIELD_NAME(23),
	android::text::format::DateUtils::J2CPP_FIELD_SIGNATURE(23),
	jint
> android::text::format::DateUtils::FORMAT_NUMERIC_DATE;

static_field<
	android::text::format::DateUtils::J2CPP_CLASS_NAME,
	android::text::format::DateUtils::J2CPP_FIELD_NAME(24),
	android::text::format::DateUtils::J2CPP_FIELD_SIGNATURE(24),
	jint
> android::text::format::DateUtils::FORMAT_ABBREV_RELATIVE;

static_field<
	android::text::format::DateUtils::J2CPP_CLASS_NAME,
	android::text::format::DateUtils::J2CPP_FIELD_NAME(25),
	android::text::format::DateUtils::J2CPP_FIELD_SIGNATURE(25),
	jint
> android::text::format::DateUtils::FORMAT_ABBREV_ALL;

static_field<
	android::text::format::DateUtils::J2CPP_CLASS_NAME,
	android::text::format::DateUtils::J2CPP_FIELD_NAME(26),
	android::text::format::DateUtils::J2CPP_FIELD_SIGNATURE(26),
	jint
> android::text::format::DateUtils::FORMAT_CAP_NOON_MIDNIGHT;

static_field<
	android::text::format::DateUtils::J2CPP_CLASS_NAME,
	android::text::format::DateUtils::J2CPP_FIELD_NAME(27),
	android::text::format::DateUtils::J2CPP_FIELD_SIGNATURE(27),
	jint
> android::text::format::DateUtils::FORMAT_NO_NOON_MIDNIGHT;

static_field<
	android::text::format::DateUtils::J2CPP_CLASS_NAME,
	android::text::format::DateUtils::J2CPP_FIELD_NAME(28),
	android::text::format::DateUtils::J2CPP_FIELD_SIGNATURE(28),
	local_ref< java::lang::String >
> android::text::format::DateUtils::HOUR_MINUTE_24;

static_field<
	android::text::format::DateUtils::J2CPP_CLASS_NAME,
	android::text::format::DateUtils::J2CPP_FIELD_NAME(29),
	android::text::format::DateUtils::J2CPP_FIELD_SIGNATURE(29),
	local_ref< java::lang::String >
> android::text::format::DateUtils::MONTH_FORMAT;

static_field<
	android::text::format::DateUtils::J2CPP_CLASS_NAME,
	android::text::format::DateUtils::J2CPP_FIELD_NAME(30),
	android::text::format::DateUtils::J2CPP_FIELD_SIGNATURE(30),
	local_ref< java::lang::String >
> android::text::format::DateUtils::ABBREV_MONTH_FORMAT;

static_field<
	android::text::format::DateUtils::J2CPP_CLASS_NAME,
	android::text::format::DateUtils::J2CPP_FIELD_NAME(31),
	android::text::format::DateUtils::J2CPP_FIELD_SIGNATURE(31),
	local_ref< java::lang::String >
> android::text::format::DateUtils::NUMERIC_MONTH_FORMAT;

static_field<
	android::text::format::DateUtils::J2CPP_CLASS_NAME,
	android::text::format::DateUtils::J2CPP_FIELD_NAME(32),
	android::text::format::DateUtils::J2CPP_FIELD_SIGNATURE(32),
	local_ref< java::lang::String >
> android::text::format::DateUtils::MONTH_DAY_FORMAT;

static_field<
	android::text::format::DateUtils::J2CPP_CLASS_NAME,
	android::text::format::DateUtils::J2CPP_FIELD_NAME(33),
	android::text::format::DateUtils::J2CPP_FIELD_SIGNATURE(33),
	local_ref< java::lang::String >
> android::text::format::DateUtils::YEAR_FORMAT;

static_field<
	android::text::format::DateUtils::J2CPP_CLASS_NAME,
	android::text::format::DateUtils::J2CPP_FIELD_NAME(34),
	android::text::format::DateUtils::J2CPP_FIELD_SIGNATURE(34),
	local_ref< java::lang::String >
> android::text::format::DateUtils::YEAR_FORMAT_TWO_DIGITS;

static_field<
	android::text::format::DateUtils::J2CPP_CLASS_NAME,
	android::text::format::DateUtils::J2CPP_FIELD_NAME(35),
	android::text::format::DateUtils::J2CPP_FIELD_SIGNATURE(35),
	local_ref< java::lang::String >
> android::text::format::DateUtils::WEEKDAY_FORMAT;

static_field<
	android::text::format::DateUtils::J2CPP_CLASS_NAME,
	android::text::format::DateUtils::J2CPP_FIELD_NAME(36),
	android::text::format::DateUtils::J2CPP_FIELD_SIGNATURE(36),
	local_ref< java::lang::String >
> android::text::format::DateUtils::ABBREV_WEEKDAY_FORMAT;

static_field<
	android::text::format::DateUtils::J2CPP_CLASS_NAME,
	android::text::format::DateUtils::J2CPP_FIELD_NAME(37),
	android::text::format::DateUtils::J2CPP_FIELD_SIGNATURE(37),
	local_ref< array<jint,1> >
> android::text::format::DateUtils::sameYearTable;

static_field<
	android::text::format::DateUtils::J2CPP_CLASS_NAME,
	android::text::format::DateUtils::J2CPP_FIELD_NAME(38),
	android::text::format::DateUtils::J2CPP_FIELD_SIGNATURE(38),
	local_ref< array<jint,1> >
> android::text::format::DateUtils::sameMonthTable;

static_field<
	android::text::format::DateUtils::J2CPP_CLASS_NAME,
	android::text::format::DateUtils::J2CPP_FIELD_NAME(39),
	android::text::format::DateUtils::J2CPP_FIELD_SIGNATURE(39),
	jint
> android::text::format::DateUtils::LENGTH_LONG;

static_field<
	android::text::format::DateUtils::J2CPP_CLASS_NAME,
	android::text::format::DateUtils::J2CPP_FIELD_NAME(40),
	android::text::format::DateUtils::J2CPP_FIELD_SIGNATURE(40),
	jint
> android::text::format::DateUtils::LENGTH_MEDIUM;

static_field<
	android::text::format::DateUtils::J2CPP_CLASS_NAME,
	android::text::format::DateUtils::J2CPP_FIELD_NAME(41),
	android::text::format::DateUtils::J2CPP_FIELD_SIGNATURE(41),
	jint
> android::text::format::DateUtils::LENGTH_SHORT;

static_field<
	android::text::format::DateUtils::J2CPP_CLASS_NAME,
	android::text::format::DateUtils::J2CPP_FIELD_NAME(42),
	android::text::format::DateUtils::J2CPP_FIELD_SIGNATURE(42),
	jint
> android::text::format::DateUtils::LENGTH_SHORTER;

static_field<
	android::text::format::DateUtils::J2CPP_CLASS_NAME,
	android::text::format::DateUtils::J2CPP_FIELD_NAME(43),
	android::text::format::DateUtils::J2CPP_FIELD_SIGNATURE(43),
	jint
> android::text::format::DateUtils::LENGTH_SHORTEST;


J2CPP_DEFINE_CLASS(android::text::format::DateUtils,"android/text/format/DateUtils")
J2CPP_DEFINE_METHOD(android::text::format::DateUtils,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::text::format::DateUtils,1,"getDayOfWeekString","(II)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::text::format::DateUtils,2,"getAMPMString","(I)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::text::format::DateUtils,3,"getMonthString","(II)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::text::format::DateUtils,4,"getRelativeTimeSpanString","(J)Ljava/lang/CharSequence;")
J2CPP_DEFINE_METHOD(android::text::format::DateUtils,5,"getRelativeTimeSpanString","(JJJ)Ljava/lang/CharSequence;")
J2CPP_DEFINE_METHOD(android::text::format::DateUtils,6,"getRelativeTimeSpanString","(JJJI)Ljava/lang/CharSequence;")
J2CPP_DEFINE_METHOD(android::text::format::DateUtils,7,"getRelativeDateTimeString","(Landroid/content/Context;JJJI)Ljava/lang/CharSequence;")
J2CPP_DEFINE_METHOD(android::text::format::DateUtils,8,"formatElapsedTime","(J)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::text::format::DateUtils,9,"formatElapsedTime","(Ljava/lang/StringBuilder;J)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::text::format::DateUtils,10,"formatSameDayTime","(JJII)Ljava/lang/CharSequence;")
J2CPP_DEFINE_METHOD(android::text::format::DateUtils,11,"isToday","(J)Z")
J2CPP_DEFINE_METHOD(android::text::format::DateUtils,12,"formatDateRange","(Landroid/content/Context;JJI)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::text::format::DateUtils,13,"formatDateRange","(Landroid/content/Context;Ljava/util/Formatter;JJI)Ljava/util/Formatter;")
J2CPP_DEFINE_METHOD(android::text::format::DateUtils,14,"formatDateRange","(Landroid/content/Context;Ljava/util/Formatter;JJILjava/lang/String;)Ljava/util/Formatter;")
J2CPP_DEFINE_METHOD(android::text::format::DateUtils,15,"formatDateTime","(Landroid/content/Context;JI)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::text::format::DateUtils,16,"getRelativeTimeSpanString","(Landroid/content/Context;JZ)Ljava/lang/CharSequence;")
J2CPP_DEFINE_METHOD(android::text::format::DateUtils,17,"getRelativeTimeSpanString","(Landroid/content/Context;J)Ljava/lang/CharSequence;")
J2CPP_DEFINE_METHOD(android::text::format::DateUtils,18,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::text::format::DateUtils,0,"SECOND_IN_MILLIS","J")
J2CPP_DEFINE_FIELD(android::text::format::DateUtils,1,"MINUTE_IN_MILLIS","J")
J2CPP_DEFINE_FIELD(android::text::format::DateUtils,2,"HOUR_IN_MILLIS","J")
J2CPP_DEFINE_FIELD(android::text::format::DateUtils,3,"DAY_IN_MILLIS","J")
J2CPP_DEFINE_FIELD(android::text::format::DateUtils,4,"WEEK_IN_MILLIS","J")
J2CPP_DEFINE_FIELD(android::text::format::DateUtils,5,"YEAR_IN_MILLIS","J")
J2CPP_DEFINE_FIELD(android::text::format::DateUtils,6,"FORMAT_SHOW_TIME","I")
J2CPP_DEFINE_FIELD(android::text::format::DateUtils,7,"FORMAT_SHOW_WEEKDAY","I")
J2CPP_DEFINE_FIELD(android::text::format::DateUtils,8,"FORMAT_SHOW_YEAR","I")
J2CPP_DEFINE_FIELD(android::text::format::DateUtils,9,"FORMAT_NO_YEAR","I")
J2CPP_DEFINE_FIELD(android::text::format::DateUtils,10,"FORMAT_SHOW_DATE","I")
J2CPP_DEFINE_FIELD(android::text::format::DateUtils,11,"FORMAT_NO_MONTH_DAY","I")
J2CPP_DEFINE_FIELD(android::text::format::DateUtils,12,"FORMAT_12HOUR","I")
J2CPP_DEFINE_FIELD(android::text::format::DateUtils,13,"FORMAT_24HOUR","I")
J2CPP_DEFINE_FIELD(android::text::format::DateUtils,14,"FORMAT_CAP_AMPM","I")
J2CPP_DEFINE_FIELD(android::text::format::DateUtils,15,"FORMAT_NO_NOON","I")
J2CPP_DEFINE_FIELD(android::text::format::DateUtils,16,"FORMAT_CAP_NOON","I")
J2CPP_DEFINE_FIELD(android::text::format::DateUtils,17,"FORMAT_NO_MIDNIGHT","I")
J2CPP_DEFINE_FIELD(android::text::format::DateUtils,18,"FORMAT_CAP_MIDNIGHT","I")
J2CPP_DEFINE_FIELD(android::text::format::DateUtils,19,"FORMAT_UTC","I")
J2CPP_DEFINE_FIELD(android::text::format::DateUtils,20,"FORMAT_ABBREV_TIME","I")
J2CPP_DEFINE_FIELD(android::text::format::DateUtils,21,"FORMAT_ABBREV_WEEKDAY","I")
J2CPP_DEFINE_FIELD(android::text::format::DateUtils,22,"FORMAT_ABBREV_MONTH","I")
J2CPP_DEFINE_FIELD(android::text::format::DateUtils,23,"FORMAT_NUMERIC_DATE","I")
J2CPP_DEFINE_FIELD(android::text::format::DateUtils,24,"FORMAT_ABBREV_RELATIVE","I")
J2CPP_DEFINE_FIELD(android::text::format::DateUtils,25,"FORMAT_ABBREV_ALL","I")
J2CPP_DEFINE_FIELD(android::text::format::DateUtils,26,"FORMAT_CAP_NOON_MIDNIGHT","I")
J2CPP_DEFINE_FIELD(android::text::format::DateUtils,27,"FORMAT_NO_NOON_MIDNIGHT","I")
J2CPP_DEFINE_FIELD(android::text::format::DateUtils,28,"HOUR_MINUTE_24","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::text::format::DateUtils,29,"MONTH_FORMAT","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::text::format::DateUtils,30,"ABBREV_MONTH_FORMAT","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::text::format::DateUtils,31,"NUMERIC_MONTH_FORMAT","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::text::format::DateUtils,32,"MONTH_DAY_FORMAT","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::text::format::DateUtils,33,"YEAR_FORMAT","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::text::format::DateUtils,34,"YEAR_FORMAT_TWO_DIGITS","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::text::format::DateUtils,35,"WEEKDAY_FORMAT","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::text::format::DateUtils,36,"ABBREV_WEEKDAY_FORMAT","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::text::format::DateUtils,37,"sameYearTable","[I")
J2CPP_DEFINE_FIELD(android::text::format::DateUtils,38,"sameMonthTable","[I")
J2CPP_DEFINE_FIELD(android::text::format::DateUtils,39,"LENGTH_LONG","I")
J2CPP_DEFINE_FIELD(android::text::format::DateUtils,40,"LENGTH_MEDIUM","I")
J2CPP_DEFINE_FIELD(android::text::format::DateUtils,41,"LENGTH_SHORT","I")
J2CPP_DEFINE_FIELD(android::text::format::DateUtils,42,"LENGTH_SHORTER","I")
J2CPP_DEFINE_FIELD(android::text::format::DateUtils,43,"LENGTH_SHORTEST","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_FORMAT_DATEUTILS_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
