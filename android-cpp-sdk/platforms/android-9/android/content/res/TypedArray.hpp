/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.content.res.TypedArray
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_RES_TYPEDARRAY_HPP_DECL
#define J2CPP_ANDROID_CONTENT_RES_TYPEDARRAY_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace content { namespace res { class Resources; } } } }
namespace j2cpp { namespace android { namespace content { namespace res { class ColorStateList; } } } }
namespace j2cpp { namespace android { namespace util { class TypedValue; } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { class Drawable; } } } }


#include <android/content/res/ColorStateList.hpp>
#include <android/content/res/Resources.hpp>
#include <android/graphics/drawable/Drawable.hpp>
#include <android/util/TypedValue.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace content { namespace res {

	class TypedArray;
	class TypedArray
		: public object<TypedArray>
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

		explicit TypedArray(jobject jobj)
		: object<TypedArray>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		jint length();
		jint getIndexCount();
		jint getIndex(jint);
		local_ref< android::content::res::Resources > getResources();
		local_ref< java::lang::CharSequence > getText(jint);
		local_ref< java::lang::String > getString(jint);
		local_ref< java::lang::String > getNonResourceString(jint);
		jboolean getBoolean(jint, jboolean);
		jint getInt(jint, jint);
		jfloat getFloat(jint, jfloat);
		jint getColor(jint, jint);
		local_ref< android::content::res::ColorStateList > getColorStateList(jint);
		jint getInteger(jint, jint);
		jfloat getDimension(jint, jfloat);
		jint getDimensionPixelOffset(jint, jint);
		jint getDimensionPixelSize(jint, jint);
		jint getLayoutDimension(jint, local_ref< java::lang::String >  const&);
		jint getLayoutDimension(jint, jint);
		jfloat getFraction(jint, jint, jint, jfloat);
		jint getResourceId(jint, jint);
		local_ref< android::graphics::drawable::Drawable > getDrawable(jint);
		local_ref< array< local_ref< java::lang::CharSequence >, 1> > getTextArray(jint);
		jboolean getValue(jint, local_ref< android::util::TypedValue >  const&);
		jboolean hasValue(jint);
		local_ref< android::util::TypedValue > peekValue(jint);
		local_ref< java::lang::String > getPositionDescription();
		void recycle();
		local_ref< java::lang::String > toString();
	}; //class TypedArray

} //namespace res
} //namespace content
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_RES_TYPEDARRAY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_RES_TYPEDARRAY_HPP_IMPL
#define J2CPP_ANDROID_CONTENT_RES_TYPEDARRAY_HPP_IMPL

