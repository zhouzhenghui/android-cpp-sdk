/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.content.pm.ActivityInfo
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_PM_ACTIVITYINFO_HPP_DECL
#define J2CPP_ANDROID_CONTENT_PM_ACTIVITYINFO_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace android { namespace content { namespace pm { class ComponentInfo; } } } }
namespace j2cpp { namespace android { namespace content { namespace pm { class PackageItemInfo; } } } }
namespace j2cpp { namespace android { namespace util { class Printer; } } }
namespace j2cpp { namespace android { namespace os { class Parcel; } } }
namespace j2cpp { namespace android { namespace os { class Parcelable; } } }
namespace j2cpp { namespace android { namespace os { namespace Parcelable_ { class Creator; } } } }


#include <android/content/pm/ComponentInfo.hpp>
#include <android/content/pm/PackageItemInfo.hpp>
#include <android/os/Parcel.hpp>
#include <android/os/Parcelable.hpp>
#include <android/util/Printer.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace content { namespace pm {

	class ActivityInfo;
	class ActivityInfo
		: public object<ActivityInfo>
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

		explicit ActivityInfo(jobject jobj)
		: object<ActivityInfo>(jobj)
		, theme(jobj)
		, launchMode(jobj)
		, permission(jobj)
		, taskAffinity(jobj)
		, targetActivity(jobj)
		, flags(jobj)
		, screenOrientation(jobj)
		, configChanges(jobj)
		, softInputMode(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::content::pm::ComponentInfo>() const;
		operator local_ref<android::content::pm::PackageItemInfo>() const;
		operator local_ref<android::os::Parcelable>() const;


		ActivityInfo();
		ActivityInfo(local_ref< android::content::pm::ActivityInfo > const&);
		jint getThemeResource();
		void dump(local_ref< android::util::Printer >  const&, local_ref< java::lang::String >  const&);
		local_ref< java::lang::String > toString();
		jint describeContents();
		void writeToParcel(local_ref< android::os::Parcel >  const&, jint);

		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > theme;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > LAUNCH_MULTIPLE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jint > LAUNCH_SINGLE_TOP;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), jint > LAUNCH_SINGLE_TASK;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), jint > LAUNCH_SINGLE_INSTANCE;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), jint > launchMode;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), local_ref< java::lang::String > > permission;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), local_ref< java::lang::String > > taskAffinity;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), local_ref< java::lang::String > > targetActivity;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(9), J2CPP_FIELD_SIGNATURE(9), jint > FLAG_MULTIPROCESS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(10), J2CPP_FIELD_SIGNATURE(10), jint > FLAG_FINISH_ON_TASK_LAUNCH;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(11), J2CPP_FIELD_SIGNATURE(11), jint > FLAG_CLEAR_TASK_ON_LAUNCH;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(12), J2CPP_FIELD_SIGNATURE(12), jint > FLAG_ALWAYS_RETAIN_TASK_STATE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(13), J2CPP_FIELD_SIGNATURE(13), jint > FLAG_STATE_NOT_NEEDED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(14), J2CPP_FIELD_SIGNATURE(14), jint > FLAG_EXCLUDE_FROM_RECENTS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(15), J2CPP_FIELD_SIGNATURE(15), jint > FLAG_ALLOW_TASK_REPARENTING;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(16), J2CPP_FIELD_SIGNATURE(16), jint > FLAG_NO_HISTORY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(17), J2CPP_FIELD_SIGNATURE(17), jint > FLAG_FINISH_ON_CLOSE_SYSTEM_DIALOGS;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(18), J2CPP_FIELD_SIGNATURE(18), jint > flags;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(19), J2CPP_FIELD_SIGNATURE(19), jint > SCREEN_ORIENTATION_UNSPECIFIED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(20), J2CPP_FIELD_SIGNATURE(20), jint > SCREEN_ORIENTATION_LANDSCAPE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(21), J2CPP_FIELD_SIGNATURE(21), jint > SCREEN_ORIENTATION_PORTRAIT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(22), J2CPP_FIELD_SIGNATURE(22), jint > SCREEN_ORIENTATION_USER;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(23), J2CPP_FIELD_SIGNATURE(23), jint > SCREEN_ORIENTATION_BEHIND;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(24), J2CPP_FIELD_SIGNATURE(24), jint > SCREEN_ORIENTATION_SENSOR;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(25), J2CPP_FIELD_SIGNATURE(25), jint > SCREEN_ORIENTATION_NOSENSOR;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(26), J2CPP_FIELD_SIGNATURE(26), jint > screenOrientation;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(27), J2CPP_FIELD_SIGNATURE(27), jint > CONFIG_MCC;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(28), J2CPP_FIELD_SIGNATURE(28), jint > CONFIG_MNC;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(29), J2CPP_FIELD_SIGNATURE(29), jint > CONFIG_LOCALE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(30), J2CPP_FIELD_SIGNATURE(30), jint > CONFIG_TOUCHSCREEN;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(31), J2CPP_FIELD_SIGNATURE(31), jint > CONFIG_KEYBOARD;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(32), J2CPP_FIELD_SIGNATURE(32), jint > CONFIG_KEYBOARD_HIDDEN;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(33), J2CPP_FIELD_SIGNATURE(33), jint > CONFIG_NAVIGATION;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(34), J2CPP_FIELD_SIGNATURE(34), jint > CONFIG_ORIENTATION;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(35), J2CPP_FIELD_SIGNATURE(35), jint > CONFIG_SCREEN_LAYOUT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(36), J2CPP_FIELD_SIGNATURE(36), jint > CONFIG_FONT_SCALE;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(37), J2CPP_FIELD_SIGNATURE(37), jint > configChanges;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(38), J2CPP_FIELD_SIGNATURE(38), jint > softInputMode;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(39), J2CPP_FIELD_SIGNATURE(39), local_ref< android::os::Parcelable_::Creator > > CREATOR;
	}; //class ActivityInfo

} //namespace pm
} //namespace content
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_PM_ACTIVITYINFO_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_PM_ACTIVITYINFO_HPP_IMPL
#define J2CPP_ANDROID_CONTENT_PM_ACTIVITYINFO_HPP_IMPL

