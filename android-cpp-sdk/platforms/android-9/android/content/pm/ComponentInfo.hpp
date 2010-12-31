/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.content.pm.ComponentInfo
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_PM_COMPONENTINFO_HPP_DECL
#define J2CPP_ANDROID_CONTENT_PM_COMPONENTINFO_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace android { namespace content { namespace pm { class PackageItemInfo; } } } }
namespace j2cpp { namespace android { namespace content { namespace pm { class ApplicationInfo; } } } }
namespace j2cpp { namespace android { namespace content { namespace pm { class PackageManager; } } } }
namespace j2cpp { namespace android { namespace os { class Parcel; } } }


#include <android/content/pm/ApplicationInfo.hpp>
#include <android/content/pm/PackageItemInfo.hpp>
#include <android/content/pm/PackageManager.hpp>
#include <android/os/Parcel.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace content { namespace pm {

	class ComponentInfo;
	class ComponentInfo
		: public object<ComponentInfo>
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

		explicit ComponentInfo(jobject jobj)
		: object<ComponentInfo>(jobj)
		, applicationInfo(jobj)
		, processName(jobj)
		, descriptionRes(jobj)
		, enabled(jobj)
		, exported(jobj)
		{
		}

		operator local_ref<android::content::pm::PackageItemInfo>() const;


		ComponentInfo();
		ComponentInfo(local_ref< android::content::pm::ComponentInfo > const&);
		local_ref< java::lang::CharSequence > loadLabel(local_ref< android::content::pm::PackageManager >  const&);
		jint getIconResource();
		void writeToParcel(local_ref< android::os::Parcel >  const&, jint);

		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< android::content::pm::ApplicationInfo > > applicationInfo;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::lang::String > > processName;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jint > descriptionRes;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), jboolean > enabled;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), jboolean > exported;
	}; //class ComponentInfo

} //namespace pm
} //namespace content
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_PM_COMPONENTINFO_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_PM_COMPONENTINFO_HPP_IMPL
#define J2CPP_ANDROID_CONTENT_PM_COMPONENTINFO_HPP_IMPL

namespace j2cpp {



android::content::pm::ComponentInfo::operator local_ref<android::content::pm::PackageItemInfo>() const
{
	return local_ref<android::content::pm::PackageItemInfo>(get_jobject());
}


android::content::pm::ComponentInfo::ComponentInfo()
: object<android::content::pm::ComponentInfo>(
	call_new_object<
		android::content::pm::ComponentInfo::J2CPP_CLASS_NAME,
		android::content::pm::ComponentInfo::J2CPP_METHOD_NAME(0),
		android::content::pm::ComponentInfo::J2CPP_METHOD_SIGNATURE(0)>
	()
)
, applicationInfo(get_jobject())
, processName(get_jobject())
, descriptionRes(get_jobject())
, enabled(get_jobject())
, exported(get_jobject())
{
}



android::content::pm::ComponentInfo::ComponentInfo(local_ref< android::content::pm::ComponentInfo > const &a0)
: object<android::content::pm::ComponentInfo>(
	call_new_object<
		android::content::pm::ComponentInfo::J2CPP_CLASS_NAME,
		android::content::pm::ComponentInfo::J2CPP_METHOD_NAME(1),
		android::content::pm::ComponentInfo::J2CPP_METHOD_SIGNATURE(1)>
	(a0)
)
, applicationInfo(get_jobject())
, processName(get_jobject())
, descriptionRes(get_jobject())
, enabled(get_jobject())
, exported(get_jobject())
{
}



local_ref< java::lang::CharSequence > android::content::pm::ComponentInfo::loadLabel(local_ref< android::content::pm::PackageManager > const &a0)
{
	return call_method<
		android::content::pm::ComponentInfo::J2CPP_CLASS_NAME,
		android::content::pm::ComponentInfo::J2CPP_METHOD_NAME(3),
		android::content::pm::ComponentInfo::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::lang::CharSequence > >
	(get_jobject(), a0);
}

jint android::content::pm::ComponentInfo::getIconResource()
{
	return call_method<
		android::content::pm::ComponentInfo::J2CPP_CLASS_NAME,
		android::content::pm::ComponentInfo::J2CPP_METHOD_NAME(4),
		android::content::pm::ComponentInfo::J2CPP_METHOD_SIGNATURE(4), 
		jint >
	(get_jobject());
}



void android::content::pm::ComponentInfo::writeToParcel(local_ref< android::os::Parcel > const &a0, jint a1)
{
	return call_method<
		android::content::pm::ComponentInfo::J2CPP_CLASS_NAME,
		android::content::pm::ComponentInfo::J2CPP_METHOD_NAME(7),
		android::content::pm::ComponentInfo::J2CPP_METHOD_SIGNATURE(7), 
		void >
	(get_jobject(), a0, a1);
}



J2CPP_DEFINE_CLASS(android::content::pm::ComponentInfo,"android/content/pm/ComponentInfo")
J2CPP_DEFINE_METHOD(android::content::pm::ComponentInfo,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::content::pm::ComponentInfo,1,"<init>","(Landroid/content/pm/ComponentInfo;)V")
J2CPP_DEFINE_METHOD(android::content::pm::ComponentInfo,2,"<init>","(Landroid/os/Parcel;)V")
J2CPP_DEFINE_METHOD(android::content::pm::ComponentInfo,3,"loadLabel","(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;")
J2CPP_DEFINE_METHOD(android::content::pm::ComponentInfo,4,"getIconResource","()I")
J2CPP_DEFINE_METHOD(android::content::pm::ComponentInfo,5,"dumpFront","(Landroid/util/Printer;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::content::pm::ComponentInfo,6,"dumpBack","(Landroid/util/Printer;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::content::pm::ComponentInfo,7,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_FIELD(android::content::pm::ComponentInfo,0,"applicationInfo","Landroid/content/pm/ApplicationInfo;")
J2CPP_DEFINE_FIELD(android::content::pm::ComponentInfo,1,"processName","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::content::pm::ComponentInfo,2,"descriptionRes","I")
J2CPP_DEFINE_FIELD(android::content::pm::ComponentInfo,3,"enabled","Z")
J2CPP_DEFINE_FIELD(android::content::pm::ComponentInfo,4,"exported","Z")

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_PM_COMPONENTINFO_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
