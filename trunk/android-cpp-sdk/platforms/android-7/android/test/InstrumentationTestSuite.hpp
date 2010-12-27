/*================================================================================
  code generated by: java2cpp
  class: android.test.InstrumentationTestSuite
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEST_INSTRUMENTATIONTESTSUITE_HPP_DECL
#define J2CPP_ANDROID_TEST_INSTRUMENTATIONTESTSUITE_HPP_DECL


namespace j2cpp { namespace junit { namespace framework { class TestSuite; } } }
namespace j2cpp { namespace junit { namespace framework { class TestResult; } } }
namespace j2cpp { namespace junit { namespace framework { class Test; } } }
namespace j2cpp { namespace java { namespace lang { class Class; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace android { namespace app { class Instrumentation; } } }


#include <android/app/Instrumentation.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/String.hpp>
#include <junit/framework/Test.hpp>
#include <junit/framework/TestResult.hpp>
#include <junit/framework/TestSuite.hpp>


namespace j2cpp {

namespace android { namespace test {

	class InstrumentationTestSuite;
	class InstrumentationTestSuite
		: public cpp_object<InstrumentationTestSuite>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)

		explicit InstrumentationTestSuite(jobject jobj)
		: cpp_object<InstrumentationTestSuite>(jobj)
		{
		}

		operator local_ref<junit::framework::TestSuite>() const;


		InstrumentationTestSuite(local_ref< android::app::Instrumentation > const&);
		InstrumentationTestSuite(local_ref< java::lang::String > const&, local_ref< android::app::Instrumentation > const&);
		InstrumentationTestSuite(local_ref< java::lang::Class > const&, local_ref< android::app::Instrumentation > const&);
		void addTestSuite(local_ref< java::lang::Class > const&);
		void runTest(local_ref< junit::framework::Test > const&, local_ref< junit::framework::TestResult > const&);
	}; //class InstrumentationTestSuite

} //namespace test
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEST_INSTRUMENTATIONTESTSUITE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEST_INSTRUMENTATIONTESTSUITE_HPP_IMPL
#define J2CPP_ANDROID_TEST_INSTRUMENTATIONTESTSUITE_HPP_IMPL

namespace j2cpp {



android::test::InstrumentationTestSuite::operator local_ref<junit::framework::TestSuite>() const
{
	return local_ref<junit::framework::TestSuite>(get_jtype());
}


android::test::InstrumentationTestSuite::InstrumentationTestSuite(local_ref< android::app::Instrumentation > const &a0)
: cpp_object<android::test::InstrumentationTestSuite>(
	environment::get().get_jenv()->NewObject(
		get_class<android::test::InstrumentationTestSuite::J2CPP_CLASS_NAME>(),
		get_method_id<android::test::InstrumentationTestSuite::J2CPP_CLASS_NAME, android::test::InstrumentationTestSuite::J2CPP_METHOD_NAME(0), android::test::InstrumentationTestSuite::J2CPP_METHOD_SIGNATURE(0), false>(),
		a0.get_jtype()
	)
)
{
}



android::test::InstrumentationTestSuite::InstrumentationTestSuite(local_ref< java::lang::String > const &a0, local_ref< android::app::Instrumentation > const &a1)
: cpp_object<android::test::InstrumentationTestSuite>(
	environment::get().get_jenv()->NewObject(
		get_class<android::test::InstrumentationTestSuite::J2CPP_CLASS_NAME>(),
		get_method_id<android::test::InstrumentationTestSuite::J2CPP_CLASS_NAME, android::test::InstrumentationTestSuite::J2CPP_METHOD_NAME(1), android::test::InstrumentationTestSuite::J2CPP_METHOD_SIGNATURE(1), false>(),
		a0.get_jtype(), a1.get_jtype()
	)
)
{
}



android::test::InstrumentationTestSuite::InstrumentationTestSuite(local_ref< java::lang::Class > const &a0, local_ref< android::app::Instrumentation > const &a1)
: cpp_object<android::test::InstrumentationTestSuite>(
	environment::get().get_jenv()->NewObject(
		get_class<android::test::InstrumentationTestSuite::J2CPP_CLASS_NAME>(),
		get_method_id<android::test::InstrumentationTestSuite::J2CPP_CLASS_NAME, android::test::InstrumentationTestSuite::J2CPP_METHOD_NAME(2), android::test::InstrumentationTestSuite::J2CPP_METHOD_SIGNATURE(2), false>(),
		a0.get_jtype(), a1.get_jtype()
	)
)
{
}


void android::test::InstrumentationTestSuite::addTestSuite(local_ref< java::lang::Class > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

void android::test::InstrumentationTestSuite::runTest(local_ref< junit::framework::Test > const &a0, local_ref< junit::framework::TestResult > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::test::InstrumentationTestSuite,"android/test/InstrumentationTestSuite")
J2CPP_DEFINE_METHOD(android::test::InstrumentationTestSuite,0,"<init>","(Landroid/app/Instrumentation;)V")
J2CPP_DEFINE_METHOD(android::test::InstrumentationTestSuite,1,"<init>","(Ljava/lang/String;Landroid/app/Instrumentation;)V")
J2CPP_DEFINE_METHOD(android::test::InstrumentationTestSuite,2,"<init>","(Ljava/lang/Class;Landroid/app/Instrumentation;)V")
J2CPP_DEFINE_METHOD(android::test::InstrumentationTestSuite,3,"addTestSuite","(Ljava/lang/Class;)V")
J2CPP_DEFINE_METHOD(android::test::InstrumentationTestSuite,4,"runTest","(Ljunit/framework/Test;Ljunit/framework/TestResult;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEST_INSTRUMENTATIONTESTSUITE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
