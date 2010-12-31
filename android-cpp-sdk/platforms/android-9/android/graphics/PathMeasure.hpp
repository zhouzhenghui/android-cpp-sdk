/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.graphics.PathMeasure
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_PATHMEASURE_HPP_DECL
#define J2CPP_ANDROID_GRAPHICS_PATHMEASURE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace graphics { class Path; } } }
namespace j2cpp { namespace android { namespace graphics { class Matrix; } } }


#include <android/graphics/Matrix.hpp>
#include <android/graphics/Path.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace graphics {

	class PathMeasure;
	class PathMeasure
		: public object<PathMeasure>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)

		explicit PathMeasure(jobject jobj)
		: object<PathMeasure>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		PathMeasure();
		PathMeasure(local_ref< android::graphics::Path > const&, jboolean);
		void setPath(local_ref< android::graphics::Path >  const&, jboolean);
		jfloat getLength();
		jboolean getPosTan(jfloat, local_ref< array<jfloat,1> >  const&, local_ref< array<jfloat,1> >  const&);
		jboolean getMatrix(jfloat, local_ref< android::graphics::Matrix >  const&, jint);
		jboolean getSegment(jfloat, jfloat, local_ref< android::graphics::Path >  const&, jboolean);
		jboolean isClosed();
		jboolean nextContour();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > POSITION_MATRIX_FLAG;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > TANGENT_MATRIX_FLAG;
	}; //class PathMeasure

} //namespace graphics
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_PATHMEASURE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_PATHMEASURE_HPP_IMPL
#define J2CPP_ANDROID_GRAPHICS_PATHMEASURE_HPP_IMPL

