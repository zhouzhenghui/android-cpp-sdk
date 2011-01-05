/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.test.TestSuiteProvider
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEST_TESTSUITEPROVIDER_HPP_DECL
#define J2CPP_ANDROID_TEST_TESTSUITEPROVIDER_HPP_DECL


namespace j2cpp { namespace junit { namespace framework { class TestSuite; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <junit/framework/TestSuite.hpp>


namespace j2cpp {

namespace android { namespace test {

	class TestSuiteProvider;
	class TestSuiteProvider
		: public object<TestSuiteProvider>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit TestSuiteProvider(jobject jobj)
		: object<TestSuiteProvider>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< junit::framework::TestSuite > getTestSuite();
	}; //class TestSuiteProvider

} //namespace test
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEST_TESTSUITEPROVIDER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEST_TESTSUITEPROVIDER_HPP_IMPL
#define J2CPP_ANDROID_TEST_TESTSUITEPROVIDER_HPP_IMPL

namespace j2cpp {



android::test::TestSuiteProvider::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

local_ref< junit::framework::TestSuite > android::test::TestSuiteProvider::getTestSuite()
{
	return call_method<
		android::test::TestSuiteProvider::J2CPP_CLASS_NAME,
		android::test::TestSuiteProvider::J2CPP_METHOD_NAME(0),
		android::test::TestSuiteProvider::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< junit::framework::TestSuite >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(android::test::TestSuiteProvider,"android/test/TestSuiteProvider")
J2CPP_DEFINE_METHOD(android::test::TestSuiteProvider,0,"getTestSuite","()Ljunit/framework/TestSuite;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEST_TESTSUITEPROVIDER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
