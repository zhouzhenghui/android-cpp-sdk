/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.conn.ConnectTimeoutException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CONN_CONNECTTIMEOUTEXCEPTION_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_CONN_CONNECTTIMEOUTEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace io { class InterruptedIOException; } } }


#include <java/io/InterruptedIOException.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace conn {

	class ConnectTimeoutException;
	class ConnectTimeoutException
		: public object<ConnectTimeoutException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit ConnectTimeoutException(jobject jobj)
		: object<ConnectTimeoutException>(jobj)
		{
		}

		operator local_ref<java::io::InterruptedIOException>() const;


		ConnectTimeoutException();
		ConnectTimeoutException(local_ref< java::lang::String > const&);
	}; //class ConnectTimeoutException

} //namespace conn
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CONN_CONNECTTIMEOUTEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CONN_CONNECTTIMEOUTEXCEPTION_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_CONN_CONNECTTIMEOUTEXCEPTION_HPP_IMPL

namespace j2cpp {



org::apache::http::conn::ConnectTimeoutException::operator local_ref<java::io::InterruptedIOException>() const
{
	return local_ref<java::io::InterruptedIOException>(get_jobject());
}


org::apache::http::conn::ConnectTimeoutException::ConnectTimeoutException()
: object<org::apache::http::conn::ConnectTimeoutException>(
	call_new_object<
		org::apache::http::conn::ConnectTimeoutException::J2CPP_CLASS_NAME,
		org::apache::http::conn::ConnectTimeoutException::J2CPP_METHOD_NAME(0),
		org::apache::http::conn::ConnectTimeoutException::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}



org::apache::http::conn::ConnectTimeoutException::ConnectTimeoutException(local_ref< java::lang::String > const &a0)
: object<org::apache::http::conn::ConnectTimeoutException>(
	call_new_object<
		org::apache::http::conn::ConnectTimeoutException::J2CPP_CLASS_NAME,
		org::apache::http::conn::ConnectTimeoutException::J2CPP_METHOD_NAME(1),
		org::apache::http::conn::ConnectTimeoutException::J2CPP_METHOD_SIGNATURE(1)>
	(a0)
)
{
}



J2CPP_DEFINE_CLASS(org::apache::http::conn::ConnectTimeoutException,"org/apache/http/conn/ConnectTimeoutException")
J2CPP_DEFINE_METHOD(org::apache::http::conn::ConnectTimeoutException,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::conn::ConnectTimeoutException,1,"<init>","(Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CONN_CONNECTTIMEOUTEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
