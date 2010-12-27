/*================================================================================
  code generated by: java2cpp
  class: android.widget.ViewSwitcher
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_VIEWSWITCHER_HPP_DECL
#define J2CPP_ANDROID_WIDGET_VIEWSWITCHER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace android { namespace view { namespace ViewGroup_ { class LayoutParams; } } } }
namespace j2cpp { namespace android { namespace widget { namespace ViewSwitcher_ { class ViewFactory; } } } }
namespace j2cpp { namespace android { namespace widget { class ViewAnimator; } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }


#include <android/content/Context.hpp>
#include <android/util/AttributeSet.hpp>
#include <android/view/View.hpp>
#include <android/view/ViewGroup.hpp>
#include <android/widget/ViewAnimator.hpp>
#include <android/widget/ViewSwitcher.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace widget {

	class ViewSwitcher;
	namespace ViewSwitcher_ {

		class ViewFactory;
		class ViewFactory
			: public cpp_object<ViewFactory>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			explicit ViewFactory(jobject jobj)
			: cpp_object<ViewFactory>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			local_ref< android::view::View > makeView();
		}; //class ViewFactory

	} //namespace ViewSwitcher_

	class ViewSwitcher
		: public cpp_object<ViewSwitcher>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)

		typedef ViewSwitcher_::ViewFactory ViewFactory;

		explicit ViewSwitcher(jobject jobj)
		: cpp_object<ViewSwitcher>(jobj)
		{
		}

		operator local_ref<android::widget::ViewAnimator>() const;


		ViewSwitcher(local_ref< android::content::Context > const&);
		ViewSwitcher(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&);
		void addView(local_ref< android::view::View > const&, cpp_int const&, local_ref< android::view::ViewGroup_::LayoutParams > const&);
		local_ref< android::view::View > getNextView();
		void setFactory(local_ref< android::widget::ViewSwitcher_::ViewFactory > const&);
		void reset();
	}; //class ViewSwitcher

} //namespace widget
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_VIEWSWITCHER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_VIEWSWITCHER_HPP_IMPL
#define J2CPP_ANDROID_WIDGET_VIEWSWITCHER_HPP_IMPL

namespace j2cpp {




android::widget::ViewSwitcher_::ViewFactory::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}

local_ref< android::view::View > android::widget::ViewSwitcher_::ViewFactory::makeView()
{
	return local_ref< android::view::View >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(android::widget::ViewSwitcher_::ViewFactory,"android/widget/ViewSwitcher$ViewFactory")
J2CPP_DEFINE_METHOD(android::widget::ViewSwitcher_::ViewFactory,0,"makeView","()Landroid/view/View;")



android::widget::ViewSwitcher::operator local_ref<android::widget::ViewAnimator>() const
{
	return local_ref<android::widget::ViewAnimator>(get_jtype());
}


android::widget::ViewSwitcher::ViewSwitcher(local_ref< android::content::Context > const &a0)
: cpp_object<android::widget::ViewSwitcher>(
	environment::get().get_jenv()->NewObject(
		get_class<android::widget::ViewSwitcher::J2CPP_CLASS_NAME>(),
		get_method_id<android::widget::ViewSwitcher::J2CPP_CLASS_NAME, android::widget::ViewSwitcher::J2CPP_METHOD_NAME(0), android::widget::ViewSwitcher::J2CPP_METHOD_SIGNATURE(0), false>(),
		a0.get_jtype()
	)
)
{
}



android::widget::ViewSwitcher::ViewSwitcher(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1)
: cpp_object<android::widget::ViewSwitcher>(
	environment::get().get_jenv()->NewObject(
		get_class<android::widget::ViewSwitcher::J2CPP_CLASS_NAME>(),
		get_method_id<android::widget::ViewSwitcher::J2CPP_CLASS_NAME, android::widget::ViewSwitcher::J2CPP_METHOD_NAME(1), android::widget::ViewSwitcher::J2CPP_METHOD_SIGNATURE(1), false>(),
		a0.get_jtype(), a1.get_jtype()
	)
)
{
}


void android::widget::ViewSwitcher::addView(local_ref< android::view::View > const &a0, cpp_int const &a1, local_ref< android::view::ViewGroup_::LayoutParams > const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< android::view::View > android::widget::ViewSwitcher::getNextView()
{
	return local_ref< android::view::View >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

void android::widget::ViewSwitcher::setFactory(local_ref< android::widget::ViewSwitcher_::ViewFactory > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

void android::widget::ViewSwitcher::reset()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(android::widget::ViewSwitcher,"android/widget/ViewSwitcher")
J2CPP_DEFINE_METHOD(android::widget::ViewSwitcher,0,"<init>","(Landroid/content/Context;)V")
J2CPP_DEFINE_METHOD(android::widget::ViewSwitcher,1,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::widget::ViewSwitcher,2,"addView","(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V")
J2CPP_DEFINE_METHOD(android::widget::ViewSwitcher,3,"getNextView","()Landroid/view/View;")
J2CPP_DEFINE_METHOD(android::widget::ViewSwitcher,4,"setFactory","(Landroid/widget/ViewSwitcher$ViewFactory;)V")
J2CPP_DEFINE_METHOD(android::widget::ViewSwitcher,5,"reset","()V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_VIEWSWITCHER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
