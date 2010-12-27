/*================================================================================
  code generated by: java2cpp
  class: java.nio.channels.AsynchronousCloseException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_CHANNELS_ASYNCHRONOUSCLOSEEXCEPTION_HPP_DECL
#define J2CPP_JAVA_NIO_CHANNELS_ASYNCHRONOUSCLOSEEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace nio { namespace channels { class ClosedChannelException; } } } }


#include <java/nio/channels/ClosedChannelException.hpp>


namespace j2cpp {

namespace java { namespace nio { namespace channels {

	class AsynchronousCloseException;
	class AsynchronousCloseException
		: public cpp_object<AsynchronousCloseException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit AsynchronousCloseException(jobject jobj)
		: cpp_object<AsynchronousCloseException>(jobj)
		{
		}

		operator local_ref<java::nio::channels::ClosedChannelException>() const;


		AsynchronousCloseException();
	}; //class AsynchronousCloseException

} //namespace channels
} //namespace nio
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_CHANNELS_ASYNCHRONOUSCLOSEEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_CHANNELS_ASYNCHRONOUSCLOSEEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_NIO_CHANNELS_ASYNCHRONOUSCLOSEEXCEPTION_HPP_IMPL

namespace j2cpp {



java::nio::channels::AsynchronousCloseException::operator local_ref<java::nio::channels::ClosedChannelException>() const
{
	return local_ref<java::nio::channels::ClosedChannelException>(get_jtype());
}


java::nio::channels::AsynchronousCloseException::AsynchronousCloseException()
: cpp_object<java::nio::channels::AsynchronousCloseException>(
	environment::get().get_jenv()->NewObject(
		get_class<java::nio::channels::AsynchronousCloseException::J2CPP_CLASS_NAME>(),
		get_method_id<java::nio::channels::AsynchronousCloseException::J2CPP_CLASS_NAME, java::nio::channels::AsynchronousCloseException::J2CPP_METHOD_NAME(0), java::nio::channels::AsynchronousCloseException::J2CPP_METHOD_SIGNATURE(0), false>()
	)
)
{
}



J2CPP_DEFINE_CLASS(java::nio::channels::AsynchronousCloseException,"java/nio/channels/AsynchronousCloseException")
J2CPP_DEFINE_METHOD(java::nio::channels::AsynchronousCloseException,0,"<init>","()V")

} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_CHANNELS_ASYNCHRONOUSCLOSEEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
