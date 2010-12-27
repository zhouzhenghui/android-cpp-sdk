/*================================================================================
  code generated by: java2cpp
  class: java.lang.Compiler
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_COMPILER_HPP_DECL
#define J2CPP_JAVA_LANG_COMPILER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Class; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/Class.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace lang {

	class Compiler;
	class Compiler
		: public cpp_object<Compiler>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)

		explicit Compiler(jobject jobj)
		: cpp_object<Compiler>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		static local_ref< java::lang::Object > command(local_ref< java::lang::Object > const&);
		static cpp_boolean compileClass(local_ref< java::lang::Class > const&);
		static cpp_boolean compileClasses(local_ref< java::lang::String > const&);
		static void disable();
		static void enable();
	}; //class Compiler

} //namespace lang
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_COMPILER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_COMPILER_HPP_IMPL
#define J2CPP_JAVA_LANG_COMPILER_HPP_IMPL

namespace j2cpp {



java::lang::Compiler::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}


local_ref< java::lang::Object > java::lang::Compiler::command(local_ref< java::lang::Object > const &a0)
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), true>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::lang::Compiler::compileClass(local_ref< java::lang::Class > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallStaticBooleanMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), true>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::lang::Compiler::compileClasses(local_ref< java::lang::String > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallStaticBooleanMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), true>(),
			a0.get_jtype()
		)
	);
}

void java::lang::Compiler::disable()
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), true>()
		)
	);
}

void java::lang::Compiler::enable()
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), true>()
		)
	);
}


J2CPP_DEFINE_CLASS(java::lang::Compiler,"java/lang/Compiler")
J2CPP_DEFINE_METHOD(java::lang::Compiler,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::lang::Compiler,1,"command","(Ljava/lang/Object;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::lang::Compiler,2,"compileClass","(Ljava/lang/Class;)Z")
J2CPP_DEFINE_METHOD(java::lang::Compiler,3,"compileClasses","(Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(java::lang::Compiler,4,"disable","()V")
J2CPP_DEFINE_METHOD(java::lang::Compiler,5,"enable","()V")

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_COMPILER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
