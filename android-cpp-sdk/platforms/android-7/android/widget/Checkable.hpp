/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.widget.Checkable
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_CHECKABLE_HPP_DECL
#define J2CPP_ANDROID_WIDGET_CHECKABLE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace widget {

	class Checkable;
	class Checkable
		: public object<Checkable>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit Checkable(jobject jobj)
		: object<Checkable>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		void setChecked(jboolean);
		jboolean isChecked();
		void toggle();
	}; //class Checkable

} //namespace widget
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_CHECKABLE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_CHECKABLE_HPP_IMPL
#define J2CPP_ANDROID_WIDGET_CHECKABLE_HPP_IMPL

namespace j2cpp {



android::widget::Checkable::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void android::widget::Checkable::setChecked(jboolean a0)
{
	return call_method<
		android::widget::Checkable::J2CPP_CLASS_NAME,
		android::widget::Checkable::J2CPP_METHOD_NAME(0),
		android::widget::Checkable::J2CPP_METHOD_SIGNATURE(0), 
		void
	>(get_jobject(), a0);
}

jboolean android::widget::Checkable::isChecked()
{
	return call_method<
		android::widget::Checkable::J2CPP_CLASS_NAME,
		android::widget::Checkable::J2CPP_METHOD_NAME(1),
		android::widget::Checkable::J2CPP_METHOD_SIGNATURE(1), 
		jboolean
	>(get_jobject());
}

void android::widget::Checkable::toggle()
{
	return call_method<
		android::widget::Checkable::J2CPP_CLASS_NAME,
		android::widget::Checkable::J2CPP_METHOD_NAME(2),
		android::widget::Checkable::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(android::widget::Checkable,"android/widget/Checkable")
J2CPP_DEFINE_METHOD(android::widget::Checkable,0,"setChecked","(Z)V")
J2CPP_DEFINE_METHOD(android::widget::Checkable,1,"isChecked","()Z")
J2CPP_DEFINE_METHOD(android::widget::Checkable,2,"toggle","()V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_CHECKABLE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
