/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.regex.PatternSyntaxException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_REGEX_PATTERNSYNTAXEXCEPTION_HPP_DECL
#define J2CPP_JAVA_UTIL_REGEX_PATTERNSYNTAXEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace lang { class RuntimeException; } } }
namespace j2cpp { namespace java { namespace lang { class IllegalArgumentException; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }
namespace j2cpp { namespace java { namespace lang { class Exception; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>


namespace j2cpp {

namespace java { namespace util { namespace regex {

	class PatternSyntaxException;
	class PatternSyntaxException
		: public object<PatternSyntaxException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)

		explicit PatternSyntaxException(jobject jobj)
		: object<PatternSyntaxException>(jobj)
		{
		}

		operator local_ref<java::io::Serializable>() const;
		operator local_ref<java::lang::RuntimeException>() const;
		operator local_ref<java::lang::IllegalArgumentException>() const;
		operator local_ref<java::lang::Throwable>() const;
		operator local_ref<java::lang::Exception>() const;
		operator local_ref<java::lang::Object>() const;


		PatternSyntaxException(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, jint);
		local_ref< java::lang::String > getPattern();
		local_ref< java::lang::String > getMessage();
		local_ref< java::lang::String > getDescription();
		jint getIndex();
	}; //class PatternSyntaxException

} //namespace regex
} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_REGEX_PATTERNSYNTAXEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_REGEX_PATTERNSYNTAXEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_UTIL_REGEX_PATTERNSYNTAXEXCEPTION_HPP_IMPL

namespace j2cpp {



java::util::regex::PatternSyntaxException::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}

java::util::regex::PatternSyntaxException::operator local_ref<java::lang::RuntimeException>() const
{
	return local_ref<java::lang::RuntimeException>(get_jobject());
}

java::util::regex::PatternSyntaxException::operator local_ref<java::lang::IllegalArgumentException>() const
{
	return local_ref<java::lang::IllegalArgumentException>(get_jobject());
}

java::util::regex::PatternSyntaxException::operator local_ref<java::lang::Throwable>() const
{
	return local_ref<java::lang::Throwable>(get_jobject());
}

java::util::regex::PatternSyntaxException::operator local_ref<java::lang::Exception>() const
{
	return local_ref<java::lang::Exception>(get_jobject());
}

java::util::regex::PatternSyntaxException::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


java::util::regex::PatternSyntaxException::PatternSyntaxException(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, jint a2)
: object<java::util::regex::PatternSyntaxException>(
	call_new_object<
		java::util::regex::PatternSyntaxException::J2CPP_CLASS_NAME,
		java::util::regex::PatternSyntaxException::J2CPP_METHOD_NAME(0),
		java::util::regex::PatternSyntaxException::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1, a2)
)
{
}


local_ref< java::lang::String > java::util::regex::PatternSyntaxException::getPattern()
{
	return call_method<
		java::util::regex::PatternSyntaxException::J2CPP_CLASS_NAME,
		java::util::regex::PatternSyntaxException::J2CPP_METHOD_NAME(1),
		java::util::regex::PatternSyntaxException::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::String > java::util::regex::PatternSyntaxException::getMessage()
{
	return call_method<
		java::util::regex::PatternSyntaxException::J2CPP_CLASS_NAME,
		java::util::regex::PatternSyntaxException::J2CPP_METHOD_NAME(2),
		java::util::regex::PatternSyntaxException::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::String > java::util::regex::PatternSyntaxException::getDescription()
{
	return call_method<
		java::util::regex::PatternSyntaxException::J2CPP_CLASS_NAME,
		java::util::regex::PatternSyntaxException::J2CPP_METHOD_NAME(3),
		java::util::regex::PatternSyntaxException::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::lang::String >
	>(get_jobject());
}

jint java::util::regex::PatternSyntaxException::getIndex()
{
	return call_method<
		java::util::regex::PatternSyntaxException::J2CPP_CLASS_NAME,
		java::util::regex::PatternSyntaxException::J2CPP_METHOD_NAME(4),
		java::util::regex::PatternSyntaxException::J2CPP_METHOD_SIGNATURE(4), 
		jint
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(java::util::regex::PatternSyntaxException,"java/util/regex/PatternSyntaxException")
J2CPP_DEFINE_METHOD(java::util::regex::PatternSyntaxException,0,"<init>","(Ljava/lang/String;Ljava/lang/String;I)V")
J2CPP_DEFINE_METHOD(java::util::regex::PatternSyntaxException,1,"getPattern","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::regex::PatternSyntaxException,2,"getMessage","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::regex::PatternSyntaxException,3,"getDescription","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::regex::PatternSyntaxException,4,"getIndex","()I")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_REGEX_PATTERNSYNTAXEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION