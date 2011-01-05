/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.io.InvalidClassException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_INVALIDCLASSEXCEPTION_HPP_DECL
#define J2CPP_JAVA_IO_INVALIDCLASSEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace io { class IOException; } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace io { class ObjectStreamException; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }
namespace j2cpp { namespace java { namespace lang { class Exception; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/io/IOException.hpp>
#include <java/io/ObjectStreamException.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>


namespace j2cpp {

namespace java { namespace io {

	class InvalidClassException;
	class InvalidClassException
		: public object<InvalidClassException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_FIELD(0)

		explicit InvalidClassException(jobject jobj)
		: object<InvalidClassException>(jobj)
		, classname(jobj)
		{
		}

		operator local_ref<java::io::IOException>() const;
		operator local_ref<java::io::Serializable>() const;
		operator local_ref<java::io::ObjectStreamException>() const;
		operator local_ref<java::lang::Throwable>() const;
		operator local_ref<java::lang::Exception>() const;
		operator local_ref<java::lang::Object>() const;


		InvalidClassException(local_ref< java::lang::String > const&);
		InvalidClassException(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		local_ref< java::lang::String > getMessage();

		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::String > > classname;
	}; //class InvalidClassException

} //namespace io
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_INVALIDCLASSEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_INVALIDCLASSEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_IO_INVALIDCLASSEXCEPTION_HPP_IMPL

namespace j2cpp {



java::io::InvalidClassException::operator local_ref<java::io::IOException>() const
{
	return local_ref<java::io::IOException>(get_jobject());
}

java::io::InvalidClassException::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}

java::io::InvalidClassException::operator local_ref<java::io::ObjectStreamException>() const
{
	return local_ref<java::io::ObjectStreamException>(get_jobject());
}

java::io::InvalidClassException::operator local_ref<java::lang::Throwable>() const
{
	return local_ref<java::lang::Throwable>(get_jobject());
}

java::io::InvalidClassException::operator local_ref<java::lang::Exception>() const
{
	return local_ref<java::lang::Exception>(get_jobject());
}

java::io::InvalidClassException::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


java::io::InvalidClassException::InvalidClassException(local_ref< java::lang::String > const &a0)
: object<java::io::InvalidClassException>(
	call_new_object<
		java::io::InvalidClassException::J2CPP_CLASS_NAME,
		java::io::InvalidClassException::J2CPP_METHOD_NAME(0),
		java::io::InvalidClassException::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
, classname(get_jobject())
{
}



java::io::InvalidClassException::InvalidClassException(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
: object<java::io::InvalidClassException>(
	call_new_object<
		java::io::InvalidClassException::J2CPP_CLASS_NAME,
		java::io::InvalidClassException::J2CPP_METHOD_NAME(1),
		java::io::InvalidClassException::J2CPP_METHOD_SIGNATURE(1)
	>(a0, a1)
)
, classname(get_jobject())
{
}


local_ref< java::lang::String > java::io::InvalidClassException::getMessage()
{
	return call_method<
		java::io::InvalidClassException::J2CPP_CLASS_NAME,
		java::io::InvalidClassException::J2CPP_METHOD_NAME(2),
		java::io::InvalidClassException::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::String >
	>(get_jobject());
}



J2CPP_DEFINE_CLASS(java::io::InvalidClassException,"java/io/InvalidClassException")
J2CPP_DEFINE_METHOD(java::io::InvalidClassException,0,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::io::InvalidClassException,1,"<init>","(Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::io::InvalidClassException,2,"getMessage","()Ljava/lang/String;")
J2CPP_DEFINE_FIELD(java::io::InvalidClassException,0,"classname","Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_INVALIDCLASSEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
