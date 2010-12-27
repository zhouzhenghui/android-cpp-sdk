/*================================================================================
  code generated by: java2cpp
  class: android.sax.ElementListener
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_SAX_ELEMENTLISTENER_HPP_DECL
#define J2CPP_ANDROID_SAX_ELEMENTLISTENER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace sax { class EndElementListener; } } }
namespace j2cpp { namespace android { namespace sax { class StartElementListener; } } }


#include <android/sax/EndElementListener.hpp>
#include <android/sax/StartElementListener.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace sax {

	class ElementListener;
	class ElementListener
		: public cpp_object<ElementListener>
	{
	public:

		J2CPP_DECLARE_CLASS


		explicit ElementListener(jobject jobj)
		: cpp_object<ElementListener>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::sax::StartElementListener>() const;
		operator local_ref<android::sax::EndElementListener>() const;

	}; //class ElementListener

} //namespace sax
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_SAX_ELEMENTLISTENER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_SAX_ELEMENTLISTENER_HPP_IMPL
#define J2CPP_ANDROID_SAX_ELEMENTLISTENER_HPP_IMPL

namespace j2cpp {



android::sax::ElementListener::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}

android::sax::ElementListener::operator local_ref<android::sax::StartElementListener>() const
{
	return local_ref<android::sax::StartElementListener>(get_jtype());
}

android::sax::ElementListener::operator local_ref<android::sax::EndElementListener>() const
{
	return local_ref<android::sax::EndElementListener>(get_jtype());
}

J2CPP_DEFINE_CLASS(android::sax::ElementListener,"android/sax/ElementListener")

} //namespace j2cpp

#endif //J2CPP_ANDROID_SAX_ELEMENTLISTENER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