namespace j2cpp {



android::content::pm::ActivityInfo::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::content::pm::ActivityInfo::operator local_ref<android::content::pm::ComponentInfo>() const
{
	return local_ref<android::content::pm::ComponentInfo>(get_jobject());
}

android::content::pm::ActivityInfo::operator local_ref<android::content::pm::PackageItemInfo>() const
{
	return local_ref<android::content::pm::PackageItemInfo>(get_jobject());
}

android::content::pm::ActivityInfo::operator local_ref<android::os::Parcelable>() const
{
	return local_ref<android::os::Parcelable>(get_jobject());
}


android::content::pm::ActivityInfo::ActivityInfo()
: object<android::content::pm::ActivityInfo>(
	call_new_object<
		android::content::pm::ActivityInfo::J2CPP_CLASS_NAME,
		android::content::pm::ActivityInfo::J2CPP_METHOD_NAME(0),
		android::content::pm::ActivityInfo::J2CPP_METHOD_SIGNATURE(0)
	>()
)
, theme(get_jobject())
, launchMode(get_jobject())
, permission(get_jobject())
, taskAffinity(get_jobject())
, targetActivity(get_jobject())
, flags(get_jobject())
, screenOrientation(get_jobject())
, configChanges(get_jobject())
, softInputMode(get_jobject())
{
}



android::content::pm::ActivityInfo::ActivityInfo(local_ref< android::content::pm::ActivityInfo > const &a0)
: object<android::content::pm::ActivityInfo>(
	call_new_object<
		android::content::pm::ActivityInfo::J2CPP_CLASS_NAME,
		android::content::pm::ActivityInfo::J2CPP_METHOD_NAME(1),
		android::content::pm::ActivityInfo::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
, theme(get_jobject())
, launchMode(get_jobject())
, permission(get_jobject())
, taskAffinity(get_jobject())
, targetActivity(get_jobject())
, flags(get_jobject())
, screenOrientation(get_jobject())
, configChanges(get_jobject())
, softInputMode(get_jobject())
{
}


jint android::content::pm::ActivityInfo::getThemeResource()
{
	return call_method<
		android::content::pm::ActivityInfo::J2CPP_CLASS_NAME,
		android::content::pm::ActivityInfo::J2CPP_METHOD_NAME(2),
		android::content::pm::ActivityInfo::J2CPP_METHOD_SIGNATURE(2), 
		jint
	>(get_jobject());
}

void android::content::pm::ActivityInfo::dump(local_ref< android::util::Printer > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		android::content::pm::ActivityInfo::J2CPP_CLASS_NAME,
		android::content::pm::ActivityInfo::J2CPP_METHOD_NAME(3),
		android::content::pm::ActivityInfo::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0, a1);
}

local_ref< java::lang::String > android::content::pm::ActivityInfo::toString()
{
	return call_method<
		android::content::pm::ActivityInfo::J2CPP_CLASS_NAME,
		android::content::pm::ActivityInfo::J2CPP_METHOD_NAME(4),
		android::content::pm::ActivityInfo::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::lang::String >
	>(get_jobject());
}

jint android::content::pm::ActivityInfo::describeContents()
{
	return call_method<
		android::content::pm::ActivityInfo::J2CPP_CLASS_NAME,
		android::content::pm::ActivityInfo::J2CPP_METHOD_NAME(5),
		android::content::pm::ActivityInfo::J2CPP_METHOD_SIGNATURE(5), 
		jint
	>(get_jobject());
}

void android::content::pm::ActivityInfo::writeToParcel(local_ref< android::os::Parcel > const &a0, jint a1)
{
	return call_method<
		android::content::pm::ActivityInfo::J2CPP_CLASS_NAME,
		android::content::pm::ActivityInfo::J2CPP_METHOD_NAME(6),
		android::content::pm::ActivityInfo::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject(), a0, a1);
}



