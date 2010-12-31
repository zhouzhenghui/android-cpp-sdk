/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.content.pm.FeatureInfo
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_PM_FEATUREINFO_HPP_DECL
#define J2CPP_ANDROID_CONTENT_PM_FEATUREINFO_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace os { class Parcelable; } } }
namespace j2cpp { namespace android { namespace os { class Parcel; } } }
namespace j2cpp { namespace android { namespace os { namespace Parcelable_ { class Creator; } } } }


#include <android/os/Parcel.hpp>
#include <android/os/Parcelable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace content { namespace pm {

	class FeatureInfo;
	class FeatureInfo
		: public object<FeatureInfo>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)

		explicit FeatureInfo(jobject jobj)
		: object<FeatureInfo>(jobj)
		, name(jobj)
		, reqGlEsVersion(jobj)
		, flags(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::os::Parcelable>() const;


		FeatureInfo();
		FeatureInfo(local_ref< android::content::pm::FeatureInfo > const&);
		local_ref< java::lang::String > toString();
		jint describeContents();
		void writeToParcel(local_ref< android::os::Parcel >  const&, jint);
		local_ref< java::lang::String > getGlEsVersion();

		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::String > > name;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > GL_ES_VERSION_UNDEFINED;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jint > reqGlEsVersion;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), jint > FLAG_REQUIRED;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), jint > flags;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), local_ref< android::os::Parcelable_::Creator > > CREATOR;
	}; //class FeatureInfo

} //namespace pm
} //namespace content
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_PM_FEATUREINFO_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_PM_FEATUREINFO_HPP_IMPL
#define J2CPP_ANDROID_CONTENT_PM_FEATUREINFO_HPP_IMPL

namespace j2cpp {



android::content::pm::FeatureInfo::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::content::pm::FeatureInfo::operator local_ref<android::os::Parcelable>() const
{
	return local_ref<android::os::Parcelable>(get_jobject());
}


android::content::pm::FeatureInfo::FeatureInfo()
: object<android::content::pm::FeatureInfo>(
	call_new_object<
		android::content::pm::FeatureInfo::J2CPP_CLASS_NAME,
		android::content::pm::FeatureInfo::J2CPP_METHOD_NAME(0),
		android::content::pm::FeatureInfo::J2CPP_METHOD_SIGNATURE(0)>
	()
)
, name(get_jobject())
, reqGlEsVersion(get_jobject())
, flags(get_jobject())
{
}



android::content::pm::FeatureInfo::FeatureInfo(local_ref< android::content::pm::FeatureInfo > const &a0)
: object<android::content::pm::FeatureInfo>(
	call_new_object<
		android::content::pm::FeatureInfo::J2CPP_CLASS_NAME,
		android::content::pm::FeatureInfo::J2CPP_METHOD_NAME(1),
		android::content::pm::FeatureInfo::J2CPP_METHOD_SIGNATURE(1)>
	(a0)
)
, name(get_jobject())
, reqGlEsVersion(get_jobject())
, flags(get_jobject())
{
}


local_ref< java::lang::String > android::content::pm::FeatureInfo::toString()
{
	return call_method<
		android::content::pm::FeatureInfo::J2CPP_CLASS_NAME,
		android::content::pm::FeatureInfo::J2CPP_METHOD_NAME(2),
		android::content::pm::FeatureInfo::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::String > >
	(get_jobject());
}

jint android::content::pm::FeatureInfo::describeContents()
{
	return call_method<
		android::content::pm::FeatureInfo::J2CPP_CLASS_NAME,
		android::content::pm::FeatureInfo::J2CPP_METHOD_NAME(3),
		android::content::pm::FeatureInfo::J2CPP_METHOD_SIGNATURE(3), 
		jint >
	(get_jobject());
}

void android::content::pm::FeatureInfo::writeToParcel(local_ref< android::os::Parcel > const &a0, jint a1)
{
	return call_method<
		android::content::pm::FeatureInfo::J2CPP_CLASS_NAME,
		android::content::pm::FeatureInfo::J2CPP_METHOD_NAME(4),
		android::content::pm::FeatureInfo::J2CPP_METHOD_SIGNATURE(4), 
		void >
	(get_jobject(), a0, a1);
}

local_ref< java::lang::String > android::content::pm::FeatureInfo::getGlEsVersion()
{
	return call_method<
		android::content::pm::FeatureInfo::J2CPP_CLASS_NAME,
		android::content::pm::FeatureInfo::J2CPP_METHOD_NAME(5),
		android::content::pm::FeatureInfo::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::lang::String > >
	(get_jobject());
}



static_field<
	android::content::pm::FeatureInfo::J2CPP_CLASS_NAME,
	android::content::pm::FeatureInfo::J2CPP_FIELD_NAME(1),
	android::content::pm::FeatureInfo::J2CPP_FIELD_SIGNATURE(1),
	jint
> android::content::pm::FeatureInfo::GL_ES_VERSION_UNDEFINED;

static_field<
	android::content::pm::FeatureInfo::J2CPP_CLASS_NAME,
	android::content::pm::FeatureInfo::J2CPP_FIELD_NAME(3),
	android::content::pm::FeatureInfo::J2CPP_FIELD_SIGNATURE(3),
	jint
> android::content::pm::FeatureInfo::FLAG_REQUIRED;

static_field<
	android::content::pm::FeatureInfo::J2CPP_CLASS_NAME,
	android::content::pm::FeatureInfo::J2CPP_FIELD_NAME(5),
	android::content::pm::FeatureInfo::J2CPP_FIELD_SIGNATURE(5),
	local_ref< android::os::Parcelable_::Creator >
> android::content::pm::FeatureInfo::CREATOR;


J2CPP_DEFINE_CLASS(android::content::pm::FeatureInfo,"android/content/pm/FeatureInfo")
J2CPP_DEFINE_METHOD(android::content::pm::FeatureInfo,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::content::pm::FeatureInfo,1,"<init>","(Landroid/content/pm/FeatureInfo;)V")
J2CPP_DEFINE_METHOD(android::content::pm::FeatureInfo,2,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::content::pm::FeatureInfo,3,"describeContents","()I")
J2CPP_DEFINE_METHOD(android::content::pm::FeatureInfo,4,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_METHOD(android::content::pm::FeatureInfo,5,"getGlEsVersion","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::content::pm::FeatureInfo,6,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::content::pm::FeatureInfo,0,"name","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::content::pm::FeatureInfo,1,"GL_ES_VERSION_UNDEFINED","I")
J2CPP_DEFINE_FIELD(android::content::pm::FeatureInfo,2,"reqGlEsVersion","I")
J2CPP_DEFINE_FIELD(android::content::pm::FeatureInfo,3,"FLAG_REQUIRED","I")
J2CPP_DEFINE_FIELD(android::content::pm::FeatureInfo,4,"flags","I")
J2CPP_DEFINE_FIELD(android::content::pm::FeatureInfo,5,"CREATOR","Landroid/os/Parcelable$Creator;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_PM_FEATUREINFO_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
