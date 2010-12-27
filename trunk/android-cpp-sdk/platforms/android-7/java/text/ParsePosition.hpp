/*================================================================================
  code generated by: java2cpp
  class: java.text.ParsePosition
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_TEXT_PARSEPOSITION_HPP_DECL
#define J2CPP_JAVA_TEXT_PARSEPOSITION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace text {

	class ParsePosition;
	class ParsePosition
		: public cpp_object<ParsePosition>
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

		explicit ParsePosition(jobject jobj)
		: cpp_object<ParsePosition>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		ParsePosition(cpp_int const&);
		cpp_boolean equals(local_ref< java::lang::Object > const&);
		cpp_int getErrorIndex();
		cpp_int getIndex();
		cpp_int hashCode();
		void setErrorIndex(cpp_int const&);
		void setIndex(cpp_int const&);
		local_ref< java::lang::String > toString();
	}; //class ParsePosition

} //namespace text
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_TEXT_PARSEPOSITION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_TEXT_PARSEPOSITION_HPP_IMPL
#define J2CPP_JAVA_TEXT_PARSEPOSITION_HPP_IMPL

namespace j2cpp {



java::text::ParsePosition::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}


java::text::ParsePosition::ParsePosition(cpp_int const &a0)
: cpp_object<java::text::ParsePosition>(
	environment::get().get_jenv()->NewObject(
		get_class<java::text::ParsePosition::J2CPP_CLASS_NAME>(),
		get_method_id<java::text::ParsePosition::J2CPP_CLASS_NAME, java::text::ParsePosition::J2CPP_METHOD_NAME(0), java::text::ParsePosition::J2CPP_METHOD_SIGNATURE(0), false>(),
		a0.get_jtype()
	)
)
{
}


cpp_boolean java::text::ParsePosition::equals(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::text::ParsePosition::getErrorIndex()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

cpp_int java::text::ParsePosition::getIndex()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

cpp_int java::text::ParsePosition::hashCode()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

void java::text::ParsePosition::setErrorIndex(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

void java::text::ParsePosition::setIndex(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > java::text::ParsePosition::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(java::text::ParsePosition,"java/text/ParsePosition")
J2CPP_DEFINE_METHOD(java::text::ParsePosition,0,"<init>","(I)V")
J2CPP_DEFINE_METHOD(java::text::ParsePosition,1,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::text::ParsePosition,2,"getErrorIndex","()I")
J2CPP_DEFINE_METHOD(java::text::ParsePosition,3,"getIndex","()I")
J2CPP_DEFINE_METHOD(java::text::ParsePosition,4,"hashCode","()I")
J2CPP_DEFINE_METHOD(java::text::ParsePosition,5,"setErrorIndex","(I)V")
J2CPP_DEFINE_METHOD(java::text::ParsePosition,6,"setIndex","(I)V")
J2CPP_DEFINE_METHOD(java::text::ParsePosition,7,"toString","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVA_TEXT_PARSEPOSITION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
