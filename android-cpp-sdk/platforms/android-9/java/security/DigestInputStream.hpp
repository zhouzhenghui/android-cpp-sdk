/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.security.DigestInputStream
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_DIGESTINPUTSTREAM_HPP_DECL
#define J2CPP_JAVA_SECURITY_DIGESTINPUTSTREAM_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace security { class MessageDigest; } } }
namespace j2cpp { namespace java { namespace io { class InputStream; } } }
namespace j2cpp { namespace java { namespace io { class FilterInputStream; } } }


#include <java/io/FilterInputStream.hpp>
#include <java/io/InputStream.hpp>
#include <java/lang/String.hpp>
#include <java/security/MessageDigest.hpp>


namespace j2cpp {

namespace java { namespace security {

	class DigestInputStream;
	class DigestInputStream
		: public object<DigestInputStream>
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
		J2CPP_DECLARE_FIELD(0)

		explicit DigestInputStream(jobject jobj)
		: object<DigestInputStream>(jobj)
		{
		}

		operator local_ref<java::io::FilterInputStream>() const;


		DigestInputStream(local_ref< java::io::InputStream > const&, local_ref< java::security::MessageDigest > const&);
		local_ref< java::security::MessageDigest > getMessageDigest();
		void setMessageDigest(local_ref< java::security::MessageDigest >  const&);
		jint read();
		jint read(local_ref< array<jbyte,1> >  const&, jint, jint);
		void on(jboolean);
		local_ref< java::lang::String > toString();

	}; //class DigestInputStream

} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_DIGESTINPUTSTREAM_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_DIGESTINPUTSTREAM_HPP_IMPL
#define J2CPP_JAVA_SECURITY_DIGESTINPUTSTREAM_HPP_IMPL

namespace j2cpp {



java::security::DigestInputStream::operator local_ref<java::io::FilterInputStream>() const
{
	return local_ref<java::io::FilterInputStream>(get_jobject());
}


java::security::DigestInputStream::DigestInputStream(local_ref< java::io::InputStream > const &a0, local_ref< java::security::MessageDigest > const &a1)
: object<java::security::DigestInputStream>(
	call_new_object<
		java::security::DigestInputStream::J2CPP_CLASS_NAME,
		java::security::DigestInputStream::J2CPP_METHOD_NAME(0),
		java::security::DigestInputStream::J2CPP_METHOD_SIGNATURE(0)>
	(a0, a1)
)
{
}


local_ref< java::security::MessageDigest > java::security::DigestInputStream::getMessageDigest()
{
	return call_method<
		java::security::DigestInputStream::J2CPP_CLASS_NAME,
		java::security::DigestInputStream::J2CPP_METHOD_NAME(1),
		java::security::DigestInputStream::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::security::MessageDigest > >
	(get_jobject());
}

void java::security::DigestInputStream::setMessageDigest(local_ref< java::security::MessageDigest > const &a0)
{
	return call_method<
		java::security::DigestInputStream::J2CPP_CLASS_NAME,
		java::security::DigestInputStream::J2CPP_METHOD_NAME(2),
		java::security::DigestInputStream::J2CPP_METHOD_SIGNATURE(2), 
		void >
	(get_jobject(), a0);
}

jint java::security::DigestInputStream::read()
{
	return call_method<
		java::security::DigestInputStream::J2CPP_CLASS_NAME,
		java::security::DigestInputStream::J2CPP_METHOD_NAME(3),
		java::security::DigestInputStream::J2CPP_METHOD_SIGNATURE(3), 
		jint >
	(get_jobject());
}

jint java::security::DigestInputStream::read(local_ref< array<jbyte,1> > const &a0, jint a1, jint a2)
{
	return call_method<
		java::security::DigestInputStream::J2CPP_CLASS_NAME,
		java::security::DigestInputStream::J2CPP_METHOD_NAME(4),
		java::security::DigestInputStream::J2CPP_METHOD_SIGNATURE(4), 
		jint >
	(get_jobject(), a0, a1, a2);
}

void java::security::DigestInputStream::on(jboolean a0)
{
	return call_method<
		java::security::DigestInputStream::J2CPP_CLASS_NAME,
		java::security::DigestInputStream::J2CPP_METHOD_NAME(5),
		java::security::DigestInputStream::J2CPP_METHOD_SIGNATURE(5), 
		void >
	(get_jobject(), a0);
}

local_ref< java::lang::String > java::security::DigestInputStream::toString()
{
	return call_method<
		java::security::DigestInputStream::J2CPP_CLASS_NAME,
		java::security::DigestInputStream::J2CPP_METHOD_NAME(6),
		java::security::DigestInputStream::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::lang::String > >
	(get_jobject());
}



J2CPP_DEFINE_CLASS(java::security::DigestInputStream,"java/security/DigestInputStream")
J2CPP_DEFINE_METHOD(java::security::DigestInputStream,0,"<init>","(Ljava/io/InputStream;Ljava/security/MessageDigest;)V")
J2CPP_DEFINE_METHOD(java::security::DigestInputStream,1,"getMessageDigest","()Ljava/security/MessageDigest;")
J2CPP_DEFINE_METHOD(java::security::DigestInputStream,2,"setMessageDigest","(Ljava/security/MessageDigest;)V")
J2CPP_DEFINE_METHOD(java::security::DigestInputStream,3,"read","()I")
J2CPP_DEFINE_METHOD(java::security::DigestInputStream,4,"read","([BII)I")
J2CPP_DEFINE_METHOD(java::security::DigestInputStream,5,"on","(Z)V")
J2CPP_DEFINE_METHOD(java::security::DigestInputStream,6,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_FIELD(java::security::DigestInputStream,0,"digest","Ljava/security/MessageDigest;")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_DIGESTINPUTSTREAM_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
