/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.HttpEntity
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_HTTPENTITY_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_HTTPENTITY_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { class Header; } } } }
namespace j2cpp { namespace java { namespace io { class InputStream; } } }
namespace j2cpp { namespace java { namespace io { class OutputStream; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/io/InputStream.hpp>
#include <java/io/OutputStream.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/http/Header.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http {

	class HttpEntity;
	class HttpEntity
		: public object<HttpEntity>
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

		explicit HttpEntity(jobject jobj)
		: object<HttpEntity>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		jboolean isRepeatable();
		jboolean isChunked();
		jlong getContentLength();
		local_ref< org::apache::http::Header > getContentType();
		local_ref< org::apache::http::Header > getContentEncoding();
		local_ref< java::io::InputStream > getContent();
		void writeTo(local_ref< java::io::OutputStream >  const&);
		jboolean isStreaming();
		void consumeContent();
	}; //class HttpEntity

} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_HTTPENTITY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_HTTPENTITY_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_HTTPENTITY_HPP_IMPL

namespace j2cpp {



org::apache::http::HttpEntity::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

jboolean org::apache::http::HttpEntity::isRepeatable()
{
	return call_method<
		org::apache::http::HttpEntity::J2CPP_CLASS_NAME,
		org::apache::http::HttpEntity::J2CPP_METHOD_NAME(0),
		org::apache::http::HttpEntity::J2CPP_METHOD_SIGNATURE(0), 
		jboolean >
	(get_jobject());
}

jboolean org::apache::http::HttpEntity::isChunked()
{
	return call_method<
		org::apache::http::HttpEntity::J2CPP_CLASS_NAME,
		org::apache::http::HttpEntity::J2CPP_METHOD_NAME(1),
		org::apache::http::HttpEntity::J2CPP_METHOD_SIGNATURE(1), 
		jboolean >
	(get_jobject());
}

jlong org::apache::http::HttpEntity::getContentLength()
{
	return call_method<
		org::apache::http::HttpEntity::J2CPP_CLASS_NAME,
		org::apache::http::HttpEntity::J2CPP_METHOD_NAME(2),
		org::apache::http::HttpEntity::J2CPP_METHOD_SIGNATURE(2), 
		jlong >
	(get_jobject());
}

local_ref< org::apache::http::Header > org::apache::http::HttpEntity::getContentType()
{
	return call_method<
		org::apache::http::HttpEntity::J2CPP_CLASS_NAME,
		org::apache::http::HttpEntity::J2CPP_METHOD_NAME(3),
		org::apache::http::HttpEntity::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< org::apache::http::Header > >
	(get_jobject());
}

local_ref< org::apache::http::Header > org::apache::http::HttpEntity::getContentEncoding()
{
	return call_method<
		org::apache::http::HttpEntity::J2CPP_CLASS_NAME,
		org::apache::http::HttpEntity::J2CPP_METHOD_NAME(4),
		org::apache::http::HttpEntity::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< org::apache::http::Header > >
	(get_jobject());
}

local_ref< java::io::InputStream > org::apache::http::HttpEntity::getContent()
{
	return call_method<
		org::apache::http::HttpEntity::J2CPP_CLASS_NAME,
		org::apache::http::HttpEntity::J2CPP_METHOD_NAME(5),
		org::apache::http::HttpEntity::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::io::InputStream > >
	(get_jobject());
}

void org::apache::http::HttpEntity::writeTo(local_ref< java::io::OutputStream > const &a0)
{
	return call_method<
		org::apache::http::HttpEntity::J2CPP_CLASS_NAME,
		org::apache::http::HttpEntity::J2CPP_METHOD_NAME(6),
		org::apache::http::HttpEntity::J2CPP_METHOD_SIGNATURE(6), 
		void >
	(get_jobject(), a0);
}

jboolean org::apache::http::HttpEntity::isStreaming()
{
	return call_method<
		org::apache::http::HttpEntity::J2CPP_CLASS_NAME,
		org::apache::http::HttpEntity::J2CPP_METHOD_NAME(7),
		org::apache::http::HttpEntity::J2CPP_METHOD_SIGNATURE(7), 
		jboolean >
	(get_jobject());
}

void org::apache::http::HttpEntity::consumeContent()
{
	return call_method<
		org::apache::http::HttpEntity::J2CPP_CLASS_NAME,
		org::apache::http::HttpEntity::J2CPP_METHOD_NAME(8),
		org::apache::http::HttpEntity::J2CPP_METHOD_SIGNATURE(8), 
		void >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(org::apache::http::HttpEntity,"org/apache/http/HttpEntity")
J2CPP_DEFINE_METHOD(org::apache::http::HttpEntity,0,"isRepeatable","()Z")
J2CPP_DEFINE_METHOD(org::apache::http::HttpEntity,1,"isChunked","()Z")
J2CPP_DEFINE_METHOD(org::apache::http::HttpEntity,2,"getContentLength","()J")
J2CPP_DEFINE_METHOD(org::apache::http::HttpEntity,3,"getContentType","()Lorg/apache/http/Header;")
J2CPP_DEFINE_METHOD(org::apache::http::HttpEntity,4,"getContentEncoding","()Lorg/apache/http/Header;")
J2CPP_DEFINE_METHOD(org::apache::http::HttpEntity,5,"getContent","()Ljava/io/InputStream;")
J2CPP_DEFINE_METHOD(org::apache::http::HttpEntity,6,"writeTo","(Ljava/io/OutputStream;)V")
J2CPP_DEFINE_METHOD(org::apache::http::HttpEntity,7,"isStreaming","()Z")
J2CPP_DEFINE_METHOD(org::apache::http::HttpEntity,8,"consumeContent","()V")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_HTTPENTITY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
