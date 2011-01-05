/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.nio.channels.ClosedByInterruptException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_CHANNELS_CLOSEDBYINTERRUPTEXCEPTION_HPP_DECL
#define J2CPP_JAVA_NIO_CHANNELS_CLOSEDBYINTERRUPTEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace io { class IOException; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }
namespace j2cpp { namespace java { namespace lang { class Exception; } } }
namespace j2cpp { namespace java { namespace nio { namespace channels { class ClosedChannelException; } } } }
namespace j2cpp { namespace java { namespace nio { namespace channels { class AsynchronousCloseException; } } } }


#include <java/io/IOException.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Throwable.hpp>
#include <java/nio/channels/AsynchronousCloseException.hpp>
#include <java/nio/channels/ClosedChannelException.hpp>


namespace j2cpp {

namespace java { namespace nio { namespace channels {

	class ClosedByInterruptException;
	class ClosedByInterruptException
		: public object<ClosedByInterruptException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit ClosedByInterruptException(jobject jobj)
		: object<ClosedByInterruptException>(jobj)
		{
		}

		operator local_ref<java::io::Serializable>() const;
		operator local_ref<java::io::IOException>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::Throwable>() const;
		operator local_ref<java::lang::Exception>() const;
		operator local_ref<java::nio::channels::ClosedChannelException>() const;
		operator local_ref<java::nio::channels::AsynchronousCloseException>() const;


		ClosedByInterruptException();
	}; //class ClosedByInterruptException

} //namespace channels
} //namespace nio
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_CHANNELS_CLOSEDBYINTERRUPTEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_CHANNELS_CLOSEDBYINTERRUPTEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_NIO_CHANNELS_CLOSEDBYINTERRUPTEXCEPTION_HPP_IMPL

namespace j2cpp {



java::nio::channels::ClosedByInterruptException::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}

java::nio::channels::ClosedByInterruptException::operator local_ref<java::io::IOException>() const
{
	return local_ref<java::io::IOException>(get_jobject());
}

java::nio::channels::ClosedByInterruptException::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::nio::channels::ClosedByInterruptException::operator local_ref<java::lang::Throwable>() const
{
	return local_ref<java::lang::Throwable>(get_jobject());
}

java::nio::channels::ClosedByInterruptException::operator local_ref<java::lang::Exception>() const
{
	return local_ref<java::lang::Exception>(get_jobject());
}

java::nio::channels::ClosedByInterruptException::operator local_ref<java::nio::channels::ClosedChannelException>() const
{
	return local_ref<java::nio::channels::ClosedChannelException>(get_jobject());
}

java::nio::channels::ClosedByInterruptException::operator local_ref<java::nio::channels::AsynchronousCloseException>() const
{
	return local_ref<java::nio::channels::AsynchronousCloseException>(get_jobject());
}


java::nio::channels::ClosedByInterruptException::ClosedByInterruptException()
: object<java::nio::channels::ClosedByInterruptException>(
	call_new_object<
		java::nio::channels::ClosedByInterruptException::J2CPP_CLASS_NAME,
		java::nio::channels::ClosedByInterruptException::J2CPP_METHOD_NAME(0),
		java::nio::channels::ClosedByInterruptException::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



J2CPP_DEFINE_CLASS(java::nio::channels::ClosedByInterruptException,"java/nio/channels/ClosedByInterruptException")
J2CPP_DEFINE_METHOD(java::nio::channels::ClosedByInterruptException,0,"<init>","()V")

} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_CHANNELS_CLOSEDBYINTERRUPTEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
