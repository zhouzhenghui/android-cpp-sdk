/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.entity.SerializableEntity
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_ENTITY_SERIALIZABLEENTITY_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_ENTITY_SERIALIZABLEENTITY_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { namespace entity { class AbstractHttpEntity; } } } } }
namespace j2cpp { namespace java { namespace io { class InputStream; } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace io { class OutputStream; } } }


#include <java/io/InputStream.hpp>
#include <java/io/OutputStream.hpp>
#include <java/io/Serializable.hpp>
#include <org/apache/http/entity/AbstractHttpEntity.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace entity {

	class SerializableEntity;
	class SerializableEntity
		: public object<SerializableEntity>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)

		explicit SerializableEntity(jobject jobj)
		: object<SerializableEntity>(jobj)
		{
		}

		operator local_ref<org::apache::http::entity::AbstractHttpEntity>() const;


		SerializableEntity(local_ref< java::io::Serializable > const&, jboolean);
		local_ref< java::io::InputStream > getContent();
		jlong getContentLength();
		jboolean isRepeatable();
		jboolean isStreaming();
		void writeTo(local_ref< java::io::OutputStream >  const&);
	}; //class SerializableEntity

} //namespace entity
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_ENTITY_SERIALIZABLEENTITY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_ENTITY_SERIALIZABLEENTITY_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_ENTITY_SERIALIZABLEENTITY_HPP_IMPL

namespace j2cpp {



org::apache::http::entity::SerializableEntity::operator local_ref<org::apache::http::entity::AbstractHttpEntity>() const
{
	return local_ref<org::apache::http::entity::AbstractHttpEntity>(get_jobject());
}


org::apache::http::entity::SerializableEntity::SerializableEntity(local_ref< java::io::Serializable > const &a0, jboolean a1)
: object<org::apache::http::entity::SerializableEntity>(
	call_new_object<
		org::apache::http::entity::SerializableEntity::J2CPP_CLASS_NAME,
		org::apache::http::entity::SerializableEntity::J2CPP_METHOD_NAME(0),
		org::apache::http::entity::SerializableEntity::J2CPP_METHOD_SIGNATURE(0)>
	(a0, a1)
)
{
}


local_ref< java::io::InputStream > org::apache::http::entity::SerializableEntity::getContent()
{
	return call_method<
		org::apache::http::entity::SerializableEntity::J2CPP_CLASS_NAME,
		org::apache::http::entity::SerializableEntity::J2CPP_METHOD_NAME(1),
		org::apache::http::entity::SerializableEntity::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::io::InputStream > >
	(get_jobject());
}

jlong org::apache::http::entity::SerializableEntity::getContentLength()
{
	return call_method<
		org::apache::http::entity::SerializableEntity::J2CPP_CLASS_NAME,
		org::apache::http::entity::SerializableEntity::J2CPP_METHOD_NAME(2),
		org::apache::http::entity::SerializableEntity::J2CPP_METHOD_SIGNATURE(2), 
		jlong >
	(get_jobject());
}

jboolean org::apache::http::entity::SerializableEntity::isRepeatable()
{
	return call_method<
		org::apache::http::entity::SerializableEntity::J2CPP_CLASS_NAME,
		org::apache::http::entity::SerializableEntity::J2CPP_METHOD_NAME(3),
		org::apache::http::entity::SerializableEntity::J2CPP_METHOD_SIGNATURE(3), 
		jboolean >
	(get_jobject());
}

jboolean org::apache::http::entity::SerializableEntity::isStreaming()
{
	return call_method<
		org::apache::http::entity::SerializableEntity::J2CPP_CLASS_NAME,
		org::apache::http::entity::SerializableEntity::J2CPP_METHOD_NAME(4),
		org::apache::http::entity::SerializableEntity::J2CPP_METHOD_SIGNATURE(4), 
		jboolean >
	(get_jobject());
}

void org::apache::http::entity::SerializableEntity::writeTo(local_ref< java::io::OutputStream > const &a0)
{
	return call_method<
		org::apache::http::entity::SerializableEntity::J2CPP_CLASS_NAME,
		org::apache::http::entity::SerializableEntity::J2CPP_METHOD_NAME(5),
		org::apache::http::entity::SerializableEntity::J2CPP_METHOD_SIGNATURE(5), 
		void >
	(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(org::apache::http::entity::SerializableEntity,"org/apache/http/entity/SerializableEntity")
J2CPP_DEFINE_METHOD(org::apache::http::entity::SerializableEntity,0,"<init>","(Ljava/io/Serializable;Z)V")
J2CPP_DEFINE_METHOD(org::apache::http::entity::SerializableEntity,1,"getContent","()Ljava/io/InputStream;")
J2CPP_DEFINE_METHOD(org::apache::http::entity::SerializableEntity,2,"getContentLength","()J")
J2CPP_DEFINE_METHOD(org::apache::http::entity::SerializableEntity,3,"isRepeatable","()Z")
J2CPP_DEFINE_METHOD(org::apache::http::entity::SerializableEntity,4,"isStreaming","()Z")
J2CPP_DEFINE_METHOD(org::apache::http::entity::SerializableEntity,5,"writeTo","(Ljava/io/OutputStream;)V")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_ENTITY_SERIALIZABLEENTITY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
