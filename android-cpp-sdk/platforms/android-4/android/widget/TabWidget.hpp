/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.widget.TabWidget
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_TABWIDGET_HPP_DECL
#define J2CPP_ANDROID_WIDGET_TABWIDGET_HPP_DECL


namespace j2cpp { namespace android { namespace graphics { namespace drawable { class Drawable; } } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { namespace Drawable_ { class Callback; } } } } }
namespace j2cpp { namespace android { namespace view { namespace accessibility { class AccessibilityEventSource; } } } }
namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace android { namespace view { namespace View_ { class OnFocusChangeListener; } } } }
namespace j2cpp { namespace android { namespace view { class ViewManager; } } }
namespace j2cpp { namespace android { namespace view { class ViewGroup; } } }
namespace j2cpp { namespace android { namespace view { class ViewParent; } } }
namespace j2cpp { namespace android { namespace widget { class LinearLayout; } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace graphics { class Canvas; } } }


#include <android/content/Context.hpp>
#include <android/graphics/Canvas.hpp>
#include <android/graphics/drawable/Drawable.hpp>
#include <android/util/AttributeSet.hpp>
#include <android/view/View.hpp>
#include <android/view/ViewGroup.hpp>
#include <android/view/ViewManager.hpp>
#include <android/view/ViewParent.hpp>
#include <android/view/accessibility/AccessibilityEventSource.hpp>
#include <android/widget/LinearLayout.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace widget {

	class TabWidget;
	class TabWidget
		: public object<TabWidget>
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
		J2CPP_DECLARE_METHOD(13)
		J2CPP_DECLARE_METHOD(14)

		explicit TabWidget(jobject jobj)
		: object<TabWidget>(jobj)
		{
		}

		operator local_ref<android::graphics::drawable::Drawable_::Callback>() const;
		operator local_ref<android::view::accessibility::AccessibilityEventSource>() const;
		operator local_ref<android::view::View>() const;
		operator local_ref<android::view::View_::OnFocusChangeListener>() const;
		operator local_ref<android::view::ViewManager>() const;
		operator local_ref<android::view::ViewGroup>() const;
		operator local_ref<android::view::ViewParent>() const;
		operator local_ref<android::widget::LinearLayout>() const;
		operator local_ref<java::lang::Object>() const;


		TabWidget(local_ref< android::content::Context > const&);
		TabWidget(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&);
		TabWidget(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&, jint);
		local_ref< android::view::View > getChildTabViewAt(jint);
		jint getTabCount();
		void setDividerDrawable(local_ref< android::graphics::drawable::Drawable >  const&);
		void setDividerDrawable(jint);
		void childDrawableStateChanged(local_ref< android::view::View >  const&);
		void dispatchDraw(local_ref< android::graphics::Canvas >  const&);
		void setCurrentTab(jint);
		void focusCurrentTab(jint);
		void setEnabled(jboolean);
		void addView(local_ref< android::view::View >  const&);
		void onFocusChange(local_ref< android::view::View >  const&, jboolean);
	}; //class TabWidget

} //namespace widget
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_TABWIDGET_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_TABWIDGET_HPP_IMPL
#define J2CPP_ANDROID_WIDGET_TABWIDGET_HPP_IMPL

