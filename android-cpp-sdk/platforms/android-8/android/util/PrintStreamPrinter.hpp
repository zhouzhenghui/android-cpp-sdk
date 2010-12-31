/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.util.PrintStreamPrinter
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_UTIL_PRINTSTREAMPRINTER_HPP_DECL
#define J2CPP_ANDROID_UTIL_PRINTSTREAMPRINTER_HPP_DECL


namespace j2cpp { namespace android { namespace util { class Printer; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace io { class PrintStream; } } }


#include <android/util/Printer.hpp>
#include <java/io/PrintStream.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace util {

	class PrintStreamPrinter;
	class PrintStreamPrinter
		: public object<PrintStreamPrinter>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit PrintStreamPrinter(jobject jobj)
		: object<PrintStreamPrinter>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::util::Printer>() const;


		PrintStreamPrinter(local_ref< java::io::PrintStream > const&);
		void println(local_ref< java::lang::String >  const&);
	}; //class PrintStreamPrinter

} //namespace util
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_UTIL_PRINTSTREAMPRINTER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_UTIL_PRINTSTREAMPRINTER_HPP_IMPL
#define J2CPP_ANDROID_UTIL_PRINTSTREAMPRINTER_HPP_IMPL

namespace j2cpp {



android::util::PrintStreamPrinter::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::util::PrintStreamPrinter::operator local_ref<android::util::Printer>() const
{
	return local_ref<android::util::Printer>(get_jobject());
}


android::util::PrintStreamPrinter::PrintStreamPrinter(local_ref< java::io::PrintStream > const &a0)
: object<android::util::PrintStreamPrinter>(
	call_new_object<
		android::util::PrintStreamPrinter::J2CPP_CLASS_NAME,
		android::util::PrintStreamPrinter::J2CPP_METHOD_NAME(0),
		android::util::PrintStreamPrinter::J2CPP_METHOD_SIGNATURE(0)>
	(a0)
)
{
}


void android::util::PrintStreamPrinter::println(local_ref< java::lang::String > const &a0)
{
	return call_method<
		android::util::PrintStreamPrinter::J2CPP_CLASS_NAME,
		android::util::PrintStreamPrinter::J2CPP_METHOD_NAME(1),
		android::util::PrintStreamPrinter::J2CPP_METHOD_SIGNATURE(1), 
		void >
	(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::util::PrintStreamPrinter,"android/util/PrintStreamPrinter")
J2CPP_DEFINE_METHOD(android::util::PrintStreamPrinter,0,"<init>","(Ljava/io/PrintStream;)V")
J2CPP_DEFINE_METHOD(android::util::PrintStreamPrinter,1,"println","(Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_UTIL_PRINTSTREAMPRINTER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
