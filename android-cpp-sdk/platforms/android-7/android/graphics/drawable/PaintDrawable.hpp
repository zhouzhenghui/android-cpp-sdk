/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.graphics.drawable.PaintDrawable
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_DRAWABLE_PAINTDRAWABLE_HPP_DECL
#define J2CPP_ANDROID_GRAPHICS_DRAWABLE_PAINTDRAWABLE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { class Drawable; } } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { class ShapeDrawable; } } } }


#include <android/graphics/drawable/Drawable.hpp>
#include <android/graphics/drawable/ShapeDrawable.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace graphics { namespace drawable {

	class PaintDrawable;
	class PaintDrawable
		: public object<PaintDrawable>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)

		explicit PaintDrawable(jobject jobj)
		: object<PaintDrawable>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::graphics::drawable::Drawable>() const;
		operator local_ref<android::graphics::drawable::ShapeDrawable>() const;


		PaintDrawable();
		PaintDrawable(jint);
		void setCornerRadius(jfloat);
		void setCornerRadii(local_ref< array<jfloat,1> >  const&);
	}; //class PaintDrawable

} //namespace drawable
} //namespace graphics
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_DRAWABLE_PAINTDRAWABLE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_DRAWABLE_PAINTDRAWABLE_HPP_IMPL
#define J2CPP_ANDROID_GRAPHICS_DRAWABLE_PAINTDRAWABLE_HPP_IMPL

namespace j2cpp {



android::graphics::drawable::PaintDrawable::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::graphics::drawable::PaintDrawable::operator local_ref<android::graphics::drawable::Drawable>() const
{
	return local_ref<android::graphics::drawable::Drawable>(get_jobject());
}

android::graphics::drawable::PaintDrawable::operator local_ref<android::graphics::drawable::ShapeDrawable>() const
{
	return local_ref<android::graphics::drawable::ShapeDrawable>(get_jobject());
}


android::graphics::drawable::PaintDrawable::PaintDrawable()
: object<android::graphics::drawable::PaintDrawable>(
	call_new_object<
		android::graphics::drawable::PaintDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::PaintDrawable::J2CPP_METHOD_NAME(0),
		android::graphics::drawable::PaintDrawable::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



android::graphics::drawable::PaintDrawable::PaintDrawable(jint a0)
: object<android::graphics::drawable::PaintDrawable>(
	call_new_object<
		android::graphics::drawable::PaintDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::PaintDrawable::J2CPP_METHOD_NAME(1),
		android::graphics::drawable::PaintDrawable::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}


void android::graphics::drawable::PaintDrawable::setCornerRadius(jfloat a0)
{
	return call_method<
		android::graphics::drawable::PaintDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::PaintDrawable::J2CPP_METHOD_NAME(2),
		android::graphics::drawable::PaintDrawable::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject(), a0);
}

void android::graphics::drawable::PaintDrawable::setCornerRadii(local_ref< array<jfloat,1> > const &a0)
{
	return call_method<
		android::graphics::drawable::PaintDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::PaintDrawable::J2CPP_METHOD_NAME(3),
		android::graphics::drawable::PaintDrawable::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0);
}



J2CPP_DEFINE_CLASS(android::graphics::drawable::PaintDrawable,"android/graphics/drawable/PaintDrawable")
J2CPP_DEFINE_METHOD(android::graphics::drawable::PaintDrawable,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::PaintDrawable,1,"<init>","(I)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::PaintDrawable,2,"setCornerRadius","(F)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::PaintDrawable,3,"setCornerRadii","([F)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::PaintDrawable,4,"inflateTag","(Ljava/lang/String;Landroid/content/res/Resources;Lorg/xmlpull/v1/XmlPullParser;Landroid/util/AttributeSet;)Z")

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_DRAWABLE_PAINTDRAWABLE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
