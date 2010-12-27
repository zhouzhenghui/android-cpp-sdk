/*================================================================================
  code generated by: java2cpp
  class: javax.net.ssl.SSLServerSocket
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_NET_SSL_SSLSERVERSOCKET_HPP_DECL
#define J2CPP_JAVAX_NET_SSL_SSLSERVERSOCKET_HPP_DECL


namespace j2cpp { namespace java { namespace net { class ServerSocket; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/String.hpp>
#include <java/net/ServerSocket.hpp>


namespace j2cpp {

namespace javax { namespace net { namespace ssl {

	class SSLServerSocket;
	class SSLServerSocket
		: public cpp_object<SSLServerSocket>
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
		J2CPP_DECLARE_METHOD(16)
		J2CPP_DECLARE_METHOD(17)

		explicit SSLServerSocket(jobject jobj)
		: cpp_object<SSLServerSocket>(jobj)
		{
		}

		operator local_ref<java::net::ServerSocket>() const;


		local_ref< cpp_object_array<java::lang::String, 1> > getEnabledCipherSuites();
		void setEnabledCipherSuites(local_ref< cpp_object_array<java::lang::String, 1> > const&);
		local_ref< cpp_object_array<java::lang::String, 1> > getSupportedCipherSuites();
		local_ref< cpp_object_array<java::lang::String, 1> > getSupportedProtocols();
		local_ref< cpp_object_array<java::lang::String, 1> > getEnabledProtocols();
		void setEnabledProtocols(local_ref< cpp_object_array<java::lang::String, 1> > const&);
		void setNeedClientAuth(cpp_boolean const&);
		cpp_boolean getNeedClientAuth();
		void setWantClientAuth(cpp_boolean const&);
		cpp_boolean getWantClientAuth();
		void setUseClientMode(cpp_boolean const&);
		cpp_boolean getUseClientMode();
		void setEnableSessionCreation(cpp_boolean const&);
		cpp_boolean getEnableSessionCreation();
	}; //class SSLServerSocket

} //namespace ssl
} //namespace net
} //namespace javax

} //namespace j2cpp

#endif //J2CPP_JAVAX_NET_SSL_SSLSERVERSOCKET_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_NET_SSL_SSLSERVERSOCKET_HPP_IMPL
#define J2CPP_JAVAX_NET_SSL_SSLSERVERSOCKET_HPP_IMPL

namespace j2cpp {



javax::net::ssl::SSLServerSocket::operator local_ref<java::net::ServerSocket>() const
{
	return local_ref<java::net::ServerSocket>(get_jtype());
}





local_ref< cpp_object_array<java::lang::String, 1> > javax::net::ssl::SSLServerSocket::getEnabledCipherSuites()
{
	return local_ref< cpp_object_array<java::lang::String, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

void javax::net::ssl::SSLServerSocket::setEnabledCipherSuites(local_ref< cpp_object_array<java::lang::String, 1> > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< cpp_object_array<java::lang::String, 1> > javax::net::ssl::SSLServerSocket::getSupportedCipherSuites()
{
	return local_ref< cpp_object_array<java::lang::String, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

local_ref< cpp_object_array<java::lang::String, 1> > javax::net::ssl::SSLServerSocket::getSupportedProtocols()
{
	return local_ref< cpp_object_array<java::lang::String, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

local_ref< cpp_object_array<java::lang::String, 1> > javax::net::ssl::SSLServerSocket::getEnabledProtocols()
{
	return local_ref< cpp_object_array<java::lang::String, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}

void javax::net::ssl::SSLServerSocket::setEnabledProtocols(local_ref< cpp_object_array<java::lang::String, 1> > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype()
		)
	);
}

void javax::net::ssl::SSLServerSocket::setNeedClientAuth(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean javax::net::ssl::SSLServerSocket::getNeedClientAuth()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>()
		)
	);
}

void javax::net::ssl::SSLServerSocket::setWantClientAuth(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean javax::net::ssl::SSLServerSocket::getWantClientAuth()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>()
		)
	);
}

void javax::net::ssl::SSLServerSocket::setUseClientMode(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean javax::net::ssl::SSLServerSocket::getUseClientMode()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>()
		)
	);
}

void javax::net::ssl::SSLServerSocket::setEnableSessionCreation(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean javax::net::ssl::SSLServerSocket::getEnableSessionCreation()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(javax::net::ssl::SSLServerSocket,"javax/net/ssl/SSLServerSocket")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLServerSocket,0,"<init>","()V")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLServerSocket,1,"<init>","(I)V")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLServerSocket,2,"<init>","(II)V")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLServerSocket,3,"<init>","(IILjava/net/InetAddress;)V")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLServerSocket,4,"getEnabledCipherSuites","()[java.lang.String")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLServerSocket,5,"setEnabledCipherSuites","([java.lang.String)V")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLServerSocket,6,"getSupportedCipherSuites","()[java.lang.String")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLServerSocket,7,"getSupportedProtocols","()[java.lang.String")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLServerSocket,8,"getEnabledProtocols","()[java.lang.String")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLServerSocket,9,"setEnabledProtocols","([java.lang.String)V")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLServerSocket,10,"setNeedClientAuth","(Z)V")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLServerSocket,11,"getNeedClientAuth","()Z")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLServerSocket,12,"setWantClientAuth","(Z)V")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLServerSocket,13,"getWantClientAuth","()Z")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLServerSocket,14,"setUseClientMode","(Z)V")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLServerSocket,15,"getUseClientMode","()Z")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLServerSocket,16,"setEnableSessionCreation","(Z)V")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLServerSocket,17,"getEnableSessionCreation","()Z")

} //namespace j2cpp

#endif //J2CPP_JAVAX_NET_SSL_SSLSERVERSOCKET_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
