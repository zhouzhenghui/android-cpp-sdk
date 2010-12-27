/*================================================================================
  code generated by: java2cpp
  class: android.os.FileObserver
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_OS_FILEOBSERVER_HPP_DECL
#define J2CPP_ANDROID_OS_FILEOBSERVER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace os {

	class FileObserver;
	class FileObserver
		: public cpp_object<FileObserver>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)
		J2CPP_DECLARE_FIELD(6)
		J2CPP_DECLARE_FIELD(7)
		J2CPP_DECLARE_FIELD(8)
		J2CPP_DECLARE_FIELD(9)
		J2CPP_DECLARE_FIELD(10)
		J2CPP_DECLARE_FIELD(11)
		J2CPP_DECLARE_FIELD(12)

		explicit FileObserver(jobject jobj)
		: cpp_object<FileObserver>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		FileObserver(local_ref< java::lang::String > const&);
		FileObserver(local_ref< java::lang::String > const&, cpp_int const&);
		void startWatching();
		void stopWatching();
		void onEvent(cpp_int const&, local_ref< java::lang::String > const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_int > ACCESS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), cpp_int > MODIFY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), cpp_int > ATTRIB;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), cpp_int > CLOSE_WRITE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), cpp_int > CLOSE_NOWRITE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), cpp_int > OPEN;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), cpp_int > MOVED_FROM;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), cpp_int > MOVED_TO;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), cpp_int > CREATE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(9), J2CPP_FIELD_SIGNATURE(9), cpp_int > DELETE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(10), J2CPP_FIELD_SIGNATURE(10), cpp_int > DELETE_SELF;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(11), J2CPP_FIELD_SIGNATURE(11), cpp_int > MOVE_SELF;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(12), J2CPP_FIELD_SIGNATURE(12), cpp_int > ALL_EVENTS;
	}; //class FileObserver

} //namespace os
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_OS_FILEOBSERVER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_OS_FILEOBSERVER_HPP_IMPL
#define J2CPP_ANDROID_OS_FILEOBSERVER_HPP_IMPL

namespace j2cpp {



android::os::FileObserver::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}


android::os::FileObserver::FileObserver(local_ref< java::lang::String > const &a0)
: cpp_object<android::os::FileObserver>(
	environment::get().get_jenv()->NewObject(
		get_class<android::os::FileObserver::J2CPP_CLASS_NAME>(),
		get_method_id<android::os::FileObserver::J2CPP_CLASS_NAME, android::os::FileObserver::J2CPP_METHOD_NAME(0), android::os::FileObserver::J2CPP_METHOD_SIGNATURE(0), false>(),
		a0.get_jtype()
	)
)
{
}



android::os::FileObserver::FileObserver(local_ref< java::lang::String > const &a0, cpp_int const &a1)
: cpp_object<android::os::FileObserver>(
	environment::get().get_jenv()->NewObject(
		get_class<android::os::FileObserver::J2CPP_CLASS_NAME>(),
		get_method_id<android::os::FileObserver::J2CPP_CLASS_NAME, android::os::FileObserver::J2CPP_METHOD_NAME(1), android::os::FileObserver::J2CPP_METHOD_SIGNATURE(1), false>(),
		a0.get_jtype(), a1.get_jtype()
	)
)
{
}



void android::os::FileObserver::startWatching()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

void android::os::FileObserver::stopWatching()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

void android::os::FileObserver::onEvent(cpp_int const &a0, local_ref< java::lang::String > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


static_field<
	android::os::FileObserver::J2CPP_CLASS_NAME,
	android::os::FileObserver::J2CPP_FIELD_NAME(0),
	android::os::FileObserver::J2CPP_FIELD_SIGNATURE(0),
	cpp_int
> android::os::FileObserver::ACCESS;

static_field<
	android::os::FileObserver::J2CPP_CLASS_NAME,
	android::os::FileObserver::J2CPP_FIELD_NAME(1),
	android::os::FileObserver::J2CPP_FIELD_SIGNATURE(1),
	cpp_int
> android::os::FileObserver::MODIFY;

static_field<
	android::os::FileObserver::J2CPP_CLASS_NAME,
	android::os::FileObserver::J2CPP_FIELD_NAME(2),
	android::os::FileObserver::J2CPP_FIELD_SIGNATURE(2),
	cpp_int
> android::os::FileObserver::ATTRIB;

static_field<
	android::os::FileObserver::J2CPP_CLASS_NAME,
	android::os::FileObserver::J2CPP_FIELD_NAME(3),
	android::os::FileObserver::J2CPP_FIELD_SIGNATURE(3),
	cpp_int
> android::os::FileObserver::CLOSE_WRITE;

static_field<
	android::os::FileObserver::J2CPP_CLASS_NAME,
	android::os::FileObserver::J2CPP_FIELD_NAME(4),
	android::os::FileObserver::J2CPP_FIELD_SIGNATURE(4),
	cpp_int
> android::os::FileObserver::CLOSE_NOWRITE;

static_field<
	android::os::FileObserver::J2CPP_CLASS_NAME,
	android::os::FileObserver::J2CPP_FIELD_NAME(5),
	android::os::FileObserver::J2CPP_FIELD_SIGNATURE(5),
	cpp_int
> android::os::FileObserver::OPEN;

static_field<
	android::os::FileObserver::J2CPP_CLASS_NAME,
	android::os::FileObserver::J2CPP_FIELD_NAME(6),
	android::os::FileObserver::J2CPP_FIELD_SIGNATURE(6),
	cpp_int
> android::os::FileObserver::MOVED_FROM;

static_field<
	android::os::FileObserver::J2CPP_CLASS_NAME,
	android::os::FileObserver::J2CPP_FIELD_NAME(7),
	android::os::FileObserver::J2CPP_FIELD_SIGNATURE(7),
	cpp_int
> android::os::FileObserver::MOVED_TO;

static_field<
	android::os::FileObserver::J2CPP_CLASS_NAME,
	android::os::FileObserver::J2CPP_FIELD_NAME(8),
	android::os::FileObserver::J2CPP_FIELD_SIGNATURE(8),
	cpp_int
> android::os::FileObserver::CREATE;

static_field<
	android::os::FileObserver::J2CPP_CLASS_NAME,
	android::os::FileObserver::J2CPP_FIELD_NAME(9),
	android::os::FileObserver::J2CPP_FIELD_SIGNATURE(9),
	cpp_int
> android::os::FileObserver::DELETE;

static_field<
	android::os::FileObserver::J2CPP_CLASS_NAME,
	android::os::FileObserver::J2CPP_FIELD_NAME(10),
	android::os::FileObserver::J2CPP_FIELD_SIGNATURE(10),
	cpp_int
> android::os::FileObserver::DELETE_SELF;

static_field<
	android::os::FileObserver::J2CPP_CLASS_NAME,
	android::os::FileObserver::J2CPP_FIELD_NAME(11),
	android::os::FileObserver::J2CPP_FIELD_SIGNATURE(11),
	cpp_int
> android::os::FileObserver::MOVE_SELF;

static_field<
	android::os::FileObserver::J2CPP_CLASS_NAME,
	android::os::FileObserver::J2CPP_FIELD_NAME(12),
	android::os::FileObserver::J2CPP_FIELD_SIGNATURE(12),
	cpp_int
> android::os::FileObserver::ALL_EVENTS;


J2CPP_DEFINE_CLASS(android::os::FileObserver,"android/os/FileObserver")
J2CPP_DEFINE_METHOD(android::os::FileObserver,0,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::os::FileObserver,1,"<init>","(Ljava/lang/String;I)V")
J2CPP_DEFINE_METHOD(android::os::FileObserver,2,"finalize","()V")
J2CPP_DEFINE_METHOD(android::os::FileObserver,3,"startWatching","()V")
J2CPP_DEFINE_METHOD(android::os::FileObserver,4,"stopWatching","()V")
J2CPP_DEFINE_METHOD(android::os::FileObserver,5,"onEvent","(ILjava/lang/String;)V")
J2CPP_DEFINE_FIELD(android::os::FileObserver,0,"ACCESS","I")
J2CPP_DEFINE_FIELD(android::os::FileObserver,1,"MODIFY","I")
J2CPP_DEFINE_FIELD(android::os::FileObserver,2,"ATTRIB","I")
J2CPP_DEFINE_FIELD(android::os::FileObserver,3,"CLOSE_WRITE","I")
J2CPP_DEFINE_FIELD(android::os::FileObserver,4,"CLOSE_NOWRITE","I")
J2CPP_DEFINE_FIELD(android::os::FileObserver,5,"OPEN","I")
J2CPP_DEFINE_FIELD(android::os::FileObserver,6,"MOVED_FROM","I")
J2CPP_DEFINE_FIELD(android::os::FileObserver,7,"MOVED_TO","I")
J2CPP_DEFINE_FIELD(android::os::FileObserver,8,"CREATE","I")
J2CPP_DEFINE_FIELD(android::os::FileObserver,9,"DELETE","I")
J2CPP_DEFINE_FIELD(android::os::FileObserver,10,"DELETE_SELF","I")
J2CPP_DEFINE_FIELD(android::os::FileObserver,11,"MOVE_SELF","I")
J2CPP_DEFINE_FIELD(android::os::FileObserver,12,"ALL_EVENTS","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_OS_FILEOBSERVER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
