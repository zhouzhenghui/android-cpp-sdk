/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.graphics.Bitmap
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_BITMAP_HPP_DECL
#define J2CPP_ANDROID_GRAPHICS_BITMAP_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace io { class OutputStream; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Enum; } } }
namespace j2cpp { namespace java { namespace lang { class Comparable; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace nio { class Buffer; } } }
namespace j2cpp { namespace android { namespace graphics { class Paint; } } }
namespace j2cpp { namespace android { namespace graphics { class Canvas; } } }
namespace j2cpp { namespace android { namespace graphics { namespace Bitmap_ { class CompressFormat; } } } }
namespace j2cpp { namespace android { namespace graphics { class Matrix; } } }
namespace j2cpp { namespace android { namespace graphics { namespace Bitmap_ { class Config; } } } }
namespace j2cpp { namespace android { namespace util { class DisplayMetrics; } } }
namespace j2cpp { namespace android { namespace os { class Parcel; } } }
namespace j2cpp { namespace android { namespace os { class Parcelable; } } }
namespace j2cpp { namespace android { namespace os { namespace Parcelable_ { class Creator; } } } }


#include <android/graphics/Bitmap.hpp>
#include <android/graphics/Canvas.hpp>
#include <android/graphics/Matrix.hpp>
#include <android/graphics/Paint.hpp>
#include <android/os/Parcel.hpp>
#include <android/os/Parcelable.hpp>
#include <android/util/DisplayMetrics.hpp>
#include <java/io/OutputStream.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/nio/Buffer.hpp>


namespace j2cpp {

namespace android { namespace graphics {

	class Bitmap;
	namespace Bitmap_ {

		class CompressFormat;
		class CompressFormat
			: public object<CompressFormat>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_METHOD(2)
			J2CPP_DECLARE_METHOD(3)
			J2CPP_DECLARE_FIELD(0)
			J2CPP_DECLARE_FIELD(1)
			J2CPP_DECLARE_FIELD(2)

			explicit CompressFormat(jobject jobj)
			: object<CompressFormat>(jobj)
			{
			}

			operator local_ref<java::io::Serializable>() const;
			operator local_ref<java::lang::Object>() const;
			operator local_ref<java::lang::Enum>() const;
			operator local_ref<java::lang::Comparable>() const;


			static local_ref< array< local_ref< android::graphics::Bitmap_::CompressFormat >, 1> > values();
			static local_ref< android::graphics::Bitmap_::CompressFormat > valueOf(local_ref< java::lang::String >  const&);

			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< android::graphics::Bitmap_::CompressFormat > > JPEG;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< android::graphics::Bitmap_::CompressFormat > > PNG;
		}; //class CompressFormat

		class Config;
		class Config
			: public object<Config>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_METHOD(2)
			J2CPP_DECLARE_METHOD(3)
			J2CPP_DECLARE_FIELD(0)
			J2CPP_DECLARE_FIELD(1)
			J2CPP_DECLARE_FIELD(2)
			J2CPP_DECLARE_FIELD(3)
			J2CPP_DECLARE_FIELD(4)

			explicit Config(jobject jobj)
			: object<Config>(jobj)
			{
			}

			operator local_ref<java::io::Serializable>() const;
			operator local_ref<java::lang::Object>() const;
			operator local_ref<java::lang::Enum>() const;
			operator local_ref<java::lang::Comparable>() const;


			static local_ref< array< local_ref< android::graphics::Bitmap_::Config >, 1> > values();
			static local_ref< android::graphics::Bitmap_::Config > valueOf(local_ref< java::lang::String >  const&);

			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< android::graphics::Bitmap_::Config > > ALPHA_8;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< android::graphics::Bitmap_::Config > > ARGB_4444;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< android::graphics::Bitmap_::Config > > ARGB_8888;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< android::graphics::Bitmap_::Config > > RGB_565;
		}; //class Config

	} //namespace Bitmap_

	class Bitmap
		: public object<Bitmap>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)

		typedef Bitmap_::CompressFormat CompressFormat;
		typedef Bitmap_::Config Config;

		explicit Bitmap(jobject jobj)
		: object<Bitmap>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::os::Parcelable>() const;


