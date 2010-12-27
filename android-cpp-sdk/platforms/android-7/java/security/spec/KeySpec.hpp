/*================================================================================
  code generated by: java2cpp
  class: java.security.spec.KeySpec
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_SPEC_KEYSPEC_HPP_DECL
#define J2CPP_JAVA_SECURITY_SPEC_KEYSPEC_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>


namespace j2cpp {

namespace java { namespace security { namespace spec {

	class KeySpec;
	class KeySpec
		: public cpp_object<KeySpec>
	{
	public:

		J2CPP_DECLARE_CLASS


		explicit KeySpec(jobject jobj)
		: cpp_object<KeySpec>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;

	}; //class KeySpec

} //namespace spec
} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_SPEC_KEYSPEC_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_SPEC_KEYSPEC_HPP_IMPL
#define J2CPP_JAVA_SECURITY_SPEC_KEYSPEC_HPP_IMPL

namespace j2cpp {



java::security::spec::KeySpec::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}

J2CPP_DEFINE_CLASS(java::security::spec::KeySpec,"java/security/spec/KeySpec")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_SPEC_KEYSPEC_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