static_field<
	android::content::pm::ActivityInfo::J2CPP_CLASS_NAME,
	android::content::pm::ActivityInfo::J2CPP_FIELD_NAME(1),
	android::content::pm::ActivityInfo::J2CPP_FIELD_SIGNATURE(1),
	jint
> android::content::pm::ActivityInfo::LAUNCH_MULTIPLE;

static_field<
	android::content::pm::ActivityInfo::J2CPP_CLASS_NAME,
	android::content::pm::ActivityInfo::J2CPP_FIELD_NAME(2),
	android::content::pm::ActivityInfo::J2CPP_FIELD_SIGNATURE(2),
	jint
> android::content::pm::ActivityInfo::LAUNCH_SINGLE_TOP;

static_field<
	android::content::pm::ActivityInfo::J2CPP_CLASS_NAME,
	android::content::pm::ActivityInfo::J2CPP_FIELD_NAME(3),
	android::content::pm::ActivityInfo::J2CPP_FIELD_SIGNATURE(3),
	jint
> android::content::pm::ActivityInfo::LAUNCH_SINGLE_TASK;

static_field<
	android::content::pm::ActivityInfo::J2CPP_CLASS_NAME,
	android::content::pm::ActivityInfo::J2CPP_FIELD_NAME(4),
	android::content::pm::ActivityInfo::J2CPP_FIELD_SIGNATURE(4),
	jint
> android::content::pm::ActivityInfo::LAUNCH_SINGLE_INSTANCE;

static_field<
	android::content::pm::ActivityInfo::J2CPP_CLASS_NAME,
	android::content::pm::ActivityInfo::J2CPP_FIELD_NAME(9),
	android::content::pm::ActivityInfo::J2CPP_FIELD_SIGNATURE(9),
	jint
> android::content::pm::ActivityInfo::FLAG_MULTIPROCESS;