		jint getDensity();
		void setDensity(jint);
		void recycle();
		jboolean isRecycled();
		void copyPixelsToBuffer(local_ref< java::nio::Buffer >  const&);
		void copyPixelsFromBuffer(local_ref< java::nio::Buffer >  const&);
		local_ref< android::graphics::Bitmap > copy(local_ref< android::graphics::Bitmap_::Config >  const&, jboolean);
		static local_ref< android::graphics::Bitmap > createScaledBitmap(local_ref< android::graphics::Bitmap >  const&, jint, jint, jboolean);
		static local_ref< android::graphics::Bitmap > createBitmap(local_ref< android::graphics::Bitmap >  const&);
		static local_ref< android::graphics::Bitmap > createBitmap(local_ref< android::graphics::Bitmap >  const&, jint, jint, jint, jint);
		static local_ref< android::graphics::Bitmap > createBitmap(local_ref< android::graphics::Bitmap >  const&, jint, jint, jint, jint, local_ref< android::graphics::Matrix >  const&, jboolean);
		static local_ref< android::graphics::Bitmap > createBitmap(jint, jint, local_ref< android::graphics::Bitmap_::Config >  const&);
		static local_ref< android::graphics::Bitmap > createBitmap(local_ref< array<jint,1> >  const&, jint, jint, jint, jint, local_ref< android::graphics::Bitmap_::Config >  const&);
		static local_ref< android::graphics::Bitmap > createBitmap(local_ref< array<jint,1> >  const&, jint, jint, local_ref< android::graphics::Bitmap_::Config >  const&);
		local_ref< array<jbyte,1> > getNinePatchChunk();
		jboolean compress(local_ref< android::graphics::Bitmap_::CompressFormat >  const&, jint, local_ref< java::io::OutputStream >  const&);
		jboolean isMutable();
		jint getWidth();
		jint getHeight();
		jint getScaledWidth(local_ref< android::graphics::Canvas >  const&);
		jint getScaledHeight(local_ref< android::graphics::Canvas >  const&);
		jint getScaledWidth(local_ref< android::util::DisplayMetrics >  const&);
		jint getScaledHeight(local_ref< android::util::DisplayMetrics >  const&);
		jint getScaledWidth(jint);
		jint getScaledHeight(jint);
		jint getRowBytes();
		local_ref< android::graphics::Bitmap_::Config > getConfig();
		jboolean hasAlpha();
		void eraseColor(jint);
		jint getPixel(jint, jint);
		void getPixels(local_ref< array<jint,1> >  const&, jint, jint, jint, jint, jint, jint);
		void setPixel(jint, jint, jint);
		void setPixels(local_ref< array<jint,1> >  const&, jint, jint, jint, jint, jint, jint);
		jint describeContents();
		void writeToParcel(local_ref< android::os::Parcel >  const&, jint);
		local_ref< android::graphics::Bitmap > extractAlpha();
		local_ref< android::graphics::Bitmap > extractAlpha(local_ref< android::graphics::Paint >  const&, local_ref< array<jint,1> >  const&);
		void prepareToDraw();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > DENSITY_NONE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< android::os::Parcelable_::Creator > > CREATOR;
	}; //class Bitmap

} //namespace graphics
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_BITMAP_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_BITMAP_HPP_IMPL
#define J2CPP_ANDROID_GRAPHICS_BITMAP_HPP_IMPL

namespace j2cpp {




android::graphics::Bitmap_::CompressFormat::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}

android::graphics::Bitmap_::CompressFormat::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::graphics::Bitmap_::CompressFormat::operator local_ref<java::lang::Enum>() const
{
	return local_ref<java::lang::Enum>(get_jobject());
}

android::graphics::Bitmap_::CompressFormat::operator local_ref<java::lang::Comparable>() const
{
	return local_ref<java::lang::Comparable>(get_jobject());
}

local_ref< array< local_ref< android::graphics::Bitmap_::CompressFormat >, 1> > android::graphics::Bitmap_::CompressFormat::values()
{
	return call_static_method<
		android::graphics::Bitmap_::CompressFormat::J2CPP_CLASS_NAME,
		android::graphics::Bitmap_::CompressFormat::J2CPP_METHOD_NAME(0),
		android::graphics::Bitmap_::CompressFormat::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< array< local_ref< android::graphics::Bitmap_::CompressFormat >, 1> >
	>();
}

local_ref< android::graphics::Bitmap_::CompressFormat > android::graphics::Bitmap_::CompressFormat::valueOf(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		android::graphics::Bitmap_::CompressFormat::J2CPP_CLASS_NAME,
		android::graphics::Bitmap_::CompressFormat::J2CPP_METHOD_NAME(1),
		android::graphics::Bitmap_::CompressFormat::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< android::graphics::Bitmap_::CompressFormat >
	>(a0);
}




static_field<
	android::graphics::Bitmap_::CompressFormat::J2CPP_CLASS_NAME,
	android::graphics::Bitmap_::CompressFormat::J2CPP_FIELD_NAME(0),
	android::graphics::Bitmap_::CompressFormat::J2CPP_FIELD_SIGNATURE(0),
	local_ref< android::graphics::Bitmap_::CompressFormat >
> android::graphics::Bitmap_::CompressFormat::JPEG;

