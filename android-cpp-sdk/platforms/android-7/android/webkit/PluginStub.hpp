/*================================================================================
  code generated by: java2cpp
  class: android.webkit.PluginStub
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WEBKIT_PLUGINSTUB_HPP_DECL
#define J2CPP_ANDROID_WEBKIT_PLUGINSTUB_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace view { class View; } } }


#include <android/content/Context.hpp>
#include <android/view/View.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace webkit {

	class PluginStub;
	class PluginStub
		: public cpp_object<PluginStub>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit PluginStub(jobject jobj)
		: cpp_object<PluginStub>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< android::view::View > getEmbeddedView(cpp_int const&, local_ref< android::content::Context > const&);
		local_ref< android::view::View > getFullScreenView(cpp_int const&, local_ref< android::content::Context > const&);
	}; //class PluginStub

} //namespace webkit
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_WEBKIT_PLUGINSTUB_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WEBKIT_PLUGINSTUB_HPP_IMPL
#define J2CPP_ANDROID_WEBKIT_PLUGINSTUB_HPP_IMPL

namespace j2cpp {



android::webkit::PluginStub::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}

local_ref< android::view::View > android::webkit::PluginStub::getEmbeddedView(cpp_int const &a0, local_ref< android::content::Context > const &a1)
{
	return local_ref< android::view::View >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< android::view::View > android::webkit::PluginStub::getFullScreenView(cpp_int const &a0, local_ref< android::content::Context > const &a1)
{
	return local_ref< android::view::View >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::webkit::PluginStub,"android/webkit/PluginStub")
J2CPP_DEFINE_METHOD(android::webkit::PluginStub,0,"getEmbeddedView","(ILandroid/content/Context;)Landroid/view/View;")
J2CPP_DEFINE_METHOD(android::webkit::PluginStub,1,"getFullScreenView","(ILandroid/content/Context;)Landroid/view/View;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WEBKIT_PLUGINSTUB_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
