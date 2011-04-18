/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.test.mock.MockApplication
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEST_MOCK_MOCKAPPLICATION_HPP_DECL
#define J2CPP_ANDROID_TEST_MOCK_MOCKAPPLICATION_HPP_DECL


namespace j2cpp { namespace android { namespace content { class ContextWrapper; } } }
namespace j2cpp { namespace android { namespace content { class ComponentCallbacks; } } }
namespace j2cpp { namespace android { namespace content { namespace res { class Configuration; } } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace app { class Application; } } }


#include <android/app/Application.hpp>
#include <android/content/ComponentCallbacks.hpp>
#include <android/content/Context.hpp>
#include <android/content/ContextWrapper.hpp>
#include <android/content/res/Configuration.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace test { namespace mock {

	class MockApplication;
	class MockApplication
		: public object<MockApplication>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		explicit MockApplication(jobject jobj)
		: object<MockApplication>(jobj)
		{
		}

		operator local_ref<android::content::ContextWrapper>() const;
		operator local_ref<android::content::ComponentCallbacks>() const;
		operator local_ref<android::content::Context>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::app::Application>() const;


		MockApplication();
		void onCreate();
		void onTerminate();
		void onConfigurationChanged(local_ref< android::content::res::Configuration >  const&);
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



android::test::mock::MockApplication::operator local_ref<android::content::ContextWrapper>() const
{
	return local_ref<android::content::ContextWrapper>(get_jobject());
}

android::test::mock::MockApplication::operator local_ref<android::content::ComponentCallbacks>() const
{
	return local_ref<android::content::ComponentCallbacks>(get_jobject());
}

android::test::mock::MockApplication::operator local_ref<android::content::Context>() const
{
	return local_ref<android::content::Context>(get_jobject());
}

android::test::mock::MockApplication::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::test::mock::MockApplication::operator local_ref<android::app::Application>() const
{
	return local_ref<android::app::Application>(get_jobject());
}


android::test::mock::MockApplication::MockApplication()
: object<android::test::mock::MockApplication>(
	call_new_object<
		android::test::mock::MockApplication::J2CPP_CLASS_NAME,
		android::test::mock::MockApplication::J2CPP_METHOD_NAME(0),
		android::test::mock::MockApplication::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


void android::test::mock::MockApplication::onCreate()
{
	return call_method<
		android::test::mock::MockApplication::J2CPP_CLASS_NAME,
		android::test::mock::MockApplication::J2CPP_METHOD_NAME(1),
		android::test::mock::MockApplication::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject());
}

void android::test::mock::MockApplication::onTerminate()
{
	return call_method<
		android::test::mock::MockApplication::J2CPP_CLASS_NAME,
		android::test::mock::MockApplication::J2CPP_METHOD_NAME(2),
		android::test::mock::MockApplication::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject());
}

void android::test::mock::MockApplication::onConfigurationChanged(local_ref< android::content::res::Configuration > const &a0)
{
	return call_method<
		android::test::mock::MockApplication::J2CPP_CLASS_NAME,
		android::test::mock::MockApplication::J2CPP_METHOD_NAME(3),
		android::test::mock::MockApplication::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::test::mock::MockApplication,"android/test/mock/MockApplication")
J2CPP_DEFINE_METHOD(android::test::mock::MockApplication,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::test::mock::MockApplication,1,"onCreate","()V")
J2CPP_DEFINE_METHOD(android::test::mock::MockApplication,2,"onTerminate","()V")
J2CPP_DEFINE_METHOD(android::test::mock::MockApplication,3,"onConfigurationChanged","(Landroid/content/res/Configuration;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEST_MOCK_MOCKAPPLICATION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION