/*================================================================================
  code generated by: java2cpp
  class: android.graphics.PixelFormat
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_PIXELFORMAT_HPP_DECL
#define J2CPP_ANDROID_GRAPHICS_PIXELFORMAT_HPP_DECL






namespace j2cpp {

namespace android { namespace graphics {

	class PixelFormat;
	class PixelFormat
		: public cpp_object<PixelFormat>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
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
		J2CPP_DECLARE_FIELD(12)
		J2CPP_DECLARE_FIELD(13)
		J2CPP_DECLARE_FIELD(14)
		J2CPP_DECLARE_FIELD(15)
		J2CPP_DECLARE_FIELD(16)
		J2CPP_DECLARE_FIELD(17)
		J2CPP_DECLARE_FIELD(18)
		J2CPP_DECLARE_FIELD(19)

		PixelFormat(jobject jobj)
		: cpp_object<PixelFormat>(jobj)
		, bytesPerPixel(jobj)
		, bitsPerPixel(jobj)
		{
		}

		static void getPixelFormatInfo(cpp_int const&, local_ref< android::graphics::PixelFormat > const&);
		static cpp_boolean formatHasAlpha(cpp_int const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_int > UNKNOWN;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), cpp_int > TRANSLUCENT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), cpp_int > TRANSPARENT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), cpp_int > OPAQUE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), cpp_int > RGBA_8888;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), cpp_int > RGBX_8888;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), cpp_int > RGB_888;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), cpp_int > RGB_565;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), cpp_int > RGBA_5551;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(9), J2CPP_FIELD_SIGNATURE(9), cpp_int > RGBA_4444;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(10), J2CPP_FIELD_SIGNATURE(10), cpp_int > A_8;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(11), J2CPP_FIELD_SIGNATURE(11), cpp_int > L_8;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(12), J2CPP_FIELD_SIGNATURE(12), cpp_int > LA_88;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(13), J2CPP_FIELD_SIGNATURE(13), cpp_int > RGB_332;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(14), J2CPP_FIELD_SIGNATURE(14), cpp_int > YCbCr_422_SP;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(15), J2CPP_FIELD_SIGNATURE(15), cpp_int > YCbCr_420_SP;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(16), J2CPP_FIELD_SIGNATURE(16), cpp_int > YCbCr_422_I;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(17), J2CPP_FIELD_SIGNATURE(17), cpp_int > JPEG;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(18), J2CPP_FIELD_SIGNATURE(18), cpp_int > bytesPerPixel;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(19), J2CPP_FIELD_SIGNATURE(19), cpp_int > bitsPerPixel;
	}; //class PixelFormat

} //namespace graphics
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_PIXELFORMAT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_PIXELFORMAT_HPP_IMPL
#define J2CPP_ANDROID_GRAPHICS_PIXELFORMAT_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::graphics::PixelFormat > create< android::graphics::PixelFormat>()
{
	return local_ref< android::graphics::PixelFormat >(
		environment::get().get_jenv()->NewObject(
			get_class<android::graphics::PixelFormat::J2CPP_CLASS_NAME>(),
			get_method_id<android::graphics::PixelFormat::J2CPP_CLASS_NAME, android::graphics::PixelFormat::J2CPP_METHOD_NAME(0), android::graphics::PixelFormat::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

void android::graphics::PixelFormat::getPixelFormatInfo(cpp_int const &a0, local_ref< android::graphics::PixelFormat > const &a1)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean android::graphics::PixelFormat::formatHasAlpha(cpp_int const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallStaticBooleanMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), true>(),
			a0.get_jtype()
		)
	);
}


static_field<
	android::graphics::PixelFormat::J2CPP_CLASS_NAME,
	android::graphics::PixelFormat::J2CPP_FIELD_NAME(0),
	android::graphics::PixelFormat::J2CPP_FIELD_SIGNATURE(0),
	cpp_int
> android::graphics::PixelFormat::UNKNOWN;

static_field<
	android::graphics::PixelFormat::J2CPP_CLASS_NAME,
	android::graphics::PixelFormat::J2CPP_FIELD_NAME(1),
	android::graphics::PixelFormat::J2CPP_FIELD_SIGNATURE(1),
	cpp_int
> android::graphics::PixelFormat::TRANSLUCENT;

static_field<
	android::graphics::PixelFormat::J2CPP_CLASS_NAME,
	android::graphics::PixelFormat::J2CPP_FIELD_NAME(2),
	android::graphics::PixelFormat::J2CPP_FIELD_SIGNATURE(2),
	cpp_int
> android::graphics::PixelFormat::TRANSPARENT;

static_field<
	android::graphics::PixelFormat::J2CPP_CLASS_NAME,
	android::graphics::PixelFormat::J2CPP_FIELD_NAME(3),
	android::graphics::PixelFormat::J2CPP_FIELD_SIGNATURE(3),
	cpp_int
> android::graphics::PixelFormat::OPAQUE;

static_field<
	android::graphics::PixelFormat::J2CPP_CLASS_NAME,
	android::graphics::PixelFormat::J2CPP_FIELD_NAME(4),
	android::graphics::PixelFormat::J2CPP_FIELD_SIGNATURE(4),
	cpp_int
> android::graphics::PixelFormat::RGBA_8888;

static_field<
	android::graphics::PixelFormat::J2CPP_CLASS_NAME,
	android::graphics::PixelFormat::J2CPP_FIELD_NAME(5),
	android::graphics::PixelFormat::J2CPP_FIELD_SIGNATURE(5),
	cpp_int
> android::graphics::PixelFormat::RGBX_8888;

static_field<
	android::graphics::PixelFormat::J2CPP_CLASS_NAME,
	android::graphics::PixelFormat::J2CPP_FIELD_NAME(6),
	android::graphics::PixelFormat::J2CPP_FIELD_SIGNATURE(6),
	cpp_int
> android::graphics::PixelFormat::RGB_888;

static_field<
	android::graphics::PixelFormat::J2CPP_CLASS_NAME,
	android::graphics::PixelFormat::J2CPP_FIELD_NAME(7),
	android::graphics::PixelFormat::J2CPP_FIELD_SIGNATURE(7),
	cpp_int
> android::graphics::PixelFormat::RGB_565;

static_field<
	android::graphics::PixelFormat::J2CPP_CLASS_NAME,
	android::graphics::PixelFormat::J2CPP_FIELD_NAME(8),
	android::graphics::PixelFormat::J2CPP_FIELD_SIGNATURE(8),
	cpp_int
> android::graphics::PixelFormat::RGBA_5551;

static_field<
	android::graphics::PixelFormat::J2CPP_CLASS_NAME,
	android::graphics::PixelFormat::J2CPP_FIELD_NAME(9),
	android::graphics::PixelFormat::J2CPP_FIELD_SIGNATURE(9),
	cpp_int
> android::graphics::PixelFormat::RGBA_4444;

static_field<
	android::graphics::PixelFormat::J2CPP_CLASS_NAME,
	android::graphics::PixelFormat::J2CPP_FIELD_NAME(10),
	android::graphics::PixelFormat::J2CPP_FIELD_SIGNATURE(10),
	cpp_int
> android::graphics::PixelFormat::A_8;

static_field<
	android::graphics::PixelFormat::J2CPP_CLASS_NAME,
	android::graphics::PixelFormat::J2CPP_FIELD_NAME(11),
	android::graphics::PixelFormat::J2CPP_FIELD_SIGNATURE(11),
	cpp_int
> android::graphics::PixelFormat::L_8;

static_field<
	android::graphics::PixelFormat::J2CPP_CLASS_NAME,
	android::graphics::PixelFormat::J2CPP_FIELD_NAME(12),
	android::graphics::PixelFormat::J2CPP_FIELD_SIGNATURE(12),
	cpp_int
> android::graphics::PixelFormat::LA_88;

static_field<
	android::graphics::PixelFormat::J2CPP_CLASS_NAME,
	android::graphics::PixelFormat::J2CPP_FIELD_NAME(13),
	android::graphics::PixelFormat::J2CPP_FIELD_SIGNATURE(13),
	cpp_int
> android::graphics::PixelFormat::RGB_332;

static_field<
	android::graphics::PixelFormat::J2CPP_CLASS_NAME,
	android::graphics::PixelFormat::J2CPP_FIELD_NAME(14),
	android::graphics::PixelFormat::J2CPP_FIELD_SIGNATURE(14),
	cpp_int
> android::graphics::PixelFormat::YCbCr_422_SP;

static_field<
	android::graphics::PixelFormat::J2CPP_CLASS_NAME,
	android::graphics::PixelFormat::J2CPP_FIELD_NAME(15),
	android::graphics::PixelFormat::J2CPP_FIELD_SIGNATURE(15),
	cpp_int
> android::graphics::PixelFormat::YCbCr_420_SP;

static_field<
	android::graphics::PixelFormat::J2CPP_CLASS_NAME,
	android::graphics::PixelFormat::J2CPP_FIELD_NAME(16),
	android::graphics::PixelFormat::J2CPP_FIELD_SIGNATURE(16),
	cpp_int
> android::graphics::PixelFormat::YCbCr_422_I;

static_field<
	android::graphics::PixelFormat::J2CPP_CLASS_NAME,
	android::graphics::PixelFormat::J2CPP_FIELD_NAME(17),
	android::graphics::PixelFormat::J2CPP_FIELD_SIGNATURE(17),
	cpp_int
> android::graphics::PixelFormat::JPEG;


J2CPP_DEFINE_CLASS(android::graphics::PixelFormat,"android/graphics/PixelFormat")
J2CPP_DEFINE_METHOD(android::graphics::PixelFormat,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::graphics::PixelFormat,1,"getPixelFormatInfo","(ILandroid/graphics/PixelFormat;)V")
J2CPP_DEFINE_METHOD(android::graphics::PixelFormat,2,"formatHasAlpha","(I)Z")
J2CPP_DEFINE_FIELD(android::graphics::PixelFormat,0,"UNKNOWN","I")
J2CPP_DEFINE_FIELD(android::graphics::PixelFormat,1,"TRANSLUCENT","I")
J2CPP_DEFINE_FIELD(android::graphics::PixelFormat,2,"TRANSPARENT","I")
J2CPP_DEFINE_FIELD(android::graphics::PixelFormat,3,"OPAQUE","I")
J2CPP_DEFINE_FIELD(android::graphics::PixelFormat,4,"RGBA_8888","I")
J2CPP_DEFINE_FIELD(android::graphics::PixelFormat,5,"RGBX_8888","I")
J2CPP_DEFINE_FIELD(android::graphics::PixelFormat,6,"RGB_888","I")
J2CPP_DEFINE_FIELD(android::graphics::PixelFormat,7,"RGB_565","I")
J2CPP_DEFINE_FIELD(android::graphics::PixelFormat,8,"RGBA_5551","I")
J2CPP_DEFINE_FIELD(android::graphics::PixelFormat,9,"RGBA_4444","I")
J2CPP_DEFINE_FIELD(android::graphics::PixelFormat,10,"A_8","I")
J2CPP_DEFINE_FIELD(android::graphics::PixelFormat,11,"L_8","I")
J2CPP_DEFINE_FIELD(android::graphics::PixelFormat,12,"LA_88","I")
J2CPP_DEFINE_FIELD(android::graphics::PixelFormat,13,"RGB_332","I")
J2CPP_DEFINE_FIELD(android::graphics::PixelFormat,14,"YCbCr_422_SP","I")
J2CPP_DEFINE_FIELD(android::graphics::PixelFormat,15,"YCbCr_420_SP","I")
J2CPP_DEFINE_FIELD(android::graphics::PixelFormat,16,"YCbCr_422_I","I")
J2CPP_DEFINE_FIELD(android::graphics::PixelFormat,17,"JPEG","I")
J2CPP_DEFINE_FIELD(android::graphics::PixelFormat,18,"bytesPerPixel","I")
J2CPP_DEFINE_FIELD(android::graphics::PixelFormat,19,"bitsPerPixel","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_PIXELFORMAT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION