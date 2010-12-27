/*================================================================================
  code generated by: java2cpp
  class: android.widget.Chronometer
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_CHRONOMETER_HPP_DECL
#define J2CPP_ANDROID_WIDGET_CHRONOMETER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace widget { class TextView; } } }
namespace j2cpp { namespace android { namespace widget { namespace Chronometer_ { class OnChronometerTickListener; } } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }


#include <android/content/Context.hpp>
#include <android/util/AttributeSet.hpp>
#include <android/widget/Chronometer.hpp>
#include <android/widget/TextView.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace widget {

	class Chronometer;
	namespace Chronometer_ {

		class OnChronometerTickListener;
		class OnChronometerTickListener
			: public cpp_object<OnChronometerTickListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			explicit OnChronometerTickListener(jobject jobj)
			: cpp_object<OnChronometerTickListener>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			void onChronometerTick(local_ref< android::widget::Chronometer > const&);
		}; //class OnChronometerTickListener

	} //namespace Chronometer_

	class Chronometer
		: public cpp_object<Chronometer>
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
		J2CPP_DECLARE_METHOD(12)

		typedef Chronometer_::OnChronometerTickListener OnChronometerTickListener;

		explicit Chronometer(jobject jobj)
		: cpp_object<Chronometer>(jobj)
		{
		}

		operator local_ref<android::widget::TextView>() const;


		Chronometer(local_ref< android::content::Context > const&);
		Chronometer(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&);
		Chronometer(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&, cpp_int const&);
		void setBase(cpp_long const&);
		cpp_long getBase();
		void setFormat(local_ref< java::lang::String > const&);
		local_ref< java::lang::String > getFormat();
		void setOnChronometerTickListener(local_ref< android::widget::Chronometer_::OnChronometerTickListener > const&);
		local_ref< android::widget::Chronometer_::OnChronometerTickListener > getOnChronometerTickListener();
		void start();
		void stop();
	}; //class Chronometer

} //namespace widget
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_CHRONOMETER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_CHRONOMETER_HPP_IMPL
#define J2CPP_ANDROID_WIDGET_CHRONOMETER_HPP_IMPL

namespace j2cpp {




android::widget::Chronometer_::OnChronometerTickListener::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}

void android::widget::Chronometer_::OnChronometerTickListener::onChronometerTick(local_ref< android::widget::Chronometer > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::widget::Chronometer_::OnChronometerTickListener,"android/widget/Chronometer$OnChronometerTickListener")
J2CPP_DEFINE_METHOD(android::widget::Chronometer_::OnChronometerTickListener,0,"onChronometerTick","(Landroid/widget/Chronometer;)V")



android::widget::Chronometer::operator local_ref<android::widget::TextView>() const
{
	return local_ref<android::widget::TextView>(get_jtype());
}


android::widget::Chronometer::Chronometer(local_ref< android::content::Context > const &a0)
: cpp_object<android::widget::Chronometer>(
	environment::get().get_jenv()->NewObject(
		get_class<android::widget::Chronometer::J2CPP_CLASS_NAME>(),
		get_method_id<android::widget::Chronometer::J2CPP_CLASS_NAME, android::widget::Chronometer::J2CPP_METHOD_NAME(0), android::widget::Chronometer::J2CPP_METHOD_SIGNATURE(0), false>(),
		a0.get_jtype()
	)
)
{
}



android::widget::Chronometer::Chronometer(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1)
: cpp_object<android::widget::Chronometer>(
	environment::get().get_jenv()->NewObject(
		get_class<android::widget::Chronometer::J2CPP_CLASS_NAME>(),
		get_method_id<android::widget::Chronometer::J2CPP_CLASS_NAME, android::widget::Chronometer::J2CPP_METHOD_NAME(1), android::widget::Chronometer::J2CPP_METHOD_SIGNATURE(1), false>(),
		a0.get_jtype(), a1.get_jtype()
	)
)
{
}



android::widget::Chronometer::Chronometer(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1, cpp_int const &a2)
: cpp_object<android::widget::Chronometer>(
	environment::get().get_jenv()->NewObject(
		get_class<android::widget::Chronometer::J2CPP_CLASS_NAME>(),
		get_method_id<android::widget::Chronometer::J2CPP_CLASS_NAME, android::widget::Chronometer::J2CPP_METHOD_NAME(2), android::widget::Chronometer::J2CPP_METHOD_SIGNATURE(2), false>(),
		a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
	)
)
{
}


void android::widget::Chronometer::setBase(cpp_long const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

cpp_long android::widget::Chronometer::getBase()
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

void android::widget::Chronometer::setFormat(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > android::widget::Chronometer::getFormat()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

void android::widget::Chronometer::setOnChronometerTickListener(local_ref< android::widget::Chronometer_::OnChronometerTickListener > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::widget::Chronometer_::OnChronometerTickListener > android::widget::Chronometer::getOnChronometerTickListener()
{
	return local_ref< android::widget::Chronometer_::OnChronometerTickListener >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}

void android::widget::Chronometer::start()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}

void android::widget::Chronometer::stop()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>()
		)
	);
}




J2CPP_DEFINE_CLASS(android::widget::Chronometer,"android/widget/Chronometer")
J2CPP_DEFINE_METHOD(android::widget::Chronometer,0,"<init>","(Landroid/content/Context;)V")
J2CPP_DEFINE_METHOD(android::widget::Chronometer,1,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::widget::Chronometer,2,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;I)V")
J2CPP_DEFINE_METHOD(android::widget::Chronometer,3,"setBase","(J)V")
J2CPP_DEFINE_METHOD(android::widget::Chronometer,4,"getBase","()J")
J2CPP_DEFINE_METHOD(android::widget::Chronometer,5,"setFormat","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::widget::Chronometer,6,"getFormat","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::widget::Chronometer,7,"setOnChronometerTickListener","(Landroid/widget/Chronometer$OnChronometerTickListener;)V")
J2CPP_DEFINE_METHOD(android::widget::Chronometer,8,"getOnChronometerTickListener","()Landroid/widget/Chronometer$OnChronometerTickListener;")
J2CPP_DEFINE_METHOD(android::widget::Chronometer,9,"start","()V")
J2CPP_DEFINE_METHOD(android::widget::Chronometer,10,"stop","()V")
J2CPP_DEFINE_METHOD(android::widget::Chronometer,11,"onDetachedFromWindow","()V")
J2CPP_DEFINE_METHOD(android::widget::Chronometer,12,"onWindowVisibilityChanged","(I)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_CHRONOMETER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
