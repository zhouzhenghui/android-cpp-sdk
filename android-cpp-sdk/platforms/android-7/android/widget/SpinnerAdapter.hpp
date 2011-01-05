/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.widget.SpinnerAdapter
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_SPINNERADAPTER_HPP_DECL
#define J2CPP_ANDROID_WIDGET_SPINNERADAPTER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace android { namespace view { class ViewGroup; } } }
namespace j2cpp { namespace android { namespace widget { class Adapter; } } }


#include <android/view/View.hpp>
#include <android/view/ViewGroup.hpp>
#include <android/widget/Adapter.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace widget {

	class SpinnerAdapter;
	class SpinnerAdapter
		: public object<SpinnerAdapter>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit SpinnerAdapter(jobject jobj)
		: object<SpinnerAdapter>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::widget::Adapter>() const;


		local_ref< android::view::View > getDropDownView(jint, local_ref< android::view::View >  const&, local_ref< android::view::ViewGroup >  const&);
	}; //class SpinnerAdapter

} //namespace widget
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_SPINNERADAPTER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_SPINNERADAPTER_HPP_IMPL
#define J2CPP_ANDROID_WIDGET_SPINNERADAPTER_HPP_IMPL

namespace j2cpp {



android::widget::SpinnerAdapter::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::widget::SpinnerAdapter::operator local_ref<android::widget::Adapter>() const
{
	return local_ref<android::widget::Adapter>(get_jobject());
}

local_ref< android::view::View > android::widget::SpinnerAdapter::getDropDownView(jint a0, local_ref< android::view::View > const &a1, local_ref< android::view::ViewGroup > const &a2)
{
	return call_method<
		android::widget::SpinnerAdapter::J2CPP_CLASS_NAME,
		android::widget::SpinnerAdapter::J2CPP_METHOD_NAME(0),
		android::widget::SpinnerAdapter::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< android::view::View >
	>(get_jobject(), a0, a1, a2);
}


J2CPP_DEFINE_CLASS(android::widget::SpinnerAdapter,"android/widget/SpinnerAdapter")
J2CPP_DEFINE_METHOD(android::widget::SpinnerAdapter,0,"getDropDownView","(ILandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_SPINNERADAPTER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
