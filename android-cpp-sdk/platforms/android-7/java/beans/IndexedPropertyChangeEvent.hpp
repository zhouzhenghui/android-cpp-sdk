/*================================================================================
  code generated by: java2cpp
  class: java.beans.IndexedPropertyChangeEvent
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_BEANS_INDEXEDPROPERTYCHANGEEVENT_HPP_DECL
#define J2CPP_JAVA_BEANS_INDEXEDPROPERTYCHANGEEVENT_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace beans { class PropertyChangeEvent; } } }


#include <java/beans/PropertyChangeEvent.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace beans {

	class IndexedPropertyChangeEvent;
	class IndexedPropertyChangeEvent
		: public cpp_object<IndexedPropertyChangeEvent>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit IndexedPropertyChangeEvent(jobject jobj)
		: cpp_object<IndexedPropertyChangeEvent>(jobj)
		{
		}

		operator local_ref<java::beans::PropertyChangeEvent>() const;


		IndexedPropertyChangeEvent(local_ref< java::lang::Object > const&, local_ref< java::lang::String > const&, local_ref< java::lang::Object > const&, local_ref< java::lang::Object > const&, cpp_int const&);
		cpp_int getIndex();
	}; //class IndexedPropertyChangeEvent

} //namespace beans
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_BEANS_INDEXEDPROPERTYCHANGEEVENT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_BEANS_INDEXEDPROPERTYCHANGEEVENT_HPP_IMPL
#define J2CPP_JAVA_BEANS_INDEXEDPROPERTYCHANGEEVENT_HPP_IMPL

namespace j2cpp {



java::beans::IndexedPropertyChangeEvent::operator local_ref<java::beans::PropertyChangeEvent>() const
{
	return local_ref<java::beans::PropertyChangeEvent>(get_jtype());
}


java::beans::IndexedPropertyChangeEvent::IndexedPropertyChangeEvent(local_ref< java::lang::Object > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::Object > const &a2, local_ref< java::lang::Object > const &a3, cpp_int const &a4)
: cpp_object<java::beans::IndexedPropertyChangeEvent>(
	environment::get().get_jenv()->NewObject(
		get_class<java::beans::IndexedPropertyChangeEvent::J2CPP_CLASS_NAME>(),
		get_method_id<java::beans::IndexedPropertyChangeEvent::J2CPP_CLASS_NAME, java::beans::IndexedPropertyChangeEvent::J2CPP_METHOD_NAME(0), java::beans::IndexedPropertyChangeEvent::J2CPP_METHOD_SIGNATURE(0), false>(),
		a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype()
	)
)
{
}


cpp_int java::beans::IndexedPropertyChangeEvent::getIndex()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(java::beans::IndexedPropertyChangeEvent,"java/beans/IndexedPropertyChangeEvent")
J2CPP_DEFINE_METHOD(java::beans::IndexedPropertyChangeEvent,0,"<init>","(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;I)V")
J2CPP_DEFINE_METHOD(java::beans::IndexedPropertyChangeEvent,1,"getIndex","()I")

} //namespace j2cpp

#endif //J2CPP_JAVA_BEANS_INDEXEDPROPERTYCHANGEEVENT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
