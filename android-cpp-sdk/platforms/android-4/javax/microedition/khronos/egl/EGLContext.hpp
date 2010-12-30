/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: javax.microedition.khronos.egl.EGLContext
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_MICROEDITION_KHRONOS_EGL_EGLCONTEXT_HPP_DECL
#define J2CPP_JAVAX_MICROEDITION_KHRONOS_EGL_EGLCONTEXT_HPP_DECL


namespace j2cpp { namespace javax { namespace microedition { namespace khronos { namespace opengles { class GL; } } } } }
namespace j2cpp { namespace javax { namespace microedition { namespace khronos { namespace egl { class EGL; } } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <javax/microedition/khronos/egl/EGL.hpp>
#include <javax/microedition/khronos/opengles/GL.hpp>


namespace j2cpp {

namespace javax { namespace microedition { namespace khronos { namespace egl {

	class EGLContext;
	class EGLContext
		: public object<EGLContext>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit EGLContext(jobject jobj)
		: object<EGLContext>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		EGLContext();
		static local_ref< javax::microedition::khronos::egl::EGL > getEGL();
		local_ref< javax::microedition::khronos::opengles::GL > getGL();
	}; //class EGLContext

} //namespace egl
} //namespace khronos
} //namespace microedition
} //namespace javax

} //namespace j2cpp

#endif //J2CPP_JAVAX_MICROEDITION_KHRONOS_EGL_EGLCONTEXT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_MICROEDITION_KHRONOS_EGL_EGLCONTEXT_HPP_IMPL
#define J2CPP_JAVAX_MICROEDITION_KHRONOS_EGL_EGLCONTEXT_HPP_IMPL

namespace j2cpp {



javax::microedition::khronos::egl::EGLContext::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


javax::microedition::khronos::egl::EGLContext::EGLContext()
: object<javax::microedition::khronos::egl::EGLContext>(
	call_new_object<
		javax::microedition::khronos::egl::EGLContext::J2CPP_CLASS_NAME,
		javax::microedition::khronos::egl::EGLContext::J2CPP_METHOD_NAME(0),
		javax::microedition::khronos::egl::EGLContext::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}


local_ref< javax::microedition::khronos::egl::EGL > javax::microedition::khronos::egl::EGLContext::getEGL()
{
	return call_static_method<
		javax::microedition::khronos::egl::EGLContext::J2CPP_CLASS_NAME,
		javax::microedition::khronos::egl::EGLContext::J2CPP_METHOD_NAME(1),
		javax::microedition::khronos::egl::EGLContext::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< javax::microedition::khronos::egl::EGL > >
	();
}

local_ref< javax::microedition::khronos::opengles::GL > javax::microedition::khronos::egl::EGLContext::getGL()
{
	return call_method<
		javax::microedition::khronos::egl::EGLContext::J2CPP_CLASS_NAME,
		javax::microedition::khronos::egl::EGLContext::J2CPP_METHOD_NAME(2),
		javax::microedition::khronos::egl::EGLContext::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< javax::microedition::khronos::opengles::GL > >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(javax::microedition::khronos::egl::EGLContext,"javax/microedition/khronos/egl/EGLContext")
J2CPP_DEFINE_METHOD(javax::microedition::khronos::egl::EGLContext,0,"<init>","()V")
J2CPP_DEFINE_METHOD(javax::microedition::khronos::egl::EGLContext,1,"getEGL","()Ljavax/microedition/khronos/egl/EGL;")
J2CPP_DEFINE_METHOD(javax::microedition::khronos::egl::EGLContext,2,"getGL","()Ljavax/microedition/khronos/opengles/GL;")

} //namespace j2cpp

#endif //J2CPP_JAVAX_MICROEDITION_KHRONOS_EGL_EGLCONTEXT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
