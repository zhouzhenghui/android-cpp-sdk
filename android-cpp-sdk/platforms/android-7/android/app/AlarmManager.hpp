/*================================================================================
  code generated by: java2cpp
  class: android.app.AlarmManager
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_APP_ALARMMANAGER_HPP_DECL
#define J2CPP_ANDROID_APP_ALARMMANAGER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace android { namespace app { class PendingIntent; } } }


#include <android/app/PendingIntent.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace app {

	class AlarmManager;
	class AlarmManager
		: public cpp_object<AlarmManager>
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
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)
		J2CPP_DECLARE_FIELD(6)
		J2CPP_DECLARE_FIELD(7)
		J2CPP_DECLARE_FIELD(8)

		explicit AlarmManager(jobject jobj)
		: cpp_object<AlarmManager>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		void set(cpp_int const&, cpp_long const&, local_ref< android::app::PendingIntent > const&);
		void setRepeating(cpp_int const&, cpp_long const&, cpp_long const&, local_ref< android::app::PendingIntent > const&);
		void setInexactRepeating(cpp_int const&, cpp_long const&, cpp_long const&, local_ref< android::app::PendingIntent > const&);
		void cancel(local_ref< android::app::PendingIntent > const&);
		void setTimeZone(local_ref< java::lang::String > const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_int > RTC_WAKEUP;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), cpp_int > RTC;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), cpp_int > ELAPSED_REALTIME_WAKEUP;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), cpp_int > ELAPSED_REALTIME;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), cpp_long > INTERVAL_FIFTEEN_MINUTES;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), cpp_long > INTERVAL_HALF_HOUR;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), cpp_long > INTERVAL_HOUR;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), cpp_long > INTERVAL_HALF_DAY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), cpp_long > INTERVAL_DAY;
	}; //class AlarmManager

} //namespace app
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_APP_ALARMMANAGER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_APP_ALARMMANAGER_HPP_IMPL
#define J2CPP_ANDROID_APP_ALARMMANAGER_HPP_IMPL

namespace j2cpp {



android::app::AlarmManager::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}


void android::app::AlarmManager::set(cpp_int const &a0, cpp_long const &a1, local_ref< android::app::PendingIntent > const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void android::app::AlarmManager::setRepeating(cpp_int const &a0, cpp_long const &a1, cpp_long const &a2, local_ref< android::app::PendingIntent > const &a3)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

void android::app::AlarmManager::setInexactRepeating(cpp_int const &a0, cpp_long const &a1, cpp_long const &a2, local_ref< android::app::PendingIntent > const &a3)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

void android::app::AlarmManager::cancel(local_ref< android::app::PendingIntent > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

void android::app::AlarmManager::setTimeZone(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}


static_field<
	android::app::AlarmManager::J2CPP_CLASS_NAME,
	android::app::AlarmManager::J2CPP_FIELD_NAME(0),
	android::app::AlarmManager::J2CPP_FIELD_SIGNATURE(0),
	cpp_int
> android::app::AlarmManager::RTC_WAKEUP;

static_field<
	android::app::AlarmManager::J2CPP_CLASS_NAME,
	android::app::AlarmManager::J2CPP_FIELD_NAME(1),
	android::app::AlarmManager::J2CPP_FIELD_SIGNATURE(1),
	cpp_int
> android::app::AlarmManager::RTC;

static_field<
	android::app::AlarmManager::J2CPP_CLASS_NAME,
	android::app::AlarmManager::J2CPP_FIELD_NAME(2),
	android::app::AlarmManager::J2CPP_FIELD_SIGNATURE(2),
	cpp_int
> android::app::AlarmManager::ELAPSED_REALTIME_WAKEUP;

static_field<
	android::app::AlarmManager::J2CPP_CLASS_NAME,
	android::app::AlarmManager::J2CPP_FIELD_NAME(3),
	android::app::AlarmManager::J2CPP_FIELD_SIGNATURE(3),
	cpp_int
> android::app::AlarmManager::ELAPSED_REALTIME;

static_field<
	android::app::AlarmManager::J2CPP_CLASS_NAME,
	android::app::AlarmManager::J2CPP_FIELD_NAME(4),
	android::app::AlarmManager::J2CPP_FIELD_SIGNATURE(4),
	cpp_long
> android::app::AlarmManager::INTERVAL_FIFTEEN_MINUTES;

static_field<
	android::app::AlarmManager::J2CPP_CLASS_NAME,
	android::app::AlarmManager::J2CPP_FIELD_NAME(5),
	android::app::AlarmManager::J2CPP_FIELD_SIGNATURE(5),
	cpp_long
> android::app::AlarmManager::INTERVAL_HALF_HOUR;

static_field<
	android::app::AlarmManager::J2CPP_CLASS_NAME,
	android::app::AlarmManager::J2CPP_FIELD_NAME(6),
	android::app::AlarmManager::J2CPP_FIELD_SIGNATURE(6),
	cpp_long
> android::app::AlarmManager::INTERVAL_HOUR;

static_field<
	android::app::AlarmManager::J2CPP_CLASS_NAME,
	android::app::AlarmManager::J2CPP_FIELD_NAME(7),
	android::app::AlarmManager::J2CPP_FIELD_SIGNATURE(7),
	cpp_long
> android::app::AlarmManager::INTERVAL_HALF_DAY;

static_field<
	android::app::AlarmManager::J2CPP_CLASS_NAME,
	android::app::AlarmManager::J2CPP_FIELD_NAME(8),
	android::app::AlarmManager::J2CPP_FIELD_SIGNATURE(8),
	cpp_long
> android::app::AlarmManager::INTERVAL_DAY;


J2CPP_DEFINE_CLASS(android::app::AlarmManager,"android/app/AlarmManager")
J2CPP_DEFINE_METHOD(android::app::AlarmManager,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::app::AlarmManager,1,"set","(IJLandroid/app/PendingIntent;)V")
J2CPP_DEFINE_METHOD(android::app::AlarmManager,2,"setRepeating","(IJJLandroid/app/PendingIntent;)V")
J2CPP_DEFINE_METHOD(android::app::AlarmManager,3,"setInexactRepeating","(IJJLandroid/app/PendingIntent;)V")
J2CPP_DEFINE_METHOD(android::app::AlarmManager,4,"cancel","(Landroid/app/PendingIntent;)V")
J2CPP_DEFINE_METHOD(android::app::AlarmManager,5,"setTimeZone","(Ljava/lang/String;)V")
J2CPP_DEFINE_FIELD(android::app::AlarmManager,0,"RTC_WAKEUP","I")
J2CPP_DEFINE_FIELD(android::app::AlarmManager,1,"RTC","I")
J2CPP_DEFINE_FIELD(android::app::AlarmManager,2,"ELAPSED_REALTIME_WAKEUP","I")
J2CPP_DEFINE_FIELD(android::app::AlarmManager,3,"ELAPSED_REALTIME","I")
J2CPP_DEFINE_FIELD(android::app::AlarmManager,4,"INTERVAL_FIFTEEN_MINUTES","J")
J2CPP_DEFINE_FIELD(android::app::AlarmManager,5,"INTERVAL_HALF_HOUR","J")
J2CPP_DEFINE_FIELD(android::app::AlarmManager,6,"INTERVAL_HOUR","J")
J2CPP_DEFINE_FIELD(android::app::AlarmManager,7,"INTERVAL_HALF_DAY","J")
J2CPP_DEFINE_FIELD(android::app::AlarmManager,8,"INTERVAL_DAY","J")

} //namespace j2cpp

#endif //J2CPP_ANDROID_APP_ALARMMANAGER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
