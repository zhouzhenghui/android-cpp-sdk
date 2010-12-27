/*================================================================================
  code generated by: java2cpp
  class: android.text.style.BulletSpan
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_STYLE_BULLETSPAN_HPP_DECL
#define J2CPP_ANDROID_TEXT_STYLE_BULLETSPAN_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace android { namespace graphics { class Paint; } } }
namespace j2cpp { namespace android { namespace graphics { class Canvas; } } }
namespace j2cpp { namespace android { namespace text { class Layout; } } }
namespace j2cpp { namespace android { namespace text { namespace style { class LeadingMarginSpan; } } } }
namespace j2cpp { namespace android { namespace text { class ParcelableSpan; } } }
namespace j2cpp { namespace android { namespace os { class Parcel; } } }


#include <android/graphics/Canvas.hpp>
#include <android/graphics/Paint.hpp>
#include <android/os/Parcel.hpp>
#include <android/text/Layout.hpp>
#include <android/text/ParcelableSpan.hpp>
#include <android/text/style/LeadingMarginSpan.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace text { namespace style {

	class BulletSpan;
	class BulletSpan
		: public cpp_object<BulletSpan>
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
		J2CPP_DECLARE_FIELD(0)

		explicit BulletSpan(jobject jobj)
		: cpp_object<BulletSpan>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::text::style::LeadingMarginSpan>() const;
		operator local_ref<android::text::ParcelableSpan>() const;


		BulletSpan();
		BulletSpan(cpp_int const&);
		BulletSpan(cpp_int const&, cpp_int const&);
		BulletSpan(local_ref< android::os::Parcel > const&);
		cpp_int getSpanTypeId();
		cpp_int describeContents();
		void writeToParcel(local_ref< android::os::Parcel > const&, cpp_int const&);
		cpp_int getLeadingMargin(cpp_boolean const&);
		void drawLeadingMargin(local_ref< android::graphics::Canvas > const&, local_ref< android::graphics::Paint > const&, cpp_int const&, cpp_int const&, cpp_int const&, cpp_int const&, cpp_int const&, local_ref< java::lang::CharSequence > const&, cpp_int const&, cpp_int const&, cpp_boolean const&, local_ref< android::text::Layout > const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_int > STANDARD_GAP_WIDTH;
	}; //class BulletSpan

} //namespace style
} //namespace text
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_STYLE_BULLETSPAN_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_STYLE_BULLETSPAN_HPP_IMPL
#define J2CPP_ANDROID_TEXT_STYLE_BULLETSPAN_HPP_IMPL

namespace j2cpp {



android::text::style::BulletSpan::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}

android::text::style::BulletSpan::operator local_ref<android::text::style::LeadingMarginSpan>() const
{
	return local_ref<android::text::style::LeadingMarginSpan>(get_jtype());
}

android::text::style::BulletSpan::operator local_ref<android::text::ParcelableSpan>() const
{
	return local_ref<android::text::ParcelableSpan>(get_jtype());
}


android::text::style::BulletSpan::BulletSpan()
: cpp_object<android::text::style::BulletSpan>(
	environment::get().get_jenv()->NewObject(
		get_class<android::text::style::BulletSpan::J2CPP_CLASS_NAME>(),
		get_method_id<android::text::style::BulletSpan::J2CPP_CLASS_NAME, android::text::style::BulletSpan::J2CPP_METHOD_NAME(0), android::text::style::BulletSpan::J2CPP_METHOD_SIGNATURE(0), false>()
	)
)
{
}



android::text::style::BulletSpan::BulletSpan(cpp_int const &a0)
: cpp_object<android::text::style::BulletSpan>(
	environment::get().get_jenv()->NewObject(
		get_class<android::text::style::BulletSpan::J2CPP_CLASS_NAME>(),
		get_method_id<android::text::style::BulletSpan::J2CPP_CLASS_NAME, android::text::style::BulletSpan::J2CPP_METHOD_NAME(1), android::text::style::BulletSpan::J2CPP_METHOD_SIGNATURE(1), false>(),
		a0.get_jtype()
	)
)
{
}



android::text::style::BulletSpan::BulletSpan(cpp_int const &a0, cpp_int const &a1)
: cpp_object<android::text::style::BulletSpan>(
	environment::get().get_jenv()->NewObject(
		get_class<android::text::style::BulletSpan::J2CPP_CLASS_NAME>(),
		get_method_id<android::text::style::BulletSpan::J2CPP_CLASS_NAME, android::text::style::BulletSpan::J2CPP_METHOD_NAME(2), android::text::style::BulletSpan::J2CPP_METHOD_SIGNATURE(2), false>(),
		a0.get_jtype(), a1.get_jtype()
	)
)
{
}



android::text::style::BulletSpan::BulletSpan(local_ref< android::os::Parcel > const &a0)
: cpp_object<android::text::style::BulletSpan>(
	environment::get().get_jenv()->NewObject(
		get_class<android::text::style::BulletSpan::J2CPP_CLASS_NAME>(),
		get_method_id<android::text::style::BulletSpan::J2CPP_CLASS_NAME, android::text::style::BulletSpan::J2CPP_METHOD_NAME(3), android::text::style::BulletSpan::J2CPP_METHOD_SIGNATURE(3), false>(),
		a0.get_jtype()
	)
)
{
}


cpp_int android::text::style::BulletSpan::getSpanTypeId()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

cpp_int android::text::style::BulletSpan::describeContents()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

void android::text::style::BulletSpan::writeToParcel(local_ref< android::os::Parcel > const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_int android::text::style::BulletSpan::getLeadingMargin(cpp_boolean const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype()
		)
	);
}

void android::text::style::BulletSpan::drawLeadingMargin(local_ref< android::graphics::Canvas > const &a0, local_ref< android::graphics::Paint > const &a1, cpp_int const &a2, cpp_int const &a3, cpp_int const &a4, cpp_int const &a5, cpp_int const &a6, local_ref< java::lang::CharSequence > const &a7, cpp_int const &a8, cpp_int const &a9, cpp_boolean const &a10, local_ref< android::text::Layout > const &a11)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype(), a5.get_jtype(), a6.get_jtype(), a7.get_jtype(), a8.get_jtype(), a9.get_jtype(), a10.get_jtype(), a11.get_jtype()
		)
	);
}


static_field<
	android::text::style::BulletSpan::J2CPP_CLASS_NAME,
	android::text::style::BulletSpan::J2CPP_FIELD_NAME(0),
	android::text::style::BulletSpan::J2CPP_FIELD_SIGNATURE(0),
	cpp_int
> android::text::style::BulletSpan::STANDARD_GAP_WIDTH;


J2CPP_DEFINE_CLASS(android::text::style::BulletSpan,"android/text/style/BulletSpan")
J2CPP_DEFINE_METHOD(android::text::style::BulletSpan,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::text::style::BulletSpan,1,"<init>","(I)V")
J2CPP_DEFINE_METHOD(android::text::style::BulletSpan,2,"<init>","(II)V")
J2CPP_DEFINE_METHOD(android::text::style::BulletSpan,3,"<init>","(Landroid/os/Parcel;)V")
J2CPP_DEFINE_METHOD(android::text::style::BulletSpan,4,"getSpanTypeId","()I")
J2CPP_DEFINE_METHOD(android::text::style::BulletSpan,5,"describeContents","()I")
J2CPP_DEFINE_METHOD(android::text::style::BulletSpan,6,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_METHOD(android::text::style::BulletSpan,7,"getLeadingMargin","(Z)I")
J2CPP_DEFINE_METHOD(android::text::style::BulletSpan,8,"drawLeadingMargin","(Landroid/graphics/Canvas;Landroid/graphics/Paint;IIIIILjava/lang/CharSequence;IIZLandroid/text/Layout;)V")
J2CPP_DEFINE_FIELD(android::text::style::BulletSpan,0,"STANDARD_GAP_WIDTH","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_STYLE_BULLETSPAN_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
