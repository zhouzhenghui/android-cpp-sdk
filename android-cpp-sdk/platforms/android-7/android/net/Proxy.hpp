/*================================================================================
  code generated by: java2cpp
  class: android.net.Proxy
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_NET_PROXY_HPP_DECL
#define J2CPP_ANDROID_NET_PROXY_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }


#include <android/content/Context.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace net {

	class Proxy;
	class Proxy
		: public cpp_object<Proxy>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_FIELD(0)

		explicit Proxy(jobject jobj)
		: cpp_object<Proxy>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		Proxy();
		static local_ref< java::lang::String > getHost(local_ref< android::content::Context > const&);
		static cpp_int getPort(local_ref< android::content::Context > const&);
		static local_ref< java::lang::String > getDefaultHost();
		static cpp_int getDefaultPort();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::String > > PROXY_CHANGE_ACTION;
	}; //class Proxy

} //namespace net
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_NET_PROXY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_NET_PROXY_HPP_IMPL
#define J2CPP_ANDROID_NET_PROXY_HPP_IMPL

namespace j2cpp {



android::net::Proxy::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}


android::net::Proxy::Proxy()
: cpp_object<android::net::Proxy>(
	environment::get().get_jenv()->NewObject(
		get_class<android::net::Proxy::J2CPP_CLASS_NAME>(),
		get_method_id<android::net::Proxy::J2CPP_CLASS_NAME, android::net::Proxy::J2CPP_METHOD_NAME(0), android::net::Proxy::J2CPP_METHOD_SIGNATURE(0), false>()
	)
)
{
}


local_ref< java::lang::String > android::net::Proxy::getHost(local_ref< android::content::Context > const &a0)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), true>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::net::Proxy::getPort(local_ref< android::content::Context > const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallStaticIntMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), true>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > android::net::Proxy::getDefaultHost()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), true>()
		)
	);
}

cpp_int android::net::Proxy::getDefaultPort()
{
	return cpp_int(
		environment::get().get_jenv()->CallStaticIntMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), true>()
		)
	);
}


static_field<
	android::net::Proxy::J2CPP_CLASS_NAME,
	android::net::Proxy::J2CPP_FIELD_NAME(0),
	android::net::Proxy::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::lang::String >
> android::net::Proxy::PROXY_CHANGE_ACTION;


J2CPP_DEFINE_CLASS(android::net::Proxy,"android/net/Proxy")
J2CPP_DEFINE_METHOD(android::net::Proxy,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::net::Proxy,1,"getHost","(Landroid/content/Context;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::net::Proxy,2,"getPort","(Landroid/content/Context;)I")
J2CPP_DEFINE_METHOD(android::net::Proxy,3,"getDefaultHost","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::net::Proxy,4,"getDefaultPort","()I")
J2CPP_DEFINE_FIELD(android::net::Proxy,0,"PROXY_CHANGE_ACTION","Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_NET_PROXY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
