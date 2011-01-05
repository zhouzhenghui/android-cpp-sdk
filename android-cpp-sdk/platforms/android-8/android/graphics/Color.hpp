/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.graphics.Color
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_COLOR_HPP_DECL
#define J2CPP_ANDROID_GRAPHICS_COLOR_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace graphics {

	class Color;
	class Color
		: public object<Color>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)
		J2CPP_DECLARE_FIELD(6)
		J2CPP_DECLARE_FIELD(7)
		J2CPP_DECLARE_FIELD(8)
		J2CPP_DECLARE_FIELD(9)
		J2CPP_DECLARE_FIELD(10)
		J2CPP_DECLARE_FIELD(11)

		explicit Color(jobject jobj)
		: object<Color>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		Color();
		static jint alpha(jint);
		static jint red(jint);
		static jint green(jint);
		static jint blue(jint);
		static jint rgb(jint, jint, jint);
		static jint argb(jint, jint, jint, jint);
		static jint parseColor(local_ref< java::lang::String >  const&);
		static void RGBToHSV(jint, jint, jint, local_ref< array<jfloat,1> >  const&);
		static void colorToHSV(jint, local_ref< array<jfloat,1> >  const&);
		static jint HSVToColor(local_ref< array<jfloat,1> >  const&);
		static jint HSVToColor(jint, local_ref< array<jfloat,1> >  const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > BLACK;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > DKGRAY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jint > GRAY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), jint > LTGRAY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), jint > WHITE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), jint > RED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), jint > GREEN;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), jint > BLUE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), jint > YELLOW;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(9), J2CPP_FIELD_SIGNATURE(9), jint > CYAN;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(10), J2CPP_FIELD_SIGNATURE(10), jint > MAGENTA;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(11), J2CPP_FIELD_SIGNATURE(11), jint > TRANSPARENT;
	}; //class Color

} //namespace graphics
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_COLOR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_COLOR_HPP_IMPL
#define J2CPP_ANDROID_GRAPHICS_COLOR_HPP_IMPL

namespace j2cpp {



android::graphics::Color::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::graphics::Color::Color()
: object<android::graphics::Color>(
	call_new_object<
		android::graphics::Color::J2CPP_CLASS_NAME,
		android::graphics::Color::J2CPP_METHOD_NAME(0),
		android::graphics::Color::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


jint android::graphics::Color::alpha(jint a0)
{
	return call_static_method<
		android::graphics::Color::J2CPP_CLASS_NAME,
		android::graphics::Color::J2CPP_METHOD_NAME(1),
		android::graphics::Color::J2CPP_METHOD_SIGNATURE(1), 
		jint
	>(a0);
}

jint android::graphics::Color::red(jint a0)
{
	return call_static_method<
		android::graphics::Color::J2CPP_CLASS_NAME,
		android::graphics::Color::J2CPP_METHOD_NAME(2),
		android::graphics::Color::J2CPP_METHOD_SIGNATURE(2), 
		jint
	>(a0);
}

jint android::graphics::Color::green(jint a0)
{
	return call_static_method<
		android::graphics::Color::J2CPP_CLASS_NAME,
		android::graphics::Color::J2CPP_METHOD_NAME(3),
		android::graphics::Color::J2CPP_METHOD_SIGNATURE(3), 
		jint
	>(a0);
}

jint android::graphics::Color::blue(jint a0)
{
	return call_static_method<
		android::graphics::Color::J2CPP_CLASS_NAME,
		android::graphics::Color::J2CPP_METHOD_NAME(4),
		android::graphics::Color::J2CPP_METHOD_SIGNATURE(4), 
		jint
	>(a0);
}

jint android::graphics::Color::rgb(jint a0, jint a1, jint a2)
{
	return call_static_method<
		android::graphics::Color::J2CPP_CLASS_NAME,
		android::graphics::Color::J2CPP_METHOD_NAME(5),
		android::graphics::Color::J2CPP_METHOD_SIGNATURE(5), 
		jint
	>(a0, a1, a2);
}

jint android::graphics::Color::argb(jint a0, jint a1, jint a2, jint a3)
{
	return call_static_method<
		android::graphics::Color::J2CPP_CLASS_NAME,
		android::graphics::Color::J2CPP_METHOD_NAME(6),
		android::graphics::Color::J2CPP_METHOD_SIGNATURE(6), 
		jint
	>(a0, a1, a2, a3);
}

jint android::graphics::Color::parseColor(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		android::graphics::Color::J2CPP_CLASS_NAME,
		android::graphics::Color::J2CPP_METHOD_NAME(7),
		android::graphics::Color::J2CPP_METHOD_SIGNATURE(7), 
		jint
	>(a0);
}

void android::graphics::Color::RGBToHSV(jint a0, jint a1, jint a2, local_ref< array<jfloat,1> > const &a3)
{
	return call_static_method<
		android::graphics::Color::J2CPP_CLASS_NAME,
		android::graphics::Color::J2CPP_METHOD_NAME(8),
		android::graphics::Color::J2CPP_METHOD_SIGNATURE(8), 
		void
	>(a0, a1, a2, a3);
}

void android::graphics::Color::colorToHSV(jint a0, local_ref< array<jfloat,1> > const &a1)
{
	return call_static_method<
		android::graphics::Color::J2CPP_CLASS_NAME,
		android::graphics::Color::J2CPP_METHOD_NAME(9),
		android::graphics::Color::J2CPP_METHOD_SIGNATURE(9), 
		void
	>(a0, a1);
}

jint android::graphics::Color::HSVToColor(local_ref< array<jfloat,1> > const &a0)
{
	return call_static_method<
		android::graphics::Color::J2CPP_CLASS_NAME,
		android::graphics::Color::J2CPP_METHOD_NAME(10),
		android::graphics::Color::J2CPP_METHOD_SIGNATURE(10), 
		jint
	>(a0);
}

jint android::graphics::Color::HSVToColor(jint a0, local_ref< array<jfloat,1> > const &a1)
{
	return call_static_method<
		android::graphics::Color::J2CPP_CLASS_NAME,
		android::graphics::Color::J2CPP_METHOD_NAME(11),
		android::graphics::Color::J2CPP_METHOD_SIGNATURE(11), 
		jint
	>(a0, a1);
}


static_field<
	android::graphics::Color::J2CPP_CLASS_NAME,
	android::graphics::Color::J2CPP_FIELD_NAME(0),
	android::graphics::Color::J2CPP_FIELD_SIGNATURE(0),
	jint
> android::graphics::Color::BLACK;

static_field<
	android::graphics::Color::J2CPP_CLASS_NAME,
	android::graphics::Color::J2CPP_FIELD_NAME(1),
	android::graphics::Color::J2CPP_FIELD_SIGNATURE(1),
	jint
> android::graphics::Color::DKGRAY;

static_field<
	android::graphics::Color::J2CPP_CLASS_NAME,
	android::graphics::Color::J2CPP_FIELD_NAME(2),
	android::graphics::Color::J2CPP_FIELD_SIGNATURE(2),
	jint
> android::graphics::Color::GRAY;

static_field<
	android::graphics::Color::J2CPP_CLASS_NAME,
	android::graphics::Color::J2CPP_FIELD_NAME(3),
	android::graphics::Color::J2CPP_FIELD_SIGNATURE(3),
	jint
> android::graphics::Color::LTGRAY;

static_field<
	android::graphics::Color::J2CPP_CLASS_NAME,
	android::graphics::Color::J2CPP_FIELD_NAME(4),
	android::graphics::Color::J2CPP_FIELD_SIGNATURE(4),
	jint
> android::graphics::Color::WHITE;

static_field<
	android::graphics::Color::J2CPP_CLASS_NAME,
	android::graphics::Color::J2CPP_FIELD_NAME(5),
	android::graphics::Color::J2CPP_FIELD_SIGNATURE(5),
	jint
> android::graphics::Color::RED;

static_field<
	android::graphics::Color::J2CPP_CLASS_NAME,
	android::graphics::Color::J2CPP_FIELD_NAME(6),
	android::graphics::Color::J2CPP_FIELD_SIGNATURE(6),
	jint
> android::graphics::Color::GREEN;

static_field<
	android::graphics::Color::J2CPP_CLASS_NAME,
	android::graphics::Color::J2CPP_FIELD_NAME(7),
	android::graphics::Color::J2CPP_FIELD_SIGNATURE(7),
	jint
> android::graphics::Color::BLUE;

static_field<
	android::graphics::Color::J2CPP_CLASS_NAME,
	android::graphics::Color::J2CPP_FIELD_NAME(8),
	android::graphics::Color::J2CPP_FIELD_SIGNATURE(8),
	jint
> android::graphics::Color::YELLOW;

static_field<
	android::graphics::Color::J2CPP_CLASS_NAME,
	android::graphics::Color::J2CPP_FIELD_NAME(9),
	android::graphics::Color::J2CPP_FIELD_SIGNATURE(9),
	jint
> android::graphics::Color::CYAN;

static_field<
	android::graphics::Color::J2CPP_CLASS_NAME,
	android::graphics::Color::J2CPP_FIELD_NAME(10),
	android::graphics::Color::J2CPP_FIELD_SIGNATURE(10),
	jint
> android::graphics::Color::MAGENTA;

static_field<
	android::graphics::Color::J2CPP_CLASS_NAME,
	android::graphics::Color::J2CPP_FIELD_NAME(11),
	android::graphics::Color::J2CPP_FIELD_SIGNATURE(11),
	jint
> android::graphics::Color::TRANSPARENT;


J2CPP_DEFINE_CLASS(android::graphics::Color,"android/graphics/Color")
J2CPP_DEFINE_METHOD(android::graphics::Color,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::graphics::Color,1,"alpha","(I)I")
J2CPP_DEFINE_METHOD(android::graphics::Color,2,"red","(I)I")
J2CPP_DEFINE_METHOD(android::graphics::Color,3,"green","(I)I")
J2CPP_DEFINE_METHOD(android::graphics::Color,4,"blue","(I)I")
J2CPP_DEFINE_METHOD(android::graphics::Color,5,"rgb","(III)I")
J2CPP_DEFINE_METHOD(android::graphics::Color,6,"argb","(IIII)I")
J2CPP_DEFINE_METHOD(android::graphics::Color,7,"parseColor","(Ljava/lang/String;)I")
J2CPP_DEFINE_METHOD(android::graphics::Color,8,"RGBToHSV","(III[F)V")
J2CPP_DEFINE_METHOD(android::graphics::Color,9,"colorToHSV","(I[F)V")
J2CPP_DEFINE_METHOD(android::graphics::Color,10,"HSVToColor","([F)I")
J2CPP_DEFINE_METHOD(android::graphics::Color,11,"HSVToColor","(I[F)I")
J2CPP_DEFINE_FIELD(android::graphics::Color,0,"BLACK","I")
J2CPP_DEFINE_FIELD(android::graphics::Color,1,"DKGRAY","I")
J2CPP_DEFINE_FIELD(android::graphics::Color,2,"GRAY","I")
J2CPP_DEFINE_FIELD(android::graphics::Color,3,"LTGRAY","I")
J2CPP_DEFINE_FIELD(android::graphics::Color,4,"WHITE","I")
J2CPP_DEFINE_FIELD(android::graphics::Color,5,"RED","I")
J2CPP_DEFINE_FIELD(android::graphics::Color,6,"GREEN","I")
J2CPP_DEFINE_FIELD(android::graphics::Color,7,"BLUE","I")
J2CPP_DEFINE_FIELD(android::graphics::Color,8,"YELLOW","I")
J2CPP_DEFINE_FIELD(android::graphics::Color,9,"CYAN","I")
J2CPP_DEFINE_FIELD(android::graphics::Color,10,"MAGENTA","I")
J2CPP_DEFINE_FIELD(android::graphics::Color,11,"TRANSPARENT","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_COLOR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