static_field<
	android::content::pm::ActivityInfo::J2CPP_CLASS_NAME,
	android::content::pm::ActivityInfo::J2CPP_FIELD_NAME(10),
	android::content::pm::ActivityInfo::J2CPP_FIELD_SIGNATURE(10),
	jint
> android::content::pm::ActivityInfo::FLAG_FINISH_ON_TASK_LAUNCH;

static_field<
	android::content::pm::ActivityInfo::J2CPP_CLASS_NAME,
	android::content::pm::ActivityInfo::J2CPP_FIELD_NAME(11),
	android::content::pm::ActivityInfo::J2CPP_FIELD_SIGNATURE(11),
	jint
> android::content::pm::ActivityInfo::FLAG_CLEAR_TASK_ON_LAUNCH;

static_field<
	android::content::pm::ActivityInfo::J2CPP_CLASS_NAME,
	android::content::pm::ActivityInfo::J2CPP_FIELD_NAME(12),
	android::content::pm::ActivityInfo::J2CPP_FIELD_SIGNATURE(12),
	jint
> android::content::pm::ActivityInfo::FLAG_ALWAYS_RETAIN_TASK_STATE;

static_field<
	android::content::pm::ActivityInfo::J2CPP_CLASS_NAME,
	android::content::pm::ActivityInfo::J2CPP_FIELD_NAME(13),
	android::content::pm::ActivityInfo::J2CPP_FIELD_SIGNATURE(13),
	jint
> android::content::pm::ActivityInfo::FLAG_STATE_NOT_NEEDED;

static_field<
	android::content::pm::ActivityInfo::J2CPP_CLASS_NAME,
	android::content::pm::ActivityInfo::J2CPP_FIELD_NAME(14),
	android::content::pm::ActivityInfo::J2CPP_FIELD_SIGNATURE(14),
	jint
> android::content::pm::ActivityInfo::FLAG_EXCLUDE_FROM_RECENTS;

static_field<
	android::content::pm::ActivityInfo::J2CPP_CLASS_NAME,
	android::content::pm::ActivityInfo::J2CPP_FIELD_NAME(15),
	android::content::pm::ActivityInfo::J2CPP_FIELD_SIGNATURE(15),
	jint
> android::content::pm::ActivityInfo::FLAG_ALLOW_TASK_REPARENTING;

static_field<
	android::content::pm::ActivityInfo::J2CPP_CLASS_NAME,
	android::content::pm::ActivityInfo::J2CPP_FIELD_NAME(16),
	android::content::pm::ActivityInfo::J2CPP_FIELD_SIGNATURE(16),
	jint
> android::content::pm::ActivityInfo::FLAG_NO_HISTORY;

static_field<
	android::content::pm::ActivityInfo::J2CPP_CLASS_NAME,
	android::content::pm::ActivityInfo::J2CPP_FIELD_NAME(17),
	android::content::pm::ActivityInfo::J2CPP_FIELD_SIGNATURE(17),
	jint
> android::content::pm::ActivityInfo::FLAG_FINISH_ON_CLOSE_SYSTEM_DIALOGS;

static_field<
	android::content::pm::ActivityInfo::J2CPP_CLASS_NAME,
	android::content::pm::ActivityInfo::J2CPP_FIELD_NAME(19),
	android::content::pm::ActivityInfo::J2CPP_FIELD_SIGNATURE(19),
	jint
> android::content::pm::ActivityInfo::SCREEN_ORIENTATION_UNSPECIFIED;

static_field<
	android::content::pm::ActivityInfo::J2CPP_CLASS_NAME,
	android::content::pm::ActivityInfo::J2CPP_FIELD_NAME(20),
	android::content::pm::ActivityInfo::J2CPP_FIELD_SIGNATURE(20),
	jint
> android::content::pm::ActivityInfo::SCREEN_ORIENTATION_LANDSCAPE;

