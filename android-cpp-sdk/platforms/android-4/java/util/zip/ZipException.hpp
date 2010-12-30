/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.zip.ZipException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_ZIP_ZIPEXCEPTION_HPP_DECL
#define J2CPP_JAVA_UTIL_ZIP_ZIPEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace io { class IOException; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/io/IOException.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace util { namespace zip {

	class ZipException;
	class ZipException
		: public object<ZipException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit ZipException(jobject jobj)
		: object<ZipException>(jobj)
		{
		}

		operator local_ref<java::io::IOException>() const;


		ZipException();
		ZipException(local_ref< java::lang::String > const&);
	}; //class ZipException

} //namespace zip
} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_ZIP_ZIPEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_ZIP_ZIPEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_UTIL_ZIP_ZIPEXCEPTION_HPP_IMPL

namespace j2cpp {



java::util::zip::ZipException::operator local_ref<java::io::IOException>() const
{
	return local_ref<java::io::IOException>(get_jobject());
}


java::util::zip::ZipException::ZipException()
: object<java::util::zip::ZipException>(
	call_new_object<
		java::util::zip::ZipException::J2CPP_CLASS_NAME,
		java::util::zip::ZipException::J2CPP_METHOD_NAME(0),
		java::util::zip::ZipException::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}



java::util::zip::ZipException::ZipException(local_ref< java::lang::String > const &a0)
: object<java::util::zip::ZipException>(
	call_new_object<
		java::util::zip::ZipException::J2CPP_CLASS_NAME,
		java::util::zip::ZipException::J2CPP_METHOD_NAME(1),
		java::util::zip::ZipException::J2CPP_METHOD_SIGNATURE(1)>
	(a0)
)
{
}



J2CPP_DEFINE_CLASS(java::util::zip::ZipException,"java/util/zip/ZipException")
J2CPP_DEFINE_METHOD(java::util::zip::ZipException,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::util::zip::ZipException,1,"<init>","(Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_ZIP_ZIPEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