namespace j2cpp {



android::widget::TabWidget::operator local_ref<android::graphics::drawable::Drawable_::Callback>() const
{
	return local_ref<android::graphics::drawable::Drawable_::Callback>(get_jobject());
}

android::widget::TabWidget::operator local_ref<android::view::accessibility::AccessibilityEventSource>() const
{
	return local_ref<android::view::accessibility::AccessibilityEventSource>(get_jobject());
}

android::widget::TabWidget::operator local_ref<android::view::View>() const
{
	return local_ref<android::view::View>(get_jobject());
}

android::widget::TabWidget::operator local_ref<android::view::View_::OnFocusChangeListener>() const
{
	return local_ref<android::view::View_::OnFocusChangeListener>(get_jobject());
}

android::widget::TabWidget::operator local_ref<android::view::ViewManager>() const
{
	return local_ref<android::view::ViewManager>(get_jobject());
}

android::widget::TabWidget::operator local_ref<android::view::ViewGroup>() const
{
	return local_ref<android::view::ViewGroup>(get_jobject());
}

android::widget::TabWidget::operator local_ref<android::view::ViewParent>() const
{
	return local_ref<android::view::ViewParent>(get_jobject());
}

android::widget::TabWidget::operator local_ref<android::widget::LinearLayout>() const
{
	return local_ref<android::widget::LinearLayout>(get_jobject());
}

android::widget::TabWidget::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::widget::TabWidget::TabWidget(local_ref< android::content::Context > const &a0)
: object<android::widget::TabWidget>(
	call_new_object<
		android::widget::TabWidget::J2CPP_CLASS_NAME,
		android::widget::TabWidget::J2CPP_METHOD_NAME(0),
		android::widget::TabWidget::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}



android::widget::TabWidget::TabWidget(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1)
: object<android::widget::TabWidget>(
	call_new_object<
		android::widget::TabWidget::J2CPP_CLASS_NAME,
		android::widget::TabWidget::J2CPP_METHOD_NAME(1),
		android::widget::TabWidget::J2CPP_METHOD_SIGNATURE(1)
	>(a0, a1)
)
{
}



android::widget::TabWidget::TabWidget(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1, jint a2)
: object<android::widget::TabWidget>(
	call_new_object<
		android::widget::TabWidget::J2CPP_CLASS_NAME,
		android::widget::TabWidget::J2CPP_METHOD_NAME(2),
		android::widget::TabWidget::J2CPP_METHOD_SIGNATURE(2)
	>(a0, a1, a2)
)
{
}



local_ref< android::view::View > android::widget::TabWidget::getChildTabViewAt(jint a0)
{
	return call_method<
		android::widget::TabWidget::J2CPP_CLASS_NAME,
		android::widget::TabWidget::J2CPP_METHOD_NAME(4),
		android::widget::TabWidget::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< android::view::View >
	>(get_jobject(), a0);
}

jint android::widget::TabWidget::getTabCount()
{
	return call_method<
		android::widget::TabWidget::J2CPP_CLASS_NAME,
		android::widget::TabWidget::J2CPP_METHOD_NAME(5),
		android::widget::TabWidget::J2CPP_METHOD_SIGNATURE(5), 
		jint
	>(get_jobject());
}

void android::widget::TabWidget::setDividerDrawable(local_ref< android::graphics::drawable::Drawable > const &a0)
{
	return call_method<
		android::widget::TabWidget::J2CPP_CLASS_NAME,
		android::widget::TabWidget::J2CPP_METHOD_NAME(6),
		android::widget::TabWidget::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject(), a0);
}

void android::widget::TabWidget::setDividerDrawable(jint a0)
{
	return call_method<
		android::widget::TabWidget::J2CPP_CLASS_NAME,
		android::widget::TabWidget::J2CPP_METHOD_NAME(7),
		android::widget::TabWidget::J2CPP_METHOD_SIGNATURE(7), 
		void
	>(get_jobject(), a0);
}

void android::widget::TabWidget::childDrawableStateChanged(local_ref< android::view::View > const &a0)
{
	return call_method<
		android::widget::TabWidget::J2CPP_CLASS_NAME,
		android::widget::TabWidget::J2CPP_METHOD_NAME(8),
		android::widget::TabWidget::J2CPP_METHOD_SIGNATURE(8), 
		void
	>(get_jobject(), a0);
}

void android::widget::TabWidget::dispatchDraw(local_ref< android::graphics::Canvas > const &a0)
{
	return call_method<
		android::widget::TabWidget::J2CPP_CLASS_NAME,
		android::widget::TabWidget::J2CPP_METHOD_NAME(9),
		android::widget::TabWidget::J2CPP_METHOD_SIGNATURE(9), 
		void
	>(get_jobject(), a0);
}

void android::widget::TabWidget::setCurrentTab(jint a0)
{
	return call_method<
		android::widget::TabWidget::J2CPP_CLASS_NAME,
		android::widget::TabWidget::J2CPP_METHOD_NAME(10),
		android::widget::TabWidget::J2CPP_METHOD_SIGNATURE(10), 
		void
	>(get_jobject(), a0);
}

void android::widget::TabWidget::focusCurrentTab(jint a0)
{
	return call_method<
		android::widget::TabWidget::J2CPP_CLASS_NAME,
		android::widget::TabWidget::J2CPP_METHOD_NAME(11),
		android::widget::TabWidget::J2CPP_METHOD_SIGNATURE(11), 
		void
	>(get_jobject(), a0);
}

void android::widget::TabWidget::setEnabled(jboolean a0)
{
	return call_method<
		android::widget::TabWidget::J2CPP_CLASS_NAME,
		android::widget::TabWidget::J2CPP_METHOD_NAME(12),
		android::widget::TabWidget::J2CPP_METHOD_SIGNATURE(12), 
		void
	>(get_jobject(), a0);
}

void android::widget::TabWidget::addView(local_ref< android::view::View > const &a0)
{
	return call_method<
		android::widget::TabWidget::J2CPP_CLASS_NAME,
		android::widget::TabWidget::J2CPP_METHOD_NAME(13),
		android::widget::TabWidget::J2CPP_METHOD_SIGNATURE(13), 
		void
	>(get_jobject(), a0);
}

void android::widget::TabWidget::onFocusChange(local_ref< android::view::View > const &a0, jboolean a1)
{
	return call_method<
		android::widget::TabWidget::J2CPP_CLASS_NAME,
		android::widget::TabWidget::J2CPP_METHOD_NAME(14),
		android::widget::TabWidget::J2CPP_METHOD_SIGNATURE(14), 
		void
	>(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(android::widget::TabWidget,"android/widget/TabWidget")
J2CPP_DEFINE_METHOD(android::widget::TabWidget,0,"<init>","(Landroid/content/Context;)V")
J2CPP_DEFINE_METHOD(android::widget::TabWidget,1,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::widget::TabWidget,2,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;I)V")
J2CPP_DEFINE_METHOD(android::widget::TabWidget,3,"onSizeChanged","(IIII)V")
J2CPP_DEFINE_METHOD(android::widget::TabWidget,4,"getChildTabViewAt","(I)Landroid/view/View;")
J2CPP_DEFINE_METHOD(android::widget::TabWidget,5,"getTabCount","()I")
J2CPP_DEFINE_METHOD(android::widget::TabWidget,6,"setDividerDrawable","(Landroid/graphics/drawable/Drawable;)V")
J2CPP_DEFINE_METHOD(android::widget::TabWidget,7,"setDividerDrawable","(I)V")
J2CPP_DEFINE_METHOD(android::widget::TabWidget,8,"childDrawableStateChanged","(Landroid/view/View;)V")
J2CPP_DEFINE_METHOD(android::widget::TabWidget,9,"dispatchDraw","(Landroid/graphics/Canvas;)V")
J2CPP_DEFINE_METHOD(android::widget::TabWidget,10,"setCurrentTab","(I)V")
J2CPP_DEFINE_METHOD(android::widget::TabWidget,11,"focusCurrentTab","(I)V")
J2CPP_DEFINE_METHOD(android::widget::TabWidget,12,"setEnabled","(Z)V")
J2CPP_DEFINE_METHOD(android::widget::TabWidget,13,"addView","(Landroid/view/View;)V")
J2CPP_DEFINE_METHOD(android::widget::TabWidget,14,"onFocusChange","(Landroid/view/View;Z)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_TABWIDGET_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
