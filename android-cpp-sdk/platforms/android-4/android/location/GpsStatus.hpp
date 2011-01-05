/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.location.GpsStatus
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_LOCATION_GPSSTATUS_HPP_DECL
#define J2CPP_ANDROID_LOCATION_GPSSTATUS_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Iterable; } } }


#include <java/lang/Iterable.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace location {

	class GpsStatus;
	namespace GpsStatus_ {

		class Listener;
		class Listener
			: public object<Listener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			explicit Listener(jobject jobj)
			: object<Listener>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			void onGpsStatusChanged(jint);
		}; //class Listener

	} //namespace GpsStatus_

	class GpsStatus
		: public object<GpsStatus>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)

		typedef GpsStatus_::Listener Listener;

		explicit GpsStatus(jobject jobj)
		: object<GpsStatus>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		jint getTimeToFirstFix();
		local_ref< java::lang::Iterable > getSatellites();
		jint getMaxSatellites();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > GPS_EVENT_STARTED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > GPS_EVENT_STOPPED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jint > GPS_EVENT_FIRST_FIX;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), jint > GPS_EVENT_SATELLITE_STATUS;
	}; //class GpsStatus

} //namespace location
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_LOCATION_GPSSTATUS_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_LOCATION_GPSSTATUS_HPP_IMPL
#define J2CPP_ANDROID_LOCATION_GPSSTATUS_HPP_IMPL

namespace j2cpp {




android::location::GpsStatus_::Listener::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void android::location::GpsStatus_::Listener::onGpsStatusChanged(jint a0)
{
	return call_method<
		android::location::GpsStatus_::Listener::J2CPP_CLASS_NAME,
		android::location::GpsStatus_::Listener::J2CPP_METHOD_NAME(0),
		android::location::GpsStatus_::Listener::J2CPP_METHOD_SIGNATURE(0), 
		void
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::location::GpsStatus_::Listener,"android/location/GpsStatus$Listener")
J2CPP_DEFINE_METHOD(android::location::GpsStatus_::Listener,0,"onGpsStatusChanged","(I)V")



android::location::GpsStatus::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


jint android::location::GpsStatus::getTimeToFirstFix()
{
	return call_method<
		android::location::GpsStatus::J2CPP_CLASS_NAME,
		android::location::GpsStatus::J2CPP_METHOD_NAME(1),
		android::location::GpsStatus::J2CPP_METHOD_SIGNATURE(1), 
		jint
	>(get_jobject());
}

local_ref< java::lang::Iterable > android::location::GpsStatus::getSatellites()
{
	return call_method<
		android::location::GpsStatus::J2CPP_CLASS_NAME,
		android::location::GpsStatus::J2CPP_METHOD_NAME(2),
		android::location::GpsStatus::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::Iterable >
	>(get_jobject());
}

jint android::location::GpsStatus::getMaxSatellites()
{
	return call_method<
		android::location::GpsStatus::J2CPP_CLASS_NAME,
		android::location::GpsStatus::J2CPP_METHOD_NAME(3),
		android::location::GpsStatus::J2CPP_METHOD_SIGNATURE(3), 
		jint
	>(get_jobject());
}


static_field<
	android::location::GpsStatus::J2CPP_CLASS_NAME,
	android::location::GpsStatus::J2CPP_FIELD_NAME(0),
	android::location::GpsStatus::J2CPP_FIELD_SIGNATURE(0),
	jint
> android::location::GpsStatus::GPS_EVENT_STARTED;

static_field<
	android::location::GpsStatus::J2CPP_CLASS_NAME,
	android::location::GpsStatus::J2CPP_FIELD_NAME(1),
	android::location::GpsStatus::J2CPP_FIELD_SIGNATURE(1),
	jint
> android::location::GpsStatus::GPS_EVENT_STOPPED;

static_field<
	android::location::GpsStatus::J2CPP_CLASS_NAME,
	android::location::GpsStatus::J2CPP_FIELD_NAME(2),
	android::location::GpsStatus::J2CPP_FIELD_SIGNATURE(2),
	jint
> android::location::GpsStatus::GPS_EVENT_FIRST_FIX;

static_field<
	android::location::GpsStatus::J2CPP_CLASS_NAME,
	android::location::GpsStatus::J2CPP_FIELD_NAME(3),
	android::location::GpsStatus::J2CPP_FIELD_SIGNATURE(3),
	jint
> android::location::GpsStatus::GPS_EVENT_SATELLITE_STATUS;


J2CPP_DEFINE_CLASS(android::location::GpsStatus,"android/location/GpsStatus")
J2CPP_DEFINE_METHOD(android::location::GpsStatus,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::location::GpsStatus,1,"getTimeToFirstFix","()I")
J2CPP_DEFINE_METHOD(android::location::GpsStatus,2,"getSatellites","()Ljava/lang/Iterable;")
J2CPP_DEFINE_METHOD(android::location::GpsStatus,3,"getMaxSatellites","()I")
J2CPP_DEFINE_FIELD(android::location::GpsStatus,0,"GPS_EVENT_STARTED","I")
J2CPP_DEFINE_FIELD(android::location::GpsStatus,1,"GPS_EVENT_STOPPED","I")
J2CPP_DEFINE_FIELD(android::location::GpsStatus,2,"GPS_EVENT_FIRST_FIX","I")
J2CPP_DEFINE_FIELD(android::location::GpsStatus,3,"GPS_EVENT_SATELLITE_STATUS","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_LOCATION_GPSSTATUS_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
