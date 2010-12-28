/*================================================================================
  code generated by: java2cpp
  class: java.lang.Runnable
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_RUNNABLE_HPP_DECL
#define J2CPP_JAVA_LANG_RUNNABLE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>


namespace j2cpp {

namespace java { namespace lang {

	class Runnable;
	class Runnable
		: public cpp_object<Runnable>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit Runnable(jobject jobj)
		: cpp_object<Runnable>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		void run();
	}; //class Runnable

} //namespace lang
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_RUNNABLE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_RUNNABLE_HPP_IMPL
#define J2CPP_JAVA_LANG_RUNNABLE_HPP_IMPL

namespace j2cpp {



java::lang::Runnable::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}

void java::lang::Runnable::run()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(java::lang::Runnable,"java/lang/Runnable")
J2CPP_DEFINE_METHOD(java::lang::Runnable,0,"run","()V")

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_RUNNABLE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION