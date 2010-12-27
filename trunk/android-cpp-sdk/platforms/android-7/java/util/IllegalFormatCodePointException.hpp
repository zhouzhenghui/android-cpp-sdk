/*================================================================================
  code generated by: java2cpp
  class: java.util.IllegalFormatCodePointException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_ILLEGALFORMATCODEPOINTEXCEPTION_HPP_DECL
#define J2CPP_JAVA_UTIL_ILLEGALFORMATCODEPOINTEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace util { class IllegalFormatException; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/String.hpp>
#include <java/util/IllegalFormatException.hpp>


namespace j2cpp {

namespace java { namespace util {

	class IllegalFormatCodePointException;
	class IllegalFormatCodePointException
		: public cpp_object<IllegalFormatCodePointException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit IllegalFormatCodePointException(jobject jobj)
		: cpp_object<IllegalFormatCodePointException>(jobj)
		{
		}

		operator local_ref<java::util::IllegalFormatException>() const;
		operator local_ref<java::io::Serializable>() const;


		IllegalFormatCodePointException(cpp_int const&);
		cpp_int getCodePoint();
		local_ref< java::lang::String > getMessage();
	}; //class IllegalFormatCodePointException

} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_ILLEGALFORMATCODEPOINTEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_ILLEGALFORMATCODEPOINTEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_UTIL_ILLEGALFORMATCODEPOINTEXCEPTION_HPP_IMPL

namespace j2cpp {



java::util::IllegalFormatCodePointException::operator local_ref<java::util::IllegalFormatException>() const
{
	return local_ref<java::util::IllegalFormatException>(get_jtype());
}

java::util::IllegalFormatCodePointException::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jtype());
}


java::util::IllegalFormatCodePointException::IllegalFormatCodePointException(cpp_int const &a0)
: cpp_object<java::util::IllegalFormatCodePointException>(
	environment::get().get_jenv()->NewObject(
		get_class<java::util::IllegalFormatCodePointException::J2CPP_CLASS_NAME>(),
		get_method_id<java::util::IllegalFormatCodePointException::J2CPP_CLASS_NAME, java::util::IllegalFormatCodePointException::J2CPP_METHOD_NAME(0), java::util::IllegalFormatCodePointException::J2CPP_METHOD_SIGNATURE(0), false>(),
		a0.get_jtype()
	)
)
{
}


cpp_int java::util::IllegalFormatCodePointException::getCodePoint()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

local_ref< java::lang::String > java::util::IllegalFormatCodePointException::getMessage()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(java::util::IllegalFormatCodePointException,"java/util/IllegalFormatCodePointException")
J2CPP_DEFINE_METHOD(java::util::IllegalFormatCodePointException,0,"<init>","(I)V")
J2CPP_DEFINE_METHOD(java::util::IllegalFormatCodePointException,1,"getCodePoint","()I")
J2CPP_DEFINE_METHOD(java::util::IllegalFormatCodePointException,2,"getMessage","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_ILLEGALFORMATCODEPOINTEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
