/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.content.SyncAdapterType
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_SYNCADAPTERTYPE_HPP_DECL
#define J2CPP_ANDROID_CONTENT_SYNCADAPTERTYPE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace android { namespace os { class Parcel; } } }
namespace j2cpp { namespace android { namespace os { class Parcelable; } } }
namespace j2cpp { namespace android { namespace os { namespace Parcelable_ { class Creator; } } } }


#include <android/os/Parcel.hpp>
#include <android/os/Parcelable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace content {

	class SyncAdapterType;
	class SyncAdapterType
		: public object<SyncAdapterType>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)

		explicit SyncAdapterType(jobject jobj)
		: object<SyncAdapterType>(jobj)
		, authority(jobj)
		, accountType(jobj)
		, isKey(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::os::Parcelable>() const;


		SyncAdapterType(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, jboolean, jboolean);
		SyncAdapterType(local_ref< android::os::Parcel > const&);
		jboolean supportsUploading();
		jboolean isUserVisible();
		static local_ref< android::content::SyncAdapterType > newKey(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		jboolean equals(local_ref< java::lang::Object >  const&);
		jint hashCode();
		local_ref< java::lang::String > toString();
		jint describeContents();
		void writeToParcel(local_ref< android::os::Parcel >  const&, jint);

		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::String > > authority;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::lang::String > > accountType;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jboolean > isKey;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< android::os::Parcelable_::Creator > > CREATOR;
	}; //class SyncAdapterType

} //namespace content
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_SYNCADAPTERTYPE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_SYNCADAPTERTYPE_HPP_IMPL
#define J2CPP_ANDROID_CONTENT_SYNCADAPTERTYPE_HPP_IMPL

namespace j2cpp {



android::content::SyncAdapterType::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::content::SyncAdapterType::operator local_ref<android::os::Parcelable>() const
{
	return local_ref<android::os::Parcelable>(get_jobject());
}


android::content::SyncAdapterType::SyncAdapterType(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, jboolean a2, jboolean a3)
: object<android::content::SyncAdapterType>(
	call_new_object<
		android::content::SyncAdapterType::J2CPP_CLASS_NAME,
		android::content::SyncAdapterType::J2CPP_METHOD_NAME(0),
		android::content::SyncAdapterType::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1, a2, a3)
)
, authority(get_jobject())
, accountType(get_jobject())
, isKey(get_jobject())
{
}