namespace j2cpp {



android::graphics::PathMeasure::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::graphics::PathMeasure::PathMeasure()
: object<android::graphics::PathMeasure>(
	call_new_object<
		android::graphics::PathMeasure::J2CPP_CLASS_NAME,
		android::graphics::PathMeasure::J2CPP_METHOD_NAME(0),
		android::graphics::PathMeasure::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}



android::graphics::PathMeasure::PathMeasure(local_ref< android::graphics::Path > const &a0, jboolean a1)
: object<android::graphics::PathMeasure>(
	call_new_object<
		android::graphics::PathMeasure::J2CPP_CLASS_NAME,
		android::graphics::PathMeasure::J2CPP_METHOD_NAME(1),
		android::graphics::PathMeasure::J2CPP_METHOD_SIGNATURE(1)>
	(a0, a1)
)
{
}


void android::graphics::PathMeasure::setPath(local_ref< android::graphics::Path > const &a0, jboolean a1)
{
	return call_method<
		android::graphics::PathMeasure::J2CPP_CLASS_NAME,
		android::graphics::PathMeasure::J2CPP_METHOD_NAME(2),
		android::graphics::PathMeasure::J2CPP_METHOD_SIGNATURE(2), 
		void >
	(get_jobject(), a0, a1);
}

jfloat android::graphics::PathMeasure::getLength()
{
	return call_method<
		android::graphics::PathMeasure::J2CPP_CLASS_NAME,
		android::graphics::PathMeasure::J2CPP_METHOD_NAME(3),
		android::graphics::PathMeasure::J2CPP_METHOD_SIGNATURE(3), 
		jfloat >
	(get_jobject());
}

jboolean android::graphics::PathMeasure::getPosTan(jfloat a0, local_ref< array<jfloat,1> > const &a1, local_ref< array<jfloat,1> > const &a2)
{
	return call_method<
		android::graphics::PathMeasure::J2CPP_CLASS_NAME,
		android::graphics::PathMeasure::J2CPP_METHOD_NAME(4),
		android::graphics::PathMeasure::J2CPP_METHOD_SIGNATURE(4), 
		jboolean >
	(get_jobject(), a0, a1, a2);
}

jboolean android::graphics::PathMeasure::getMatrix(jfloat a0, local_ref< android::graphics::Matrix > const &a1, jint a2)
{
	return call_method<
		android::graphics::PathMeasure::J2CPP_CLASS_NAME,
		android::graphics::PathMeasure::J2CPP_METHOD_NAME(5),
		android::graphics::PathMeasure::J2CPP_METHOD_SIGNATURE(5), 
		jboolean >
	(get_jobject(), a0, a1, a2);
}

jboolean android::graphics::PathMeasure::getSegment(jfloat a0, jfloat a1, local_ref< android::graphics::Path > const &a2, jboolean a3)
{
	return call_method<
		android::graphics::PathMeasure::J2CPP_CLASS_NAME,
		android::graphics::PathMeasure::J2CPP_METHOD_NAME(6),
		android::graphics::PathMeasure::J2CPP_METHOD_SIGNATURE(6), 
		jboolean >
	(get_jobject(), a0, a1, a2, a3);
}

jboolean android::graphics::PathMeasure::isClosed()
{
	return call_method<
		android::graphics::PathMeasure::J2CPP_CLASS_NAME,
		android::graphics::PathMeasure::J2CPP_METHOD_NAME(7),
		android::graphics::PathMeasure::J2CPP_METHOD_SIGNATURE(7), 
		jboolean >
	(get_jobject());
}

jboolean android::graphics::PathMeasure::nextContour()
{
	return call_method<
		android::graphics::PathMeasure::J2CPP_CLASS_NAME,
		android::graphics::PathMeasure::J2CPP_METHOD_NAME(8),
		android::graphics::PathMeasure::J2CPP_METHOD_SIGNATURE(8), 
		jboolean >
	(get_jobject());
}



static_field<
	android::graphics::PathMeasure::J2CPP_CLASS_NAME,
	android::graphics::PathMeasure::J2CPP_FIELD_NAME(0),
	android::graphics::PathMeasure::J2CPP_FIELD_SIGNATURE(0),
	jint
> android::graphics::PathMeasure::POSITION_MATRIX_FLAG;

static_field<
	android::graphics::PathMeasure::J2CPP_CLASS_NAME,
	android::graphics::PathMeasure::J2CPP_FIELD_NAME(1),
	android::graphics::PathMeasure::J2CPP_FIELD_SIGNATURE(1),
	jint
> android::graphics::PathMeasure::TANGENT_MATRIX_FLAG;


J2CPP_DEFINE_CLASS(android::graphics::PathMeasure,"android/graphics/PathMeasure")
J2CPP_DEFINE_METHOD(android::graphics::PathMeasure,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::graphics::PathMeasure,1,"<init>","(Landroid/graphics/Path;Z)V")
J2CPP_DEFINE_METHOD(android::graphics::PathMeasure,2,"setPath","(Landroid/graphics/Path;Z)V")
J2CPP_DEFINE_METHOD(android::graphics::PathMeasure,3,"getLength","()F")
J2CPP_DEFINE_METHOD(android::graphics::PathMeasure,4,"getPosTan","(F[F[F)Z")
J2CPP_DEFINE_METHOD(android::graphics::PathMeasure,5,"getMatrix","(FLandroid/graphics/Matrix;I)Z")
J2CPP_DEFINE_METHOD(android::graphics::PathMeasure,6,"getSegment","(FFLandroid/graphics/Path;Z)Z")
J2CPP_DEFINE_METHOD(android::graphics::PathMeasure,7,"isClosed","()Z")
J2CPP_DEFINE_METHOD(android::graphics::PathMeasure,8,"nextContour","()Z")
J2CPP_DEFINE_METHOD(android::graphics::PathMeasure,9,"finalize","()V")
J2CPP_DEFINE_FIELD(android::graphics::PathMeasure,0,"POSITION_MATRIX_FLAG","I")
J2CPP_DEFINE_FIELD(android::graphics::PathMeasure,1,"TANGENT_MATRIX_FLAG","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_PATHMEASURE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
