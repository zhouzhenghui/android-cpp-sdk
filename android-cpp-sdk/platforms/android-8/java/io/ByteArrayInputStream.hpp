/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.io.ByteArrayInputStream
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_BYTEARRAYINPUTSTREAM_HPP_DECL
#define J2CPP_JAVA_IO_BYTEARRAYINPUTSTREAM_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace io { class InputStream; } } }
namespace j2cpp { namespace java { namespace io { class Closeable; } } }


#include <java/io/Closeable.hpp>
#include <java/io/InputStream.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace java { namespace io {

	class ByteArrayInputStream;
	class ByteArrayInputStream
		: public object<ByteArrayInputStream>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)

		explicit ByteArrayInputStream(jobject jobj)
		: object<ByteArrayInputStream>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::io::InputStream>() const;
		operator local_ref<java::io::Closeable>() const;


		ByteArrayInputStream(local_ref< array<jbyte,1> > const&);
		ByteArrayInputStream(local_ref< array<jbyte,1> > const&, jint, jint);
		jint available();
		void close();
		void mark(jint);
		jboolean markSupported();
		jint read();
		jint read(local_ref< array<jbyte,1> >  const&, jint, jint);
		void reset();
		jlong skip(jlong);

	}; //class ByteArrayInputStream

} //namespace io
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_BYTEARRAYINPUTSTREAM_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_BYTEARRAYINPUTSTREAM_HPP_IMPL
#define J2CPP_JAVA_IO_BYTEARRAYINPUTSTREAM_HPP_IMPL

namespace j2cpp {



java::io::ByteArrayInputStream::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::io::ByteArrayInputStream::operator local_ref<java::io::InputStream>() const
{
	return local_ref<java::io::InputStream>(get_jobject());
}

java::io::ByteArrayInputStream::operator local_ref<java::io::Closeable>() const
{
	return local_ref<java::io::Closeable>(get_jobject());
}


java::io::ByteArrayInputStream::ByteArrayInputStream(local_ref< array<jbyte,1> > const &a0)
: object<java::io::ByteArrayInputStream>(
	call_new_object<
		java::io::ByteArrayInputStream::J2CPP_CLASS_NAME,
		java::io::ByteArrayInputStream::J2CPP_METHOD_NAME(0),
		java::io::ByteArrayInputStream::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}



java::io::ByteArrayInputStream::ByteArrayInputStream(local_ref< array<jbyte,1> > const &a0, jint a1, jint a2)
: object<java::io::ByteArrayInputStream>(
	call_new_object<
		java::io::ByteArrayInputStream::J2CPP_CLASS_NAME,
		java::io::ByteArrayInputStream::J2CPP_METHOD_NAME(1),
		java::io::ByteArrayInputStream::J2CPP_METHOD_SIGNATURE(1)
	>(a0, a1, a2)
)
{
}


jint java::io::ByteArrayInputStream::available()
{
	return call_method<
		java::io::ByteArrayInputStream::J2CPP_CLASS_NAME,
		java::io::ByteArrayInputStream::J2CPP_METHOD_NAME(2),
		java::io::ByteArrayInputStream::J2CPP_METHOD_SIGNATURE(2), 
		jint
	>(get_jobject());
}

void java::io::ByteArrayInputStream::close()
{
	return call_method<
		java::io::ByteArrayInputStream::J2CPP_CLASS_NAME,
		java::io::ByteArrayInputStream::J2CPP_METHOD_NAME(3),
		java::io::ByteArrayInputStream::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject());
}

void java::io::ByteArrayInputStream::mark(jint a0)
{
	return call_method<
		java::io::ByteArrayInputStream::J2CPP_CLASS_NAME,
		java::io::ByteArrayInputStream::J2CPP_METHOD_NAME(4),
		java::io::ByteArrayInputStream::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0);
}

jboolean java::io::ByteArrayInputStream::markSupported()
{
	return call_method<
		java::io::ByteArrayInputStream::J2CPP_CLASS_NAME,
		java::io::ByteArrayInputStream::J2CPP_METHOD_NAME(5),
		java::io::ByteArrayInputStream::J2CPP_METHOD_SIGNATURE(5), 
		jboolean
	>(get_jobject());
}

jint java::io::ByteArrayInputStream::read()
{
	return call_method<
		java::io::ByteArrayInputStream::J2CPP_CLASS_NAME,
		java::io::ByteArrayInputStream::J2CPP_METHOD_NAME(6),
		java::io::ByteArrayInputStream::J2CPP_METHOD_SIGNATURE(6), 
		jint
	>(get_jobject());
}

jint java::io::ByteArrayInputStream::read(local_ref< array<jbyte,1> > const &a0, jint a1, jint a2)
{
	return call_method<
		java::io::ByteArrayInputStream::J2CPP_CLASS_NAME,
		java::io::ByteArrayInputStream::J2CPP_METHOD_NAME(7),
		java::io::ByteArrayInputStream::J2CPP_METHOD_SIGNATURE(7), 
		jint
	>(get_jobject(), a0, a1, a2);
}

void java::io::ByteArrayInputStream::reset()
{
	return call_method<
		java::io::ByteArrayInputStream::J2CPP_CLASS_NAME,
		java::io::ByteArrayInputStream::J2CPP_METHOD_NAME(8),
		java::io::ByteArrayInputStream::J2CPP_METHOD_SIGNATURE(8), 
		void
	>(get_jobject());
}

jlong java::io::ByteArrayInputStream::skip(jlong a0)
{
	return call_method<
		java::io::ByteArrayInputStream::J2CPP_CLASS_NAME,
		java::io::ByteArrayInputStream::J2CPP_METHOD_NAME(9),
		java::io::ByteArrayInputStream::J2CPP_METHOD_SIGNATURE(9), 
		jlong
	>(get_jobject(), a0);
}



J2CPP_DEFINE_CLASS(java::io::ByteArrayInputStream,"java/io/ByteArrayInputStream")
J2CPP_DEFINE_METHOD(java::io::ByteArrayInputStream,0,"<init>","([B)V")
J2CPP_DEFINE_METHOD(java::io::ByteArrayInputStream,1,"<init>","([BII)V")
J2CPP_DEFINE_METHOD(java::io::ByteArrayInputStream,2,"available","()I")
J2CPP_DEFINE_METHOD(java::io::ByteArrayInputStream,3,"close","()V")
J2CPP_DEFINE_METHOD(java::io::ByteArrayInputStream,4,"mark","(I)V")
J2CPP_DEFINE_METHOD(java::io::ByteArrayInputStream,5,"markSupported","()Z")
J2CPP_DEFINE_METHOD(java::io::ByteArrayInputStream,6,"read","()I")
J2CPP_DEFINE_METHOD(java::io::ByteArrayInputStream,7,"read","([BII)I")
J2CPP_DEFINE_METHOD(java::io::ByteArrayInputStream,8,"reset","()V")
J2CPP_DEFINE_METHOD(java::io::ByteArrayInputStream,9,"skip","(J)J")
J2CPP_DEFINE_FIELD(java::io::ByteArrayInputStream,0,"buf","[B")
J2CPP_DEFINE_FIELD(java::io::ByteArrayInputStream,1,"pos","I")
J2CPP_DEFINE_FIELD(java::io::ByteArrayInputStream,2,"mark","I")
J2CPP_DEFINE_FIELD(java::io::ByteArrayInputStream,3,"count","I")

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_BYTEARRAYINPUTSTREAM_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
