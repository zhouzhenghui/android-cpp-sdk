/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.graphics.drawable.ClipDrawable
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_DRAWABLE_CLIPDRAWABLE_HPP_DECL
#define J2CPP_ANDROID_GRAPHICS_DRAWABLE_CLIPDRAWABLE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Runnable; } } }
namespace j2cpp { namespace android { namespace content { namespace res { class Resources; } } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }
namespace j2cpp { namespace android { namespace graphics { class Canvas; } } }
namespace j2cpp { namespace android { namespace graphics { class ColorFilter; } } }
namespace j2cpp { namespace android { namespace graphics { class Rect; } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { class Drawable; } } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { namespace Drawable_ { class Callback; } } } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { namespace Drawable_ { class ConstantState; } } } } }
namespace j2cpp { namespace org { namespace xmlpull { namespace v1 { class XmlPullParser; } } } }


#include <android/content/res/Resources.hpp>
#include <android/graphics/Canvas.hpp>
#include <android/graphics/ColorFilter.hpp>
#include <android/graphics/Rect.hpp>
#include <android/graphics/drawable/Drawable.hpp>
#include <android/util/AttributeSet.hpp>
#include <java/lang/Runnable.hpp>
#include <org/xmlpull/v1/XmlPullParser.hpp>


namespace j2cpp {

namespace android { namespace graphics { namespace drawable {

	class ClipDrawable;
	class ClipDrawable
		: public object<ClipDrawable>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)

		explicit ClipDrawable(jobject jobj)
		: object<ClipDrawable>(jobj)
		{
		}

		operator local_ref<android::graphics::drawable::Drawable>() const;
		operator local_ref<android::graphics::drawable::Drawable_::Callback>() const;


		ClipDrawable(local_ref< android::graphics::drawable::Drawable > const&, jint, jint);
		void inflate(local_ref< android::content::res::Resources >  const&, local_ref< org::xmlpull::v1::XmlPullParser >  const&, local_ref< android::util::AttributeSet >  const&);
		void invalidateDrawable(local_ref< android::graphics::drawable::Drawable >  const&);
		void scheduleDrawable(local_ref< android::graphics::drawable::Drawable >  const&, local_ref< java::lang::Runnable >  const&, jlong);
		void unscheduleDrawable(local_ref< android::graphics::drawable::Drawable >  const&, local_ref< java::lang::Runnable >  const&);
		jint getChangingConfigurations();
		jboolean getPadding(local_ref< android::graphics::Rect >  const&);
		jboolean setVisible(jboolean, jboolean);
		void setAlpha(jint);
		void setColorFilter(local_ref< android::graphics::ColorFilter >  const&);
		jint getOpacity();
		jboolean isStateful();
		void draw(local_ref< android::graphics::Canvas >  const&);
		jint getIntrinsicWidth();
		jint getIntrinsicHeight();
		local_ref< android::graphics::drawable::Drawable_::ConstantState > getConstantState();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > HORIZONTAL;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > VERTICAL;
	}; //class ClipDrawable

} //namespace drawable
} //namespace graphics
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_DRAWABLE_CLIPDRAWABLE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_DRAWABLE_CLIPDRAWABLE_HPP_IMPL
#define J2CPP_ANDROID_GRAPHICS_DRAWABLE_CLIPDRAWABLE_HPP_IMPL

