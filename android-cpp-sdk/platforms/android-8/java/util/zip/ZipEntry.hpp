/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.zip.ZipEntry
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_ZIP_ZIPENTRY_HPP_DECL
#define J2CPP_JAVA_UTIL_ZIP_ZIPENTRY_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Cloneable; } } }


#include <java/lang/Cloneable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace util { namespace zip {

	class ZipEntry;
	class ZipEntry
		: public object<ZipEntry>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)

		explicit ZipEntry(jobject jobj)
		: object<ZipEntry>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::Cloneable>() const;


		ZipEntry(local_ref< java::lang::String > const&);
		ZipEntry(local_ref< java::util::zip::ZipEntry > const&);
		local_ref< java::lang::String > getComment();
		jlong getCompressedSize();
		jlong getCrc();
		local_ref< array<jbyte,1> > getExtra();
		jint getMethod();
		local_ref< java::lang::String > getName();
		jlong getSize();
		jlong getTime();
		jboolean isDirectory();
		void setComment(local_ref< java::lang::String >  const&);
		void setCompressedSize(jlong);
		void setCrc(jlong);
		void setExtra(local_ref< array<jbyte,1> >  const&);
		void setMethod(jint);
		void setSize(jlong);
		void setTime(jlong);
		local_ref< java::lang::String > toString();
		local_ref< java::lang::Object > clone();
		jint hashCode();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > DEFLATED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > STORED;
	}; //class ZipEntry

} //namespace zip
} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_ZIP_ZIPENTRY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_ZIP_ZIPENTRY_HPP_IMPL
#define J2CPP_JAVA_UTIL_ZIP_ZIPENTRY_HPP_IMPL

namespace j2cpp {



java::util::zip::ZipEntry::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::util::zip::ZipEntry::operator local_ref<java::lang::Cloneable>() const
{
	return local_ref<java::lang::Cloneable>(get_jobject());
}


java::util::zip::ZipEntry::ZipEntry(local_ref< java::lang::String > const &a0)
: object<java::util::zip::ZipEntry>(
	call_new_object<
		java::util::zip::ZipEntry::J2CPP_CLASS_NAME,
		java::util::zip::ZipEntry::J2CPP_METHOD_NAME(0),
		java::util::zip::ZipEntry::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}



java::util::zip::ZipEntry::ZipEntry(local_ref< java::util::zip::ZipEntry > const &a0)
: object<java::util::zip::ZipEntry>(
	call_new_object<
		java::util::zip::ZipEntry::J2CPP_CLASS_NAME,
		java::util::zip::ZipEntry::J2CPP_METHOD_NAME(1),
		java::util::zip::ZipEntry::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}


local_ref< java::lang::String > java::util::zip::ZipEntry::getComment()
{
	return call_method<
		java::util::zip::ZipEntry::J2CPP_CLASS_NAME,
		java::util::zip::ZipEntry::J2CPP_METHOD_NAME(2),
		java::util::zip::ZipEntry::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::String >
	>(get_jobject());
}

jlong java::util::zip::ZipEntry::getCompressedSize()
{
	return call_method<
		java::util::zip::ZipEntry::J2CPP_CLASS_NAME,
		java::util::zip::ZipEntry::J2CPP_METHOD_NAME(3),
		java::util::zip::ZipEntry::J2CPP_METHOD_SIGNATURE(3), 
		jlong
	>(get_jobject());
}

jlong java::util::zip::ZipEntry::getCrc()
{
	return call_method<
		java::util::zip::ZipEntry::J2CPP_CLASS_NAME,
		java::util::zip::ZipEntry::J2CPP_METHOD_NAME(4),
		java::util::zip::ZipEntry::J2CPP_METHOD_SIGNATURE(4), 
		jlong
	>(get_jobject());
}

local_ref< array<jbyte,1> > java::util::zip::ZipEntry::getExtra()
{
	return call_method<
		java::util::zip::ZipEntry::J2CPP_CLASS_NAME,
		java::util::zip::ZipEntry::J2CPP_METHOD_NAME(5),
		java::util::zip::ZipEntry::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< array<jbyte,1> >
	>(get_jobject());
}

jint java::util::zip::ZipEntry::getMethod()
{
	return call_method<
		java::util::zip::ZipEntry::J2CPP_CLASS_NAME,
		java::util::zip::ZipEntry::J2CPP_METHOD_NAME(6),
		java::util::zip::ZipEntry::J2CPP_METHOD_SIGNATURE(6), 
		jint
	>(get_jobject());
}

local_ref< java::lang::String > java::util::zip::ZipEntry::getName()
{
	return call_method<
		java::util::zip::ZipEntry::J2CPP_CLASS_NAME,
		java::util::zip::ZipEntry::J2CPP_METHOD_NAME(7),
		java::util::zip::ZipEntry::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::lang::String >
	>(get_jobject());
}

jlong java::util::zip::ZipEntry::getSize()
{
	return call_method<
		java::util::zip::ZipEntry::J2CPP_CLASS_NAME,
		java::util::zip::ZipEntry::J2CPP_METHOD_NAME(8),
		java::util::zip::ZipEntry::J2CPP_METHOD_SIGNATURE(8), 
		jlong
	>(get_jobject());
}

jlong java::util::zip::ZipEntry::getTime()
{
	return call_method<
		java::util::zip::ZipEntry::J2CPP_CLASS_NAME,
		java::util::zip::ZipEntry::J2CPP_METHOD_NAME(9),
		java::util::zip::ZipEntry::J2CPP_METHOD_SIGNATURE(9), 
		jlong
	>(get_jobject());
}

jboolean java::util::zip::ZipEntry::isDirectory()
{
	return call_method<
		java::util::zip::ZipEntry::J2CPP_CLASS_NAME,
		java::util::zip::ZipEntry::J2CPP_METHOD_NAME(10),
		java::util::zip::ZipEntry::J2CPP_METHOD_SIGNATURE(10), 
		jboolean
	>(get_jobject());
}

void java::util::zip::ZipEntry::setComment(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::util::zip::ZipEntry::J2CPP_CLASS_NAME,
		java::util::zip::ZipEntry::J2CPP_METHOD_NAME(11),
		java::util::zip::ZipEntry::J2CPP_METHOD_SIGNATURE(11), 
		void
	>(get_jobject(), a0);
}

void java::util::zip::ZipEntry::setCompressedSize(jlong a0)
{
	return call_method<
		java::util::zip::ZipEntry::J2CPP_CLASS_NAME,
		java::util::zip::ZipEntry::J2CPP_METHOD_NAME(12),
		java::util::zip::ZipEntry::J2CPP_METHOD_SIGNATURE(12), 
		void
	>(get_jobject(), a0);
}

void java::util::zip::ZipEntry::setCrc(jlong a0)
{
	return call_method<
		java::util::zip::ZipEntry::J2CPP_CLASS_NAME,
		java::util::zip::ZipEntry::J2CPP_METHOD_NAME(13),
		java::util::zip::ZipEntry::J2CPP_METHOD_SIGNATURE(13), 
		void
	>(get_jobject(), a0);
}

void java::util::zip::ZipEntry::setExtra(local_ref< array<jbyte,1> > const &a0)
{
	return call_method<
		java::util::zip::ZipEntry::J2CPP_CLASS_NAME,
		java::util::zip::ZipEntry::J2CPP_METHOD_NAME(14),
		java::util::zip::ZipEntry::J2CPP_METHOD_SIGNATURE(14), 
		void
	>(get_jobject(), a0);
}

void java::util::zip::ZipEntry::setMethod(jint a0)
{
	return call_method<
		java::util::zip::ZipEntry::J2CPP_CLASS_NAME,
		java::util::zip::ZipEntry::J2CPP_METHOD_NAME(15),
		java::util::zip::ZipEntry::J2CPP_METHOD_SIGNATURE(15), 
		void
	>(get_jobject(), a0);
}

void java::util::zip::ZipEntry::setSize(jlong a0)
{
	return call_method<
		java::util::zip::ZipEntry::J2CPP_CLASS_NAME,
		java::util::zip::ZipEntry::J2CPP_METHOD_NAME(16),
		java::util::zip::ZipEntry::J2CPP_METHOD_SIGNATURE(16), 
		void
	>(get_jobject(), a0);
}

void java::util::zip::ZipEntry::setTime(jlong a0)
{
	return call_method<
		java::util::zip::ZipEntry::J2CPP_CLASS_NAME,
		java::util::zip::ZipEntry::J2CPP_METHOD_NAME(17),
		java::util::zip::ZipEntry::J2CPP_METHOD_SIGNATURE(17), 
		void
	>(get_jobject(), a0);
}

local_ref< java::lang::String > java::util::zip::ZipEntry::toString()
{
	return call_method<
		java::util::zip::ZipEntry::J2CPP_CLASS_NAME,
		java::util::zip::ZipEntry::J2CPP_METHOD_NAME(18),
		java::util::zip::ZipEntry::J2CPP_METHOD_SIGNATURE(18), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::Object > java::util::zip::ZipEntry::clone()
{
	return call_method<
		java::util::zip::ZipEntry::J2CPP_CLASS_NAME,
		java::util::zip::ZipEntry::J2CPP_METHOD_NAME(19),
		java::util::zip::ZipEntry::J2CPP_METHOD_SIGNATURE(19), 
		local_ref< java::lang::Object >
	>(get_jobject());
}

jint java::util::zip::ZipEntry::hashCode()
{
	return call_method<
		java::util::zip::ZipEntry::J2CPP_CLASS_NAME,
		java::util::zip::ZipEntry::J2CPP_METHOD_NAME(20),
		java::util::zip::ZipEntry::J2CPP_METHOD_SIGNATURE(20), 
		jint
	>(get_jobject());
}


static_field<
	java::util::zip::ZipEntry::J2CPP_CLASS_NAME,
	java::util::zip::ZipEntry::J2CPP_FIELD_NAME(0),
	java::util::zip::ZipEntry::J2CPP_FIELD_SIGNATURE(0),
	jint
> java::util::zip::ZipEntry::DEFLATED;

static_field<
	java::util::zip::ZipEntry::J2CPP_CLASS_NAME,
	java::util::zip::ZipEntry::J2CPP_FIELD_NAME(1),
	java::util::zip::ZipEntry::J2CPP_FIELD_SIGNATURE(1),
	jint
> java::util::zip::ZipEntry::STORED;


J2CPP_DEFINE_CLASS(java::util::zip::ZipEntry,"java/util/zip/ZipEntry")
J2CPP_DEFINE_METHOD(java::util::zip::ZipEntry,0,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::util::zip::ZipEntry,1,"<init>","(Ljava/util/zip/ZipEntry;)V")
J2CPP_DEFINE_METHOD(java::util::zip::ZipEntry,2,"getComment","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::zip::ZipEntry,3,"getCompressedSize","()J")
J2CPP_DEFINE_METHOD(java::util::zip::ZipEntry,4,"getCrc","()J")
J2CPP_DEFINE_METHOD(java::util::zip::ZipEntry,5,"getExtra","()[B")
J2CPP_DEFINE_METHOD(java::util::zip::ZipEntry,6,"getMethod","()I")
J2CPP_DEFINE_METHOD(java::util::zip::ZipEntry,7,"getName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::zip::ZipEntry,8,"getSize","()J")
J2CPP_DEFINE_METHOD(java::util::zip::ZipEntry,9,"getTime","()J")
J2CPP_DEFINE_METHOD(java::util::zip::ZipEntry,10,"isDirectory","()Z")
J2CPP_DEFINE_METHOD(java::util::zip::ZipEntry,11,"setComment","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::util::zip::ZipEntry,12,"setCompressedSize","(J)V")
J2CPP_DEFINE_METHOD(java::util::zip::ZipEntry,13,"setCrc","(J)V")
J2CPP_DEFINE_METHOD(java::util::zip::ZipEntry,14,"setExtra","([B)V")
J2CPP_DEFINE_METHOD(java::util::zip::ZipEntry,15,"setMethod","(I)V")
J2CPP_DEFINE_METHOD(java::util::zip::ZipEntry,16,"setSize","(J)V")
J2CPP_DEFINE_METHOD(java::util::zip::ZipEntry,17,"setTime","(J)V")
J2CPP_DEFINE_METHOD(java::util::zip::ZipEntry,18,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::zip::ZipEntry,19,"clone","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::zip::ZipEntry,20,"hashCode","()I")
J2CPP_DEFINE_FIELD(java::util::zip::ZipEntry,0,"DEFLATED","I")
J2CPP_DEFINE_FIELD(java::util::zip::ZipEntry,1,"STORED","I")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_ZIP_ZIPENTRY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
