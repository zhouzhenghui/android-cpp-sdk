/*================================================================================
  code generated by: java2cpp
  class: android.content.SyncStats
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_SYNCSTATS_HPP_DECL
#define J2CPP_ANDROID_CONTENT_SYNCSTATS_HPP_DECL


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

	class SyncStats;
	class SyncStats
		: public cpp_object<SyncStats>
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
		J2CPP_DECLARE_FIELD(6)
		J2CPP_DECLARE_FIELD(7)
		J2CPP_DECLARE_FIELD(8)
		J2CPP_DECLARE_FIELD(9)

		explicit SyncStats(jobject jobj)
		: cpp_object<SyncStats>(jobj)
, numAuthExceptions(jobj)
, numIoExceptions(jobj)
, numParseExceptions(jobj)
, numConflictDetectedExceptions(jobj)
, numInserts(jobj)
, numUpdates(jobj)
, numDeletes(jobj)
, numEntries(jobj)
, numSkippedEntries(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::os::Parcelable>() const;


		SyncStats();
		SyncStats(local_ref< android::os::Parcel > const&);
		local_ref< java::lang::String > toString();
		void clear();
		cpp_int describeContents();
		void writeToParcel(local_ref< android::os::Parcel > const&, cpp_int const&);

		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_long > numAuthExceptions;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), cpp_long > numIoExceptions;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), cpp_long > numParseExceptions;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), cpp_long > numConflictDetectedExceptions;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), cpp_long > numInserts;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), cpp_long > numUpdates;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), cpp_long > numDeletes;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), cpp_long > numEntries;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), cpp_long > numSkippedEntries;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(9), J2CPP_FIELD_SIGNATURE(9), local_ref< android::os::Parcelable_::Creator > > CREATOR;
	}; //class SyncStats

} //namespace content
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_SYNCSTATS_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_SYNCSTATS_HPP_IMPL
#define J2CPP_ANDROID_CONTENT_SYNCSTATS_HPP_IMPL

namespace j2cpp {



android::content::SyncStats::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}

android::content::SyncStats::operator local_ref<android::os::Parcelable>() const
{
	return local_ref<android::os::Parcelable>(get_jtype());
}


android::content::SyncStats::SyncStats()
: cpp_object<android::content::SyncStats>(
	environment::get().get_jenv()->NewObject(
		get_class<android::content::SyncStats::J2CPP_CLASS_NAME>(),
		get_method_id<android::content::SyncStats::J2CPP_CLASS_NAME, android::content::SyncStats::J2CPP_METHOD_NAME(0), android::content::SyncStats::J2CPP_METHOD_SIGNATURE(0), false>()
	)
)
, numAuthExceptions(get_jtype())
, numIoExceptions(get_jtype())
, numParseExceptions(get_jtype())
, numConflictDetectedExceptions(get_jtype())
, numInserts(get_jtype())
, numUpdates(get_jtype())
, numDeletes(get_jtype())
, numEntries(get_jtype())
, numSkippedEntries(get_jtype())
{
}



android::content::SyncStats::SyncStats(local_ref< android::os::Parcel > const &a0)
: cpp_object<android::content::SyncStats>(
	environment::get().get_jenv()->NewObject(
		get_class<android::content::SyncStats::J2CPP_CLASS_NAME>(),
		get_method_id<android::content::SyncStats::J2CPP_CLASS_NAME, android::content::SyncStats::J2CPP_METHOD_NAME(1), android::content::SyncStats::J2CPP_METHOD_SIGNATURE(1), false>(),
		a0.get_jtype()
	)
)
, numAuthExceptions(get_jtype())
, numIoExceptions(get_jtype())
, numParseExceptions(get_jtype())
, numConflictDetectedExceptions(get_jtype())
, numInserts(get_jtype())
, numUpdates(get_jtype())
, numDeletes(get_jtype())
, numEntries(get_jtype())
, numSkippedEntries(get_jtype())
{
}


local_ref< java::lang::String > android::content::SyncStats::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

void android::content::SyncStats::clear()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

cpp_int android::content::SyncStats::describeContents()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

void android::content::SyncStats::writeToParcel(local_ref< android::os::Parcel > const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}



static_field<
	android::content::SyncStats::J2CPP_CLASS_NAME,
	android::content::SyncStats::J2CPP_FIELD_NAME(9),
	android::content::SyncStats::J2CPP_FIELD_SIGNATURE(9),
	local_ref< android::os::Parcelable_::Creator >
> android::content::SyncStats::CREATOR;


J2CPP_DEFINE_CLASS(android::content::SyncStats,"android/content/SyncStats")
J2CPP_DEFINE_METHOD(android::content::SyncStats,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::content::SyncStats,1,"<init>","(Landroid/os/Parcel;)V")
J2CPP_DEFINE_METHOD(android::content::SyncStats,2,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::content::SyncStats,3,"clear","()V")
J2CPP_DEFINE_METHOD(android::content::SyncStats,4,"describeContents","()I")
J2CPP_DEFINE_METHOD(android::content::SyncStats,5,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_METHOD(android::content::SyncStats,6,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::content::SyncStats,0,"numAuthExceptions","J")
J2CPP_DEFINE_FIELD(android::content::SyncStats,1,"numIoExceptions","J")
J2CPP_DEFINE_FIELD(android::content::SyncStats,2,"numParseExceptions","J")
J2CPP_DEFINE_FIELD(android::content::SyncStats,3,"numConflictDetectedExceptions","J")
J2CPP_DEFINE_FIELD(android::content::SyncStats,4,"numInserts","J")
J2CPP_DEFINE_FIELD(android::content::SyncStats,5,"numUpdates","J")
J2CPP_DEFINE_FIELD(android::content::SyncStats,6,"numDeletes","J")
J2CPP_DEFINE_FIELD(android::content::SyncStats,7,"numEntries","J")
J2CPP_DEFINE_FIELD(android::content::SyncStats,8,"numSkippedEntries","J")
J2CPP_DEFINE_FIELD(android::content::SyncStats,9,"CREATOR","Landroid/os/Parcelable$Creator;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_SYNCSTATS_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
