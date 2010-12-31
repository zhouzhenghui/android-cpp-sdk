/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.io.ObjectInputValidation
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_OBJECTINPUTVALIDATION_HPP_DECL
#define J2CPP_JAVA_IO_OBJECTINPUTVALIDATION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>


namespace j2cpp {

namespace java { namespace io {

	class ObjectInputValidation;
	class ObjectInputValidation
		: public object<ObjectInputValidation>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit ObjectInputValidation(jobject jobj)
		: object<ObjectInputValidation>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		void validateObject();
	}; //class ObjectInputValidation

} //namespace io
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_OBJECTINPUTVALIDATION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_OBJECTINPUTVALIDATION_HPP_IMPL
#define J2CPP_JAVA_IO_OBJECTINPUTVALIDATION_HPP_IMPL

namespace j2cpp {



java::io::ObjectInputValidation::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void java::io::ObjectInputValidation::validateObject()
{
	return call_method<
		java::io::ObjectInputValidation::J2CPP_CLASS_NAME,
		java::io::ObjectInputValidation::J2CPP_METHOD_NAME(0),
		java::io::ObjectInputValidation::J2CPP_METHOD_SIGNATURE(0), 
		void >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(java::io::ObjectInputValidation,"java/io/ObjectInputValidation")
J2CPP_DEFINE_METHOD(java::io::ObjectInputValidation,0,"validateObject","()V")

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_OBJECTINPUTVALIDATION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
