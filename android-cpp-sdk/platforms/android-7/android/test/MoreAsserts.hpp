/*================================================================================
  code generated by: java2cpp
  class: android.test.MoreAsserts
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEST_MOREASSERTS_HPP_DECL
#define J2CPP_ANDROID_TEST_MOREASSERTS_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Iterable; } } }
namespace j2cpp { namespace java { namespace lang { class Class; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace util { class Set; } } }
namespace j2cpp { namespace java { namespace util { namespace regex { class MatchResult; } } } }
namespace j2cpp { namespace java { namespace util { class Map; } } }


#include <java/lang/Class.hpp>
#include <java/lang/Iterable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/Map.hpp>
#include <java/util/Set.hpp>
#include <java/util/regex/MatchResult.hpp>


namespace j2cpp {

namespace android { namespace test {

	class MoreAsserts;
	class MoreAsserts
		: public cpp_object<MoreAsserts>
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
		J2CPP_DECLARE_METHOD(35)
		J2CPP_DECLARE_METHOD(36)

		explicit MoreAsserts(jobject jobj)
		: cpp_object<MoreAsserts>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		static void assertAssignableFrom(local_ref< java::lang::Class > const&, local_ref< java::lang::Object > const&);
		static void assertAssignableFrom(local_ref< java::lang::Class > const&, local_ref< java::lang::Class > const&);
		static void assertNotEqual(local_ref< java::lang::String > const&, local_ref< java::lang::Object > const&, local_ref< java::lang::Object > const&);
		static void assertNotEqual(local_ref< java::lang::Object > const&, local_ref< java::lang::Object > const&);
		static void assertEquals(local_ref< java::lang::String > const&, local_ref< cpp_byte_array<1> > const&, local_ref< cpp_byte_array<1> > const&);
		static void assertEquals(local_ref< cpp_byte_array<1> > const&, local_ref< cpp_byte_array<1> > const&);
		static void assertEquals(local_ref< java::lang::String > const&, local_ref< cpp_int_array<1> > const&, local_ref< cpp_int_array<1> > const&);
		static void assertEquals(local_ref< cpp_int_array<1> > const&, local_ref< cpp_int_array<1> > const&);
		static void assertEquals(local_ref< java::lang::String > const&, local_ref< cpp_double_array<1> > const&, local_ref< cpp_double_array<1> > const&);
		static void assertEquals(local_ref< cpp_double_array<1> > const&, local_ref< cpp_double_array<1> > const&);
		static void assertEquals(local_ref< java::lang::String > const&, local_ref< cpp_object_array<java::lang::Object, 1> > const&, local_ref< cpp_object_array<java::lang::Object, 1> > const&);
		static void assertEquals(local_ref< cpp_object_array<java::lang::Object, 1> > const&, local_ref< cpp_object_array<java::lang::Object, 1> > const&);
		static void assertEquals(local_ref< java::lang::String > const&, local_ref< java::util::Set > const&, local_ref< java::util::Set > const&);
		static void assertEquals(local_ref< java::util::Set > const&, local_ref< java::util::Set > const&);
		static local_ref< java::util::regex::MatchResult > assertMatchesRegex(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		static local_ref< java::util::regex::MatchResult > assertMatchesRegex(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		static local_ref< java::util::regex::MatchResult > assertContainsRegex(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		static local_ref< java::util::regex::MatchResult > assertContainsRegex(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		static void assertNotMatchesRegex(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		static void assertNotMatchesRegex(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		static void assertNotContainsRegex(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		static void assertNotContainsRegex(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		static void assertContentsInOrder(local_ref< java::lang::String > const&, local_ref< java::lang::Iterable > const&, local_ref< cpp_object_array<java::lang::Object, 1> > const&);
		static void assertContentsInOrder(local_ref< java::lang::Iterable > const&, local_ref< cpp_object_array<java::lang::Object, 1> > const&);
		static void assertContentsInAnyOrder(local_ref< java::lang::String > const&, local_ref< java::lang::Iterable > const&, local_ref< cpp_object_array<java::lang::Object, 1> > const&);
		static void assertContentsInAnyOrder(local_ref< java::lang::Iterable > const&, local_ref< cpp_object_array<java::lang::Object, 1> > const&);
		static void assertEmpty(local_ref< java::lang::String > const&, local_ref< java::lang::Iterable > const&);
		static void assertEmpty(local_ref< java::lang::Iterable > const&);
		static void assertEmpty(local_ref< java::lang::String > const&, local_ref< java::util::Map > const&);
		static void assertEmpty(local_ref< java::util::Map > const&);
		static void assertNotEmpty(local_ref< java::lang::String > const&, local_ref< java::lang::Iterable > const&);
		static void assertNotEmpty(local_ref< java::lang::Iterable > const&);
		static void assertNotEmpty(local_ref< java::lang::String > const&, local_ref< java::util::Map > const&);
		static void assertNotEmpty(local_ref< java::util::Map > const&);
		static void checkEqualsAndHashCodeMethods(local_ref< java::lang::String > const&, local_ref< java::lang::Object > const&, local_ref< java::lang::Object > const&, cpp_boolean const&);
		static void checkEqualsAndHashCodeMethods(local_ref< java::lang::Object > const&, local_ref< java::lang::Object > const&, cpp_boolean const&);
	}; //class MoreAsserts

} //namespace test
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEST_MOREASSERTS_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEST_MOREASSERTS_HPP_IMPL
#define J2CPP_ANDROID_TEST_MOREASSERTS_HPP_IMPL

namespace j2cpp {



android::test::MoreAsserts::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}


void android::test::MoreAsserts::assertAssignableFrom(local_ref< java::lang::Class > const &a0, local_ref< java::lang::Object > const &a1)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::test::MoreAsserts::assertAssignableFrom(local_ref< java::lang::Class > const &a0, local_ref< java::lang::Class > const &a1)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::test::MoreAsserts::assertNotEqual(local_ref< java::lang::String > const &a0, local_ref< java::lang::Object > const &a1, local_ref< java::lang::Object > const &a2)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void android::test::MoreAsserts::assertNotEqual(local_ref< java::lang::Object > const &a0, local_ref< java::lang::Object > const &a1)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::test::MoreAsserts::assertEquals(local_ref< java::lang::String > const &a0, local_ref< cpp_byte_array<1> > const &a1, local_ref< cpp_byte_array<1> > const &a2)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void android::test::MoreAsserts::assertEquals(local_ref< cpp_byte_array<1> > const &a0, local_ref< cpp_byte_array<1> > const &a1)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::test::MoreAsserts::assertEquals(local_ref< java::lang::String > const &a0, local_ref< cpp_int_array<1> > const &a1, local_ref< cpp_int_array<1> > const &a2)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void android::test::MoreAsserts::assertEquals(local_ref< cpp_int_array<1> > const &a0, local_ref< cpp_int_array<1> > const &a1)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::test::MoreAsserts::assertEquals(local_ref< java::lang::String > const &a0, local_ref< cpp_double_array<1> > const &a1, local_ref< cpp_double_array<1> > const &a2)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void android::test::MoreAsserts::assertEquals(local_ref< cpp_double_array<1> > const &a0, local_ref< cpp_double_array<1> > const &a1)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::test::MoreAsserts::assertEquals(local_ref< java::lang::String > const &a0, local_ref< cpp_object_array<java::lang::Object, 1> > const &a1, local_ref< cpp_object_array<java::lang::Object, 1> > const &a2)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void android::test::MoreAsserts::assertEquals(local_ref< cpp_object_array<java::lang::Object, 1> > const &a0, local_ref< cpp_object_array<java::lang::Object, 1> > const &a1)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::test::MoreAsserts::assertEquals(local_ref< java::lang::String > const &a0, local_ref< java::util::Set > const &a1, local_ref< java::util::Set > const &a2)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void android::test::MoreAsserts::assertEquals(local_ref< java::util::Set > const &a0, local_ref< java::util::Set > const &a1)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::util::regex::MatchResult > android::test::MoreAsserts::assertMatchesRegex(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::String > const &a2)
{
	return local_ref< java::util::regex::MatchResult >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< java::util::regex::MatchResult > android::test::MoreAsserts::assertMatchesRegex(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return local_ref< java::util::regex::MatchResult >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::util::regex::MatchResult > android::test::MoreAsserts::assertContainsRegex(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::String > const &a2)
{
	return local_ref< java::util::regex::MatchResult >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< java::util::regex::MatchResult > android::test::MoreAsserts::assertContainsRegex(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return local_ref< java::util::regex::MatchResult >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::test::MoreAsserts::assertNotMatchesRegex(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::String > const &a2)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void android::test::MoreAsserts::assertNotMatchesRegex(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::test::MoreAsserts::assertNotContainsRegex(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::String > const &a2)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(21), J2CPP_METHOD_SIGNATURE(21), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void android::test::MoreAsserts::assertNotContainsRegex(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(22), J2CPP_METHOD_SIGNATURE(22), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::test::MoreAsserts::assertContentsInOrder(local_ref< java::lang::String > const &a0, local_ref< java::lang::Iterable > const &a1, local_ref< cpp_object_array<java::lang::Object, 1> > const &a2)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(23), J2CPP_METHOD_SIGNATURE(23), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void android::test::MoreAsserts::assertContentsInOrder(local_ref< java::lang::Iterable > const &a0, local_ref< cpp_object_array<java::lang::Object, 1> > const &a1)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(24), J2CPP_METHOD_SIGNATURE(24), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::test::MoreAsserts::assertContentsInAnyOrder(local_ref< java::lang::String > const &a0, local_ref< java::lang::Iterable > const &a1, local_ref< cpp_object_array<java::lang::Object, 1> > const &a2)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(25), J2CPP_METHOD_SIGNATURE(25), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void android::test::MoreAsserts::assertContentsInAnyOrder(local_ref< java::lang::Iterable > const &a0, local_ref< cpp_object_array<java::lang::Object, 1> > const &a1)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(26), J2CPP_METHOD_SIGNATURE(26), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::test::MoreAsserts::assertEmpty(local_ref< java::lang::String > const &a0, local_ref< java::lang::Iterable > const &a1)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(27), J2CPP_METHOD_SIGNATURE(27), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::test::MoreAsserts::assertEmpty(local_ref< java::lang::Iterable > const &a0)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(28), J2CPP_METHOD_SIGNATURE(28), true>(),
			a0.get_jtype()
		)
	);
}

void android::test::MoreAsserts::assertEmpty(local_ref< java::lang::String > const &a0, local_ref< java::util::Map > const &a1)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(29), J2CPP_METHOD_SIGNATURE(29), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::test::MoreAsserts::assertEmpty(local_ref< java::util::Map > const &a0)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(30), J2CPP_METHOD_SIGNATURE(30), true>(),
			a0.get_jtype()
		)
	);
}

void android::test::MoreAsserts::assertNotEmpty(local_ref< java::lang::String > const &a0, local_ref< java::lang::Iterable > const &a1)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(31), J2CPP_METHOD_SIGNATURE(31), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::test::MoreAsserts::assertNotEmpty(local_ref< java::lang::Iterable > const &a0)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(32), J2CPP_METHOD_SIGNATURE(32), true>(),
			a0.get_jtype()
		)
	);
}

void android::test::MoreAsserts::assertNotEmpty(local_ref< java::lang::String > const &a0, local_ref< java::util::Map > const &a1)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(33), J2CPP_METHOD_SIGNATURE(33), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::test::MoreAsserts::assertNotEmpty(local_ref< java::util::Map > const &a0)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(34), J2CPP_METHOD_SIGNATURE(34), true>(),
			a0.get_jtype()
		)
	);
}

void android::test::MoreAsserts::checkEqualsAndHashCodeMethods(local_ref< java::lang::String > const &a0, local_ref< java::lang::Object > const &a1, local_ref< java::lang::Object > const &a2, cpp_boolean const &a3)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(35), J2CPP_METHOD_SIGNATURE(35), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

void android::test::MoreAsserts::checkEqualsAndHashCodeMethods(local_ref< java::lang::Object > const &a0, local_ref< java::lang::Object > const &a1, cpp_boolean const &a2)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(36), J2CPP_METHOD_SIGNATURE(36), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::test::MoreAsserts,"android/test/MoreAsserts")
J2CPP_DEFINE_METHOD(android::test::MoreAsserts,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::test::MoreAsserts,1,"assertAssignableFrom","(Ljava/lang/Class;Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(android::test::MoreAsserts,2,"assertAssignableFrom","(Ljava/lang/Class;Ljava/lang/Class;)V")
J2CPP_DEFINE_METHOD(android::test::MoreAsserts,3,"assertNotEqual","(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(android::test::MoreAsserts,4,"assertNotEqual","(Ljava/lang/Object;Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(android::test::MoreAsserts,5,"assertEquals","(Ljava/lang/String;[B[B)V")
J2CPP_DEFINE_METHOD(android::test::MoreAsserts,6,"assertEquals","([B[B)V")
J2CPP_DEFINE_METHOD(android::test::MoreAsserts,7,"assertEquals","(Ljava/lang/String;[I[I)V")
J2CPP_DEFINE_METHOD(android::test::MoreAsserts,8,"assertEquals","([I[I)V")
J2CPP_DEFINE_METHOD(android::test::MoreAsserts,9,"assertEquals","(Ljava/lang/String;[D[D)V")
J2CPP_DEFINE_METHOD(android::test::MoreAsserts,10,"assertEquals","([D[D)V")
J2CPP_DEFINE_METHOD(android::test::MoreAsserts,11,"assertEquals","(Ljava/lang/String;[java.lang.Object[java.lang.Object)V")
J2CPP_DEFINE_METHOD(android::test::MoreAsserts,12,"assertEquals","([java.lang.Object[java.lang.Object)V")
J2CPP_DEFINE_METHOD(android::test::MoreAsserts,13,"assertEquals","(Ljava/lang/String;Ljava/util/Set;Ljava/util/Set;)V")
J2CPP_DEFINE_METHOD(android::test::MoreAsserts,14,"assertEquals","(Ljava/util/Set;Ljava/util/Set;)V")
J2CPP_DEFINE_METHOD(android::test::MoreAsserts,15,"assertMatchesRegex","(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/util/regex/MatchResult;")
J2CPP_DEFINE_METHOD(android::test::MoreAsserts,16,"assertMatchesRegex","(Ljava/lang/String;Ljava/lang/String;)Ljava/util/regex/MatchResult;")
J2CPP_DEFINE_METHOD(android::test::MoreAsserts,17,"assertContainsRegex","(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/util/regex/MatchResult;")
J2CPP_DEFINE_METHOD(android::test::MoreAsserts,18,"assertContainsRegex","(Ljava/lang/String;Ljava/lang/String;)Ljava/util/regex/MatchResult;")
J2CPP_DEFINE_METHOD(android::test::MoreAsserts,19,"assertNotMatchesRegex","(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::test::MoreAsserts,20,"assertNotMatchesRegex","(Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::test::MoreAsserts,21,"assertNotContainsRegex","(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::test::MoreAsserts,22,"assertNotContainsRegex","(Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::test::MoreAsserts,23,"assertContentsInOrder","(Ljava/lang/String;Ljava/lang/Iterable;[java.lang.Object)V")
J2CPP_DEFINE_METHOD(android::test::MoreAsserts,24,"assertContentsInOrder","(Ljava/lang/Iterable;[java.lang.Object)V")
J2CPP_DEFINE_METHOD(android::test::MoreAsserts,25,"assertContentsInAnyOrder","(Ljava/lang/String;Ljava/lang/Iterable;[java.lang.Object)V")
J2CPP_DEFINE_METHOD(android::test::MoreAsserts,26,"assertContentsInAnyOrder","(Ljava/lang/Iterable;[java.lang.Object)V")
J2CPP_DEFINE_METHOD(android::test::MoreAsserts,27,"assertEmpty","(Ljava/lang/String;Ljava/lang/Iterable;)V")
J2CPP_DEFINE_METHOD(android::test::MoreAsserts,28,"assertEmpty","(Ljava/lang/Iterable;)V")
J2CPP_DEFINE_METHOD(android::test::MoreAsserts,29,"assertEmpty","(Ljava/lang/String;Ljava/util/Map;)V")
J2CPP_DEFINE_METHOD(android::test::MoreAsserts,30,"assertEmpty","(Ljava/util/Map;)V")
J2CPP_DEFINE_METHOD(android::test::MoreAsserts,31,"assertNotEmpty","(Ljava/lang/String;Ljava/lang/Iterable;)V")
J2CPP_DEFINE_METHOD(android::test::MoreAsserts,32,"assertNotEmpty","(Ljava/lang/Iterable;)V")
J2CPP_DEFINE_METHOD(android::test::MoreAsserts,33,"assertNotEmpty","(Ljava/lang/String;Ljava/util/Map;)V")
J2CPP_DEFINE_METHOD(android::test::MoreAsserts,34,"assertNotEmpty","(Ljava/util/Map;)V")
J2CPP_DEFINE_METHOD(android::test::MoreAsserts,35,"checkEqualsAndHashCodeMethods","(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;Z)V")
J2CPP_DEFINE_METHOD(android::test::MoreAsserts,36,"checkEqualsAndHashCodeMethods","(Ljava/lang/Object;Ljava/lang/Object;Z)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEST_MOREASSERTS_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
