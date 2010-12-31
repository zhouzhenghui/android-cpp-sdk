/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.net.DhcpInfo
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_NET_DHCPINFO_HPP_DECL
#define J2CPP_ANDROID_NET_DHCPINFO_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace os { class Parcelable; } } }
namespace j2cpp { namespace android { namespace os { class Parcel; } } }


#include <android/os/Parcel.hpp>
#include <android/os/Parcelable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace net {

	class DhcpInfo;
	class DhcpInfo
		: public object<DhcpInfo>
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
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)
		J2CPP_DECLARE_FIELD(6)

		explicit DhcpInfo(jobject jobj)
		: object<DhcpInfo>(jobj)
		, ipAddress(jobj)
		, gateway(jobj)
		, netmask(jobj)
		, dns1(jobj)
		, dns2(jobj)
		, serverAddress(jobj)
		, leaseDuration(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::os::Parcelable>() const;


		DhcpInfo();
		local_ref< java::lang::String > toString();
		jint describeContents();
		void writeToParcel(local_ref< android::os::Parcel >  const&, jint);

		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > ipAddress;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > gateway;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jint > netmask;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), jint > dns1;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), jint > dns2;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), jint > serverAddress;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), jint > leaseDuration;
	}; //class DhcpInfo

} //namespace net
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_NET_DHCPINFO_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_NET_DHCPINFO_HPP_IMPL
#define J2CPP_ANDROID_NET_DHCPINFO_HPP_IMPL

namespace j2cpp {



android::net::DhcpInfo::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::net::DhcpInfo::operator local_ref<android::os::Parcelable>() const
{
	return local_ref<android::os::Parcelable>(get_jobject());
}


android::net::DhcpInfo::DhcpInfo()
: object<android::net::DhcpInfo>(
	call_new_object<
		android::net::DhcpInfo::J2CPP_CLASS_NAME,
		android::net::DhcpInfo::J2CPP_METHOD_NAME(0),
		android::net::DhcpInfo::J2CPP_METHOD_SIGNATURE(0)>
	()
)
, ipAddress(get_jobject())
, gateway(get_jobject())
, netmask(get_jobject())
, dns1(get_jobject())
, dns2(get_jobject())
, serverAddress(get_jobject())
, leaseDuration(get_jobject())
{
}


local_ref< java::lang::String > android::net::DhcpInfo::toString()
{
	return call_method<
		android::net::DhcpInfo::J2CPP_CLASS_NAME,
		android::net::DhcpInfo::J2CPP_METHOD_NAME(1),
		android::net::DhcpInfo::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::String > >
	(get_jobject());
}

jint android::net::DhcpInfo::describeContents()
{
	return call_method<
		android::net::DhcpInfo::J2CPP_CLASS_NAME,
		android::net::DhcpInfo::J2CPP_METHOD_NAME(2),
		android::net::DhcpInfo::J2CPP_METHOD_SIGNATURE(2), 
		jint >
	(get_jobject());
}

void android::net::DhcpInfo::writeToParcel(local_ref< android::os::Parcel > const &a0, jint a1)
{
	return call_method<
		android::net::DhcpInfo::J2CPP_CLASS_NAME,
		android::net::DhcpInfo::J2CPP_METHOD_NAME(3),
		android::net::DhcpInfo::J2CPP_METHOD_SIGNATURE(3), 
		void >
	(get_jobject(), a0, a1);
}



J2CPP_DEFINE_CLASS(android::net::DhcpInfo,"android/net/DhcpInfo")
J2CPP_DEFINE_METHOD(android::net::DhcpInfo,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::net::DhcpInfo,1,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::net::DhcpInfo,2,"describeContents","()I")
J2CPP_DEFINE_METHOD(android::net::DhcpInfo,3,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_FIELD(android::net::DhcpInfo,0,"ipAddress","I")
J2CPP_DEFINE_FIELD(android::net::DhcpInfo,1,"gateway","I")
J2CPP_DEFINE_FIELD(android::net::DhcpInfo,2,"netmask","I")
J2CPP_DEFINE_FIELD(android::net::DhcpInfo,3,"dns1","I")
J2CPP_DEFINE_FIELD(android::net::DhcpInfo,4,"dns2","I")
J2CPP_DEFINE_FIELD(android::net::DhcpInfo,5,"serverAddress","I")
J2CPP_DEFINE_FIELD(android::net::DhcpInfo,6,"leaseDuration","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_NET_DHCPINFO_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
