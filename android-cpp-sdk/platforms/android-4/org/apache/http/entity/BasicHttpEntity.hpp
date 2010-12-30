/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.entity.BasicHttpEntity
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_ENTITY_BASICHTTPENTITY_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_ENTITY_BASICHTTPENTITY_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { namespace entity { class AbstractHttpEntity; } } } } }
namespace j2cpp { namespace java { namespace io { class InputStream; } } }
namespace j2cpp { namespace java { namespace io { class OutputStream; } } }


#include <java/io/InputStream.hpp>
#include <java/io/OutputStream.hpp>
#include <org/apache/http/entity/AbstractHttpEntity.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace entity {

	class BasicHttpEntity;
	class BasicHttpEntity
		: public object<BasicHttpEntity>
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

		explicit BasicHttpEntity(jobject jobj)
		: object<BasicHttpEntity>(jobj)
		{
		}

		operator local_ref<org::apache::http::entity::AbstractHttpEntity>() const;


		BasicHttpEntity();
		jlong getContentLength();
		local_ref< java::io::InputStream > getContent();
		jboolean isRepeatable();
		void setContentLength(jlong);
		void setContent(local_ref< java::io::InputStream >  const&);
		void writeTo(local_ref< java::io::OutputStream >  const&);
		jboolean isStreaming();
		void consumeContent();
	}; //class BasicHttpEntity

} //namespace entity
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_ENTITY_BASICHTTPENTITY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_ENTITY_BASICHTTPENTITY_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_ENTITY_BASICHTTPENTITY_HPP_IMPL

namespace j2cpp {



org::apache::http::entity::BasicHttpEntity::operator local_ref<org::apache::http::entity::AbstractHttpEntity>() const
{
	return local_ref<org::apache::http::entity::AbstractHttpEntity>(get_jobject());
}


org::apache::http::entity::BasicHttpEntity::BasicHttpEntity()
: object<org::apache::http::entity::BasicHttpEntity>(
	call_new_object<
		org::apache::http::entity::BasicHttpEntity::J2CPP_CLASS_NAME,
		org::apache::http::entity::BasicHttpEntity::J2CPP_METHOD_NAME(0),
		org::apache::http::entity::BasicHttpEntity::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}


jlong org::apache::http::entity::BasicHttpEntity::getContentLength()
{
	return call_method<
		org::apache::http::entity::BasicHttpEntity::J2CPP_CLASS_NAME,
		org::apache::http::entity::BasicHttpEntity::J2CPP_METHOD_NAME(1),
		org::apache::http::entity::BasicHttpEntity::J2CPP_METHOD_SIGNATURE(1), 
		jlong >
	(get_jobject());
}

local_ref< java::io::InputStream > org::apache::http::entity::BasicHttpEntity::getContent()
{
	return call_method<
		org::apache::http::entity::BasicHttpEntity::J2CPP_CLASS_NAME,
		org::apache::http::entity::BasicHttpEntity::J2CPP_METHOD_NAME(2),
		org::apache::http::entity::BasicHttpEntity::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::io::InputStream > >
	(get_jobject());
}

jboolean org::apache::http::entity::BasicHttpEntity::isRepeatable()
{
	return call_method<
		org::apache::http::entity::BasicHttpEntity::J2CPP_CLASS_NAME,
		org::apache::http::entity::BasicHttpEntity::J2CPP_METHOD_NAME(3),
		org::apache::http::entity::BasicHttpEntity::J2CPP_METHOD_SIGNATURE(3), 
		jboolean >
	(get_jobject());
}

void org::apache::http::entity::BasicHttpEntity::setContentLength(jlong a0)
{
	return call_method<
		org::apache::http::entity::BasicHttpEntity::J2CPP_CLASS_NAME,
		org::apache::http::entity::BasicHttpEntity::J2CPP_METHOD_NAME(4),
		org::apache::http::entity::BasicHttpEntity::J2CPP_METHOD_SIGNATURE(4), 
		void >
	(get_jobject(), a0);
}

void org::apache::http::entity::BasicHttpEntity::setContent(local_ref< java::io::InputStream > const &a0)
{
	return call_method<
		org::apache::http::entity::BasicHttpEntity::J2CPP_CLASS_NAME,
		org::apache::http::entity::BasicHttpEntity::J2CPP_METHOD_NAME(5),
		org::apache::http::entity::BasicHttpEntity::J2CPP_METHOD_SIGNATURE(5), 
		void >
	(get_jobject(), a0);
}

void org::apache::http::entity::BasicHttpEntity::writeTo(local_ref< java::io::OutputStream > const &a0)
{
	return call_method<
		org::apache::http::entity::BasicHttpEntity::J2CPP_CLASS_NAME,
		org::apache::http::entity::BasicHttpEntity::J2CPP_METHOD_NAME(6),
		org::apache::http::entity::BasicHttpEntity::J2CPP_METHOD_SIGNATURE(6), 
		void >
	(get_jobject(), a0);
}

jboolean org::apache::http::entity::BasicHttpEntity::isStreaming()
{
	return call_method<
		org::apache::http::entity::BasicHttpEntity::J2CPP_CLASS_NAME,
		org::apache::http::entity::BasicHttpEntity::J2CPP_METHOD_NAME(7),
		org::apache::http::entity::BasicHttpEntity::J2CPP_METHOD_SIGNATURE(7), 
		jboolean >
	(get_jobject());
}

void org::apache::http::entity::BasicHttpEntity::consumeContent()
{
	return call_method<
		org::apache::http::entity::BasicHttpEntity::J2CPP_CLASS_NAME,
		org::apache::http::entity::BasicHttpEntity::J2CPP_METHOD_NAME(8),
		org::apache::http::entity::BasicHttpEntity::J2CPP_METHOD_SIGNATURE(8), 
		void >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(org::apache::http::entity::BasicHttpEntity,"org/apache/http/entity/BasicHttpEntity")
J2CPP_DEFINE_METHOD(org::apache::http::entity::BasicHttpEntity,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::entity::BasicHttpEntity,1,"getContentLength","()J")
J2CPP_DEFINE_METHOD(org::apache::http::entity::BasicHttpEntity,2,"getContent","()Ljava/io/InputStream;")
J2CPP_DEFINE_METHOD(org::apache::http::entity::BasicHttpEntity,3,"isRepeatable","()Z")
J2CPP_DEFINE_METHOD(org::apache::http::entity::BasicHttpEntity,4,"setContentLength","(J)V")
J2CPP_DEFINE_METHOD(org::apache::http::entity::BasicHttpEntity,5,"setContent","(Ljava/io/InputStream;)V")
J2CPP_DEFINE_METHOD(org::apache::http::entity::BasicHttpEntity,6,"writeTo","(Ljava/io/OutputStream;)V")
J2CPP_DEFINE_METHOD(org::apache::http::entity::BasicHttpEntity,7,"isStreaming","()Z")
J2CPP_DEFINE_METHOD(org::apache::http::entity::BasicHttpEntity,8,"consumeContent","()V")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_ENTITY_BASICHTTPENTITY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
