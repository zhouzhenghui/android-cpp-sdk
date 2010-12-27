/*================================================================================
  code generated by: java2cpp
  class: android.text.method.ReplacementTransformationMethod
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_METHOD_REPLACEMENTTRANSFORMATIONMETHOD_HPP_DECL
#define J2CPP_ANDROID_TEXT_METHOD_REPLACEMENTTRANSFORMATIONMETHOD_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace android { namespace graphics { class Rect; } } }
namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace android { namespace text { namespace method { class TransformationMethod; } } } }


#include <android/graphics/Rect.hpp>
#include <android/text/method/TransformationMethod.hpp>
#include <android/view/View.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace text { namespace method {

	class ReplacementTransformationMethod;
	class ReplacementTransformationMethod
		: public cpp_object<ReplacementTransformationMethod>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)

		explicit ReplacementTransformationMethod(jobject jobj)
		: cpp_object<ReplacementTransformationMethod>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::text::method::TransformationMethod>() const;


		ReplacementTransformationMethod();
		local_ref< java::lang::CharSequence > getTransformation(local_ref< java::lang::CharSequence > const&, local_ref< android::view::View > const&);
		void onFocusChanged(local_ref< android::view::View > const&, local_ref< java::lang::CharSequence > const&, cpp_boolean const&, cpp_int const&, local_ref< android::graphics::Rect > const&);
	}; //class ReplacementTransformationMethod

} //namespace method
} //namespace text
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_METHOD_REPLACEMENTTRANSFORMATIONMETHOD_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_METHOD_REPLACEMENTTRANSFORMATIONMETHOD_HPP_IMPL
#define J2CPP_ANDROID_TEXT_METHOD_REPLACEMENTTRANSFORMATIONMETHOD_HPP_IMPL

namespace j2cpp {



android::text::method::ReplacementTransformationMethod::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}

android::text::method::ReplacementTransformationMethod::operator local_ref<android::text::method::TransformationMethod>() const
{
	return local_ref<android::text::method::TransformationMethod>(get_jtype());
}


android::text::method::ReplacementTransformationMethod::ReplacementTransformationMethod()
: cpp_object<android::text::method::ReplacementTransformationMethod>(
	environment::get().get_jenv()->NewObject(
		get_class<android::text::method::ReplacementTransformationMethod::J2CPP_CLASS_NAME>(),
		get_method_id<android::text::method::ReplacementTransformationMethod::J2CPP_CLASS_NAME, android::text::method::ReplacementTransformationMethod::J2CPP_METHOD_NAME(0), android::text::method::ReplacementTransformationMethod::J2CPP_METHOD_SIGNATURE(0), false>()
	)
)
{
}




local_ref< java::lang::CharSequence > android::text::method::ReplacementTransformationMethod::getTransformation(local_ref< java::lang::CharSequence > const &a0, local_ref< android::view::View > const &a1)
{
	return local_ref< java::lang::CharSequence >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::text::method::ReplacementTransformationMethod::onFocusChanged(local_ref< android::view::View > const &a0, local_ref< java::lang::CharSequence > const &a1, cpp_boolean const &a2, cpp_int const &a3, local_ref< android::graphics::Rect > const &a4)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::text::method::ReplacementTransformationMethod,"android/text/method/ReplacementTransformationMethod")
J2CPP_DEFINE_METHOD(android::text::method::ReplacementTransformationMethod,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::text::method::ReplacementTransformationMethod,1,"getOriginal","()[C")
J2CPP_DEFINE_METHOD(android::text::method::ReplacementTransformationMethod,2,"getReplacement","()[C")
J2CPP_DEFINE_METHOD(android::text::method::ReplacementTransformationMethod,3,"getTransformation","(Ljava/lang/CharSequence;Landroid/view/View;)Ljava/lang/CharSequence;")
J2CPP_DEFINE_METHOD(android::text::method::ReplacementTransformationMethod,4,"onFocusChanged","(Landroid/view/View;Ljava/lang/CharSequence;ZILandroid/graphics/Rect;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_METHOD_REPLACEMENTTRANSFORMATIONMETHOD_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
