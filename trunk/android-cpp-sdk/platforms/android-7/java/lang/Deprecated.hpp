/*================================================================================
  code generated by: java2cpp
  class: java.lang.Deprecated
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_DEPRECATED_HPP_DECL
#define J2CPP_JAVA_LANG_DEPRECATED_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { namespace annotation { class Annotation; } } } }


#include <java/lang/Object.hpp>
#include <java/lang/annotation/Annotation.hpp>


namespace j2cpp {

namespace java { namespace lang {

	class Deprecated;
	class Deprecated
		: public cpp_object<Deprecated>
	{
	public:

		J2CPP_DECLARE_CLASS


		explicit Deprecated(jobject jobj)
		: cpp_object<Deprecated>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::annotation::Annotation>() const;

	}; //class Deprecated

} //namespace lang
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_DEPRECATED_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_DEPRECATED_HPP_IMPL
#define J2CPP_JAVA_LANG_DEPRECATED_HPP_IMPL

namespace j2cpp {



java::lang::Deprecated::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}

java::lang::Deprecated::operator local_ref<java::lang::annotation::Annotation>() const
{
	return local_ref<java::lang::annotation::Annotation>(get_jtype());
}

J2CPP_DEFINE_CLASS(java::lang::Deprecated,"java/lang/Deprecated")

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_DEPRECATED_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
