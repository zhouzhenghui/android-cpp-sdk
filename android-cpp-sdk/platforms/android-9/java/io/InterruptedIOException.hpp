/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.io.InterruptedIOException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_INTERRUPTEDIOEXCEPTION_HPP_DECL
#define J2CPP_JAVA_IO_INTERRUPTEDIOEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace io { class IOException; } } }


#include <java/io/IOException.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace io {

	class InterruptedIOException;
	class InterruptedIOException
		: public object<InterruptedIOException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_FIELD(0)

		explicit InterruptedIOException(jobject jobj)
		: object<InterruptedIOException>(jobj)
		, bytesTransferred(jobj)
		{
		}

		operator local_ref<java::io::IOException>() const;


		InterruptedIOException();
		InterruptedIOException(local_ref< java::lang::String > const&);

		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > bytesTransferred;
	}; //class InterruptedIOException

} //namespace io
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_INTERRUPTEDIOEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_INTERRUPTEDIOEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_IO_INTERRUPTEDIOEXCEPTION_HPP_IMPL

namespace j2cpp {



java::io::InterruptedIOException::operator local_ref<java::io::IOException>() const
{
	return local_ref<java::io::IOException>(get_jobject());
}


java::io::InterruptedIOException::InterruptedIOException()
: object<java::io::InterruptedIOException>(
	call_new_object<
		java::io::InterruptedIOException::J2CPP_CLASS_NAME,
		java::io::InterruptedIOException::J2CPP_METHOD_NAME(0),
		java::io::InterruptedIOException::J2CPP_METHOD_SIGNATURE(0)>
	()
)
, bytesTransferred(get_jobject())
{
}



java::io::InterruptedIOException::InterruptedIOException(local_ref< java::lang::String > const &a0)
: object<java::io::InterruptedIOException>(
	call_new_object<
		java::io::InterruptedIOException::J2CPP_CLASS_NAME,
		java::io::InterruptedIOException::J2CPP_METHOD_NAME(1),
		java::io::InterruptedIOException::J2CPP_METHOD_SIGNATURE(1)>
	(a0)
)
, bytesTransferred(get_jobject())
{
}




J2CPP_DEFINE_CLASS(java::io::InterruptedIOException,"java/io/InterruptedIOException")
J2CPP_DEFINE_METHOD(java::io::InterruptedIOException,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::io::InterruptedIOException,1,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_FIELD(java::io::InterruptedIOException,0,"bytesTransferred","I")

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_INTERRUPTEDIOEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
