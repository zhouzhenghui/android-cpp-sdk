/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.location.LocationProvider
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_LOCATION_LOCATIONPROVIDER_HPP_DECL
#define J2CPP_ANDROID_LOCATION_LOCATIONPROVIDER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace location { class Criteria; } } }


#include <android/location/Criteria.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace location {

	class LocationProvider;
	class LocationProvider
		: public object<LocationProvider>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)

		explicit LocationProvider(jobject jobj)
		: object<LocationProvider>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< java::lang::String > getName();
		jboolean meetsCriteria(local_ref< android::location::Criteria >  const&);
		jboolean requiresNetwork();
		jboolean requiresSatellite();
		jboolean requiresCell();
		jboolean hasMonetaryCost();
		jboolean supportsAltitude();
		jboolean supportsSpeed();
		jboolean supportsBearing();
		jint getPowerRequirement();
		jint getAccuracy();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > OUT_OF_SERVICE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > TEMPORARILY_UNAVAILABLE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jint > AVAILABLE;
	}; //class LocationProvider

} //namespace location
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_LOCATION_LOCATIONPROVIDER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_LOCATION_LOCATIONPROVIDER_HPP_IMPL
#define J2CPP_ANDROID_LOCATION_LOCATIONPROVIDER_HPP_IMPL

