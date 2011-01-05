/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.app.ProgressDialog
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_APP_PROGRESSDIALOG_HPP_DECL
#define J2CPP_ANDROID_APP_PROGRESSDIALOG_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace android { namespace app { class AlertDialog; } } }
namespace j2cpp { namespace android { namespace app { class Dialog; } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { class Drawable; } } } }
namespace j2cpp { namespace android { namespace content { class DialogInterface; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace content { namespace DialogInterface_ { class OnCancelListener; } } } }
namespace j2cpp { namespace android { namespace view { namespace Window_ { class Callback; } } } }
namespace j2cpp { namespace android { namespace view { namespace View_ { class OnCreateContextMenuListener; } } } }


#include <android/app/AlertDialog.hpp>
#include <android/app/Dialog.hpp>
#include <android/content/Context.hpp>
#include <android/content/DialogInterface.hpp>
#include <android/graphics/drawable/Drawable.hpp>
#include <android/view/View.hpp>
#include <android/view/Window.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace app {

	class ProgressDialog;
	class ProgressDialog
		: public object<ProgressDialog>
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

		explicit ProgressDialog(jobject jobj)
		: object<ProgressDialog>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::app::AlertDialog>() const;
		operator local_ref<android::app::Dialog>() const;
		operator local_ref<android::content::DialogInterface>() const;
		operator local_ref<android::view::Window_::Callback>() const;
		operator local_ref<android::view::View_::OnCreateContextMenuListener>() const;


		ProgressDialog(local_ref< android::content::Context > const&);
		ProgressDialog(local_ref< android::content::Context > const&, jint);
		static local_ref< android::app::ProgressDialog > show(local_ref< android::content::Context >  const&, local_ref< java::lang::CharSequence >  const&, local_ref< java::lang::CharSequence >  const&);
		static local_ref< android::app::ProgressDialog > show(local_ref< android::content::Context >  const&, local_ref< java::lang::CharSequence >  const&, local_ref< java::lang::CharSequence >  const&, jboolean);
		static local_ref< android::app::ProgressDialog > show(local_ref< android::content::Context >  const&, local_ref< java::lang::CharSequence >  const&, local_ref< java::lang::CharSequence >  const&, jboolean, jboolean);
		static local_ref< android::app::ProgressDialog > show(local_ref< android::content::Context >  const&, local_ref< java::lang::CharSequence >  const&, local_ref< java::lang::CharSequence >  const&, jboolean, jboolean, local_ref< android::content::DialogInterface_::OnCancelListener >  const&);
		void onStart();
		void setProgress(jint);
		void setSecondaryProgress(jint);
		jint getProgress();
		jint getSecondaryProgress();
		jint getMax();
		void setMax(jint);
		void incrementProgressBy(jint);
		void incrementSecondaryProgressBy(jint);
		void setProgressDrawable(local_ref< android::graphics::drawable::Drawable >  const&);
		void setIndeterminateDrawable(local_ref< android::graphics::drawable::Drawable >  const&);
		void setIndeterminate(jboolean);
		jboolean isIndeterminate();
		void setMessage(local_ref< java::lang::CharSequence >  const&);
		void setProgressStyle(jint);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > STYLE_SPINNER;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > STYLE_HORIZONTAL;
	}; //class ProgressDialog

} //namespace app
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_APP_PROGRESSDIALOG_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_APP_PROGRESSDIALOG_HPP_IMPL
#define J2CPP_ANDROID_APP_PROGRESSDIALOG_HPP_IMPL

namespace j2cpp {



android::app::ProgressDialog::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::app::ProgressDialog::operator local_ref<android::app::AlertDialog>() const
{
	return local_ref<android::app::AlertDialog>(get_jobject());
}

android::app::ProgressDialog::operator local_ref<android::app::Dialog>() const
{
	return local_ref<android::app::Dialog>(get_jobject());
}

android::app::ProgressDialog::operator local_ref<android::content::DialogInterface>() const
{
	return local_ref<android::content::DialogInterface>(get_jobject());
}

android::app::ProgressDialog::operator local_ref<android::view::Window_::Callback>() const
{
	return local_ref<android::view::Window_::Callback>(get_jobject());
}

android::app::ProgressDialog::operator local_ref<android::view::View_::OnCreateContextMenuListener>() const
{
	return local_ref<android::view::View_::OnCreateContextMenuListener>(get_jobject());
}


android::app::ProgressDialog::ProgressDialog(local_ref< android::content::Context > const &a0)
: object<android::app::ProgressDialog>(
	call_new_object<
		android::app::ProgressDialog::J2CPP_CLASS_NAME,
		android::app::ProgressDialog::J2CPP_METHOD_NAME(0),
		android::app::ProgressDialog::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}



android::app::ProgressDialog::ProgressDialog(local_ref< android::content::Context > const &a0, jint a1)
: object<android::app::ProgressDialog>(
	call_new_object<
		android::app::ProgressDialog::J2CPP_CLASS_NAME,
		android::app::ProgressDialog::J2CPP_METHOD_NAME(1),
		android::app::ProgressDialog::J2CPP_METHOD_SIGNATURE(1)
	>(a0, a1)
)
{
}


local_ref< android::app::ProgressDialog > android::app::ProgressDialog::show(local_ref< android::content::Context > const &a0, local_ref< java::lang::CharSequence > const &a1, local_ref< java::lang::CharSequence > const &a2)
{
	return call_static_method<
		android::app::ProgressDialog::J2CPP_CLASS_NAME,
		android::app::ProgressDialog::J2CPP_METHOD_NAME(2),
		android::app::ProgressDialog::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< android::app::ProgressDialog >
	>(a0, a1, a2);
}

local_ref< android::app::ProgressDialog > android::app::ProgressDialog::show(local_ref< android::content::Context > const &a0, local_ref< java::lang::CharSequence > const &a1, local_ref< java::lang::CharSequence > const &a2, jboolean a3)
{
	return call_static_method<
		android::app::ProgressDialog::J2CPP_CLASS_NAME,
		android::app::ProgressDialog::J2CPP_METHOD_NAME(3),
		android::app::ProgressDialog::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< android::app::ProgressDialog >
	>(a0, a1, a2, a3);
}

local_ref< android::app::ProgressDialog > android::app::ProgressDialog::show(local_ref< android::content::Context > const &a0, local_ref< java::lang::CharSequence > const &a1, local_ref< java::lang::CharSequence > const &a2, jboolean a3, jboolean a4)
{
	return call_static_method<
		android::app::ProgressDialog::J2CPP_CLASS_NAME,
		android::app::ProgressDialog::J2CPP_METHOD_NAME(4),
		android::app::ProgressDialog::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< android::app::ProgressDialog >
	>(a0, a1, a2, a3, a4);
}

local_ref< android::app::ProgressDialog > android::app::ProgressDialog::show(local_ref< android::content::Context > const &a0, local_ref< java::lang::CharSequence > const &a1, local_ref< java::lang::CharSequence > const &a2, jboolean a3, jboolean a4, local_ref< android::content::DialogInterface_::OnCancelListener > const &a5)
{
	return call_static_method<
		android::app::ProgressDialog::J2CPP_CLASS_NAME,
		android::app::ProgressDialog::J2CPP_METHOD_NAME(5),
		android::app::ProgressDialog::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< android::app::ProgressDialog >
	>(a0, a1, a2, a3, a4, a5);
}


void android::app::ProgressDialog::onStart()
{
	return call_method<
		android::app::ProgressDialog::J2CPP_CLASS_NAME,
		android::app::ProgressDialog::J2CPP_METHOD_NAME(7),
		android::app::ProgressDialog::J2CPP_METHOD_SIGNATURE(7), 
		void
	>(get_jobject());
}


void android::app::ProgressDialog::setProgress(jint a0)
{
	return call_method<
		android::app::ProgressDialog::J2CPP_CLASS_NAME,
		android::app::ProgressDialog::J2CPP_METHOD_NAME(9),
		android::app::ProgressDialog::J2CPP_METHOD_SIGNATURE(9), 
		void
	>(get_jobject(), a0);
}

void android::app::ProgressDialog::setSecondaryProgress(jint a0)
{
	return call_method<
		android::app::ProgressDialog::J2CPP_CLASS_NAME,
		android::app::ProgressDialog::J2CPP_METHOD_NAME(10),
		android::app::ProgressDialog::J2CPP_METHOD_SIGNATURE(10), 
		void
	>(get_jobject(), a0);
}

jint android::app::ProgressDialog::getProgress()
{
	return call_method<
		android::app::ProgressDialog::J2CPP_CLASS_NAME,
		android::app::ProgressDialog::J2CPP_METHOD_NAME(11),
		android::app::ProgressDialog::J2CPP_METHOD_SIGNATURE(11), 
		jint
	>(get_jobject());
}

jint android::app::ProgressDialog::getSecondaryProgress()
{
	return call_method<
		android::app::ProgressDialog::J2CPP_CLASS_NAME,
		android::app::ProgressDialog::J2CPP_METHOD_NAME(12),
		android::app::ProgressDialog::J2CPP_METHOD_SIGNATURE(12), 
		jint
	>(get_jobject());
}

jint android::app::ProgressDialog::getMax()
{
	return call_method<
		android::app::ProgressDialog::J2CPP_CLASS_NAME,
		android::app::ProgressDialog::J2CPP_METHOD_NAME(13),
		android::app::ProgressDialog::J2CPP_METHOD_SIGNATURE(13), 
		jint
	>(get_jobject());
}

void android::app::ProgressDialog::setMax(jint a0)
{
	return call_method<
		android::app::ProgressDialog::J2CPP_CLASS_NAME,
		android::app::ProgressDialog::J2CPP_METHOD_NAME(14),
		android::app::ProgressDialog::J2CPP_METHOD_SIGNATURE(14), 
		void
	>(get_jobject(), a0);
}

void android::app::ProgressDialog::incrementProgressBy(jint a0)
{
	return call_method<
		android::app::ProgressDialog::J2CPP_CLASS_NAME,
		android::app::ProgressDialog::J2CPP_METHOD_NAME(15),
		android::app::ProgressDialog::J2CPP_METHOD_SIGNATURE(15), 
		void
	>(get_jobject(), a0);
}

void android::app::ProgressDialog::incrementSecondaryProgressBy(jint a0)
{
	return call_method<
		android::app::ProgressDialog::J2CPP_CLASS_NAME,
		android::app::ProgressDialog::J2CPP_METHOD_NAME(16),
		android::app::ProgressDialog::J2CPP_METHOD_SIGNATURE(16), 
		void
	>(get_jobject(), a0);
}

void android::app::ProgressDialog::setProgressDrawable(local_ref< android::graphics::drawable::Drawable > const &a0)
{
	return call_method<
		android::app::ProgressDialog::J2CPP_CLASS_NAME,
		android::app::ProgressDialog::J2CPP_METHOD_NAME(17),
		android::app::ProgressDialog::J2CPP_METHOD_SIGNATURE(17), 
		void
	>(get_jobject(), a0);
}

void android::app::ProgressDialog::setIndeterminateDrawable(local_ref< android::graphics::drawable::Drawable > const &a0)
{
	return call_method<
		android::app::ProgressDialog::J2CPP_CLASS_NAME,
		android::app::ProgressDialog::J2CPP_METHOD_NAME(18),
		android::app::ProgressDialog::J2CPP_METHOD_SIGNATURE(18), 
		void
	>(get_jobject(), a0);
}

void android::app::ProgressDialog::setIndeterminate(jboolean a0)
{
	return call_method<
		android::app::ProgressDialog::J2CPP_CLASS_NAME,
		android::app::ProgressDialog::J2CPP_METHOD_NAME(19),
		android::app::ProgressDialog::J2CPP_METHOD_SIGNATURE(19), 
		void
	>(get_jobject(), a0);
}

jboolean android::app::ProgressDialog::isIndeterminate()
{
	return call_method<
		android::app::ProgressDialog::J2CPP_CLASS_NAME,
		android::app::ProgressDialog::J2CPP_METHOD_NAME(20),
		android::app::ProgressDialog::J2CPP_METHOD_SIGNATURE(20), 
		jboolean
	>(get_jobject());
}

void android::app::ProgressDialog::setMessage(local_ref< java::lang::CharSequence > const &a0)
{
	return call_method<
		android::app::ProgressDialog::J2CPP_CLASS_NAME,
		android::app::ProgressDialog::J2CPP_METHOD_NAME(21),
		android::app::ProgressDialog::J2CPP_METHOD_SIGNATURE(21), 
		void
	>(get_jobject(), a0);
}

void android::app::ProgressDialog::setProgressStyle(jint a0)
{
	return call_method<
		android::app::ProgressDialog::J2CPP_CLASS_NAME,
		android::app::ProgressDialog::J2CPP_METHOD_NAME(22),
		android::app::ProgressDialog::J2CPP_METHOD_SIGNATURE(22), 
		void
	>(get_jobject(), a0);
}


static_field<
	android::app::ProgressDialog::J2CPP_CLASS_NAME,
	android::app::ProgressDialog::J2CPP_FIELD_NAME(0),
	android::app::ProgressDialog::J2CPP_FIELD_SIGNATURE(0),
	jint
> android::app::ProgressDialog::STYLE_SPINNER;

static_field<
	android::app::ProgressDialog::J2CPP_CLASS_NAME,
	android::app::ProgressDialog::J2CPP_FIELD_NAME(1),
	android::app::ProgressDialog::J2CPP_FIELD_SIGNATURE(1),
	jint
> android::app::ProgressDialog::STYLE_HORIZONTAL;


J2CPP_DEFINE_CLASS(android::app::ProgressDialog,"android/app/ProgressDialog")
J2CPP_DEFINE_METHOD(android::app::ProgressDialog,0,"<init>","(Landroid/content/Context;)V")
J2CPP_DEFINE_METHOD(android::app::ProgressDialog,1,"<init>","(Landroid/content/Context;I)V")
J2CPP_DEFINE_METHOD(android::app::ProgressDialog,2,"show","(Landroid/content/Context;Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Landroid/app/ProgressDialog;")
J2CPP_DEFINE_METHOD(android::app::ProgressDialog,3,"show","(Landroid/content/Context;Ljava/lang/CharSequence;Ljava/lang/CharSequence;Z)Landroid/app/ProgressDialog;")
J2CPP_DEFINE_METHOD(android::app::ProgressDialog,4,"show","(Landroid/content/Context;Ljava/lang/CharSequence;Ljava/lang/CharSequence;ZZ)Landroid/app/ProgressDialog;")
J2CPP_DEFINE_METHOD(android::app::ProgressDialog,5,"show","(Landroid/content/Context;Ljava/lang/CharSequence;Ljava/lang/CharSequence;ZZLandroid/content/DialogInterface$OnCancelListener;)Landroid/app/ProgressDialog;")
J2CPP_DEFINE_METHOD(android::app::ProgressDialog,6,"onCreate","(Landroid/os/Bundle;)V")
J2CPP_DEFINE_METHOD(android::app::ProgressDialog,7,"onStart","()V")
J2CPP_DEFINE_METHOD(android::app::ProgressDialog,8,"onStop","()V")
J2CPP_DEFINE_METHOD(android::app::ProgressDialog,9,"setProgress","(I)V")
J2CPP_DEFINE_METHOD(android::app::ProgressDialog,10,"setSecondaryProgress","(I)V")
J2CPP_DEFINE_METHOD(android::app::ProgressDialog,11,"getProgress","()I")
J2CPP_DEFINE_METHOD(android::app::ProgressDialog,12,"getSecondaryProgress","()I")
J2CPP_DEFINE_METHOD(android::app::ProgressDialog,13,"getMax","()I")
J2CPP_DEFINE_METHOD(android::app::ProgressDialog,14,"setMax","(I)V")
J2CPP_DEFINE_METHOD(android::app::ProgressDialog,15,"incrementProgressBy","(I)V")
J2CPP_DEFINE_METHOD(android::app::ProgressDialog,16,"incrementSecondaryProgressBy","(I)V")
J2CPP_DEFINE_METHOD(android::app::ProgressDialog,17,"setProgressDrawable","(Landroid/graphics/drawable/Drawable;)V")
J2CPP_DEFINE_METHOD(android::app::ProgressDialog,18,"setIndeterminateDrawable","(Landroid/graphics/drawable/Drawable;)V")
J2CPP_DEFINE_METHOD(android::app::ProgressDialog,19,"setIndeterminate","(Z)V")
J2CPP_DEFINE_METHOD(android::app::ProgressDialog,20,"isIndeterminate","()Z")
J2CPP_DEFINE_METHOD(android::app::ProgressDialog,21,"setMessage","(Ljava/lang/CharSequence;)V")
J2CPP_DEFINE_METHOD(android::app::ProgressDialog,22,"setProgressStyle","(I)V")
J2CPP_DEFINE_FIELD(android::app::ProgressDialog,0,"STYLE_SPINNER","I")
J2CPP_DEFINE_FIELD(android::app::ProgressDialog,1,"STYLE_HORIZONTAL","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_APP_PROGRESSDIALOG_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
