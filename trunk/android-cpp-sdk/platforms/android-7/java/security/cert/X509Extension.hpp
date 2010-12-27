/*================================================================================
  code generated by: java2cpp
  class: java.security.cert.X509Extension
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_CERT_X509EXTENSION_HPP_DECL
#define J2CPP_JAVA_SECURITY_CERT_X509EXTENSION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace util { class Set; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/Set.hpp>


namespace j2cpp {

namespace java { namespace security { namespace cert {

	class X509Extension;
	class X509Extension
		: public cpp_object<X509Extension>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		explicit X509Extension(jobject jobj)
		: cpp_object<X509Extension>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< java::util::Set > getCriticalExtensionOIDs();
		local_ref< cpp_byte_array<1> > getExtensionValue(local_ref< java::lang::String > const&);
		local_ref< java::util::Set > getNonCriticalExtensionOIDs();
		cpp_boolean hasUnsupportedCriticalExtension();
	}; //class X509Extension

} //namespace cert
} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_CERT_X509EXTENSION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_CERT_X509EXTENSION_HPP_IMPL
#define J2CPP_JAVA_SECURITY_CERT_X509EXTENSION_HPP_IMPL

namespace j2cpp {



java::security::cert::X509Extension::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}

local_ref< java::util::Set > java::security::cert::X509Extension::getCriticalExtensionOIDs()
{
	return local_ref< java::util::Set >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

local_ref< cpp_byte_array<1> > java::security::cert::X509Extension::getExtensionValue(local_ref< java::lang::String > const &a0)
{
	return local_ref< cpp_byte_array<1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::util::Set > java::security::cert::X509Extension::getNonCriticalExtensionOIDs()
{
	return local_ref< java::util::Set >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

cpp_boolean java::security::cert::X509Extension::hasUnsupportedCriticalExtension()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(java::security::cert::X509Extension,"java/security/cert/X509Extension")
J2CPP_DEFINE_METHOD(java::security::cert::X509Extension,0,"getCriticalExtensionOIDs","()Ljava/util/Set;")
J2CPP_DEFINE_METHOD(java::security::cert::X509Extension,1,"getExtensionValue","(Ljava/lang/String;)[B")
J2CPP_DEFINE_METHOD(java::security::cert::X509Extension,2,"getNonCriticalExtensionOIDs","()Ljava/util/Set;")
J2CPP_DEFINE_METHOD(java::security::cert::X509Extension,3,"hasUnsupportedCriticalExtension","()Z")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_CERT_X509EXTENSION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
