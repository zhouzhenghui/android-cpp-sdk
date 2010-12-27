/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.NoHttpResponseException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_NOHTTPRESPONSEEXCEPTION_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_NOHTTPRESPONSEEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace io { class IOException; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/io/IOException.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http {

	class NoHttpResponseException;
	class NoHttpResponseException
		: public cpp_object<NoHttpResponseException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit NoHttpResponseException(jobject jobj)
		: cpp_object<NoHttpResponseException>(jobj)
		{
		}

		operator local_ref<java::io::IOException>() const;


		NoHttpResponseException(local_ref< java::lang::String > const&);
	}; //class NoHttpResponseException

} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_NOHTTPRESPONSEEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_NOHTTPRESPONSEEXCEPTION_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_NOHTTPRESPONSEEXCEPTION_HPP_IMPL

namespace j2cpp {



org::apache::http::NoHttpResponseException::operator local_ref<java::io::IOException>() const
{
	return local_ref<java::io::IOException>(get_jtype());
}


org::apache::http::NoHttpResponseException::NoHttpResponseException(local_ref< java::lang::String > const &a0)
: cpp_object<org::apache::http::NoHttpResponseException>(
	environment::get().get_jenv()->NewObject(
		get_class<org::apache::http::NoHttpResponseException::J2CPP_CLASS_NAME>(),
		get_method_id<org::apache::http::NoHttpResponseException::J2CPP_CLASS_NAME, org::apache::http::NoHttpResponseException::J2CPP_METHOD_NAME(0), org::apache::http::NoHttpResponseException::J2CPP_METHOD_SIGNATURE(0), false>(),
		a0.get_jtype()
	)
)
{
}



J2CPP_DEFINE_CLASS(org::apache::http::NoHttpResponseException,"org/apache/http/NoHttpResponseException")
J2CPP_DEFINE_METHOD(org::apache::http::NoHttpResponseException,0,"<init>","(Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_NOHTTPRESPONSEEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
