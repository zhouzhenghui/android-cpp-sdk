/*================================================================================
  code generated by: java2cpp
  class: java.lang.reflect.MalformedParameterizedTypeException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_REFLECT_MALFORMEDPARAMETERIZEDTYPEEXCEPTION_HPP_DECL
#define J2CPP_JAVA_LANG_REFLECT_MALFORMEDPARAMETERIZEDTYPEEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class RuntimeException; } } }


#include <java/lang/RuntimeException.hpp>


namespace j2cpp {

namespace java { namespace lang { namespace reflect {

	class MalformedParameterizedTypeException;
	class MalformedParameterizedTypeException
		: public cpp_object<MalformedParameterizedTypeException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit MalformedParameterizedTypeException(jobject jobj)
		: cpp_object<MalformedParameterizedTypeException>(jobj)
		{
		}

		operator local_ref<java::lang::RuntimeException>() const;


		MalformedParameterizedTypeException();
	}; //class MalformedParameterizedTypeException

} //namespace reflect
} //namespace lang
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_REFLECT_MALFORMEDPARAMETERIZEDTYPEEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_REFLECT_MALFORMEDPARAMETERIZEDTYPEEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_LANG_REFLECT_MALFORMEDPARAMETERIZEDTYPEEXCEPTION_HPP_IMPL

namespace j2cpp {



java::lang::reflect::MalformedParameterizedTypeException::operator local_ref<java::lang::RuntimeException>() const
{
	return local_ref<java::lang::RuntimeException>(get_jtype());
}


java::lang::reflect::MalformedParameterizedTypeException::MalformedParameterizedTypeException()
: cpp_object<java::lang::reflect::MalformedParameterizedTypeException>(
	environment::get().get_jenv()->NewObject(
		get_class<java::lang::reflect::MalformedParameterizedTypeException::J2CPP_CLASS_NAME>(),
		get_method_id<java::lang::reflect::MalformedParameterizedTypeException::J2CPP_CLASS_NAME, java::lang::reflect::MalformedParameterizedTypeException::J2CPP_METHOD_NAME(0), java::lang::reflect::MalformedParameterizedTypeException::J2CPP_METHOD_SIGNATURE(0), false>()
	)
)
{
}



J2CPP_DEFINE_CLASS(java::lang::reflect::MalformedParameterizedTypeException,"java/lang/reflect/MalformedParameterizedTypeException")
J2CPP_DEFINE_METHOD(java::lang::reflect::MalformedParameterizedTypeException,0,"<init>","()V")

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_REFLECT_MALFORMEDPARAMETERIZEDTYPEEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
