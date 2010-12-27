/*================================================================================
  code generated by: java2cpp
  class: java.util.Comparator
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_COMPARATOR_HPP_DECL
#define J2CPP_JAVA_UTIL_COMPARATOR_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>


namespace j2cpp {

namespace java { namespace util {

	class Comparator;
	class Comparator
		: public cpp_object<Comparator>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit Comparator(jobject jobj)
		: cpp_object<Comparator>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		cpp_int compare(local_ref< java::lang::Object > const&, local_ref< java::lang::Object > const&);
		cpp_boolean equals(local_ref< java::lang::Object > const&);
	}; //class Comparator

} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_COMPARATOR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_COMPARATOR_HPP_IMPL
#define J2CPP_JAVA_UTIL_COMPARATOR_HPP_IMPL

namespace j2cpp {



java::util::Comparator::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}

cpp_int java::util::Comparator::compare(local_ref< java::lang::Object > const &a0, local_ref< java::lang::Object > const &a1)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean java::util::Comparator::equals(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(java::util::Comparator,"java/util/Comparator")
J2CPP_DEFINE_METHOD(java::util::Comparator,0,"compare","(Ljava/lang/Object;Ljava/lang/Object;)I")
J2CPP_DEFINE_METHOD(java::util::Comparator,1,"equals","(Ljava/lang/Object;)Z")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_COMPARATOR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