static_field<
	android::content::pm::ActivityInfo::J2CPP_CLASS_NAME,
	android::content::pm::ActivityInfo::J2CPP_FIELD_NAME(21),
	android::content::pm::ActivityInfo::J2CPP_FIELD_SIGNATURE(21),
	jint
> android::content::pm::ActivityInfo::SCREEN_ORIENTATION_PORTRAIT;

static_field<
	android::content::pm::ActivityInfo::J2CPP_CLASS_NAME,
	android::content::pm::ActivityInfo::J2CPP_FIELD_NAME(22),
	android::content::pm::ActivityInfo::J2CPP_FIELD_SIGNATURE(22),
	jint
> android::content::pm::ActivityInfo::SCREEN_ORIENTATION_USER;

static_field<
	android::content::pm::ActivityInfo::J2CPP_CLASS_NAME,
	android::content::pm::ActivityInfo::J2CPP_FIELD_NAME(23),
	android::content::pm::ActivityInfo::J2CPP_FIELD_SIGNATURE(23),
	jint
> android::content::pm::ActivityInfo::SCREEN_ORIENTATION_BEHIND;

static_field<
	android::content::pm::ActivityInfo::J2CPP_CLASS_NAME,
	android::content::pm::ActivityInfo::J2CPP_FIELD_NAME(24),
	android::content::pm::ActivityInfo::J2CPP_FIELD_SIGNATURE(24),
	jint
> android::content::pm::ActivityInfo::SCREEN_ORIENTATION_SENSOR;

static_field<
	android::content::pm::ActivityInfo::J2CPP_CLASS_NAME,
	android::content::pm::ActivityInfo::J2CPP_FIELD_NAME(25),
	android::content::pm::ActivityInfo::J2CPP_FIELD_SIGNATURE(25),
	jint
> android::content::pm::ActivityInfo::SCREEN_ORIENTATION_NOSENSOR;

static_field<
	android::content::pm::ActivityInfo::J2CPP_CLASS_NAME,
	android::content::pm::ActivityInfo::J2CPP_FIELD_NAME(27),
	android::content::pm::ActivityInfo::J2CPP_FIELD_SIGNATURE(27),
	jint
> android::content::pm::ActivityInfo::CONFIG_MCC;

static_field<
	android::content::pm::ActivityInfo::J2CPP_CLASS_NAME,
	android::content::pm::ActivityInfo::J2CPP_FIELD_NAME(28),
	android::content::pm::ActivityInfo::J2CPP_FIELD_SIGNATURE(28),
	jint
> android::content::pm::ActivityInfo::CONFIG_MNC;

static_field<
	android::content::pm::ActivityInfo::J2CPP_CLASS_NAME,
	android::content::pm::ActivityInfo::J2CPP_FIELD_NAME(29),
	android::content::pm::ActivityInfo::J2CPP_FIELD_SIGNATURE(29),
	jint
> android::content::pm::ActivityInfo::CONFIG_LOCALE;

static_field<
	android::content::pm::ActivityInfo::J2CPP_CLASS_NAME,
	android::content::pm::ActivityInfo::J2CPP_FIELD_NAME(30),
	android::content::pm::ActivityInfo::J2CPP_FIELD_SIGNATURE(30),
	jint
> android::content::pm::ActivityInfo::CONFIG_TOUCHSCREEN;

static_field<
	android::content::pm::ActivityInfo::J2CPP_CLASS_NAME,
	android::content::pm::ActivityInfo::J2CPP_FIELD_NAME(31),
	android::content::pm::ActivityInfo::J2CPP_FIELD_SIGNATURE(31),
	jint
> android::content::pm::ActivityInfo::CONFIG_KEYBOARD;

static_field<
	android::content::pm::ActivityInfo::J2CPP_CLASS_NAME,
	android::content::pm::ActivityInfo::J2CPP_FIELD_NAME(32),
	android::content::pm::ActivityInfo::J2CPP_FIELD_SIGNATURE(32),
	jint
> android::content::pm::ActivityInfo::CONFIG_KEYBOARD_HIDDEN;

static_field<
	android::content::pm::ActivityInfo::J2CPP_CLASS_NAME,
	android::content::pm::ActivityInfo::J2CPP_FIELD_NAME(33),
	android::content::pm::ActivityInfo::J2CPP_FIELD_SIGNATURE(33),
	jint
> android::content::pm::ActivityInfo::CONFIG_NAVIGATION;

static_field<
	android::content::pm::ActivityInfo::J2CPP_CLASS_NAME,
	android::content::pm::ActivityInfo::J2CPP_FIELD_NAME(34),
	android::content::pm::ActivityInfo::J2CPP_FIELD_SIGNATURE(34),
	jint
> android::content::pm::ActivityInfo::CONFIG_ORIENTATION;

static_field<
	android::content::pm::ActivityInfo::J2CPP_CLASS_NAME,
	android::content::pm::ActivityInfo::J2CPP_FIELD_NAME(35),
	android::content::pm::ActivityInfo::J2CPP_FIELD_SIGNATURE(35),
	jint
> android::content::pm::ActivityInfo::CONFIG_SCREEN_LAYOUT;

static_field<
	android::content::pm::ActivityInfo::J2CPP_CLASS_NAME,
	android::content::pm::ActivityInfo::J2CPP_FIELD_NAME(36),
	android::content::pm::ActivityInfo::J2CPP_FIELD_SIGNATURE(36),
	jint
> android::content::pm::ActivityInfo::CONFIG_FONT_SCALE;

static_field<
	android::content::pm::ActivityInfo::J2CPP_CLASS_NAME,
	android::content::pm::ActivityInfo::J2CPP_FIELD_NAME(39),
	android::content::pm::ActivityInfo::J2CPP_FIELD_SIGNATURE(39),
	local_ref< android::os::Parcelable_::Creator >
> android::content::pm::ActivityInfo::CREATOR;


J2CPP_DEFINE_CLASS(android::content::pm::ActivityInfo,"android/content/pm/ActivityInfo")
J2CPP_DEFINE_METHOD(android::content::pm::ActivityInfo,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::content::pm::ActivityInfo,1,"<init>","(Landroid/content/pm/ActivityInfo;)V")
J2CPP_DEFINE_METHOD(android::content::pm::ActivityInfo,2,"getThemeResource","()I")
J2CPP_DEFINE_METHOD(android::content::pm::ActivityInfo,3,"dump","(Landroid/util/Printer;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::content::pm::ActivityInfo,4,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::content::pm::ActivityInfo,5,"describeContents","()I")
J2CPP_DEFINE_METHOD(android::content::pm::ActivityInfo,6,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_METHOD(android::content::pm::ActivityInfo,7,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::content::pm::ActivityInfo,0,"theme","I")
J2CPP_DEFINE_FIELD(android::content::pm::ActivityInfo,1,"LAUNCH_MULTIPLE","I")
J2CPP_DEFINE_FIELD(android::content::pm::ActivityInfo,2,"LAUNCH_SINGLE_TOP","I")
J2CPP_DEFINE_FIELD(android::content::pm::ActivityInfo,3,"LAUNCH_SINGLE_TASK","I")
J2CPP_DEFINE_FIELD(android::content::pm::ActivityInfo,4,"LAUNCH_SINGLE_INSTANCE","I")
J2CPP_DEFINE_FIELD(android::content::pm::ActivityInfo,5,"launchMode","I")
J2CPP_DEFINE_FIELD(android::content::pm::ActivityInfo,6,"permission","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::content::pm::ActivityInfo,7,"taskAffinity","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::content::pm::ActivityInfo,8,"targetActivity","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::content::pm::ActivityInfo,9,"FLAG_MULTIPROCESS","I")
J2CPP_DEFINE_FIELD(android::content::pm::ActivityInfo,10,"FLAG_FINISH_ON_TASK_LAUNCH","I")
J2CPP_DEFINE_FIELD(android::content::pm::ActivityInfo,11,"FLAG_CLEAR_TASK_ON_LAUNCH","I")
J2CPP_DEFINE_FIELD(android::content::pm::ActivityInfo,12,"FLAG_ALWAYS_RETAIN_TASK_STATE","I")
J2CPP_DEFINE_FIELD(android::content::pm::ActivityInfo,13,"FLAG_STATE_NOT_NEEDED","I")
J2CPP_DEFINE_FIELD(android::content::pm::ActivityInfo,14,"FLAG_EXCLUDE_FROM_RECENTS","I")
J2CPP_DEFINE_FIELD(android::content::pm::ActivityInfo,15,"FLAG_ALLOW_TASK_REPARENTING","I")
J2CPP_DEFINE_FIELD(android::content::pm::ActivityInfo,16,"FLAG_NO_HISTORY","I")
J2CPP_DEFINE_FIELD(android::content::pm::ActivityInfo,17,"FLAG_FINISH_ON_CLOSE_SYSTEM_DIALOGS","I")
J2CPP_DEFINE_FIELD(android::content::pm::ActivityInfo,18,"flags","I")
J2CPP_DEFINE_FIELD(android::content::pm::ActivityInfo,19,"SCREEN_ORIENTATION_UNSPECIFIED","I")
J2CPP_DEFINE_FIELD(android::content::pm::ActivityInfo,20,"SCREEN_ORIENTATION_LANDSCAPE","I")
J2CPP_DEFINE_FIELD(android::content::pm::ActivityInfo,21,"SCREEN_ORIENTATION_PORTRAIT","I")
J2CPP_DEFINE_FIELD(android::content::pm::ActivityInfo,22,"SCREEN_ORIENTATION_USER","I")
J2CPP_DEFINE_FIELD(android::content::pm::ActivityInfo,23,"SCREEN_ORIENTATION_BEHIND","I")
J2CPP_DEFINE_FIELD(android::content::pm::ActivityInfo,24,"SCREEN_ORIENTATION_SENSOR","I")
J2CPP_DEFINE_FIELD(android::content::pm::ActivityInfo,25,"SCREEN_ORIENTATION_NOSENSOR","I")
J2CPP_DEFINE_FIELD(android::content::pm::ActivityInfo,26,"screenOrientation","I")
J2CPP_DEFINE_FIELD(android::content::pm::ActivityInfo,27,"CONFIG_MCC","I")
J2CPP_DEFINE_FIELD(android::content::pm::ActivityInfo,28,"CONFIG_MNC","I")
J2CPP_DEFINE_FIELD(android::content::pm::ActivityInfo,29,"CONFIG_LOCALE","I")
J2CPP_DEFINE_FIELD(android::content::pm::ActivityInfo,30,"CONFIG_TOUCHSCREEN","I")
J2CPP_DEFINE_FIELD(android::content::pm::ActivityInfo,31,"CONFIG_KEYBOARD","I")
J2CPP_DEFINE_FIELD(android::content::pm::ActivityInfo,32,"CONFIG_KEYBOARD_HIDDEN","I")
J2CPP_DEFINE_FIELD(android::content::pm::ActivityInfo,33,"CONFIG_NAVIGATION","I")
J2CPP_DEFINE_FIELD(android::content::pm::ActivityInfo,34,"CONFIG_ORIENTATION","I")
J2CPP_DEFINE_FIELD(android::content::pm::ActivityInfo,35,"CONFIG_SCREEN_LAYOUT","I")
J2CPP_DEFINE_FIELD(android::content::pm::ActivityInfo,36,"CONFIG_FONT_SCALE","I")
J2CPP_DEFINE_FIELD(android::content::pm::ActivityInfo,37,"configChanges","I")
J2CPP_DEFINE_FIELD(android::content::pm::ActivityInfo,38,"softInputMode","I")
J2CPP_DEFINE_FIELD(android::content::pm::ActivityInfo,39,"CREATOR","Landroid/os/Parcelable$Creator;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_PM_ACTIVITYINFO_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
