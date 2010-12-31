/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.net.CacheResponse
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_CACHERESPONSE_HPP_DECL
#define J2CPP_JAVA_NET_CACHERESPONSE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class Map; } } }
namespace j2cpp { namespace java { namespace io { class InputStream; } } }


#include <java/io/InputStream.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Map.hpp>


namespace j2cpp {

namespace java { namespace net {

	class CacheResponse;
	class CacheResponse
		: public object<CacheResponse>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit CacheResponse(jobject jobj)
		: object<CacheResponse>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		CacheResponse();
		local_ref< java::io::InputStream > getBody();
		local_ref< java::util::Map > getHeaders();
	}; //class CacheResponse

} //namespace net
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_NET_CACHERESPONSE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_CACHERESPONSE_HPP_IMPL
#define J2CPP_JAVA_NET_CACHERESPONSE_HPP_IMPL

namespace j2cpp {



java::net::CacheResponse::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


java::net::CacheResponse::CacheResponse()
: object<java::net::CacheResponse>(
	call_new_object<
		java::net::CacheResponse::J2CPP_CLASS_NAME,
		java::net::CacheResponse::J2CPP_METHOD_NAME(0),
		java::net::CacheResponse::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}


local_ref< java::io::InputStream > java::net::CacheResponse::getBody()
{
	return call_method<
		java::net::CacheResponse::J2CPP_CLASS_NAME,
		java::net::CacheResponse::J2CPP_METHOD_NAME(1),
		java::net::CacheResponse::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::io::InputStream > >
	(get_jobject());
}

local_ref< java::util::Map > java::net::CacheResponse::getHeaders()
{
	return call_method<
		java::net::CacheResponse::J2CPP_CLASS_NAME,
		java::net::CacheResponse::J2CPP_METHOD_NAME(2),
		java::net::CacheResponse::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::util::Map > >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(java::net::CacheResponse,"java/net/CacheResponse")
J2CPP_DEFINE_METHOD(java::net::CacheResponse,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::net::CacheResponse,1,"getBody","()Ljava/io/InputStream;")
J2CPP_DEFINE_METHOD(java::net::CacheResponse,2,"getHeaders","()Ljava/util/Map;")

} //namespace j2cpp

#endif //J2CPP_JAVA_NET_CACHERESPONSE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
