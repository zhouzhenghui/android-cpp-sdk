/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.widget.ZoomButton
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_ZOOMBUTTON_HPP_DECL
#define J2CPP_ANDROID_WIDGET_ZOOMBUTTON_HPP_DECL


namespace j2cpp { namespace android { namespace widget { class ImageView; } } }
namespace j2cpp { namespace android { namespace widget { class ImageButton; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }
namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace android { namespace view { class KeyEvent; } } }
namespace j2cpp { namespace android { namespace view { namespace View_ { class OnLongClickListener; } } } }
namespace j2cpp { namespace android { namespace view { namespace accessibility { class AccessibilityEventSource; } } } }
namespace j2cpp { namespace android { namespace view { class MotionEvent; } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { namespace Drawable_ { class Callback; } } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/content/Context.hpp>
#include <android/graphics/drawable/Drawable.hpp>
#include <android/util/AttributeSet.hpp>
#include <android/view/KeyEvent.hpp>
#include <android/view/MotionEvent.hpp>
#include <android/view/View.hpp>
#include <android/view/accessibility/AccessibilityEventSource.hpp>
#include <android/widget/ImageButton.hpp>
#include <android/widget/ImageView.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace widget {

	class ZoomButton;
	class ZoomButton
		: public object<ZoomButton>
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
		: object<ZoomButton>(jobj)
		{
		}

		operator local_ref<android::widget::ImageView>() const;
		operator local_ref<android::widget::ImageButton>() const;
		operator local_ref<android::view::View>() const;
		operator local_ref<android::view::View_::OnLongClickListener>() const;
		operator local_ref<android::view::accessibility::AccessibilityEventSource>() const;
		operator local_ref<android::graphics::drawable::Drawable_::Callback>() const;
		operator local_ref<java::lang::Object>() const;


		ZoomButton(local_ref< android::content::Context > const&);
		ZoomButton(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&);
		ZoomButton(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&, jint);
		jboolean onTouchEvent(local_ref< android::view::MotionEvent >  const&);
		void setZoomSpeed(jlong);
		jboolean onLongClick(local_ref< android::view::View >  const&);
		jboolean onKeyUp(jint, local_ref< android::view::KeyEvent >  const&);
		void setEnabled(jboolean);
		jboolean dispatchUnhandledMove(local_ref< android::view::View >  const&, jint);
	}; //class ZoomButton

} //namespace widget
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_ZOOMBUTTON_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_ZOOMBUTTON_HPP_IMPL
#define J2CPP_ANDROID_WIDGET_ZOOMBUTTON_HPP_IMPL

namespace j2cpp {



android::widget::ZoomButton::operator local_ref<android::widget::ImageView>() const
{
	return local_ref<android::widget::ImageView>(get_jobject());
}

android::widget::ZoomButton::operator local_ref<android::widget::ImageButton>() const
{
	return local_ref<android::widget::ImageButton>(get_jobject());
}

android::widget::ZoomButton::operator local_ref<android::view::View>() const
{
	return local_ref<android::view::View>(get_jobject());
}

android::widget::ZoomButton::operator local_ref<android::view::View_::OnLongClickListener>() const
{
	return local_ref<android::view::View_::OnLongClickListener>(get_jobject());
}

android::widget::ZoomButton::operator local_ref<android::view::accessibility::AccessibilityEventSource>() const
{
	return local_ref<android::view::accessibility::AccessibilityEventSource>(get_jobject());
}

android::widget::ZoomButton::operator local_ref<android::graphics::drawable::Drawable_::Callback>() const
{
	return local_ref<android::graphics::drawable::Drawable_::Callback>(get_jobject());
}

android::widget::ZoomButton::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::widget::ZoomButton::ZoomButton(local_ref< android::content::Context > const &a0)
: object<android::widget::ZoomButton>(
	call_new_object<
		android::widget::ZoomButton::J2CPP_CLASS_NAME,
		android::widget::ZoomButton::J2CPP_METHOD_NAME(0),
		android::widget::ZoomButton::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}



android::widget::ZoomButton::ZoomButton(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1)
: object<android::widget::ZoomButton>(
	call_new_object<
		android::widget::ZoomButton::J2CPP_CLASS_NAME,
		android::widget::ZoomButton::J2CPP_METHOD_NAME(1),
		android::widget::ZoomButton::J2CPP_METHOD_SIGNATURE(1)
	>(a0, a1)
)
{
}



android::widget::ZoomButton::ZoomButton(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1, jint a2)
: object<android::widget::ZoomButton>(
	call_new_object<
		android::widget::ZoomButton::J2CPP_CLASS_NAME,
		android::widget::ZoomButton::J2CPP_METHOD_NAME(2),
		android::widget::ZoomButton::J2CPP_METHOD_SIGNATURE(2)
	>(a0, a1, a2)
)
{
}


jboolean android::widget::ZoomButton::onTouchEvent(local_ref< android::view::MotionEvent > const &a0)
{
	return call_method<
		android::widget::ZoomButton::J2CPP_CLASS_NAME,
		android::widget::ZoomButton::J2CPP_METHOD_NAME(3),
		android::widget::ZoomButton::J2CPP_METHOD_SIGNATURE(3), 
		jboolean
	>(get_jobject(), a0);
}

void android::widget::ZoomButton::setZoomSpeed(jlong a0)
{
	return call_method<
		android::widget::ZoomButton::J2CPP_CLASS_NAME,
		android::widget::ZoomButton::J2CPP_METHOD_NAME(4),
		android::widget::ZoomButton::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0);
}

jboolean android::widget::ZoomButton::onLongClick(local_ref< android::view::View > const &a0)
{
	return call_method<
		android::widget::ZoomButton::J2CPP_CLASS_NAME,
		android::widget::ZoomButton::J2CPP_METHOD_NAME(5),
		android::widget::ZoomButton::J2CPP_METHOD_SIGNATURE(5), 
		jboolean
	>(get_jobject(), a0);
}

jboolean android::widget::ZoomButton::onKeyUp(jint a0, local_ref< android::view::KeyEvent > const &a1)
{
	return call_method<
		android::widget::ZoomButton::J2CPP_CLASS_NAME,
		android::widget::ZoomButton::J2CPP_METHOD_NAME(6),
		android::widget::ZoomButton::J2CPP_METHOD_SIGNATURE(6), 
		jboolean
	>(get_jobject(), a0, a1);
}

void android::widget::ZoomButton::setEnabled(jboolean a0)
{
	return call_method<
		android::widget::ZoomButton::J2CPP_CLASS_NAME,
		android::widget::ZoomButton::J2CPP_METHOD_NAME(7),
		android::widget::ZoomButton::J2CPP_METHOD_SIGNATURE(7), 
		void
	>(get_jobject(), a0);
}

jboolean android::widget::ZoomButton::dispatchUnhandledMove(local_ref< android::view::View > const &a0, jint a1)
{
	return call_method<
		android::widget::ZoomButton::J2CPP_CLASS_NAME,
		android::widget::ZoomButton::J2CPP_METHOD_NAME(8),
		android::widget::ZoomButton::J2CPP_METHOD_SIGNATURE(8), 
		jboolean
	>(get_jobject(), a0, a1);
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
