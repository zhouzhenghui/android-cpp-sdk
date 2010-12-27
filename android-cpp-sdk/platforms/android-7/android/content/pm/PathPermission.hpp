/*================================================================================
  code generated by: java2cpp
  class: android.content.pm.PathPermission
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_PM_PATHPERMISSION_HPP_DECL
#define J2CPP_ANDROID_CONTENT_PM_PATHPERMISSION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace android { namespace os { class Parcel; } } }
namespace j2cpp { namespace android { namespace os { namespace Parcelable_ { class Creator; } } } }
namespace j2cpp { namespace android { namespace os { class PatternMatcher; } } }


#include <android/os/Parcel.hpp>
#include <android/os/Parcelable.hpp>
#include <android/os/PatternMatcher.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace content { namespace pm {

	class PathPermission;
	class PathPermission
		: public cpp_object<PathPermission>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_FIELD(0)

		explicit PathPermission(jobject jobj)
		: cpp_object<PathPermission>(jobj)
		{
		}

		operator local_ref<android::os::PatternMatcher>() const;


		PathPermission(local_ref< java::lang::String > const&, cpp_int const&, local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		PathPermission(local_ref< android::os::Parcel > const&);
		local_ref< java::lang::String > getReadPermission();
		local_ref< java::lang::String > getWritePermission();
		void writeToParcel(local_ref< android::os::Parcel > const&, cpp_int const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< android::os::Parcelable_::Creator > > CREATOR;
	}; //class PathPermission

} //namespace pm
} //namespace content
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_PM_PATHPERMISSION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_PM_PATHPERMISSION_HPP_IMPL
#define J2CPP_ANDROID_CONTENT_PM_PATHPERMISSION_HPP_IMPL

namespace j2cpp {



android::content::pm::PathPermission::operator local_ref<android::os::PatternMatcher>() const
{
	return local_ref<android::os::PatternMatcher>(get_jtype());
}


android::content::pm::PathPermission::PathPermission(local_ref< java::lang::String > const &a0, cpp_int const &a1, local_ref< java::lang::String > const &a2, local_ref< java::lang::String > const &a3)
: cpp_object<android::content::pm::PathPermission>(
	environment::get().get_jenv()->NewObject(
		get_class<android::content::pm::PathPermission::J2CPP_CLASS_NAME>(),
		get_method_id<android::content::pm::PathPermission::J2CPP_CLASS_NAME, android::content::pm::PathPermission::J2CPP_METHOD_NAME(0), android::content::pm::PathPermission::J2CPP_METHOD_SIGNATURE(0), false>(),
		a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
	)
)
{
}



android::content::pm::PathPermission::PathPermission(local_ref< android::os::Parcel > const &a0)
: cpp_object<android::content::pm::PathPermission>(
	environment::get().get_jenv()->NewObject(
		get_class<android::content::pm::PathPermission::J2CPP_CLASS_NAME>(),
		get_method_id<android::content::pm::PathPermission::J2CPP_CLASS_NAME, android::content::pm::PathPermission::J2CPP_METHOD_NAME(1), android::content::pm::PathPermission::J2CPP_METHOD_SIGNATURE(1), false>(),
		a0.get_jtype()
	)
)
{
}


local_ref< java::lang::String > android::content::pm::PathPermission::getReadPermission()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

local_ref< java::lang::String > android::content::pm::PathPermission::getWritePermission()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

void android::content::pm::PathPermission::writeToParcel(local_ref< android::os::Parcel > const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}



static_field<
	android::content::pm::PathPermission::J2CPP_CLASS_NAME,
	android::content::pm::PathPermission::J2CPP_FIELD_NAME(0),
	android::content::pm::PathPermission::J2CPP_FIELD_SIGNATURE(0),
	local_ref< android::os::Parcelable_::Creator >
> android::content::pm::PathPermission::CREATOR;


J2CPP_DEFINE_CLASS(android::content::pm::PathPermission,"android/content/pm/PathPermission")
J2CPP_DEFINE_METHOD(android::content::pm::PathPermission,0,"<init>","(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::content::pm::PathPermission,1,"<init>","(Landroid/os/Parcel;)V")
J2CPP_DEFINE_METHOD(android::content::pm::PathPermission,2,"getReadPermission","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::content::pm::PathPermission,3,"getWritePermission","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::content::pm::PathPermission,4,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_METHOD(android::content::pm::PathPermission,5,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::content::pm::PathPermission,0,"CREATOR","Landroid/os/Parcelable$Creator;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_PM_PATHPERMISSION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
