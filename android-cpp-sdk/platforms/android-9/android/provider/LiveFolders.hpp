/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.provider.LiveFolders
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_PROVIDER_LIVEFOLDERS_HPP_DECL
#define J2CPP_ANDROID_PROVIDER_LIVEFOLDERS_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace provider { class BaseColumns; } } }


#include <android/provider/BaseColumns.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace provider {

	class LiveFolders;
	class LiveFolders
		: public object<LiveFolders>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
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

		explicit LiveFolders(jobject jobj)
		: object<LiveFolders>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::provider::BaseColumns>() const;



		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::String > > NAME;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::lang::String > > DESCRIPTION;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< java::lang::String > > INTENT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< java::lang::String > > ICON_BITMAP;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), local_ref< java::lang::String > > ICON_PACKAGE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), local_ref< java::lang::String > > ICON_RESOURCE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), jint > DISPLAY_MODE_GRID;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), jint > DISPLAY_MODE_LIST;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), local_ref< java::lang::String > > EXTRA_LIVE_FOLDER_NAME;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(9), J2CPP_FIELD_SIGNATURE(9), local_ref< java::lang::String > > EXTRA_LIVE_FOLDER_ICON;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(10), J2CPP_FIELD_SIGNATURE(10), local_ref< java::lang::String > > EXTRA_LIVE_FOLDER_DISPLAY_MODE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(11), J2CPP_FIELD_SIGNATURE(11), local_ref< java::lang::String > > EXTRA_LIVE_FOLDER_BASE_INTENT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(12), J2CPP_FIELD_SIGNATURE(12), local_ref< java::lang::String > > ACTION_CREATE_LIVE_FOLDER;
	}; //class LiveFolders

} //namespace provider
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_PROVIDER_LIVEFOLDERS_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_PROVIDER_LIVEFOLDERS_HPP_IMPL
#define J2CPP_ANDROID_PROVIDER_LIVEFOLDERS_HPP_IMPL

namespace j2cpp {



android::provider::LiveFolders::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::provider::LiveFolders::operator local_ref<android::provider::BaseColumns>() const
{
	return local_ref<android::provider::BaseColumns>(get_jobject());
}



static_field<
	android::provider::LiveFolders::J2CPP_CLASS_NAME,
	android::provider::LiveFolders::J2CPP_FIELD_NAME(0),
	android::provider::LiveFolders::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::lang::String >
> android::provider::LiveFolders::NAME;

static_field<
	android::provider::LiveFolders::J2CPP_CLASS_NAME,
	android::provider::LiveFolders::J2CPP_FIELD_NAME(1),
	android::provider::LiveFolders::J2CPP_FIELD_SIGNATURE(1),
	local_ref< java::lang::String >
> android::provider::LiveFolders::DESCRIPTION;

static_field<
	android::provider::LiveFolders::J2CPP_CLASS_NAME,
	android::provider::LiveFolders::J2CPP_FIELD_NAME(2),
	android::provider::LiveFolders::J2CPP_FIELD_SIGNATURE(2),
	local_ref< java::lang::String >
> android::provider::LiveFolders::INTENT;

static_field<
	android::provider::LiveFolders::J2CPP_CLASS_NAME,
	android::provider::LiveFolders::J2CPP_FIELD_NAME(3),
	android::provider::LiveFolders::J2CPP_FIELD_SIGNATURE(3),
	local_ref< java::lang::String >
> android::provider::LiveFolders::ICON_BITMAP;

static_field<
	android::provider::LiveFolders::J2CPP_CLASS_NAME,
	android::provider::LiveFolders::J2CPP_FIELD_NAME(4),
	android::provider::LiveFolders::J2CPP_FIELD_SIGNATURE(4),
	local_ref< java::lang::String >
> android::provider::LiveFolders::ICON_PACKAGE;

static_field<
	android::provider::LiveFolders::J2CPP_CLASS_NAME,
	android::provider::LiveFolders::J2CPP_FIELD_NAME(5),
	android::provider::LiveFolders::J2CPP_FIELD_SIGNATURE(5),
	local_ref< java::lang::String >
> android::provider::LiveFolders::ICON_RESOURCE;

static_field<
	android::provider::LiveFolders::J2CPP_CLASS_NAME,
	android::provider::LiveFolders::J2CPP_FIELD_NAME(6),
	android::provider::LiveFolders::J2CPP_FIELD_SIGNATURE(6),
	jint
> android::provider::LiveFolders::DISPLAY_MODE_GRID;

static_field<
	android::provider::LiveFolders::J2CPP_CLASS_NAME,
	android::provider::LiveFolders::J2CPP_FIELD_NAME(7),
	android::provider::LiveFolders::J2CPP_FIELD_SIGNATURE(7),
	jint
> android::provider::LiveFolders::DISPLAY_MODE_LIST;

static_field<
	android::provider::LiveFolders::J2CPP_CLASS_NAME,
	android::provider::LiveFolders::J2CPP_FIELD_NAME(8),
	android::provider::LiveFolders::J2CPP_FIELD_SIGNATURE(8),
	local_ref< java::lang::String >
> android::provider::LiveFolders::EXTRA_LIVE_FOLDER_NAME;

static_field<
	android::provider::LiveFolders::J2CPP_CLASS_NAME,
	android::provider::LiveFolders::J2CPP_FIELD_NAME(9),
	android::provider::LiveFolders::J2CPP_FIELD_SIGNATURE(9),
	local_ref< java::lang::String >
> android::provider::LiveFolders::EXTRA_LIVE_FOLDER_ICON;

static_field<
	android::provider::LiveFolders::J2CPP_CLASS_NAME,
	android::provider::LiveFolders::J2CPP_FIELD_NAME(10),
	android::provider::LiveFolders::J2CPP_FIELD_SIGNATURE(10),
	local_ref< java::lang::String >
> android::provider::LiveFolders::EXTRA_LIVE_FOLDER_DISPLAY_MODE;

static_field<
	android::provider::LiveFolders::J2CPP_CLASS_NAME,
	android::provider::LiveFolders::J2CPP_FIELD_NAME(11),
	android::provider::LiveFolders::J2CPP_FIELD_SIGNATURE(11),
	local_ref< java::lang::String >
> android::provider::LiveFolders::EXTRA_LIVE_FOLDER_BASE_INTENT;

static_field<
	android::provider::LiveFolders::J2CPP_CLASS_NAME,
	android::provider::LiveFolders::J2CPP_FIELD_NAME(12),
	android::provider::LiveFolders::J2CPP_FIELD_SIGNATURE(12),
	local_ref< java::lang::String >
> android::provider::LiveFolders::ACTION_CREATE_LIVE_FOLDER;


J2CPP_DEFINE_CLASS(android::provider::LiveFolders,"android/provider/LiveFolders")
J2CPP_DEFINE_METHOD(android::provider::LiveFolders,0,"<init>","()V")
J2CPP_DEFINE_FIELD(android::provider::LiveFolders,0,"NAME","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::provider::LiveFolders,1,"DESCRIPTION","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::provider::LiveFolders,2,"INTENT","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::provider::LiveFolders,3,"ICON_BITMAP","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::provider::LiveFolders,4,"ICON_PACKAGE","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::provider::LiveFolders,5,"ICON_RESOURCE","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::provider::LiveFolders,6,"DISPLAY_MODE_GRID","I")
J2CPP_DEFINE_FIELD(android::provider::LiveFolders,7,"DISPLAY_MODE_LIST","I")
J2CPP_DEFINE_FIELD(android::provider::LiveFolders,8,"EXTRA_LIVE_FOLDER_NAME","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::provider::LiveFolders,9,"EXTRA_LIVE_FOLDER_ICON","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::provider::LiveFolders,10,"EXTRA_LIVE_FOLDER_DISPLAY_MODE","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::provider::LiveFolders,11,"EXTRA_LIVE_FOLDER_BASE_INTENT","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::provider::LiveFolders,12,"ACTION_CREATE_LIVE_FOLDER","Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_PROVIDER_LIVEFOLDERS_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
