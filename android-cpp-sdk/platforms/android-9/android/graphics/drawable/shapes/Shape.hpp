/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.graphics.drawable.shapes.Shape
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_DRAWABLE_SHAPES_SHAPE_HPP_DECL
#define J2CPP_ANDROID_GRAPHICS_DRAWABLE_SHAPES_SHAPE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Cloneable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace graphics { class Canvas; } } }
namespace j2cpp { namespace android { namespace graphics { class Paint; } } }


#include <android/graphics/Canvas.hpp>
#include <android/graphics/Paint.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace graphics { namespace drawable { namespace shapes {

	class Shape;
	class Shape
		: public object<Shape>
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

		explicit Shape(jobject jobj)
		: object<Shape>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::Cloneable>() const;


		Shape();
		jfloat getWidth();
		jfloat getHeight();
		void draw(local_ref< android::graphics::Canvas >  const&, local_ref< android::graphics::Paint >  const&);
		void resize(jfloat, jfloat);
		jboolean hasAlpha();
		local_ref< android::graphics::drawable::shapes::Shape > clone();
		local_ref< java::lang::Object > clone_1();
	}; //class Shape

} //namespace shapes
} //namespace drawable
} //namespace graphics
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_DRAWABLE_SHAPES_SHAPE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_DRAWABLE_SHAPES_SHAPE_HPP_IMPL
#define J2CPP_ANDROID_GRAPHICS_DRAWABLE_SHAPES_SHAPE_HPP_IMPL

namespace j2cpp {



android::graphics::drawable::shapes::Shape::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::graphics::drawable::shapes::Shape::operator local_ref<java::lang::Cloneable>() const
{
	return local_ref<java::lang::Cloneable>(get_jobject());
}


android::graphics::drawable::shapes::Shape::Shape()
: object<android::graphics::drawable::shapes::Shape>(
	call_new_object<
		android::graphics::drawable::shapes::Shape::J2CPP_CLASS_NAME,
		android::graphics::drawable::shapes::Shape::J2CPP_METHOD_NAME(0),
		android::graphics::drawable::shapes::Shape::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}


jfloat android::graphics::drawable::shapes::Shape::getWidth()
{
	return call_method<
		android::graphics::drawable::shapes::Shape::J2CPP_CLASS_NAME,
		android::graphics::drawable::shapes::Shape::J2CPP_METHOD_NAME(1),
		android::graphics::drawable::shapes::Shape::J2CPP_METHOD_SIGNATURE(1), 
		jfloat >
	(get_jobject());
}

jfloat android::graphics::drawable::shapes::Shape::getHeight()
{
	return call_method<
		android::graphics::drawable::shapes::Shape::J2CPP_CLASS_NAME,
		android::graphics::drawable::shapes::Shape::J2CPP_METHOD_NAME(2),
		android::graphics::drawable::shapes::Shape::J2CPP_METHOD_SIGNATURE(2), 
		jfloat >
	(get_jobject());
}

void android::graphics::drawable::shapes::Shape::draw(local_ref< android::graphics::Canvas > const &a0, local_ref< android::graphics::Paint > const &a1)
{
	return call_method<
		android::graphics::drawable::shapes::Shape::J2CPP_CLASS_NAME,
		android::graphics::drawable::shapes::Shape::J2CPP_METHOD_NAME(3),
		android::graphics::drawable::shapes::Shape::J2CPP_METHOD_SIGNATURE(3), 
		void >
	(get_jobject(), a0, a1);
}

void android::graphics::drawable::shapes::Shape::resize(jfloat a0, jfloat a1)
{
	return call_method<
		android::graphics::drawable::shapes::Shape::J2CPP_CLASS_NAME,
		android::graphics::drawable::shapes::Shape::J2CPP_METHOD_NAME(4),
		android::graphics::drawable::shapes::Shape::J2CPP_METHOD_SIGNATURE(4), 
		void >
	(get_jobject(), a0, a1);
}

jboolean android::graphics::drawable::shapes::Shape::hasAlpha()
{
	return call_method<
		android::graphics::drawable::shapes::Shape::J2CPP_CLASS_NAME,
		android::graphics::drawable::shapes::Shape::J2CPP_METHOD_NAME(5),
		android::graphics::drawable::shapes::Shape::J2CPP_METHOD_SIGNATURE(5), 
		jboolean >
	(get_jobject());
}


local_ref< android::graphics::drawable::shapes::Shape > android::graphics::drawable::shapes::Shape::clone()
{
	return call_method<
		android::graphics::drawable::shapes::Shape::J2CPP_CLASS_NAME,
		android::graphics::drawable::shapes::Shape::J2CPP_METHOD_NAME(7),
		android::graphics::drawable::shapes::Shape::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< android::graphics::drawable::shapes::Shape > >
	(get_jobject());
}

local_ref< java::lang::Object > android::graphics::drawable::shapes::Shape::clone_1()
{
	return call_method<
		android::graphics::drawable::shapes::Shape::J2CPP_CLASS_NAME,
		android::graphics::drawable::shapes::Shape::J2CPP_METHOD_NAME(8),
		android::graphics::drawable::shapes::Shape::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< java::lang::Object > >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(android::graphics::drawable::shapes::Shape,"android/graphics/drawable/shapes/Shape")
J2CPP_DEFINE_METHOD(android::graphics::drawable::shapes::Shape,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::shapes::Shape,1,"getWidth","()F")
J2CPP_DEFINE_METHOD(android::graphics::drawable::shapes::Shape,2,"getHeight","()F")
J2CPP_DEFINE_METHOD(android::graphics::drawable::shapes::Shape,3,"draw","(Landroid/graphics/Canvas;Landroid/graphics/Paint;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::shapes::Shape,4,"resize","(FF)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::shapes::Shape,5,"hasAlpha","()Z")
J2CPP_DEFINE_METHOD(android::graphics::drawable::shapes::Shape,6,"onResize","(FF)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::shapes::Shape,7,"clone","()Landroid/graphics/drawable/shapes/Shape;")
J2CPP_DEFINE_METHOD(android::graphics::drawable::shapes::Shape,8,"clone","()Ljava/lang/Object;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_DRAWABLE_SHAPES_SHAPE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
