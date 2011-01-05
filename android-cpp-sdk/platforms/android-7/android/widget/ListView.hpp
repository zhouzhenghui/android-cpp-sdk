/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.widget.ListView
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_LISTVIEW_HPP_DECL
#define J2CPP_ANDROID_WIDGET_LISTVIEW_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { class Drawable; } } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { namespace Drawable_ { class Callback; } } } } }
namespace j2cpp { namespace android { namespace graphics { class Rect; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace android { namespace view { class ViewGroup; } } }
namespace j2cpp { namespace android { namespace view { namespace ViewTreeObserver_ { class OnTouchModeChangeListener; } } } }
namespace j2cpp { namespace android { namespace view { class KeyEvent; } } }
namespace j2cpp { namespace android { namespace view { class ViewManager; } } }
namespace j2cpp { namespace android { namespace view { class ViewParent; } } }
namespace j2cpp { namespace android { namespace view { class MotionEvent; } } }
namespace j2cpp { namespace android { namespace view { namespace accessibility { class AccessibilityEvent; } } } }
namespace j2cpp { namespace android { namespace view { namespace accessibility { class AccessibilityEventSource; } } } }
namespace j2cpp { namespace android { namespace view { namespace ViewTreeObserver_ { class OnGlobalLayoutListener; } } } }
namespace j2cpp { namespace android { namespace text { class NoCopySpan; } } }
namespace j2cpp { namespace android { namespace text { class TextWatcher; } } }
namespace j2cpp { namespace android { namespace widget { class ListAdapter; } } }
namespace j2cpp { namespace android { namespace widget { class AdapterView; } } }
namespace j2cpp { namespace android { namespace widget { class AbsListView; } } }
namespace j2cpp { namespace android { namespace widget { namespace Filter_ { class FilterListener; } } } }
namespace j2cpp { namespace android { namespace widget { class Adapter; } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }
namespace j2cpp { namespace android { namespace util { class SparseBooleanArray; } } }
namespace j2cpp { namespace android { namespace os { class Parcelable; } } }


#include <android/content/Context.hpp>
#include <android/graphics/Rect.hpp>
#include <android/graphics/drawable/Drawable.hpp>
#include <android/os/Parcelable.hpp>
#include <android/text/NoCopySpan.hpp>
#include <android/text/TextWatcher.hpp>
#include <android/util/AttributeSet.hpp>
#include <android/util/SparseBooleanArray.hpp>
#include <android/view/KeyEvent.hpp>
#include <android/view/MotionEvent.hpp>
#include <android/view/View.hpp>
#include <android/view/ViewGroup.hpp>
#include <android/view/ViewManager.hpp>
#include <android/view/ViewParent.hpp>
#include <android/view/ViewTreeObserver.hpp>
#include <android/view/accessibility/AccessibilityEvent.hpp>
#include <android/view/accessibility/AccessibilityEventSource.hpp>
#include <android/widget/AbsListView.hpp>
#include <android/widget/Adapter.hpp>
#include <android/widget/AdapterView.hpp>
#include <android/widget/Filter.hpp>
#include <android/widget/ListAdapter.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace widget {

	class ListView;
	namespace ListView_ {

		class FixedViewInfo;
		class FixedViewInfo
			: public object<FixedViewInfo>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_FIELD(0)
			J2CPP_DECLARE_FIELD(1)
			J2CPP_DECLARE_FIELD(2)
			J2CPP_DECLARE_FIELD(3)

			explicit FixedViewInfo(jobject jobj)
			: object<FixedViewInfo>(jobj)
			, view(jobj)
			, data(jobj)
			, isSelectable(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			FixedViewInfo(local_ref< android::widget::ListView > const&);

			field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< android::view::View > > view;
			field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::lang::Object > > data;
			field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jboolean > isSelectable;
		}; //class FixedViewInfo

	} //namespace ListView_

	class ListView
		: public object<ListView>
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
		J2CPP_DECLARE_METHOD(15)
		J2CPP_DECLARE_METHOD(16)
		J2CPP_DECLARE_METHOD(17)
		J2CPP_DECLARE_METHOD(18)
		J2CPP_DECLARE_METHOD(19)
		J2CPP_DECLARE_METHOD(20)
		J2CPP_DECLARE_METHOD(21)
		J2CPP_DECLARE_METHOD(22)
		J2CPP_DECLARE_METHOD(23)
		J2CPP_DECLARE_METHOD(24)
		J2CPP_DECLARE_METHOD(25)
		J2CPP_DECLARE_METHOD(26)
		J2CPP_DECLARE_METHOD(27)
		J2CPP_DECLARE_METHOD(28)
		J2CPP_DECLARE_METHOD(29)
		J2CPP_DECLARE_METHOD(30)
		J2CPP_DECLARE_METHOD(31)
		J2CPP_DECLARE_METHOD(32)
		J2CPP_DECLARE_METHOD(33)
		J2CPP_DECLARE_METHOD(34)
		J2CPP_DECLARE_METHOD(35)
		J2CPP_DECLARE_METHOD(36)
		J2CPP_DECLARE_METHOD(37)
		J2CPP_DECLARE_METHOD(38)
		J2CPP_DECLARE_METHOD(39)
		J2CPP_DECLARE_METHOD(40)
		J2CPP_DECLARE_METHOD(41)
		J2CPP_DECLARE_METHOD(42)
		J2CPP_DECLARE_METHOD(43)
		J2CPP_DECLARE_METHOD(44)
		J2CPP_DECLARE_METHOD(45)
		J2CPP_DECLARE_METHOD(46)
		J2CPP_DECLARE_METHOD(47)
		J2CPP_DECLARE_METHOD(48)
		J2CPP_DECLARE_METHOD(49)
		J2CPP_DECLARE_METHOD(50)
		J2CPP_DECLARE_METHOD(51)
		J2CPP_DECLARE_METHOD(52)
		J2CPP_DECLARE_METHOD(53)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)

