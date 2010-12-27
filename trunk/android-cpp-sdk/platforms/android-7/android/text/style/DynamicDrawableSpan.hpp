/*================================================================================
  code generated by: java2cpp
  class: android.text.style.DynamicDrawableSpan
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_STYLE_DYNAMICDRAWABLESPAN_HPP_DECL
#define J2CPP_ANDROID_TEXT_STYLE_DYNAMICDRAWABLESPAN_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace android { namespace graphics { class Paint; } } }
namespace j2cpp { namespace android { namespace graphics { class Canvas; } } }
namespace j2cpp { namespace android { namespace graphics { namespace Paint_ { class FontMetricsInt; } } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { class Drawable; } } } }
namespace j2cpp { namespace android { namespace text { namespace style { class ReplacementSpan; } } } }


#include <android/graphics/Canvas.hpp>
#include <android/graphics/Paint.hpp>
#include <android/graphics/drawable/Drawable.hpp>
#include <android/text/style/ReplacementSpan.hpp>
#include <java/lang/CharSequence.hpp>


namespace j2cpp {

namespace android { namespace text { namespace style {

	class DynamicDrawableSpan;
	class DynamicDrawableSpan
		: public cpp_object<DynamicDrawableSpan>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)

		explicit DynamicDrawableSpan(jobject jobj)
		: cpp_object<DynamicDrawableSpan>(jobj)
		{
		}

		operator local_ref<android::text::style::ReplacementSpan>() const;


		DynamicDrawableSpan();
		cpp_int getVerticalAlignment();
		local_ref< android::graphics::drawable::Drawable > getDrawable();
		cpp_int getSize(local_ref< android::graphics::Paint > const&, local_ref< java::lang::CharSequence > const&, cpp_int const&, cpp_int const&, local_ref< android::graphics::Paint_::FontMetricsInt > const&);
		void draw(local_ref< android::graphics::Canvas > const&, local_ref< java::lang::CharSequence > const&, cpp_int const&, cpp_int const&, cpp_float const&, cpp_int const&, cpp_int const&, cpp_int const&, local_ref< android::graphics::Paint > const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_int > ALIGN_BOTTOM;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), cpp_int > ALIGN_BASELINE;
	}; //class DynamicDrawableSpan

} //namespace style
} //namespace text
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_STYLE_DYNAMICDRAWABLESPAN_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_STYLE_DYNAMICDRAWABLESPAN_HPP_IMPL
#define J2CPP_ANDROID_TEXT_STYLE_DYNAMICDRAWABLESPAN_HPP_IMPL

namespace j2cpp {



android::text::style::DynamicDrawableSpan::operator local_ref<android::text::style::ReplacementSpan>() const
{
	return local_ref<android::text::style::ReplacementSpan>(get_jtype());
}


android::text::style::DynamicDrawableSpan::DynamicDrawableSpan()
: cpp_object<android::text::style::DynamicDrawableSpan>(
	environment::get().get_jenv()->NewObject(
		get_class<android::text::style::DynamicDrawableSpan::J2CPP_CLASS_NAME>(),
		get_method_id<android::text::style::DynamicDrawableSpan::J2CPP_CLASS_NAME, android::text::style::DynamicDrawableSpan::J2CPP_METHOD_NAME(0), android::text::style::DynamicDrawableSpan::J2CPP_METHOD_SIGNATURE(0), false>()
	)
)
{
}



cpp_int android::text::style::DynamicDrawableSpan::getVerticalAlignment()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

local_ref< android::graphics::drawable::Drawable > android::text::style::DynamicDrawableSpan::getDrawable()
{
	return local_ref< android::graphics::drawable::Drawable >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

cpp_int android::text::style::DynamicDrawableSpan::getSize(local_ref< android::graphics::Paint > const &a0, local_ref< java::lang::CharSequence > const &a1, cpp_int const &a2, cpp_int const &a3, local_ref< android::graphics::Paint_::FontMetricsInt > const &a4)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype()
		)
	);
}

void android::text::style::DynamicDrawableSpan::draw(local_ref< android::graphics::Canvas > const &a0, local_ref< java::lang::CharSequence > const &a1, cpp_int const &a2, cpp_int const &a3, cpp_float const &a4, cpp_int const &a5, cpp_int const &a6, cpp_int const &a7, local_ref< android::graphics::Paint > const &a8)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype(), a5.get_jtype(), a6.get_jtype(), a7.get_jtype(), a8.get_jtype()
		)
	);
}


static_field<
	android::text::style::DynamicDrawableSpan::J2CPP_CLASS_NAME,
	android::text::style::DynamicDrawableSpan::J2CPP_FIELD_NAME(0),
	android::text::style::DynamicDrawableSpan::J2CPP_FIELD_SIGNATURE(0),
	cpp_int
> android::text::style::DynamicDrawableSpan::ALIGN_BOTTOM;

static_field<
	android::text::style::DynamicDrawableSpan::J2CPP_CLASS_NAME,
	android::text::style::DynamicDrawableSpan::J2CPP_FIELD_NAME(1),
	android::text::style::DynamicDrawableSpan::J2CPP_FIELD_SIGNATURE(1),
	cpp_int
> android::text::style::DynamicDrawableSpan::ALIGN_BASELINE;


J2CPP_DEFINE_CLASS(android::text::style::DynamicDrawableSpan,"android/text/style/DynamicDrawableSpan")
J2CPP_DEFINE_METHOD(android::text::style::DynamicDrawableSpan,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::text::style::DynamicDrawableSpan,1,"<init>","(I)V")
J2CPP_DEFINE_METHOD(android::text::style::DynamicDrawableSpan,2,"getVerticalAlignment","()I")
J2CPP_DEFINE_METHOD(android::text::style::DynamicDrawableSpan,3,"getDrawable","()Landroid/graphics/drawable/Drawable;")
J2CPP_DEFINE_METHOD(android::text::style::DynamicDrawableSpan,4,"getSize","(Landroid/graphics/Paint;Ljava/lang/CharSequence;IILandroid/graphics/Paint$FontMetricsInt;)I")
J2CPP_DEFINE_METHOD(android::text::style::DynamicDrawableSpan,5,"draw","(Landroid/graphics/Canvas;Ljava/lang/CharSequence;IIFIIILandroid/graphics/Paint;)V")
J2CPP_DEFINE_FIELD(android::text::style::DynamicDrawableSpan,0,"ALIGN_BOTTOM","I")
J2CPP_DEFINE_FIELD(android::text::style::DynamicDrawableSpan,1,"ALIGN_BASELINE","I")
J2CPP_DEFINE_FIELD(android::text::style::DynamicDrawableSpan,2,"mVerticalAlignment","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_STYLE_DYNAMICDRAWABLESPAN_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
