/*================================================================================
  code generated by: java2cpp
  class: android.webkit.CacheManager
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WEBKIT_CACHEMANAGER_HPP_DECL
#define J2CPP_ANDROID_WEBKIT_CACHEMANAGER_HPP_DECL


namespace j2cpp { namespace java { namespace io { class File; } } }
namespace j2cpp { namespace java { namespace io { class InputStream; } } }
namespace j2cpp { namespace java { namespace io { class OutputStream; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace util { class Map; } } }
namespace j2cpp { namespace android { namespace webkit { namespace CacheManager_ { class CacheResult; } } } }


#include <android/webkit/CacheManager.hpp>
#include <java/io/File.hpp>
#include <java/io/InputStream.hpp>
#include <java/io/OutputStream.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/Map.hpp>


namespace j2cpp {

namespace android { namespace webkit {

	class CacheManager;
	namespace CacheManager_ {

		class CacheResult;
		class CacheResult
			: public cpp_object<CacheResult>
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

			explicit CacheResult(jobject jobj)
			: cpp_object<CacheResult>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			CacheResult();
			cpp_int getHttpStatusCode();
			cpp_long getContentLength();
			local_ref< java::lang::String > getLocalPath();
			cpp_long getExpires();
			local_ref< java::lang::String > getExpiresString();
			local_ref< java::lang::String > getLastModified();
			local_ref< java::lang::String > getETag();
			local_ref< java::lang::String > getMimeType();
			local_ref< java::lang::String > getLocation();
			local_ref< java::lang::String > getEncoding();
			local_ref< java::lang::String > getContentDisposition();
			local_ref< java::io::InputStream > getInputStream();
			local_ref< java::io::OutputStream > getOutputStream();
			void setInputStream(local_ref< java::io::InputStream > const&);
			void setEncoding(local_ref< java::lang::String > const&);
		}; //class CacheResult

	} //namespace CacheManager_

	class CacheManager
		: public cpp_object<CacheManager>
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

		typedef CacheManager_::CacheResult CacheResult;

		explicit CacheManager(jobject jobj)
		: cpp_object<CacheManager>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		CacheManager();
		static local_ref< java::io::File > getCacheFileBaseDir();
		static cpp_boolean cacheDisabled();
		static cpp_boolean startCacheTransaction();
		static cpp_boolean endCacheTransaction();
		static local_ref< android::webkit::CacheManager_::CacheResult > getCacheFile(local_ref< java::lang::String > const&, local_ref< java::util::Map > const&);
		static void saveCacheFile(local_ref< java::lang::String > const&, local_ref< android::webkit::CacheManager_::CacheResult > const&);
	}; //class CacheManager

} //namespace webkit
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_WEBKIT_CACHEMANAGER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WEBKIT_CACHEMANAGER_HPP_IMPL
#define J2CPP_ANDROID_WEBKIT_CACHEMANAGER_HPP_IMPL

namespace j2cpp {




android::webkit::CacheManager_::CacheResult::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}


android::webkit::CacheManager_::CacheResult::CacheResult()
: cpp_object<android::webkit::CacheManager_::CacheResult>(
	environment::get().get_jenv()->NewObject(
		get_class<android::webkit::CacheManager_::CacheResult::J2CPP_CLASS_NAME>(),
		get_method_id<android::webkit::CacheManager_::CacheResult::J2CPP_CLASS_NAME, android::webkit::CacheManager_::CacheResult::J2CPP_METHOD_NAME(0), android::webkit::CacheManager_::CacheResult::J2CPP_METHOD_SIGNATURE(0), false>()
	)
)
{
}


cpp_int android::webkit::CacheManager_::CacheResult::getHttpStatusCode()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

cpp_long android::webkit::CacheManager_::CacheResult::getContentLength()
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

local_ref< java::lang::String > android::webkit::CacheManager_::CacheResult::getLocalPath()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

cpp_long android::webkit::CacheManager_::CacheResult::getExpires()
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

local_ref< java::lang::String > android::webkit::CacheManager_::CacheResult::getExpiresString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

local_ref< java::lang::String > android::webkit::CacheManager_::CacheResult::getLastModified()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

local_ref< java::lang::String > android::webkit::CacheManager_::CacheResult::getETag()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

local_ref< java::lang::String > android::webkit::CacheManager_::CacheResult::getMimeType()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}

local_ref< java::lang::String > android::webkit::CacheManager_::CacheResult::getLocation()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}

local_ref< java::lang::String > android::webkit::CacheManager_::CacheResult::getEncoding()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>()
		)
	);
}

local_ref< java::lang::String > android::webkit::CacheManager_::CacheResult::getContentDisposition()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>()
		)
	);
}

local_ref< java::io::InputStream > android::webkit::CacheManager_::CacheResult::getInputStream()
{
	return local_ref< java::io::InputStream >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>()
		)
	);
}

local_ref< java::io::OutputStream > android::webkit::CacheManager_::CacheResult::getOutputStream()
{
	return local_ref< java::io::OutputStream >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>()
		)
	);
}

void android::webkit::CacheManager_::CacheResult::setInputStream(local_ref< java::io::InputStream > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>(),
			a0.get_jtype()
		)
	);
}

void android::webkit::CacheManager_::CacheResult::setEncoding(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::webkit::CacheManager_::CacheResult,"android/webkit/CacheManager$CacheResult")
J2CPP_DEFINE_METHOD(android::webkit::CacheManager_::CacheResult,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::webkit::CacheManager_::CacheResult,1,"getHttpStatusCode","()I")
J2CPP_DEFINE_METHOD(android::webkit::CacheManager_::CacheResult,2,"getContentLength","()J")
J2CPP_DEFINE_METHOD(android::webkit::CacheManager_::CacheResult,3,"getLocalPath","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::webkit::CacheManager_::CacheResult,4,"getExpires","()J")
J2CPP_DEFINE_METHOD(android::webkit::CacheManager_::CacheResult,5,"getExpiresString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::webkit::CacheManager_::CacheResult,6,"getLastModified","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::webkit::CacheManager_::CacheResult,7,"getETag","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::webkit::CacheManager_::CacheResult,8,"getMimeType","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::webkit::CacheManager_::CacheResult,9,"getLocation","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::webkit::CacheManager_::CacheResult,10,"getEncoding","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::webkit::CacheManager_::CacheResult,11,"getContentDisposition","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::webkit::CacheManager_::CacheResult,12,"getInputStream","()Ljava/io/InputStream;")
J2CPP_DEFINE_METHOD(android::webkit::CacheManager_::CacheResult,13,"getOutputStream","()Ljava/io/OutputStream;")
J2CPP_DEFINE_METHOD(android::webkit::CacheManager_::CacheResult,14,"setInputStream","(Ljava/io/InputStream;)V")
J2CPP_DEFINE_METHOD(android::webkit::CacheManager_::CacheResult,15,"setEncoding","(Ljava/lang/String;)V")



android::webkit::CacheManager::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}


android::webkit::CacheManager::CacheManager()
: cpp_object<android::webkit::CacheManager>(
	environment::get().get_jenv()->NewObject(
		get_class<android::webkit::CacheManager::J2CPP_CLASS_NAME>(),
		get_method_id<android::webkit::CacheManager::J2CPP_CLASS_NAME, android::webkit::CacheManager::J2CPP_METHOD_NAME(0), android::webkit::CacheManager::J2CPP_METHOD_SIGNATURE(0), false>()
	)
)
{
}


local_ref< java::io::File > android::webkit::CacheManager::getCacheFileBaseDir()
{
	return local_ref< java::io::File >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), true>()
		)
	);
}

cpp_boolean android::webkit::CacheManager::cacheDisabled()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallStaticBooleanMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), true>()
		)
	);
}

cpp_boolean android::webkit::CacheManager::startCacheTransaction()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallStaticBooleanMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), true>()
		)
	);
}

cpp_boolean android::webkit::CacheManager::endCacheTransaction()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallStaticBooleanMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), true>()
		)
	);
}

local_ref< android::webkit::CacheManager_::CacheResult > android::webkit::CacheManager::getCacheFile(local_ref< java::lang::String > const &a0, local_ref< java::util::Map > const &a1)
{
	return local_ref< android::webkit::CacheManager_::CacheResult >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::webkit::CacheManager::saveCacheFile(local_ref< java::lang::String > const &a0, local_ref< android::webkit::CacheManager_::CacheResult > const &a1)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::webkit::CacheManager,"android/webkit/CacheManager")
J2CPP_DEFINE_METHOD(android::webkit::CacheManager,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::webkit::CacheManager,1,"getCacheFileBaseDir","()Ljava/io/File;")
J2CPP_DEFINE_METHOD(android::webkit::CacheManager,2,"cacheDisabled","()Z")
J2CPP_DEFINE_METHOD(android::webkit::CacheManager,3,"startCacheTransaction","()Z")
J2CPP_DEFINE_METHOD(android::webkit::CacheManager,4,"endCacheTransaction","()Z")
J2CPP_DEFINE_METHOD(android::webkit::CacheManager,5,"getCacheFile","(Ljava/lang/String;Ljava/util/Map;)Landroid/webkit/CacheManager$CacheResult;")
J2CPP_DEFINE_METHOD(android::webkit::CacheManager,6,"saveCacheFile","(Ljava/lang/String;Landroid/webkit/CacheManager$CacheResult;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WEBKIT_CACHEMANAGER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