		typedef ListView_::FixedViewInfo FixedViewInfo;

		explicit ListView(jobject jobj)
		: object<ListView>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::graphics::drawable::Drawable_::Callback>() const;
		operator local_ref<android::view::View>() const;
		operator local_ref<android::view::ViewGroup>() const;
		operator local_ref<android::view::ViewTreeObserver_::OnTouchModeChangeListener>() const;
		operator local_ref<android::view::ViewManager>() const;
		operator local_ref<android::view::ViewParent>() const;
		operator local_ref<android::view::accessibility::AccessibilityEventSource>() const;
		operator local_ref<android::view::ViewTreeObserver_::OnGlobalLayoutListener>() const;
		operator local_ref<android::text::NoCopySpan>() const;
		operator local_ref<android::text::TextWatcher>() const;
		operator local_ref<android::widget::AdapterView>() const;
		operator local_ref<android::widget::AbsListView>() const;
		operator local_ref<android::widget::Filter_::FilterListener>() const;


		ListView(local_ref< android::content::Context > const&);
		ListView(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&);
		ListView(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&, jint);
		jint getMaxScrollAmount();
		void addHeaderView(local_ref< android::view::View >  const&, local_ref< java::lang::Object >  const&, jboolean);
		void addHeaderView(local_ref< android::view::View >  const&);
		jint getHeaderViewsCount();
		jboolean removeHeaderView(local_ref< android::view::View >  const&);
		void addFooterView(local_ref< android::view::View >  const&, local_ref< java::lang::Object >  const&, jboolean);
		void addFooterView(local_ref< android::view::View >  const&);
		jint getFooterViewsCount();
		jboolean removeFooterView(local_ref< android::view::View >  const&);
		local_ref< android::widget::ListAdapter > getAdapter();
		void setAdapter(local_ref< android::widget::ListAdapter >  const&);
		jboolean requestChildRectangleOnScreen(local_ref< android::view::View >  const&, local_ref< android::graphics::Rect >  const&, jboolean);
		void setSelection(jint);
		void setSelectionFromTop(jint, jint);
		jboolean dispatchPopulateAccessibilityEvent(local_ref< android::view::accessibility::AccessibilityEvent >  const&);
		void setSelectionAfterHeaderView();
		jboolean dispatchKeyEvent(local_ref< android::view::KeyEvent >  const&);
		jboolean onKeyDown(jint, local_ref< android::view::KeyEvent >  const&);
		jboolean onKeyMultiple(jint, jint, local_ref< android::view::KeyEvent >  const&);
		jboolean onKeyUp(jint, local_ref< android::view::KeyEvent >  const&);
		void setItemsCanFocus(jboolean);
		jboolean getItemsCanFocus();
		void setCacheColorHint(jint);
		local_ref< android::graphics::drawable::Drawable > getDivider();
		void setDivider(local_ref< android::graphics::drawable::Drawable >  const&);
		jint getDividerHeight();
		void setDividerHeight(jint);
		void setHeaderDividersEnabled(jboolean);
		void setFooterDividersEnabled(jboolean);
		jboolean onTouchEvent(local_ref< android::view::MotionEvent >  const&);
		jint getChoiceMode();
		void setChoiceMode(jint);
		jboolean performItemClick(local_ref< android::view::View >  const&, jint, jlong);
		void setItemChecked(jint, jboolean);
		jboolean isItemChecked(jint);
		jint getCheckedItemPosition();
		local_ref< android::util::SparseBooleanArray > getCheckedItemPositions();
		local_ref< array<jlong,1> > getCheckItemIds();
		void clearChoices();
		local_ref< android::os::Parcelable > onSaveInstanceState();
		void onRestoreInstanceState(local_ref< android::os::Parcelable >  const&);
		void setAdapter(local_ref< android::widget::Adapter >  const&);
		local_ref< android::widget::Adapter > getAdapter_1();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > CHOICE_MODE_NONE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > CHOICE_MODE_SINGLE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jint > CHOICE_MODE_MULTIPLE;
	}; //class ListView

} //namespace widget
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_LISTVIEW_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_LISTVIEW_HPP_IMPL
#define J2CPP_ANDROID_WIDGET_LISTVIEW_HPP_IMPL

