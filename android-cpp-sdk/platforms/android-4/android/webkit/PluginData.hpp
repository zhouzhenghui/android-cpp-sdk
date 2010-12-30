/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.webkit.PluginData
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WEBKIT_PLUGINDATA_HPP_DECL
#define J2CPP_ANDROID_WEBKIT_PLUGINDATA_HPP_DECL


namespace j2cpp { namespace java { namespace io { class InputStream; } } }
namespace j2cpp { namespace java { namespace util { class Map; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/io/InputStream.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Map.hpp>


namespace j2cpp {

namespace android { namespace webkit {

	class PluginData;
	class PluginData
		: public object<PluginData>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)

		explicit PluginData(jobject jobj)
		: object<PluginData>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		PluginData(local_ref< java::io::InputStream > const&, jlong, local_ref< java::util::Map > const&, jint);
		local_ref< java::io::InputStream > getInputStream();
		jlong getContentLength();
		local_ref< java::util::Map > getHeaders();
		jint getStatusCode();
	}; //class PluginData

} //namespace webkit
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_WEBKIT_PLUGINDATA_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WEBKIT_PLUGINDATA_HPP_IMPL
#define J2CPP_ANDROID_WEBKIT_PLUGINDATA_HPP_IMPL

namespace j2cpp {



android::webkit::PluginData::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::webkit::PluginData::PluginData(local_ref< java::io::InputStream > const &a0, jlong a1, local_ref< java::util::Map > const &a2, jint a3)
: object<android::webkit::PluginData>(
	call_new_object<
		android::webkit::PluginData::J2CPP_CLASS_NAME,
		android::webkit::PluginData::J2CPP_METHOD_NAME(0),
		android::webkit::PluginData::J2CPP_METHOD_SIGNATURE(0)>
	(a0, a1, a2, a3)
)
{
}


local_ref< java::io::InputStream > android::webkit::PluginData::getInputStream()
{
	return call_method<
		android::webkit::PluginData::J2CPP_CLASS_NAME,
		android::webkit::PluginData::J2CPP_METHOD_NAME(1),
		android::webkit::PluginData::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::io::InputStream > >
	(get_jobject());
}

jlong android::webkit::PluginData::getContentLength()
{
	return call_method<
		android::webkit::PluginData::J2CPP_CLASS_NAME,
		android::webkit::PluginData::J2CPP_METHOD_NAME(2),
		android::webkit::PluginData::J2CPP_METHOD_SIGNATURE(2), 
		jlong >
	(get_jobject());
}

local_ref< java::util::Map > android::webkit::PluginData::getHeaders()
{
	return call_method<
		android::webkit::PluginData::J2CPP_CLASS_NAME,
		android::webkit::PluginData::J2CPP_METHOD_NAME(3),
		android::webkit::PluginData::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::util::Map > >
	(get_jobject());
}

jint android::webkit::PluginData::getStatusCode()
{
	return call_method<
		android::webkit::PluginData::J2CPP_CLASS_NAME,
		android::webkit::PluginData::J2CPP_METHOD_NAME(4),
		android::webkit::PluginData::J2CPP_METHOD_SIGNATURE(4), 
		jint >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(android::webkit::PluginData,"android/webkit/PluginData")
J2CPP_DEFINE_METHOD(android::webkit::PluginData,0,"<init>","(Ljava/io/InputStream;JLjava/util/Map;I)V")
J2CPP_DEFINE_METHOD(android::webkit::PluginData,1,"getInputStream","()Ljava/io/InputStream;")
J2CPP_DEFINE_METHOD(android::webkit::PluginData,2,"getContentLength","()J")
J2CPP_DEFINE_METHOD(android::webkit::PluginData,3,"getHeaders","()Ljava/util/Map;")
J2CPP_DEFINE_METHOD(android::webkit::PluginData,4,"getStatusCode","()I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WEBKIT_PLUGINDATA_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