namespace j2cpp {



android::content::res::TypedArray::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


jint android::content::res::TypedArray::length()
{
	return call_method<
		android::content::res::TypedArray::J2CPP_CLASS_NAME,
		android::content::res::TypedArray::J2CPP_METHOD_NAME(1),
		android::content::res::TypedArray::J2CPP_METHOD_SIGNATURE(1), 
		jint >
	(get_jobject());
}

jint android::content::res::TypedArray::getIndexCount()
{
	return call_method<
		android::content::res::TypedArray::J2CPP_CLASS_NAME,
		android::content::res::TypedArray::J2CPP_METHOD_NAME(2),
		android::content::res::TypedArray::J2CPP_METHOD_SIGNATURE(2), 
		jint >
	(get_jobject());
}

jint android::content::res::TypedArray::getIndex(jint a0)
{
	return call_method<
		android::content::res::TypedArray::J2CPP_CLASS_NAME,
		android::content::res::TypedArray::J2CPP_METHOD_NAME(3),
		android::content::res::TypedArray::J2CPP_METHOD_SIGNATURE(3), 
		jint >
	(get_jobject(), a0);
}

local_ref< android::content::res::Resources > android::content::res::TypedArray::getResources()
{
	return call_method<
		android::content::res::TypedArray::J2CPP_CLASS_NAME,
		android::content::res::TypedArray::J2CPP_METHOD_NAME(4),
		android::content::res::TypedArray::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< android::content::res::Resources > >
	(get_jobject());
}

local_ref< java::lang::CharSequence > android::content::res::TypedArray::getText(jint a0)
{
	return call_method<
		android::content::res::TypedArray::J2CPP_CLASS_NAME,
		android::content::res::TypedArray::J2CPP_METHOD_NAME(5),
		android::content::res::TypedArray::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::lang::CharSequence > >
	(get_jobject(), a0);
}

local_ref< java::lang::String > android::content::res::TypedArray::getString(jint a0)
{
	return call_method<
		android::content::res::TypedArray::J2CPP_CLASS_NAME,
		android::content::res::TypedArray::J2CPP_METHOD_NAME(6),
		android::content::res::TypedArray::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::lang::String > >
	(get_jobject(), a0);
}

local_ref< java::lang::String > android::content::res::TypedArray::getNonResourceString(jint a0)
{
	return call_method<
		android::content::res::TypedArray::J2CPP_CLASS_NAME,
		android::content::res::TypedArray::J2CPP_METHOD_NAME(7),
		android::content::res::TypedArray::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::lang::String > >
	(get_jobject(), a0);
}

jboolean android::content::res::TypedArray::getBoolean(jint a0, jboolean a1)
{
	return call_method<
		android::content::res::TypedArray::J2CPP_CLASS_NAME,
		android::content::res::TypedArray::J2CPP_METHOD_NAME(8),
		android::content::res::TypedArray::J2CPP_METHOD_SIGNATURE(8), 
		jboolean >
	(get_jobject(), a0, a1);
}

jint android::content::res::TypedArray::getInt(jint a0, jint a1)
{
	return call_method<
		android::content::res::TypedArray::J2CPP_CLASS_NAME,
		android::content::res::TypedArray::J2CPP_METHOD_NAME(9),
		android::content::res::TypedArray::J2CPP_METHOD_SIGNATURE(9), 
		jint >
	(get_jobject(), a0, a1);
}

jfloat android::content::res::TypedArray::getFloat(jint a0, jfloat a1)
{
	return call_method<
		android::content::res::TypedArray::J2CPP_CLASS_NAME,
		android::content::res::TypedArray::J2CPP_METHOD_NAME(10),
		android::content::res::TypedArray::J2CPP_METHOD_SIGNATURE(10), 
		jfloat >
	(get_jobject(), a0, a1);
}

jint android::content::res::TypedArray::getColor(jint a0, jint a1)
{
	return call_method<
		android::content::res::TypedArray::J2CPP_CLASS_NAME,
		android::content::res::TypedArray::J2CPP_METHOD_NAME(11),
		android::content::res::TypedArray::J2CPP_METHOD_SIGNATURE(11), 
		jint >
	(get_jobject(), a0, a1);
}

local_ref< android::content::res::ColorStateList > android::content::res::TypedArray::getColorStateList(jint a0)
{
	return call_method<
		android::content::res::TypedArray::J2CPP_CLASS_NAME,
		android::content::res::TypedArray::J2CPP_METHOD_NAME(12),
		android::content::res::TypedArray::J2CPP_METHOD_SIGNATURE(12), 
		local_ref< android::content::res::ColorStateList > >
	(get_jobject(), a0);
}

jint android::content::res::TypedArray::getInteger(jint a0, jint a1)
{
	return call_method<
		android::content::res::TypedArray::J2CPP_CLASS_NAME,
		android::content::res::TypedArray::J2CPP_METHOD_NAME(13),
		android::content::res::TypedArray::J2CPP_METHOD_SIGNATURE(13), 
		jint >
	(get_jobject(), a0, a1);
}

jfloat android::content::res::TypedArray::getDimension(jint a0, jfloat a1)
{
	return call_method<
		android::content::res::TypedArray::J2CPP_CLASS_NAME,
		android::content::res::TypedArray::J2CPP_METHOD_NAME(14),
		android::content::res::TypedArray::J2CPP_METHOD_SIGNATURE(14), 
		jfloat >
	(get_jobject(), a0, a1);
}

jint android::content::res::TypedArray::getDimensionPixelOffset(jint a0, jint a1)
{
	return call_method<
		android::content::res::TypedArray::J2CPP_CLASS_NAME,
		android::content::res::TypedArray::J2CPP_METHOD_NAME(15),
		android::content::res::TypedArray::J2CPP_METHOD_SIGNATURE(15), 
		jint >
	(get_jobject(), a0, a1);
}

jint android::content::res::TypedArray::getDimensionPixelSize(jint a0, jint a1)
{
	return call_method<
		android::content::res::TypedArray::J2CPP_CLASS_NAME,
		android::content::res::TypedArray::J2CPP_METHOD_NAME(16),
		android::content::res::TypedArray::J2CPP_METHOD_SIGNATURE(16), 
		jint >
	(get_jobject(), a0, a1);
}

jint android::content::res::TypedArray::getLayoutDimension(jint a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		android::content::res::TypedArray::J2CPP_CLASS_NAME,
		android::content::res::TypedArray::J2CPP_METHOD_NAME(17),
		android::content::res::TypedArray::J2CPP_METHOD_SIGNATURE(17), 
		jint >
	(get_jobject(), a0, a1);
}

jint android::content::res::TypedArray::getLayoutDimension(jint a0, jint a1)
{
	return call_method<
		android::content::res::TypedArray::J2CPP_CLASS_NAME,
		android::content::res::TypedArray::J2CPP_METHOD_NAME(18),
		android::content::res::TypedArray::J2CPP_METHOD_SIGNATURE(18), 
		jint >
	(get_jobject(), a0, a1);
}

jfloat android::content::res::TypedArray::getFraction(jint a0, jint a1, jint a2, jfloat a3)
{
	return call_method<
		android::content::res::TypedArray::J2CPP_CLASS_NAME,
		android::content::res::TypedArray::J2CPP_METHOD_NAME(19),
		android::content::res::TypedArray::J2CPP_METHOD_SIGNATURE(19), 
		jfloat >
	(get_jobject(), a0, a1, a2, a3);
}

jint android::content::res::TypedArray::getResourceId(jint a0, jint a1)
{
	return call_method<
		android::content::res::TypedArray::J2CPP_CLASS_NAME,
		android::content::res::TypedArray::J2CPP_METHOD_NAME(20),
		android::content::res::TypedArray::J2CPP_METHOD_SIGNATURE(20), 
		jint >
	(get_jobject(), a0, a1);
}

local_ref< android::graphics::drawable::Drawable > android::content::res::TypedArray::getDrawable(jint a0)
{
	return call_method<
		android::content::res::TypedArray::J2CPP_CLASS_NAME,
		android::content::res::TypedArray::J2CPP_METHOD_NAME(21),
		android::content::res::TypedArray::J2CPP_METHOD_SIGNATURE(21), 
		local_ref< android::graphics::drawable::Drawable > >
	(get_jobject(), a0);
}

local_ref< array< local_ref< java::lang::CharSequence >, 1> > android::content::res::TypedArray::getTextArray(jint a0)
{
	return call_method<
		android::content::res::TypedArray::J2CPP_CLASS_NAME,
		android::content::res::TypedArray::J2CPP_METHOD_NAME(22),
		android::content::res::TypedArray::J2CPP_METHOD_SIGNATURE(22), 
		local_ref< array< local_ref< java::lang::CharSequence >, 1> > >
	(get_jobject(), a0);
}

jboolean android::content::res::TypedArray::getValue(jint a0, local_ref< android::util::TypedValue > const &a1)
{
	return call_method<
		android::content::res::TypedArray::J2CPP_CLASS_NAME,
		android::content::res::TypedArray::J2CPP_METHOD_NAME(23),
		android::content::res::TypedArray::J2CPP_METHOD_SIGNATURE(23), 
		jboolean >
	(get_jobject(), a0, a1);
}

jboolean android::content::res::TypedArray::hasValue(jint a0)
{
	return call_method<
		android::content::res::TypedArray::J2CPP_CLASS_NAME,
		android::content::res::TypedArray::J2CPP_METHOD_NAME(24),
		android::content::res::TypedArray::J2CPP_METHOD_SIGNATURE(24), 
		jboolean >
	(get_jobject(), a0);
}

local_ref< android::util::TypedValue > android::content::res::TypedArray::peekValue(jint a0)
{
	return call_method<
		android::content::res::TypedArray::J2CPP_CLASS_NAME,
		android::content::res::TypedArray::J2CPP_METHOD_NAME(25),
		android::content::res::TypedArray::J2CPP_METHOD_SIGNATURE(25), 
		local_ref< android::util::TypedValue > >
	(get_jobject(), a0);
}

local_ref< java::lang::String > android::content::res::TypedArray::getPositionDescription()
{
	return call_method<
		android::content::res::TypedArray::J2CPP_CLASS_NAME,
		android::content::res::TypedArray::J2CPP_METHOD_NAME(26),
		android::content::res::TypedArray::J2CPP_METHOD_SIGNATURE(26), 
		local_ref< java::lang::String > >
	(get_jobject());
}

void android::content::res::TypedArray::recycle()
{
	return call_method<
		android::content::res::TypedArray::J2CPP_CLASS_NAME,
		android::content::res::TypedArray::J2CPP_METHOD_NAME(27),
		android::content::res::TypedArray::J2CPP_METHOD_SIGNATURE(27), 
		void >
	(get_jobject());
}

local_ref< java::lang::String > android::content::res::TypedArray::toString()
{
	return call_method<
		android::content::res::TypedArray::J2CPP_CLASS_NAME,
		android::content::res::TypedArray::J2CPP_METHOD_NAME(28),
		android::content::res::TypedArray::J2CPP_METHOD_SIGNATURE(28), 
		local_ref< java::lang::String > >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(android::content::res::TypedArray,"android/content/res/TypedArray")
J2CPP_DEFINE_METHOD(android::content::res::TypedArray,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::content::res::TypedArray,1,"length","()I")
J2CPP_DEFINE_METHOD(android::content::res::TypedArray,2,"getIndexCount","()I")
J2CPP_DEFINE_METHOD(android::content::res::TypedArray,3,"getIndex","(I)I")
J2CPP_DEFINE_METHOD(android::content::res::TypedArray,4,"getResources","()Landroid/content/res/Resources;")
J2CPP_DEFINE_METHOD(android::content::res::TypedArray,5,"getText","(I)Ljava/lang/CharSequence;")
J2CPP_DEFINE_METHOD(android::content::res::TypedArray,6,"getString","(I)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::content::res::TypedArray,7,"getNonResourceString","(I)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::content::res::TypedArray,8,"getBoolean","(IZ)Z")
J2CPP_DEFINE_METHOD(android::content::res::TypedArray,9,"getInt","(II)I")
J2CPP_DEFINE_METHOD(android::content::res::TypedArray,10,"getFloat","(IF)F")
J2CPP_DEFINE_METHOD(android::content::res::TypedArray,11,"getColor","(II)I")
J2CPP_DEFINE_METHOD(android::content::res::TypedArray,12,"getColorStateList","(I)Landroid/content/res/ColorStateList;")
J2CPP_DEFINE_METHOD(android::content::res::TypedArray,13,"getInteger","(II)I")
J2CPP_DEFINE_METHOD(android::content::res::TypedArray,14,"getDimension","(IF)F")
J2CPP_DEFINE_METHOD(android::content::res::TypedArray,15,"getDimensionPixelOffset","(II)I")
J2CPP_DEFINE_METHOD(android::content::res::TypedArray,16,"getDimensionPixelSize","(II)I")
J2CPP_DEFINE_METHOD(android::content::res::TypedArray,17,"getLayoutDimension","(ILjava/lang/String;)I")
J2CPP_DEFINE_METHOD(android::content::res::TypedArray,18,"getLayoutDimension","(II)I")
J2CPP_DEFINE_METHOD(android::content::res::TypedArray,19,"getFraction","(IIIF)F")
J2CPP_DEFINE_METHOD(android::content::res::TypedArray,20,"getResourceId","(II)I")
J2CPP_DEFINE_METHOD(android::content::res::TypedArray,21,"getDrawable","(I)Landroid/graphics/drawable/Drawable;")
J2CPP_DEFINE_METHOD(android::content::res::TypedArray,22,"getTextArray","(I)[java.lang.CharSequence")
J2CPP_DEFINE_METHOD(android::content::res::TypedArray,23,"getValue","(ILandroid/util/TypedValue;)Z")
J2CPP_DEFINE_METHOD(android::content::res::TypedArray,24,"hasValue","(I)Z")
J2CPP_DEFINE_METHOD(android::content::res::TypedArray,25,"peekValue","(I)Landroid/util/TypedValue;")
J2CPP_DEFINE_METHOD(android::content::res::TypedArray,26,"getPositionDescription","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::content::res::TypedArray,27,"recycle","()V")
J2CPP_DEFINE_METHOD(android::content::res::TypedArray,28,"toString","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_RES_TYPEDARRAY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