namespace j2cpp {




android::widget::ListView_::FixedViewInfo::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::widget::ListView_::FixedViewInfo::FixedViewInfo(local_ref< android::widget::ListView > const &a0)
: object<android::widget::ListView_::FixedViewInfo>(
	call_new_object<
		android::widget::ListView_::FixedViewInfo::J2CPP_CLASS_NAME,
		android::widget::ListView_::FixedViewInfo::J2CPP_METHOD_NAME(0),
		android::widget::ListView_::FixedViewInfo::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
, view(get_jobject())
, data(get_jobject())
, isSelectable(get_jobject())
{
}




J2CPP_DEFINE_CLASS(android::widget::ListView_::FixedViewInfo,"android/widget/ListView$FixedViewInfo")
J2CPP_DEFINE_METHOD(android::widget::ListView_::FixedViewInfo,0,"<init>","(Landroid/widget/ListView;)V")
J2CPP_DEFINE_FIELD(android::widget::ListView_::FixedViewInfo,0,"view","Landroid/view/View;")
J2CPP_DEFINE_FIELD(android::widget::ListView_::FixedViewInfo,1,"data","Ljava/lang/Object;")
J2CPP_DEFINE_FIELD(android::widget::ListView_::FixedViewInfo,2,"isSelectable","Z")
J2CPP_DEFINE_FIELD(android::widget::ListView_::FixedViewInfo,3,"this$0","Landroid/widget/ListView;")



android::widget::ListView::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::widget::ListView::operator local_ref<android::graphics::drawable::Drawable_::Callback>() const
{
	return local_ref<android::graphics::drawable::Drawable_::Callback>(get_jobject());
}

android::widget::ListView::operator local_ref<android::view::View>() const
{
	return local_ref<android::view::View>(get_jobject());
}

android::widget::ListView::operator local_ref<android::view::ViewGroup>() const
{
	return local_ref<android::view::ViewGroup>(get_jobject());
}

android::widget::ListView::operator local_ref<android::view::ViewTreeObserver_::OnTouchModeChangeListener>() const
{
	return local_ref<android::view::ViewTreeObserver_::OnTouchModeChangeListener>(get_jobject());
}

android::widget::ListView::operator local_ref<android::view::ViewManager>() const
{
	return local_ref<android::view::ViewManager>(get_jobject());
}

android::widget::ListView::operator local_ref<android::view::ViewParent>() const
{
	return local_ref<android::view::ViewParent>(get_jobject());
}

android::widget::ListView::operator local_ref<android::view::accessibility::AccessibilityEventSource>() const
{
	return local_ref<android::view::accessibility::AccessibilityEventSource>(get_jobject());
}

android::widget::ListView::operator local_ref<android::view::ViewTreeObserver_::OnGlobalLayoutListener>() const
{
	return local_ref<android::view::ViewTreeObserver_::OnGlobalLayoutListener>(get_jobject());
}

android::widget::ListView::operator local_ref<android::text::NoCopySpan>() const
{
	return local_ref<android::text::NoCopySpan>(get_jobject());
}

android::widget::ListView::operator local_ref<android::text::TextWatcher>() const
{
	return local_ref<android::text::TextWatcher>(get_jobject());
}

android::widget::ListView::operator local_ref<android::widget::AdapterView>() const
{
	return local_ref<android::widget::AdapterView>(get_jobject());
}

android::widget::ListView::operator local_ref<android::widget::AbsListView>() const
{
	return local_ref<android::widget::AbsListView>(get_jobject());
}

android::widget::ListView::operator local_ref<android::widget::Filter_::FilterListener>() const
{
	return local_ref<android::widget::Filter_::FilterListener>(get_jobject());
}


android::widget::ListView::ListView(local_ref< android::content::Context > const &a0)
: object<android::widget::ListView>(
	call_new_object<
		android::widget::ListView::J2CPP_CLASS_NAME,
		android::widget::ListView::J2CPP_METHOD_NAME(0),
		android::widget::ListView::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}



android::widget::ListView::ListView(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1)
: object<android::widget::ListView>(
	call_new_object<
		android::widget::ListView::J2CPP_CLASS_NAME,
		android::widget::ListView::J2CPP_METHOD_NAME(1),
		android::widget::ListView::J2CPP_METHOD_SIGNATURE(1)
	>(a0, a1)
)
{
}



android::widget::ListView::ListView(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1, jint a2)
: object<android::widget::ListView>(
	call_new_object<
		android::widget::ListView::J2CPP_CLASS_NAME,
		android::widget::ListView::J2CPP_METHOD_NAME(2),
		android::widget::ListView::J2CPP_METHOD_SIGNATURE(2)
	>(a0, a1, a2)
)
{
}


jint android::widget::ListView::getMaxScrollAmount()
{
	return call_method<
		android::widget::ListView::J2CPP_CLASS_NAME,
		android::widget::ListView::J2CPP_METHOD_NAME(3),
		android::widget::ListView::J2CPP_METHOD_SIGNATURE(3), 
		jint
	>(get_jobject());
}

void android::widget::ListView::addHeaderView(local_ref< android::view::View > const &a0, local_ref< java::lang::Object > const &a1, jboolean a2)
{
	return call_method<
		android::widget::ListView::J2CPP_CLASS_NAME,
		android::widget::ListView::J2CPP_METHOD_NAME(4),
		android::widget::ListView::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0, a1, a2);
}

void android::widget::ListView::addHeaderView(local_ref< android::view::View > const &a0)
{
	return call_method<
		android::widget::ListView::J2CPP_CLASS_NAME,
		android::widget::ListView::J2CPP_METHOD_NAME(5),
		android::widget::ListView::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject(), a0);
}

