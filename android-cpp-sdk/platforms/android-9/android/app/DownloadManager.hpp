/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.app.DownloadManager
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_APP_DOWNLOADMANAGER_HPP_DECL
#define J2CPP_ANDROID_APP_DOWNLOADMANAGER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace app { namespace DownloadManager_ { class Query; } } } }
namespace j2cpp { namespace android { namespace app { namespace DownloadManager_ { class Request; } } } }
namespace j2cpp { namespace android { namespace database { class Cursor; } } }
namespace j2cpp { namespace android { namespace net { class Uri; } } }
namespace j2cpp { namespace android { namespace os { class ParcelFileDescriptor; } } }


#include <android/app/DownloadManager.hpp>
#include <android/content/Context.hpp>
#include <android/database/Cursor.hpp>
#include <android/net/Uri.hpp>
#include <android/os/ParcelFileDescriptor.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace app {

	class DownloadManager;
	namespace DownloadManager_ {

		class Query;
		class Query
			: public object<Query>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_METHOD(2)

			explicit Query(jobject jobj)
			: object<Query>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			Query();
			local_ref< android::app::DownloadManager_::Query > setFilterById(local_ref< array<jlong,1> >  const&);
			local_ref< android::app::DownloadManager_::Query > setFilterByStatus(jint);
		}; //class Query

		class Request;
		class Request
			: public object<Request>
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
			J2CPP_DECLARE_FIELD(0)
			J2CPP_DECLARE_FIELD(1)

			explicit Request(jobject jobj)
			: object<Request>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			Request(local_ref< android::net::Uri > const&);
			local_ref< android::app::DownloadManager_::Request > setDestinationUri(local_ref< android::net::Uri >  const&);
			local_ref< android::app::DownloadManager_::Request > setDestinationInExternalFilesDir(local_ref< android::content::Context >  const&, local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
			local_ref< android::app::DownloadManager_::Request > setDestinationInExternalPublicDir(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
			local_ref< android::app::DownloadManager_::Request > addRequestHeader(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
			local_ref< android::app::DownloadManager_::Request > setTitle(local_ref< java::lang::CharSequence >  const&);
			local_ref< android::app::DownloadManager_::Request > setDescription(local_ref< java::lang::CharSequence >  const&);
			local_ref< android::app::DownloadManager_::Request > setMimeType(local_ref< java::lang::String >  const&);
			local_ref< android::app::DownloadManager_::Request > setShowRunningNotification(jboolean);
			local_ref< android::app::DownloadManager_::Request > setAllowedNetworkTypes(jint);
			local_ref< android::app::DownloadManager_::Request > setAllowedOverRoaming(jboolean);
			local_ref< android::app::DownloadManager_::Request > setVisibleInDownloadsUi(jboolean);

			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > NETWORK_MOBILE;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > NETWORK_WIFI;
		}; //class Request

	} //namespace DownloadManager_

	class DownloadManager
		: public object<DownloadManager>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)
		J2CPP_DECLARE_FIELD(6)
		J2CPP_DECLARE_FIELD(7)
		J2CPP_DECLARE_FIELD(8)
		J2CPP_DECLARE_FIELD(9)
		J2CPP_DECLARE_FIELD(10)
		J2CPP_DECLARE_FIELD(11)
		J2CPP_DECLARE_FIELD(12)
		J2CPP_DECLARE_FIELD(13)
		J2CPP_DECLARE_FIELD(14)
		J2CPP_DECLARE_FIELD(15)
		J2CPP_DECLARE_FIELD(16)
		J2CPP_DECLARE_FIELD(17)
		J2CPP_DECLARE_FIELD(18)
		J2CPP_DECLARE_FIELD(19)
		J2CPP_DECLARE_FIELD(20)
		J2CPP_DECLARE_FIELD(21)
		J2CPP_DECLARE_FIELD(22)
		J2CPP_DECLARE_FIELD(23)
		J2CPP_DECLARE_FIELD(24)
		J2CPP_DECLARE_FIELD(25)
		J2CPP_DECLARE_FIELD(26)
		J2CPP_DECLARE_FIELD(27)
		J2CPP_DECLARE_FIELD(28)
		J2CPP_DECLARE_FIELD(29)
		J2CPP_DECLARE_FIELD(30)
		J2CPP_DECLARE_FIELD(31)
		J2CPP_DECLARE_FIELD(32)
		J2CPP_DECLARE_FIELD(33)

		typedef DownloadManager_::Query Query;
		typedef DownloadManager_::Request Request;

		explicit DownloadManager(jobject jobj)
		: object<DownloadManager>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		jlong enqueue(local_ref< android::app::DownloadManager_::Request >  const&);
		jint remove(local_ref< array<jlong,1> >  const&);
		local_ref< android::database::Cursor > query(local_ref< android::app::DownloadManager_::Query >  const&);
		local_ref< android::os::ParcelFileDescriptor > openDownloadedFile(jlong);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::String > > COLUMN_ID;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::lang::String > > COLUMN_TITLE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< java::lang::String > > COLUMN_DESCRIPTION;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< java::lang::String > > COLUMN_URI;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), local_ref< java::lang::String > > COLUMN_MEDIA_TYPE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), local_ref< java::lang::String > > COLUMN_TOTAL_SIZE_BYTES;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), local_ref< java::lang::String > > COLUMN_LOCAL_URI;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), local_ref< java::lang::String > > COLUMN_STATUS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), local_ref< java::lang::String > > COLUMN_REASON;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(9), J2CPP_FIELD_SIGNATURE(9), local_ref< java::lang::String > > COLUMN_BYTES_DOWNLOADED_SO_FAR;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(10), J2CPP_FIELD_SIGNATURE(10), local_ref< java::lang::String > > COLUMN_LAST_MODIFIED_TIMESTAMP;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(11), J2CPP_FIELD_SIGNATURE(11), local_ref< java::lang::String > > COLUMN_MEDIAPROVIDER_URI;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(12), J2CPP_FIELD_SIGNATURE(12), jint > STATUS_PENDING;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(13), J2CPP_FIELD_SIGNATURE(13), jint > STATUS_RUNNING;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(14), J2CPP_FIELD_SIGNATURE(14), jint > STATUS_PAUSED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(15), J2CPP_FIELD_SIGNATURE(15), jint > STATUS_SUCCESSFUL;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(16), J2CPP_FIELD_SIGNATURE(16), jint > STATUS_FAILED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(17), J2CPP_FIELD_SIGNATURE(17), jint > ERROR_UNKNOWN;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(18), J2CPP_FIELD_SIGNATURE(18), jint > ERROR_FILE_ERROR;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(19), J2CPP_FIELD_SIGNATURE(19), jint > ERROR_UNHANDLED_HTTP_CODE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(20), J2CPP_FIELD_SIGNATURE(20), jint > ERROR_HTTP_DATA_ERROR;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(21), J2CPP_FIELD_SIGNATURE(21), jint > ERROR_TOO_MANY_REDIRECTS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(22), J2CPP_FIELD_SIGNATURE(22), jint > ERROR_INSUFFICIENT_SPACE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(23), J2CPP_FIELD_SIGNATURE(23), jint > ERROR_DEVICE_NOT_FOUND;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(24), J2CPP_FIELD_SIGNATURE(24), jint > ERROR_CANNOT_RESUME;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(25), J2CPP_FIELD_SIGNATURE(25), jint > ERROR_FILE_ALREADY_EXISTS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(26), J2CPP_FIELD_SIGNATURE(26), jint > PAUSED_WAITING_TO_RETRY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(27), J2CPP_FIELD_SIGNATURE(27), jint > PAUSED_WAITING_FOR_NETWORK;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(28), J2CPP_FIELD_SIGNATURE(28), jint > PAUSED_QUEUED_FOR_WIFI;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(29), J2CPP_FIELD_SIGNATURE(29), jint > PAUSED_UNKNOWN;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(30), J2CPP_FIELD_SIGNATURE(30), local_ref< java::lang::String > > ACTION_DOWNLOAD_COMPLETE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(31), J2CPP_FIELD_SIGNATURE(31), local_ref< java::lang::String > > ACTION_NOTIFICATION_CLICKED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(32), J2CPP_FIELD_SIGNATURE(32), local_ref< java::lang::String > > ACTION_VIEW_DOWNLOADS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(33), J2CPP_FIELD_SIGNATURE(33), local_ref< java::lang::String > > EXTRA_DOWNLOAD_ID;
	}; //class DownloadManager

} //namespace app
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_APP_DOWNLOADMANAGER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_APP_DOWNLOADMANAGER_HPP_IMPL
#define J2CPP_ANDROID_APP_DOWNLOADMANAGER_HPP_IMPL

namespace j2cpp {




android::app::DownloadManager_::Query::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::app::DownloadManager_::Query::Query()
: object<android::app::DownloadManager_::Query>(
	call_new_object<
		android::app::DownloadManager_::Query::J2CPP_CLASS_NAME,
		android::app::DownloadManager_::Query::J2CPP_METHOD_NAME(0),
		android::app::DownloadManager_::Query::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


local_ref< android::app::DownloadManager_::Query > android::app::DownloadManager_::Query::setFilterById(local_ref< array<jlong,1> > const &a0)
{
	return call_method<
		android::app::DownloadManager_::Query::J2CPP_CLASS_NAME,
		android::app::DownloadManager_::Query::J2CPP_METHOD_NAME(1),
		android::app::DownloadManager_::Query::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< android::app::DownloadManager_::Query >
	>(get_jobject(), a0);
}

local_ref< android::app::DownloadManager_::Query > android::app::DownloadManager_::Query::setFilterByStatus(jint a0)
{
	return call_method<
		android::app::DownloadManager_::Query::J2CPP_CLASS_NAME,
		android::app::DownloadManager_::Query::J2CPP_METHOD_NAME(2),
		android::app::DownloadManager_::Query::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< android::app::DownloadManager_::Query >
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::app::DownloadManager_::Query,"android/app/DownloadManager$Query")
J2CPP_DEFINE_METHOD(android::app::DownloadManager_::Query,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::app::DownloadManager_::Query,1,"setFilterById","([J)Landroid/app/DownloadManager$Query;")
J2CPP_DEFINE_METHOD(android::app::DownloadManager_::Query,2,"setFilterByStatus","(I)Landroid/app/DownloadManager$Query;")


android::app::DownloadManager_::Request::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::app::DownloadManager_::Request::Request(local_ref< android::net::Uri > const &a0)
: object<android::app::DownloadManager_::Request>(
	call_new_object<
		android::app::DownloadManager_::Request::J2CPP_CLASS_NAME,
		android::app::DownloadManager_::Request::J2CPP_METHOD_NAME(0),
		android::app::DownloadManager_::Request::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}


local_ref< android::app::DownloadManager_::Request > android::app::DownloadManager_::Request::setDestinationUri(local_ref< android::net::Uri > const &a0)
{
	return call_method<
		android::app::DownloadManager_::Request::J2CPP_CLASS_NAME,
		android::app::DownloadManager_::Request::J2CPP_METHOD_NAME(1),
		android::app::DownloadManager_::Request::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< android::app::DownloadManager_::Request >
	>(get_jobject(), a0);
}

local_ref< android::app::DownloadManager_::Request > android::app::DownloadManager_::Request::setDestinationInExternalFilesDir(local_ref< android::content::Context > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::String > const &a2)
{
	return call_method<
		android::app::DownloadManager_::Request::J2CPP_CLASS_NAME,
		android::app::DownloadManager_::Request::J2CPP_METHOD_NAME(2),
		android::app::DownloadManager_::Request::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< android::app::DownloadManager_::Request >
	>(get_jobject(), a0, a1, a2);
}

local_ref< android::app::DownloadManager_::Request > android::app::DownloadManager_::Request::setDestinationInExternalPublicDir(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		android::app::DownloadManager_::Request::J2CPP_CLASS_NAME,
		android::app::DownloadManager_::Request::J2CPP_METHOD_NAME(3),
		android::app::DownloadManager_::Request::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< android::app::DownloadManager_::Request >
	>(get_jobject(), a0, a1);
}

local_ref< android::app::DownloadManager_::Request > android::app::DownloadManager_::Request::addRequestHeader(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		android::app::DownloadManager_::Request::J2CPP_CLASS_NAME,
		android::app::DownloadManager_::Request::J2CPP_METHOD_NAME(4),
		android::app::DownloadManager_::Request::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< android::app::DownloadManager_::Request >
	>(get_jobject(), a0, a1);
}

local_ref< android::app::DownloadManager_::Request > android::app::DownloadManager_::Request::setTitle(local_ref< java::lang::CharSequence > const &a0)
{
	return call_method<
		android::app::DownloadManager_::Request::J2CPP_CLASS_NAME,
		android::app::DownloadManager_::Request::J2CPP_METHOD_NAME(5),
		android::app::DownloadManager_::Request::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< android::app::DownloadManager_::Request >
	>(get_jobject(), a0);
}

local_ref< android::app::DownloadManager_::Request > android::app::DownloadManager_::Request::setDescription(local_ref< java::lang::CharSequence > const &a0)
{
	return call_method<
		android::app::DownloadManager_::Request::J2CPP_CLASS_NAME,
		android::app::DownloadManager_::Request::J2CPP_METHOD_NAME(6),
		android::app::DownloadManager_::Request::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< android::app::DownloadManager_::Request >
	>(get_jobject(), a0);
}

local_ref< android::app::DownloadManager_::Request > android::app::DownloadManager_::Request::setMimeType(local_ref< java::lang::String > const &a0)
{
	return call_method<
		android::app::DownloadManager_::Request::J2CPP_CLASS_NAME,
		android::app::DownloadManager_::Request::J2CPP_METHOD_NAME(7),
		android::app::DownloadManager_::Request::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< android::app::DownloadManager_::Request >
	>(get_jobject(), a0);
}

local_ref< android::app::DownloadManager_::Request > android::app::DownloadManager_::Request::setShowRunningNotification(jboolean a0)
{
	return call_method<
		android::app::DownloadManager_::Request::J2CPP_CLASS_NAME,
		android::app::DownloadManager_::Request::J2CPP_METHOD_NAME(8),
		android::app::DownloadManager_::Request::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< android::app::DownloadManager_::Request >
	>(get_jobject(), a0);
}

local_ref< android::app::DownloadManager_::Request > android::app::DownloadManager_::Request::setAllowedNetworkTypes(jint a0)
{
	return call_method<
		android::app::DownloadManager_::Request::J2CPP_CLASS_NAME,
		android::app::DownloadManager_::Request::J2CPP_METHOD_NAME(9),
		android::app::DownloadManager_::Request::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< android::app::DownloadManager_::Request >
	>(get_jobject(), a0);
}

local_ref< android::app::DownloadManager_::Request > android::app::DownloadManager_::Request::setAllowedOverRoaming(jboolean a0)
{
	return call_method<
		android::app::DownloadManager_::Request::J2CPP_CLASS_NAME,
		android::app::DownloadManager_::Request::J2CPP_METHOD_NAME(10),
		android::app::DownloadManager_::Request::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< android::app::DownloadManager_::Request >
	>(get_jobject(), a0);
}

local_ref< android::app::DownloadManager_::Request > android::app::DownloadManager_::Request::setVisibleInDownloadsUi(jboolean a0)
{
	return call_method<
		android::app::DownloadManager_::Request::J2CPP_CLASS_NAME,
		android::app::DownloadManager_::Request::J2CPP_METHOD_NAME(11),
		android::app::DownloadManager_::Request::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< android::app::DownloadManager_::Request >
	>(get_jobject(), a0);
}


static_field<
	android::app::DownloadManager_::Request::J2CPP_CLASS_NAME,
	android::app::DownloadManager_::Request::J2CPP_FIELD_NAME(0),
	android::app::DownloadManager_::Request::J2CPP_FIELD_SIGNATURE(0),
	jint
> android::app::DownloadManager_::Request::NETWORK_MOBILE;

static_field<
	android::app::DownloadManager_::Request::J2CPP_CLASS_NAME,
	android::app::DownloadManager_::Request::J2CPP_FIELD_NAME(1),
	android::app::DownloadManager_::Request::J2CPP_FIELD_SIGNATURE(1),
	jint
> android::app::DownloadManager_::Request::NETWORK_WIFI;


J2CPP_DEFINE_CLASS(android::app::DownloadManager_::Request,"android/app/DownloadManager$Request")
J2CPP_DEFINE_METHOD(android::app::DownloadManager_::Request,0,"<init>","(Landroid/net/Uri;)V")
J2CPP_DEFINE_METHOD(android::app::DownloadManager_::Request,1,"setDestinationUri","(Landroid/net/Uri;)Landroid/app/DownloadManager$Request;")
J2CPP_DEFINE_METHOD(android::app::DownloadManager_::Request,2,"setDestinationInExternalFilesDir","(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)Landroid/app/DownloadManager$Request;")
J2CPP_DEFINE_METHOD(android::app::DownloadManager_::Request,3,"setDestinationInExternalPublicDir","(Ljava/lang/String;Ljava/lang/String;)Landroid/app/DownloadManager$Request;")
J2CPP_DEFINE_METHOD(android::app::DownloadManager_::Request,4,"addRequestHeader","(Ljava/lang/String;Ljava/lang/String;)Landroid/app/DownloadManager$Request;")
J2CPP_DEFINE_METHOD(android::app::DownloadManager_::Request,5,"setTitle","(Ljava/lang/CharSequence;)Landroid/app/DownloadManager$Request;")
J2CPP_DEFINE_METHOD(android::app::DownloadManager_::Request,6,"setDescription","(Ljava/lang/CharSequence;)Landroid/app/DownloadManager$Request;")
J2CPP_DEFINE_METHOD(android::app::DownloadManager_::Request,7,"setMimeType","(Ljava/lang/String;)Landroid/app/DownloadManager$Request;")
J2CPP_DEFINE_METHOD(android::app::DownloadManager_::Request,8,"setShowRunningNotification","(Z)Landroid/app/DownloadManager$Request;")
J2CPP_DEFINE_METHOD(android::app::DownloadManager_::Request,9,"setAllowedNetworkTypes","(I)Landroid/app/DownloadManager$Request;")
J2CPP_DEFINE_METHOD(android::app::DownloadManager_::Request,10,"setAllowedOverRoaming","(Z)Landroid/app/DownloadManager$Request;")
J2CPP_DEFINE_METHOD(android::app::DownloadManager_::Request,11,"setVisibleInDownloadsUi","(Z)Landroid/app/DownloadManager$Request;")
J2CPP_DEFINE_FIELD(android::app::DownloadManager_::Request,0,"NETWORK_MOBILE","I")
J2CPP_DEFINE_FIELD(android::app::DownloadManager_::Request,1,"NETWORK_WIFI","I")



android::app::DownloadManager::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


jlong android::app::DownloadManager::enqueue(local_ref< android::app::DownloadManager_::Request > const &a0)
{
	return call_method<
		android::app::DownloadManager::J2CPP_CLASS_NAME,
		android::app::DownloadManager::J2CPP_METHOD_NAME(1),
		android::app::DownloadManager::J2CPP_METHOD_SIGNATURE(1), 
		jlong
	>(get_jobject(), a0);
}

jint android::app::DownloadManager::remove(local_ref< array<jlong,1> > const &a0)
{
	return call_method<
		android::app::DownloadManager::J2CPP_CLASS_NAME,
		android::app::DownloadManager::J2CPP_METHOD_NAME(2),
		android::app::DownloadManager::J2CPP_METHOD_SIGNATURE(2), 
		jint
	>(get_jobject(), a0);
}

local_ref< android::database::Cursor > android::app::DownloadManager::query(local_ref< android::app::DownloadManager_::Query > const &a0)
{
	return call_method<
		android::app::DownloadManager::J2CPP_CLASS_NAME,
		android::app::DownloadManager::J2CPP_METHOD_NAME(3),
		android::app::DownloadManager::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< android::database::Cursor >
	>(get_jobject(), a0);
}

local_ref< android::os::ParcelFileDescriptor > android::app::DownloadManager::openDownloadedFile(jlong a0)
{
	return call_method<
		android::app::DownloadManager::J2CPP_CLASS_NAME,
		android::app::DownloadManager::J2CPP_METHOD_NAME(4),
		android::app::DownloadManager::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< android::os::ParcelFileDescriptor >
	>(get_jobject(), a0);
}


static_field<
	android::app::DownloadManager::J2CPP_CLASS_NAME,
	android::app::DownloadManager::J2CPP_FIELD_NAME(0),
	android::app::DownloadManager::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::lang::String >
> android::app::DownloadManager::COLUMN_ID;

static_field<
	android::app::DownloadManager::J2CPP_CLASS_NAME,
	android::app::DownloadManager::J2CPP_FIELD_NAME(1),
	android::app::DownloadManager::J2CPP_FIELD_SIGNATURE(1),
	local_ref< java::lang::String >
> android::app::DownloadManager::COLUMN_TITLE;

static_field<
	android::app::DownloadManager::J2CPP_CLASS_NAME,
	android::app::DownloadManager::J2CPP_FIELD_NAME(2),
	android::app::DownloadManager::J2CPP_FIELD_SIGNATURE(2),
	local_ref< java::lang::String >
> android::app::DownloadManager::COLUMN_DESCRIPTION;

static_field<
	android::app::DownloadManager::J2CPP_CLASS_NAME,
	android::app::DownloadManager::J2CPP_FIELD_NAME(3),
	android::app::DownloadManager::J2CPP_FIELD_SIGNATURE(3),
	local_ref< java::lang::String >
> android::app::DownloadManager::COLUMN_URI;

static_field<
	android::app::DownloadManager::J2CPP_CLASS_NAME,
	android::app::DownloadManager::J2CPP_FIELD_NAME(4),
	android::app::DownloadManager::J2CPP_FIELD_SIGNATURE(4),
	local_ref< java::lang::String >
> android::app::DownloadManager::COLUMN_MEDIA_TYPE;

static_field<
	android::app::DownloadManager::J2CPP_CLASS_NAME,
	android::app::DownloadManager::J2CPP_FIELD_NAME(5),
	android::app::DownloadManager::J2CPP_FIELD_SIGNATURE(5),
	local_ref< java::lang::String >
> android::app::DownloadManager::COLUMN_TOTAL_SIZE_BYTES;

static_field<
	android::app::DownloadManager::J2CPP_CLASS_NAME,
	android::app::DownloadManager::J2CPP_FIELD_NAME(6),
	android::app::DownloadManager::J2CPP_FIELD_SIGNATURE(6),
	local_ref< java::lang::String >
> android::app::DownloadManager::COLUMN_LOCAL_URI;

static_field<
	android::app::DownloadManager::J2CPP_CLASS_NAME,
	android::app::DownloadManager::J2CPP_FIELD_NAME(7),
	android::app::DownloadManager::J2CPP_FIELD_SIGNATURE(7),
	local_ref< java::lang::String >
> android::app::DownloadManager::COLUMN_STATUS;

static_field<
	android::app::DownloadManager::J2CPP_CLASS_NAME,
	android::app::DownloadManager::J2CPP_FIELD_NAME(8),
	android::app::DownloadManager::J2CPP_FIELD_SIGNATURE(8),
	local_ref< java::lang::String >
> android::app::DownloadManager::COLUMN_REASON;

static_field<
	android::app::DownloadManager::J2CPP_CLASS_NAME,
	android::app::DownloadManager::J2CPP_FIELD_NAME(9),
	android::app::DownloadManager::J2CPP_FIELD_SIGNATURE(9),
	local_ref< java::lang::String >
> android::app::DownloadManager::COLUMN_BYTES_DOWNLOADED_SO_FAR;

static_field<
	android::app::DownloadManager::J2CPP_CLASS_NAME,
	android::app::DownloadManager::J2CPP_FIELD_NAME(10),
	android::app::DownloadManager::J2CPP_FIELD_SIGNATURE(10),
	local_ref< java::lang::String >
> android::app::DownloadManager::COLUMN_LAST_MODIFIED_TIMESTAMP;

static_field<
	android::app::DownloadManager::J2CPP_CLASS_NAME,
	android::app::DownloadManager::J2CPP_FIELD_NAME(11),
	android::app::DownloadManager::J2CPP_FIELD_SIGNATURE(11),
	local_ref< java::lang::String >
> android::app::DownloadManager::COLUMN_MEDIAPROVIDER_URI;

static_field<
	android::app::DownloadManager::J2CPP_CLASS_NAME,
	android::app::DownloadManager::J2CPP_FIELD_NAME(12),
	android::app::DownloadManager::J2CPP_FIELD_SIGNATURE(12),
	jint
> android::app::DownloadManager::STATUS_PENDING;

static_field<
	android::app::DownloadManager::J2CPP_CLASS_NAME,
	android::app::DownloadManager::J2CPP_FIELD_NAME(13),
	android::app::DownloadManager::J2CPP_FIELD_SIGNATURE(13),
	jint
> android::app::DownloadManager::STATUS_RUNNING;

static_field<
	android::app::DownloadManager::J2CPP_CLASS_NAME,
	android::app::DownloadManager::J2CPP_FIELD_NAME(14),
	android::app::DownloadManager::J2CPP_FIELD_SIGNATURE(14),
	jint
> android::app::DownloadManager::STATUS_PAUSED;

static_field<
	android::app::DownloadManager::J2CPP_CLASS_NAME,
	android::app::DownloadManager::J2CPP_FIELD_NAME(15),
	android::app::DownloadManager::J2CPP_FIELD_SIGNATURE(15),
	jint
> android::app::DownloadManager::STATUS_SUCCESSFUL;

static_field<
	android::app::DownloadManager::J2CPP_CLASS_NAME,
	android::app::DownloadManager::J2CPP_FIELD_NAME(16),
	android::app::DownloadManager::J2CPP_FIELD_SIGNATURE(16),
	jint
> android::app::DownloadManager::STATUS_FAILED;

static_field<
	android::app::DownloadManager::J2CPP_CLASS_NAME,
	android::app::DownloadManager::J2CPP_FIELD_NAME(17),
	android::app::DownloadManager::J2CPP_FIELD_SIGNATURE(17),
	jint
> android::app::DownloadManager::ERROR_UNKNOWN;

static_field<
	android::app::DownloadManager::J2CPP_CLASS_NAME,
	android::app::DownloadManager::J2CPP_FIELD_NAME(18),
	android::app::DownloadManager::J2CPP_FIELD_SIGNATURE(18),
	jint
> android::app::DownloadManager::ERROR_FILE_ERROR;

static_field<
	android::app::DownloadManager::J2CPP_CLASS_NAME,
	android::app::DownloadManager::J2CPP_FIELD_NAME(19),
	android::app::DownloadManager::J2CPP_FIELD_SIGNATURE(19),
	jint
> android::app::DownloadManager::ERROR_UNHANDLED_HTTP_CODE;

static_field<
	android::app::DownloadManager::J2CPP_CLASS_NAME,
	android::app::DownloadManager::J2CPP_FIELD_NAME(20),
	android::app::DownloadManager::J2CPP_FIELD_SIGNATURE(20),
	jint
> android::app::DownloadManager::ERROR_HTTP_DATA_ERROR;

static_field<
	android::app::DownloadManager::J2CPP_CLASS_NAME,
	android::app::DownloadManager::J2CPP_FIELD_NAME(21),
	android::app::DownloadManager::J2CPP_FIELD_SIGNATURE(21),
	jint
> android::app::DownloadManager::ERROR_TOO_MANY_REDIRECTS;

static_field<
	android::app::DownloadManager::J2CPP_CLASS_NAME,
	android::app::DownloadManager::J2CPP_FIELD_NAME(22),
	android::app::DownloadManager::J2CPP_FIELD_SIGNATURE(22),
	jint
> android::app::DownloadManager::ERROR_INSUFFICIENT_SPACE;

static_field<
	android::app::DownloadManager::J2CPP_CLASS_NAME,
	android::app::DownloadManager::J2CPP_FIELD_NAME(23),
	android::app::DownloadManager::J2CPP_FIELD_SIGNATURE(23),
	jint
> android::app::DownloadManager::ERROR_DEVICE_NOT_FOUND;

static_field<
	android::app::DownloadManager::J2CPP_CLASS_NAME,
	android::app::DownloadManager::J2CPP_FIELD_NAME(24),
	android::app::DownloadManager::J2CPP_FIELD_SIGNATURE(24),
	jint
> android::app::DownloadManager::ERROR_CANNOT_RESUME;

static_field<
	android::app::DownloadManager::J2CPP_CLASS_NAME,
	android::app::DownloadManager::J2CPP_FIELD_NAME(25),
	android::app::DownloadManager::J2CPP_FIELD_SIGNATURE(25),
	jint
> android::app::DownloadManager::ERROR_FILE_ALREADY_EXISTS;

static_field<
	android::app::DownloadManager::J2CPP_CLASS_NAME,
	android::app::DownloadManager::J2CPP_FIELD_NAME(26),
	android::app::DownloadManager::J2CPP_FIELD_SIGNATURE(26),
	jint
> android::app::DownloadManager::PAUSED_WAITING_TO_RETRY;

static_field<
	android::app::DownloadManager::J2CPP_CLASS_NAME,
	android::app::DownloadManager::J2CPP_FIELD_NAME(27),
	android::app::DownloadManager::J2CPP_FIELD_SIGNATURE(27),
	jint
> android::app::DownloadManager::PAUSED_WAITING_FOR_NETWORK;

static_field<
	android::app::DownloadManager::J2CPP_CLASS_NAME,
	android::app::DownloadManager::J2CPP_FIELD_NAME(28),
	android::app::DownloadManager::J2CPP_FIELD_SIGNATURE(28),
	jint
> android::app::DownloadManager::PAUSED_QUEUED_FOR_WIFI;

static_field<
	android::app::DownloadManager::J2CPP_CLASS_NAME,
	android::app::DownloadManager::J2CPP_FIELD_NAME(29),
	android::app::DownloadManager::J2CPP_FIELD_SIGNATURE(29),
	jint
> android::app::DownloadManager::PAUSED_UNKNOWN;

static_field<
	android::app::DownloadManager::J2CPP_CLASS_NAME,
	android::app::DownloadManager::J2CPP_FIELD_NAME(30),
	android::app::DownloadManager::J2CPP_FIELD_SIGNATURE(30),
	local_ref< java::lang::String >
> android::app::DownloadManager::ACTION_DOWNLOAD_COMPLETE;

static_field<
	android::app::DownloadManager::J2CPP_CLASS_NAME,
	android::app::DownloadManager::J2CPP_FIELD_NAME(31),
	android::app::DownloadManager::J2CPP_FIELD_SIGNATURE(31),
	local_ref< java::lang::String >
> android::app::DownloadManager::ACTION_NOTIFICATION_CLICKED;

static_field<
	android::app::DownloadManager::J2CPP_CLASS_NAME,
	android::app::DownloadManager::J2CPP_FIELD_NAME(32),
	android::app::DownloadManager::J2CPP_FIELD_SIGNATURE(32),
	local_ref< java::lang::String >
> android::app::DownloadManager::ACTION_VIEW_DOWNLOADS;

static_field<
	android::app::DownloadManager::J2CPP_CLASS_NAME,
	android::app::DownloadManager::J2CPP_FIELD_NAME(33),
	android::app::DownloadManager::J2CPP_FIELD_SIGNATURE(33),
	local_ref< java::lang::String >
> android::app::DownloadManager::EXTRA_DOWNLOAD_ID;


J2CPP_DEFINE_CLASS(android::app::DownloadManager,"android/app/DownloadManager")
J2CPP_DEFINE_METHOD(android::app::DownloadManager,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::app::DownloadManager,1,"enqueue","(Landroid/app/DownloadManager$Request;)J")
J2CPP_DEFINE_METHOD(android::app::DownloadManager,2,"remove","([J)I")
J2CPP_DEFINE_METHOD(android::app::DownloadManager,3,"query","(Landroid/app/DownloadManager$Query;)Landroid/database/Cursor;")
J2CPP_DEFINE_METHOD(android::app::DownloadManager,4,"openDownloadedFile","(J)Landroid/os/ParcelFileDescriptor;")
J2CPP_DEFINE_FIELD(android::app::DownloadManager,0,"COLUMN_ID","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::app::DownloadManager,1,"COLUMN_TITLE","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::app::DownloadManager,2,"COLUMN_DESCRIPTION","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::app::DownloadManager,3,"COLUMN_URI","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::app::DownloadManager,4,"COLUMN_MEDIA_TYPE","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::app::DownloadManager,5,"COLUMN_TOTAL_SIZE_BYTES","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::app::DownloadManager,6,"COLUMN_LOCAL_URI","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::app::DownloadManager,7,"COLUMN_STATUS","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::app::DownloadManager,8,"COLUMN_REASON","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::app::DownloadManager,9,"COLUMN_BYTES_DOWNLOADED_SO_FAR","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::app::DownloadManager,10,"COLUMN_LAST_MODIFIED_TIMESTAMP","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::app::DownloadManager,11,"COLUMN_MEDIAPROVIDER_URI","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::app::DownloadManager,12,"STATUS_PENDING","I")
J2CPP_DEFINE_FIELD(android::app::DownloadManager,13,"STATUS_RUNNING","I")
J2CPP_DEFINE_FIELD(android::app::DownloadManager,14,"STATUS_PAUSED","I")
J2CPP_DEFINE_FIELD(android::app::DownloadManager,15,"STATUS_SUCCESSFUL","I")
J2CPP_DEFINE_FIELD(android::app::DownloadManager,16,"STATUS_FAILED","I")
J2CPP_DEFINE_FIELD(android::app::DownloadManager,17,"ERROR_UNKNOWN","I")
J2CPP_DEFINE_FIELD(android::app::DownloadManager,18,"ERROR_FILE_ERROR","I")
J2CPP_DEFINE_FIELD(android::app::DownloadManager,19,"ERROR_UNHANDLED_HTTP_CODE","I")
J2CPP_DEFINE_FIELD(android::app::DownloadManager,20,"ERROR_HTTP_DATA_ERROR","I")
J2CPP_DEFINE_FIELD(android::app::DownloadManager,21,"ERROR_TOO_MANY_REDIRECTS","I")
J2CPP_DEFINE_FIELD(android::app::DownloadManager,22,"ERROR_INSUFFICIENT_SPACE","I")
J2CPP_DEFINE_FIELD(android::app::DownloadManager,23,"ERROR_DEVICE_NOT_FOUND","I")
J2CPP_DEFINE_FIELD(android::app::DownloadManager,24,"ERROR_CANNOT_RESUME","I")
J2CPP_DEFINE_FIELD(android::app::DownloadManager,25,"ERROR_FILE_ALREADY_EXISTS","I")
J2CPP_DEFINE_FIELD(android::app::DownloadManager,26,"PAUSED_WAITING_TO_RETRY","I")
J2CPP_DEFINE_FIELD(android::app::DownloadManager,27,"PAUSED_WAITING_FOR_NETWORK","I")
J2CPP_DEFINE_FIELD(android::app::DownloadManager,28,"PAUSED_QUEUED_FOR_WIFI","I")
J2CPP_DEFINE_FIELD(android::app::DownloadManager,29,"PAUSED_UNKNOWN","I")
J2CPP_DEFINE_FIELD(android::app::DownloadManager,30,"ACTION_DOWNLOAD_COMPLETE","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::app::DownloadManager,31,"ACTION_NOTIFICATION_CLICKED","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::app::DownloadManager,32,"ACTION_VIEW_DOWNLOADS","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::app::DownloadManager,33,"EXTRA_DOWNLOAD_ID","Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_APP_DOWNLOADMANAGER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