static_field<
	android::graphics::Bitmap_::CompressFormat::J2CPP_CLASS_NAME,
	android::graphics::Bitmap_::CompressFormat::J2CPP_FIELD_NAME(1),
	android::graphics::Bitmap_::CompressFormat::J2CPP_FIELD_SIGNATURE(1),
	local_ref< android::graphics::Bitmap_::CompressFormat >
> android::graphics::Bitmap_::CompressFormat::PNG;


J2CPP_DEFINE_CLASS(android::graphics::Bitmap_::CompressFormat,"android/graphics/Bitmap$CompressFormat")
J2CPP_DEFINE_METHOD(android::graphics::Bitmap_::CompressFormat,0,"values","()[android.graphics.Bitmap.CompressFormat")
J2CPP_DEFINE_METHOD(android::graphics::Bitmap_::CompressFormat,1,"valueOf","(Ljava/lang/String;)Landroid/graphics/Bitmap$CompressFormat;")
J2CPP_DEFINE_METHOD(android::graphics::Bitmap_::CompressFormat,2,"<init>","(Ljava/lang/String;I)V")
J2CPP_DEFINE_METHOD(android::graphics::Bitmap_::CompressFormat,3,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::graphics::Bitmap_::CompressFormat,0,"JPEG","Landroid/graphics/Bitmap$CompressFormat;")
J2CPP_DEFINE_FIELD(android::graphics::Bitmap_::CompressFormat,1,"PNG","Landroid/graphics/Bitmap$CompressFormat;")
J2CPP_DEFINE_FIELD(android::graphics::Bitmap_::CompressFormat,2,"$VALUES","[android.graphics.Bitmap.CompressFormat")


android::graphics::Bitmap_::Config::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}

android::graphics::Bitmap_::Config::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::graphics::Bitmap_::Config::operator local_ref<java::lang::Enum>() const
{
	return local_ref<java::lang::Enum>(get_jobject());
}

android::graphics::Bitmap_::Config::operator local_ref<java::lang::Comparable>() const
{
	return local_ref<java::lang::Comparable>(get_jobject());
}

local_ref< array< local_ref< android::graphics::Bitmap_::Config >, 1> > android::graphics::Bitmap_::Config::values()
{
	return call_static_method<
		android::graphics::Bitmap_::Config::J2CPP_CLASS_NAME,
		android::graphics::Bitmap_::Config::J2CPP_METHOD_NAME(0),
		android::graphics::Bitmap_::Config::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< array< local_ref< android::graphics::Bitmap_::Config >, 1> >
	>();
}

local_ref< android::graphics::Bitmap_::Config > android::graphics::Bitmap_::Config::valueOf(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		android::graphics::Bitmap_::Config::J2CPP_CLASS_NAME,
		android::graphics::Bitmap_::Config::J2CPP_METHOD_NAME(1),
		android::graphics::Bitmap_::Config::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< android::graphics::Bitmap_::Config >
	>(a0);
}




static_field<
	android::graphics::Bitmap_::Config::J2CPP_CLASS_NAME,
	android::graphics::Bitmap_::Config::J2CPP_FIELD_NAME(0),
	android::graphics::Bitmap_::Config::J2CPP_FIELD_SIGNATURE(0),
	local_ref< android::graphics::Bitmap_::Config >
> android::graphics::Bitmap_::Config::ALPHA_8;

static_field<
	android::graphics::Bitmap_::Config::J2CPP_CLASS_NAME,
	android::graphics::Bitmap_::Config::J2CPP_FIELD_NAME(1),
	android::graphics::Bitmap_::Config::J2CPP_FIELD_SIGNATURE(1),
	local_ref< android::graphics::Bitmap_::Config >
> android::graphics::Bitmap_::Config::ARGB_4444;

static_field<
	android::graphics::Bitmap_::Config::J2CPP_CLASS_NAME,
	android::graphics::Bitmap_::Config::J2CPP_FIELD_NAME(2),
	android::graphics::Bitmap_::Config::J2CPP_FIELD_SIGNATURE(2),
	local_ref< android::graphics::Bitmap_::Config >
> android::graphics::Bitmap_::Config::ARGB_8888;

static_field<
	android::graphics::Bitmap_::Config::J2CPP_CLASS_NAME,
	android::graphics::Bitmap_::Config::J2CPP_FIELD_NAME(3),
	android::graphics::Bitmap_::Config::J2CPP_FIELD_SIGNATURE(3),
	local_ref< android::graphics::Bitmap_::Config >
> android::graphics::Bitmap_::Config::RGB_565;


J2CPP_DEFINE_CLASS(android::graphics::Bitmap_::Config,"android/graphics/Bitmap$Config")
J2CPP_DEFINE_METHOD(android::graphics::Bitmap_::Config,0,"values","()[android.graphics.Bitmap.Config")
J2CPP_DEFINE_METHOD(android::graphics::Bitmap_::Config,1,"valueOf","(Ljava/lang/String;)Landroid/graphics/Bitmap$Config;")
J2CPP_DEFINE_METHOD(android::graphics::Bitmap_::Config,2,"<init>","(Ljava/lang/String;I)V")
J2CPP_DEFINE_METHOD(android::graphics::Bitmap_::Config,3,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::graphics::Bitmap_::Config,0,"ALPHA_8","Landroid/graphics/Bitmap$Config;")
J2CPP_DEFINE_FIELD(android::graphics::Bitmap_::Config,1,"ARGB_4444","Landroid/graphics/Bitmap$Config;")
J2CPP_DEFINE_FIELD(android::graphics::Bitmap_::Config,2,"ARGB_8888","Landroid/graphics/Bitmap$Config;")
J2CPP_DEFINE_FIELD(android::graphics::Bitmap_::Config,3,"RGB_565","Landroid/graphics/Bitmap$Config;")
J2CPP_DEFINE_FIELD(android::graphics::Bitmap_::Config,4,"$VALUES","[android.graphics.Bitmap.Config")



android::graphics::Bitmap::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::graphics::Bitmap::operator local_ref<android::os::Parcelable>() const
{
	return local_ref<android::os::Parcelable>(get_jobject());
}


jint android::graphics::Bitmap::getDensity()
{
	return call_method<
		android::graphics::Bitmap::J2CPP_CLASS_NAME,
		android::graphics::Bitmap::J2CPP_METHOD_NAME(1),
		android::graphics::Bitmap::J2CPP_METHOD_SIGNATURE(1), 
		jint
	>(get_jobject());
}

void android::graphics::Bitmap::setDensity(jint a0)
{
	return call_method<
		android::graphics::Bitmap::J2CPP_CLASS_NAME,
		android::graphics::Bitmap::J2CPP_METHOD_NAME(2),
		android::graphics::Bitmap::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject(), a0);
}

void android::graphics::Bitmap::recycle()
{
	return call_method<
		android::graphics::Bitmap::J2CPP_CLASS_NAME,
		android::graphics::Bitmap::J2CPP_METHOD_NAME(3),
		android::graphics::Bitmap::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject());
}

jboolean android::graphics::Bitmap::isRecycled()
{
	return call_method<
		android::graphics::Bitmap::J2CPP_CLASS_NAME,
		android::graphics::Bitmap::J2CPP_METHOD_NAME(4),
		android::graphics::Bitmap::J2CPP_METHOD_SIGNATURE(4), 
		jboolean
	>(get_jobject());
}

void android::graphics::Bitmap::copyPixelsToBuffer(local_ref< java::nio::Buffer > const &a0)
{
	return call_method<
		android::graphics::Bitmap::J2CPP_CLASS_NAME,
		android::graphics::Bitmap::J2CPP_METHOD_NAME(5),
		android::graphics::Bitmap::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject(), a0);
}

void android::graphics::Bitmap::copyPixelsFromBuffer(local_ref< java::nio::Buffer > const &a0)
{
	return call_method<
		android::graphics::Bitmap::J2CPP_CLASS_NAME,
		android::graphics::Bitmap::J2CPP_METHOD_NAME(6),
		android::graphics::Bitmap::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject(), a0);
}

local_ref< android::graphics::Bitmap > android::graphics::Bitmap::copy(local_ref< android::graphics::Bitmap_::Config > const &a0, jboolean a1)
{
	return call_method<
		android::graphics::Bitmap::J2CPP_CLASS_NAME,
		android::graphics::Bitmap::J2CPP_METHOD_NAME(7),
		android::graphics::Bitmap::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< android::graphics::Bitmap >
	>(get_jobject(), a0, a1);
}

local_ref< android::graphics::Bitmap > android::graphics::Bitmap::createScaledBitmap(local_ref< android::graphics::Bitmap > const &a0, jint a1, jint a2, jboolean a3)
{
	return call_static_method<
		android::graphics::Bitmap::J2CPP_CLASS_NAME,
		android::graphics::Bitmap::J2CPP_METHOD_NAME(8),
		android::graphics::Bitmap::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< android::graphics::Bitmap >
	>(a0, a1, a2, a3);
}

local_ref< android::graphics::Bitmap > android::graphics::Bitmap::createBitmap(local_ref< android::graphics::Bitmap > const &a0)
{
	return call_static_method<
		android::graphics::Bitmap::J2CPP_CLASS_NAME,
		android::graphics::Bitmap::J2CPP_METHOD_NAME(9),
		android::graphics::Bitmap::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< android::graphics::Bitmap >
	>(a0);
}