jint android::widget::ListView::getHeaderViewsCount()
{
	return call_method<
		android::widget::ListView::J2CPP_CLASS_NAME,
		android::widget::ListView::J2CPP_METHOD_NAME(6),
		android::widget::ListView::J2CPP_METHOD_SIGNATURE(6), 
		jint
	>(get_jobject());
}

jboolean android::widget::ListView::removeHeaderView(local_ref< android::view::View > const &a0)
{
	return call_method<
		android::widget::ListView::J2CPP_CLASS_NAME,
		android::widget::ListView::J2CPP_METHOD_NAME(7),
		android::widget::ListView::J2CPP_METHOD_SIGNATURE(7), 
		jboolean
	>(get_jobject(), a0);
}

void android::widget::ListView::addFooterView(local_ref< android::view::View > const &a0, local_ref< java::lang::Object > const &a1, jboolean a2)
{
	return call_method<
		android::widget::ListView::J2CPP_CLASS_NAME,
		android::widget::ListView::J2CPP_METHOD_NAME(8),
		android::widget::ListView::J2CPP_METHOD_SIGNATURE(8), 
		void
	>(get_jobject(), a0, a1, a2);
}

void android::widget::ListView::addFooterView(local_ref< android::view::View > const &a0)
{
	return call_method<
		android::widget::ListView::J2CPP_CLASS_NAME,
		android::widget::ListView::J2CPP_METHOD_NAME(9),
		android::widget::ListView::J2CPP_METHOD_SIGNATURE(9), 
		void
	>(get_jobject(), a0);
}

jint android::widget::ListView::getFooterViewsCount()
{
	return call_method<
		android::widget::ListView::J2CPP_CLASS_NAME,
		android::widget::ListView::J2CPP_METHOD_NAME(10),
		android::widget::ListView::J2CPP_METHOD_SIGNATURE(10), 
		jint
	>(get_jobject());
}

jboolean android::widget::ListView::removeFooterView(local_ref< android::view::View > const &a0)
{
	return call_method<
		android::widget::ListView::J2CPP_CLASS_NAME,
		android::widget::ListView::J2CPP_METHOD_NAME(11),
		android::widget::ListView::J2CPP_METHOD_SIGNATURE(11), 
		jboolean
	>(get_jobject(), a0);
}

local_ref< android::widget::ListAdapter > android::widget::ListView::getAdapter()
{
	return call_method<
		android::widget::ListView::J2CPP_CLASS_NAME,
		android::widget::ListView::J2CPP_METHOD_NAME(12),
		android::widget::ListView::J2CPP_METHOD_SIGNATURE(12), 
		local_ref< android::widget::ListAdapter >
	>(get_jobject());
}

void android::widget::ListView::setAdapter(local_ref< android::widget::ListAdapter > const &a0)
{
	return call_method<
		android::widget::ListView::J2CPP_CLASS_NAME,
		android::widget::ListView::J2CPP_METHOD_NAME(13),
		android::widget::ListView::J2CPP_METHOD_SIGNATURE(13), 
		void
	>(get_jobject(), a0);
}

jboolean android::widget::ListView::requestChildRectangleOnScreen(local_ref< android::view::View > const &a0, local_ref< android::graphics::Rect > const &a1, jboolean a2)
{
	return call_method<
		android::widget::ListView::J2CPP_CLASS_NAME,
		android::widget::ListView::J2CPP_METHOD_NAME(14),
		android::widget::ListView::J2CPP_METHOD_SIGNATURE(14), 
		jboolean
	>(get_jobject(), a0, a1, a2);
}




void android::widget::ListView::setSelection(jint a0)
{
	return call_method<
		android::widget::ListView::J2CPP_CLASS_NAME,
		android::widget::ListView::J2CPP_METHOD_NAME(18),
		android::widget::ListView::J2CPP_METHOD_SIGNATURE(18), 
		void
	>(get_jobject(), a0);
}

