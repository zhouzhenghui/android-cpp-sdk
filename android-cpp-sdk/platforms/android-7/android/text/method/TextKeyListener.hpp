/*================================================================================
  code generated by: java2cpp
  class: android.text.method.TextKeyListener
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_METHOD_TEXTKEYLISTENER_HPP_DECL
#define J2CPP_ANDROID_TEXT_METHOD_TEXTKEYLISTENER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Enum; } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace android { namespace view { class KeyEvent; } } }
namespace j2cpp { namespace android { namespace text { class Spannable; } } }
namespace j2cpp { namespace android { namespace text { namespace method { class BaseKeyListener; } } } }
namespace j2cpp { namespace android { namespace text { namespace method { namespace TextKeyListener_ { class Capitalize; } } } } }
namespace j2cpp { namespace android { namespace text { class Editable; } } }
namespace j2cpp { namespace android { namespace text { class SpanWatcher; } } }


#include <android/text/Editable.hpp>
#include <android/text/SpanWatcher.hpp>
#include <android/text/Spannable.hpp>
#include <android/text/method/BaseKeyListener.hpp>
#include <android/text/method/TextKeyListener.hpp>
#include <android/view/KeyEvent.hpp>
#include <android/view/View.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace text { namespace method {

	class TextKeyListener;
	namespace TextKeyListener_ {

		class Capitalize;
		class Capitalize
			: public cpp_object<Capitalize>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_METHOD(2)
			J2CPP_DECLARE_METHOD(3)
			J2CPP_DECLARE_FIELD(0)
			J2CPP_DECLARE_FIELD(1)
			J2CPP_DECLARE_FIELD(2)
			J2CPP_DECLARE_FIELD(3)
			J2CPP_DECLARE_FIELD(4)

			explicit Capitalize(jobject jobj)
			: cpp_object<Capitalize>(jobj)
			{
			}

			operator local_ref<java::lang::Enum>() const;


			static local_ref< cpp_object_array<android::text::method::TextKeyListener_::Capitalize, 1> > values();
			static local_ref< android::text::method::TextKeyListener_::Capitalize > valueOf(local_ref< java::lang::String > const&);

			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< android::text::method::TextKeyListener_::Capitalize > > CHARACTERS;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< android::text::method::TextKeyListener_::Capitalize > > NONE;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< android::text::method::TextKeyListener_::Capitalize > > SENTENCES;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< android::text::method::TextKeyListener_::Capitalize > > WORDS;
		}; //class Capitalize

	} //namespace TextKeyListener_

	class TextKeyListener
		: public cpp_object<TextKeyListener>
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

		typedef TextKeyListener_::Capitalize Capitalize;

		explicit TextKeyListener(jobject jobj)
		: cpp_object<TextKeyListener>(jobj)
		{
		}

		operator local_ref<android::text::method::BaseKeyListener>() const;
		operator local_ref<android::text::SpanWatcher>() const;


		TextKeyListener(local_ref< android::text::method::TextKeyListener_::Capitalize > const&, cpp_boolean const&);
		static local_ref< android::text::method::TextKeyListener > getInstance(cpp_boolean const&, local_ref< android::text::method::TextKeyListener_::Capitalize > const&);
		static local_ref< android::text::method::TextKeyListener > getInstance();
		static cpp_boolean shouldCap(local_ref< android::text::method::TextKeyListener_::Capitalize > const&, local_ref< java::lang::CharSequence > const&, cpp_int const&);
		cpp_int getInputType();
		cpp_boolean onKeyDown(local_ref< android::view::View > const&, local_ref< android::text::Editable > const&, cpp_int const&, local_ref< android::view::KeyEvent > const&);
		cpp_boolean onKeyUp(local_ref< android::view::View > const&, local_ref< android::text::Editable > const&, cpp_int const&, local_ref< android::view::KeyEvent > const&);
		cpp_boolean onKeyOther(local_ref< android::view::View > const&, local_ref< android::text::Editable > const&, local_ref< android::view::KeyEvent > const&);
		static void clear(local_ref< android::text::Editable > const&);
		void onSpanAdded(local_ref< android::text::Spannable > const&, local_ref< java::lang::Object > const&, cpp_int const&, cpp_int const&);
		void onSpanRemoved(local_ref< android::text::Spannable > const&, local_ref< java::lang::Object > const&, cpp_int const&, cpp_int const&);
		void onSpanChanged(local_ref< android::text::Spannable > const&, local_ref< java::lang::Object > const&, cpp_int const&, cpp_int const&, cpp_int const&, cpp_int const&);
		void release();
	}; //class TextKeyListener

} //namespace method
} //namespace text
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_METHOD_TEXTKEYLISTENER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_METHOD_TEXTKEYLISTENER_HPP_IMPL
#define J2CPP_ANDROID_TEXT_METHOD_TEXTKEYLISTENER_HPP_IMPL

namespace j2cpp {




android::text::method::TextKeyListener_::Capitalize::operator local_ref<java::lang::Enum>() const
{
	return local_ref<java::lang::Enum>(get_jtype());
}

local_ref< cpp_object_array<android::text::method::TextKeyListener_::Capitalize, 1> > android::text::method::TextKeyListener_::Capitalize::values()
{
	return local_ref< cpp_object_array<android::text::method::TextKeyListener_::Capitalize, 1> >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), true>()
		)
	);
}

local_ref< android::text::method::TextKeyListener_::Capitalize > android::text::method::TextKeyListener_::Capitalize::valueOf(local_ref< java::lang::String > const &a0)
{
	return local_ref< android::text::method::TextKeyListener_::Capitalize >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), true>(),
			a0.get_jtype()
		)
	);
}




static_field<
	android::text::method::TextKeyListener_::Capitalize::J2CPP_CLASS_NAME,
	android::text::method::TextKeyListener_::Capitalize::J2CPP_FIELD_NAME(0),
	android::text::method::TextKeyListener_::Capitalize::J2CPP_FIELD_SIGNATURE(0),
	local_ref< android::text::method::TextKeyListener_::Capitalize >
> android::text::method::TextKeyListener_::Capitalize::CHARACTERS;

static_field<
	android::text::method::TextKeyListener_::Capitalize::J2CPP_CLASS_NAME,
	android::text::method::TextKeyListener_::Capitalize::J2CPP_FIELD_NAME(1),
	android::text::method::TextKeyListener_::Capitalize::J2CPP_FIELD_SIGNATURE(1),
	local_ref< android::text::method::TextKeyListener_::Capitalize >
> android::text::method::TextKeyListener_::Capitalize::NONE;

static_field<
	android::text::method::TextKeyListener_::Capitalize::J2CPP_CLASS_NAME,
	android::text::method::TextKeyListener_::Capitalize::J2CPP_FIELD_NAME(2),
	android::text::method::TextKeyListener_::Capitalize::J2CPP_FIELD_SIGNATURE(2),
	local_ref< android::text::method::TextKeyListener_::Capitalize >
> android::text::method::TextKeyListener_::Capitalize::SENTENCES;

static_field<
	android::text::method::TextKeyListener_::Capitalize::J2CPP_CLASS_NAME,
	android::text::method::TextKeyListener_::Capitalize::J2CPP_FIELD_NAME(3),
	android::text::method::TextKeyListener_::Capitalize::J2CPP_FIELD_SIGNATURE(3),
	local_ref< android::text::method::TextKeyListener_::Capitalize >
> android::text::method::TextKeyListener_::Capitalize::WORDS;


J2CPP_DEFINE_CLASS(android::text::method::TextKeyListener_::Capitalize,"android/text/method/TextKeyListener$Capitalize")
J2CPP_DEFINE_METHOD(android::text::method::TextKeyListener_::Capitalize,0,"values","()[android.text.method.TextKeyListener.Capitalize")
J2CPP_DEFINE_METHOD(android::text::method::TextKeyListener_::Capitalize,1,"valueOf","(Ljava/lang/String;)Landroid/text/method/TextKeyListener$Capitalize;")
J2CPP_DEFINE_METHOD(android::text::method::TextKeyListener_::Capitalize,2,"<init>","(Ljava/lang/String;I)V")
J2CPP_DEFINE_METHOD(android::text::method::TextKeyListener_::Capitalize,3,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::text::method::TextKeyListener_::Capitalize,0,"CHARACTERS","Landroid/text/method/TextKeyListener$Capitalize;")
J2CPP_DEFINE_FIELD(android::text::method::TextKeyListener_::Capitalize,1,"NONE","Landroid/text/method/TextKeyListener$Capitalize;")
J2CPP_DEFINE_FIELD(android::text::method::TextKeyListener_::Capitalize,2,"SENTENCES","Landroid/text/method/TextKeyListener$Capitalize;")
J2CPP_DEFINE_FIELD(android::text::method::TextKeyListener_::Capitalize,3,"WORDS","Landroid/text/method/TextKeyListener$Capitalize;")
J2CPP_DEFINE_FIELD(android::text::method::TextKeyListener_::Capitalize,4,"$VALUES","[android.text.method.TextKeyListener.Capitalize")



android::text::method::TextKeyListener::operator local_ref<android::text::method::BaseKeyListener>() const
{
	return local_ref<android::text::method::BaseKeyListener>(get_jtype());
}

android::text::method::TextKeyListener::operator local_ref<android::text::SpanWatcher>() const
{
	return local_ref<android::text::SpanWatcher>(get_jtype());
}


android::text::method::TextKeyListener::TextKeyListener(local_ref< android::text::method::TextKeyListener_::Capitalize > const &a0, cpp_boolean const &a1)
: cpp_object<android::text::method::TextKeyListener>(
	environment::get().get_jenv()->NewObject(
		get_class<android::text::method::TextKeyListener::J2CPP_CLASS_NAME>(),
		get_method_id<android::text::method::TextKeyListener::J2CPP_CLASS_NAME, android::text::method::TextKeyListener::J2CPP_METHOD_NAME(0), android::text::method::TextKeyListener::J2CPP_METHOD_SIGNATURE(0), false>(),
		a0.get_jtype(), a1.get_jtype()
	)
)
{
}


local_ref< android::text::method::TextKeyListener > android::text::method::TextKeyListener::getInstance(cpp_boolean const &a0, local_ref< android::text::method::TextKeyListener_::Capitalize > const &a1)
{
	return local_ref< android::text::method::TextKeyListener >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< android::text::method::TextKeyListener > android::text::method::TextKeyListener::getInstance()
{
	return local_ref< android::text::method::TextKeyListener >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), true>()
		)
	);
}

cpp_boolean android::text::method::TextKeyListener::shouldCap(local_ref< android::text::method::TextKeyListener_::Capitalize > const &a0, local_ref< java::lang::CharSequence > const &a1, cpp_int const &a2)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallStaticBooleanMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

cpp_int android::text::method::TextKeyListener::getInputType()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

cpp_boolean android::text::method::TextKeyListener::onKeyDown(local_ref< android::view::View > const &a0, local_ref< android::text::Editable > const &a1, cpp_int const &a2, local_ref< android::view::KeyEvent > const &a3)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

cpp_boolean android::text::method::TextKeyListener::onKeyUp(local_ref< android::view::View > const &a0, local_ref< android::text::Editable > const &a1, cpp_int const &a2, local_ref< android::view::KeyEvent > const &a3)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

cpp_boolean android::text::method::TextKeyListener::onKeyOther(local_ref< android::view::View > const &a0, local_ref< android::text::Editable > const &a1, local_ref< android::view::KeyEvent > const &a2)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void android::text::method::TextKeyListener::clear(local_ref< android::text::Editable > const &a0)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), true>(),
			a0.get_jtype()
		)
	);
}

void android::text::method::TextKeyListener::onSpanAdded(local_ref< android::text::Spannable > const &a0, local_ref< java::lang::Object > const &a1, cpp_int const &a2, cpp_int const &a3)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

void android::text::method::TextKeyListener::onSpanRemoved(local_ref< android::text::Spannable > const &a0, local_ref< java::lang::Object > const &a1, cpp_int const &a2, cpp_int const &a3)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

void android::text::method::TextKeyListener::onSpanChanged(local_ref< android::text::Spannable > const &a0, local_ref< java::lang::Object > const &a1, cpp_int const &a2, cpp_int const &a3, cpp_int const &a4, cpp_int const &a5)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype(), a5.get_jtype()
		)
	);
}

void android::text::method::TextKeyListener::release()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(android::text::method::TextKeyListener,"android/text/method/TextKeyListener")
J2CPP_DEFINE_METHOD(android::text::method::TextKeyListener,0,"<init>","(Landroid/text/method/TextKeyListener$Capitalize;Z)V")
J2CPP_DEFINE_METHOD(android::text::method::TextKeyListener,1,"getInstance","(ZLandroid/text/method/TextKeyListener$Capitalize;)Landroid/text/method/TextKeyListener;")
J2CPP_DEFINE_METHOD(android::text::method::TextKeyListener,2,"getInstance","()Landroid/text/method/TextKeyListener;")
J2CPP_DEFINE_METHOD(android::text::method::TextKeyListener,3,"shouldCap","(Landroid/text/method/TextKeyListener$Capitalize;Ljava/lang/CharSequence;I)Z")
J2CPP_DEFINE_METHOD(android::text::method::TextKeyListener,4,"getInputType","()I")
J2CPP_DEFINE_METHOD(android::text::method::TextKeyListener,5,"onKeyDown","(Landroid/view/View;Landroid/text/Editable;ILandroid/view/KeyEvent;)Z")
J2CPP_DEFINE_METHOD(android::text::method::TextKeyListener,6,"onKeyUp","(Landroid/view/View;Landroid/text/Editable;ILandroid/view/KeyEvent;)Z")
J2CPP_DEFINE_METHOD(android::text::method::TextKeyListener,7,"onKeyOther","(Landroid/view/View;Landroid/text/Editable;Landroid/view/KeyEvent;)Z")
J2CPP_DEFINE_METHOD(android::text::method::TextKeyListener,8,"clear","(Landroid/text/Editable;)V")
J2CPP_DEFINE_METHOD(android::text::method::TextKeyListener,9,"onSpanAdded","(Landroid/text/Spannable;Ljava/lang/Object;II)V")
J2CPP_DEFINE_METHOD(android::text::method::TextKeyListener,10,"onSpanRemoved","(Landroid/text/Spannable;Ljava/lang/Object;II)V")
J2CPP_DEFINE_METHOD(android::text::method::TextKeyListener,11,"onSpanChanged","(Landroid/text/Spannable;Ljava/lang/Object;IIII)V")
J2CPP_DEFINE_METHOD(android::text::method::TextKeyListener,12,"release","()V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_METHOD_TEXTKEYLISTENER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
