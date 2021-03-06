/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.view.ViewConfiguration
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_VIEWCONFIGURATION_HPP_DECL
#define J2CPP_ANDROID_VIEW_VIEWCONFIGURATION_HPP_DECL


namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/content/Context.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace view {

	class ViewConfiguration;
	class ViewConfiguration
		: public object<ViewConfiguration>
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
		J2CPP_DECLARE_METHOD(20)
		J2CPP_DECLARE_METHOD(21)
		J2CPP_DECLARE_METHOD(22)
		J2CPP_DECLARE_METHOD(23)
		J2CPP_DECLARE_METHOD(24)
		J2CPP_DECLARE_METHOD(25)
		J2CPP_DECLARE_METHOD(26)

		explicit ViewConfiguration(jobject jobj)
		: object<ViewConfiguration>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		ViewConfiguration();
		static local_ref< android::view::ViewConfiguration > get(local_ref< android::content::Context >  const&);
		static jint getScrollBarSize();
		jint getScaledScrollBarSize();
		static jint getFadingEdgeLength();
		jint getScaledFadingEdgeLength();
		static jint getPressedStateDuration();
		static jint getLongPressTimeout();
		static jint getTapTimeout();
		static jint getJumpTapTimeout();
		static jint getDoubleTapTimeout();
		static jint getEdgeSlop();
		jint getScaledEdgeSlop();
		static jint getTouchSlop();
		jint getScaledTouchSlop();
		jint getScaledDoubleTapSlop();
		static jint getWindowTouchSlop();
		jint getScaledWindowTouchSlop();
		static jint getMinimumFlingVelocity();
		jint getScaledMinimumFlingVelocity();
		static jint getMaximumFlingVelocity();
		jint getScaledMaximumFlingVelocity();
		static jint getMaximumDrawingCacheSize();
		jint getScaledMaximumDrawingCacheSize();
		static jlong getZoomControlsTimeout();
		static jlong getGlobalActionKeyTimeout();
		static jfloat getScrollFriction();
	}; //class ViewConfiguration

} //namespace view
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_VIEWCONFIGURATION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_VIEWCONFIGURATION_HPP_IMPL
#define J2CPP_ANDROID_VIEW_VIEWCONFIGURATION_HPP_IMPL

namespace j2cpp {



android::view::ViewConfiguration::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::view::ViewConfiguration::ViewConfiguration()
: object<android::view::ViewConfiguration>(
	call_new_object<
		android::view::ViewConfiguration::J2CPP_CLASS_NAME,
		android::view::ViewConfiguration::J2CPP_METHOD_NAME(0),
		android::view::ViewConfiguration::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


local_ref< android::view::ViewConfiguration > android::view::ViewConfiguration::get(local_ref< android::content::Context > const &a0)
{
	return call_static_method<
		android::view::ViewConfiguration::J2CPP_CLASS_NAME,
		android::view::ViewConfiguration::J2CPP_METHOD_NAME(1),
		android::view::ViewConfiguration::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< android::view::ViewConfiguration >
	>(a0);
}

jint android::view::ViewConfiguration::getScrollBarSize()
{
	return call_static_method<
		android::view::ViewConfiguration::J2CPP_CLASS_NAME,
		android::view::ViewConfiguration::J2CPP_METHOD_NAME(2),
		android::view::ViewConfiguration::J2CPP_METHOD_SIGNATURE(2), 
		jint
	>();
}

jint android::view::ViewConfiguration::getScaledScrollBarSize()
{
	return call_method<
		android::view::ViewConfiguration::J2CPP_CLASS_NAME,
		android::view::ViewConfiguration::J2CPP_METHOD_NAME(3),
		android::view::ViewConfiguration::J2CPP_METHOD_SIGNATURE(3), 
		jint
	>(get_jobject());
}

jint android::view::ViewConfiguration::getFadingEdgeLength()
{
	return call_static_method<
		android::view::ViewConfiguration::J2CPP_CLASS_NAME,
		android::view::ViewConfiguration::J2CPP_METHOD_NAME(4),
		android::view::ViewConfiguration::J2CPP_METHOD_SIGNATURE(4), 
		jint
	>();
}

jint android::view::ViewConfiguration::getScaledFadingEdgeLength()
{
	return call_method<
		android::view::ViewConfiguration::J2CPP_CLASS_NAME,
		android::view::ViewConfiguration::J2CPP_METHOD_NAME(5),
		android::view::ViewConfiguration::J2CPP_METHOD_SIGNATURE(5), 
		jint
	>(get_jobject());
}

jint android::view::ViewConfiguration::getPressedStateDuration()
{
	return call_static_method<
		android::view::ViewConfiguration::J2CPP_CLASS_NAME,
		android::view::ViewConfiguration::J2CPP_METHOD_NAME(6),
		android::view::ViewConfiguration::J2CPP_METHOD_SIGNATURE(6), 
		jint
	>();
}

jint android::view::ViewConfiguration::getLongPressTimeout()
{
	return call_static_method<
		android::view::ViewConfiguration::J2CPP_CLASS_NAME,
		android::view::ViewConfiguration::J2CPP_METHOD_NAME(7),
		android::view::ViewConfiguration::J2CPP_METHOD_SIGNATURE(7), 
		jint
	>();
}

jint android::view::ViewConfiguration::getTapTimeout()
{
	return call_static_method<
		android::view::ViewConfiguration::J2CPP_CLASS_NAME,
		android::view::ViewConfiguration::J2CPP_METHOD_NAME(8),
		android::view::ViewConfiguration::J2CPP_METHOD_SIGNATURE(8), 
		jint
	>();
}

jint android::view::ViewConfiguration::getJumpTapTimeout()
{
	return call_static_method<
		android::view::ViewConfiguration::J2CPP_CLASS_NAME,
		android::view::ViewConfiguration::J2CPP_METHOD_NAME(9),
		android::view::ViewConfiguration::J2CPP_METHOD_SIGNATURE(9), 
		jint
	>();
}

jint android::view::ViewConfiguration::getDoubleTapTimeout()
{
	return call_static_method<
		android::view::ViewConfiguration::J2CPP_CLASS_NAME,
		android::view::ViewConfiguration::J2CPP_METHOD_NAME(10),
		android::view::ViewConfiguration::J2CPP_METHOD_SIGNATURE(10), 
		jint
	>();
}

jint android::view::ViewConfiguration::getEdgeSlop()
{
	return call_static_method<
		android::view::ViewConfiguration::J2CPP_CLASS_NAME,
		android::view::ViewConfiguration::J2CPP_METHOD_NAME(11),
		android::view::ViewConfiguration::J2CPP_METHOD_SIGNATURE(11), 
		jint
	>();
}

jint android::view::ViewConfiguration::getScaledEdgeSlop()
{
	return call_method<
		android::view::ViewConfiguration::J2CPP_CLASS_NAME,
		android::view::ViewConfiguration::J2CPP_METHOD_NAME(12),
		android::view::ViewConfiguration::J2CPP_METHOD_SIGNATURE(12), 
		jint
	>(get_jobject());
}

jint android::view::ViewConfiguration::getTouchSlop()
{
	return call_static_method<
		android::view::ViewConfiguration::J2CPP_CLASS_NAME,
		android::view::ViewConfiguration::J2CPP_METHOD_NAME(13),
		android::view::ViewConfiguration::J2CPP_METHOD_SIGNATURE(13), 
		jint
	>();
}

jint android::view::ViewConfiguration::getScaledTouchSlop()
{
	return call_method<
		android::view::ViewConfiguration::J2CPP_CLASS_NAME,
		android::view::ViewConfiguration::J2CPP_METHOD_NAME(14),
		android::view::ViewConfiguration::J2CPP_METHOD_SIGNATURE(14), 
		jint
	>(get_jobject());
}

jint android::view::ViewConfiguration::getScaledDoubleTapSlop()
{
	return call_method<
		android::view::ViewConfiguration::J2CPP_CLASS_NAME,
		android::view::ViewConfiguration::J2CPP_METHOD_NAME(15),
		android::view::ViewConfiguration::J2CPP_METHOD_SIGNATURE(15), 
		jint
	>(get_jobject());
}

jint android::view::ViewConfiguration::getWindowTouchSlop()
{
	return call_static_method<
		android::view::ViewConfiguration::J2CPP_CLASS_NAME,
		android::view::ViewConfiguration::J2CPP_METHOD_NAME(16),
		android::view::ViewConfiguration::J2CPP_METHOD_SIGNATURE(16), 
		jint
	>();
}

jint android::view::ViewConfiguration::getScaledWindowTouchSlop()
{
	return call_method<
		android::view::ViewConfiguration::J2CPP_CLASS_NAME,
		android::view::ViewConfiguration::J2CPP_METHOD_NAME(17),
		android::view::ViewConfiguration::J2CPP_METHOD_SIGNATURE(17), 
		jint
	>(get_jobject());
}

jint android::view::ViewConfiguration::getMinimumFlingVelocity()
{
	return call_static_method<
		android::view::ViewConfiguration::J2CPP_CLASS_NAME,
		android::view::ViewConfiguration::J2CPP_METHOD_NAME(18),
		android::view::ViewConfiguration::J2CPP_METHOD_SIGNATURE(18), 
		jint
	>();
}

jint android::view::ViewConfiguration::getScaledMinimumFlingVelocity()
{
	return call_method<
		android::view::ViewConfiguration::J2CPP_CLASS_NAME,
		android::view::ViewConfiguration::J2CPP_METHOD_NAME(19),
		android::view::ViewConfiguration::J2CPP_METHOD_SIGNATURE(19), 
		jint
	>(get_jobject());
}

jint android::view::ViewConfiguration::getMaximumFlingVelocity()
{
	return call_static_method<
		android::view::ViewConfiguration::J2CPP_CLASS_NAME,
		android::view::ViewConfiguration::J2CPP_METHOD_NAME(20),
		android::view::ViewConfiguration::J2CPP_METHOD_SIGNATURE(20), 
		jint
	>();
}

jint android::view::ViewConfiguration::getScaledMaximumFlingVelocity()
{
	return call_method<
		android::view::ViewConfiguration::J2CPP_CLASS_NAME,
		android::view::ViewConfiguration::J2CPP_METHOD_NAME(21),
		android::view::ViewConfiguration::J2CPP_METHOD_SIGNATURE(21), 
		jint
	>(get_jobject());
}

jint android::view::ViewConfiguration::getMaximumDrawingCacheSize()
{
	return call_static_method<
		android::view::ViewConfiguration::J2CPP_CLASS_NAME,
		android::view::ViewConfiguration::J2CPP_METHOD_NAME(22),
		android::view::ViewConfiguration::J2CPP_METHOD_SIGNATURE(22), 
		jint
	>();
}

jint android::view::ViewConfiguration::getScaledMaximumDrawingCacheSize()
{
	return call_method<
		android::view::ViewConfiguration::J2CPP_CLASS_NAME,
		android::view::ViewConfiguration::J2CPP_METHOD_NAME(23),
		android::view::ViewConfiguration::J2CPP_METHOD_SIGNATURE(23), 
		jint
	>(get_jobject());
}

jlong android::view::ViewConfiguration::getZoomControlsTimeout()
{
	return call_static_method<
		android::view::ViewConfiguration::J2CPP_CLASS_NAME,
		android::view::ViewConfiguration::J2CPP_METHOD_NAME(24),
		android::view::ViewConfiguration::J2CPP_METHOD_SIGNATURE(24), 
		jlong
	>();
}

jlong android::view::ViewConfiguration::getGlobalActionKeyTimeout()
{
	return call_static_method<
		android::view::ViewConfiguration::J2CPP_CLASS_NAME,
		android::view::ViewConfiguration::J2CPP_METHOD_NAME(25),
		android::view::ViewConfiguration::J2CPP_METHOD_SIGNATURE(25), 
		jlong
	>();
}

jfloat android::view::ViewConfiguration::getScrollFriction()
{
	return call_static_method<
		android::view::ViewConfiguration::J2CPP_CLASS_NAME,
		android::view::ViewConfiguration::J2CPP_METHOD_NAME(26),
		android::view::ViewConfiguration::J2CPP_METHOD_SIGNATURE(26), 
		jfloat
	>();
}


J2CPP_DEFINE_CLASS(android::view::ViewConfiguration,"android/view/ViewConfiguration")
J2CPP_DEFINE_METHOD(android::view::ViewConfiguration,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::view::ViewConfiguration,1,"get","(Landroid/content/Context;)Landroid/view/ViewConfiguration;")
J2CPP_DEFINE_METHOD(android::view::ViewConfiguration,2,"getScrollBarSize","()I")
J2CPP_DEFINE_METHOD(android::view::ViewConfiguration,3,"getScaledScrollBarSize","()I")
J2CPP_DEFINE_METHOD(android::view::ViewConfiguration,4,"getFadingEdgeLength","()I")
J2CPP_DEFINE_METHOD(android::view::ViewConfiguration,5,"getScaledFadingEdgeLength","()I")
J2CPP_DEFINE_METHOD(android::view::ViewConfiguration,6,"getPressedStateDuration","()I")
J2CPP_DEFINE_METHOD(android::view::ViewConfiguration,7,"getLongPressTimeout","()I")
J2CPP_DEFINE_METHOD(android::view::ViewConfiguration,8,"getTapTimeout","()I")
J2CPP_DEFINE_METHOD(android::view::ViewConfiguration,9,"getJumpTapTimeout","()I")
J2CPP_DEFINE_METHOD(android::view::ViewConfiguration,10,"getDoubleTapTimeout","()I")
J2CPP_DEFINE_METHOD(android::view::ViewConfiguration,11,"getEdgeSlop","()I")
J2CPP_DEFINE_METHOD(android::view::ViewConfiguration,12,"getScaledEdgeSlop","()I")
J2CPP_DEFINE_METHOD(android::view::ViewConfiguration,13,"getTouchSlop","()I")
J2CPP_DEFINE_METHOD(android::view::ViewConfiguration,14,"getScaledTouchSlop","()I")
J2CPP_DEFINE_METHOD(android::view::ViewConfiguration,15,"getScaledDoubleTapSlop","()I")
J2CPP_DEFINE_METHOD(android::view::ViewConfiguration,16,"getWindowTouchSlop","()I")
J2CPP_DEFINE_METHOD(android::view::ViewConfiguration,17,"getScaledWindowTouchSlop","()I")
J2CPP_DEFINE_METHOD(android::view::ViewConfiguration,18,"getMinimumFlingVelocity","()I")
J2CPP_DEFINE_METHOD(android::view::ViewConfiguration,19,"getScaledMinimumFlingVelocity","()I")
J2CPP_DEFINE_METHOD(android::view::ViewConfiguration,20,"getMaximumFlingVelocity","()I")
J2CPP_DEFINE_METHOD(android::view::ViewConfiguration,21,"getScaledMaximumFlingVelocity","()I")
J2CPP_DEFINE_METHOD(android::view::ViewConfiguration,22,"getMaximumDrawingCacheSize","()I")
J2CPP_DEFINE_METHOD(android::view::ViewConfiguration,23,"getScaledMaximumDrawingCacheSize","()I")
J2CPP_DEFINE_METHOD(android::view::ViewConfiguration,24,"getZoomControlsTimeout","()J")
J2CPP_DEFINE_METHOD(android::view::ViewConfiguration,25,"getGlobalActionKeyTimeout","()J")
J2CPP_DEFINE_METHOD(android::view::ViewConfiguration,26,"getScrollFriction","()F")

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_VIEWCONFIGURATION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
