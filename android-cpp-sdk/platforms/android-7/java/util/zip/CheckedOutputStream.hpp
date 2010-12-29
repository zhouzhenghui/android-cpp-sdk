/*================================================================================
  code generated by: java2cpp
  class: java.util.zip.CheckedOutputStream
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_ZIP_CHECKEDOUTPUTSTREAM_HPP_DECL
#define J2CPP_JAVA_UTIL_ZIP_CHECKEDOUTPUTSTREAM_HPP_DECL


namespace j2cpp { namespace java { namespace io { class FilterOutputStream; } } }
namespace j2cpp { namespace java { namespace io { class OutputStream; } } }
namespace j2cpp { namespace java { namespace util { namespace zip { class Checksum; } } } }


#include <java/io/FilterOutputStream.hpp>
#include <java/io/OutputStream.hpp>
#include <java/util/zip/Checksum.hpp>


namespace j2cpp {

namespace java { namespace util { namespace zip {

	class CheckedOutputStream;
	class CheckedOutputStream
		: public cpp_object<CheckedOutputStream>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		explicit CheckedOutputStream(jobject jobj)
		: cpp_object<CheckedOutputStream>(jobj)
		{
		}

		operator local_ref<java::io::FilterOutputStream>() const;


		CheckedOutputStream(local_ref< java::io::OutputStream > const&, local_ref< java::util::zip::Checksum > const&);
		local_ref< java::util::zip::Checksum > getChecksum();
		void write(cpp_int const&);
		void write(local_ref< cpp_byte_array<1> > const&, cpp_int const&, cpp_int const&);
	}; //class CheckedOutputStream

} //namespace zip
} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_ZIP_CHECKEDOUTPUTSTREAM_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_ZIP_CHECKEDOUTPUTSTREAM_HPP_IMPL
#define J2CPP_JAVA_UTIL_ZIP_CHECKEDOUTPUTSTREAM_HPP_IMPL

namespace j2cpp {



java::util::zip::CheckedOutputStream::operator local_ref<java::io::FilterOutputStream>() const
{
	return local_ref<java::io::FilterOutputStream>(get_jtype());
}


java::util::zip::CheckedOutputStream::CheckedOutputStream(local_ref< java::io::OutputStream > const &a0, local_ref< java::util::zip::Checksum > const &a1)
: cpp_object<java::util::zip::CheckedOutputStream>(
	environment::get().get_jenv()->NewObject(
		get_class<java::util::zip::CheckedOutputStream::J2CPP_CLASS_NAME>(),
		get_method_id<java::util::zip::CheckedOutputStream::J2CPP_CLASS_NAME, java::util::zip::CheckedOutputStream::J2CPP_METHOD_NAME(0), java::util::zip::CheckedOutputStream::J2CPP_METHOD_SIGNATURE(0), false>(),
		a0.get_jtype(), a1.get_jtype()
	)
)
{
}


local_ref< java::util::zip::Checksum > java::util::zip::CheckedOutputStream::getChecksum()
{
	return local_ref< java::util::zip::Checksum >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

void java::util::zip::CheckedOutputStream::write(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

void java::util::zip::CheckedOutputStream::write(local_ref< cpp_byte_array<1> > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(java::util::zip::CheckedOutputStream,"java/util/zip/CheckedOutputStream")
J2CPP_DEFINE_METHOD(java::util::zip::CheckedOutputStream,0,"<init>","(Ljava/io/OutputStream;Ljava/util/zip/Checksum;)V")
J2CPP_DEFINE_METHOD(java::util::zip::CheckedOutputStream,1,"getChecksum","()Ljava/util/zip/Checksum;")
J2CPP_DEFINE_METHOD(java::util::zip::CheckedOutputStream,2,"write","(I)V")
J2CPP_DEFINE_METHOD(java::util::zip::CheckedOutputStream,3,"write","([BII)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_ZIP_CHECKEDOUTPUTSTREAM_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION