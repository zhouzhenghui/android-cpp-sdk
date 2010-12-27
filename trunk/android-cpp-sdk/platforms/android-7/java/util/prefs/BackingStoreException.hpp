/*================================================================================
  code generated by: java2cpp
  class: java.util.prefs.BackingStoreException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_PREFS_BACKINGSTOREEXCEPTION_HPP_DECL
#define J2CPP_JAVA_UTIL_PREFS_BACKINGSTOREEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }
namespace j2cpp { namespace java { namespace lang { class Exception; } } }


#include <java/lang/Exception.hpp>
#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>


namespace j2cpp {

namespace java { namespace util { namespace prefs {

	class BackingStoreException;
	class BackingStoreException
		: public cpp_object<BackingStoreException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit BackingStoreException(jobject jobj)
		: cpp_object<BackingStoreException>(jobj)
		{
		}

		operator local_ref<java::lang::Exception>() const;


		BackingStoreException(local_ref< java::lang::String > const&);
		BackingStoreException(local_ref< java::lang::Throwable > const&);
	}; //class BackingStoreException

} //namespace prefs
} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_PREFS_BACKINGSTOREEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_PREFS_BACKINGSTOREEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_UTIL_PREFS_BACKINGSTOREEXCEPTION_HPP_IMPL

namespace j2cpp {



java::util::prefs::BackingStoreException::operator local_ref<java::lang::Exception>() const
{
	return local_ref<java::lang::Exception>(get_jtype());
}


java::util::prefs::BackingStoreException::BackingStoreException(local_ref< java::lang::String > const &a0)
: cpp_object<java::util::prefs::BackingStoreException>(
	environment::get().get_jenv()->NewObject(
		get_class<java::util::prefs::BackingStoreException::J2CPP_CLASS_NAME>(),
		get_method_id<java::util::prefs::BackingStoreException::J2CPP_CLASS_NAME, java::util::prefs::BackingStoreException::J2CPP_METHOD_NAME(0), java::util::prefs::BackingStoreException::J2CPP_METHOD_SIGNATURE(0), false>(),
		a0.get_jtype()
	)
)
{
}



java::util::prefs::BackingStoreException::BackingStoreException(local_ref< java::lang::Throwable > const &a0)
: cpp_object<java::util::prefs::BackingStoreException>(
	environment::get().get_jenv()->NewObject(
		get_class<java::util::prefs::BackingStoreException::J2CPP_CLASS_NAME>(),
		get_method_id<java::util::prefs::BackingStoreException::J2CPP_CLASS_NAME, java::util::prefs::BackingStoreException::J2CPP_METHOD_NAME(1), java::util::prefs::BackingStoreException::J2CPP_METHOD_SIGNATURE(1), false>(),
		a0.get_jtype()
	)
)
{
}



J2CPP_DEFINE_CLASS(java::util::prefs::BackingStoreException,"java/util/prefs/BackingStoreException")
J2CPP_DEFINE_METHOD(java::util::prefs::BackingStoreException,0,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::util::prefs::BackingStoreException,1,"<init>","(Ljava/lang/Throwable;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_PREFS_BACKINGSTOREEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
