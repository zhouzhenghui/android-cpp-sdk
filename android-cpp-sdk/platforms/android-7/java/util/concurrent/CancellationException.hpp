/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.concurrent.CancellationException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_CANCELLATIONEXCEPTION_HPP_DECL
#define J2CPP_JAVA_UTIL_CONCURRENT_CANCELLATIONEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class RuntimeException; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }
namespace j2cpp { namespace java { namespace lang { class IllegalStateException; } } }
namespace j2cpp { namespace java { namespace lang { class Exception; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>


namespace j2cpp {

namespace java { namespace util { namespace concurrent {

	class CancellationException;
	class CancellationException
		: public object<CancellationException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit CancellationException(jobject jobj)
		: object<CancellationException>(jobj)
		{
		}

		operator local_ref<java::io::Serializable>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::RuntimeException>() const;
		operator local_ref<java::lang::Throwable>() const;
		operator local_ref<java::lang::IllegalStateException>() const;
		operator local_ref<java::lang::Exception>() const;


		CancellationException();
		CancellationException(local_ref< java::lang::String > const&);
	}; //class CancellationException

} //namespace concurrent
} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_CANCELLATIONEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_CANCELLATIONEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_UTIL_CONCURRENT_CANCELLATIONEXCEPTION_HPP_IMPL

namespace j2cpp {



java::util::concurrent::CancellationException::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}

java::util::concurrent::CancellationException::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::util::concurrent::CancellationException::operator local_ref<java::lang::RuntimeException>() const
{
	return local_ref<java::lang::RuntimeException>(get_jobject());
}

java::util::concurrent::CancellationException::operator local_ref<java::lang::Throwable>() const
{
	return local_ref<java::lang::Throwable>(get_jobject());
}

java::util::concurrent::CancellationException::operator local_ref<java::lang::IllegalStateException>() const
{
	return local_ref<java::lang::IllegalStateException>(get_jobject());
}

java::util::concurrent::CancellationException::operator local_ref<java::lang::Exception>() const
{
	return local_ref<java::lang::Exception>(get_jobject());
}


java::util::concurrent::CancellationException::CancellationException()
: object<java::util::concurrent::CancellationException>(
	call_new_object<
		java::util::concurrent::CancellationException::J2CPP_CLASS_NAME,
		java::util::concurrent::CancellationException::J2CPP_METHOD_NAME(0),
		java::util::concurrent::CancellationException::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



java::util::concurrent::CancellationException::CancellationException(local_ref< java::lang::String > const &a0)
: object<java::util::concurrent::CancellationException>(
	call_new_object<
		java::util::concurrent::CancellationException::J2CPP_CLASS_NAME,
		java::util::concurrent::CancellationException::J2CPP_METHOD_NAME(1),
		java::util::concurrent::CancellationException::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}



J2CPP_DEFINE_CLASS(java::util::concurrent::CancellationException,"java/util/concurrent/CancellationException")
J2CPP_DEFINE_METHOD(java::util::concurrent::CancellationException,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::util::concurrent::CancellationException,1,"<init>","(Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_CANCELLATIONEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION