/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.EventObject
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_EVENTOBJECT_HPP_DECL
#define J2CPP_JAVA_UTIL_EVENTOBJECT_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace util {

	class EventObject;
	class EventObject
		: public object<EventObject>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_FIELD(0)

		explicit EventObject(jobject jobj)
		: object<EventObject>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::io::Serializable>() const;


		EventObject(local_ref< java::lang::Object > const&);
		local_ref< java::lang::Object > getSource();
		local_ref< java::lang::String > toString();

	}; //class EventObject

} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_EVENTOBJECT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_EVENTOBJECT_HPP_IMPL
#define J2CPP_JAVA_UTIL_EVENTOBJECT_HPP_IMPL

namespace j2cpp {



java::util::EventObject::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::util::EventObject::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}


java::util::EventObject::EventObject(local_ref< java::lang::Object > const &a0)
: object<java::util::EventObject>(
	call_new_object<
		java::util::EventObject::J2CPP_CLASS_NAME,
		java::util::EventObject::J2CPP_METHOD_NAME(0),
		java::util::EventObject::J2CPP_METHOD_SIGNATURE(0)>
	(a0)
)
{
}


local_ref< java::lang::Object > java::util::EventObject::getSource()
{
	return call_method<
		java::util::EventObject::J2CPP_CLASS_NAME,
		java::util::EventObject::J2CPP_METHOD_NAME(1),
		java::util::EventObject::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::Object > >
	(get_jobject());
}

local_ref< java::lang::String > java::util::EventObject::toString()
{
	return call_method<
		java::util::EventObject::J2CPP_CLASS_NAME,
		java::util::EventObject::J2CPP_METHOD_NAME(2),
		java::util::EventObject::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::String > >
	(get_jobject());
}



J2CPP_DEFINE_CLASS(java::util::EventObject,"java/util/EventObject")
J2CPP_DEFINE_METHOD(java::util::EventObject,0,"<init>","(Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(java::util::EventObject,1,"getSource","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::EventObject,2,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_FIELD(java::util::EventObject,0,"source","Ljava/lang/Object;")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_EVENTOBJECT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
