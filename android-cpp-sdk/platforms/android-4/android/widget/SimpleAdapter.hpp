/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.widget.SimpleAdapter
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_SIMPLEADAPTER_HPP_DECL
#define J2CPP_ANDROID_WIDGET_SIMPLEADAPTER_HPP_DECL


namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace android { namespace view { class ViewGroup; } } }
namespace j2cpp { namespace android { namespace widget { class TextView; } } }
namespace j2cpp { namespace android { namespace widget { class Filter; } } }
namespace j2cpp { namespace android { namespace widget { namespace SimpleAdapter_ { class ViewBinder; } } } }
namespace j2cpp { namespace android { namespace widget { class Filterable; } } }
namespace j2cpp { namespace android { namespace widget { class ImageView; } } }
namespace j2cpp { namespace android { namespace widget { class BaseAdapter; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace java { namespace util { class List; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/content/Context.hpp>
#include <android/view/View.hpp>
#include <android/view/ViewGroup.hpp>
#include <android/widget/BaseAdapter.hpp>
#include <android/widget/Filter.hpp>
#include <android/widget/Filterable.hpp>
#include <android/widget/ImageView.hpp>
#include <android/widget/SimpleAdapter.hpp>
#include <android/widget/TextView.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/List.hpp>


namespace j2cpp {

namespace android { namespace widget {

	class SimpleAdapter;
	namespace SimpleAdapter_ {

		class ViewBinder;
		class ViewBinder
			: public object<ViewBinder>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			explicit ViewBinder(jobject jobj)
			: object<ViewBinder>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			jboolean setViewValue(local_ref< android::view::View >  const&, local_ref< java::lang::Object >  const&, local_ref< java::lang::String >  const&);
		}; //class ViewBinder

	} //namespace SimpleAdapter_

	class SimpleAdapter
		: public object<SimpleAdapter>
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

		typedef SimpleAdapter_::ViewBinder ViewBinder;

		explicit SimpleAdapter(jobject jobj)
		: object<SimpleAdapter>(jobj)
		{
		}

		operator local_ref<android::widget::BaseAdapter>() const;
		operator local_ref<android::widget::Filterable>() const;


		SimpleAdapter(local_ref< android::content::Context > const&, local_ref< java::util::List > const&, jint, local_ref< array< local_ref< java::lang::String >, 1> > const&, local_ref< array<jint,1> > const&);
		jint getCount();
		local_ref< java::lang::Object > getItem(jint);
		jlong getItemId(jint);
		local_ref< android::view::View > getView(jint, local_ref< android::view::View >  const&, local_ref< android::view::ViewGroup >  const&);
		void setDropDownViewResource(jint);
		local_ref< android::view::View > getDropDownView(jint, local_ref< android::view::View >  const&, local_ref< android::view::ViewGroup >  const&);
		local_ref< android::widget::SimpleAdapter_::ViewBinder > getViewBinder();
		void setViewBinder(local_ref< android::widget::SimpleAdapter_::ViewBinder >  const&);
		void setViewImage(local_ref< android::widget::ImageView >  const&, jint);
		void setViewImage(local_ref< android::widget::ImageView >  const&, local_ref< java::lang::String >  const&);
		void setViewText(local_ref< android::widget::TextView >  const&, local_ref< java::lang::String >  const&);
		local_ref< android::widget::Filter > getFilter();
	}; //class SimpleAdapter

} //namespace widget
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_SIMPLEADAPTER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_SIMPLEADAPTER_HPP_IMPL
#define J2CPP_ANDROID_WIDGET_SIMPLEADAPTER_HPP_IMPL

namespace j2cpp {




android::widget::SimpleAdapter_::ViewBinder::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

jboolean android::widget::SimpleAdapter_::ViewBinder::setViewValue(local_ref< android::view::View > const &a0, local_ref< java::lang::Object > const &a1, local_ref< java::lang::String > const &a2)
{
	return call_method<
		android::widget::SimpleAdapter_::ViewBinder::J2CPP_CLASS_NAME,
		android::widget::SimpleAdapter_::ViewBinder::J2CPP_METHOD_NAME(0),
		android::widget::SimpleAdapter_::ViewBinder::J2CPP_METHOD_SIGNATURE(0), 
		jboolean >
	(get_jobject(), a0, a1, a2);
}


J2CPP_DEFINE_CLASS(android::widget::SimpleAdapter_::ViewBinder,"android/widget/SimpleAdapter$ViewBinder")
J2CPP_DEFINE_METHOD(android::widget::SimpleAdapter_::ViewBinder,0,"setViewValue","(Landroid/view/View;Ljava/lang/Object;Ljava/lang/String;)Z")



android::widget::SimpleAdapter::operator local_ref<android::widget::BaseAdapter>() const
{
	return local_ref<android::widget::BaseAdapter>(get_jobject());
}

android::widget::SimpleAdapter::operator local_ref<android::widget::Filterable>() const
{
	return local_ref<android::widget::Filterable>(get_jobject());
}


android::widget::SimpleAdapter::SimpleAdapter(local_ref< android::content::Context > const &a0, local_ref< java::util::List > const &a1, jint a2, local_ref< array< local_ref< java::lang::String >, 1> > const &a3, local_ref< array<jint,1> > const &a4)
: object<android::widget::SimpleAdapter>(
	call_new_object<
		android::widget::SimpleAdapter::J2CPP_CLASS_NAME,
		android::widget::SimpleAdapter::J2CPP_METHOD_NAME(0),
		android::widget::SimpleAdapter::J2CPP_METHOD_SIGNATURE(0)>
	(a0, a1, a2, a3, a4)
)
{
}


jint android::widget::SimpleAdapter::getCount()
{
	return call_method<
		android::widget::SimpleAdapter::J2CPP_CLASS_NAME,
		android::widget::SimpleAdapter::J2CPP_METHOD_NAME(1),
		android::widget::SimpleAdapter::J2CPP_METHOD_SIGNATURE(1), 
		jint >
	(get_jobject());
}

local_ref< java::lang::Object > android::widget::SimpleAdapter::getItem(jint a0)
{
	return call_method<
		android::widget::SimpleAdapter::J2CPP_CLASS_NAME,
		android::widget::SimpleAdapter::J2CPP_METHOD_NAME(2),
		android::widget::SimpleAdapter::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::Object > >
	(get_jobject(), a0);
}

jlong android::widget::SimpleAdapter::getItemId(jint a0)
{
	return call_method<
		android::widget::SimpleAdapter::J2CPP_CLASS_NAME,
		android::widget::SimpleAdapter::J2CPP_METHOD_NAME(3),
		android::widget::SimpleAdapter::J2CPP_METHOD_SIGNATURE(3), 
		jlong >
	(get_jobject(), a0);
}

local_ref< android::view::View > android::widget::SimpleAdapter::getView(jint a0, local_ref< android::view::View > const &a1, local_ref< android::view::ViewGroup > const &a2)
{
	return call_method<
		android::widget::SimpleAdapter::J2CPP_CLASS_NAME,
		android::widget::SimpleAdapter::J2CPP_METHOD_NAME(4),
		android::widget::SimpleAdapter::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< android::view::View > >
	(get_jobject(), a0, a1, a2);
}

void android::widget::SimpleAdapter::setDropDownViewResource(jint a0)
{
	return call_method<
		android::widget::SimpleAdapter::J2CPP_CLASS_NAME,
		android::widget::SimpleAdapter::J2CPP_METHOD_NAME(5),
		android::widget::SimpleAdapter::J2CPP_METHOD_SIGNATURE(5), 
		void >
	(get_jobject(), a0);
}

local_ref< android::view::View > android::widget::SimpleAdapter::getDropDownView(jint a0, local_ref< android::view::View > const &a1, local_ref< android::view::ViewGroup > const &a2)
{
	return call_method<
		android::widget::SimpleAdapter::J2CPP_CLASS_NAME,
		android::widget::SimpleAdapter::J2CPP_METHOD_NAME(6),
		android::widget::SimpleAdapter::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< android::view::View > >
	(get_jobject(), a0, a1, a2);
}

local_ref< android::widget::SimpleAdapter_::ViewBinder > android::widget::SimpleAdapter::getViewBinder()
{
	return call_method<
		android::widget::SimpleAdapter::J2CPP_CLASS_NAME,
		android::widget::SimpleAdapter::J2CPP_METHOD_NAME(7),
		android::widget::SimpleAdapter::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< android::widget::SimpleAdapter_::ViewBinder > >
	(get_jobject());
}

void android::widget::SimpleAdapter::setViewBinder(local_ref< android::widget::SimpleAdapter_::ViewBinder > const &a0)
{
	return call_method<
		android::widget::SimpleAdapter::J2CPP_CLASS_NAME,
		android::widget::SimpleAdapter::J2CPP_METHOD_NAME(8),
		android::widget::SimpleAdapter::J2CPP_METHOD_SIGNATURE(8), 
		void >
	(get_jobject(), a0);
}

void android::widget::SimpleAdapter::setViewImage(local_ref< android::widget::ImageView > const &a0, jint a1)
{
	return call_method<
		android::widget::SimpleAdapter::J2CPP_CLASS_NAME,
		android::widget::SimpleAdapter::J2CPP_METHOD_NAME(9),
		android::widget::SimpleAdapter::J2CPP_METHOD_SIGNATURE(9), 
		void >
	(get_jobject(), a0, a1);
}

void android::widget::SimpleAdapter::setViewImage(local_ref< android::widget::ImageView > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		android::widget::SimpleAdapter::J2CPP_CLASS_NAME,
		android::widget::SimpleAdapter::J2CPP_METHOD_NAME(10),
		android::widget::SimpleAdapter::J2CPP_METHOD_SIGNATURE(10), 
		void >
	(get_jobject(), a0, a1);
}

void android::widget::SimpleAdapter::setViewText(local_ref< android::widget::TextView > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		android::widget::SimpleAdapter::J2CPP_CLASS_NAME,
		android::widget::SimpleAdapter::J2CPP_METHOD_NAME(11),
		android::widget::SimpleAdapter::J2CPP_METHOD_SIGNATURE(11), 
		void >
	(get_jobject(), a0, a1);
}

local_ref< android::widget::Filter > android::widget::SimpleAdapter::getFilter()
{
	return call_method<
		android::widget::SimpleAdapter::J2CPP_CLASS_NAME,
		android::widget::SimpleAdapter::J2CPP_METHOD_NAME(12),
		android::widget::SimpleAdapter::J2CPP_METHOD_SIGNATURE(12), 
		local_ref< android::widget::Filter > >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(android::widget::SimpleAdapter,"android/widget/SimpleAdapter")
J2CPP_DEFINE_METHOD(android::widget::SimpleAdapter,0,"<init>","(Landroid/content/Context;Ljava/util/List;I[java.lang.String[I)V")
J2CPP_DEFINE_METHOD(android::widget::SimpleAdapter,1,"getCount","()I")
J2CPP_DEFINE_METHOD(android::widget::SimpleAdapter,2,"getItem","(I)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(android::widget::SimpleAdapter,3,"getItemId","(I)J")
J2CPP_DEFINE_METHOD(android::widget::SimpleAdapter,4,"getView","(ILandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;")
J2CPP_DEFINE_METHOD(android::widget::SimpleAdapter,5,"setDropDownViewResource","(I)V")
J2CPP_DEFINE_METHOD(android::widget::SimpleAdapter,6,"getDropDownView","(ILandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;")
J2CPP_DEFINE_METHOD(android::widget::SimpleAdapter,7,"getViewBinder","()Landroid/widget/SimpleAdapter$ViewBinder;")
J2CPP_DEFINE_METHOD(android::widget::SimpleAdapter,8,"setViewBinder","(Landroid/widget/SimpleAdapter$ViewBinder;)V")
J2CPP_DEFINE_METHOD(android::widget::SimpleAdapter,9,"setViewImage","(Landroid/widget/ImageView;I)V")
J2CPP_DEFINE_METHOD(android::widget::SimpleAdapter,10,"setViewImage","(Landroid/widget/ImageView;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::widget::SimpleAdapter,11,"setViewText","(Landroid/widget/TextView;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::widget::SimpleAdapter,12,"getFilter","()Landroid/widget/Filter;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_SIMPLEADAPTER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