android::content::SyncAdapterType::SyncAdapterType(local_ref< android::os::Parcel > const &a0)
: object<android::content::SyncAdapterType>(
	call_new_object<
		android::content::SyncAdapterType::J2CPP_CLASS_NAME,
		android::content::SyncAdapterType::J2CPP_METHOD_NAME(1),
		android::content::SyncAdapterType::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
, authority(get_jobject())
, accountType(get_jobject())
, isKey(get_jobject())
{
}


jboolean android::content::SyncAdapterType::supportsUploading()
{
	return call_method<
		android::content::SyncAdapterType::J2CPP_CLASS_NAME,
		android::content::SyncAdapterType::J2CPP_METHOD_NAME(2),
		android::content::SyncAdapterType::J2CPP_METHOD_SIGNATURE(2), 
		jboolean
	>(get_jobject());
}

jboolean android::content::SyncAdapterType::isUserVisible()
{
	return call_method<
		android::content::SyncAdapterType::J2CPP_CLASS_NAME,
		android::content::SyncAdapterType::J2CPP_METHOD_NAME(3),
		android::content::SyncAdapterType::J2CPP_METHOD_SIGNATURE(3), 
		jboolean
	>(get_jobject());
}

local_ref< android::content::SyncAdapterType > android::content::SyncAdapterType::newKey(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_static_method<
		android::content::SyncAdapterType::J2CPP_CLASS_NAME,
		android::content::SyncAdapterType::J2CPP_METHOD_NAME(4),
		android::content::SyncAdapterType::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< android::content::SyncAdapterType >
	>(a0, a1);
}

jboolean android::content::SyncAdapterType::equals(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		android::content::SyncAdapterType::J2CPP_CLASS_NAME,
		android::content::SyncAdapterType::J2CPP_METHOD_NAME(5),
		android::content::SyncAdapterType::J2CPP_METHOD_SIGNATURE(5), 
		jboolean
	>(get_jobject(), a0);
}

jint android::content::SyncAdapterType::hashCode()
{
	return call_method<
		android::content::SyncAdapterType::J2CPP_CLASS_NAME,
		android::content::SyncAdapterType::J2CPP_METHOD_NAME(6),
		android::content::SyncAdapterType::J2CPP_METHOD_SIGNATURE(6), 
		jint
	>(get_jobject());
}

local_ref< java::lang::String > android::content::SyncAdapterType::toString()
{
	return call_method<
		android::content::SyncAdapterType::J2CPP_CLASS_NAME,
		android::content::SyncAdapterType::J2CPP_METHOD_NAME(7),
		android::content::SyncAdapterType::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::lang::String >
	>(get_jobject());
}

jint android::content::SyncAdapterType::describeContents()
{
	return call_method<
		android::content::SyncAdapterType::J2CPP_CLASS_NAME,
		android::content::SyncAdapterType::J2CPP_METHOD_NAME(8),
		android::content::SyncAdapterType::J2CPP_METHOD_SIGNATURE(8), 
		jint
	>(get_jobject());
}

void android::content::SyncAdapterType::writeToParcel(local_ref< android::os::Parcel > const &a0, jint a1)
{
	return call_method<
		android::content::SyncAdapterType::J2CPP_CLASS_NAME,
		android::content::SyncAdapterType::J2CPP_METHOD_NAME(9),
		android::content::SyncAdapterType::J2CPP_METHOD_SIGNATURE(9), 
		void
	>(get_jobject(), a0, a1);
}



static_field<
	android::content::SyncAdapterType::J2CPP_CLASS_NAME,
	android::content::SyncAdapterType::J2CPP_FIELD_NAME(3),
	android::content::SyncAdapterType::J2CPP_FIELD_SIGNATURE(3),
	local_ref< android::os::Parcelable_::Creator >
> android::content::SyncAdapterType::CREATOR;


J2CPP_DEFINE_CLASS(android::content::SyncAdapterType,"android/content/SyncAdapterType")
J2CPP_DEFINE_METHOD(android::content::SyncAdapterType,0,"<init>","(Ljava/lang/String;Ljava/lang/String;ZZ)V")
J2CPP_DEFINE_METHOD(android::content::SyncAdapterType,1,"<init>","(Landroid/os/Parcel;)V")
J2CPP_DEFINE_METHOD(android::content::SyncAdapterType,2,"supportsUploading","()Z")
J2CPP_DEFINE_METHOD(android::content::SyncAdapterType,3,"isUserVisible","()Z")
J2CPP_DEFINE_METHOD(android::content::SyncAdapterType,4,"newKey","(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SyncAdapterType;")
J2CPP_DEFINE_METHOD(android::content::SyncAdapterType,5,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(android::content::SyncAdapterType,6,"hashCode","()I")
J2CPP_DEFINE_METHOD(android::content::SyncAdapterType,7,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::content::SyncAdapterType,8,"describeContents","()I")
J2CPP_DEFINE_METHOD(android::content::SyncAdapterType,9,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_METHOD(android::content::SyncAdapterType,10,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::content::SyncAdapterType,0,"authority","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::content::SyncAdapterType,1,"accountType","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::content::SyncAdapterType,2,"isKey","Z")
J2CPP_DEFINE_FIELD(android::content::SyncAdapterType,3,"CREATOR","Landroid/os/Parcelable$Creator;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_SYNCADAPTERTYPE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
