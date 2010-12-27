/*================================================================================
  code generated by: java2cpp
  class: android.graphics.Typeface
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_TYPEFACE_HPP_DECL
#define J2CPP_ANDROID_GRAPHICS_TYPEFACE_HPP_DECL


namespace j2cpp { namespace java { namespace io { class File; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace android { namespace content { namespace res { class AssetManager; } } } }


#include <android/content/res/AssetManager.hpp>
#include <java/io/File.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace graphics {

	class Typeface;
	class Typeface
		: public cpp_object<Typeface>
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

		explicit Typeface(jobject jobj)
		: cpp_object<Typeface>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		cpp_int getStyle();
		cpp_boolean isBold();
		cpp_boolean isItalic();
		static local_ref< android::graphics::Typeface > create(local_ref< java::lang::String > const&, cpp_int const&);
		static local_ref< android::graphics::Typeface > create(local_ref< android::graphics::Typeface > const&, cpp_int const&);
		static local_ref< android::graphics::Typeface > defaultFromStyle(cpp_int const&);
		static local_ref< android::graphics::Typeface > createFromAsset(local_ref< android::content::res::AssetManager > const&, local_ref< java::lang::String > const&);
		static local_ref< android::graphics::Typeface > createFromFile(local_ref< java::io::File > const&);
		static local_ref< android::graphics::Typeface > createFromFile(local_ref< java::lang::String > const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< android::graphics::Typeface > > DEFAULT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< android::graphics::Typeface > > DEFAULT_BOLD;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< android::graphics::Typeface > > SANS_SERIF;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< android::graphics::Typeface > > SERIF;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), local_ref< android::graphics::Typeface > > MONOSPACE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), cpp_int > NORMAL;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), cpp_int > BOLD;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), cpp_int > ITALIC;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), cpp_int > BOLD_ITALIC;
	}; //class Typeface

} //namespace graphics
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_TYPEFACE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_TYPEFACE_HPP_IMPL
#define J2CPP_ANDROID_GRAPHICS_TYPEFACE_HPP_IMPL

namespace j2cpp {



android::graphics::Typeface::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}


cpp_int android::graphics::Typeface::getStyle()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

cpp_boolean android::graphics::Typeface::isBold()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

cpp_boolean android::graphics::Typeface::isItalic()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

local_ref< android::graphics::Typeface > android::graphics::Typeface::create(local_ref< java::lang::String > const &a0, cpp_int const &a1)
{
	return local_ref< android::graphics::Typeface >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< android::graphics::Typeface > android::graphics::Typeface::create(local_ref< android::graphics::Typeface > const &a0, cpp_int const &a1)
{
	return local_ref< android::graphics::Typeface >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< android::graphics::Typeface > android::graphics::Typeface::defaultFromStyle(cpp_int const &a0)
{
	return local_ref< android::graphics::Typeface >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), true>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::graphics::Typeface > android::graphics::Typeface::createFromAsset(local_ref< android::content::res::AssetManager > const &a0, local_ref< java::lang::String > const &a1)
{
	return local_ref< android::graphics::Typeface >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< android::graphics::Typeface > android::graphics::Typeface::createFromFile(local_ref< java::io::File > const &a0)
{
	return local_ref< android::graphics::Typeface >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), true>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::graphics::Typeface > android::graphics::Typeface::createFromFile(local_ref< java::lang::String > const &a0)
{
	return local_ref< android::graphics::Typeface >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), true>(),
			a0.get_jtype()
		)
	);
}




static_field<
	android::graphics::Typeface::J2CPP_CLASS_NAME,
	android::graphics::Typeface::J2CPP_FIELD_NAME(0),
	android::graphics::Typeface::J2CPP_FIELD_SIGNATURE(0),
	local_ref< android::graphics::Typeface >
> android::graphics::Typeface::DEFAULT;

static_field<
	android::graphics::Typeface::J2CPP_CLASS_NAME,
	android::graphics::Typeface::J2CPP_FIELD_NAME(1),
	android::graphics::Typeface::J2CPP_FIELD_SIGNATURE(1),
	local_ref< android::graphics::Typeface >
> android::graphics::Typeface::DEFAULT_BOLD;

static_field<
	android::graphics::Typeface::J2CPP_CLASS_NAME,
	android::graphics::Typeface::J2CPP_FIELD_NAME(2),
	android::graphics::Typeface::J2CPP_FIELD_SIGNATURE(2),
	local_ref< android::graphics::Typeface >
> android::graphics::Typeface::SANS_SERIF;

static_field<
	android::graphics::Typeface::J2CPP_CLASS_NAME,
	android::graphics::Typeface::J2CPP_FIELD_NAME(3),
	android::graphics::Typeface::J2CPP_FIELD_SIGNATURE(3),
	local_ref< android::graphics::Typeface >
> android::graphics::Typeface::SERIF;

static_field<
	android::graphics::Typeface::J2CPP_CLASS_NAME,
	android::graphics::Typeface::J2CPP_FIELD_NAME(4),
	android::graphics::Typeface::J2CPP_FIELD_SIGNATURE(4),
	local_ref< android::graphics::Typeface >
> android::graphics::Typeface::MONOSPACE;

static_field<
	android::graphics::Typeface::J2CPP_CLASS_NAME,
	android::graphics::Typeface::J2CPP_FIELD_NAME(5),
	android::graphics::Typeface::J2CPP_FIELD_SIGNATURE(5),
	cpp_int
> android::graphics::Typeface::NORMAL;

static_field<
	android::graphics::Typeface::J2CPP_CLASS_NAME,
	android::graphics::Typeface::J2CPP_FIELD_NAME(6),
	android::graphics::Typeface::J2CPP_FIELD_SIGNATURE(6),
	cpp_int
> android::graphics::Typeface::BOLD;

static_field<
	android::graphics::Typeface::J2CPP_CLASS_NAME,
	android::graphics::Typeface::J2CPP_FIELD_NAME(7),
	android::graphics::Typeface::J2CPP_FIELD_SIGNATURE(7),
	cpp_int
> android::graphics::Typeface::ITALIC;

static_field<
	android::graphics::Typeface::J2CPP_CLASS_NAME,
	android::graphics::Typeface::J2CPP_FIELD_NAME(8),
	android::graphics::Typeface::J2CPP_FIELD_SIGNATURE(8),
	cpp_int
> android::graphics::Typeface::BOLD_ITALIC;


J2CPP_DEFINE_CLASS(android::graphics::Typeface,"android/graphics/Typeface")
J2CPP_DEFINE_METHOD(android::graphics::Typeface,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::graphics::Typeface,1,"getStyle","()I")
J2CPP_DEFINE_METHOD(android::graphics::Typeface,2,"isBold","()Z")
J2CPP_DEFINE_METHOD(android::graphics::Typeface,3,"isItalic","()Z")
J2CPP_DEFINE_METHOD(android::graphics::Typeface,4,"create","(Ljava/lang/String;I)Landroid/graphics/Typeface;")
J2CPP_DEFINE_METHOD(android::graphics::Typeface,5,"create","(Landroid/graphics/Typeface;I)Landroid/graphics/Typeface;")
J2CPP_DEFINE_METHOD(android::graphics::Typeface,6,"defaultFromStyle","(I)Landroid/graphics/Typeface;")
J2CPP_DEFINE_METHOD(android::graphics::Typeface,7,"createFromAsset","(Landroid/content/res/AssetManager;Ljava/lang/String;)Landroid/graphics/Typeface;")
J2CPP_DEFINE_METHOD(android::graphics::Typeface,8,"createFromFile","(Ljava/io/File;)Landroid/graphics/Typeface;")
J2CPP_DEFINE_METHOD(android::graphics::Typeface,9,"createFromFile","(Ljava/lang/String;)Landroid/graphics/Typeface;")
J2CPP_DEFINE_METHOD(android::graphics::Typeface,10,"finalize","()V")
J2CPP_DEFINE_METHOD(android::graphics::Typeface,11,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::graphics::Typeface,0,"DEFAULT","Landroid/graphics/Typeface;")
J2CPP_DEFINE_FIELD(android::graphics::Typeface,1,"DEFAULT_BOLD","Landroid/graphics/Typeface;")
J2CPP_DEFINE_FIELD(android::graphics::Typeface,2,"SANS_SERIF","Landroid/graphics/Typeface;")
J2CPP_DEFINE_FIELD(android::graphics::Typeface,3,"SERIF","Landroid/graphics/Typeface;")
J2CPP_DEFINE_FIELD(android::graphics::Typeface,4,"MONOSPACE","Landroid/graphics/Typeface;")
J2CPP_DEFINE_FIELD(android::graphics::Typeface,5,"NORMAL","I")
J2CPP_DEFINE_FIELD(android::graphics::Typeface,6,"BOLD","I")
J2CPP_DEFINE_FIELD(android::graphics::Typeface,7,"ITALIC","I")
J2CPP_DEFINE_FIELD(android::graphics::Typeface,8,"BOLD_ITALIC","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_TYPEFACE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