local_ref< android::graphics::Bitmap > android::graphics::Bitmap::createBitmap(local_ref< android::graphics::Bitmap > const &a0, jint a1, jint a2, jint a3, jint a4)
{
	return call_static_method<
		android::graphics::Bitmap::J2CPP_CLASS_NAME,
		android::graphics::Bitmap::J2CPP_METHOD_NAME(10),
		android::graphics::Bitmap::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< android::graphics::Bitmap >
	>(a0, a1, a2, a3, a4);
}

local_ref< android::graphics::Bitmap > android::graphics::Bitmap::createBitmap(local_ref< android::graphics::Bitmap > const &a0, jint a1, jint a2, jint a3, jint a4, local_ref< android::graphics::Matrix > const &a5, jboolean a6)
{
	return call_static_method<
		android::graphics::Bitmap::J2CPP_CLASS_NAME,
		android::graphics::Bitmap::J2CPP_METHOD_NAME(11),
		android::graphics::Bitmap::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< android::graphics::Bitmap >
	>(a0, a1, a2, a3, a4, a5, a6);
}

local_ref< android::graphics::Bitmap > android::graphics::Bitmap::createBitmap(jint a0, jint a1, local_ref< android::graphics::Bitmap_::Config > const &a2)
{
	return call_static_method<
		android::graphics::Bitmap::J2CPP_CLASS_NAME,
		android::graphics::Bitmap::J2CPP_METHOD_NAME(12),
		android::graphics::Bitmap::J2CPP_METHOD_SIGNATURE(12), 
		local_ref< android::graphics::Bitmap >
	>(a0, a1, a2);
}

local_ref< android::graphics::Bitmap > android::graphics::Bitmap::createBitmap(local_ref< array<jint,1> > const &a0, jint a1, jint a2, jint a3, jint a4, local_ref< android::graphics::Bitmap_::Config > const &a5)
{
	return call_static_method<
		android::graphics::Bitmap::J2CPP_CLASS_NAME,
		android::graphics::Bitmap::J2CPP_METHOD_NAME(13),
		android::graphics::Bitmap::J2CPP_METHOD_SIGNATURE(13), 
		local_ref< android::graphics::Bitmap >
	>(a0, a1, a2, a3, a4, a5);
}

local_ref< android::graphics::Bitmap > android::graphics::Bitmap::createBitmap(local_ref< array<jint,1> > const &a0, jint a1, jint a2, local_ref< android::graphics::Bitmap_::Config > const &a3)
{
	return call_static_method<
		android::graphics::Bitmap::J2CPP_CLASS_NAME,
		android::graphics::Bitmap::J2CPP_METHOD_NAME(14),
		android::graphics::Bitmap::J2CPP_METHOD_SIGNATURE(14), 
		local_ref< android::graphics::Bitmap >
	>(a0, a1, a2, a3);
}

local_ref< array<jbyte,1> > android::graphics::Bitmap::getNinePatchChunk()
{
	return call_method<
		android::graphics::Bitmap::J2CPP_CLASS_NAME,
		android::graphics::Bitmap::J2CPP_METHOD_NAME(15),
		android::graphics::Bitmap::J2CPP_METHOD_SIGNATURE(15), 
		local_ref< array<jbyte,1> >
	>(get_jobject());
}

jboolean android::graphics::Bitmap::compress(local_ref< android::graphics::Bitmap_::CompressFormat > const &a0, jint a1, local_ref< java::io::OutputStream > const &a2)
{
	return call_method<
		android::graphics::Bitmap::J2CPP_CLASS_NAME,
		android::graphics::Bitmap::J2CPP_METHOD_NAME(16),
		android::graphics::Bitmap::J2CPP_METHOD_SIGNATURE(16), 
		jboolean
	>(get_jobject(), a0, a1, a2);
}

jboolean android::graphics::Bitmap::isMutable()
{
	return call_method<
		android::graphics::Bitmap::J2CPP_CLASS_NAME,
		android::graphics::Bitmap::J2CPP_METHOD_NAME(17),
		android::graphics::Bitmap::J2CPP_METHOD_SIGNATURE(17), 
		jboolean
	>(get_jobject());
}

jint android::graphics::Bitmap::getWidth()
{
	return call_method<
		android::graphics::Bitmap::J2CPP_CLASS_NAME,
		android::graphics::Bitmap::J2CPP_METHOD_NAME(18),
		android::graphics::Bitmap::J2CPP_METHOD_SIGNATURE(18), 
		jint
	>(get_jobject());
}

jint android::graphics::Bitmap::getHeight()
{
	return call_method<
		android::graphics::Bitmap::J2CPP_CLASS_NAME,
		android::graphics::Bitmap::J2CPP_METHOD_NAME(19),
		android::graphics::Bitmap::J2CPP_METHOD_SIGNATURE(19), 
		jint
	>(get_jobject());
}

