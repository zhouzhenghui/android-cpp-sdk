/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.entity.ByteArrayEntity
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_ENTITY_BYTEARRAYENTITY_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_ENTITY_BYTEARRAYENTITY_HPP_DECL


namespace j2cpp { namespace java { namespace io { class InputStream; } } }
namespace j2cpp { namespace java { namespace io { class OutputStream; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Cloneable; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace entity { class AbstractHttpEntity; } } } } }


#include <java/io/InputStream.hpp>
#include <java/io/OutputStream.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/http/entity/AbstractHttpEntity.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace entity {

	class ByteArrayEntity;
	class ByteArrayEntity
		: public cpp_object<ByteArrayEntity>
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
		J2CPP_DECLARE_FIELD(0)

		explicit ByteArrayEntity(jobject jobj)
		: cpp_object<ByteArrayEntity>(jobj)
		{
		}

		operator local_ref<org::apache::http::entity::AbstractHttpEntity>() const;
		operator local_ref<java::lang::Cloneable>() const;


		ByteArrayEntity(local_ref< cpp_byte_array<1> > const&);
		cpp_boolean isRepeatable();
		cpp_long getContentLength();
		local_ref< java::io::InputStream > getContent();
		void writeTo(local_ref< java::io::OutputStream > const&);
		cpp_boolean isStreaming();
		local_ref< java::lang::Object > clone();

	}; //class ByteArrayEntity

} //namespace entity
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_ENTITY_BYTEARRAYENTITY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_ENTITY_BYTEARRAYENTITY_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_ENTITY_BYTEARRAYENTITY_HPP_IMPL

namespace j2cpp {



org::apache::http::entity::ByteArrayEntity::operator local_ref<org::apache::http::entity::AbstractHttpEntity>() const
{
	return local_ref<org::apache::http::entity::AbstractHttpEntity>(get_jtype());
}

org::apache::http::entity::ByteArrayEntity::operator local_ref<java::lang::Cloneable>() const
{
	return local_ref<java::lang::Cloneable>(get_jtype());
}


org::apache::http::entity::ByteArrayEntity::ByteArrayEntity(local_ref< cpp_byte_array<1> > const &a0)
: cpp_object<org::apache::http::entity::ByteArrayEntity>(
	environment::get().get_jenv()->NewObject(
		get_class<org::apache::http::entity::ByteArrayEntity::J2CPP_CLASS_NAME>(),
		get_method_id<org::apache::http::entity::ByteArrayEntity::J2CPP_CLASS_NAME, org::apache::http::entity::ByteArrayEntity::J2CPP_METHOD_NAME(0), org::apache::http::entity::ByteArrayEntity::J2CPP_METHOD_SIGNATURE(0), false>(),
		a0.get_jtype()
	)
)
{
}


cpp_boolean org::apache::http::entity::ByteArrayEntity::isRepeatable()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

cpp_long org::apache::http::entity::ByteArrayEntity::getContentLength()
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

local_ref< java::io::InputStream > org::apache::http::entity::ByteArrayEntity::getContent()
{
	return local_ref< java::io::InputStream >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

void org::apache::http::entity::ByteArrayEntity::writeTo(local_ref< java::io::OutputStream > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean org::apache::http::entity::ByteArrayEntity::isStreaming()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

local_ref< java::lang::Object > org::apache::http::entity::ByteArrayEntity::clone()
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}



J2CPP_DEFINE_CLASS(org::apache::http::entity::ByteArrayEntity,"org/apache/http/entity/ByteArrayEntity")
J2CPP_DEFINE_METHOD(org::apache::http::entity::ByteArrayEntity,0,"<init>","([B)V")
J2CPP_DEFINE_METHOD(org::apache::http::entity::ByteArrayEntity,1,"isRepeatable","()Z")
J2CPP_DEFINE_METHOD(org::apache::http::entity::ByteArrayEntity,2,"getContentLength","()J")
J2CPP_DEFINE_METHOD(org::apache::http::entity::ByteArrayEntity,3,"getContent","()Ljava/io/InputStream;")
J2CPP_DEFINE_METHOD(org::apache::http::entity::ByteArrayEntity,4,"writeTo","(Ljava/io/OutputStream;)V")
J2CPP_DEFINE_METHOD(org::apache::http::entity::ByteArrayEntity,5,"isStreaming","()Z")
J2CPP_DEFINE_METHOD(org::apache::http::entity::ByteArrayEntity,6,"clone","()Ljava/lang/Object;")
J2CPP_DEFINE_FIELD(org::apache::http::entity::ByteArrayEntity,0,"content","[B")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_ENTITY_BYTEARRAYENTITY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
