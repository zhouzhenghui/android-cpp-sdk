/*================================================================================
  code generated by: java2cpp
  class: android.widget.ZoomButton
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_ZOOMBUTTON_HPP_DECL
#define J2CPP_ANDROID_WIDGET_ZOOMBUTTON_HPP_DECL


namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace android { namespace view { class KeyEvent; } } }
namespace j2cpp { namespace android { namespace view { namespace View_ { class OnLongClickListener; } } } }
namespace j2cpp { namespace android { namespace view { class MotionEvent; } } }
namespace j2cpp { namespace android { namespace widget { class ImageButton; } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }


#include <android/content/Context.hpp>
#include <android/util/AttributeSet.hpp>
#include <android/view/KeyEvent.hpp>
#include <android/view/MotionEvent.hpp>
#include <android/view/View.hpp>
#include <android/widget/ImageButton.hpp>


namespace j2cpp {

namespace android { namespace widget {

	class ZoomButton;
	class ZoomButton
		: public cpp_object<ZoomButton>
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

		explicit ZoomButton(jobject jobj)
		: cpp_object<ZoomButton>(jobj)
		{
		}

		operator local_ref<android::widget::ImageButton>() const;
		operator local_ref<android::view::View_::OnLongClickListener>() const;


		ZoomButton(local_ref< android::content::Context > const&);
		ZoomButton(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&);
		ZoomButton(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&, cpp_int const&);
		cpp_boolean onTouchEvent(local_ref< android::view::MotionEvent > const&);
		void setZoomSpeed(cpp_long const&);
		cpp_boolean onLongClick(local_ref< android::view::View > const&);
		cpp_boolean onKeyUp(cpp_int const&, local_ref< android::view::KeyEvent > const&);
		void setEnabled(cpp_boolean const&);
		cpp_boolean dispatchUnhandledMove(local_ref< android::view::View > const&, cpp_int const&);
	}; //class ZoomButton

} //namespace widget
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_ZOOMBUTTON_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_ZOOMBUTTON_HPP_IMPL
#define J2CPP_ANDROID_WIDGET_ZOOMBUTTON_HPP_IMPL

namespace j2cpp {



android::widget::ZoomButton::operator local_ref<android::widget::ImageButton>() const
{
	return local_ref<android::widget::ImageButton>(get_jtype());
}

android::widget::ZoomButton::operator local_ref<android::view::View_::OnLongClickListener>() const
{
	return local_ref<android::view::View_::OnLongClickListener>(get_jtype());
}


android::widget::ZoomButton::ZoomButton(local_ref< android::content::Context > const &a0)
: cpp_object<android::widget::ZoomButton>(
	environment::get().get_jenv()->NewObject(
		get_class<android::widget::ZoomButton::J2CPP_CLASS_NAME>(),
		get_method_id<android::widget::ZoomButton::J2CPP_CLASS_NAME, android::widget::ZoomButton::J2CPP_METHOD_NAME(0), android::widget::ZoomButton::J2CPP_METHOD_SIGNATURE(0), false>(),
		a0.get_jtype()
	)
)
{
}



android::widget::ZoomButton::ZoomButton(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1)
: cpp_object<android::widget::ZoomButton>(
	environment::get().get_jenv()->NewObject(
		get_class<android::widget::ZoomButton::J2CPP_CLASS_NAME>(),
		get_method_id<android::widget::ZoomButton::J2CPP_CLASS_NAME, android::widget::ZoomButton::J2CPP_METHOD_NAME(1), android::widget::ZoomButton::J2CPP_METHOD_SIGNATURE(1), false>(),
		a0.get_jtype(), a1.get_jtype()
	)
)
{
}



android::widget::ZoomButton::ZoomButton(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1, cpp_int const &a2)
: cpp_object<android::widget::ZoomButton>(
	environment::get().get_jenv()->NewObject(
		get_class<android::widget::ZoomButton::J2CPP_CLASS_NAME>(),
		get_method_id<android::widget::ZoomButton::J2CPP_CLASS_NAME, android::widget::ZoomButton::J2CPP_METHOD_NAME(2), android::widget::ZoomButton::J2CPP_METHOD_SIGNATURE(2), false>(),
		a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
	)
)
{
}


cpp_boolean android::widget::ZoomButton::onTouchEvent(local_ref< android::view::MotionEvent > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

void android::widget::ZoomButton::setZoomSpeed(cpp_long const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::widget::ZoomButton::onLongClick(local_ref< android::view::View > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::widget::ZoomButton::onKeyUp(cpp_int const &a0, local_ref< android::view::KeyEvent > const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::widget::ZoomButton::setEnabled(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::widget::ZoomButton::dispatchUnhandledMove(local_ref< android::view::View > const &a0, cpp_int const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::widget::ZoomButton,"android/widget/ZoomButton")
J2CPP_DEFINE_METHOD(android::widget::ZoomButton,0,"<init>","(Landroid/content/Context;)V")
J2CPP_DEFINE_METHOD(android::widget::ZoomButton,1,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::widget::ZoomButton,2,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;I)V")
J2CPP_DEFINE_METHOD(android::widget::ZoomButton,3,"onTouchEvent","(Landroid/view/MotionEvent;)Z")
J2CPP_DEFINE_METHOD(android::widget::ZoomButton,4,"setZoomSpeed","(J)V")
J2CPP_DEFINE_METHOD(android::widget::ZoomButton,5,"onLongClick","(Landroid/view/View;)Z")
J2CPP_DEFINE_METHOD(android::widget::ZoomButton,6,"onKeyUp","(ILandroid/view/KeyEvent;)Z")
J2CPP_DEFINE_METHOD(android::widget::ZoomButton,7,"setEnabled","(Z)V")
J2CPP_DEFINE_METHOD(android::widget::ZoomButton,8,"dispatchUnhandledMove","(Landroid/view/View;I)Z")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_ZOOMBUTTON_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