jint android::graphics::Bitmap::getScaledWidth(local_ref< android::graphics::Canvas > const &a0)
{
	return call_method<
		android::graphics::Bitmap::J2CPP_CLASS_NAME,
		android::graphics::Bitmap::J2CPP_METHOD_NAME(20),
		android::graphics::Bitmap::J2CPP_METHOD_SIGNATURE(20), 
		jint
	>(get_jobject(), a0);
}

jint android::graphics::Bitmap::getScaledHeight(local_ref< android::graphics::Canvas > const &a0)
{
	return call_method<
		android::graphics::Bitmap::J2CPP_CLASS_NAME,
		android::graphics::Bitmap::J2CPP_METHOD_NAME(21),
		android::graphics::Bitmap::J2CPP_METHOD_SIGNATURE(21), 
		jint
	>(get_jobject(), a0);
}

jint android::graphics::Bitmap::getScaledWidth(local_ref< android::util::DisplayMetrics > const &a0)
{
	return call_method<
		android::graphics::Bitmap::J2CPP_CLASS_NAME,
		android::graphics::Bitmap::J2CPP_METHOD_NAME(22),
		android::graphics::Bitmap::J2CPP_METHOD_SIGNATURE(22), 
		jint
	>(get_jobject(), a0);
}

jint android::graphics::Bitmap::getScaledHeight(local_ref< android::util::DisplayMetrics > const &a0)
{
	return call_method<
		android::graphics::Bitmap::J2CPP_CLASS_NAME,
		android::graphics::Bitmap::J2CPP_METHOD_NAME(23),
		android::graphics::Bitmap::J2CPP_METHOD_SIGNATURE(23), 
		jint
	>(get_jobject(), a0);
}

jint android::graphics::Bitmap::getScaledWidth(jint a0)
{
	return call_method<
		android::graphics::Bitmap::J2CPP_CLASS_NAME,
		android::graphics::Bitmap::J2CPP_METHOD_NAME(24),
		android::graphics::Bitmap::J2CPP_METHOD_SIGNATURE(24), 
		jint
	>(get_jobject(), a0);
}

jint android::graphics::Bitmap::getScaledHeight(jint a0)
{
	return call_method<
		android::graphics::Bitmap::J2CPP_CLASS_NAME,
		android::graphics::Bitmap::J2CPP_METHOD_NAME(25),
		android::graphics::Bitmap::J2CPP_METHOD_SIGNATURE(25), 
		jint
	>(get_jobject(), a0);
}

jint android::graphics::Bitmap::getRowBytes()
{
	return call_method<
		android::graphics::Bitmap::J2CPP_CLASS_NAME,
		android::graphics::Bitmap::J2CPP_METHOD_NAME(26),
		android::graphics::Bitmap::J2CPP_METHOD_SIGNATURE(26), 
		jint
	>(get_jobject());
}

local_ref< android::graphics::Bitmap_::Config > android::graphics::Bitmap::getConfig()
{
	return call_method<
		android::graphics::Bitmap::J2CPP_CLASS_NAME,
		android::graphics::Bitmap::J2CPP_METHOD_NAME(27),
		android::graphics::Bitmap::J2CPP_METHOD_SIGNATURE(27), 
		local_ref< android::graphics::Bitmap_::Config >
	>(get_jobject());
}

jboolean android::graphics::Bitmap::hasAlpha()
{
	return call_method<
		android::graphics::Bitmap::J2CPP_CLASS_NAME,
		android::graphics::Bitmap::J2CPP_METHOD_NAME(28),
		android::graphics::Bitmap::J2CPP_METHOD_SIGNATURE(28), 
		jboolean
	>(get_jobject());
}

void android::graphics::Bitmap::eraseColor(jint a0)
{
	return call_method<
		android::graphics::Bitmap::J2CPP_CLASS_NAME,
		android::graphics::Bitmap::J2CPP_METHOD_NAME(29),
		android::graphics::Bitmap::J2CPP_METHOD_SIGNATURE(29), 
		void
	>(get_jobject(), a0);
}

jint android::graphics::Bitmap::getPixel(jint a0, jint a1)
{
	return call_method<
		android::graphics::Bitmap::J2CPP_CLASS_NAME,
		android::graphics::Bitmap::J2CPP_METHOD_NAME(30),
		android::graphics::Bitmap::J2CPP_METHOD_SIGNATURE(30), 
		jint
	>(get_jobject(), a0, a1);
}

void android::graphics::Bitmap::getPixels(local_ref< array<jint,1> > const &a0, jint a1, jint a2, jint a3, jint a4, jint a5, jint a6)
{
	return call_method<
		android::graphics::Bitmap::J2CPP_CLASS_NAME,
		android::graphics::Bitmap::J2CPP_METHOD_NAME(31),
		android::graphics::Bitmap::J2CPP_METHOD_SIGNATURE(31), 
		void
	>(get_jobject(), a0, a1, a2, a3, a4, a5, a6);
}

