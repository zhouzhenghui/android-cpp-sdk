/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.text.ParseException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_TEXT_PARSEEXCEPTION_HPP_DECL
#define J2CPP_JAVA_TEXT_PARSEEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Exception; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>


namespace j2cpp {

namespace java { namespace text {

	class ParseException;
	class ParseException
		: public object<ParseException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit ParseException(jobject jobj)
		: object<ParseException>(jobj)
		{
		}

		operator local_ref<java::lang::Exception>() const;
		operator local_ref<java::lang::Throwable>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::io::Serializable>() const;


		ParseException(local_ref< java::lang::String > const&, jint);
		jint getErrorOffset();
	}; //class ParseException

} //namespace text
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_TEXT_PARSEEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_TEXT_PARSEEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_TEXT_PARSEEXCEPTION_HPP_IMPL

namespace j2cpp {



java::text::ParseException::operator local_ref<java::lang::Exception>() const
{
	return local_ref<java::lang::Exception>(get_jobject());
}

java::text::ParseException::operator local_ref<java::lang::Throwable>() const
{
	return local_ref<java::lang::Throwable>(get_jobject());
}

java::text::ParseException::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::text::ParseException::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}


java::text::ParseException::ParseException(local_ref< java::lang::String > const &a0, jint a1)
: object<java::text::ParseException>(
	call_new_object<
		java::text::ParseException::J2CPP_CLASS_NAME,
		java::text::ParseException::J2CPP_METHOD_NAME(0),
		java::text::ParseException::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1)
)
{
}


jint java::text::ParseException::getErrorOffset()
{
	return call_method<
		java::text::ParseException::J2CPP_CLASS_NAME,
		java::text::ParseException::J2CPP_METHOD_NAME(1),
		java::text::ParseException::J2CPP_METHOD_SIGNATURE(1), 
		jint
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(java::text::ParseException,"java/text/ParseException")
J2CPP_DEFINE_METHOD(java::text::ParseException,0,"<init>","(Ljava/lang/String;I)V")
J2CPP_DEFINE_METHOD(java::text::ParseException,1,"getErrorOffset","()I")

} //namespace j2cpp

#endif //J2CPP_JAVA_TEXT_PARSEEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
