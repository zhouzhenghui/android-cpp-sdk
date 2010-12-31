/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.test.SingleLaunchActivityTestCase
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEST_SINGLELAUNCHACTIVITYTESTCASE_HPP_DECL
#define J2CPP_ANDROID_TEST_SINGLELAUNCHACTIVITYTESTCASE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Class; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace android { namespace app { class Activity; } } }
namespace j2cpp { namespace android { namespace test { class InstrumentationTestCase; } } }


#include <android/app/Activity.hpp>
#include <android/test/InstrumentationTestCase.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace test {

	class SingleLaunchActivityTestCase;
	class SingleLaunchActivityTestCase
		: public object<SingleLaunchActivityTestCase>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)

		explicit SingleLaunchActivityTestCase(jobject jobj)
		: object<SingleLaunchActivityTestCase>(jobj)
		{
		}

		operator local_ref<android::test::InstrumentationTestCase>() const;


		SingleLaunchActivityTestCase(local_ref< java::lang::String > const&, local_ref< java::lang::Class > const&);
		local_ref< android::app::Activity > getActivity();
		void testActivityTestCaseSetUpProperly();
	}; //class SingleLaunchActivityTestCase

} //namespace test
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEST_SINGLELAUNCHACTIVITYTESTCASE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEST_SINGLELAUNCHACTIVITYTESTCASE_HPP_IMPL
#define J2CPP_ANDROID_TEST_SINGLELAUNCHACTIVITYTESTCASE_HPP_IMPL

namespace j2cpp {



android::test::SingleLaunchActivityTestCase::operator local_ref<android::test::InstrumentationTestCase>() const
{
	return local_ref<android::test::InstrumentationTestCase>(get_jobject());
}


android::test::SingleLaunchActivityTestCase::SingleLaunchActivityTestCase(local_ref< java::lang::String > const &a0, local_ref< java::lang::Class > const &a1)
: object<android::test::SingleLaunchActivityTestCase>(
	call_new_object<
		android::test::SingleLaunchActivityTestCase::J2CPP_CLASS_NAME,
		android::test::SingleLaunchActivityTestCase::J2CPP_METHOD_NAME(0),
		android::test::SingleLaunchActivityTestCase::J2CPP_METHOD_SIGNATURE(0)>
	(a0, a1)
)
{
}


local_ref< android::app::Activity > android::test::SingleLaunchActivityTestCase::getActivity()
{
	return call_method<
		android::test::SingleLaunchActivityTestCase::J2CPP_CLASS_NAME,
		android::test::SingleLaunchActivityTestCase::J2CPP_METHOD_NAME(1),
		android::test::SingleLaunchActivityTestCase::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< android::app::Activity > >
	(get_jobject());
}



void android::test::SingleLaunchActivityTestCase::testActivityTestCaseSetUpProperly()
{
	return call_method<
		android::test::SingleLaunchActivityTestCase::J2CPP_CLASS_NAME,
		android::test::SingleLaunchActivityTestCase::J2CPP_METHOD_NAME(4),
		android::test::SingleLaunchActivityTestCase::J2CPP_METHOD_SIGNATURE(4), 
		void >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(android::test::SingleLaunchActivityTestCase,"android/test/SingleLaunchActivityTestCase")
J2CPP_DEFINE_METHOD(android::test::SingleLaunchActivityTestCase,0,"<init>","(Ljava/lang/String;Ljava/lang/Class;)V")
J2CPP_DEFINE_METHOD(android::test::SingleLaunchActivityTestCase,1,"getActivity","()Landroid/app/Activity;")
J2CPP_DEFINE_METHOD(android::test::SingleLaunchActivityTestCase,2,"setUp","()V")
J2CPP_DEFINE_METHOD(android::test::SingleLaunchActivityTestCase,3,"tearDown","()V")
J2CPP_DEFINE_METHOD(android::test::SingleLaunchActivityTestCase,4,"testActivityTestCaseSetUpProperly","()V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEST_SINGLELAUNCHACTIVITYTESTCASE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
