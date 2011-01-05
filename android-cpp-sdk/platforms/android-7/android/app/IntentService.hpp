/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.app.IntentService
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_APP_INTENTSERVICE_HPP_DECL
#define J2CPP_ANDROID_APP_INTENTSERVICE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace android { namespace app { class Service; } } }
namespace j2cpp { namespace android { namespace content { class Intent; } } }
namespace j2cpp { namespace android { namespace content { class ComponentCallbacks; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace content { class ContextWrapper; } } }
namespace j2cpp { namespace android { namespace os { class IBinder; } } }


#include <android/app/Service.hpp>
#include <android/content/ComponentCallbacks.hpp>
#include <android/content/Context.hpp>
#include <android/content/ContextWrapper.hpp>
#include <android/content/Intent.hpp>
#include <android/os/IBinder.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace app {

	class IntentService;
	class IntentService
		: public object<IntentService>
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

		explicit IntentService(jobject jobj)
		: object<IntentService>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::app::Service>() const;
		operator local_ref<android::content::ComponentCallbacks>() const;
		operator local_ref<android::content::Context>() const;
		operator local_ref<android::content::ContextWrapper>() const;


		IntentService(local_ref< java::lang::String > const&);
		void setIntentRedelivery(jboolean);
		void onCreate();
		void onStart(local_ref< android::content::Intent >  const&, jint);
		jint onStartCommand(local_ref< android::content::Intent >  const&, jint, jint);
		void onDestroy();
		local_ref< android::os::IBinder > onBind(local_ref< android::content::Intent >  const&);
	}; //class IntentService

} //namespace app
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_APP_INTENTSERVICE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_APP_INTENTSERVICE_HPP_IMPL
#define J2CPP_ANDROID_APP_INTENTSERVICE_HPP_IMPL

namespace j2cpp {



android::app::IntentService::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::app::IntentService::operator local_ref<android::app::Service>() const
{
	return local_ref<android::app::Service>(get_jobject());
}

android::app::IntentService::operator local_ref<android::content::ComponentCallbacks>() const
{
	return local_ref<android::content::ComponentCallbacks>(get_jobject());
}

android::app::IntentService::operator local_ref<android::content::Context>() const
{
	return local_ref<android::content::Context>(get_jobject());
}

android::app::IntentService::operator local_ref<android::content::ContextWrapper>() const
{
	return local_ref<android::content::ContextWrapper>(get_jobject());
}


android::app::IntentService::IntentService(local_ref< java::lang::String > const &a0)
: object<android::app::IntentService>(
	call_new_object<
		android::app::IntentService::J2CPP_CLASS_NAME,
		android::app::IntentService::J2CPP_METHOD_NAME(0),
		android::app::IntentService::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}


void android::app::IntentService::setIntentRedelivery(jboolean a0)
{
	return call_method<
		android::app::IntentService::J2CPP_CLASS_NAME,
		android::app::IntentService::J2CPP_METHOD_NAME(1),
		android::app::IntentService::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject(), a0);
}

void android::app::IntentService::onCreate()
{
	return call_method<
		android::app::IntentService::J2CPP_CLASS_NAME,
		android::app::IntentService::J2CPP_METHOD_NAME(2),
		android::app::IntentService::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject());
}

void android::app::IntentService::onStart(local_ref< android::content::Intent > const &a0, jint a1)
{
	return call_method<
		android::app::IntentService::J2CPP_CLASS_NAME,
		android::app::IntentService::J2CPP_METHOD_NAME(3),
		android::app::IntentService::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0, a1);
}

jint android::app::IntentService::onStartCommand(local_ref< android::content::Intent > const &a0, jint a1, jint a2)
{
	return call_method<
		android::app::IntentService::J2CPP_CLASS_NAME,
		android::app::IntentService::J2CPP_METHOD_NAME(4),
		android::app::IntentService::J2CPP_METHOD_SIGNATURE(4), 
		jint
	>(get_jobject(), a0, a1, a2);
}

void android::app::IntentService::onDestroy()
{
	return call_method<
		android::app::IntentService::J2CPP_CLASS_NAME,
		android::app::IntentService::J2CPP_METHOD_NAME(5),
		android::app::IntentService::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject());
}

local_ref< android::os::IBinder > android::app::IntentService::onBind(local_ref< android::content::Intent > const &a0)
{
	return call_method<
		android::app::IntentService::J2CPP_CLASS_NAME,
		android::app::IntentService::J2CPP_METHOD_NAME(6),
		android::app::IntentService::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< android::os::IBinder >
	>(get_jobject(), a0);
}



J2CPP_DEFINE_CLASS(android::app::IntentService,"android/app/IntentService")
J2CPP_DEFINE_METHOD(android::app::IntentService,0,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::app::IntentService,1,"setIntentRedelivery","(Z)V")
J2CPP_DEFINE_METHOD(android::app::IntentService,2,"onCreate","()V")
J2CPP_DEFINE_METHOD(android::app::IntentService,3,"onStart","(Landroid/content/Intent;I)V")
J2CPP_DEFINE_METHOD(android::app::IntentService,4,"onStartCommand","(Landroid/content/Intent;II)I")
J2CPP_DEFINE_METHOD(android::app::IntentService,5,"onDestroy","()V")
J2CPP_DEFINE_METHOD(android::app::IntentService,6,"onBind","(Landroid/content/Intent;)Landroid/os/IBinder;")
J2CPP_DEFINE_METHOD(android::app::IntentService,7,"onHandleIntent","(Landroid/content/Intent;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_APP_INTENTSERVICE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
