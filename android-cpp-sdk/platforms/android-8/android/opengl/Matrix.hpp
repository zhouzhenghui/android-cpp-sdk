/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.opengl.Matrix
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_OPENGL_MATRIX_HPP_DECL
#define J2CPP_ANDROID_OPENGL_MATRIX_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace opengl {

	class Matrix;
	class Matrix
		: public object<Matrix>
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

		explicit Matrix(jobject jobj)
		: object<Matrix>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		Matrix();
		static void multiplyMM(local_ref< array<jfloat,1> >  const&, jint, local_ref< array<jfloat,1> >  const&, jint, local_ref< array<jfloat,1> >  const&, jint);
		static void multiplyMV(local_ref< array<jfloat,1> >  const&, jint, local_ref< array<jfloat,1> >  const&, jint, local_ref< array<jfloat,1> >  const&, jint);
		static void transposeM(local_ref< array<jfloat,1> >  const&, jint, local_ref< array<jfloat,1> >  const&, jint);
		static jboolean invertM(local_ref< array<jfloat,1> >  const&, jint, local_ref< array<jfloat,1> >  const&, jint);
		static void orthoM(local_ref< array<jfloat,1> >  const&, jint, jfloat, jfloat, jfloat, jfloat, jfloat, jfloat);
		static void frustumM(local_ref< array<jfloat,1> >  const&, jint, jfloat, jfloat, jfloat, jfloat, jfloat, jfloat);
		static jfloat length(jfloat, jfloat, jfloat);
		static void setIdentityM(local_ref< array<jfloat,1> >  const&, jint);
		static void scaleM(local_ref< array<jfloat,1> >  const&, jint, local_ref< array<jfloat,1> >  const&, jint, jfloat, jfloat, jfloat);
		static void scaleM(local_ref< array<jfloat,1> >  const&, jint, jfloat, jfloat, jfloat);
		static void translateM(local_ref< array<jfloat,1> >  const&, jint, local_ref< array<jfloat,1> >  const&, jint, jfloat, jfloat, jfloat);
		static void translateM(local_ref< array<jfloat,1> >  const&, jint, jfloat, jfloat, jfloat);
		static void rotateM(local_ref< array<jfloat,1> >  const&, jint, local_ref< array<jfloat,1> >  const&, jint, jfloat, jfloat, jfloat, jfloat);
		static void rotateM(local_ref< array<jfloat,1> >  const&, jint, jfloat, jfloat, jfloat, jfloat);
		static void setRotateM(local_ref< array<jfloat,1> >  const&, jint, jfloat, jfloat, jfloat, jfloat);
		static void setRotateEulerM(local_ref< array<jfloat,1> >  const&, jint, jfloat, jfloat, jfloat);
		static void setLookAtM(local_ref< array<jfloat,1> >  const&, jint, jfloat, jfloat, jfloat, jfloat, jfloat, jfloat, jfloat, jfloat, jfloat);
	}; //class Matrix

} //namespace opengl
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_OPENGL_MATRIX_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_OPENGL_MATRIX_HPP_IMPL
#define J2CPP_ANDROID_OPENGL_MATRIX_HPP_IMPL

