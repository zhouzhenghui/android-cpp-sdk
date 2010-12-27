/*================================================================================
  code generated by: java2cpp
  class: android.content.AbstractThreadedSyncAdapter
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_ABSTRACTTHREADEDSYNCADAPTER_HPP_DECL
#define J2CPP_ANDROID_CONTENT_ABSTRACTTHREADEDSYNCADAPTER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace android { namespace accounts { class Account; } } }
namespace j2cpp { namespace android { namespace content { class ContentProviderClient; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace content { class SyncResult; } } }
namespace j2cpp { namespace android { namespace os { class IBinder; } } }
namespace j2cpp { namespace android { namespace os { class Bundle; } } }


#include <android/accounts/Account.hpp>
#include <android/content/ContentProviderClient.hpp>
#include <android/content/Context.hpp>
#include <android/content/SyncResult.hpp>
#include <android/os/Bundle.hpp>
#include <android/os/IBinder.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace content {

	class AbstractThreadedSyncAdapter;
	class AbstractThreadedSyncAdapter
		: public cpp_object<AbstractThreadedSyncAdapter>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_FIELD(0)

		explicit AbstractThreadedSyncAdapter(jobject jobj)
		: cpp_object<AbstractThreadedSyncAdapter>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		AbstractThreadedSyncAdapter(local_ref< android::content::Context > const&, cpp_boolean const&);
		local_ref< android::content::Context > getContext();
		local_ref< android::os::IBinder > getSyncAdapterBinder();
		void onPerformSync(local_ref< android::accounts::Account > const&, local_ref< android::os::Bundle > const&, local_ref< java::lang::String > const&, local_ref< android::content::ContentProviderClient > const&, local_ref< android::content::SyncResult > const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_int > LOG_SYNC_DETAILS;
	}; //class AbstractThreadedSyncAdapter

} //namespace content
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_ABSTRACTTHREADEDSYNCADAPTER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_ABSTRACTTHREADEDSYNCADAPTER_HPP_IMPL
#define J2CPP_ANDROID_CONTENT_ABSTRACTTHREADEDSYNCADAPTER_HPP_IMPL

namespace j2cpp {



android::content::AbstractThreadedSyncAdapter::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}


android::content::AbstractThreadedSyncAdapter::AbstractThreadedSyncAdapter(local_ref< android::content::Context > const &a0, cpp_boolean const &a1)
: cpp_object<android::content::AbstractThreadedSyncAdapter>(
	environment::get().get_jenv()->NewObject(
		get_class<android::content::AbstractThreadedSyncAdapter::J2CPP_CLASS_NAME>(),
		get_method_id<android::content::AbstractThreadedSyncAdapter::J2CPP_CLASS_NAME, android::content::AbstractThreadedSyncAdapter::J2CPP_METHOD_NAME(0), android::content::AbstractThreadedSyncAdapter::J2CPP_METHOD_SIGNATURE(0), false>(),
		a0.get_jtype(), a1.get_jtype()
	)
)
{
}


local_ref< android::content::Context > android::content::AbstractThreadedSyncAdapter::getContext()
{
	return local_ref< android::content::Context >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

local_ref< android::os::IBinder > android::content::AbstractThreadedSyncAdapter::getSyncAdapterBinder()
{
	return local_ref< android::os::IBinder >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

void android::content::AbstractThreadedSyncAdapter::onPerformSync(local_ref< android::accounts::Account > const &a0, local_ref< android::os::Bundle > const &a1, local_ref< java::lang::String > const &a2, local_ref< android::content::ContentProviderClient > const &a3, local_ref< android::content::SyncResult > const &a4)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype()
		)
	);
}


static_field<
	android::content::AbstractThreadedSyncAdapter::J2CPP_CLASS_NAME,
	android::content::AbstractThreadedSyncAdapter::J2CPP_FIELD_NAME(0),
	android::content::AbstractThreadedSyncAdapter::J2CPP_FIELD_SIGNATURE(0),
	cpp_int
> android::content::AbstractThreadedSyncAdapter::LOG_SYNC_DETAILS;


J2CPP_DEFINE_CLASS(android::content::AbstractThreadedSyncAdapter,"android/content/AbstractThreadedSyncAdapter")
J2CPP_DEFINE_METHOD(android::content::AbstractThreadedSyncAdapter,0,"<init>","(Landroid/content/Context;Z)V")
J2CPP_DEFINE_METHOD(android::content::AbstractThreadedSyncAdapter,1,"getContext","()Landroid/content/Context;")
J2CPP_DEFINE_METHOD(android::content::AbstractThreadedSyncAdapter,2,"getSyncAdapterBinder","()Landroid/os/IBinder;")
J2CPP_DEFINE_METHOD(android::content::AbstractThreadedSyncAdapter,3,"onPerformSync","(Landroid/accounts/Account;Landroid/os/Bundle;Ljava/lang/String;Landroid/content/ContentProviderClient;Landroid/content/SyncResult;)V")
J2CPP_DEFINE_FIELD(android::content::AbstractThreadedSyncAdapter,0,"LOG_SYNC_DETAILS","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_ABSTRACTTHREADEDSYNCADAPTER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
