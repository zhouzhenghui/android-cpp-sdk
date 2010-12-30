/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: dalvik.system.TemporaryDirectory
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_DALVIK_SYSTEM_TEMPORARYDIRECTORY_HPP_DECL
#define J2CPP_DALVIK_SYSTEM_TEMPORARYDIRECTORY_HPP_DECL


namespace j2cpp { namespace java { namespace io { class File; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/io/File.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace dalvik { namespace system {

	class TemporaryDirectory;
	class TemporaryDirectory
		: public object<TemporaryDirectory>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit TemporaryDirectory(jobject jobj)
		: object<TemporaryDirectory>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		TemporaryDirectory();
		static void setUpDirectory(local_ref< java::lang::String >  const&);
		static void setUpDirectory(local_ref< java::io::File >  const&);
	}; //class TemporaryDirectory

} //namespace system
} //namespace dalvik

} //namespace j2cpp

#endif //J2CPP_DALVIK_SYSTEM_TEMPORARYDIRECTORY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_DALVIK_SYSTEM_TEMPORARYDIRECTORY_HPP_IMPL
#define J2CPP_DALVIK_SYSTEM_TEMPORARYDIRECTORY_HPP_IMPL

namespace j2cpp {



dalvik::system::TemporaryDirectory::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


dalvik::system::TemporaryDirectory::TemporaryDirectory()
: object<dalvik::system::TemporaryDirectory>(
	call_new_object<
		dalvik::system::TemporaryDirectory::J2CPP_CLASS_NAME,
		dalvik::system::TemporaryDirectory::J2CPP_METHOD_NAME(0),
		dalvik::system::TemporaryDirectory::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}


void dalvik::system::TemporaryDirectory::setUpDirectory(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		dalvik::system::TemporaryDirectory::J2CPP_CLASS_NAME,
		dalvik::system::TemporaryDirectory::J2CPP_METHOD_NAME(1),
		dalvik::system::TemporaryDirectory::J2CPP_METHOD_SIGNATURE(1), 
		void >
	(a0);
}

void dalvik::system::TemporaryDirectory::setUpDirectory(local_ref< java::io::File > const &a0)
{
	return call_static_method<
		dalvik::system::TemporaryDirectory::J2CPP_CLASS_NAME,
		dalvik::system::TemporaryDirectory::J2CPP_METHOD_NAME(2),
		dalvik::system::TemporaryDirectory::J2CPP_METHOD_SIGNATURE(2), 
		void >
	(a0);
}


J2CPP_DEFINE_CLASS(dalvik::system::TemporaryDirectory,"dalvik/system/TemporaryDirectory")
J2CPP_DEFINE_METHOD(dalvik::system::TemporaryDirectory,0,"<init>","()V")
J2CPP_DEFINE_METHOD(dalvik::system::TemporaryDirectory,1,"setUpDirectory","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(dalvik::system::TemporaryDirectory,2,"setUpDirectory","(Ljava/io/File;)V")

} //namespace j2cpp

#endif //J2CPP_DALVIK_SYSTEM_TEMPORARYDIRECTORY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
