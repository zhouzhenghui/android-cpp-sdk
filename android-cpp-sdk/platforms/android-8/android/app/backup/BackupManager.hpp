/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.app.backup.BackupManager
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_APP_BACKUP_BACKUPMANAGER_HPP_DECL
#define J2CPP_ANDROID_APP_BACKUP_BACKUPMANAGER_HPP_DECL


namespace j2cpp { namespace android { namespace app { namespace backup { class RestoreObserver; } } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/app/backup/RestoreObserver.hpp>
#include <android/content/Context.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace app { namespace backup {

	class BackupManager;
	class BackupManager
		: public object<BackupManager>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		explicit BackupManager(jobject jobj)
		: object<BackupManager>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		BackupManager(local_ref< android::content::Context > const&);
		void dataChanged();
		static void dataChanged(local_ref< java::lang::String >  const&);
		jint requestRestore(local_ref< android::app::backup::RestoreObserver >  const&);
	}; //class BackupManager

} //namespace backup
} //namespace app
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_APP_BACKUP_BACKUPMANAGER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_APP_BACKUP_BACKUPMANAGER_HPP_IMPL
#define J2CPP_ANDROID_APP_BACKUP_BACKUPMANAGER_HPP_IMPL

namespace j2cpp {



android::app::backup::BackupManager::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::app::backup::BackupManager::BackupManager(local_ref< android::content::Context > const &a0)
: object<android::app::backup::BackupManager>(
	call_new_object<
		android::app::backup::BackupManager::J2CPP_CLASS_NAME,
		android::app::backup::BackupManager::J2CPP_METHOD_NAME(0),
		android::app::backup::BackupManager::J2CPP_METHOD_SIGNATURE(0)>
	(a0)
)
{
}


void android::app::backup::BackupManager::dataChanged()
{
	return call_method<
		android::app::backup::BackupManager::J2CPP_CLASS_NAME,
		android::app::backup::BackupManager::J2CPP_METHOD_NAME(1),
		android::app::backup::BackupManager::J2CPP_METHOD_SIGNATURE(1), 
		void >
	(get_jobject());
}

void android::app::backup::BackupManager::dataChanged(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		android::app::backup::BackupManager::J2CPP_CLASS_NAME,
		android::app::backup::BackupManager::J2CPP_METHOD_NAME(2),
		android::app::backup::BackupManager::J2CPP_METHOD_SIGNATURE(2), 
		void >
	(a0);
}

jint android::app::backup::BackupManager::requestRestore(local_ref< android::app::backup::RestoreObserver > const &a0)
{
	return call_method<
		android::app::backup::BackupManager::J2CPP_CLASS_NAME,
		android::app::backup::BackupManager::J2CPP_METHOD_NAME(3),
		android::app::backup::BackupManager::J2CPP_METHOD_SIGNATURE(3), 
		jint >
	(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::app::backup::BackupManager,"android/app/backup/BackupManager")
J2CPP_DEFINE_METHOD(android::app::backup::BackupManager,0,"<init>","(Landroid/content/Context;)V")
J2CPP_DEFINE_METHOD(android::app::backup::BackupManager,1,"dataChanged","()V")
J2CPP_DEFINE_METHOD(android::app::backup::BackupManager,2,"dataChanged","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::app::backup::BackupManager,3,"requestRestore","(Landroid/app/backup/RestoreObserver;)I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_APP_BACKUP_BACKUPMANAGER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
