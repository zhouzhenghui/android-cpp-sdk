/*================================================================================
  code generated by: java2cpp
  class: android.test.mock.MockApplication
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEST_MOCK_MOCKAPPLICATION_HPP_DECL
#define J2CPP_ANDROID_TEST_MOCK_MOCKAPPLICATION_HPP_DECL


namespace j2cpp { namespace android { namespace app { class Application; } } }
namespace j2cpp { namespace android { namespace content { namespace res { class Configuration; } } } }


#include <android/app/Application.hpp>
#include <android/content/res/Configuration.hpp>


namespace j2cpp {

namespace android { namespace test { namespace mock {

	class MockApplication;
	class MockApplication
		: public cpp_object<MockApplication>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		explicit MockApplication(jobject jobj)
		: cpp_object<MockApplication>(jobj)
		{
		}

		operator local_ref<android::app::Application>() const;


		MockApplication();
		void onCreate();
		void onTerminate();
		void onConfigurationChanged(local_ref< android::content::res::Configuration > const&);
	}; //class MockApplication

} //namespace mock
} //namespace test
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEST_MOCK_MOCKAPPLICATION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEST_MOCK_MOCKAPPLICATION_HPP_IMPL
#define J2CPP_ANDROID_TEST_MOCK_MOCKAPPLICATION_HPP_IMPL

namespace j2cpp {



android::test::mock::MockApplication::operator local_ref<android::app::Application>() const
{
	return local_ref<android::app::Application>(get_jtype());
}


android::test::mock::MockApplication::MockApplication()
: cpp_object<android::test::mock::MockApplication>(
	environment::get().get_jenv()->NewObject(
		get_class<android::test::mock::MockApplication::J2CPP_CLASS_NAME>(),
		get_method_id<android::test::mock::MockApplication::J2CPP_CLASS_NAME, android::test::mock::MockApplication::J2CPP_METHOD_NAME(0), android::test::mock::MockApplication::J2CPP_METHOD_SIGNATURE(0), false>()
	)
)
{
}


void android::test::mock::MockApplication::onCreate()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

void android::test::mock::MockApplication::onTerminate()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

void android::test::mock::MockApplication::onConfigurationChanged(local_ref< android::content::res::Configuration > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::test::mock::MockApplication,"android/test/mock/MockApplication")
J2CPP_DEFINE_METHOD(android::test::mock::MockApplication,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::test::mock::MockApplication,1,"onCreate","()V")
J2CPP_DEFINE_METHOD(android::test::mock::MockApplication,2,"onTerminate","()V")
J2CPP_DEFINE_METHOD(android::test::mock::MockApplication,3,"onConfigurationChanged","(Landroid/content/res/Configuration;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEST_MOCK_MOCKAPPLICATION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