void android::graphics::Bitmap::setPixel(jint a0, jint a1, jint a2)
{
	return call_method<
		android::graphics::Bitmap::J2CPP_CLASS_NAME,
		android::graphics::Bitmap::J2CPP_METHOD_NAME(32),
		android::graphics::Bitmap::J2CPP_METHOD_SIGNATURE(32), 
		void
	>(get_jobject(), a0, a1, a2);
}

void android::graphics::Bitmap::setPixels(local_ref< array<jint,1> > const &a0, jint a1, jint a2, jint a3, jint a4, jint a5, jint a6)
{
	return call_method<
		android::graphics::Bitmap::J2CPP_CLASS_NAME,
		android::graphics::Bitmap::J2CPP_METHOD_NAME(33),
		android::graphics::Bitmap::J2CPP_METHOD_SIGNATURE(33), 
		void
	>(get_jobject(), a0, a1, a2, a3, a4, a5, a6);
}

jint android::graphics::Bitmap::describeContents()
{
	return call_method<
		android::graphics::Bitmap::J2CPP_CLASS_NAME,
		android::graphics::Bitmap::J2CPP_METHOD_NAME(34),
		android::graphics::Bitmap::J2CPP_METHOD_SIGNATURE(34), 
		jint
	>(get_jobject());
}

void android::graphics::Bitmap::writeToParcel(local_ref< android::os::Parcel > const &a0, jint a1)
{
	return call_method<
		android::graphics::Bitmap::J2CPP_CLASS_NAME,
		android::graphics::Bitmap::J2CPP_METHOD_NAME(35),
		android::graphics::Bitmap::J2CPP_METHOD_SIGNATURE(35), 
		void
	>(get_jobject(), a0, a1);
}

local_ref< android::graphics::Bitmap > android::graphics::Bitmap::extractAlpha()
{
	return call_method<
		android::graphics::Bitmap::J2CPP_CLASS_NAME,
		android::graphics::Bitmap::J2CPP_METHOD_NAME(36),
		android::graphics::Bitmap::J2CPP_METHOD_SIGNATURE(36), 
		local_ref< android::graphics::Bitmap >
	>(get_jobject());
}

local_ref< android::graphics::Bitmap > android::graphics::Bitmap::extractAlpha(local_ref< android::graphics::Paint > const &a0, local_ref< array<jint,1> > const &a1)
{
	return call_method<
		android::graphics::Bitmap::J2CPP_CLASS_NAME,
		android::graphics::Bitmap::J2CPP_METHOD_NAME(37),
		android::graphics::Bitmap::J2CPP_METHOD_SIGNATURE(37), 
		local_ref< android::graphics::Bitmap >
	>(get_jobject(), a0, a1);
}

void android::graphics::Bitmap::prepareToDraw()
{
	return call_method<
		android::graphics::Bitmap::J2CPP_CLASS_NAME,
		android::graphics::Bitmap::J2CPP_METHOD_NAME(38),
		android::graphics::Bitmap::J2CPP_METHOD_SIGNATURE(38), 
		void
	>(get_jobject());
}




static_field<
	android::graphics::Bitmap::J2CPP_CLASS_NAME,
	android::graphics::Bitmap::J2CPP_FIELD_NAME(0),
	android::graphics::Bitmap::J2CPP_FIELD_SIGNATURE(0),
	jint
> android::graphics::Bitmap::DENSITY_NONE;

static_field<
	android::graphics::Bitmap::J2CPP_CLASS_NAME,
	android::graphics::Bitmap::J2CPP_FIELD_NAME(1),
	android::graphics::Bitmap::J2CPP_FIELD_SIGNATURE(1),
	local_ref< android::os::Parcelable_::Creator >
> android::graphics::Bitmap::CREATOR;


J2CPP_DEFINE_CLASS(android::graphics::Bitmap,"android/graphics/Bitmap")
J2CPP_DEFINE_METHOD(android::graphics::Bitmap,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::graphics::Bitmap,1,"getDensity","()I")
J2CPP_DEFINE_METHOD(android::graphics::Bitmap,2,"setDensity","(I)V")
J2CPP_DEFINE_METHOD(android::graphics::Bitmap,3,"recycle","()V")
J2CPP_DEFINE_METHOD(android::graphics::Bitmap,4,"isRecycled","()Z")
J2CPP_DEFINE_METHOD(android::graphics::Bitmap,5,"copyPixelsToBuffer","(Ljava/nio/Buffer;)V")
J2CPP_DEFINE_METHOD(android::graphics::Bitmap,6,"copyPixelsFromBuffer","(Ljava/nio/Buffer;)V")
J2CPP_DEFINE_METHOD(android::graphics::Bitmap,7,"copy","(Landroid/graphics/Bitmap$Config;Z)Landroid/graphics/Bitmap;")
J2CPP_DEFINE_METHOD(android::graphics::Bitmap,8,"createScaledBitmap","(Landroid/graphics/Bitmap;IIZ)Landroid/graphics/Bitmap;")
J2CPP_DEFINE_METHOD(android::graphics::Bitmap,9,"createBitmap","(Landroid/graphics/Bitmap;)Landroid/graphics/Bitmap;")
J2CPP_DEFINE_METHOD(android::graphics::Bitmap,10,"createBitmap","(Landroid/graphics/Bitmap;IIII)Landroid/graphics/Bitmap;")
J2CPP_DEFINE_METHOD(android::graphics::Bitmap,11,"createBitmap","(Landroid/graphics/Bitmap;IIIILandroid/graphics/Matrix;Z)Landroid/graphics/Bitmap;")
J2CPP_DEFINE_METHOD(android::graphics::Bitmap,12,"createBitmap","(IILandroid/graphics/Bitmap$Config;)Landroid/graphics/Bitmap;")
J2CPP_DEFINE_METHOD(android::graphics::Bitmap,13,"createBitmap","([IIIIILandroid/graphics/Bitmap$Config;)Landroid/graphics/Bitmap;")
J2CPP_DEFINE_METHOD(android::graphics::Bitmap,14,"createBitmap","([IIILandroid/graphics/Bitmap$Config;)Landroid/graphics/Bitmap;")
J2CPP_DEFINE_METHOD(android::graphics::Bitmap,15,"getNinePatchChunk","()[B")
J2CPP_DEFINE_METHOD(android::graphics::Bitmap,16,"compress","(Landroid/graphics/Bitmap$CompressFormat;ILjava/io/OutputStream;)Z")
J2CPP_DEFINE_METHOD(android::graphics::Bitmap,17,"isMutable","()Z")
J2CPP_DEFINE_METHOD(android::graphics::Bitmap,18,"getWidth","()I")
J2CPP_DEFINE_METHOD(android::graphics::Bitmap,19,"getHeight","()I")
J2CPP_DEFINE_METHOD(android::graphics::Bitmap,20,"getScaledWidth","(Landroid/graphics/Canvas;)I")
J2CPP_DEFINE_METHOD(android::graphics::Bitmap,21,"getScaledHeight","(Landroid/graphics/Canvas;)I")
J2CPP_DEFINE_METHOD(android::graphics::Bitmap,22,"getScaledWidth","(Landroid/util/DisplayMetrics;)I")
J2CPP_DEFINE_METHOD(android::graphics::Bitmap,23,"getScaledHeight","(Landroid/util/DisplayMetrics;)I")
J2CPP_DEFINE_METHOD(android::graphics::Bitmap,24,"getScaledWidth","(I)I")
J2CPP_DEFINE_METHOD(android::graphics::Bitmap,25,"getScaledHeight","(I)I")
J2CPP_DEFINE_METHOD(android::graphics::Bitmap,26,"getRowBytes","()I")
J2CPP_DEFINE_METHOD(android::graphics::Bitmap,27,"getConfig","()Landroid/graphics/Bitmap$Config;")
J2CPP_DEFINE_METHOD(android::graphics::Bitmap,28,"hasAlpha","()Z")
J2CPP_DEFINE_METHOD(android::graphics::Bitmap,29,"eraseColor","(I)V")
J2CPP_DEFINE_METHOD(android::graphics::Bitmap,30,"getPixel","(II)I")
J2CPP_DEFINE_METHOD(android::graphics::Bitmap,31,"getPixels","([IIIIIII)V")
J2CPP_DEFINE_METHOD(android::graphics::Bitmap,32,"setPixel","(III)V")
J2CPP_DEFINE_METHOD(android::graphics::Bitmap,33,"setPixels","([IIIIIII)V")
J2CPP_DEFINE_METHOD(android::graphics::Bitmap,34,"describeContents","()I")
J2CPP_DEFINE_METHOD(android::graphics::Bitmap,35,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_METHOD(android::graphics::Bitmap,36,"extractAlpha","()Landroid/graphics/Bitmap;")
J2CPP_DEFINE_METHOD(android::graphics::Bitmap,37,"extractAlpha","(Landroid/graphics/Paint;[I)Landroid/graphics/Bitmap;")
J2CPP_DEFINE_METHOD(android::graphics::Bitmap,38,"prepareToDraw","()V")
J2CPP_DEFINE_METHOD(android::graphics::Bitmap,39,"finalize","()V")
J2CPP_DEFINE_METHOD(android::graphics::Bitmap,40,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::graphics::Bitmap,0,"DENSITY_NONE","I")
J2CPP_DEFINE_FIELD(android::graphics::Bitmap,1,"CREATOR","Landroid/os/Parcelable$Creator;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_BITMAP_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION