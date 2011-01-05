/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.prefs.PreferenceChangeEvent
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_PREFS_PREFERENCECHANGEEVENT_HPP_DECL
#define J2CPP_JAVA_UTIL_PREFS_PREFERENCECHANGEEVENT_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace util { namespace prefs { class Preferences; } } } }
namespace j2cpp { namespace java { namespace util { class EventObject; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/EventObject.hpp>
#include <java/util/prefs/Preferences.hpp>


namespace j2cpp {

namespace java { namespace util { namespace prefs {

	class PreferenceChangeEvent;
	class PreferenceChangeEvent
		: public object<PreferenceChangeEvent>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		explicit PreferenceChangeEvent(jobject jobj)
		: object<PreferenceChangeEvent>(jobj)
		{
		}

		operator local_ref<java::io::Serializable>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::util::EventObject>() const;


		PreferenceChangeEvent(local_ref< java::util::prefs::Preferences > const&, local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		local_ref< java::lang::String > getKey();
		local_ref< java::lang::String > getNewValue();
		local_ref< java::util::prefs::Preferences > getNode();
	}; //class PreferenceChangeEvent

} //namespace prefs
} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_PREFS_PREFERENCECHANGEEVENT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_PREFS_PREFERENCECHANGEEVENT_HPP_IMPL
#define J2CPP_JAVA_UTIL_PREFS_PREFERENCECHANGEEVENT_HPP_IMPL

namespace j2cpp {



java::util::prefs::PreferenceChangeEvent::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}

java::util::prefs::PreferenceChangeEvent::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::util::prefs::PreferenceChangeEvent::operator local_ref<java::util::EventObject>() const
{
	return local_ref<java::util::EventObject>(get_jobject());
}


java::util::prefs::PreferenceChangeEvent::PreferenceChangeEvent(local_ref< java::util::prefs::Preferences > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::String > const &a2)
: object<java::util::prefs::PreferenceChangeEvent>(
	call_new_object<
		java::util::prefs::PreferenceChangeEvent::J2CPP_CLASS_NAME,
		java::util::prefs::PreferenceChangeEvent::J2CPP_METHOD_NAME(0),
		java::util::prefs::PreferenceChangeEvent::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1, a2)
)
{
}


local_ref< java::lang::String > java::util::prefs::PreferenceChangeEvent::getKey()
{
	return call_method<
		java::util::prefs::PreferenceChangeEvent::J2CPP_CLASS_NAME,
		java::util::prefs::PreferenceChangeEvent::J2CPP_METHOD_NAME(1),
		java::util::prefs::PreferenceChangeEvent::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::String > java::util::prefs::PreferenceChangeEvent::getNewValue()
{
	return call_method<
		java::util::prefs::PreferenceChangeEvent::J2CPP_CLASS_NAME,
		java::util::prefs::PreferenceChangeEvent::J2CPP_METHOD_NAME(2),
		java::util::prefs::PreferenceChangeEvent::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::util::prefs::Preferences > java::util::prefs::PreferenceChangeEvent::getNode()
{
	return call_method<
		java::util::prefs::PreferenceChangeEvent::J2CPP_CLASS_NAME,
		java::util::prefs::PreferenceChangeEvent::J2CPP_METHOD_NAME(3),
		java::util::prefs::PreferenceChangeEvent::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::util::prefs::Preferences >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(java::util::prefs::PreferenceChangeEvent,"java/util/prefs/PreferenceChangeEvent")
J2CPP_DEFINE_METHOD(java::util::prefs::PreferenceChangeEvent,0,"<init>","(Ljava/util/prefs/Preferences;Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::util::prefs::PreferenceChangeEvent,1,"getKey","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::prefs::PreferenceChangeEvent,2,"getNewValue","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::prefs::PreferenceChangeEvent,3,"getNode","()Ljava/util/prefs/Preferences;")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_PREFS_PREFERENCECHANGEEVENT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
