/*================================================================================
  code generated by: java2cpp
  class: android.widget.RatingBar
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_RATINGBAR_HPP_DECL
#define J2CPP_ANDROID_WIDGET_RATINGBAR_HPP_DECL


namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }
namespace j2cpp { namespace android { namespace widget { namespace RatingBar_ { class OnRatingBarChangeListener; } } } }


#include <android/content/Context.hpp>
#include <android/util/AttributeSet.hpp>
#include <android/widget/RatingBar.hpp>


namespace j2cpp {

namespace android { namespace widget {

	class RatingBar;
	namespace RatingBar_ {

		class OnRatingBarChangeListener;
		class OnRatingBarChangeListener
			: public cpp_object<OnRatingBarChangeListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			OnRatingBarChangeListener(jobject jobj)
			: cpp_object<OnRatingBarChangeListener>(jobj)
			{
			}

			void onRatingChanged(local_ref< android::widget::RatingBar > const&, cpp_float const&, cpp_boolean const&);
		}; //class OnRatingBarChangeListener

	} //namespace RatingBar_

	class RatingBar
		: public cpp_object<RatingBar>
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

		typedef RatingBar_::OnRatingBarChangeListener OnRatingBarChangeListener;

		RatingBar(jobject jobj)
		: cpp_object<RatingBar>(jobj)
		{
		}

		void setOnRatingBarChangeListener(local_ref< android::widget::RatingBar_::OnRatingBarChangeListener > const&);
		local_ref< android::widget::RatingBar_::OnRatingBarChangeListener > getOnRatingBarChangeListener();
		void setIsIndicator(cpp_boolean const&);
		cpp_boolean isIndicator();
		void setNumStars(cpp_int const&);
		cpp_int getNumStars();
		void setRating(cpp_float const&);
		cpp_float getRating();
		void setStepSize(cpp_float const&);
		cpp_float getStepSize();
		void setMax(cpp_int const&);
	}; //class RatingBar

} //namespace widget
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_RATINGBAR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_RATINGBAR_HPP_IMPL
#define J2CPP_ANDROID_WIDGET_RATINGBAR_HPP_IMPL

namespace j2cpp {



void android::widget::RatingBar_::OnRatingBarChangeListener::onRatingChanged(local_ref< android::widget::RatingBar > const &a0, cpp_float const &a1, cpp_boolean const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::widget::RatingBar_::OnRatingBarChangeListener,"android/widget/RatingBar$OnRatingBarChangeListener")
J2CPP_DEFINE_METHOD(android::widget::RatingBar_::OnRatingBarChangeListener,0,"onRatingChanged","(Landroid/widget/RatingBar;FZ)V")


template <>
local_ref< android::widget::RatingBar > create< android::widget::RatingBar>(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1, cpp_int const &a2)
{
	return local_ref< android::widget::RatingBar >(
		environment::get().get_jenv()->NewObject(
			get_class<android::widget::RatingBar::J2CPP_CLASS_NAME>(),
			get_method_id<android::widget::RatingBar::J2CPP_CLASS_NAME, android::widget::RatingBar::J2CPP_METHOD_NAME(0), android::widget::RatingBar::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

template <>
local_ref< android::widget::RatingBar > create< android::widget::RatingBar>(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1)
{
	return local_ref< android::widget::RatingBar >(
		environment::get().get_jenv()->NewObject(
			get_class<android::widget::RatingBar::J2CPP_CLASS_NAME>(),
			get_method_id<android::widget::RatingBar::J2CPP_CLASS_NAME, android::widget::RatingBar::J2CPP_METHOD_NAME(1), android::widget::RatingBar::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

template <>
local_ref< android::widget::RatingBar > create< android::widget::RatingBar>(local_ref< android::content::Context > const &a0)
{
	return local_ref< android::widget::RatingBar >(
		environment::get().get_jenv()->NewObject(
			get_class<android::widget::RatingBar::J2CPP_CLASS_NAME>(),
			get_method_id<android::widget::RatingBar::J2CPP_CLASS_NAME, android::widget::RatingBar::J2CPP_METHOD_NAME(2), android::widget::RatingBar::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

void android::widget::RatingBar::setOnRatingBarChangeListener(local_ref< android::widget::RatingBar_::OnRatingBarChangeListener > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::widget::RatingBar_::OnRatingBarChangeListener > android::widget::RatingBar::getOnRatingBarChangeListener()
{
	return local_ref< android::widget::RatingBar_::OnRatingBarChangeListener >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

void android::widget::RatingBar::setIsIndicator(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::widget::RatingBar::isIndicator()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

void android::widget::RatingBar::setNumStars(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::widget::RatingBar::getNumStars()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}

void android::widget::RatingBar::setRating(cpp_float const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype()
		)
	);
}

cpp_float android::widget::RatingBar::getRating()
{
	return cpp_float(
		environment::get().get_jenv()->CallFloatMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>()
		)
	);
}

void android::widget::RatingBar::setStepSize(cpp_float const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype()
		)
	);
}

cpp_float android::widget::RatingBar::getStepSize()
{
	return cpp_float(
		environment::get().get_jenv()->CallFloatMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>()
		)
	);
}


void android::widget::RatingBar::setMax(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::widget::RatingBar,"android/widget/RatingBar")
J2CPP_DEFINE_METHOD(android::widget::RatingBar,0,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;I)V")
J2CPP_DEFINE_METHOD(android::widget::RatingBar,1,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::widget::RatingBar,2,"<init>","(Landroid/content/Context;)V")
J2CPP_DEFINE_METHOD(android::widget::RatingBar,3,"setOnRatingBarChangeListener","(Landroid/widget/RatingBar$OnRatingBarChangeListener;)V")
J2CPP_DEFINE_METHOD(android::widget::RatingBar,4,"getOnRatingBarChangeListener","()Landroid/widget/RatingBar$OnRatingBarChangeListener;")
J2CPP_DEFINE_METHOD(android::widget::RatingBar,5,"setIsIndicator","(Z)V")
J2CPP_DEFINE_METHOD(android::widget::RatingBar,6,"isIndicator","()Z")
J2CPP_DEFINE_METHOD(android::widget::RatingBar,7,"setNumStars","(I)V")
J2CPP_DEFINE_METHOD(android::widget::RatingBar,8,"getNumStars","()I")
J2CPP_DEFINE_METHOD(android::widget::RatingBar,9,"setRating","(F)V")
J2CPP_DEFINE_METHOD(android::widget::RatingBar,10,"getRating","()F")
J2CPP_DEFINE_METHOD(android::widget::RatingBar,11,"setStepSize","(F)V")
J2CPP_DEFINE_METHOD(android::widget::RatingBar,12,"getStepSize","()F")
J2CPP_DEFINE_METHOD(android::widget::RatingBar,13,"onMeasure","(II)V")
J2CPP_DEFINE_METHOD(android::widget::RatingBar,14,"setMax","(I)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_RATINGBAR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION