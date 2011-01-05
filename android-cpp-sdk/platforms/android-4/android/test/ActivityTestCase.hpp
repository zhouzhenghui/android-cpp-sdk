/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.test.ActivityTestCase
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEST_ACTIVITYTESTCASE_HPP_DECL
#define J2CPP_ANDROID_TEST_ACTIVITYTESTCASE_HPP_DECL


namespace j2cpp { namespace android { namespace test { class InstrumentationTestCase; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace junit { namespace framework { class TestCase; } } }
namespace j2cpp { namespace junit { namespace framework { class Test; } } }
namespace j2cpp { namespace junit { namespace framework { class Assert; } } }


#include <android/test/InstrumentationTestCase.hpp>
#include <java/lang/Object.hpp>
#include <junit/framework/Assert.hpp>
#include <junit/framework/Test.hpp>
#include <junit/framework/TestCase.hpp>


namespace j2cpp {

namespace android { namespace test {

	class ActivityTestCase;
	class ActivityTestCase
		: public object<ActivityTestCase>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		explicit ActivityTestCase(jobject jobj)
		: object<ActivityTestCase>(jobj)
		{
		}

		operator local_ref<android::test::InstrumentationTestCase>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<junit::framework::TestCase>() const;
		operator local_ref<junit::framework::Test>() const;
		operator local_ref<junit::framework::Assert>() const;


		ActivityTestCase();
	}; //class ActivityTestCase

} //namespace test
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEST_ACTIVITYTESTCASE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEST_ACTIVITYTESTCASE_HPP_IMPL
#define J2CPP_ANDROID_TEST_ACTIVITYTESTCASE_HPP_IMPL

namespace j2cpp {



android::test::ActivityTestCase::operator local_ref<android::test::InstrumentationTestCase>() const
{
	return local_ref<android::test::InstrumentationTestCase>(get_jobject());
}

android::test::ActivityTestCase::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::test::ActivityTestCase::operator local_ref<junit::framework::TestCase>() const
{
	return local_ref<junit::framework::TestCase>(get_jobject());
}

android::test::ActivityTestCase::operator local_ref<junit::framework::Test>() const
{
	return local_ref<junit::framework::Test>(get_jobject());
}

android::test::ActivityTestCase::operator local_ref<junit::framework::Assert>() const
{
	return local_ref<junit::framework::Assert>(get_jobject());
}


android::test::ActivityTestCase::ActivityTestCase()
: object<android::test::ActivityTestCase>(
	call_new_object<
		android::test::ActivityTestCase::J2CPP_CLASS_NAME,
		android::test::ActivityTestCase::J2CPP_METHOD_NAME(0),
		android::test::ActivityTestCase::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}






J2CPP_DEFINE_CLASS(android::test::ActivityTestCase,"android/test/ActivityTestCase")
J2CPP_DEFINE_METHOD(android::test::ActivityTestCase,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::test::ActivityTestCase,1,"getActivity","()Landroid/app/Activity;")
J2CPP_DEFINE_METHOD(android::test::ActivityTestCase,2,"setActivity","(Landroid/app/Activity;)V")
J2CPP_DEFINE_METHOD(android::test::ActivityTestCase,3,"scrubClass","(Ljava/lang/Class;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEST_ACTIVITYTESTCASE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
