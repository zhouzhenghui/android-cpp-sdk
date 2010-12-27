/*================================================================================
  code generated by: java2cpp
  class: android.app.WallpaperInfo
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_APP_WALLPAPERINFO_HPP_DECL
#define J2CPP_ANDROID_APP_WALLPAPERINFO_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { class Drawable; } } } }
namespace j2cpp { namespace android { namespace content { namespace pm { class PackageManager; } } } }
namespace j2cpp { namespace android { namespace content { namespace pm { class ResolveInfo; } } } }
namespace j2cpp { namespace android { namespace content { namespace pm { class ServiceInfo; } } } }
namespace j2cpp { namespace android { namespace content { class ComponentName; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace util { class Printer; } } }
namespace j2cpp { namespace android { namespace os { class Parcel; } } }
namespace j2cpp { namespace android { namespace os { namespace Parcelable_ { class Creator; } } } }


#include <android/content/ComponentName.hpp>
#include <android/content/Context.hpp>
#include <android/content/pm/PackageManager.hpp>
#include <android/content/pm/ResolveInfo.hpp>
#include <android/content/pm/ServiceInfo.hpp>
#include <android/graphics/drawable/Drawable.hpp>
#include <android/os/Parcel.hpp>
#include <android/os/Parcelable.hpp>
#include <android/util/Printer.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace app {

	class WallpaperInfo;
	class WallpaperInfo
		: public cpp_object<WallpaperInfo>
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
		J2CPP_DECLARE_FIELD(0)

		WallpaperInfo(jobject jobj)
		: cpp_object<WallpaperInfo>(jobj)
		{
		}

		local_ref< java::lang::String > getPackageName();
		local_ref< java::lang::String > getServiceName();
		local_ref< android::content::pm::ServiceInfo > getServiceInfo();
		local_ref< android::content::ComponentName > getComponent();
		local_ref< java::lang::CharSequence > loadLabel(local_ref< android::content::pm::PackageManager > const&);
		local_ref< android::graphics::drawable::Drawable > loadIcon(local_ref< android::content::pm::PackageManager > const&);
		local_ref< android::graphics::drawable::Drawable > loadThumbnail(local_ref< android::content::pm::PackageManager > const&);
		local_ref< java::lang::CharSequence > loadAuthor(local_ref< android::content::pm::PackageManager > const&);
		local_ref< java::lang::CharSequence > loadDescription(local_ref< android::content::pm::PackageManager > const&);
		local_ref< java::lang::String > getSettingsActivity();
		void dump(local_ref< android::util::Printer > const&, local_ref< java::lang::String > const&);
		local_ref< java::lang::String > toString();
		void writeToParcel(local_ref< android::os::Parcel > const&, cpp_int const&);
		cpp_int describeContents();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< android::os::Parcelable_::Creator > > CREATOR;
	}; //class WallpaperInfo

} //namespace app
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_APP_WALLPAPERINFO_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_APP_WALLPAPERINFO_HPP_IMPL
#define J2CPP_ANDROID_APP_WALLPAPERINFO_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::app::WallpaperInfo > create< android::app::WallpaperInfo>(local_ref< android::content::Context > const &a0, local_ref< android::content::pm::ResolveInfo > const &a1)
{
	return local_ref< android::app::WallpaperInfo >(
		environment::get().get_jenv()->NewObject(
			get_class<android::app::WallpaperInfo::J2CPP_CLASS_NAME>(),
			get_method_id<android::app::WallpaperInfo::J2CPP_CLASS_NAME, android::app::WallpaperInfo::J2CPP_METHOD_NAME(0), android::app::WallpaperInfo::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::lang::String > android::app::WallpaperInfo::getPackageName()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

local_ref< java::lang::String > android::app::WallpaperInfo::getServiceName()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

local_ref< android::content::pm::ServiceInfo > android::app::WallpaperInfo::getServiceInfo()
{
	return local_ref< android::content::pm::ServiceInfo >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

local_ref< android::content::ComponentName > android::app::WallpaperInfo::getComponent()
{
	return local_ref< android::content::ComponentName >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

local_ref< java::lang::CharSequence > android::app::WallpaperInfo::loadLabel(local_ref< android::content::pm::PackageManager > const &a0)
{
	return local_ref< java::lang::CharSequence >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::graphics::drawable::Drawable > android::app::WallpaperInfo::loadIcon(local_ref< android::content::pm::PackageManager > const &a0)
{
	return local_ref< android::graphics::drawable::Drawable >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::graphics::drawable::Drawable > android::app::WallpaperInfo::loadThumbnail(local_ref< android::content::pm::PackageManager > const &a0)
{
	return local_ref< android::graphics::drawable::Drawable >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::CharSequence > android::app::WallpaperInfo::loadAuthor(local_ref< android::content::pm::PackageManager > const &a0)
{
	return local_ref< java::lang::CharSequence >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::CharSequence > android::app::WallpaperInfo::loadDescription(local_ref< android::content::pm::PackageManager > const &a0)
{
	return local_ref< java::lang::CharSequence >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > android::app::WallpaperInfo::getSettingsActivity()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>()
		)
	);
}

void android::app::WallpaperInfo::dump(local_ref< android::util::Printer > const &a0, local_ref< java::lang::String > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::lang::String > android::app::WallpaperInfo::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>()
		)
	);
}

void android::app::WallpaperInfo::writeToParcel(local_ref< android::os::Parcel > const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_int android::app::WallpaperInfo::describeContents()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>()
		)
	);
}


static_field<
	android::app::WallpaperInfo::J2CPP_CLASS_NAME,
	android::app::WallpaperInfo::J2CPP_FIELD_NAME(0),
	android::app::WallpaperInfo::J2CPP_FIELD_SIGNATURE(0),
	local_ref< android::os::Parcelable_::Creator >
> android::app::WallpaperInfo::CREATOR;


J2CPP_DEFINE_CLASS(android::app::WallpaperInfo,"android/app/WallpaperInfo")
J2CPP_DEFINE_METHOD(android::app::WallpaperInfo,0,"<init>","(Landroid/content/Context;Landroid/content/pm/ResolveInfo;)V")
J2CPP_DEFINE_METHOD(android::app::WallpaperInfo,1,"getPackageName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::app::WallpaperInfo,2,"getServiceName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::app::WallpaperInfo,3,"getServiceInfo","()Landroid/content/pm/ServiceInfo;")
J2CPP_DEFINE_METHOD(android::app::WallpaperInfo,4,"getComponent","()Landroid/content/ComponentName;")
J2CPP_DEFINE_METHOD(android::app::WallpaperInfo,5,"loadLabel","(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;")
J2CPP_DEFINE_METHOD(android::app::WallpaperInfo,6,"loadIcon","(Landroid/content/pm/PackageManager;)Landroid/graphics/drawable/Drawable;")
J2CPP_DEFINE_METHOD(android::app::WallpaperInfo,7,"loadThumbnail","(Landroid/content/pm/PackageManager;)Landroid/graphics/drawable/Drawable;")
J2CPP_DEFINE_METHOD(android::app::WallpaperInfo,8,"loadAuthor","(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;")
J2CPP_DEFINE_METHOD(android::app::WallpaperInfo,9,"loadDescription","(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;")
J2CPP_DEFINE_METHOD(android::app::WallpaperInfo,10,"getSettingsActivity","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::app::WallpaperInfo,11,"dump","(Landroid/util/Printer;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::app::WallpaperInfo,12,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::app::WallpaperInfo,13,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_METHOD(android::app::WallpaperInfo,14,"describeContents","()I")
J2CPP_DEFINE_METHOD(android::app::WallpaperInfo,15,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::app::WallpaperInfo,0,"CREATOR","Landroid/os/Parcelable$Creator;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_APP_WALLPAPERINFO_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION