/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.HeaderIterator
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_HEADERITERATOR_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_HEADERITERATOR_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class Iterator; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class Header; } } } }


#include <java/lang/Object.hpp>
#include <java/util/Iterator.hpp>
#include <org/apache/http/Header.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http {

	class HeaderIterator;
	class HeaderIterator
		: public object<HeaderIterator>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit HeaderIterator(jobject jobj)
		: object<HeaderIterator>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::util::Iterator>() const;


		jboolean hasNext();
		local_ref< org::apache::http::Header > nextHeader();
	}; //class HeaderIterator

} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_HEADERITERATOR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_HEADERITERATOR_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_HEADERITERATOR_HPP_IMPL

namespace j2cpp {



org::apache::http::HeaderIterator::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::apache::http::HeaderIterator::operator local_ref<java::util::Iterator>() const
{
	return local_ref<java::util::Iterator>(get_jobject());
}

jboolean org::apache::http::HeaderIterator::hasNext()
{
	return call_method<
		org::apache::http::HeaderIterator::J2CPP_CLASS_NAME,
		org::apache::http::HeaderIterator::J2CPP_METHOD_NAME(0),
		org::apache::http::HeaderIterator::J2CPP_METHOD_SIGNATURE(0), 
		jboolean >
	(get_jobject());
}

local_ref< org::apache::http::Header > org::apache::http::HeaderIterator::nextHeader()
{
	return call_method<
		org::apache::http::HeaderIterator::J2CPP_CLASS_NAME,
		org::apache::http::HeaderIterator::J2CPP_METHOD_NAME(1),
		org::apache::http::HeaderIterator::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< org::apache::http::Header > >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(org::apache::http::HeaderIterator,"org/apache/http/HeaderIterator")
J2CPP_DEFINE_METHOD(org::apache::http::HeaderIterator,0,"hasNext","()Z")
J2CPP_DEFINE_METHOD(org::apache::http::HeaderIterator,1,"nextHeader","()Lorg/apache/http/Header;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_HEADERITERATOR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
