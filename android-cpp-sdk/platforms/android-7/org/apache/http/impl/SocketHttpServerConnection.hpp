/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.impl.SocketHttpServerConnection
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_SOCKETHTTPSERVERCONNECTION_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_SOCKETHTTPSERVERCONNECTION_HPP_DECL


namespace j2cpp { namespace java { namespace net { class InetAddress; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpInetConnection; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace impl { class AbstractHttpServerConnection; } } } } }


#include <java/net/InetAddress.hpp>
#include <org/apache/http/HttpInetConnection.hpp>
#include <org/apache/http/impl/AbstractHttpServerConnection.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl {

	class SocketHttpServerConnection;
	class SocketHttpServerConnection
		: public cpp_object<SocketHttpServerConnection>
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
		J2CPP_DECLARE_METHOD(9)
		J2CPP_DECLARE_METHOD(10)
		J2CPP_DECLARE_METHOD(11)
		J2CPP_DECLARE_METHOD(12)
		J2CPP_DECLARE_METHOD(13)
		J2CPP_DECLARE_METHOD(14)
		J2CPP_DECLARE_METHOD(15)

		explicit SocketHttpServerConnection(jobject jobj)
		: cpp_object<SocketHttpServerConnection>(jobj)
		{
		}

		operator local_ref<org::apache::http::impl::AbstractHttpServerConnection>() const;
		operator local_ref<org::apache::http::HttpInetConnection>() const;


		SocketHttpServerConnection();
		cpp_boolean isOpen();
		local_ref< java::net::InetAddress > getLocalAddress();
		cpp_int getLocalPort();
		local_ref< java::net::InetAddress > getRemoteAddress();
		cpp_int getRemotePort();
		void setSocketTimeout(cpp_int const&);
		cpp_int getSocketTimeout();
		void shutdown();
		void close();
	}; //class SocketHttpServerConnection

} //namespace impl
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_SOCKETHTTPSERVERCONNECTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_SOCKETHTTPSERVERCONNECTION_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_SOCKETHTTPSERVERCONNECTION_HPP_IMPL

namespace j2cpp {



org::apache::http::impl::SocketHttpServerConnection::operator local_ref<org::apache::http::impl::AbstractHttpServerConnection>() const
{
	return local_ref<org::apache::http::impl::AbstractHttpServerConnection>(get_jtype());
}

org::apache::http::impl::SocketHttpServerConnection::operator local_ref<org::apache::http::HttpInetConnection>() const
{
	return local_ref<org::apache::http::HttpInetConnection>(get_jtype());
}


org::apache::http::impl::SocketHttpServerConnection::SocketHttpServerConnection()
: cpp_object<org::apache::http::impl::SocketHttpServerConnection>(
	environment::get().get_jenv()->NewObject(
		get_class<org::apache::http::impl::SocketHttpServerConnection::J2CPP_CLASS_NAME>(),
		get_method_id<org::apache::http::impl::SocketHttpServerConnection::J2CPP_CLASS_NAME, org::apache::http::impl::SocketHttpServerConnection::J2CPP_METHOD_NAME(0), org::apache::http::impl::SocketHttpServerConnection::J2CPP_METHOD_SIGNATURE(0), false>()
	)
)
{
}








cpp_boolean org::apache::http::impl::SocketHttpServerConnection::isOpen()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

local_ref< java::net::InetAddress > org::apache::http::impl::SocketHttpServerConnection::getLocalAddress()
{
	return local_ref< java::net::InetAddress >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}

cpp_int org::apache::http::impl::SocketHttpServerConnection::getLocalPort()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}

local_ref< java::net::InetAddress > org::apache::http::impl::SocketHttpServerConnection::getRemoteAddress()
{
	return local_ref< java::net::InetAddress >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>()
		)
	);
}

cpp_int org::apache::http::impl::SocketHttpServerConnection::getRemotePort()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>()
		)
	);
}

void org::apache::http::impl::SocketHttpServerConnection::setSocketTimeout(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int org::apache::http::impl::SocketHttpServerConnection::getSocketTimeout()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>()
		)
	);
}

void org::apache::http::impl::SocketHttpServerConnection::shutdown()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>()
		)
	);
}

void org::apache::http::impl::SocketHttpServerConnection::close()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(org::apache::http::impl::SocketHttpServerConnection,"org/apache/http/impl/SocketHttpServerConnection")
J2CPP_DEFINE_METHOD(org::apache::http::impl::SocketHttpServerConnection,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::SocketHttpServerConnection,1,"assertNotOpen","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::SocketHttpServerConnection,2,"assertOpen","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::SocketHttpServerConnection,3,"createHttpDataReceiver","(Ljava/net/Socket;ILorg/apache/http/params/HttpParams;)Lorg/apache/http/io/SessionInputBuffer;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::SocketHttpServerConnection,4,"createHttpDataTransmitter","(Ljava/net/Socket;ILorg/apache/http/params/HttpParams;)Lorg/apache/http/io/SessionOutputBuffer;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::SocketHttpServerConnection,5,"bind","(Ljava/net/Socket;Lorg/apache/http/params/HttpParams;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::SocketHttpServerConnection,6,"getSocket","()Ljava/net/Socket;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::SocketHttpServerConnection,7,"isOpen","()Z")
J2CPP_DEFINE_METHOD(org::apache::http::impl::SocketHttpServerConnection,8,"getLocalAddress","()Ljava/net/InetAddress;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::SocketHttpServerConnection,9,"getLocalPort","()I")
J2CPP_DEFINE_METHOD(org::apache::http::impl::SocketHttpServerConnection,10,"getRemoteAddress","()Ljava/net/InetAddress;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::SocketHttpServerConnection,11,"getRemotePort","()I")
J2CPP_DEFINE_METHOD(org::apache::http::impl::SocketHttpServerConnection,12,"setSocketTimeout","(I)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::SocketHttpServerConnection,13,"getSocketTimeout","()I")
J2CPP_DEFINE_METHOD(org::apache::http::impl::SocketHttpServerConnection,14,"shutdown","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::SocketHttpServerConnection,15,"close","()V")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_SOCKETHTTPSERVERCONNECTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
