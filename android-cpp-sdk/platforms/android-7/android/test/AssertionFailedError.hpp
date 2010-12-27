/*================================================================================
  code generated by: java2cpp
  class: android.test.AssertionFailedError
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEST_ASSERTIONFAILEDERROR_HPP_DECL
#define J2CPP_ANDROID_TEST_ASSERTIONFAILEDERROR_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Error; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/Error.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace test {

	class AssertionFailedError;
	class AssertionFailedError
		: public cpp_object<AssertionFailedError>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit AssertionFailedError(jobject jobj)
		: cpp_object<AssertionFailedError>(jobj)
		{
		}

		operator local_ref<java::lang::Error>() const;


		AssertionFailedError();
		AssertionFailedError(local_ref< java::lang::String > const&);
	}; //class AssertionFailedError

} //namespace test
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEST_ASSERTIONFAILEDERROR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEST_ASSERTIONFAILEDERROR_HPP_IMPL
#define J2CPP_ANDROID_TEST_ASSERTIONFAILEDERROR_HPP_IMPL

namespace j2cpp {



android::test::AssertionFailedError::operator local_ref<java::lang::Error>() const
{
	return local_ref<java::lang::Error>(get_jtype());
}


android::test::AssertionFailedError::AssertionFailedError()
: cpp_object<android::test::AssertionFailedError>(
	environment::get().get_jenv()->NewObject(
		get_class<android::test::AssertionFailedError::J2CPP_CLASS_NAME>(),
		get_method_id<android::test::AssertionFailedError::J2CPP_CLASS_NAME, android::test::AssertionFailedError::J2CPP_METHOD_NAME(0), android::test::AssertionFailedError::J2CPP_METHOD_SIGNATURE(0), false>()
	)
)
{
}



android::test::AssertionFailedError::AssertionFailedError(local_ref< java::lang::String > const &a0)
: cpp_object<android::test::AssertionFailedError>(
	environment::get().get_jenv()->NewObject(
		get_class<android::test::AssertionFailedError::J2CPP_CLASS_NAME>(),
		get_method_id<android::test::AssertionFailedError::J2CPP_CLASS_NAME, android::test::AssertionFailedError::J2CPP_METHOD_NAME(1), android::test::AssertionFailedError::J2CPP_METHOD_SIGNATURE(1), false>(),
		a0.get_jtype()
	)
)
{
}



J2CPP_DEFINE_CLASS(android::test::AssertionFailedError,"android/test/AssertionFailedError")
J2CPP_DEFINE_METHOD(android::test::AssertionFailedError,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::test::AssertionFailedError,1,"<init>","(Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEST_ASSERTIONFAILEDERROR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
