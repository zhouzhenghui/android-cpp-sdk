/*================================================================================
  code generated by: java2cpp
  class: java.util.zip.Inflater
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_ZIP_INFLATER_HPP_DECL
#define J2CPP_JAVA_UTIL_ZIP_INFLATER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>


namespace j2cpp {

namespace java { namespace util { namespace zip {

	class Inflater;
	class Inflater
		: public cpp_object<Inflater>
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

		explicit Inflater(jobject jobj)
		: cpp_object<Inflater>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		Inflater();
		Inflater(cpp_boolean const&);
		void end();
		cpp_boolean finished();
		cpp_int getAdler();
		cpp_long getBytesRead();
		cpp_long getBytesWritten();
		cpp_int getRemaining();
		cpp_int getTotalIn();
		cpp_int getTotalOut();
		cpp_int inflate(local_ref< cpp_byte_array<1> > const&);
		cpp_int inflate(local_ref< cpp_byte_array<1> > const&, cpp_int const&, cpp_int const&);
		cpp_boolean needsDictionary();
		cpp_boolean needsInput();
		void reset();
		void setDictionary(local_ref< cpp_byte_array<1> > const&);
		void setDictionary(local_ref< cpp_byte_array<1> > const&, cpp_int const&, cpp_int const&);
		void setInput(local_ref< cpp_byte_array<1> > const&);
		void setInput(local_ref< cpp_byte_array<1> > const&, cpp_int const&, cpp_int const&);
	}; //class Inflater

} //namespace zip
} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_ZIP_INFLATER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_ZIP_INFLATER_HPP_IMPL
#define J2CPP_JAVA_UTIL_ZIP_INFLATER_HPP_IMPL

namespace j2cpp {



java::util::zip::Inflater::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}


java::util::zip::Inflater::Inflater()
: cpp_object<java::util::zip::Inflater>(
	environment::get().get_jenv()->NewObject(
		get_class<java::util::zip::Inflater::J2CPP_CLASS_NAME>(),
		get_method_id<java::util::zip::Inflater::J2CPP_CLASS_NAME, java::util::zip::Inflater::J2CPP_METHOD_NAME(0), java::util::zip::Inflater::J2CPP_METHOD_SIGNATURE(0), false>()
	)
)
{
}



java::util::zip::Inflater::Inflater(cpp_boolean const &a0)
: cpp_object<java::util::zip::Inflater>(
	environment::get().get_jenv()->NewObject(
		get_class<java::util::zip::Inflater::J2CPP_CLASS_NAME>(),
		get_method_id<java::util::zip::Inflater::J2CPP_CLASS_NAME, java::util::zip::Inflater::J2CPP_METHOD_NAME(1), java::util::zip::Inflater::J2CPP_METHOD_SIGNATURE(1), false>(),
		a0.get_jtype()
	)
)
{
}


void java::util::zip::Inflater::end()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}


cpp_boolean java::util::zip::Inflater::finished()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

cpp_int java::util::zip::Inflater::getAdler()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

cpp_long java::util::zip::Inflater::getBytesRead()
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

cpp_long java::util::zip::Inflater::getBytesWritten()
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

cpp_int java::util::zip::Inflater::getRemaining()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}

cpp_int java::util::zip::Inflater::getTotalIn()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}

cpp_int java::util::zip::Inflater::getTotalOut()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>()
		)
	);
}

cpp_int java::util::zip::Inflater::inflate(local_ref< cpp_byte_array<1> > const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::util::zip::Inflater::inflate(local_ref< cpp_byte_array<1> > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

cpp_boolean java::util::zip::Inflater::needsDictionary()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>()
		)
	);
}

cpp_boolean java::util::zip::Inflater::needsInput()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>()
		)
	);
}

void java::util::zip::Inflater::reset()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>()
		)
	);
}

void java::util::zip::Inflater::setDictionary(local_ref< cpp_byte_array<1> > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>(),
			a0.get_jtype()
		)
	);
}

void java::util::zip::Inflater::setDictionary(local_ref< cpp_byte_array<1> > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void java::util::zip::Inflater::setInput(local_ref< cpp_byte_array<1> > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>(),
			a0.get_jtype()
		)
	);
}

void java::util::zip::Inflater::setInput(local_ref< cpp_byte_array<1> > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(java::util::zip::Inflater,"java/util/zip/Inflater")
J2CPP_DEFINE_METHOD(java::util::zip::Inflater,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::util::zip::Inflater,1,"<init>","(Z)V")
J2CPP_DEFINE_METHOD(java::util::zip::Inflater,2,"end","()V")
J2CPP_DEFINE_METHOD(java::util::zip::Inflater,3,"finalize","()V")
J2CPP_DEFINE_METHOD(java::util::zip::Inflater,4,"finished","()Z")
J2CPP_DEFINE_METHOD(java::util::zip::Inflater,5,"getAdler","()I")
J2CPP_DEFINE_METHOD(java::util::zip::Inflater,6,"getBytesRead","()J")
J2CPP_DEFINE_METHOD(java::util::zip::Inflater,7,"getBytesWritten","()J")
J2CPP_DEFINE_METHOD(java::util::zip::Inflater,8,"getRemaining","()I")
J2CPP_DEFINE_METHOD(java::util::zip::Inflater,9,"getTotalIn","()I")
J2CPP_DEFINE_METHOD(java::util::zip::Inflater,10,"getTotalOut","()I")
J2CPP_DEFINE_METHOD(java::util::zip::Inflater,11,"inflate","([B)I")
J2CPP_DEFINE_METHOD(java::util::zip::Inflater,12,"inflate","([BII)I")
J2CPP_DEFINE_METHOD(java::util::zip::Inflater,13,"needsDictionary","()Z")
J2CPP_DEFINE_METHOD(java::util::zip::Inflater,14,"needsInput","()Z")
J2CPP_DEFINE_METHOD(java::util::zip::Inflater,15,"reset","()V")
J2CPP_DEFINE_METHOD(java::util::zip::Inflater,16,"setDictionary","([B)V")
J2CPP_DEFINE_METHOD(java::util::zip::Inflater,17,"setDictionary","([BII)V")
J2CPP_DEFINE_METHOD(java::util::zip::Inflater,18,"setInput","([B)V")
J2CPP_DEFINE_METHOD(java::util::zip::Inflater,19,"setInput","([BII)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_ZIP_INFLATER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