void android::widget::ListView::setSelectionFromTop(jint a0, jint a1)
{
	return call_method<
		android::widget::ListView::J2CPP_CLASS_NAME,
		android::widget::ListView::J2CPP_METHOD_NAME(19),
		android::widget::ListView::J2CPP_METHOD_SIGNATURE(19), 
		void
	>(get_jobject(), a0, a1);
}

jboolean android::widget::ListView::dispatchPopulateAccessibilityEvent(local_ref< android::view::accessibility::AccessibilityEvent > const &a0)
{
	return call_method<
		android::widget::ListView::J2CPP_CLASS_NAME,
		android::widget::ListView::J2CPP_METHOD_NAME(20),
		android::widget::ListView::J2CPP_METHOD_SIGNATURE(20), 
		jboolean
	>(get_jobject(), a0);
}

void android::widget::ListView::setSelectionAfterHeaderView()
{
	return call_method<
		android::widget::ListView::J2CPP_CLASS_NAME,
		android::widget::ListView::J2CPP_METHOD_NAME(21),
		android::widget::ListView::J2CPP_METHOD_SIGNATURE(21), 
		void
	>(get_jobject());
}

jboolean android::widget::ListView::dispatchKeyEvent(local_ref< android::view::KeyEvent > const &a0)
{
	return call_method<
		android::widget::ListView::J2CPP_CLASS_NAME,
		android::widget::ListView::J2CPP_METHOD_NAME(22),
		android::widget::ListView::J2CPP_METHOD_SIGNATURE(22), 
		jboolean
	>(get_jobject(), a0);
}

jboolean android::widget::ListView::onKeyDown(jint a0, local_ref< android::view::KeyEvent > const &a1)
{
	return call_method<
		android::widget::ListView::J2CPP_CLASS_NAME,
		android::widget::ListView::J2CPP_METHOD_NAME(23),
		android::widget::ListView::J2CPP_METHOD_SIGNATURE(23), 
		jboolean
	>(get_jobject(), a0, a1);
}

jboolean android::widget::ListView::onKeyMultiple(jint a0, jint a1, local_ref< android::view::KeyEvent > const &a2)
{
	return call_method<
		android::widget::ListView::J2CPP_CLASS_NAME,
		android::widget::ListView::J2CPP_METHOD_NAME(24),
		android::widget::ListView::J2CPP_METHOD_SIGNATURE(24), 
		jboolean
	>(get_jobject(), a0, a1, a2);
}

jboolean android::widget::ListView::onKeyUp(jint a0, local_ref< android::view::KeyEvent > const &a1)
{
	return call_method<
		android::widget::ListView::J2CPP_CLASS_NAME,
		android::widget::ListView::J2CPP_METHOD_NAME(25),
		android::widget::ListView::J2CPP_METHOD_SIGNATURE(25), 
		jboolean
	>(get_jobject(), a0, a1);
}

void android::widget::ListView::setItemsCanFocus(jboolean a0)
{
	return call_method<
		android::widget::ListView::J2CPP_CLASS_NAME,
		android::widget::ListView::J2CPP_METHOD_NAME(26),
		android::widget::ListView::J2CPP_METHOD_SIGNATURE(26), 
		void
	>(get_jobject(), a0);
}

jboolean android::widget::ListView::getItemsCanFocus()
{
	return call_method<
		android::widget::ListView::J2CPP_CLASS_NAME,
		android::widget::ListView::J2CPP_METHOD_NAME(27),
		android::widget::ListView::J2CPP_METHOD_SIGNATURE(27), 
		jboolean
	>(get_jobject());
}

void android::widget::ListView::setCacheColorHint(jint a0)
{
	return call_method<
		android::widget::ListView::J2CPP_CLASS_NAME,
		android::widget::ListView::J2CPP_METHOD_NAME(28),
		android::widget::ListView::J2CPP_METHOD_SIGNATURE(28), 
		void
	>(get_jobject(), a0);
}


local_ref< android::graphics::drawable::Drawable > android::widget::ListView::getDivider()
{
	return call_method<
		android::widget::ListView::J2CPP_CLASS_NAME,
		android::widget::ListView::J2CPP_METHOD_NAME(30),
		android::widget::ListView::J2CPP_METHOD_SIGNATURE(30), 
		local_ref< android::graphics::drawable::Drawable >
	>(get_jobject());
}

void android::widget::ListView::setDivider(local_ref< android::graphics::drawable::Drawable > const &a0)
{
	return call_method<
		android::widget::ListView::J2CPP_CLASS_NAME,
		android::widget::ListView::J2CPP_METHOD_NAME(31),
		android::widget::ListView::J2CPP_METHOD_SIGNATURE(31), 
		void
	>(get_jobject(), a0);
}

jint android::widget::ListView::getDividerHeight()
{
	return call_method<
		android::widget::ListView::J2CPP_CLASS_NAME,
		android::widget::ListView::J2CPP_METHOD_NAME(32),
		android::widget::ListView::J2CPP_METHOD_SIGNATURE(32), 
		jint
	>(get_jobject());
}

void android::widget::ListView::setDividerHeight(jint a0)
{
	return call_method<
		android::widget::ListView::J2CPP_CLASS_NAME,
		android::widget::ListView::J2CPP_METHOD_NAME(33),
		android::widget::ListView::J2CPP_METHOD_SIGNATURE(33), 
		void
	>(get_jobject(), a0);
}

void android::widget::ListView::setHeaderDividersEnabled(jboolean a0)
{
	return call_method<
		android::widget::ListView::J2CPP_CLASS_NAME,
		android::widget::ListView::J2CPP_METHOD_NAME(34),
		android::widget::ListView::J2CPP_METHOD_SIGNATURE(34), 
		void
	>(get_jobject(), a0);
}

void android::widget::ListView::setFooterDividersEnabled(jboolean a0)
{
	return call_method<
		android::widget::ListView::J2CPP_CLASS_NAME,
		android::widget::ListView::J2CPP_METHOD_NAME(35),
		android::widget::ListView::J2CPP_METHOD_SIGNATURE(35), 
		void
	>(get_jobject(), a0);
}





jboolean android::widget::ListView::onTouchEvent(local_ref< android::view::MotionEvent > const &a0)
{
	return call_method<
		android::widget::ListView::J2CPP_CLASS_NAME,
		android::widget::ListView::J2CPP_METHOD_NAME(40),
		android::widget::ListView::J2CPP_METHOD_SIGNATURE(40), 
		jboolean
	>(get_jobject(), a0);
}

jint android::widget::ListView::getChoiceMode()
{
	return call_method<
		android::widget::ListView::J2CPP_CLASS_NAME,
		android::widget::ListView::J2CPP_METHOD_NAME(41),
		android::widget::ListView::J2CPP_METHOD_SIGNATURE(41), 
		jint
	>(get_jobject());
}

void android::widget::ListView::setChoiceMode(jint a0)
{
	return call_method<
		android::widget::ListView::J2CPP_CLASS_NAME,
		android::widget::ListView::J2CPP_METHOD_NAME(42),
		android::widget::ListView::J2CPP_METHOD_SIGNATURE(42), 
		void
	>(get_jobject(), a0);
}

jboolean android::widget::ListView::performItemClick(local_ref< android::view::View > const &a0, jint a1, jlong a2)
{
	return call_method<
		android::widget::ListView::J2CPP_CLASS_NAME,
		android::widget::ListView::J2CPP_METHOD_NAME(43),
		android::widget::ListView::J2CPP_METHOD_SIGNATURE(43), 
		jboolean
	>(get_jobject(), a0, a1, a2);
}

void android::widget::ListView::setItemChecked(jint a0, jboolean a1)
{
	return call_method<
		android::widget::ListView::J2CPP_CLASS_NAME,
		android::widget::ListView::J2CPP_METHOD_NAME(44),
		android::widget::ListView::J2CPP_METHOD_SIGNATURE(44), 
		void
	>(get_jobject(), a0, a1);
}

jboolean android::widget::ListView::isItemChecked(jint a0)
{
	return call_method<
		android::widget::ListView::J2CPP_CLASS_NAME,
		android::widget::ListView::J2CPP_METHOD_NAME(45),
		android::widget::ListView::J2CPP_METHOD_SIGNATURE(45), 
		jboolean
	>(get_jobject(), a0);
}

jint android::widget::ListView::getCheckedItemPosition()
{
	return call_method<
		android::widget::ListView::J2CPP_CLASS_NAME,
		android::widget::ListView::J2CPP_METHOD_NAME(46),
		android::widget::ListView::J2CPP_METHOD_SIGNATURE(46), 
		jint
	>(get_jobject());
}

local_ref< android::util::SparseBooleanArray > android::widget::ListView::getCheckedItemPositions()
{
	return call_method<
		android::widget::ListView::J2CPP_CLASS_NAME,
		android::widget::ListView::J2CPP_METHOD_NAME(47),
		android::widget::ListView::J2CPP_METHOD_SIGNATURE(47), 
		local_ref< android::util::SparseBooleanArray >
	>(get_jobject());
}

local_ref< array<jlong,1> > android::widget::ListView::getCheckItemIds()
{
	return call_method<
		android::widget::ListView::J2CPP_CLASS_NAME,
		android::widget::ListView::J2CPP_METHOD_NAME(48),
		android::widget::ListView::J2CPP_METHOD_SIGNATURE(48), 
		local_ref< array<jlong,1> >
	>(get_jobject());
}

void android::widget::ListView::clearChoices()
{
	return call_method<
		android::widget::ListView::J2CPP_CLASS_NAME,
		android::widget::ListView::J2CPP_METHOD_NAME(49),
		android::widget::ListView::J2CPP_METHOD_SIGNATURE(49), 
		void
	>(get_jobject());
}

local_ref< android::os::Parcelable > android::widget::ListView::onSaveInstanceState()
{
	return call_method<
		android::widget::ListView::J2CPP_CLASS_NAME,
		android::widget::ListView::J2CPP_METHOD_NAME(50),
		android::widget::ListView::J2CPP_METHOD_SIGNATURE(50), 
		local_ref< android::os::Parcelable >
	>(get_jobject());
}

void android::widget::ListView::onRestoreInstanceState(local_ref< android::os::Parcelable > const &a0)
{
	return call_method<
		android::widget::ListView::J2CPP_CLASS_NAME,
		android::widget::ListView::J2CPP_METHOD_NAME(51),
		android::widget::ListView::J2CPP_METHOD_SIGNATURE(51), 
		void
	>(get_jobject(), a0);
}

void android::widget::ListView::setAdapter(local_ref< android::widget::Adapter > const &a0)
{
	return call_method<
		android::widget::ListView::J2CPP_CLASS_NAME,
		android::widget::ListView::J2CPP_METHOD_NAME(52),
		android::widget::ListView::J2CPP_METHOD_SIGNATURE(52), 
		void
	>(get_jobject(), a0);
}

local_ref< android::widget::Adapter > android::widget::ListView::getAdapter_1()
{
	return call_method<
		android::widget::ListView::J2CPP_CLASS_NAME,
		android::widget::ListView::J2CPP_METHOD_NAME(53),
		android::widget::ListView::J2CPP_METHOD_SIGNATURE(53), 
		local_ref< android::widget::Adapter >
	>(get_jobject());
}


static_field<
	android::widget::ListView::J2CPP_CLASS_NAME,
	android::widget::ListView::J2CPP_FIELD_NAME(0),
	android::widget::ListView::J2CPP_FIELD_SIGNATURE(0),
	jint
> android::widget::ListView::CHOICE_MODE_NONE;

static_field<
	android::widget::ListView::J2CPP_CLASS_NAME,
	android::widget::ListView::J2CPP_FIELD_NAME(1),
	android::widget::ListView::J2CPP_FIELD_SIGNATURE(1),
	jint
> android::widget::ListView::CHOICE_MODE_SINGLE;

static_field<
	android::widget::ListView::J2CPP_CLASS_NAME,
	android::widget::ListView::J2CPP_FIELD_NAME(2),
	android::widget::ListView::J2CPP_FIELD_SIGNATURE(2),
	jint
> android::widget::ListView::CHOICE_MODE_MULTIPLE;


