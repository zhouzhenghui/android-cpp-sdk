/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.io.FilenameFilter
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_FILENAMEFILTER_HPP_DECL
#define J2CPP_JAVA_IO_FILENAMEFILTER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace io { class File; } } }


#include <java/io/File.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace io {

	class FilenameFilter;
	class FilenameFilter
		: public object<FilenameFilter>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit FilenameFilter(jobject jobj)
		: object<FilenameFilter>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		jboolean accept(local_ref< java::io::File >  const&, local_ref< java::lang::String >  const&);
	}; //class FilenameFilter

} //namespace io
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_FILENAMEFILTER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_FILENAMEFILTER_HPP_IMPL
#define J2CPP_JAVA_IO_FILENAMEFILTER_HPP_IMPL

namespace j2cpp {



java::io::FilenameFilter::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

jboolean java::io::FilenameFilter::accept(local_ref< java::io::File > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		java::io::FilenameFilter::J2CPP_CLASS_NAME,
		java::io::FilenameFilter::J2CPP_METHOD_NAME(0),
		java::io::FilenameFilter::J2CPP_METHOD_SIGNATURE(0), 
		jboolean >
	(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(java::io::FilenameFilter,"java/io/FilenameFilter")
J2CPP_DEFINE_METHOD(java::io::FilenameFilter,0,"accept","(Ljava/io/File;Ljava/lang/String;)Z")

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_FILENAMEFILTER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
