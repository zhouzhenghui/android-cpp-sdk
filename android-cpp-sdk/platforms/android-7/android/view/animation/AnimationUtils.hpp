/*================================================================================
  code generated by: java2cpp
  class: android.view.animation.AnimationUtils
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_ANIMATION_ANIMATIONUTILS_HPP_DECL
#define J2CPP_ANDROID_VIEW_ANIMATION_ANIMATIONUTILS_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace view { namespace animation { class Interpolator; } } } }
namespace j2cpp { namespace android { namespace view { namespace animation { class LayoutAnimationController; } } } }
namespace j2cpp { namespace android { namespace view { namespace animation { class Animation; } } } }


#include <android/content/Context.hpp>
#include <android/view/animation/Animation.hpp>
#include <android/view/animation/Interpolator.hpp>
#include <android/view/animation/LayoutAnimationController.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace view { namespace animation {

	class AnimationUtils;
	class AnimationUtils
		: public cpp_object<AnimationUtils>
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

		explicit AnimationUtils(jobject jobj)
		: cpp_object<AnimationUtils>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		AnimationUtils();
		static cpp_long currentAnimationTimeMillis();
		static local_ref< android::view::animation::Animation > loadAnimation(local_ref< android::content::Context > const&, cpp_int const&);
		static local_ref< android::view::animation::LayoutAnimationController > loadLayoutAnimation(local_ref< android::content::Context > const&, cpp_int const&);
		static local_ref< android::view::animation::Animation > makeInAnimation(local_ref< android::content::Context > const&, cpp_boolean const&);
		static local_ref< android::view::animation::Animation > makeOutAnimation(local_ref< android::content::Context > const&, cpp_boolean const&);
		static local_ref< android::view::animation::Animation > makeInChildBottomAnimation(local_ref< android::content::Context > const&);
		static local_ref< android::view::animation::Interpolator > loadInterpolator(local_ref< android::content::Context > const&, cpp_int const&);
	}; //class AnimationUtils

} //namespace animation
} //namespace view
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_ANIMATION_ANIMATIONUTILS_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_ANIMATION_ANIMATIONUTILS_HPP_IMPL
#define J2CPP_ANDROID_VIEW_ANIMATION_ANIMATIONUTILS_HPP_IMPL

namespace j2cpp {



android::view::animation::AnimationUtils::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}


android::view::animation::AnimationUtils::AnimationUtils()
: cpp_object<android::view::animation::AnimationUtils>(
	environment::get().get_jenv()->NewObject(
		get_class<android::view::animation::AnimationUtils::J2CPP_CLASS_NAME>(),
		get_method_id<android::view::animation::AnimationUtils::J2CPP_CLASS_NAME, android::view::animation::AnimationUtils::J2CPP_METHOD_NAME(0), android::view::animation::AnimationUtils::J2CPP_METHOD_SIGNATURE(0), false>()
	)
)
{
}


cpp_long android::view::animation::AnimationUtils::currentAnimationTimeMillis()
{
	return cpp_long(
		environment::get().get_jenv()->CallStaticLongMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), true>()
		)
	);
}

local_ref< android::view::animation::Animation > android::view::animation::AnimationUtils::loadAnimation(local_ref< android::content::Context > const &a0, cpp_int const &a1)
{
	return local_ref< android::view::animation::Animation >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< android::view::animation::LayoutAnimationController > android::view::animation::AnimationUtils::loadLayoutAnimation(local_ref< android::content::Context > const &a0, cpp_int const &a1)
{
	return local_ref< android::view::animation::LayoutAnimationController >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< android::view::animation::Animation > android::view::animation::AnimationUtils::makeInAnimation(local_ref< android::content::Context > const &a0, cpp_boolean const &a1)
{
	return local_ref< android::view::animation::Animation >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< android::view::animation::Animation > android::view::animation::AnimationUtils::makeOutAnimation(local_ref< android::content::Context > const &a0, cpp_boolean const &a1)
{
	return local_ref< android::view::animation::Animation >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< android::view::animation::Animation > android::view::animation::AnimationUtils::makeInChildBottomAnimation(local_ref< android::content::Context > const &a0)
{
	return local_ref< android::view::animation::Animation >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), true>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::view::animation::Interpolator > android::view::animation::AnimationUtils::loadInterpolator(local_ref< android::content::Context > const &a0, cpp_int const &a1)
{
	return local_ref< android::view::animation::Interpolator >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::view::animation::AnimationUtils,"android/view/animation/AnimationUtils")
J2CPP_DEFINE_METHOD(android::view::animation::AnimationUtils,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::view::animation::AnimationUtils,1,"currentAnimationTimeMillis","()J")
J2CPP_DEFINE_METHOD(android::view::animation::AnimationUtils,2,"loadAnimation","(Landroid/content/Context;I)Landroid/view/animation/Animation;")
J2CPP_DEFINE_METHOD(android::view::animation::AnimationUtils,3,"loadLayoutAnimation","(Landroid/content/Context;I)Landroid/view/animation/LayoutAnimationController;")
J2CPP_DEFINE_METHOD(android::view::animation::AnimationUtils,4,"makeInAnimation","(Landroid/content/Context;Z)Landroid/view/animation/Animation;")
J2CPP_DEFINE_METHOD(android::view::animation::AnimationUtils,5,"makeOutAnimation","(Landroid/content/Context;Z)Landroid/view/animation/Animation;")
J2CPP_DEFINE_METHOD(android::view::animation::AnimationUtils,6,"makeInChildBottomAnimation","(Landroid/content/Context;)Landroid/view/animation/Animation;")
J2CPP_DEFINE_METHOD(android::view::animation::AnimationUtils,7,"loadInterpolator","(Landroid/content/Context;I)Landroid/view/animation/Interpolator;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_ANIMATION_ANIMATIONUTILS_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
