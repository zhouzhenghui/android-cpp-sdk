/*================================================================================
  code generated by: java2cpp
  class: java.io.StringReader
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_STRINGREADER_HPP_DECL
#define J2CPP_JAVA_IO_STRINGREADER_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Reader; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/io/Reader.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace io {

	class StringReader;
	class StringReader
		: public cpp_object<StringReader>
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

		explicit StringReader(jobject jobj)
		: cpp_object<StringReader>(jobj)
		{
		}

		operator local_ref<java::io::Reader>() const;


		StringReader(local_ref< java::lang::String > const&);
		void close();
		void mark(cpp_int const&);
		cpp_boolean markSupported();
		cpp_int read();
		cpp_int read(local_ref< cpp_char_array<1> > const&, cpp_int const&, cpp_int const&);
		cpp_boolean ready();
		void reset();
		cpp_long skip(cpp_long const&);
	}; //class StringReader

} //namespace io
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_STRINGREADER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_STRINGREADER_HPP_IMPL
#define J2CPP_JAVA_IO_STRINGREADER_HPP_IMPL

namespace j2cpp {



java::io::StringReader::operator local_ref<java::io::Reader>() const
{
	return local_ref<java::io::Reader>(get_jtype());
}


java::io::StringReader::StringReader(local_ref< java::lang::String > const &a0)
: cpp_object<java::io::StringReader>(
	environment::get().get_jenv()->NewObject(
		get_class<java::io::StringReader::J2CPP_CLASS_NAME>(),
		get_method_id<java::io::StringReader::J2CPP_CLASS_NAME, java::io::StringReader::J2CPP_METHOD_NAME(0), java::io::StringReader::J2CPP_METHOD_SIGNATURE(0), false>(),
		a0.get_jtype()
	)
)
{
}


void java::io::StringReader::close()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

void java::io::StringReader::mark(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::io::StringReader::markSupported()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

cpp_int java::io::StringReader::read()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

cpp_int java::io::StringReader::read(local_ref< cpp_char_array<1> > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

cpp_boolean java::io::StringReader::ready()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

void java::io::StringReader::reset()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

cpp_long java::io::StringReader::skip(cpp_long const &a0)
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(java::io::StringReader,"java/io/StringReader")
J2CPP_DEFINE_METHOD(java::io::StringReader,0,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::io::StringReader,1,"close","()V")
J2CPP_DEFINE_METHOD(java::io::StringReader,2,"mark","(I)V")
J2CPP_DEFINE_METHOD(java::io::StringReader,3,"markSupported","()Z")
J2CPP_DEFINE_METHOD(java::io::StringReader,4,"read","()I")
J2CPP_DEFINE_METHOD(java::io::StringReader,5,"read","([CII)I")
J2CPP_DEFINE_METHOD(java::io::StringReader,6,"ready","()Z")
J2CPP_DEFINE_METHOD(java::io::StringReader,7,"reset","()V")
J2CPP_DEFINE_METHOD(java::io::StringReader,8,"skip","(J)J")

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_STRINGREADER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
