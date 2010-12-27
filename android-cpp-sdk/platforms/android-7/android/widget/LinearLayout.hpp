/*================================================================================
  code generated by: java2cpp
  class: android.widget.LinearLayout
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_LINEARLAYOUT_HPP_DECL
#define J2CPP_ANDROID_WIDGET_LINEARLAYOUT_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace view { class ViewGroup; } } }
namespace j2cpp { namespace android { namespace view { namespace ViewGroup_ { class MarginLayoutParams; } } } }
namespace j2cpp { namespace android { namespace view { namespace ViewGroup_ { class LayoutParams; } } } }
namespace j2cpp { namespace android { namespace widget { namespace LinearLayout_ { class LayoutParams; } } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }


#include <android/content/Context.hpp>
#include <android/util/AttributeSet.hpp>
#include <android/view/ViewGroup.hpp>
#include <android/widget/LinearLayout.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace widget {

	class LinearLayout;
	namespace LinearLayout_ {

		class LayoutParams;
		class LayoutParams
			: public cpp_object<LayoutParams>
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

			explicit LayoutParams(jobject jobj)
			: cpp_object<LayoutParams>(jobj)
, weight(jobj)
, gravity(jobj)
			{
			}

			operator local_ref<android::view::ViewGroup_::MarginLayoutParams>() const;


			LayoutParams(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&);
			LayoutParams(cpp_int const&, cpp_int const&);
			LayoutParams(cpp_int const&, cpp_int const&, cpp_float const&);
			LayoutParams(local_ref< android::view::ViewGroup_::LayoutParams > const&);
			LayoutParams(local_ref< android::view::ViewGroup_::MarginLayoutParams > const&);
			local_ref< java::lang::String > debug(local_ref< java::lang::String > const&);

			field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_float > weight;
			field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), cpp_int > gravity;
		}; //class LayoutParams

	} //namespace LinearLayout_

	class LinearLayout
		: public cpp_object<LinearLayout>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)

		typedef LinearLayout_::LayoutParams LayoutParams;

		explicit LinearLayout(jobject jobj)
		: cpp_object<LinearLayout>(jobj)
		{
		}

		operator local_ref<android::view::ViewGroup>() const;


		LinearLayout(local_ref< android::content::Context > const&);
		LinearLayout(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&);
		cpp_boolean isBaselineAligned();
		void setBaselineAligned(cpp_boolean const&);
		cpp_int getBaseline();
		cpp_int getBaselineAlignedChildIndex();
		void setBaselineAlignedChildIndex(cpp_int const&);
		cpp_float getWeightSum();
		void setWeightSum(cpp_float const&);
		void setOrientation(cpp_int const&);
		cpp_int getOrientation();
		void setGravity(cpp_int const&);
		void setHorizontalGravity(cpp_int const&);
		void setVerticalGravity(cpp_int const&);
		local_ref< android::widget::LinearLayout_::LayoutParams > generateLayoutParams(local_ref< android::util::AttributeSet > const&);
		local_ref< android::view::ViewGroup_::LayoutParams > generateLayoutParams_1(local_ref< android::util::AttributeSet > const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_int > HORIZONTAL;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), cpp_int > VERTICAL;
	}; //class LinearLayout

} //namespace widget
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_LINEARLAYOUT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_LINEARLAYOUT_HPP_IMPL
#define J2CPP_ANDROID_WIDGET_LINEARLAYOUT_HPP_IMPL

namespace j2cpp {




android::widget::LinearLayout_::LayoutParams::operator local_ref<android::view::ViewGroup_::MarginLayoutParams>() const
{
	return local_ref<android::view::ViewGroup_::MarginLayoutParams>(get_jtype());
}


android::widget::LinearLayout_::LayoutParams::LayoutParams(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1)
: cpp_object<android::widget::LinearLayout_::LayoutParams>(
	environment::get().get_jenv()->NewObject(
		get_class<android::widget::LinearLayout_::LayoutParams::J2CPP_CLASS_NAME>(),
		get_method_id<android::widget::LinearLayout_::LayoutParams::J2CPP_CLASS_NAME, android::widget::LinearLayout_::LayoutParams::J2CPP_METHOD_NAME(0), android::widget::LinearLayout_::LayoutParams::J2CPP_METHOD_SIGNATURE(0), false>(),
		a0.get_jtype(), a1.get_jtype()
	)
)
, weight(get_jtype())
, gravity(get_jtype())
{
}



android::widget::LinearLayout_::LayoutParams::LayoutParams(cpp_int const &a0, cpp_int const &a1)
: cpp_object<android::widget::LinearLayout_::LayoutParams>(
	environment::get().get_jenv()->NewObject(
		get_class<android::widget::LinearLayout_::LayoutParams::J2CPP_CLASS_NAME>(),
		get_method_id<android::widget::LinearLayout_::LayoutParams::J2CPP_CLASS_NAME, android::widget::LinearLayout_::LayoutParams::J2CPP_METHOD_NAME(1), android::widget::LinearLayout_::LayoutParams::J2CPP_METHOD_SIGNATURE(1), false>(),
		a0.get_jtype(), a1.get_jtype()
	)
)
, weight(get_jtype())
, gravity(get_jtype())
{
}



android::widget::LinearLayout_::LayoutParams::LayoutParams(cpp_int const &a0, cpp_int const &a1, cpp_float const &a2)
: cpp_object<android::widget::LinearLayout_::LayoutParams>(
	environment::get().get_jenv()->NewObject(
		get_class<android::widget::LinearLayout_::LayoutParams::J2CPP_CLASS_NAME>(),
		get_method_id<android::widget::LinearLayout_::LayoutParams::J2CPP_CLASS_NAME, android::widget::LinearLayout_::LayoutParams::J2CPP_METHOD_NAME(2), android::widget::LinearLayout_::LayoutParams::J2CPP_METHOD_SIGNATURE(2), false>(),
		a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
	)
)
, weight(get_jtype())
, gravity(get_jtype())
{
}



android::widget::LinearLayout_::LayoutParams::LayoutParams(local_ref< android::view::ViewGroup_::LayoutParams > const &a0)
: cpp_object<android::widget::LinearLayout_::LayoutParams>(
	environment::get().get_jenv()->NewObject(
		get_class<android::widget::LinearLayout_::LayoutParams::J2CPP_CLASS_NAME>(),
		get_method_id<android::widget::LinearLayout_::LayoutParams::J2CPP_CLASS_NAME, android::widget::LinearLayout_::LayoutParams::J2CPP_METHOD_NAME(3), android::widget::LinearLayout_::LayoutParams::J2CPP_METHOD_SIGNATURE(3), false>(),
		a0.get_jtype()
	)
)
, weight(get_jtype())
, gravity(get_jtype())
{
}



android::widget::LinearLayout_::LayoutParams::LayoutParams(local_ref< android::view::ViewGroup_::MarginLayoutParams > const &a0)
: cpp_object<android::widget::LinearLayout_::LayoutParams>(
	environment::get().get_jenv()->NewObject(
		get_class<android::widget::LinearLayout_::LayoutParams::J2CPP_CLASS_NAME>(),
		get_method_id<android::widget::LinearLayout_::LayoutParams::J2CPP_CLASS_NAME, android::widget::LinearLayout_::LayoutParams::J2CPP_METHOD_NAME(4), android::widget::LinearLayout_::LayoutParams::J2CPP_METHOD_SIGNATURE(4), false>(),
		a0.get_jtype()
	)
)
, weight(get_jtype())
, gravity(get_jtype())
{
}


local_ref< java::lang::String > android::widget::LinearLayout_::LayoutParams::debug(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}



J2CPP_DEFINE_CLASS(android::widget::LinearLayout_::LayoutParams,"android/widget/LinearLayout$LayoutParams")
J2CPP_DEFINE_METHOD(android::widget::LinearLayout_::LayoutParams,0,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::widget::LinearLayout_::LayoutParams,1,"<init>","(II)V")
J2CPP_DEFINE_METHOD(android::widget::LinearLayout_::LayoutParams,2,"<init>","(IIF)V")
J2CPP_DEFINE_METHOD(android::widget::LinearLayout_::LayoutParams,3,"<init>","(Landroid/view/ViewGroup$LayoutParams;)V")
J2CPP_DEFINE_METHOD(android::widget::LinearLayout_::LayoutParams,4,"<init>","(Landroid/view/ViewGroup$MarginLayoutParams;)V")
J2CPP_DEFINE_METHOD(android::widget::LinearLayout_::LayoutParams,5,"debug","(Ljava/lang/String;)Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::widget::LinearLayout_::LayoutParams,0,"weight","F")
J2CPP_DEFINE_FIELD(android::widget::LinearLayout_::LayoutParams,1,"gravity","I")



android::widget::LinearLayout::operator local_ref<android::view::ViewGroup>() const
{
	return local_ref<android::view::ViewGroup>(get_jtype());
}


android::widget::LinearLayout::LinearLayout(local_ref< android::content::Context > const &a0)
: cpp_object<android::widget::LinearLayout>(
	environment::get().get_jenv()->NewObject(
		get_class<android::widget::LinearLayout::J2CPP_CLASS_NAME>(),
		get_method_id<android::widget::LinearLayout::J2CPP_CLASS_NAME, android::widget::LinearLayout::J2CPP_METHOD_NAME(0), android::widget::LinearLayout::J2CPP_METHOD_SIGNATURE(0), false>(),
		a0.get_jtype()
	)
)
{
}



android::widget::LinearLayout::LinearLayout(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1)
: cpp_object<android::widget::LinearLayout>(
	environment::get().get_jenv()->NewObject(
		get_class<android::widget::LinearLayout::J2CPP_CLASS_NAME>(),
		get_method_id<android::widget::LinearLayout::J2CPP_CLASS_NAME, android::widget::LinearLayout::J2CPP_METHOD_NAME(1), android::widget::LinearLayout::J2CPP_METHOD_SIGNATURE(1), false>(),
		a0.get_jtype(), a1.get_jtype()
	)
)
{
}


cpp_boolean android::widget::LinearLayout::isBaselineAligned()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

void android::widget::LinearLayout::setBaselineAligned(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::widget::LinearLayout::getBaseline()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

cpp_int android::widget::LinearLayout::getBaselineAlignedChildIndex()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

void android::widget::LinearLayout::setBaselineAlignedChildIndex(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

cpp_float android::widget::LinearLayout::getWeightSum()
{
	return cpp_float(
		environment::get().get_jenv()->CallFloatMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

void android::widget::LinearLayout::setWeightSum(cpp_float const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}



void android::widget::LinearLayout::setOrientation(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::widget::LinearLayout::getOrientation()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>()
		)
	);
}

void android::widget::LinearLayout::setGravity(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>(),
			a0.get_jtype()
		)
	);
}

void android::widget::LinearLayout::setHorizontalGravity(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>(),
			a0.get_jtype()
		)
	);
}

void android::widget::LinearLayout::setVerticalGravity(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::widget::LinearLayout_::LayoutParams > android::widget::LinearLayout::generateLayoutParams(local_ref< android::util::AttributeSet > const &a0)
{
	return local_ref< android::widget::LinearLayout_::LayoutParams >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>(),
			a0.get_jtype()
		)
	);
}






local_ref< android::view::ViewGroup_::LayoutParams > android::widget::LinearLayout::generateLayoutParams_1(local_ref< android::util::AttributeSet > const &a0)
{
	return local_ref< android::view::ViewGroup_::LayoutParams >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(22), J2CPP_METHOD_SIGNATURE(22), false>(),
			a0.get_jtype()
		)
	);
}


static_field<
	android::widget::LinearLayout::J2CPP_CLASS_NAME,
	android::widget::LinearLayout::J2CPP_FIELD_NAME(0),
	android::widget::LinearLayout::J2CPP_FIELD_SIGNATURE(0),
	cpp_int
> android::widget::LinearLayout::HORIZONTAL;

static_field<
	android::widget::LinearLayout::J2CPP_CLASS_NAME,
	android::widget::LinearLayout::J2CPP_FIELD_NAME(1),
	android::widget::LinearLayout::J2CPP_FIELD_SIGNATURE(1),
	cpp_int
> android::widget::LinearLayout::VERTICAL;


J2CPP_DEFINE_CLASS(android::widget::LinearLayout,"android/widget/LinearLayout")
J2CPP_DEFINE_METHOD(android::widget::LinearLayout,0,"<init>","(Landroid/content/Context;)V")
J2CPP_DEFINE_METHOD(android::widget::LinearLayout,1,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::widget::LinearLayout,2,"isBaselineAligned","()Z")
J2CPP_DEFINE_METHOD(android::widget::LinearLayout,3,"setBaselineAligned","(Z)V")
J2CPP_DEFINE_METHOD(android::widget::LinearLayout,4,"getBaseline","()I")
J2CPP_DEFINE_METHOD(android::widget::LinearLayout,5,"getBaselineAlignedChildIndex","()I")
J2CPP_DEFINE_METHOD(android::widget::LinearLayout,6,"setBaselineAlignedChildIndex","(I)V")
J2CPP_DEFINE_METHOD(android::widget::LinearLayout,7,"getWeightSum","()F")
J2CPP_DEFINE_METHOD(android::widget::LinearLayout,8,"setWeightSum","(F)V")
J2CPP_DEFINE_METHOD(android::widget::LinearLayout,9,"onMeasure","(II)V")
J2CPP_DEFINE_METHOD(android::widget::LinearLayout,10,"onLayout","(ZIIII)V")
J2CPP_DEFINE_METHOD(android::widget::LinearLayout,11,"setOrientation","(I)V")
J2CPP_DEFINE_METHOD(android::widget::LinearLayout,12,"getOrientation","()I")
J2CPP_DEFINE_METHOD(android::widget::LinearLayout,13,"setGravity","(I)V")
J2CPP_DEFINE_METHOD(android::widget::LinearLayout,14,"setHorizontalGravity","(I)V")
J2CPP_DEFINE_METHOD(android::widget::LinearLayout,15,"setVerticalGravity","(I)V")
J2CPP_DEFINE_METHOD(android::widget::LinearLayout,16,"generateLayoutParams","(Landroid/util/AttributeSet;)Landroid/widget/LinearLayout$LayoutParams;")
J2CPP_DEFINE_METHOD(android::widget::LinearLayout,17,"generateDefaultLayoutParams","()Landroid/widget/LinearLayout$LayoutParams;")
J2CPP_DEFINE_METHOD(android::widget::LinearLayout,18,"generateLayoutParams","(Landroid/view/ViewGroup$LayoutParams;)Landroid/widget/LinearLayout$LayoutParams;")
J2CPP_DEFINE_METHOD(android::widget::LinearLayout,19,"checkLayoutParams","(Landroid/view/ViewGroup$LayoutParams;)Z")
J2CPP_DEFINE_METHOD(android::widget::LinearLayout,20,"generateDefaultLayoutParams","()Landroid/view/ViewGroup$LayoutParams;")
J2CPP_DEFINE_METHOD(android::widget::LinearLayout,21,"generateLayoutParams","(Landroid/view/ViewGroup$LayoutParams;)Landroid/view/ViewGroup$LayoutParams;")
J2CPP_DEFINE_METHOD(android::widget::LinearLayout,22,"generateLayoutParams","(Landroid/util/AttributeSet;)Landroid/view/ViewGroup$LayoutParams;")
J2CPP_DEFINE_FIELD(android::widget::LinearLayout,0,"HORIZONTAL","I")
J2CPP_DEFINE_FIELD(android::widget::LinearLayout,1,"VERTICAL","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_LINEARLAYOUT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
