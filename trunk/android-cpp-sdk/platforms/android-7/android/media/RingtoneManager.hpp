/*================================================================================
  code generated by: java2cpp
  class: android.media.RingtoneManager
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_MEDIA_RINGTONEMANAGER_HPP_DECL
#define J2CPP_ANDROID_MEDIA_RINGTONEMANAGER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace android { namespace net { class Uri; } } }
namespace j2cpp { namespace android { namespace app { class Activity; } } }
namespace j2cpp { namespace android { namespace database { class Cursor; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace media { class Ringtone; } } }


#include <android/app/Activity.hpp>
#include <android/content/Context.hpp>
#include <android/database/Cursor.hpp>
#include <android/media/Ringtone.hpp>
#include <android/net/Uri.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace media {

	class RingtoneManager;
	class RingtoneManager
		: public cpp_object<RingtoneManager>
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

		explicit RingtoneManager(jobject jobj)
		: cpp_object<RingtoneManager>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		RingtoneManager(local_ref< android::app::Activity > const&);
		RingtoneManager(local_ref< android::content::Context > const&);
		void setType(cpp_int const&);
		cpp_int inferStreamType();
		void setStopPreviousRingtone(cpp_boolean const&);
		cpp_boolean getStopPreviousRingtone();
		void stopPreviousRingtone();
		cpp_boolean getIncludeDrm();
		void setIncludeDrm(cpp_boolean const&);
		local_ref< android::database::Cursor > getCursor();
		local_ref< android::media::Ringtone > getRingtone(cpp_int const&);
		local_ref< android::net::Uri > getRingtoneUri(cpp_int const&);
		cpp_int getRingtonePosition(local_ref< android::net::Uri > const&);
		static local_ref< android::net::Uri > getValidRingtoneUri(local_ref< android::content::Context > const&);
		static local_ref< android::media::Ringtone > getRingtone(local_ref< android::content::Context > const&, local_ref< android::net::Uri > const&);
		static local_ref< android::net::Uri > getActualDefaultRingtoneUri(local_ref< android::content::Context > const&, cpp_int const&);
		static void setActualDefaultRingtoneUri(local_ref< android::content::Context > const&, cpp_int const&, local_ref< android::net::Uri > const&);
		static cpp_boolean isDefault(local_ref< android::net::Uri > const&);
		static cpp_int getDefaultType(local_ref< android::net::Uri > const&);
		static local_ref< android::net::Uri > getDefaultUri(cpp_int const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_int > TYPE_RINGTONE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), cpp_int > TYPE_NOTIFICATION;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), cpp_int > TYPE_ALARM;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), cpp_int > TYPE_ALL;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), local_ref< java::lang::String > > ACTION_RINGTONE_PICKER;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), local_ref< java::lang::String > > EXTRA_RINGTONE_SHOW_DEFAULT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), local_ref< java::lang::String > > EXTRA_RINGTONE_SHOW_SILENT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), local_ref< java::lang::String > > EXTRA_RINGTONE_INCLUDE_DRM;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), local_ref< java::lang::String > > EXTRA_RINGTONE_EXISTING_URI;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(9), J2CPP_FIELD_SIGNATURE(9), local_ref< java::lang::String > > EXTRA_RINGTONE_DEFAULT_URI;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(10), J2CPP_FIELD_SIGNATURE(10), local_ref< java::lang::String > > EXTRA_RINGTONE_TYPE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(11), J2CPP_FIELD_SIGNATURE(11), local_ref< java::lang::String > > EXTRA_RINGTONE_TITLE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(12), J2CPP_FIELD_SIGNATURE(12), local_ref< java::lang::String > > EXTRA_RINGTONE_PICKED_URI;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(13), J2CPP_FIELD_SIGNATURE(13), cpp_int > ID_COLUMN_INDEX;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(14), J2CPP_FIELD_SIGNATURE(14), cpp_int > TITLE_COLUMN_INDEX;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(15), J2CPP_FIELD_SIGNATURE(15), cpp_int > URI_COLUMN_INDEX;
	}; //class RingtoneManager

} //namespace media
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_MEDIA_RINGTONEMANAGER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_MEDIA_RINGTONEMANAGER_HPP_IMPL
#define J2CPP_ANDROID_MEDIA_RINGTONEMANAGER_HPP_IMPL

namespace j2cpp {



android::media::RingtoneManager::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}


android::media::RingtoneManager::RingtoneManager(local_ref< android::app::Activity > const &a0)
: cpp_object<android::media::RingtoneManager>(
	environment::get().get_jenv()->NewObject(
		get_class<android::media::RingtoneManager::J2CPP_CLASS_NAME>(),
		get_method_id<android::media::RingtoneManager::J2CPP_CLASS_NAME, android::media::RingtoneManager::J2CPP_METHOD_NAME(0), android::media::RingtoneManager::J2CPP_METHOD_SIGNATURE(0), false>(),
		a0.get_jtype()
	)
)
{
}



android::media::RingtoneManager::RingtoneManager(local_ref< android::content::Context > const &a0)
: cpp_object<android::media::RingtoneManager>(
	environment::get().get_jenv()->NewObject(
		get_class<android::media::RingtoneManager::J2CPP_CLASS_NAME>(),
		get_method_id<android::media::RingtoneManager::J2CPP_CLASS_NAME, android::media::RingtoneManager::J2CPP_METHOD_NAME(1), android::media::RingtoneManager::J2CPP_METHOD_SIGNATURE(1), false>(),
		a0.get_jtype()
	)
)
{
}


void android::media::RingtoneManager::setType(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::media::RingtoneManager::inferStreamType()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

void android::media::RingtoneManager::setStopPreviousRingtone(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::media::RingtoneManager::getStopPreviousRingtone()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

void android::media::RingtoneManager::stopPreviousRingtone()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

cpp_boolean android::media::RingtoneManager::getIncludeDrm()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

void android::media::RingtoneManager::setIncludeDrm(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::database::Cursor > android::media::RingtoneManager::getCursor()
{
	return local_ref< android::database::Cursor >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}

local_ref< android::media::Ringtone > android::media::RingtoneManager::getRingtone(cpp_int const &a0)
{
	return local_ref< android::media::Ringtone >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::net::Uri > android::media::RingtoneManager::getRingtoneUri(cpp_int const &a0)
{
	return local_ref< android::net::Uri >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::media::RingtoneManager::getRingtonePosition(local_ref< android::net::Uri > const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::net::Uri > android::media::RingtoneManager::getValidRingtoneUri(local_ref< android::content::Context > const &a0)
{
	return local_ref< android::net::Uri >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), true>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::media::Ringtone > android::media::RingtoneManager::getRingtone(local_ref< android::content::Context > const &a0, local_ref< android::net::Uri > const &a1)
{
	return local_ref< android::media::Ringtone >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< android::net::Uri > android::media::RingtoneManager::getActualDefaultRingtoneUri(local_ref< android::content::Context > const &a0, cpp_int const &a1)
{
	return local_ref< android::net::Uri >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::media::RingtoneManager::setActualDefaultRingtoneUri(local_ref< android::content::Context > const &a0, cpp_int const &a1, local_ref< android::net::Uri > const &a2)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

cpp_boolean android::media::RingtoneManager::isDefault(local_ref< android::net::Uri > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallStaticBooleanMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), true>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::media::RingtoneManager::getDefaultType(local_ref< android::net::Uri > const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallStaticIntMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), true>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::net::Uri > android::media::RingtoneManager::getDefaultUri(cpp_int const &a0)
{
	return local_ref< android::net::Uri >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), true>(),
			a0.get_jtype()
		)
	);
}


static_field<
	android::media::RingtoneManager::J2CPP_CLASS_NAME,
	android::media::RingtoneManager::J2CPP_FIELD_NAME(0),
	android::media::RingtoneManager::J2CPP_FIELD_SIGNATURE(0),
	cpp_int
> android::media::RingtoneManager::TYPE_RINGTONE;

static_field<
	android::media::RingtoneManager::J2CPP_CLASS_NAME,
	android::media::RingtoneManager::J2CPP_FIELD_NAME(1),
	android::media::RingtoneManager::J2CPP_FIELD_SIGNATURE(1),
	cpp_int
> android::media::RingtoneManager::TYPE_NOTIFICATION;

static_field<
	android::media::RingtoneManager::J2CPP_CLASS_NAME,
	android::media::RingtoneManager::J2CPP_FIELD_NAME(2),
	android::media::RingtoneManager::J2CPP_FIELD_SIGNATURE(2),
	cpp_int
> android::media::RingtoneManager::TYPE_ALARM;

static_field<
	android::media::RingtoneManager::J2CPP_CLASS_NAME,
	android::media::RingtoneManager::J2CPP_FIELD_NAME(3),
	android::media::RingtoneManager::J2CPP_FIELD_SIGNATURE(3),
	cpp_int
> android::media::RingtoneManager::TYPE_ALL;

static_field<
	android::media::RingtoneManager::J2CPP_CLASS_NAME,
	android::media::RingtoneManager::J2CPP_FIELD_NAME(4),
	android::media::RingtoneManager::J2CPP_FIELD_SIGNATURE(4),
	local_ref< java::lang::String >
> android::media::RingtoneManager::ACTION_RINGTONE_PICKER;

static_field<
	android::media::RingtoneManager::J2CPP_CLASS_NAME,
	android::media::RingtoneManager::J2CPP_FIELD_NAME(5),
	android::media::RingtoneManager::J2CPP_FIELD_SIGNATURE(5),
	local_ref< java::lang::String >
> android::media::RingtoneManager::EXTRA_RINGTONE_SHOW_DEFAULT;

static_field<
	android::media::RingtoneManager::J2CPP_CLASS_NAME,
	android::media::RingtoneManager::J2CPP_FIELD_NAME(6),
	android::media::RingtoneManager::J2CPP_FIELD_SIGNATURE(6),
	local_ref< java::lang::String >
> android::media::RingtoneManager::EXTRA_RINGTONE_SHOW_SILENT;

static_field<
	android::media::RingtoneManager::J2CPP_CLASS_NAME,
	android::media::RingtoneManager::J2CPP_FIELD_NAME(7),
	android::media::RingtoneManager::J2CPP_FIELD_SIGNATURE(7),
	local_ref< java::lang::String >
> android::media::RingtoneManager::EXTRA_RINGTONE_INCLUDE_DRM;

static_field<
	android::media::RingtoneManager::J2CPP_CLASS_NAME,
	android::media::RingtoneManager::J2CPP_FIELD_NAME(8),
	android::media::RingtoneManager::J2CPP_FIELD_SIGNATURE(8),
	local_ref< java::lang::String >
> android::media::RingtoneManager::EXTRA_RINGTONE_EXISTING_URI;

static_field<
	android::media::RingtoneManager::J2CPP_CLASS_NAME,
	android::media::RingtoneManager::J2CPP_FIELD_NAME(9),
	android::media::RingtoneManager::J2CPP_FIELD_SIGNATURE(9),
	local_ref< java::lang::String >
> android::media::RingtoneManager::EXTRA_RINGTONE_DEFAULT_URI;

static_field<
	android::media::RingtoneManager::J2CPP_CLASS_NAME,
	android::media::RingtoneManager::J2CPP_FIELD_NAME(10),
	android::media::RingtoneManager::J2CPP_FIELD_SIGNATURE(10),
	local_ref< java::lang::String >
> android::media::RingtoneManager::EXTRA_RINGTONE_TYPE;

static_field<
	android::media::RingtoneManager::J2CPP_CLASS_NAME,
	android::media::RingtoneManager::J2CPP_FIELD_NAME(11),
	android::media::RingtoneManager::J2CPP_FIELD_SIGNATURE(11),
	local_ref< java::lang::String >
> android::media::RingtoneManager::EXTRA_RINGTONE_TITLE;

static_field<
	android::media::RingtoneManager::J2CPP_CLASS_NAME,
	android::media::RingtoneManager::J2CPP_FIELD_NAME(12),
	android::media::RingtoneManager::J2CPP_FIELD_SIGNATURE(12),
	local_ref< java::lang::String >
> android::media::RingtoneManager::EXTRA_RINGTONE_PICKED_URI;

static_field<
	android::media::RingtoneManager::J2CPP_CLASS_NAME,
	android::media::RingtoneManager::J2CPP_FIELD_NAME(13),
	android::media::RingtoneManager::J2CPP_FIELD_SIGNATURE(13),
	cpp_int
> android::media::RingtoneManager::ID_COLUMN_INDEX;

static_field<
	android::media::RingtoneManager::J2CPP_CLASS_NAME,
	android::media::RingtoneManager::J2CPP_FIELD_NAME(14),
	android::media::RingtoneManager::J2CPP_FIELD_SIGNATURE(14),
	cpp_int
> android::media::RingtoneManager::TITLE_COLUMN_INDEX;

static_field<
	android::media::RingtoneManager::J2CPP_CLASS_NAME,
	android::media::RingtoneManager::J2CPP_FIELD_NAME(15),
	android::media::RingtoneManager::J2CPP_FIELD_SIGNATURE(15),
	cpp_int
> android::media::RingtoneManager::URI_COLUMN_INDEX;


J2CPP_DEFINE_CLASS(android::media::RingtoneManager,"android/media/RingtoneManager")
J2CPP_DEFINE_METHOD(android::media::RingtoneManager,0,"<init>","(Landroid/app/Activity;)V")
J2CPP_DEFINE_METHOD(android::media::RingtoneManager,1,"<init>","(Landroid/content/Context;)V")
J2CPP_DEFINE_METHOD(android::media::RingtoneManager,2,"setType","(I)V")
J2CPP_DEFINE_METHOD(android::media::RingtoneManager,3,"inferStreamType","()I")
J2CPP_DEFINE_METHOD(android::media::RingtoneManager,4,"setStopPreviousRingtone","(Z)V")
J2CPP_DEFINE_METHOD(android::media::RingtoneManager,5,"getStopPreviousRingtone","()Z")
J2CPP_DEFINE_METHOD(android::media::RingtoneManager,6,"stopPreviousRingtone","()V")
J2CPP_DEFINE_METHOD(android::media::RingtoneManager,7,"getIncludeDrm","()Z")
J2CPP_DEFINE_METHOD(android::media::RingtoneManager,8,"setIncludeDrm","(Z)V")
J2CPP_DEFINE_METHOD(android::media::RingtoneManager,9,"getCursor","()Landroid/database/Cursor;")
J2CPP_DEFINE_METHOD(android::media::RingtoneManager,10,"getRingtone","(I)Landroid/media/Ringtone;")
J2CPP_DEFINE_METHOD(android::media::RingtoneManager,11,"getRingtoneUri","(I)Landroid/net/Uri;")
J2CPP_DEFINE_METHOD(android::media::RingtoneManager,12,"getRingtonePosition","(Landroid/net/Uri;)I")
J2CPP_DEFINE_METHOD(android::media::RingtoneManager,13,"getValidRingtoneUri","(Landroid/content/Context;)Landroid/net/Uri;")
J2CPP_DEFINE_METHOD(android::media::RingtoneManager,14,"getRingtone","(Landroid/content/Context;Landroid/net/Uri;)Landroid/media/Ringtone;")
J2CPP_DEFINE_METHOD(android::media::RingtoneManager,15,"getActualDefaultRingtoneUri","(Landroid/content/Context;I)Landroid/net/Uri;")
J2CPP_DEFINE_METHOD(android::media::RingtoneManager,16,"setActualDefaultRingtoneUri","(Landroid/content/Context;ILandroid/net/Uri;)V")
J2CPP_DEFINE_METHOD(android::media::RingtoneManager,17,"isDefault","(Landroid/net/Uri;)Z")
J2CPP_DEFINE_METHOD(android::media::RingtoneManager,18,"getDefaultType","(Landroid/net/Uri;)I")
J2CPP_DEFINE_METHOD(android::media::RingtoneManager,19,"getDefaultUri","(I)Landroid/net/Uri;")
J2CPP_DEFINE_FIELD(android::media::RingtoneManager,0,"TYPE_RINGTONE","I")
J2CPP_DEFINE_FIELD(android::media::RingtoneManager,1,"TYPE_NOTIFICATION","I")
J2CPP_DEFINE_FIELD(android::media::RingtoneManager,2,"TYPE_ALARM","I")
J2CPP_DEFINE_FIELD(android::media::RingtoneManager,3,"TYPE_ALL","I")
J2CPP_DEFINE_FIELD(android::media::RingtoneManager,4,"ACTION_RINGTONE_PICKER","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::media::RingtoneManager,5,"EXTRA_RINGTONE_SHOW_DEFAULT","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::media::RingtoneManager,6,"EXTRA_RINGTONE_SHOW_SILENT","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::media::RingtoneManager,7,"EXTRA_RINGTONE_INCLUDE_DRM","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::media::RingtoneManager,8,"EXTRA_RINGTONE_EXISTING_URI","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::media::RingtoneManager,9,"EXTRA_RINGTONE_DEFAULT_URI","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::media::RingtoneManager,10,"EXTRA_RINGTONE_TYPE","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::media::RingtoneManager,11,"EXTRA_RINGTONE_TITLE","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::media::RingtoneManager,12,"EXTRA_RINGTONE_PICKED_URI","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::media::RingtoneManager,13,"ID_COLUMN_INDEX","I")
J2CPP_DEFINE_FIELD(android::media::RingtoneManager,14,"TITLE_COLUMN_INDEX","I")
J2CPP_DEFINE_FIELD(android::media::RingtoneManager,15,"URI_COLUMN_INDEX","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_MEDIA_RINGTONEMANAGER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
