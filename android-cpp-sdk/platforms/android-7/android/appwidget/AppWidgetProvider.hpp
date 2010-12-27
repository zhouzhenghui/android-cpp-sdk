/*================================================================================
  code generated by: java2cpp
  class: android.appwidget.AppWidgetProvider
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_APPWIDGET_APPWIDGETPROVIDER_HPP_DECL
#define J2CPP_ANDROID_APPWIDGET_APPWIDGETPROVIDER_HPP_DECL


namespace j2cpp { namespace android { namespace appwidget { class AppWidgetManager; } } }
namespace j2cpp { namespace android { namespace content { class Intent; } } }
namespace j2cpp { namespace android { namespace content { class BroadcastReceiver; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }


#include <android/appwidget/AppWidgetManager.hpp>
#include <android/content/BroadcastReceiver.hpp>
#include <android/content/Context.hpp>
#include <android/content/Intent.hpp>


namespace j2cpp {

namespace android { namespace appwidget {

	class AppWidgetProvider;
	class AppWidgetProvider
		: public cpp_object<AppWidgetProvider>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)

		explicit AppWidgetProvider(jobject jobj)
		: cpp_object<AppWidgetProvider>(jobj)
		{
		}

		operator local_ref<android::content::BroadcastReceiver>() const;


		AppWidgetProvider();
		void onReceive(local_ref< android::content::Context > const&, local_ref< android::content::Intent > const&);
		void onUpdate(local_ref< android::content::Context > const&, local_ref< android::appwidget::AppWidgetManager > const&, local_ref< cpp_int_array<1> > const&);
		void onDeleted(local_ref< android::content::Context > const&, local_ref< cpp_int_array<1> > const&);
		void onEnabled(local_ref< android::content::Context > const&);
		void onDisabled(local_ref< android::content::Context > const&);
	}; //class AppWidgetProvider

} //namespace appwidget
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_APPWIDGET_APPWIDGETPROVIDER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_APPWIDGET_APPWIDGETPROVIDER_HPP_IMPL
#define J2CPP_ANDROID_APPWIDGET_APPWIDGETPROVIDER_HPP_IMPL

namespace j2cpp {



android::appwidget::AppWidgetProvider::operator local_ref<android::content::BroadcastReceiver>() const
{
	return local_ref<android::content::BroadcastReceiver>(get_jtype());
}


android::appwidget::AppWidgetProvider::AppWidgetProvider()
: cpp_object<android::appwidget::AppWidgetProvider>(
	environment::get().get_jenv()->NewObject(
		get_class<android::appwidget::AppWidgetProvider::J2CPP_CLASS_NAME>(),
		get_method_id<android::appwidget::AppWidgetProvider::J2CPP_CLASS_NAME, android::appwidget::AppWidgetProvider::J2CPP_METHOD_NAME(0), android::appwidget::AppWidgetProvider::J2CPP_METHOD_SIGNATURE(0), false>()
	)
)
{
}


void android::appwidget::AppWidgetProvider::onReceive(local_ref< android::content::Context > const &a0, local_ref< android::content::Intent > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::appwidget::AppWidgetProvider::onUpdate(local_ref< android::content::Context > const &a0, local_ref< android::appwidget::AppWidgetManager > const &a1, local_ref< cpp_int_array<1> > const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void android::appwidget::AppWidgetProvider::onDeleted(local_ref< android::content::Context > const &a0, local_ref< cpp_int_array<1> > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::appwidget::AppWidgetProvider::onEnabled(local_ref< android::content::Context > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

void android::appwidget::AppWidgetProvider::onDisabled(local_ref< android::content::Context > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::appwidget::AppWidgetProvider,"android/appwidget/AppWidgetProvider")
J2CPP_DEFINE_METHOD(android::appwidget::AppWidgetProvider,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::appwidget::AppWidgetProvider,1,"onReceive","(Landroid/content/Context;Landroid/content/Intent;)V")
J2CPP_DEFINE_METHOD(android::appwidget::AppWidgetProvider,2,"onUpdate","(Landroid/content/Context;Landroid/appwidget/AppWidgetManager;[I)V")
J2CPP_DEFINE_METHOD(android::appwidget::AppWidgetProvider,3,"onDeleted","(Landroid/content/Context;[I)V")
J2CPP_DEFINE_METHOD(android::appwidget::AppWidgetProvider,4,"onEnabled","(Landroid/content/Context;)V")
J2CPP_DEFINE_METHOD(android::appwidget::AppWidgetProvider,5,"onDisabled","(Landroid/content/Context;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_APPWIDGET_APPWIDGETPROVIDER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
