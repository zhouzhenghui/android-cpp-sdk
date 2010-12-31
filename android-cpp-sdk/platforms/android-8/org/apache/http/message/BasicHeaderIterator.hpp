/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.message.BasicHeaderIterator
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICHEADERITERATOR_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICHEADERITERATOR_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { class Header; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HeaderIterator; } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/apache/http/Header.hpp>
#include <org/apache/http/HeaderIterator.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace message {

	class BasicHeaderIterator;
	class BasicHeaderIterator
		: public object<BasicHeaderIterator>
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
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)

		explicit BasicHeaderIterator(jobject jobj)
		: object<BasicHeaderIterator>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::apache::http::HeaderIterator>() const;


		BasicHeaderIterator(local_ref< array< local_ref< org::apache::http::Header >, 1> > const&, local_ref< java::lang::String > const&);
		jboolean hasNext();
		local_ref< org::apache::http::Header > nextHeader();
		local_ref< java::lang::Object > next();
		void remove();

	}; //class BasicHeaderIterator

} //namespace message
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICHEADERITERATOR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICHEADERITERATOR_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICHEADERITERATOR_HPP_IMPL

namespace j2cpp {



org::apache::http::message::BasicHeaderIterator::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::apache::http::message::BasicHeaderIterator::operator local_ref<org::apache::http::HeaderIterator>() const
{
	return local_ref<org::apache::http::HeaderIterator>(get_jobject());
}


org::apache::http::message::BasicHeaderIterator::BasicHeaderIterator(local_ref< array< local_ref< org::apache::http::Header >, 1> > const &a0, local_ref< java::lang::String > const &a1)
: object<org::apache::http::message::BasicHeaderIterator>(
	call_new_object<
		org::apache::http::message::BasicHeaderIterator::J2CPP_CLASS_NAME,
		org::apache::http::message::BasicHeaderIterator::J2CPP_METHOD_NAME(0),
		org::apache::http::message::BasicHeaderIterator::J2CPP_METHOD_SIGNATURE(0)>
	(a0, a1)
)
{
}




jboolean org::apache::http::message::BasicHeaderIterator::hasNext()
{
	return call_method<
		org::apache::http::message::BasicHeaderIterator::J2CPP_CLASS_NAME,
		org::apache::http::message::BasicHeaderIterator::J2CPP_METHOD_NAME(3),
		org::apache::http::message::BasicHeaderIterator::J2CPP_METHOD_SIGNATURE(3), 
		jboolean >
	(get_jobject());
}

local_ref< org::apache::http::Header > org::apache::http::message::BasicHeaderIterator::nextHeader()
{
	return call_method<
		org::apache::http::message::BasicHeaderIterator::J2CPP_CLASS_NAME,
		org::apache::http::message::BasicHeaderIterator::J2CPP_METHOD_NAME(4),
		org::apache::http::message::BasicHeaderIterator::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< org::apache::http::Header > >
	(get_jobject());
}

local_ref< java::lang::Object > org::apache::http::message::BasicHeaderIterator::next()
{
	return call_method<
		org::apache::http::message::BasicHeaderIterator::J2CPP_CLASS_NAME,
		org::apache::http::message::BasicHeaderIterator::J2CPP_METHOD_NAME(5),
		org::apache::http::message::BasicHeaderIterator::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::lang::Object > >
	(get_jobject());
}

void org::apache::http::message::BasicHeaderIterator::remove()
{
	return call_method<
		org::apache::http::message::BasicHeaderIterator::J2CPP_CLASS_NAME,
		org::apache::http::message::BasicHeaderIterator::J2CPP_METHOD_NAME(6),
		org::apache::http::message::BasicHeaderIterator::J2CPP_METHOD_SIGNATURE(6), 
		void >
	(get_jobject());
}



J2CPP_DEFINE_CLASS(org::apache::http::message::BasicHeaderIterator,"org/apache/http/message/BasicHeaderIterator")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicHeaderIterator,0,"<init>","([org.apache.http.HeaderLjava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicHeaderIterator,1,"findNext","(I)I")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicHeaderIterator,2,"filterHeader","(I)Z")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicHeaderIterator,3,"hasNext","()Z")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicHeaderIterator,4,"nextHeader","()Lorg/apache/http/Header;")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicHeaderIterator,5,"next","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicHeaderIterator,6,"remove","()V")
J2CPP_DEFINE_FIELD(org::apache::http::message::BasicHeaderIterator,0,"allHeaders","[org.apache.http.Header")
J2CPP_DEFINE_FIELD(org::apache::http::message::BasicHeaderIterator,1,"currentIndex","I")
J2CPP_DEFINE_FIELD(org::apache::http::message::BasicHeaderIterator,2,"headerName","Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICHEADERITERATOR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
