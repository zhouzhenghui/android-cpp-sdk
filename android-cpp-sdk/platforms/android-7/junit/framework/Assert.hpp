/*================================================================================
  code generated by: java2cpp
  class: junit.framework.Assert
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JUNIT_FRAMEWORK_ASSERT_HPP_DECL
#define J2CPP_JUNIT_FRAMEWORK_ASSERT_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace junit { namespace framework {

	class Assert;
	class Assert
		: public cpp_object<Assert>
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
		J2CPP_DECLARE_METHOD(13)
		J2CPP_DECLARE_METHOD(14)
		J2CPP_DECLARE_METHOD(15)
		J2CPP_DECLARE_METHOD(16)
		J2CPP_DECLARE_METHOD(17)
		J2CPP_DECLARE_METHOD(18)
		J2CPP_DECLARE_METHOD(19)
		J2CPP_DECLARE_METHOD(20)
		J2CPP_DECLARE_METHOD(21)
		J2CPP_DECLARE_METHOD(22)
		J2CPP_DECLARE_METHOD(23)
		J2CPP_DECLARE_METHOD(24)
		J2CPP_DECLARE_METHOD(25)
		J2CPP_DECLARE_METHOD(26)
		J2CPP_DECLARE_METHOD(27)
		J2CPP_DECLARE_METHOD(28)
		J2CPP_DECLARE_METHOD(29)
		J2CPP_DECLARE_METHOD(30)
		J2CPP_DECLARE_METHOD(31)
		J2CPP_DECLARE_METHOD(32)
		J2CPP_DECLARE_METHOD(33)
		J2CPP_DECLARE_METHOD(34)

		explicit Assert(jobject jobj)
		: cpp_object<Assert>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		static void assertTrue(local_ref< java::lang::String > const&, cpp_boolean const&);
		static void assertTrue(cpp_boolean const&);
		static void assertFalse(local_ref< java::lang::String > const&, cpp_boolean const&);
		static void assertFalse(cpp_boolean const&);
		static void fail(local_ref< java::lang::String > const&);
		static void fail();
		static void assertEquals(local_ref< java::lang::String > const&, local_ref< java::lang::Object > const&, local_ref< java::lang::Object > const&);
		static void assertEquals(local_ref< java::lang::Object > const&, local_ref< java::lang::Object > const&);
		static void assertEquals(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		static void assertEquals(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		static void assertEquals(local_ref< java::lang::String > const&, cpp_double const&, cpp_double const&, cpp_double const&);
		static void assertEquals(cpp_double const&, cpp_double const&, cpp_double const&);
		static void assertEquals(local_ref< java::lang::String > const&, cpp_float const&, cpp_float const&, cpp_float const&);
		static void assertEquals(cpp_float const&, cpp_float const&, cpp_float const&);
		static void assertEquals(local_ref< java::lang::String > const&, cpp_long const&, cpp_long const&);
		static void assertEquals(cpp_long const&, cpp_long const&);
		static void assertEquals(local_ref< java::lang::String > const&, cpp_boolean const&, cpp_boolean const&);
		static void assertEquals(cpp_boolean const&, cpp_boolean const&);
		static void assertEquals(local_ref< java::lang::String > const&, cpp_byte const&, cpp_byte const&);
		static void assertEquals(cpp_byte const&, cpp_byte const&);
		static void assertEquals(local_ref< java::lang::String > const&, cpp_char const&, cpp_char const&);
		static void assertEquals(cpp_char const&, cpp_char const&);
		static void assertEquals(local_ref< java::lang::String > const&, cpp_short const&, cpp_short const&);
		static void assertEquals(cpp_short const&, cpp_short const&);
		static void assertEquals(local_ref< java::lang::String > const&, cpp_int const&, cpp_int const&);
		static void assertEquals(cpp_int const&, cpp_int const&);
		static void assertNotNull(local_ref< java::lang::Object > const&);
		static void assertNotNull(local_ref< java::lang::String > const&, local_ref< java::lang::Object > const&);
		static void assertNull(local_ref< java::lang::Object > const&);
		static void assertNull(local_ref< java::lang::String > const&, local_ref< java::lang::Object > const&);
		static void assertSame(local_ref< java::lang::String > const&, local_ref< java::lang::Object > const&, local_ref< java::lang::Object > const&);
		static void assertSame(local_ref< java::lang::Object > const&, local_ref< java::lang::Object > const&);
		static void assertNotSame(local_ref< java::lang::String > const&, local_ref< java::lang::Object > const&, local_ref< java::lang::Object > const&);
		static void assertNotSame(local_ref< java::lang::Object > const&, local_ref< java::lang::Object > const&);
	}; //class Assert

} //namespace framework
} //namespace junit

} //namespace j2cpp

#endif //J2CPP_JUNIT_FRAMEWORK_ASSERT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JUNIT_FRAMEWORK_ASSERT_HPP_IMPL
#define J2CPP_JUNIT_FRAMEWORK_ASSERT_HPP_IMPL

namespace j2cpp {



junit::framework::Assert::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}


void junit::framework::Assert::assertTrue(local_ref< java::lang::String > const &a0, cpp_boolean const &a1)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void junit::framework::Assert::assertTrue(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), true>(),
			a0.get_jtype()
		)
	);
}

void junit::framework::Assert::assertFalse(local_ref< java::lang::String > const &a0, cpp_boolean const &a1)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void junit::framework::Assert::assertFalse(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), true>(),
			a0.get_jtype()
		)
	);
}

void junit::framework::Assert::fail(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), true>(),
			a0.get_jtype()
		)
	);
}

void junit::framework::Assert::fail()
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), true>()
		)
	);
}

void junit::framework::Assert::assertEquals(local_ref< java::lang::String > const &a0, local_ref< java::lang::Object > const &a1, local_ref< java::lang::Object > const &a2)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void junit::framework::Assert::assertEquals(local_ref< java::lang::Object > const &a0, local_ref< java::lang::Object > const &a1)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void junit::framework::Assert::assertEquals(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::String > const &a2)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void junit::framework::Assert::assertEquals(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void junit::framework::Assert::assertEquals(local_ref< java::lang::String > const &a0, cpp_double const &a1, cpp_double const &a2, cpp_double const &a3)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

void junit::framework::Assert::assertEquals(cpp_double const &a0, cpp_double const &a1, cpp_double const &a2)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void junit::framework::Assert::assertEquals(local_ref< java::lang::String > const &a0, cpp_float const &a1, cpp_float const &a2, cpp_float const &a3)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

void junit::framework::Assert::assertEquals(cpp_float const &a0, cpp_float const &a1, cpp_float const &a2)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void junit::framework::Assert::assertEquals(local_ref< java::lang::String > const &a0, cpp_long const &a1, cpp_long const &a2)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void junit::framework::Assert::assertEquals(cpp_long const &a0, cpp_long const &a1)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void junit::framework::Assert::assertEquals(local_ref< java::lang::String > const &a0, cpp_boolean const &a1, cpp_boolean const &a2)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void junit::framework::Assert::assertEquals(cpp_boolean const &a0, cpp_boolean const &a1)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void junit::framework::Assert::assertEquals(local_ref< java::lang::String > const &a0, cpp_byte const &a1, cpp_byte const &a2)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void junit::framework::Assert::assertEquals(cpp_byte const &a0, cpp_byte const &a1)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void junit::framework::Assert::assertEquals(local_ref< java::lang::String > const &a0, cpp_char const &a1, cpp_char const &a2)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(21), J2CPP_METHOD_SIGNATURE(21), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void junit::framework::Assert::assertEquals(cpp_char const &a0, cpp_char const &a1)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(22), J2CPP_METHOD_SIGNATURE(22), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void junit::framework::Assert::assertEquals(local_ref< java::lang::String > const &a0, cpp_short const &a1, cpp_short const &a2)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(23), J2CPP_METHOD_SIGNATURE(23), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void junit::framework::Assert::assertEquals(cpp_short const &a0, cpp_short const &a1)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(24), J2CPP_METHOD_SIGNATURE(24), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void junit::framework::Assert::assertEquals(local_ref< java::lang::String > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(25), J2CPP_METHOD_SIGNATURE(25), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void junit::framework::Assert::assertEquals(cpp_int const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(26), J2CPP_METHOD_SIGNATURE(26), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void junit::framework::Assert::assertNotNull(local_ref< java::lang::Object > const &a0)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(27), J2CPP_METHOD_SIGNATURE(27), true>(),
			a0.get_jtype()
		)
	);
}

void junit::framework::Assert::assertNotNull(local_ref< java::lang::String > const &a0, local_ref< java::lang::Object > const &a1)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(28), J2CPP_METHOD_SIGNATURE(28), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void junit::framework::Assert::assertNull(local_ref< java::lang::Object > const &a0)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(29), J2CPP_METHOD_SIGNATURE(29), true>(),
			a0.get_jtype()
		)
	);
}

void junit::framework::Assert::assertNull(local_ref< java::lang::String > const &a0, local_ref< java::lang::Object > const &a1)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(30), J2CPP_METHOD_SIGNATURE(30), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void junit::framework::Assert::assertSame(local_ref< java::lang::String > const &a0, local_ref< java::lang::Object > const &a1, local_ref< java::lang::Object > const &a2)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(31), J2CPP_METHOD_SIGNATURE(31), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void junit::framework::Assert::assertSame(local_ref< java::lang::Object > const &a0, local_ref< java::lang::Object > const &a1)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(32), J2CPP_METHOD_SIGNATURE(32), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void junit::framework::Assert::assertNotSame(local_ref< java::lang::String > const &a0, local_ref< java::lang::Object > const &a1, local_ref< java::lang::Object > const &a2)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(33), J2CPP_METHOD_SIGNATURE(33), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void junit::framework::Assert::assertNotSame(local_ref< java::lang::Object > const &a0, local_ref< java::lang::Object > const &a1)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(34), J2CPP_METHOD_SIGNATURE(34), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(junit::framework::Assert,"junit/framework/Assert")
J2CPP_DEFINE_METHOD(junit::framework::Assert,0,"<init>","()V")
J2CPP_DEFINE_METHOD(junit::framework::Assert,1,"assertTrue","(Ljava/lang/String;Z)V")
J2CPP_DEFINE_METHOD(junit::framework::Assert,2,"assertTrue","(Z)V")
J2CPP_DEFINE_METHOD(junit::framework::Assert,3,"assertFalse","(Ljava/lang/String;Z)V")
J2CPP_DEFINE_METHOD(junit::framework::Assert,4,"assertFalse","(Z)V")
J2CPP_DEFINE_METHOD(junit::framework::Assert,5,"fail","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(junit::framework::Assert,6,"fail","()V")
J2CPP_DEFINE_METHOD(junit::framework::Assert,7,"assertEquals","(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(junit::framework::Assert,8,"assertEquals","(Ljava/lang/Object;Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(junit::framework::Assert,9,"assertEquals","(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(junit::framework::Assert,10,"assertEquals","(Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(junit::framework::Assert,11,"assertEquals","(Ljava/lang/String;DDD)V")
J2CPP_DEFINE_METHOD(junit::framework::Assert,12,"assertEquals","(DDD)V")
J2CPP_DEFINE_METHOD(junit::framework::Assert,13,"assertEquals","(Ljava/lang/String;FFF)V")
J2CPP_DEFINE_METHOD(junit::framework::Assert,14,"assertEquals","(FFF)V")
J2CPP_DEFINE_METHOD(junit::framework::Assert,15,"assertEquals","(Ljava/lang/String;JJ)V")
J2CPP_DEFINE_METHOD(junit::framework::Assert,16,"assertEquals","(JJ)V")
J2CPP_DEFINE_METHOD(junit::framework::Assert,17,"assertEquals","(Ljava/lang/String;ZZ)V")
J2CPP_DEFINE_METHOD(junit::framework::Assert,18,"assertEquals","(ZZ)V")
J2CPP_DEFINE_METHOD(junit::framework::Assert,19,"assertEquals","(Ljava/lang/String;BB)V")
J2CPP_DEFINE_METHOD(junit::framework::Assert,20,"assertEquals","(BB)V")
J2CPP_DEFINE_METHOD(junit::framework::Assert,21,"assertEquals","(Ljava/lang/String;CC)V")
J2CPP_DEFINE_METHOD(junit::framework::Assert,22,"assertEquals","(CC)V")
J2CPP_DEFINE_METHOD(junit::framework::Assert,23,"assertEquals","(Ljava/lang/String;SS)V")
J2CPP_DEFINE_METHOD(junit::framework::Assert,24,"assertEquals","(SS)V")
J2CPP_DEFINE_METHOD(junit::framework::Assert,25,"assertEquals","(Ljava/lang/String;II)V")
J2CPP_DEFINE_METHOD(junit::framework::Assert,26,"assertEquals","(II)V")
J2CPP_DEFINE_METHOD(junit::framework::Assert,27,"assertNotNull","(Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(junit::framework::Assert,28,"assertNotNull","(Ljava/lang/String;Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(junit::framework::Assert,29,"assertNull","(Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(junit::framework::Assert,30,"assertNull","(Ljava/lang/String;Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(junit::framework::Assert,31,"assertSame","(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(junit::framework::Assert,32,"assertSame","(Ljava/lang/Object;Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(junit::framework::Assert,33,"assertNotSame","(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(junit::framework::Assert,34,"assertNotSame","(Ljava/lang/Object;Ljava/lang/Object;)V")

} //namespace j2cpp

#endif //J2CPP_JUNIT_FRAMEWORK_ASSERT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
