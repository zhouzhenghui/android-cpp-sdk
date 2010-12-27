/*================================================================================
  code generated by: java2cpp
  class: java.util.Observable
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_OBSERVABLE_HPP_DECL
#define J2CPP_JAVA_UTIL_OBSERVABLE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class Observer; } } }


#include <java/lang/Object.hpp>
#include <java/util/Observer.hpp>


namespace j2cpp {

namespace java { namespace util {

	class Observable;
	class Observable
		: public cpp_object<Observable>
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

		explicit Observable(jobject jobj)
		: cpp_object<Observable>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		Observable();
		void addObserver(local_ref< java::util::Observer > const&);
		cpp_int countObservers();
		void deleteObserver(local_ref< java::util::Observer > const&);
		void deleteObservers();
		cpp_boolean hasChanged();
		void notifyObservers();
		void notifyObservers(local_ref< java::lang::Object > const&);
	}; //class Observable

} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_OBSERVABLE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_OBSERVABLE_HPP_IMPL
#define J2CPP_JAVA_UTIL_OBSERVABLE_HPP_IMPL

namespace j2cpp {



java::util::Observable::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}


java::util::Observable::Observable()
: cpp_object<java::util::Observable>(
	environment::get().get_jenv()->NewObject(
		get_class<java::util::Observable::J2CPP_CLASS_NAME>(),
		get_method_id<java::util::Observable::J2CPP_CLASS_NAME, java::util::Observable::J2CPP_METHOD_NAME(0), java::util::Observable::J2CPP_METHOD_SIGNATURE(0), false>()
	)
)
{
}


void java::util::Observable::addObserver(local_ref< java::util::Observer > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}


cpp_int java::util::Observable::countObservers()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

void java::util::Observable::deleteObserver(local_ref< java::util::Observer > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

void java::util::Observable::deleteObservers()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

cpp_boolean java::util::Observable::hasChanged()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

void java::util::Observable::notifyObservers()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

void java::util::Observable::notifyObservers(local_ref< java::lang::Object > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}



J2CPP_DEFINE_CLASS(java::util::Observable,"java/util/Observable")
J2CPP_DEFINE_METHOD(java::util::Observable,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::util::Observable,1,"addObserver","(Ljava/util/Observer;)V")
J2CPP_DEFINE_METHOD(java::util::Observable,2,"clearChanged","()V")
J2CPP_DEFINE_METHOD(java::util::Observable,3,"countObservers","()I")
J2CPP_DEFINE_METHOD(java::util::Observable,4,"deleteObserver","(Ljava/util/Observer;)V")
J2CPP_DEFINE_METHOD(java::util::Observable,5,"deleteObservers","()V")
J2CPP_DEFINE_METHOD(java::util::Observable,6,"hasChanged","()Z")
J2CPP_DEFINE_METHOD(java::util::Observable,7,"notifyObservers","()V")
J2CPP_DEFINE_METHOD(java::util::Observable,8,"notifyObservers","(Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(java::util::Observable,9,"setChanged","()V")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_OBSERVABLE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