namespace j2cpp {



android::graphics::drawable::ClipDrawable::operator local_ref<android::graphics::drawable::Drawable>() const
{
	return local_ref<android::graphics::drawable::Drawable>(get_jobject());
}

android::graphics::drawable::ClipDrawable::operator local_ref<android::graphics::drawable::Drawable_::Callback>() const
{
	return local_ref<android::graphics::drawable::Drawable_::Callback>(get_jobject());
}


android::graphics::drawable::ClipDrawable::ClipDrawable(local_ref< android::graphics::drawable::Drawable > const &a0, jint a1, jint a2)
: object<android::graphics::drawable::ClipDrawable>(
	call_new_object<
		android::graphics::drawable::ClipDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::ClipDrawable::J2CPP_METHOD_NAME(0),
		android::graphics::drawable::ClipDrawable::J2CPP_METHOD_SIGNATURE(0)>
	(a0, a1, a2)
)
{
}


void android::graphics::drawable::ClipDrawable::inflate(local_ref< android::content::res::Resources > const &a0, local_ref< org::xmlpull::v1::XmlPullParser > const &a1, local_ref< android::util::AttributeSet > const &a2)
{
	return call_method<
		android::graphics::drawable::ClipDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::ClipDrawable::J2CPP_METHOD_NAME(1),
		android::graphics::drawable::ClipDrawable::J2CPP_METHOD_SIGNATURE(1), 
		void >
	(get_jobject(), a0, a1, a2);
}

void android::graphics::drawable::ClipDrawable::invalidateDrawable(local_ref< android::graphics::drawable::Drawable > const &a0)
{
	return call_method<
		android::graphics::drawable::ClipDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::ClipDrawable::J2CPP_METHOD_NAME(2),
		android::graphics::drawable::ClipDrawable::J2CPP_METHOD_SIGNATURE(2), 
		void >
	(get_jobject(), a0);
}

void android::graphics::drawable::ClipDrawable::scheduleDrawable(local_ref< android::graphics::drawable::Drawable > const &a0, local_ref< java::lang::Runnable > const &a1, jlong a2)
{
	return call_method<
		android::graphics::drawable::ClipDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::ClipDrawable::J2CPP_METHOD_NAME(3),
		android::graphics::drawable::ClipDrawable::J2CPP_METHOD_SIGNATURE(3), 
		void >
	(get_jobject(), a0, a1, a2);
}

void android::graphics::drawable::ClipDrawable::unscheduleDrawable(local_ref< android::graphics::drawable::Drawable > const &a0, local_ref< java::lang::Runnable > const &a1)
{
	return call_method<
		android::graphics::drawable::ClipDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::ClipDrawable::J2CPP_METHOD_NAME(4),
		android::graphics::drawable::ClipDrawable::J2CPP_METHOD_SIGNATURE(4), 
		void >
	(get_jobject(), a0, a1);
}

jint android::graphics::drawable::ClipDrawable::getChangingConfigurations()
{
	return call_method<
		android::graphics::drawable::ClipDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::ClipDrawable::J2CPP_METHOD_NAME(5),
		android::graphics::drawable::ClipDrawable::J2CPP_METHOD_SIGNATURE(5), 
		jint >
	(get_jobject());
}

jboolean android::graphics::drawable::ClipDrawable::getPadding(local_ref< android::graphics::Rect > const &a0)
{
	return call_method<
		android::graphics::drawable::ClipDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::ClipDrawable::J2CPP_METHOD_NAME(6),
		android::graphics::drawable::ClipDrawable::J2CPP_METHOD_SIGNATURE(6), 
		jboolean >
	(get_jobject(), a0);
}

jboolean android::graphics::drawable::ClipDrawable::setVisible(jboolean a0, jboolean a1)
{
	return call_method<
		android::graphics::drawable::ClipDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::ClipDrawable::J2CPP_METHOD_NAME(7),
		android::graphics::drawable::ClipDrawable::J2CPP_METHOD_SIGNATURE(7), 
		jboolean >
	(get_jobject(), a0, a1);
}

void android::graphics::drawable::ClipDrawable::setAlpha(jint a0)
{
	return call_method<
		android::graphics::drawable::ClipDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::ClipDrawable::J2CPP_METHOD_NAME(8),
		android::graphics::drawable::ClipDrawable::J2CPP_METHOD_SIGNATURE(8), 
		void >
	(get_jobject(), a0);
}

void android::graphics::drawable::ClipDrawable::setColorFilter(local_ref< android::graphics::ColorFilter > const &a0)
{
	return call_method<
		android::graphics::drawable::ClipDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::ClipDrawable::J2CPP_METHOD_NAME(9),
		android::graphics::drawable::ClipDrawable::J2CPP_METHOD_SIGNATURE(9), 
		void >
	(get_jobject(), a0);
}

jint android::graphics::drawable::ClipDrawable::getOpacity()
{
	return call_method<
		android::graphics::drawable::ClipDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::ClipDrawable::J2CPP_METHOD_NAME(10),
		android::graphics::drawable::ClipDrawable::J2CPP_METHOD_SIGNATURE(10), 
		jint >
	(get_jobject());
}

jboolean android::graphics::drawable::ClipDrawable::isStateful()
{
	return call_method<
		android::graphics::drawable::ClipDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::ClipDrawable::J2CPP_METHOD_NAME(11),
		android::graphics::drawable::ClipDrawable::J2CPP_METHOD_SIGNATURE(11), 
		jboolean >
	(get_jobject());
}




void android::graphics::drawable::ClipDrawable::draw(local_ref< android::graphics::Canvas > const &a0)
{
	return call_method<
		android::graphics::drawable::ClipDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::ClipDrawable::J2CPP_METHOD_NAME(15),
		android::graphics::drawable::ClipDrawable::J2CPP_METHOD_SIGNATURE(15), 
		void >
	(get_jobject(), a0);
}

jint android::graphics::drawable::ClipDrawable::getIntrinsicWidth()
{
	return call_method<
		android::graphics::drawable::ClipDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::ClipDrawable::J2CPP_METHOD_NAME(16),
		android::graphics::drawable::ClipDrawable::J2CPP_METHOD_SIGNATURE(16), 
		jint >
	(get_jobject());
}

jint android::graphics::drawable::ClipDrawable::getIntrinsicHeight()
{
	return call_method<
		android::graphics::drawable::ClipDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::ClipDrawable::J2CPP_METHOD_NAME(17),
		android::graphics::drawable::ClipDrawable::J2CPP_METHOD_SIGNATURE(17), 
		jint >
	(get_jobject());
}

local_ref< android::graphics::drawable::Drawable_::ConstantState > android::graphics::drawable::ClipDrawable::getConstantState()
{
	return call_method<
		android::graphics::drawable::ClipDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::ClipDrawable::J2CPP_METHOD_NAME(18),
		android::graphics::drawable::ClipDrawable::J2CPP_METHOD_SIGNATURE(18), 
		local_ref< android::graphics::drawable::Drawable_::ConstantState > >
	(get_jobject());
}


static_field<
	android::graphics::drawable::ClipDrawable::J2CPP_CLASS_NAME,
	android::graphics::drawable::ClipDrawable::J2CPP_FIELD_NAME(0),
	android::graphics::drawable::ClipDrawable::J2CPP_FIELD_SIGNATURE(0),
	jint
> android::graphics::drawable::ClipDrawable::HORIZONTAL;

static_field<
	android::graphics::drawable::ClipDrawable::J2CPP_CLASS_NAME,
	android::graphics::drawable::ClipDrawable::J2CPP_FIELD_NAME(1),
	android::graphics::drawable::ClipDrawable::J2CPP_FIELD_SIGNATURE(1),
	jint
> android::graphics::drawable::ClipDrawable::VERTICAL;


J2CPP_DEFINE_CLASS(android::graphics::drawable::ClipDrawable,"android/graphics/drawable/ClipDrawable")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ClipDrawable,0,"<init>","(Landroid/graphics/drawable/Drawable;II)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ClipDrawable,1,"inflate","(Landroid/content/res/Resources;Lorg/xmlpull/v1/XmlPullParser;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ClipDrawable,2,"invalidateDrawable","(Landroid/graphics/drawable/Drawable;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ClipDrawable,3,"scheduleDrawable","(Landroid/graphics/drawable/Drawable;Ljava/lang/Runnable;J)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ClipDrawable,4,"unscheduleDrawable","(Landroid/graphics/drawable/Drawable;Ljava/lang/Runnable;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ClipDrawable,5,"getChangingConfigurations","()I")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ClipDrawable,6,"getPadding","(Landroid/graphics/Rect;)Z")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ClipDrawable,7,"setVisible","(ZZ)Z")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ClipDrawable,8,"setAlpha","(I)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ClipDrawable,9,"setColorFilter","(Landroid/graphics/ColorFilter;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ClipDrawable,10,"getOpacity","()I")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ClipDrawable,11,"isStateful","()Z")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ClipDrawable,12,"onStateChange","([I)Z")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ClipDrawable,13,"onLevelChange","(I)Z")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ClipDrawable,14,"onBoundsChange","(Landroid/graphics/Rect;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ClipDrawable,15,"draw","(Landroid/graphics/Canvas;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ClipDrawable,16,"getIntrinsicWidth","()I")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ClipDrawable,17,"getIntrinsicHeight","()I")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ClipDrawable,18,"getConstantState","()Landroid/graphics/drawable/Drawable$ConstantState;")
J2CPP_DEFINE_FIELD(android::graphics::drawable::ClipDrawable,0,"HORIZONTAL","I")
J2CPP_DEFINE_FIELD(android::graphics::drawable::ClipDrawable,1,"VERTICAL","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_DRAWABLE_CLIPDRAWABLE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
