/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.security.CodeSource
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_CODESOURCE_HPP_DECL
#define J2CPP_JAVA_SECURITY_CODESOURCE_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace net { class URL; } } }
namespace j2cpp { namespace java { namespace security { namespace cert { class Certificate; } } } }
namespace j2cpp { namespace java { namespace security { class CodeSigner; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/net/URL.hpp>
#include <java/security/CodeSigner.hpp>
#include <java/security/cert/Certificate.hpp>


namespace j2cpp {

namespace java { namespace security {

	class CodeSource;
	class CodeSource
		: public object<CodeSource>
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

		explicit CodeSource(jobject jobj)
		: object<CodeSource>(jobj)
		{
		}

		operator local_ref<java::io::Serializable>() const;
		operator local_ref<java::lang::Object>() const;


		CodeSource(local_ref< java::net::URL > const&, local_ref< array< local_ref< java::security::cert::Certificate >, 1> > const&);
		CodeSource(local_ref< java::net::URL > const&, local_ref< array< local_ref< java::security::CodeSigner >, 1> > const&);
		jboolean equals(local_ref< java::lang::Object >  const&);
		local_ref< array< local_ref< java::security::cert::Certificate >, 1> > getCertificates();
		local_ref< array< local_ref< java::security::CodeSigner >, 1> > getCodeSigners();
		local_ref< java::net::URL > getLocation();
		jint hashCode();
		jboolean implies(local_ref< java::security::CodeSource >  const&);
		local_ref< java::lang::String > toString();
	}; //class CodeSource

} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_CODESOURCE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_CODESOURCE_HPP_IMPL
#define J2CPP_JAVA_SECURITY_CODESOURCE_HPP_IMPL

namespace j2cpp {



java::security::CodeSource::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}

java::security::CodeSource::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


java::security::CodeSource::CodeSource(local_ref< java::net::URL > const &a0, local_ref< array< local_ref< java::security::cert::Certificate >, 1> > const &a1)
: object<java::security::CodeSource>(
	call_new_object<
		java::security::CodeSource::J2CPP_CLASS_NAME,
		java::security::CodeSource::J2CPP_METHOD_NAME(0),
		java::security::CodeSource::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1)
)
{
}



java::security::CodeSource::CodeSource(local_ref< java::net::URL > const &a0, local_ref< array< local_ref< java::security::CodeSigner >, 1> > const &a1)
: object<java::security::CodeSource>(
	call_new_object<
		java::security::CodeSource::J2CPP_CLASS_NAME,
		java::security::CodeSource::J2CPP_METHOD_NAME(1),
		java::security::CodeSource::J2CPP_METHOD_SIGNATURE(1)
	>(a0, a1)
)
{
}


jboolean java::security::CodeSource::equals(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::security::CodeSource::J2CPP_CLASS_NAME,
		java::security::CodeSource::J2CPP_METHOD_NAME(2),
		java::security::CodeSource::J2CPP_METHOD_SIGNATURE(2), 
		jboolean
	>(get_jobject(), a0);
}

local_ref< array< local_ref< java::security::cert::Certificate >, 1> > java::security::CodeSource::getCertificates()
{
	return call_method<
		java::security::CodeSource::J2CPP_CLASS_NAME,
		java::security::CodeSource::J2CPP_METHOD_NAME(3),
		java::security::CodeSource::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< array< local_ref< java::security::cert::Certificate >, 1> >
	>(get_jobject());
}

local_ref< array< local_ref< java::security::CodeSigner >, 1> > java::security::CodeSource::getCodeSigners()
{
	return call_method<
		java::security::CodeSource::J2CPP_CLASS_NAME,
		java::security::CodeSource::J2CPP_METHOD_NAME(4),
		java::security::CodeSource::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< array< local_ref< java::security::CodeSigner >, 1> >
	>(get_jobject());
}

local_ref< java::net::URL > java::security::CodeSource::getLocation()
{
	return call_method<
		java::security::CodeSource::J2CPP_CLASS_NAME,
		java::security::CodeSource::J2CPP_METHOD_NAME(5),
		java::security::CodeSource::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::net::URL >
	>(get_jobject());
}

jint java::security::CodeSource::hashCode()
{
	return call_method<
		java::security::CodeSource::J2CPP_CLASS_NAME,
		java::security::CodeSource::J2CPP_METHOD_NAME(6),
		java::security::CodeSource::J2CPP_METHOD_SIGNATURE(6), 
		jint
	>(get_jobject());
}

jboolean java::security::CodeSource::implies(local_ref< java::security::CodeSource > const &a0)
{
	return call_method<
		java::security::CodeSource::J2CPP_CLASS_NAME,
		java::security::CodeSource::J2CPP_METHOD_NAME(7),
		java::security::CodeSource::J2CPP_METHOD_SIGNATURE(7), 
		jboolean
	>(get_jobject(), a0);
}

local_ref< java::lang::String > java::security::CodeSource::toString()
{
	return call_method<
		java::security::CodeSource::J2CPP_CLASS_NAME,
		java::security::CodeSource::J2CPP_METHOD_NAME(8),
		java::security::CodeSource::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< java::lang::String >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(java::security::CodeSource,"java/security/CodeSource")
J2CPP_DEFINE_METHOD(java::security::CodeSource,0,"<init>","(Ljava/net/URL;[java.security.cert.Certificate)V")
J2CPP_DEFINE_METHOD(java::security::CodeSource,1,"<init>","(Ljava/net/URL;[java.security.CodeSigner)V")
J2CPP_DEFINE_METHOD(java::security::CodeSource,2,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::security::CodeSource,3,"getCertificates","()[java.security.cert.Certificate")
J2CPP_DEFINE_METHOD(java::security::CodeSource,4,"getCodeSigners","()[java.security.CodeSigner")
J2CPP_DEFINE_METHOD(java::security::CodeSource,5,"getLocation","()Ljava/net/URL;")
J2CPP_DEFINE_METHOD(java::security::CodeSource,6,"hashCode","()I")
J2CPP_DEFINE_METHOD(java::security::CodeSource,7,"implies","(Ljava/security/CodeSource;)Z")
J2CPP_DEFINE_METHOD(java::security::CodeSource,8,"toString","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_CODESOURCE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
