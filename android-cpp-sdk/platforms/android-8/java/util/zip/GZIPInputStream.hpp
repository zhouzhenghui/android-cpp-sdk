/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.zip.GZIPInputStream
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_ZIP_GZIPINPUTSTREAM_HPP_DECL
#define J2CPP_JAVA_UTIL_ZIP_GZIPINPUTSTREAM_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { namespace zip { class InflaterInputStream; } } } }
namespace j2cpp { namespace java { namespace io { class FilterInputStream; } } }
namespace j2cpp { namespace java { namespace io { class InputStream; } } }
namespace j2cpp { namespace java { namespace io { class Closeable; } } }


#include <java/io/Closeable.hpp>
#include <java/io/FilterInputStream.hpp>
#include <java/io/InputStream.hpp>
#include <java/lang/Object.hpp>
#include <java/util/zip/InflaterInputStream.hpp>


namespace j2cpp {

namespace java { namespace util { namespace zip {

	class GZIPInputStream;
	class GZIPInputStream
		: public object<GZIPInputStream>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)

		explicit GZIPInputStream(jobject jobj)
		: object<GZIPInputStream>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::util::zip::InflaterInputStream>() const;
		operator local_ref<java::io::FilterInputStream>() const;
		operator local_ref<java::io::InputStream>() const;
		operator local_ref<java::io::Closeable>() const;


		GZIPInputStream(local_ref< java::io::InputStream > const&);
		GZIPInputStream(local_ref< java::io::InputStream > const&, jint);
		void close();
		jint read(local_ref< array<jbyte,1> >  const&, jint, jint);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > GZIP_MAGIC;
	}; //class GZIPInputStream

} //namespace zip
} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_ZIP_GZIPINPUTSTREAM_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_ZIP_GZIPINPUTSTREAM_HPP_IMPL
#define J2CPP_JAVA_UTIL_ZIP_GZIPINPUTSTREAM_HPP_IMPL

namespace j2cpp {



java::util::zip::GZIPInputStream::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::util::zip::GZIPInputStream::operator local_ref<java::util::zip::InflaterInputStream>() const
{
	return local_ref<java::util::zip::InflaterInputStream>(get_jobject());
}

java::util::zip::GZIPInputStream::operator local_ref<java::io::FilterInputStream>() const
{
	return local_ref<java::io::FilterInputStream>(get_jobject());
}

java::util::zip::GZIPInputStream::operator local_ref<java::io::InputStream>() const
{
	return local_ref<java::io::InputStream>(get_jobject());
}

java::util::zip::GZIPInputStream::operator local_ref<java::io::Closeable>() const
{
	return local_ref<java::io::Closeable>(get_jobject());
}


java::util::zip::GZIPInputStream::GZIPInputStream(local_ref< java::io::InputStream > const &a0)
: object<java::util::zip::GZIPInputStream>(
	call_new_object<
		java::util::zip::GZIPInputStream::J2CPP_CLASS_NAME,
		java::util::zip::GZIPInputStream::J2CPP_METHOD_NAME(0),
		java::util::zip::GZIPInputStream::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}



java::util::zip::GZIPInputStream::GZIPInputStream(local_ref< java::io::InputStream > const &a0, jint a1)
: object<java::util::zip::GZIPInputStream>(
	call_new_object<
		java::util::zip::GZIPInputStream::J2CPP_CLASS_NAME,
		java::util::zip::GZIPInputStream::J2CPP_METHOD_NAME(1),
		java::util::zip::GZIPInputStream::J2CPP_METHOD_SIGNATURE(1)
	>(a0, a1)
)
{
}


void java::util::zip::GZIPInputStream::close()
{
	return call_method<
		java::util::zip::GZIPInputStream::J2CPP_CLASS_NAME,
		java::util::zip::GZIPInputStream::J2CPP_METHOD_NAME(2),
		java::util::zip::GZIPInputStream::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject());
}

jint java::util::zip::GZIPInputStream::read(local_ref< array<jbyte,1> > const &a0, jint a1, jint a2)
{
	return call_method<
		java::util::zip::GZIPInputStream::J2CPP_CLASS_NAME,
		java::util::zip::GZIPInputStream::J2CPP_METHOD_NAME(3),
		java::util::zip::GZIPInputStream::J2CPP_METHOD_SIGNATURE(3), 
		jint
	>(get_jobject(), a0, a1, a2);
}


static_field<
	java::util::zip::GZIPInputStream::J2CPP_CLASS_NAME,
	java::util::zip::GZIPInputStream::J2CPP_FIELD_NAME(0),
	java::util::zip::GZIPInputStream::J2CPP_FIELD_SIGNATURE(0),
	jint
> java::util::zip::GZIPInputStream::GZIP_MAGIC;


J2CPP_DEFINE_CLASS(java::util::zip::GZIPInputStream,"java/util/zip/GZIPInputStream")
J2CPP_DEFINE_METHOD(java::util::zip::GZIPInputStream,0,"<init>","(Ljava/io/InputStream;)V")
J2CPP_DEFINE_METHOD(java::util::zip::GZIPInputStream,1,"<init>","(Ljava/io/InputStream;I)V")
J2CPP_DEFINE_METHOD(java::util::zip::GZIPInputStream,2,"close","()V")
J2CPP_DEFINE_METHOD(java::util::zip::GZIPInputStream,3,"read","([BII)I")
J2CPP_DEFINE_FIELD(java::util::zip::GZIPInputStream,0,"GZIP_MAGIC","I")
J2CPP_DEFINE_FIELD(java::util::zip::GZIPInputStream,1,"crc","Ljava/util/zip/CRC32;")
J2CPP_DEFINE_FIELD(java::util::zip::GZIPInputStream,2,"eos","Z")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_ZIP_GZIPINPUTSTREAM_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
