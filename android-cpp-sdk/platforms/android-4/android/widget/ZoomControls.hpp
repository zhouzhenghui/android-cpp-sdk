/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.widget.ZoomControls
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_ZOOMCONTROLS_HPP_DECL
#define J2CPP_ANDROID_WIDGET_ZOOMCONTROLS_HPP_DECL


namespace j2cpp { namespace android { namespace view { namespace View_ { class OnClickListener; } } } }
namespace j2cpp { namespace android { namespace view { class MotionEvent; } } }
namespace j2cpp { namespace android { namespace widget { class LinearLayout; } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }


#include <android/content/Context.hpp>
#include <android/util/AttributeSet.hpp>
#include <android/view/MotionEvent.hpp>
#include <android/view/View.hpp>
#include <android/widget/LinearLayout.hpp>


namespace j2cpp {

namespace android { namespace widget {

	class ZoomControls;
	class ZoomControls
		: public object<ZoomControls>
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

		explicit ZoomControls(jobject jobj)
		: object<ZoomControls>(jobj)
		{
		}

		operator local_ref<android::widget::LinearLayout>() const;


		ZoomControls(local_ref< android::content::Context > const&);
		ZoomControls(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&);
		void setOnZoomInClickListener(local_ref< android::view::View_::OnClickListener >  const&);
		void setOnZoomOutClickListener(local_ref< android::view::View_::OnClickListener >  const&);
		void setZoomSpeed(jlong);
		jboolean onTouchEvent(local_ref< android::view::MotionEvent >  const&);
		void show();
		void hide();
		void setIsZoomInEnabled(jboolean);
		void setIsZoomOutEnabled(jboolean);
		jboolean hasFocus();
	}; //class ZoomControls

} //namespace widget
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_ZOOMCONTROLS_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_ZOOMCONTROLS_HPP_IMPL
#define J2CPP_ANDROID_WIDGET_ZOOMCONTROLS_HPP_IMPL

namespace j2cpp {



android::widget::ZoomControls::operator local_ref<android::widget::LinearLayout>() const
{
	return local_ref<android::widget::LinearLayout>(get_jobject());
}


android::widget::ZoomControls::ZoomControls(local_ref< android::content::Context > const &a0)
: object<android::widget::ZoomControls>(
	call_new_object<
		android::widget::ZoomControls::J2CPP_CLASS_NAME,
		android::widget::ZoomControls::J2CPP_METHOD_NAME(0),
		android::widget::ZoomControls::J2CPP_METHOD_SIGNATURE(0)>
	(a0)
)
{
}



android::widget::ZoomControls::ZoomControls(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1)
: object<android::widget::ZoomControls>(
	call_new_object<
		android::widget::ZoomControls::J2CPP_CLASS_NAME,
		android::widget::ZoomControls::J2CPP_METHOD_NAME(1),
		android::widget::ZoomControls::J2CPP_METHOD_SIGNATURE(1)>
	(a0, a1)
)
{
}


void android::widget::ZoomControls::setOnZoomInClickListener(local_ref< android::view::View_::OnClickListener > const &a0)
{
	return call_method<
		android::widget::ZoomControls::J2CPP_CLASS_NAME,
		android::widget::ZoomControls::J2CPP_METHOD_NAME(2),
		android::widget::ZoomControls::J2CPP_METHOD_SIGNATURE(2), 
		void >
	(get_jobject(), a0);
}

void android::widget::ZoomControls::setOnZoomOutClickListener(local_ref< android::view::View_::OnClickListener > const &a0)
{
	return call_method<
		android::widget::ZoomControls::J2CPP_CLASS_NAME,
		android::widget::ZoomControls::J2CPP_METHOD_NAME(3),
		android::widget::ZoomControls::J2CPP_METHOD_SIGNATURE(3), 
		void >
	(get_jobject(), a0);
}

void android::widget::ZoomControls::setZoomSpeed(jlong a0)
{
	return call_method<
		android::widget::ZoomControls::J2CPP_CLASS_NAME,
		android::widget::ZoomControls::J2CPP_METHOD_NAME(4),
		android::widget::ZoomControls::J2CPP_METHOD_SIGNATURE(4), 
		void >
	(get_jobject(), a0);
}

jboolean android::widget::ZoomControls::onTouchEvent(local_ref< android::view::MotionEvent > const &a0)
{
	return call_method<
		android::widget::ZoomControls::J2CPP_CLASS_NAME,
		android::widget::ZoomControls::J2CPP_METHOD_NAME(5),
		android::widget::ZoomControls::J2CPP_METHOD_SIGNATURE(5), 
		jboolean >
	(get_jobject(), a0);
}

void android::widget::ZoomControls::show()
{
	return call_method<
		android::widget::ZoomControls::J2CPP_CLASS_NAME,
		android::widget::ZoomControls::J2CPP_METHOD_NAME(6),
		android::widget::ZoomControls::J2CPP_METHOD_SIGNATURE(6), 
		void >
	(get_jobject());
}

void android::widget::ZoomControls::hide()
{
	return call_method<
		android::widget::ZoomControls::J2CPP_CLASS_NAME,
		android::widget::ZoomControls::J2CPP_METHOD_NAME(7),
		android::widget::ZoomControls::J2CPP_METHOD_SIGNATURE(7), 
		void >
	(get_jobject());
}

void android::widget::ZoomControls::setIsZoomInEnabled(jboolean a0)
{
	return call_method<
		android::widget::ZoomControls::J2CPP_CLASS_NAME,
		android::widget::ZoomControls::J2CPP_METHOD_NAME(8),
		android::widget::ZoomControls::J2CPP_METHOD_SIGNATURE(8), 
		void >
	(get_jobject(), a0);
}

void android::widget::ZoomControls::setIsZoomOutEnabled(jboolean a0)
{
	return call_method<
		android::widget::ZoomControls::J2CPP_CLASS_NAME,
		android::widget::ZoomControls::J2CPP_METHOD_NAME(9),
		android::widget::ZoomControls::J2CPP_METHOD_SIGNATURE(9), 
		void >
	(get_jobject(), a0);
}

jboolean android::widget::ZoomControls::hasFocus()
{
	return call_method<
		android::widget::ZoomControls::J2CPP_CLASS_NAME,
		android::widget::ZoomControls::J2CPP_METHOD_NAME(10),
		android::widget::ZoomControls::J2CPP_METHOD_SIGNATURE(10), 
		jboolean >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(android::widget::ZoomControls,"android/widget/ZoomControls")
J2CPP_DEFINE_METHOD(android::widget::ZoomControls,0,"<init>","(Landroid/content/Context;)V")
J2CPP_DEFINE_METHOD(android::widget::ZoomControls,1,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::widget::ZoomControls,2,"setOnZoomInClickListener","(Landroid/view/View$OnClickListener;)V")
J2CPP_DEFINE_METHOD(android::widget::ZoomControls,3,"setOnZoomOutClickListener","(Landroid/view/View$OnClickListener;)V")
J2CPP_DEFINE_METHOD(android::widget::ZoomControls,4,"setZoomSpeed","(J)V")
J2CPP_DEFINE_METHOD(android::widget::ZoomControls,5,"onTouchEvent","(Landroid/view/MotionEvent;)Z")
J2CPP_DEFINE_METHOD(android::widget::ZoomControls,6,"show","()V")
J2CPP_DEFINE_METHOD(android::widget::ZoomControls,7,"hide","()V")
J2CPP_DEFINE_METHOD(android::widget::ZoomControls,8,"setIsZoomInEnabled","(Z)V")
J2CPP_DEFINE_METHOD(android::widget::ZoomControls,9,"setIsZoomOutEnabled","(Z)V")
J2CPP_DEFINE_METHOD(android::widget::ZoomControls,10,"hasFocus","()Z")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_ZOOMCONTROLS_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
