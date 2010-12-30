/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.graphics.drawable.PictureDrawable
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_DRAWABLE_PICTUREDRAWABLE_HPP_DECL
#define J2CPP_ANDROID_GRAPHICS_DRAWABLE_PICTUREDRAWABLE_HPP_DECL


namespace j2cpp { namespace android { namespace graphics { class Picture; } } }
namespace j2cpp { namespace android { namespace graphics { class Canvas; } } }
namespace j2cpp { namespace android { namespace graphics { class ColorFilter; } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { class Drawable; } } } }


#include <android/graphics/Canvas.hpp>
#include <android/graphics/ColorFilter.hpp>
#include <android/graphics/Picture.hpp>
#include <android/graphics/drawable/Drawable.hpp>


namespace j2cpp {

namespace android { namespace graphics { namespace drawable {

	class PictureDrawable;
	class PictureDrawable
		: public object<PictureDrawable>
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

		explicit PictureDrawable(jobject jobj)
		: object<PictureDrawable>(jobj)
		{
		}

		operator local_ref<android::graphics::drawable::Drawable>() const;


		PictureDrawable(local_ref< android::graphics::Picture > const&);
		local_ref< android::graphics::Picture > getPicture();
		void setPicture(local_ref< android::graphics::Picture >  const&);
		void draw(local_ref< android::graphics::Canvas >  const&);
		jint getIntrinsicWidth();
		jint getIntrinsicHeight();
		jint getOpacity();
		void setFilterBitmap(jboolean);
		void setDither(jboolean);
		void setColorFilter(local_ref< android::graphics::ColorFilter >  const&);
		void setAlpha(jint);
	}; //class PictureDrawable

} //namespace drawable
} //namespace graphics
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_DRAWABLE_PICTUREDRAWABLE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_DRAWABLE_PICTUREDRAWABLE_HPP_IMPL
#define J2CPP_ANDROID_GRAPHICS_DRAWABLE_PICTUREDRAWABLE_HPP_IMPL

namespace j2cpp {



android::graphics::drawable::PictureDrawable::operator local_ref<android::graphics::drawable::Drawable>() const
{
	return local_ref<android::graphics::drawable::Drawable>(get_jobject());
}


android::graphics::drawable::PictureDrawable::PictureDrawable(local_ref< android::graphics::Picture > const &a0)
: object<android::graphics::drawable::PictureDrawable>(
	call_new_object<
		android::graphics::drawable::PictureDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::PictureDrawable::J2CPP_METHOD_NAME(0),
		android::graphics::drawable::PictureDrawable::J2CPP_METHOD_SIGNATURE(0)>
	(a0)
)
{
}


local_ref< android::graphics::Picture > android::graphics::drawable::PictureDrawable::getPicture()
{
	return call_method<
		android::graphics::drawable::PictureDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::PictureDrawable::J2CPP_METHOD_NAME(1),
		android::graphics::drawable::PictureDrawable::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< android::graphics::Picture > >
	(get_jobject());
}

void android::graphics::drawable::PictureDrawable::setPicture(local_ref< android::graphics::Picture > const &a0)
{
	return call_method<
		android::graphics::drawable::PictureDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::PictureDrawable::J2CPP_METHOD_NAME(2),
		android::graphics::drawable::PictureDrawable::J2CPP_METHOD_SIGNATURE(2), 
		void >
	(get_jobject(), a0);
}

void android::graphics::drawable::PictureDrawable::draw(local_ref< android::graphics::Canvas > const &a0)
{
	return call_method<
		android::graphics::drawable::PictureDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::PictureDrawable::J2CPP_METHOD_NAME(3),
		android::graphics::drawable::PictureDrawable::J2CPP_METHOD_SIGNATURE(3), 
		void >
	(get_jobject(), a0);
}

jint android::graphics::drawable::PictureDrawable::getIntrinsicWidth()
{
	return call_method<
		android::graphics::drawable::PictureDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::PictureDrawable::J2CPP_METHOD_NAME(4),
		android::graphics::drawable::PictureDrawable::J2CPP_METHOD_SIGNATURE(4), 
		jint >
	(get_jobject());
}

jint android::graphics::drawable::PictureDrawable::getIntrinsicHeight()
{
	return call_method<
		android::graphics::drawable::PictureDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::PictureDrawable::J2CPP_METHOD_NAME(5),
		android::graphics::drawable::PictureDrawable::J2CPP_METHOD_SIGNATURE(5), 
		jint >
	(get_jobject());
}

jint android::graphics::drawable::PictureDrawable::getOpacity()
{
	return call_method<
		android::graphics::drawable::PictureDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::PictureDrawable::J2CPP_METHOD_NAME(6),
		android::graphics::drawable::PictureDrawable::J2CPP_METHOD_SIGNATURE(6), 
		jint >
	(get_jobject());
}

void android::graphics::drawable::PictureDrawable::setFilterBitmap(jboolean a0)
{
	return call_method<
		android::graphics::drawable::PictureDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::PictureDrawable::J2CPP_METHOD_NAME(7),
		android::graphics::drawable::PictureDrawable::J2CPP_METHOD_SIGNATURE(7), 
		void >
	(get_jobject(), a0);
}

void android::graphics::drawable::PictureDrawable::setDither(jboolean a0)
{
	return call_method<
		android::graphics::drawable::PictureDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::PictureDrawable::J2CPP_METHOD_NAME(8),
		android::graphics::drawable::PictureDrawable::J2CPP_METHOD_SIGNATURE(8), 
		void >
	(get_jobject(), a0);
}

void android::graphics::drawable::PictureDrawable::setColorFilter(local_ref< android::graphics::ColorFilter > const &a0)
{
	return call_method<
		android::graphics::drawable::PictureDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::PictureDrawable::J2CPP_METHOD_NAME(9),
		android::graphics::drawable::PictureDrawable::J2CPP_METHOD_SIGNATURE(9), 
		void >
	(get_jobject(), a0);
}

void android::graphics::drawable::PictureDrawable::setAlpha(jint a0)
{
	return call_method<
		android::graphics::drawable::PictureDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::PictureDrawable::J2CPP_METHOD_NAME(10),
		android::graphics::drawable::PictureDrawable::J2CPP_METHOD_SIGNATURE(10), 
		void >
	(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::graphics::drawable::PictureDrawable,"android/graphics/drawable/PictureDrawable")
J2CPP_DEFINE_METHOD(android::graphics::drawable::PictureDrawable,0,"<init>","(Landroid/graphics/Picture;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::PictureDrawable,1,"getPicture","()Landroid/graphics/Picture;")
J2CPP_DEFINE_METHOD(android::graphics::drawable::PictureDrawable,2,"setPicture","(Landroid/graphics/Picture;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::PictureDrawable,3,"draw","(Landroid/graphics/Canvas;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::PictureDrawable,4,"getIntrinsicWidth","()I")
J2CPP_DEFINE_METHOD(android::graphics::drawable::PictureDrawable,5,"getIntrinsicHeight","()I")
J2CPP_DEFINE_METHOD(android::graphics::drawable::PictureDrawable,6,"getOpacity","()I")
J2CPP_DEFINE_METHOD(android::graphics::drawable::PictureDrawable,7,"setFilterBitmap","(Z)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::PictureDrawable,8,"setDither","(Z)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::PictureDrawable,9,"setColorFilter","(Landroid/graphics/ColorFilter;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::PictureDrawable,10,"setAlpha","(I)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_DRAWABLE_PICTUREDRAWABLE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
