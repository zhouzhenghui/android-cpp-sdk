/*================================================================================
  code generated by: java2cpp
  class: android.widget.ImageButton
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_IMAGEBUTTON_HPP_DECL
#define J2CPP_ANDROID_WIDGET_IMAGEBUTTON_HPP_DECL


namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace widget { class ImageView; } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }


#include <android/content/Context.hpp>
#include <android/util/AttributeSet.hpp>
#include <android/widget/ImageView.hpp>


namespace j2cpp {

namespace android { namespace widget {

	class ImageButton;
	class ImageButton
		: public cpp_object<ImageButton>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		explicit ImageButton(jobject jobj)
		: cpp_object<ImageButton>(jobj)
		{
		}

		operator local_ref<android::widget::ImageView>() const;


		ImageButton(local_ref< android::content::Context > const&);
		ImageButton(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&);
		ImageButton(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&, cpp_int const&);
	}; //class ImageButton

} //namespace widget
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_IMAGEBUTTON_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_IMAGEBUTTON_HPP_IMPL
#define J2CPP_ANDROID_WIDGET_IMAGEBUTTON_HPP_IMPL

namespace j2cpp {



android::widget::ImageButton::operator local_ref<android::widget::ImageView>() const
{
	return local_ref<android::widget::ImageView>(get_jtype());
}


android::widget::ImageButton::ImageButton(local_ref< android::content::Context > const &a0)
: cpp_object<android::widget::ImageButton>(
	environment::get().get_jenv()->NewObject(
		get_class<android::widget::ImageButton::J2CPP_CLASS_NAME>(),
		get_method_id<android::widget::ImageButton::J2CPP_CLASS_NAME, android::widget::ImageButton::J2CPP_METHOD_NAME(0), android::widget::ImageButton::J2CPP_METHOD_SIGNATURE(0), false>(),
		a0.get_jtype()
	)
)
{
}



android::widget::ImageButton::ImageButton(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1)
: cpp_object<android::widget::ImageButton>(
	environment::get().get_jenv()->NewObject(
		get_class<android::widget::ImageButton::J2CPP_CLASS_NAME>(),
		get_method_id<android::widget::ImageButton::J2CPP_CLASS_NAME, android::widget::ImageButton::J2CPP_METHOD_NAME(1), android::widget::ImageButton::J2CPP_METHOD_SIGNATURE(1), false>(),
		a0.get_jtype(), a1.get_jtype()
	)
)
{
}



android::widget::ImageButton::ImageButton(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1, cpp_int const &a2)
: cpp_object<android::widget::ImageButton>(
	environment::get().get_jenv()->NewObject(
		get_class<android::widget::ImageButton::J2CPP_CLASS_NAME>(),
		get_method_id<android::widget::ImageButton::J2CPP_CLASS_NAME, android::widget::ImageButton::J2CPP_METHOD_NAME(2), android::widget::ImageButton::J2CPP_METHOD_SIGNATURE(2), false>(),
		a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
	)
)
{
}




J2CPP_DEFINE_CLASS(android::widget::ImageButton,"android/widget/ImageButton")
J2CPP_DEFINE_METHOD(android::widget::ImageButton,0,"<init>","(Landroid/content/Context;)V")
J2CPP_DEFINE_METHOD(android::widget::ImageButton,1,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::widget::ImageButton,2,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;I)V")
J2CPP_DEFINE_METHOD(android::widget::ImageButton,3,"onSetAlpha","(I)Z")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_IMAGEBUTTON_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