J2CPP_DEFINE_CLASS(android::widget::ListView,"android/widget/ListView")
J2CPP_DEFINE_METHOD(android::widget::ListView,0,"<init>","(Landroid/content/Context;)V")
J2CPP_DEFINE_METHOD(android::widget::ListView,1,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::widget::ListView,2,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;I)V")
J2CPP_DEFINE_METHOD(android::widget::ListView,3,"getMaxScrollAmount","()I")
J2CPP_DEFINE_METHOD(android::widget::ListView,4,"addHeaderView","(Landroid/view/View;Ljava/lang/Object;Z)V")
J2CPP_DEFINE_METHOD(android::widget::ListView,5,"addHeaderView","(Landroid/view/View;)V")
J2CPP_DEFINE_METHOD(android::widget::ListView,6,"getHeaderViewsCount","()I")
J2CPP_DEFINE_METHOD(android::widget::ListView,7,"removeHeaderView","(Landroid/view/View;)Z")
J2CPP_DEFINE_METHOD(android::widget::ListView,8,"addFooterView","(Landroid/view/View;Ljava/lang/Object;Z)V")
J2CPP_DEFINE_METHOD(android::widget::ListView,9,"addFooterView","(Landroid/view/View;)V")
J2CPP_DEFINE_METHOD(android::widget::ListView,10,"getFooterViewsCount","()I")
J2CPP_DEFINE_METHOD(android::widget::ListView,11,"removeFooterView","(Landroid/view/View;)Z")
J2CPP_DEFINE_METHOD(android::widget::ListView,12,"getAdapter","()Landroid/widget/ListAdapter;")
J2CPP_DEFINE_METHOD(android::widget::ListView,13,"setAdapter","(Landroid/widget/ListAdapter;)V")
J2CPP_DEFINE_METHOD(android::widget::ListView,14,"requestChildRectangleOnScreen","(Landroid/view/View;Landroid/graphics/Rect;Z)Z")
J2CPP_DEFINE_METHOD(android::widget::ListView,15,"onMeasure","(II)V")
J2CPP_DEFINE_METHOD(android::widget::ListView,16,"layoutChildren","()V")
J2CPP_DEFINE_METHOD(android::widget::ListView,17,"canAnimate","()Z")
J2CPP_DEFINE_METHOD(android::widget::ListView,18,"setSelection","(I)V")
J2CPP_DEFINE_METHOD(android::widget::ListView,19,"setSelectionFromTop","(II)V")
J2CPP_DEFINE_METHOD(android::widget::ListView,20,"dispatchPopulateAccessibilityEvent","(Landroid/view/accessibility/AccessibilityEvent;)Z")
J2CPP_DEFINE_METHOD(android::widget::ListView,21,"setSelectionAfterHeaderView","()V")
J2CPP_DEFINE_METHOD(android::widget::ListView,22,"dispatchKeyEvent","(Landroid/view/KeyEvent;)Z")
J2CPP_DEFINE_METHOD(android::widget::ListView,23,"onKeyDown","(ILandroid/view/KeyEvent;)Z")
J2CPP_DEFINE_METHOD(android::widget::ListView,24,"onKeyMultiple","(IILandroid/view/KeyEvent;)Z")
J2CPP_DEFINE_METHOD(android::widget::ListView,25,"onKeyUp","(ILandroid/view/KeyEvent;)Z")
J2CPP_DEFINE_METHOD(android::widget::ListView,26,"setItemsCanFocus","(Z)V")
J2CPP_DEFINE_METHOD(android::widget::ListView,27,"getItemsCanFocus","()Z")
J2CPP_DEFINE_METHOD(android::widget::ListView,28,"setCacheColorHint","(I)V")
J2CPP_DEFINE_METHOD(android::widget::ListView,29,"dispatchDraw","(Landroid/graphics/Canvas;)V")
J2CPP_DEFINE_METHOD(android::widget::ListView,30,"getDivider","()Landroid/graphics/drawable/Drawable;")
J2CPP_DEFINE_METHOD(android::widget::ListView,31,"setDivider","(Landroid/graphics/drawable/Drawable;)V")
J2CPP_DEFINE_METHOD(android::widget::ListView,32,"getDividerHeight","()I")
J2CPP_DEFINE_METHOD(android::widget::ListView,33,"setDividerHeight","(I)V")
J2CPP_DEFINE_METHOD(android::widget::ListView,34,"setHeaderDividersEnabled","(Z)V")
J2CPP_DEFINE_METHOD(android::widget::ListView,35,"setFooterDividersEnabled","(Z)V")
J2CPP_DEFINE_METHOD(android::widget::ListView,36,"onFocusChanged","(ZILandroid/graphics/Rect;)V")
J2CPP_DEFINE_METHOD(android::widget::ListView,37,"onFinishInflate","()V")
J2CPP_DEFINE_METHOD(android::widget::ListView,38,"findViewTraversal","(I)Landroid/view/View;")
J2CPP_DEFINE_METHOD(android::widget::ListView,39,"findViewWithTagTraversal","(Ljava/lang/Object;)Landroid/view/View;")
J2CPP_DEFINE_METHOD(android::widget::ListView,40,"onTouchEvent","(Landroid/view/MotionEvent;)Z")
J2CPP_DEFINE_METHOD(android::widget::ListView,41,"getChoiceMode","()I")
J2CPP_DEFINE_METHOD(android::widget::ListView,42,"setChoiceMode","(I)V")
J2CPP_DEFINE_METHOD(android::widget::ListView,43,"performItemClick","(Landroid/view/View;IJ)Z")
J2CPP_DEFINE_METHOD(android::widget::ListView,44,"setItemChecked","(IZ)V")
J2CPP_DEFINE_METHOD(android::widget::ListView,45,"isItemChecked","(I)Z")
J2CPP_DEFINE_METHOD(android::widget::ListView,46,"getCheckedItemPosition","()I")
J2CPP_DEFINE_METHOD(android::widget::ListView,47,"getCheckedItemPositions","()Landroid/util/SparseBooleanArray;")
J2CPP_DEFINE_METHOD(android::widget::ListView,48,"getCheckItemIds","()[J")
J2CPP_DEFINE_METHOD(android::widget::ListView,49,"clearChoices","()V")
J2CPP_DEFINE_METHOD(android::widget::ListView,50,"onSaveInstanceState","()Landroid/os/Parcelable;")
J2CPP_DEFINE_METHOD(android::widget::ListView,51,"onRestoreInstanceState","(Landroid/os/Parcelable;)V")
J2CPP_DEFINE_METHOD(android::widget::ListView,52,"setAdapter","(Landroid/widget/Adapter;)V")
J2CPP_DEFINE_METHOD(android::widget::ListView,53,"getAdapter","()Landroid/widget/Adapter;")
J2CPP_DEFINE_FIELD(android::widget::ListView,0,"CHOICE_MODE_NONE","I")
J2CPP_DEFINE_FIELD(android::widget::ListView,1,"CHOICE_MODE_SINGLE","I")
J2CPP_DEFINE_FIELD(android::widget::ListView,2,"CHOICE_MODE_MULTIPLE","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_LISTVIEW_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
