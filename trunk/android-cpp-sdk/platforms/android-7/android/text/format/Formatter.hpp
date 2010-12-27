/*================================================================================
  code generated by: java2cpp
  class: android.text.format.Formatter
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_FORMAT_FORMATTER_HPP_DECL
#define J2CPP_ANDROID_TEXT_FORMAT_FORMATTER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }


#include <android/content/Context.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace text { namespace format {

	class Formatter;
	class Formatter
		: public cpp_object<Formatter>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		explicit Formatter(jobject jobj)
		: cpp_object<Formatter>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		Formatter();
		static local_ref< java::lang::String > formatFileSize(local_ref< android::content::Context > const&, cpp_long const&);
		static local_ref< java::lang::String > formatShortFileSize(local_ref< android::content::Context > const&, cpp_long const&);
		static local_ref< java::lang::String > formatIpAddress(cpp_int const&);
	}; //class Formatter

} //namespace format
} //namespace text
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_FORMAT_FORMATTER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_FORMAT_FORMATTER_HPP_IMPL
#define J2CPP_ANDROID_TEXT_FORMAT_FORMATTER_HPP_IMPL

namespace j2cpp {



android::text::format::Formatter::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}


android::text::format::Formatter::Formatter()
: cpp_object<android::text::format::Formatter>(
	environment::get().get_jenv()->NewObject(
		get_class<android::text::format::Formatter::J2CPP_CLASS_NAME>(),
		get_method_id<android::text::format::Formatter::J2CPP_CLASS_NAME, android::text::format::Formatter::J2CPP_METHOD_NAME(0), android::text::format::Formatter::J2CPP_METHOD_SIGNATURE(0), false>()
	)
)
{
}


local_ref< java::lang::String > android::text::format::Formatter::formatFileSize(local_ref< android::content::Context > const &a0, cpp_long const &a1)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::lang::String > android::text::format::Formatter::formatShortFileSize(local_ref< android::content::Context > const &a0, cpp_long const &a1)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::lang::String > android::text::format::Formatter::formatIpAddress(cpp_int const &a0)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), true>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::text::format::Formatter,"android/text/format/Formatter")
J2CPP_DEFINE_METHOD(android::text::format::Formatter,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::text::format::Formatter,1,"formatFileSize","(Landroid/content/Context;J)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::text::format::Formatter,2,"formatShortFileSize","(Landroid/content/Context;J)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::text::format::Formatter,3,"formatIpAddress","(I)Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_FORMAT_FORMATTER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
