/*================================================================================
  code generated by: java2cpp
  class: android.app.ListActivity
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_APP_LISTACTIVITY_HPP_DECL
#define J2CPP_ANDROID_APP_LISTACTIVITY_HPP_DECL


namespace j2cpp { namespace android { namespace app { class Activity; } } }
namespace j2cpp { namespace android { namespace widget { class ListAdapter; } } }
namespace j2cpp { namespace android { namespace widget { class ListView; } } }


#include <android/app/Activity.hpp>
#include <android/widget/ListAdapter.hpp>
#include <android/widget/ListView.hpp>


namespace j2cpp {

namespace android { namespace app {

	class ListActivity;
	class ListActivity
		: public cpp_object<ListActivity>
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

		explicit ListActivity(jobject jobj)
		: cpp_object<ListActivity>(jobj)
		{
		}

		operator local_ref<android::app::Activity>() const;


		ListActivity();
		void onContentChanged();
		void setListAdapter(local_ref< android::widget::ListAdapter > const&);
		void setSelection(cpp_int const&);
		cpp_int getSelectedItemPosition();
		cpp_long getSelectedItemId();
		local_ref< android::widget::ListView > getListView();
		local_ref< android::widget::ListAdapter > getListAdapter();
	}; //class ListActivity

} //namespace app
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_APP_LISTACTIVITY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_APP_LISTACTIVITY_HPP_IMPL
#define J2CPP_ANDROID_APP_LISTACTIVITY_HPP_IMPL

namespace j2cpp {



android::app::ListActivity::operator local_ref<android::app::Activity>() const
{
	return local_ref<android::app::Activity>(get_jtype());
}


android::app::ListActivity::ListActivity()
: cpp_object<android::app::ListActivity>(
	environment::get().get_jenv()->NewObject(
		get_class<android::app::ListActivity::J2CPP_CLASS_NAME>(),
		get_method_id<android::app::ListActivity::J2CPP_CLASS_NAME, android::app::ListActivity::J2CPP_METHOD_NAME(0), android::app::ListActivity::J2CPP_METHOD_SIGNATURE(0), false>()
	)
)
{
}




void android::app::ListActivity::onContentChanged()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

void android::app::ListActivity::setListAdapter(local_ref< android::widget::ListAdapter > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

void android::app::ListActivity::setSelection(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::app::ListActivity::getSelectedItemPosition()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

cpp_long android::app::ListActivity::getSelectedItemId()
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

local_ref< android::widget::ListView > android::app::ListActivity::getListView()
{
	return local_ref< android::widget::ListView >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}

local_ref< android::widget::ListAdapter > android::app::ListActivity::getListAdapter()
{
	return local_ref< android::widget::ListAdapter >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(android::app::ListActivity,"android/app/ListActivity")
J2CPP_DEFINE_METHOD(android::app::ListActivity,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::app::ListActivity,1,"onListItemClick","(Landroid/widget/ListView;Landroid/view/View;IJ)V")
J2CPP_DEFINE_METHOD(android::app::ListActivity,2,"onRestoreInstanceState","(Landroid/os/Bundle;)V")
J2CPP_DEFINE_METHOD(android::app::ListActivity,3,"onContentChanged","()V")
J2CPP_DEFINE_METHOD(android::app::ListActivity,4,"setListAdapter","(Landroid/widget/ListAdapter;)V")
J2CPP_DEFINE_METHOD(android::app::ListActivity,5,"setSelection","(I)V")
J2CPP_DEFINE_METHOD(android::app::ListActivity,6,"getSelectedItemPosition","()I")
J2CPP_DEFINE_METHOD(android::app::ListActivity,7,"getSelectedItemId","()J")
J2CPP_DEFINE_METHOD(android::app::ListActivity,8,"getListView","()Landroid/widget/ListView;")
J2CPP_DEFINE_METHOD(android::app::ListActivity,9,"getListAdapter","()Landroid/widget/ListAdapter;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_APP_LISTACTIVITY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