namespace j2cpp {



android::opengl::Matrix::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::opengl::Matrix::Matrix()
: object<android::opengl::Matrix>(
	call_new_object<
		android::opengl::Matrix::J2CPP_CLASS_NAME,
		android::opengl::Matrix::J2CPP_METHOD_NAME(0),
		android::opengl::Matrix::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}


void android::opengl::Matrix::multiplyMM(local_ref< array<jfloat,1> > const &a0, jint a1, local_ref< array<jfloat,1> > const &a2, jint a3, local_ref< array<jfloat,1> > const &a4, jint a5)
{
	return call_static_method<
		android::opengl::Matrix::J2CPP_CLASS_NAME,
		android::opengl::Matrix::J2CPP_METHOD_NAME(1),
		android::opengl::Matrix::J2CPP_METHOD_SIGNATURE(1), 
		void >
	(a0, a1, a2, a3, a4, a5);
}

void android::opengl::Matrix::multiplyMV(local_ref< array<jfloat,1> > const &a0, jint a1, local_ref< array<jfloat,1> > const &a2, jint a3, local_ref< array<jfloat,1> > const &a4, jint a5)
{
	return call_static_method<
		android::opengl::Matrix::J2CPP_CLASS_NAME,
		android::opengl::Matrix::J2CPP_METHOD_NAME(2),
		android::opengl::Matrix::J2CPP_METHOD_SIGNATURE(2), 
		void >
	(a0, a1, a2, a3, a4, a5);
}

void android::opengl::Matrix::transposeM(local_ref< array<jfloat,1> > const &a0, jint a1, local_ref< array<jfloat,1> > const &a2, jint a3)
{
	return call_static_method<
		android::opengl::Matrix::J2CPP_CLASS_NAME,
		android::opengl::Matrix::J2CPP_METHOD_NAME(3),
		android::opengl::Matrix::J2CPP_METHOD_SIGNATURE(3), 
		void >
	(a0, a1, a2, a3);
}

jboolean android::opengl::Matrix::invertM(local_ref< array<jfloat,1> > const &a0, jint a1, local_ref< array<jfloat,1> > const &a2, jint a3)
{
	return call_static_method<
		android::opengl::Matrix::J2CPP_CLASS_NAME,
		android::opengl::Matrix::J2CPP_METHOD_NAME(4),
		android::opengl::Matrix::J2CPP_METHOD_SIGNATURE(4), 
		jboolean >
	(a0, a1, a2, a3);
}

void android::opengl::Matrix::orthoM(local_ref< array<jfloat,1> > const &a0, jint a1, jfloat a2, jfloat a3, jfloat a4, jfloat a5, jfloat a6, jfloat a7)
{
	return call_static_method<
		android::opengl::Matrix::J2CPP_CLASS_NAME,
		android::opengl::Matrix::J2CPP_METHOD_NAME(5),
		android::opengl::Matrix::J2CPP_METHOD_SIGNATURE(5), 
		void >
	(a0, a1, a2, a3, a4, a5, a6, a7);
}

void android::opengl::Matrix::frustumM(local_ref< array<jfloat,1> > const &a0, jint a1, jfloat a2, jfloat a3, jfloat a4, jfloat a5, jfloat a6, jfloat a7)
{
	return call_static_method<
		android::opengl::Matrix::J2CPP_CLASS_NAME,
		android::opengl::Matrix::J2CPP_METHOD_NAME(6),
		android::opengl::Matrix::J2CPP_METHOD_SIGNATURE(6), 
		void >
	(a0, a1, a2, a3, a4, a5, a6, a7);
}

jfloat android::opengl::Matrix::length(jfloat a0, jfloat a1, jfloat a2)
{
	return call_static_method<
		android::opengl::Matrix::J2CPP_CLASS_NAME,
		android::opengl::Matrix::J2CPP_METHOD_NAME(7),
		android::opengl::Matrix::J2CPP_METHOD_SIGNATURE(7), 
		jfloat >
	(a0, a1, a2);
}

void android::opengl::Matrix::setIdentityM(local_ref< array<jfloat,1> > const &a0, jint a1)
{
	return call_static_method<
		android::opengl::Matrix::J2CPP_CLASS_NAME,
		android::opengl::Matrix::J2CPP_METHOD_NAME(8),
		android::opengl::Matrix::J2CPP_METHOD_SIGNATURE(8), 
		void >
	(a0, a1);
}

void android::opengl::Matrix::scaleM(local_ref< array<jfloat,1> > const &a0, jint a1, local_ref< array<jfloat,1> > const &a2, jint a3, jfloat a4, jfloat a5, jfloat a6)
{
	return call_static_method<
		android::opengl::Matrix::J2CPP_CLASS_NAME,
		android::opengl::Matrix::J2CPP_METHOD_NAME(9),
		android::opengl::Matrix::J2CPP_METHOD_SIGNATURE(9), 
		void >
	(a0, a1, a2, a3, a4, a5, a6);
}

void android::opengl::Matrix::scaleM(local_ref< array<jfloat,1> > const &a0, jint a1, jfloat a2, jfloat a3, jfloat a4)
{
	return call_static_method<
		android::opengl::Matrix::J2CPP_CLASS_NAME,
		android::opengl::Matrix::J2CPP_METHOD_NAME(10),
		android::opengl::Matrix::J2CPP_METHOD_SIGNATURE(10), 
		void >
	(a0, a1, a2, a3, a4);
}

void android::opengl::Matrix::translateM(local_ref< array<jfloat,1> > const &a0, jint a1, local_ref< array<jfloat,1> > const &a2, jint a3, jfloat a4, jfloat a5, jfloat a6)
{
	return call_static_method<
		android::opengl::Matrix::J2CPP_CLASS_NAME,
		android::opengl::Matrix::J2CPP_METHOD_NAME(11),
		android::opengl::Matrix::J2CPP_METHOD_SIGNATURE(11), 
		void >
	(a0, a1, a2, a3, a4, a5, a6);
}

void android::opengl::Matrix::translateM(local_ref< array<jfloat,1> > const &a0, jint a1, jfloat a2, jfloat a3, jfloat a4)
{
	return call_static_method<
		android::opengl::Matrix::J2CPP_CLASS_NAME,
		android::opengl::Matrix::J2CPP_METHOD_NAME(12),
		android::opengl::Matrix::J2CPP_METHOD_SIGNATURE(12), 
		void >
	(a0, a1, a2, a3, a4);
}

void android::opengl::Matrix::rotateM(local_ref< array<jfloat,1> > const &a0, jint a1, local_ref< array<jfloat,1> > const &a2, jint a3, jfloat a4, jfloat a5, jfloat a6, jfloat a7)
{
	return call_static_method<
		android::opengl::Matrix::J2CPP_CLASS_NAME,
		android::opengl::Matrix::J2CPP_METHOD_NAME(13),
		android::opengl::Matrix::J2CPP_METHOD_SIGNATURE(13), 
		void >
	(a0, a1, a2, a3, a4, a5, a6, a7);
}

void android::opengl::Matrix::rotateM(local_ref< array<jfloat,1> > const &a0, jint a1, jfloat a2, jfloat a3, jfloat a4, jfloat a5)
{
	return call_static_method<
		android::opengl::Matrix::J2CPP_CLASS_NAME,
		android::opengl::Matrix::J2CPP_METHOD_NAME(14),
		android::opengl::Matrix::J2CPP_METHOD_SIGNATURE(14), 
		void >
	(a0, a1, a2, a3, a4, a5);
}

void android::opengl::Matrix::setRotateM(local_ref< array<jfloat,1> > const &a0, jint a1, jfloat a2, jfloat a3, jfloat a4, jfloat a5)
{
	return call_static_method<
		android::opengl::Matrix::J2CPP_CLASS_NAME,
		android::opengl::Matrix::J2CPP_METHOD_NAME(15),
		android::opengl::Matrix::J2CPP_METHOD_SIGNATURE(15), 
		void >
	(a0, a1, a2, a3, a4, a5);
}

void android::opengl::Matrix::setRotateEulerM(local_ref< array<jfloat,1> > const &a0, jint a1, jfloat a2, jfloat a3, jfloat a4)
{
	return call_static_method<
		android::opengl::Matrix::J2CPP_CLASS_NAME,
		android::opengl::Matrix::J2CPP_METHOD_NAME(16),
		android::opengl::Matrix::J2CPP_METHOD_SIGNATURE(16), 
		void >
	(a0, a1, a2, a3, a4);
}

void android::opengl::Matrix::setLookAtM(local_ref< array<jfloat,1> > const &a0, jint a1, jfloat a2, jfloat a3, jfloat a4, jfloat a5, jfloat a6, jfloat a7, jfloat a8, jfloat a9, jfloat a10)
{
	return call_static_method<
		android::opengl::Matrix::J2CPP_CLASS_NAME,
		android::opengl::Matrix::J2CPP_METHOD_NAME(17),
		android::opengl::Matrix::J2CPP_METHOD_SIGNATURE(17), 
		void >
	(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
}


J2CPP_DEFINE_CLASS(android::opengl::Matrix,"android/opengl/Matrix")
J2CPP_DEFINE_METHOD(android::opengl::Matrix,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::opengl::Matrix,1,"multiplyMM","([FI[FI[FI)V")
J2CPP_DEFINE_METHOD(android::opengl::Matrix,2,"multiplyMV","([FI[FI[FI)V")
J2CPP_DEFINE_METHOD(android::opengl::Matrix,3,"transposeM","([FI[FI)V")
J2CPP_DEFINE_METHOD(android::opengl::Matrix,4,"invertM","([FI[FI)Z")
J2CPP_DEFINE_METHOD(android::opengl::Matrix,5,"orthoM","([FIFFFFFF)V")
J2CPP_DEFINE_METHOD(android::opengl::Matrix,6,"frustumM","([FIFFFFFF)V")
J2CPP_DEFINE_METHOD(android::opengl::Matrix,7,"length","(FFF)F")
J2CPP_DEFINE_METHOD(android::opengl::Matrix,8,"setIdentityM","([FI)V")
J2CPP_DEFINE_METHOD(android::opengl::Matrix,9,"scaleM","([FI[FIFFF)V")
J2CPP_DEFINE_METHOD(android::opengl::Matrix,10,"scaleM","([FIFFF)V")
J2CPP_DEFINE_METHOD(android::opengl::Matrix,11,"translateM","([FI[FIFFF)V")
J2CPP_DEFINE_METHOD(android::opengl::Matrix,12,"translateM","([FIFFF)V")
J2CPP_DEFINE_METHOD(android::opengl::Matrix,13,"rotateM","([FI[FIFFFF)V")
J2CPP_DEFINE_METHOD(android::opengl::Matrix,14,"rotateM","([FIFFFF)V")
J2CPP_DEFINE_METHOD(android::opengl::Matrix,15,"setRotateM","([FIFFFF)V")
J2CPP_DEFINE_METHOD(android::opengl::Matrix,16,"setRotateEulerM","([FIFFF)V")
J2CPP_DEFINE_METHOD(android::opengl::Matrix,17,"setLookAtM","([FIFFFFFFFFF)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_OPENGL_MATRIX_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
