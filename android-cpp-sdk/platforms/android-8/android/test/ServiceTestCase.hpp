/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.test.ServiceTestCase
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEST_SERVICETESTCASE_HPP_DECL
#define J2CPP_ANDROID_TEST_SERVICETESTCASE_HPP_DECL


namespace j2cpp { namespace android { namespace app { class Service; } } }
namespace j2cpp { namespace android { namespace app { class Application; } } }
namespace j2cpp { namespace android { namespace test { class AndroidTestCase; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace java { namespace lang { class Class; } } }


#include <android/app/Application.hpp>
#include <android/app/Service.hpp>
#include <android/content/Context.hpp>
#include <android/test/AndroidTestCase.hpp>
#include <java/lang/Class.hpp>


namespace j2cpp {

namespace android { namespace test {

	class ServiceTestCase;
	class ServiceTestCase
		: public object<ServiceTestCase>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_METHOD(6)
		J2CPP_DECLARE_METHOD(7)
		J2CPP_DECLARE_METHOD(8)
		J2CPP_DECLARE_METHOD(9)
		J2CPP_DECLARE_METHOD(10)
		J2CPP_DECLARE_METHOD(11)

		explicit ServiceTestCase(jobject jobj)
		: object<ServiceTestCase>(jobj)
		{
		}

		operator local_ref<android::test::AndroidTestCase>() const;


		ServiceTestCase(local_ref< java::lang::Class > const&);
		local_ref< android::app::Service > getService();
		void setApplication(local_ref< android::app::Application >  const&);
		local_ref< android::app::Application > getApplication();
		local_ref< android::content::Context > getSystemContext();
		void testServiceTestCaseSetUpProperly();
	}; //class ServiceTestCase

} //namespace test
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEST_SERVICETESTCASE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEST_SERVICETESTCASE_HPP_IMPL
#define J2CPP_ANDROID_TEST_SERVICETESTCASE_HPP_IMPL

namespace j2cpp {



android::test::ServiceTestCase::operator local_ref<android::test::AndroidTestCase>() const
{
	return local_ref<android::test::AndroidTestCase>(get_jobject());
}


android::test::ServiceTestCase::ServiceTestCase(local_ref< java::lang::Class > const &a0)
: object<android::test::ServiceTestCase>(
	call_new_object<
		android::test::ServiceTestCase::J2CPP_CLASS_NAME,
		android::test::ServiceTestCase::J2CPP_METHOD_NAME(0),
		android::test::ServiceTestCase::J2CPP_METHOD_SIGNATURE(0)>
	(a0)
)
{
}


local_ref< android::app::Service > android::test::ServiceTestCase::getService()
{
	return call_method<
		android::test::ServiceTestCase::J2CPP_CLASS_NAME,
		android::test::ServiceTestCase::J2CPP_METHOD_NAME(1),
		android::test::ServiceTestCase::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< android::app::Service > >
	(get_jobject());
}







void android::test::ServiceTestCase::setApplication(local_ref< android::app::Application > const &a0)
{
	return call_method<
		android::test::ServiceTestCase::J2CPP_CLASS_NAME,
		android::test::ServiceTestCase::J2CPP_METHOD_NAME(8),
		android::test::ServiceTestCase::J2CPP_METHOD_SIGNATURE(8), 
		void >
	(get_jobject(), a0);
}

local_ref< android::app::Application > android::test::ServiceTestCase::getApplication()
{
	return call_method<
		android::test::ServiceTestCase::J2CPP_CLASS_NAME,
		android::test::ServiceTestCase::J2CPP_METHOD_NAME(9),
		android::test::ServiceTestCase::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< android::app::Application > >
	(get_jobject());
}

local_ref< android::content::Context > android::test::ServiceTestCase::getSystemContext()
{
	return call_method<
		android::test::ServiceTestCase::J2CPP_CLASS_NAME,
		android::test::ServiceTestCase::J2CPP_METHOD_NAME(10),
		android::test::ServiceTestCase::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< android::content::Context > >
	(get_jobject());
}

void android::test::ServiceTestCase::testServiceTestCaseSetUpProperly()
{
	return call_method<
		android::test::ServiceTestCase::J2CPP_CLASS_NAME,
		android::test::ServiceTestCase::J2CPP_METHOD_NAME(11),
		android::test::ServiceTestCase::J2CPP_METHOD_SIGNATURE(11), 
		void >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(android::test::ServiceTestCase,"android/test/ServiceTestCase")
J2CPP_DEFINE_METHOD(android::test::ServiceTestCase,0,"<init>","(Ljava/lang/Class;)V")
J2CPP_DEFINE_METHOD(android::test::ServiceTestCase,1,"getService","()Landroid/app/Service;")
J2CPP_DEFINE_METHOD(android::test::ServiceTestCase,2,"setUp","()V")
J2CPP_DEFINE_METHOD(android::test::ServiceTestCase,3,"setupService","()V")
J2CPP_DEFINE_METHOD(android::test::ServiceTestCase,4,"startService","(Landroid/content/Intent;)V")
J2CPP_DEFINE_METHOD(android::test::ServiceTestCase,5,"bindService","(Landroid/content/Intent;)Landroid/os/IBinder;")
J2CPP_DEFINE_METHOD(android::test::ServiceTestCase,6,"shutdownService","()V")
J2CPP_DEFINE_METHOD(android::test::ServiceTestCase,7,"tearDown","()V")
J2CPP_DEFINE_METHOD(android::test::ServiceTestCase,8,"setApplication","(Landroid/app/Application;)V")
J2CPP_DEFINE_METHOD(android::test::ServiceTestCase,9,"getApplication","()Landroid/app/Application;")
J2CPP_DEFINE_METHOD(android::test::ServiceTestCase,10,"getSystemContext","()Landroid/content/Context;")
J2CPP_DEFINE_METHOD(android::test::ServiceTestCase,11,"testServiceTestCaseSetUpProperly","()V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEST_SERVICETESTCASE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
