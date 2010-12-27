/*================================================================================
  code generated by: java2cpp
  class: java.io.FilterReader
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_FILTERREADER_HPP_DECL
#define J2CPP_JAVA_IO_FILTERREADER_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Reader; } } }


#include <java/io/Reader.hpp>


namespace j2cpp {

namespace java { namespace io {

	class FilterReader;
	class FilterReader
		: public cpp_object<FilterReader>
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
		J2CPP_DECLARE_FIELD(0)

		explicit FilterReader(jobject jobj)
		: cpp_object<FilterReader>(jobj)
		{
		}

		operator local_ref<java::io::Reader>() const;


		void close();
		void mark(cpp_int const&);
		cpp_boolean markSupported();
		cpp_int read();
		cpp_int read(local_ref< cpp_char_array<1> > const&, cpp_int const&, cpp_int const&);
		cpp_boolean ready();
		void reset();
		cpp_long skip(cpp_long const&);

	}; //class FilterReader

} //namespace io
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_FILTERREADER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_FILTERREADER_HPP_IMPL
#define J2CPP_JAVA_IO_FILTERREADER_HPP_IMPL

namespace j2cpp {



java::io::FilterReader::operator local_ref<java::io::Reader>() const
{
	return local_ref<java::io::Reader>(get_jtype());
}


void java::io::FilterReader::close()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

void java::io::FilterReader::mark(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::io::FilterReader::markSupported()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

cpp_int java::io::FilterReader::read()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

cpp_int java::io::FilterReader::read(local_ref< cpp_char_array<1> > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

cpp_boolean java::io::FilterReader::ready()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

void java::io::FilterReader::reset()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

cpp_long java::io::FilterReader::skip(cpp_long const &a0)
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}



J2CPP_DEFINE_CLASS(java::io::FilterReader,"java/io/FilterReader")
J2CPP_DEFINE_METHOD(java::io::FilterReader,0,"<init>","(Ljava/io/Reader;)V")
J2CPP_DEFINE_METHOD(java::io::FilterReader,1,"close","()V")
J2CPP_DEFINE_METHOD(java::io::FilterReader,2,"mark","(I)V")
J2CPP_DEFINE_METHOD(java::io::FilterReader,3,"markSupported","()Z")
J2CPP_DEFINE_METHOD(java::io::FilterReader,4,"read","()I")
J2CPP_DEFINE_METHOD(java::io::FilterReader,5,"read","([CII)I")
J2CPP_DEFINE_METHOD(java::io::FilterReader,6,"ready","()Z")
J2CPP_DEFINE_METHOD(java::io::FilterReader,7,"reset","()V")
J2CPP_DEFINE_METHOD(java::io::FilterReader,8,"skip","(J)J")
J2CPP_DEFINE_FIELD(java::io::FilterReader,0,"in","Ljava/io/Reader;")

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_FILTERREADER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