namespace j2cpp {



android::location::LocationProvider::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


local_ref< java::lang::String > android::location::LocationProvider::getName()
{
	return call_method<
		android::location::LocationProvider::J2CPP_CLASS_NAME,
		android::location::LocationProvider::J2CPP_METHOD_NAME(1),
		android::location::LocationProvider::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::String > >
	(get_jobject());
}

jboolean android::location::LocationProvider::meetsCriteria(local_ref< android::location::Criteria > const &a0)
{
	return call_method<
		android::location::LocationProvider::J2CPP_CLASS_NAME,
		android::location::LocationProvider::J2CPP_METHOD_NAME(2),
		android::location::LocationProvider::J2CPP_METHOD_SIGNATURE(2), 
		jboolean >
	(get_jobject(), a0);
}

jboolean android::location::LocationProvider::requiresNetwork()
{
	return call_method<
		android::location::LocationProvider::J2CPP_CLASS_NAME,
		android::location::LocationProvider::J2CPP_METHOD_NAME(3),
		android::location::LocationProvider::J2CPP_METHOD_SIGNATURE(3), 
		jboolean >
	(get_jobject());
}

jboolean android::location::LocationProvider::requiresSatellite()
{
	return call_method<
		android::location::LocationProvider::J2CPP_CLASS_NAME,
		android::location::LocationProvider::J2CPP_METHOD_NAME(4),
		android::location::LocationProvider::J2CPP_METHOD_SIGNATURE(4), 
		jboolean >
	(get_jobject());
}

jboolean android::location::LocationProvider::requiresCell()
{
	return call_method<
		android::location::LocationProvider::J2CPP_CLASS_NAME,
		android::location::LocationProvider::J2CPP_METHOD_NAME(5),
		android::location::LocationProvider::J2CPP_METHOD_SIGNATURE(5), 
		jboolean >
	(get_jobject());
}

jboolean android::location::LocationProvider::hasMonetaryCost()
{
	return call_method<
		android::location::LocationProvider::J2CPP_CLASS_NAME,
		android::location::LocationProvider::J2CPP_METHOD_NAME(6),
		android::location::LocationProvider::J2CPP_METHOD_SIGNATURE(6), 
		jboolean >
	(get_jobject());
}

jboolean android::location::LocationProvider::supportsAltitude()
{
	return call_method<
		android::location::LocationProvider::J2CPP_CLASS_NAME,
		android::location::LocationProvider::J2CPP_METHOD_NAME(7),
		android::location::LocationProvider::J2CPP_METHOD_SIGNATURE(7), 
		jboolean >
	(get_jobject());
}

jboolean android::location::LocationProvider::supportsSpeed()
{
	return call_method<
		android::location::LocationProvider::J2CPP_CLASS_NAME,
		android::location::LocationProvider::J2CPP_METHOD_NAME(8),
		android::location::LocationProvider::J2CPP_METHOD_SIGNATURE(8), 
		jboolean >
	(get_jobject());
}

jboolean android::location::LocationProvider::supportsBearing()
{
	return call_method<
		android::location::LocationProvider::J2CPP_CLASS_NAME,
		android::location::LocationProvider::J2CPP_METHOD_NAME(9),
		android::location::LocationProvider::J2CPP_METHOD_SIGNATURE(9), 
		jboolean >
	(get_jobject());
}

jint android::location::LocationProvider::getPowerRequirement()
{
	return call_method<
		android::location::LocationProvider::J2CPP_CLASS_NAME,
		android::location::LocationProvider::J2CPP_METHOD_NAME(10),
		android::location::LocationProvider::J2CPP_METHOD_SIGNATURE(10), 
		jint >
	(get_jobject());
}

jint android::location::LocationProvider::getAccuracy()
{
	return call_method<
		android::location::LocationProvider::J2CPP_CLASS_NAME,
		android::location::LocationProvider::J2CPP_METHOD_NAME(11),
		android::location::LocationProvider::J2CPP_METHOD_SIGNATURE(11), 
		jint >
	(get_jobject());
}


static_field<
	android::location::LocationProvider::J2CPP_CLASS_NAME,
	android::location::LocationProvider::J2CPP_FIELD_NAME(0),
	android::location::LocationProvider::J2CPP_FIELD_SIGNATURE(0),
	jint
> android::location::LocationProvider::OUT_OF_SERVICE;

static_field<
	android::location::LocationProvider::J2CPP_CLASS_NAME,
	android::location::LocationProvider::J2CPP_FIELD_NAME(1),
	android::location::LocationProvider::J2CPP_FIELD_SIGNATURE(1),
	jint
> android::location::LocationProvider::TEMPORARILY_UNAVAILABLE;

static_field<
	android::location::LocationProvider::J2CPP_CLASS_NAME,
	android::location::LocationProvider::J2CPP_FIELD_NAME(2),
	android::location::LocationProvider::J2CPP_FIELD_SIGNATURE(2),
	jint
> android::location::LocationProvider::AVAILABLE;


J2CPP_DEFINE_CLASS(android::location::LocationProvider,"android/location/LocationProvider")
J2CPP_DEFINE_METHOD(android::location::LocationProvider,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::location::LocationProvider,1,"getName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::location::LocationProvider,2,"meetsCriteria","(Landroid/location/Criteria;)Z")
J2CPP_DEFINE_METHOD(android::location::LocationProvider,3,"requiresNetwork","()Z")
J2CPP_DEFINE_METHOD(android::location::LocationProvider,4,"requiresSatellite","()Z")
J2CPP_DEFINE_METHOD(android::location::LocationProvider,5,"requiresCell","()Z")
J2CPP_DEFINE_METHOD(android::location::LocationProvider,6,"hasMonetaryCost","()Z")
J2CPP_DEFINE_METHOD(android::location::LocationProvider,7,"supportsAltitude","()Z")
J2CPP_DEFINE_METHOD(android::location::LocationProvider,8,"supportsSpeed","()Z")
J2CPP_DEFINE_METHOD(android::location::LocationProvider,9,"supportsBearing","()Z")
J2CPP_DEFINE_METHOD(android::location::LocationProvider,10,"getPowerRequirement","()I")
J2CPP_DEFINE_METHOD(android::location::LocationProvider,11,"getAccuracy","()I")
J2CPP_DEFINE_FIELD(android::location::LocationProvider,0,"OUT_OF_SERVICE","I")
J2CPP_DEFINE_FIELD(android::location::LocationProvider,1,"TEMPORARILY_UNAVAILABLE","I")
J2CPP_DEFINE_FIELD(android::location::LocationProvider,2,"AVAILABLE","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_LOCATION_LOCATIONPROVIDER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
