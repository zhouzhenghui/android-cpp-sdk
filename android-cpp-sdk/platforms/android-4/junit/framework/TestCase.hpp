/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: junit.framework.TestCase
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JUNIT_FRAMEWORK_TESTCASE_HPP_DECL
#define J2CPP_JUNIT_FRAMEWORK_TESTCASE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace junit { namespace framework { class Test; } } }
namespace j2cpp { namespace junit { namespace framework { class Assert; } } }
namespace j2cpp { namespace junit { namespace framework { class TestResult; } } }


#include <java/lang/String.hpp>
#include <junit/framework/Assert.hpp>
#include <junit/framework/Test.hpp>
#include <junit/framework/TestResult.hpp>


namespace j2cpp {

namespace junit { namespace framework {

	class TestCase;
	class TestCase
		: public object<TestCase>
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
		J2CPP_DECLARE_METHOD(12)

		explicit TestCase(jobject jobj)
		: object<TestCase>(jobj)
		{
		}

		operator local_ref<junit::framework::Assert>() const;
		operator local_ref<junit::framework::Test>() const;


		TestCase();
		TestCase(local_ref< java::lang::String > const&);
		jint countTestCases();
		local_ref< junit::framework::TestResult > run();
		void run(local_ref< junit::framework::TestResult >  const&);
		void runBare();
		local_ref< java::lang::String > toString();
		local_ref< java::lang::String > getName();
		void setName(local_ref< java::lang::String >  const&);
	}; //class TestCase

} //namespace framework
} //namespace junit

} //namespace j2cpp

#endif //J2CPP_JUNIT_FRAMEWORK_TESTCASE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JUNIT_FRAMEWORK_TESTCASE_HPP_IMPL
#define J2CPP_JUNIT_FRAMEWORK_TESTCASE_HPP_IMPL

namespace j2cpp {



junit::framework::TestCase::operator local_ref<junit::framework::Assert>() const
{
	return local_ref<junit::framework::Assert>(get_jobject());
}

junit::framework::TestCase::operator local_ref<junit::framework::Test>() const
{
	return local_ref<junit::framework::Test>(get_jobject());
}


junit::framework::TestCase::TestCase()
: object<junit::framework::TestCase>(
	call_new_object<
		junit::framework::TestCase::J2CPP_CLASS_NAME,
		junit::framework::TestCase::J2CPP_METHOD_NAME(0),
		junit::framework::TestCase::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}



junit::framework::TestCase::TestCase(local_ref< java::lang::String > const &a0)
: object<junit::framework::TestCase>(
	call_new_object<
		junit::framework::TestCase::J2CPP_CLASS_NAME,
		junit::framework::TestCase::J2CPP_METHOD_NAME(1),
		junit::framework::TestCase::J2CPP_METHOD_SIGNATURE(1)>
	(a0)
)
{
}


jint junit::framework::TestCase::countTestCases()
{
	return call_method<
		junit::framework::TestCase::J2CPP_CLASS_NAME,
		junit::framework::TestCase::J2CPP_METHOD_NAME(2),
		junit::framework::TestCase::J2CPP_METHOD_SIGNATURE(2), 
		jint >
	(get_jobject());
}


local_ref< junit::framework::TestResult > junit::framework::TestCase::run()
{
	return call_method<
		junit::framework::TestCase::J2CPP_CLASS_NAME,
		junit::framework::TestCase::J2CPP_METHOD_NAME(4),
		junit::framework::TestCase::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< junit::framework::TestResult > >
	(get_jobject());
}

void junit::framework::TestCase::run(local_ref< junit::framework::TestResult > const &a0)
{
	return call_method<
		junit::framework::TestCase::J2CPP_CLASS_NAME,
		junit::framework::TestCase::J2CPP_METHOD_NAME(5),
		junit::framework::TestCase::J2CPP_METHOD_SIGNATURE(5), 
		void >
	(get_jobject(), a0);
}

void junit::framework::TestCase::runBare()
{
	return call_method<
		junit::framework::TestCase::J2CPP_CLASS_NAME,
		junit::framework::TestCase::J2CPP_METHOD_NAME(6),
		junit::framework::TestCase::J2CPP_METHOD_SIGNATURE(6), 
		void >
	(get_jobject());
}




local_ref< java::lang::String > junit::framework::TestCase::toString()
{
	return call_method<
		junit::framework::TestCase::J2CPP_CLASS_NAME,
		junit::framework::TestCase::J2CPP_METHOD_NAME(10),
		junit::framework::TestCase::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< java::lang::String > >
	(get_jobject());
}

local_ref< java::lang::String > junit::framework::TestCase::getName()
{
	return call_method<
		junit::framework::TestCase::J2CPP_CLASS_NAME,
		junit::framework::TestCase::J2CPP_METHOD_NAME(11),
		junit::framework::TestCase::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< java::lang::String > >
	(get_jobject());
}

void junit::framework::TestCase::setName(local_ref< java::lang::String > const &a0)
{
	return call_method<
		junit::framework::TestCase::J2CPP_CLASS_NAME,
		junit::framework::TestCase::J2CPP_METHOD_NAME(12),
		junit::framework::TestCase::J2CPP_METHOD_SIGNATURE(12), 
		void >
	(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(junit::framework::TestCase,"junit/framework/TestCase")
J2CPP_DEFINE_METHOD(junit::framework::TestCase,0,"<init>","()V")
J2CPP_DEFINE_METHOD(junit::framework::TestCase,1,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(junit::framework::TestCase,2,"countTestCases","()I")
J2CPP_DEFINE_METHOD(junit::framework::TestCase,3,"createResult","()Ljunit/framework/TestResult;")
J2CPP_DEFINE_METHOD(junit::framework::TestCase,4,"run","()Ljunit/framework/TestResult;")
J2CPP_DEFINE_METHOD(junit::framework::TestCase,5,"run","(Ljunit/framework/TestResult;)V")
J2CPP_DEFINE_METHOD(junit::framework::TestCase,6,"runBare","()V")
J2CPP_DEFINE_METHOD(junit::framework::TestCase,7,"runTest","()V")
J2CPP_DEFINE_METHOD(junit::framework::TestCase,8,"setUp","()V")
J2CPP_DEFINE_METHOD(junit::framework::TestCase,9,"tearDown","()V")
J2CPP_DEFINE_METHOD(junit::framework::TestCase,10,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(junit::framework::TestCase,11,"getName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(junit::framework::TestCase,12,"setName","(Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_JUNIT_FRAMEWORK_TESTCASE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
