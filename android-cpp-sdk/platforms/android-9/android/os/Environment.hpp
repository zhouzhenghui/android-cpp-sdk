/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.os.Environment
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_OS_ENVIRONMENT_HPP_DECL
#define J2CPP_ANDROID_OS_ENVIRONMENT_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace io { class File; } } }


#include <java/io/File.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace os {

	class Environment;
	class Environment
		: public object<Environment>
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

		explicit Environment(jobject jobj)
		: object<Environment>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		Environment();
		static local_ref< java::io::File > getRootDirectory();
		static local_ref< java::io::File > getDataDirectory();
		static local_ref< java::io::File > getExternalStorageDirectory();
		static local_ref< java::io::File > getExternalStoragePublicDirectory(local_ref< java::lang::String >  const&);
		static local_ref< java::io::File > getDownloadCacheDirectory();
		static local_ref< java::lang::String > getExternalStorageState();
		static jboolean isExternalStorageRemovable();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::String > > DIRECTORY_MUSIC;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::lang::String > > DIRECTORY_PODCASTS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< java::lang::String > > DIRECTORY_RINGTONES;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< java::lang::String > > DIRECTORY_ALARMS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), local_ref< java::lang::String > > DIRECTORY_NOTIFICATIONS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), local_ref< java::lang::String > > DIRECTORY_PICTURES;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), local_ref< java::lang::String > > DIRECTORY_MOVIES;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), local_ref< java::lang::String > > DIRECTORY_DOWNLOADS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), local_ref< java::lang::String > > DIRECTORY_DCIM;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(9), J2CPP_FIELD_SIGNATURE(9), local_ref< java::lang::String > > MEDIA_REMOVED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(10), J2CPP_FIELD_SIGNATURE(10), local_ref< java::lang::String > > MEDIA_UNMOUNTED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(11), J2CPP_FIELD_SIGNATURE(11), local_ref< java::lang::String > > MEDIA_CHECKING;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(12), J2CPP_FIELD_SIGNATURE(12), local_ref< java::lang::String > > MEDIA_NOFS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(13), J2CPP_FIELD_SIGNATURE(13), local_ref< java::lang::String > > MEDIA_MOUNTED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(14), J2CPP_FIELD_SIGNATURE(14), local_ref< java::lang::String > > MEDIA_MOUNTED_READ_ONLY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(15), J2CPP_FIELD_SIGNATURE(15), local_ref< java::lang::String > > MEDIA_SHARED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(16), J2CPP_FIELD_SIGNATURE(16), local_ref< java::lang::String > > MEDIA_BAD_REMOVAL;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(17), J2CPP_FIELD_SIGNATURE(17), local_ref< java::lang::String > > MEDIA_UNMOUNTABLE;
	}; //class Environment

} //namespace os
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_OS_ENVIRONMENT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_OS_ENVIRONMENT_HPP_IMPL
#define J2CPP_ANDROID_OS_ENVIRONMENT_HPP_IMPL

namespace j2cpp {



android::os::Environment::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::os::Environment::Environment()
: object<android::os::Environment>(
	call_new_object<
		android::os::Environment::J2CPP_CLASS_NAME,
		android::os::Environment::J2CPP_METHOD_NAME(0),
		android::os::Environment::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


local_ref< java::io::File > android::os::Environment::getRootDirectory()
{
	return call_static_method<
		android::os::Environment::J2CPP_CLASS_NAME,
		android::os::Environment::J2CPP_METHOD_NAME(1),
		android::os::Environment::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::io::File >
	>();
}

local_ref< java::io::File > android::os::Environment::getDataDirectory()
{
	return call_static_method<
		android::os::Environment::J2CPP_CLASS_NAME,
		android::os::Environment::J2CPP_METHOD_NAME(2),
		android::os::Environment::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::io::File >
	>();
}

local_ref< java::io::File > android::os::Environment::getExternalStorageDirectory()
{
	return call_static_method<
		android::os::Environment::J2CPP_CLASS_NAME,
		android::os::Environment::J2CPP_METHOD_NAME(3),
		android::os::Environment::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::io::File >
	>();
}

local_ref< java::io::File > android::os::Environment::getExternalStoragePublicDirectory(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		android::os::Environment::J2CPP_CLASS_NAME,
		android::os::Environment::J2CPP_METHOD_NAME(4),
		android::os::Environment::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::io::File >
	>(a0);
}

local_ref< java::io::File > android::os::Environment::getDownloadCacheDirectory()
{
	return call_static_method<
		android::os::Environment::J2CPP_CLASS_NAME,
		android::os::Environment::J2CPP_METHOD_NAME(5),
		android::os::Environment::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::io::File >
	>();
}

local_ref< java::lang::String > android::os::Environment::getExternalStorageState()
{
	return call_static_method<
		android::os::Environment::J2CPP_CLASS_NAME,
		android::os::Environment::J2CPP_METHOD_NAME(6),
		android::os::Environment::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::lang::String >
	>();
}

jboolean android::os::Environment::isExternalStorageRemovable()
{
	return call_static_method<
		android::os::Environment::J2CPP_CLASS_NAME,
		android::os::Environment::J2CPP_METHOD_NAME(7),
		android::os::Environment::J2CPP_METHOD_SIGNATURE(7), 
		jboolean
	>();
}


static_field<
	android::os::Environment::J2CPP_CLASS_NAME,
	android::os::Environment::J2CPP_FIELD_NAME(0),
	android::os::Environment::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::lang::String >
> android::os::Environment::DIRECTORY_MUSIC;

static_field<
	android::os::Environment::J2CPP_CLASS_NAME,
	android::os::Environment::J2CPP_FIELD_NAME(1),
	android::os::Environment::J2CPP_FIELD_SIGNATURE(1),
	local_ref< java::lang::String >
> android::os::Environment::DIRECTORY_PODCASTS;

static_field<
	android::os::Environment::J2CPP_CLASS_NAME,
	android::os::Environment::J2CPP_FIELD_NAME(2),
	android::os::Environment::J2CPP_FIELD_SIGNATURE(2),
	local_ref< java::lang::String >
> android::os::Environment::DIRECTORY_RINGTONES;

static_field<
	android::os::Environment::J2CPP_CLASS_NAME,
	android::os::Environment::J2CPP_FIELD_NAME(3),
	android::os::Environment::J2CPP_FIELD_SIGNATURE(3),
	local_ref< java::lang::String >
> android::os::Environment::DIRECTORY_ALARMS;

static_field<
	android::os::Environment::J2CPP_CLASS_NAME,
	android::os::Environment::J2CPP_FIELD_NAME(4),
	android::os::Environment::J2CPP_FIELD_SIGNATURE(4),
	local_ref< java::lang::String >
> android::os::Environment::DIRECTORY_NOTIFICATIONS;

static_field<
	android::os::Environment::J2CPP_CLASS_NAME,
	android::os::Environment::J2CPP_FIELD_NAME(5),
	android::os::Environment::J2CPP_FIELD_SIGNATURE(5),
	local_ref< java::lang::String >
> android::os::Environment::DIRECTORY_PICTURES;

static_field<
	android::os::Environment::J2CPP_CLASS_NAME,
	android::os::Environment::J2CPP_FIELD_NAME(6),
	android::os::Environment::J2CPP_FIELD_SIGNATURE(6),
	local_ref< java::lang::String >
> android::os::Environment::DIRECTORY_MOVIES;

static_field<
	android::os::Environment::J2CPP_CLASS_NAME,
	android::os::Environment::J2CPP_FIELD_NAME(7),
	android::os::Environment::J2CPP_FIELD_SIGNATURE(7),
	local_ref< java::lang::String >
> android::os::Environment::DIRECTORY_DOWNLOADS;

static_field<
	android::os::Environment::J2CPP_CLASS_NAME,
	android::os::Environment::J2CPP_FIELD_NAME(8),
	android::os::Environment::J2CPP_FIELD_SIGNATURE(8),
	local_ref< java::lang::String >
> android::os::Environment::DIRECTORY_DCIM;

static_field<
	android::os::Environment::J2CPP_CLASS_NAME,
	android::os::Environment::J2CPP_FIELD_NAME(9),
	android::os::Environment::J2CPP_FIELD_SIGNATURE(9),
	local_ref< java::lang::String >
> android::os::Environment::MEDIA_REMOVED;

static_field<
	android::os::Environment::J2CPP_CLASS_NAME,
	android::os::Environment::J2CPP_FIELD_NAME(10),
	android::os::Environment::J2CPP_FIELD_SIGNATURE(10),
	local_ref< java::lang::String >
> android::os::Environment::MEDIA_UNMOUNTED;

static_field<
	android::os::Environment::J2CPP_CLASS_NAME,
	android::os::Environment::J2CPP_FIELD_NAME(11),
	android::os::Environment::J2CPP_FIELD_SIGNATURE(11),
	local_ref< java::lang::String >
> android::os::Environment::MEDIA_CHECKING;

static_field<
	android::os::Environment::J2CPP_CLASS_NAME,
	android::os::Environment::J2CPP_FIELD_NAME(12),
	android::os::Environment::J2CPP_FIELD_SIGNATURE(12),
	local_ref< java::lang::String >
> android::os::Environment::MEDIA_NOFS;

static_field<
	android::os::Environment::J2CPP_CLASS_NAME,
	android::os::Environment::J2CPP_FIELD_NAME(13),
	android::os::Environment::J2CPP_FIELD_SIGNATURE(13),
	local_ref< java::lang::String >
> android::os::Environment::MEDIA_MOUNTED;

static_field<
	android::os::Environment::J2CPP_CLASS_NAME,
	android::os::Environment::J2CPP_FIELD_NAME(14),
	android::os::Environment::J2CPP_FIELD_SIGNATURE(14),
	local_ref< java::lang::String >
> android::os::Environment::MEDIA_MOUNTED_READ_ONLY;

static_field<
	android::os::Environment::J2CPP_CLASS_NAME,
	android::os::Environment::J2CPP_FIELD_NAME(15),
	android::os::Environment::J2CPP_FIELD_SIGNATURE(15),
	local_ref< java::lang::String >
> android::os::Environment::MEDIA_SHARED;

static_field<
	android::os::Environment::J2CPP_CLASS_NAME,
	android::os::Environment::J2CPP_FIELD_NAME(16),
	android::os::Environment::J2CPP_FIELD_SIGNATURE(16),
	local_ref< java::lang::String >
> android::os::Environment::MEDIA_BAD_REMOVAL;

static_field<
	android::os::Environment::J2CPP_CLASS_NAME,
	android::os::Environment::J2CPP_FIELD_NAME(17),
	android::os::Environment::J2CPP_FIELD_SIGNATURE(17),
	local_ref< java::lang::String >
> android::os::Environment::MEDIA_UNMOUNTABLE;


J2CPP_DEFINE_CLASS(android::os::Environment,"android/os/Environment")
J2CPP_DEFINE_METHOD(android::os::Environment,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::os::Environment,1,"getRootDirectory","()Ljava/io/File;")
J2CPP_DEFINE_METHOD(android::os::Environment,2,"getDataDirectory","()Ljava/io/File;")
J2CPP_DEFINE_METHOD(android::os::Environment,3,"getExternalStorageDirectory","()Ljava/io/File;")
J2CPP_DEFINE_METHOD(android::os::Environment,4,"getExternalStoragePublicDirectory","(Ljava/lang/String;)Ljava/io/File;")
J2CPP_DEFINE_METHOD(android::os::Environment,5,"getDownloadCacheDirectory","()Ljava/io/File;")
J2CPP_DEFINE_METHOD(android::os::Environment,6,"getExternalStorageState","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::os::Environment,7,"isExternalStorageRemovable","()Z")
J2CPP_DEFINE_FIELD(android::os::Environment,0,"DIRECTORY_MUSIC","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::os::Environment,1,"DIRECTORY_PODCASTS","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::os::Environment,2,"DIRECTORY_RINGTONES","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::os::Environment,3,"DIRECTORY_ALARMS","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::os::Environment,4,"DIRECTORY_NOTIFICATIONS","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::os::Environment,5,"DIRECTORY_PICTURES","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::os::Environment,6,"DIRECTORY_MOVIES","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::os::Environment,7,"DIRECTORY_DOWNLOADS","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::os::Environment,8,"DIRECTORY_DCIM","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::os::Environment,9,"MEDIA_REMOVED","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::os::Environment,10,"MEDIA_UNMOUNTED","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::os::Environment,11,"MEDIA_CHECKING","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::os::Environment,12,"MEDIA_NOFS","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::os::Environment,13,"MEDIA_MOUNTED","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::os::Environment,14,"MEDIA_MOUNTED_READ_ONLY","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::os::Environment,15,"MEDIA_SHARED","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::os::Environment,16,"MEDIA_BAD_REMOVAL","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::os::Environment,17,"MEDIA_UNMOUNTABLE","Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_OS_ENVIRONMENT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
