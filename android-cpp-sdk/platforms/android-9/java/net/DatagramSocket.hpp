/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.net.DatagramSocket
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_DATAGRAMSOCKET_HPP_DECL
#define J2CPP_JAVA_NET_DATAGRAMSOCKET_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace nio { namespace channels { class DatagramChannel; } } } }
namespace j2cpp { namespace java { namespace net { class SocketAddress; } } }
namespace j2cpp { namespace java { namespace net { class DatagramPacket; } } }
namespace j2cpp { namespace java { namespace net { class DatagramSocketImplFactory; } } }
namespace j2cpp { namespace java { namespace net { class InetAddress; } } }


#include <java/lang/Object.hpp>
#include <java/net/DatagramPacket.hpp>
#include <java/net/DatagramSocketImplFactory.hpp>
#include <java/net/InetAddress.hpp>
#include <java/net/SocketAddress.hpp>
#include <java/nio/channels/DatagramChannel.hpp>


namespace j2cpp {

namespace java { namespace net {

	class DatagramSocket;
	class DatagramSocket
		: public object<DatagramSocket>
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
		J2CPP_DECLARE_METHOD(18)
		J2CPP_DECLARE_METHOD(19)
		J2CPP_DECLARE_METHOD(20)
		J2CPP_DECLARE_METHOD(21)
		J2CPP_DECLARE_METHOD(22)
		J2CPP_DECLARE_METHOD(23)
		J2CPP_DECLARE_METHOD(24)
		J2CPP_DECLARE_METHOD(25)
		J2CPP_DECLARE_METHOD(26)
		J2CPP_DECLARE_METHOD(27)
		J2CPP_DECLARE_METHOD(28)
		J2CPP_DECLARE_METHOD(29)
		J2CPP_DECLARE_METHOD(30)
		J2CPP_DECLARE_METHOD(31)
		J2CPP_DECLARE_METHOD(32)
		J2CPP_DECLARE_METHOD(33)
		J2CPP_DECLARE_METHOD(34)

		explicit DatagramSocket(jobject jobj)
		: object<DatagramSocket>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		DatagramSocket();
		DatagramSocket(jint);
		DatagramSocket(jint, local_ref< java::net::InetAddress > const&);
		DatagramSocket(local_ref< java::net::SocketAddress > const&);
		void close();
		void connect(local_ref< java::net::InetAddress >  const&, jint);
		void disconnect();
		local_ref< java::net::InetAddress > getInetAddress();
		local_ref< java::net::InetAddress > getLocalAddress();
		jint getLocalPort();
		jint getPort();
		jint getReceiveBufferSize();
		jint getSendBufferSize();
		jint getSoTimeout();
		void receive(local_ref< java::net::DatagramPacket >  const&);
		void send(local_ref< java::net::DatagramPacket >  const&);
		void setSendBufferSize(jint);
		void setReceiveBufferSize(jint);
		void setSoTimeout(jint);
		static void setDatagramSocketImplFactory(local_ref< java::net::DatagramSocketImplFactory >  const&);
		void bind(local_ref< java::net::SocketAddress >  const&);
		void connect(local_ref< java::net::SocketAddress >  const&);
		jboolean isBound();
		jboolean isConnected();
		local_ref< java::net::SocketAddress > getRemoteSocketAddress();
		local_ref< java::net::SocketAddress > getLocalSocketAddress();
		void setReuseAddress(jboolean);
		jboolean getReuseAddress();
		void setBroadcast(jboolean);
		jboolean getBroadcast();
		void setTrafficClass(jint);
		jint getTrafficClass();
		jboolean isClosed();
		local_ref< java::nio::channels::DatagramChannel > getChannel();
	}; //class DatagramSocket

} //namespace net
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_NET_DATAGRAMSOCKET_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_DATAGRAMSOCKET_HPP_IMPL
#define J2CPP_JAVA_NET_DATAGRAMSOCKET_HPP_IMPL

namespace j2cpp {



java::net::DatagramSocket::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


java::net::DatagramSocket::DatagramSocket()
: object<java::net::DatagramSocket>(
	call_new_object<
		java::net::DatagramSocket::J2CPP_CLASS_NAME,
		java::net::DatagramSocket::J2CPP_METHOD_NAME(0),
		java::net::DatagramSocket::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}



java::net::DatagramSocket::DatagramSocket(jint a0)
: object<java::net::DatagramSocket>(
	call_new_object<
		java::net::DatagramSocket::J2CPP_CLASS_NAME,
		java::net::DatagramSocket::J2CPP_METHOD_NAME(1),
		java::net::DatagramSocket::J2CPP_METHOD_SIGNATURE(1)>
	(a0)
)
{
}



java::net::DatagramSocket::DatagramSocket(jint a0, local_ref< java::net::InetAddress > const &a1)
: object<java::net::DatagramSocket>(
	call_new_object<
		java::net::DatagramSocket::J2CPP_CLASS_NAME,
		java::net::DatagramSocket::J2CPP_METHOD_NAME(2),
		java::net::DatagramSocket::J2CPP_METHOD_SIGNATURE(2)>
	(a0, a1)
)
{
}




java::net::DatagramSocket::DatagramSocket(local_ref< java::net::SocketAddress > const &a0)
: object<java::net::DatagramSocket>(
	call_new_object<
		java::net::DatagramSocket::J2CPP_CLASS_NAME,
		java::net::DatagramSocket::J2CPP_METHOD_NAME(4),
		java::net::DatagramSocket::J2CPP_METHOD_SIGNATURE(4)>
	(a0)
)
{
}


void java::net::DatagramSocket::close()
{
	return call_method<
		java::net::DatagramSocket::J2CPP_CLASS_NAME,
		java::net::DatagramSocket::J2CPP_METHOD_NAME(5),
		java::net::DatagramSocket::J2CPP_METHOD_SIGNATURE(5), 
		void >
	(get_jobject());
}

void java::net::DatagramSocket::connect(local_ref< java::net::InetAddress > const &a0, jint a1)
{
	return call_method<
		java::net::DatagramSocket::J2CPP_CLASS_NAME,
		java::net::DatagramSocket::J2CPP_METHOD_NAME(6),
		java::net::DatagramSocket::J2CPP_METHOD_SIGNATURE(6), 
		void >
	(get_jobject(), a0, a1);
}

void java::net::DatagramSocket::disconnect()
{
	return call_method<
		java::net::DatagramSocket::J2CPP_CLASS_NAME,
		java::net::DatagramSocket::J2CPP_METHOD_NAME(7),
		java::net::DatagramSocket::J2CPP_METHOD_SIGNATURE(7), 
		void >
	(get_jobject());
}

local_ref< java::net::InetAddress > java::net::DatagramSocket::getInetAddress()
{
	return call_method<
		java::net::DatagramSocket::J2CPP_CLASS_NAME,
		java::net::DatagramSocket::J2CPP_METHOD_NAME(8),
		java::net::DatagramSocket::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< java::net::InetAddress > >
	(get_jobject());
}

local_ref< java::net::InetAddress > java::net::DatagramSocket::getLocalAddress()
{
	return call_method<
		java::net::DatagramSocket::J2CPP_CLASS_NAME,
		java::net::DatagramSocket::J2CPP_METHOD_NAME(9),
		java::net::DatagramSocket::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< java::net::InetAddress > >
	(get_jobject());
}

jint java::net::DatagramSocket::getLocalPort()
{
	return call_method<
		java::net::DatagramSocket::J2CPP_CLASS_NAME,
		java::net::DatagramSocket::J2CPP_METHOD_NAME(10),
		java::net::DatagramSocket::J2CPP_METHOD_SIGNATURE(10), 
		jint >
	(get_jobject());
}

jint java::net::DatagramSocket::getPort()
{
	return call_method<
		java::net::DatagramSocket::J2CPP_CLASS_NAME,
		java::net::DatagramSocket::J2CPP_METHOD_NAME(11),
		java::net::DatagramSocket::J2CPP_METHOD_SIGNATURE(11), 
		jint >
	(get_jobject());
}

jint java::net::DatagramSocket::getReceiveBufferSize()
{
	return call_method<
		java::net::DatagramSocket::J2CPP_CLASS_NAME,
		java::net::DatagramSocket::J2CPP_METHOD_NAME(12),
		java::net::DatagramSocket::J2CPP_METHOD_SIGNATURE(12), 
		jint >
	(get_jobject());
}

jint java::net::DatagramSocket::getSendBufferSize()
{
	return call_method<
		java::net::DatagramSocket::J2CPP_CLASS_NAME,
		java::net::DatagramSocket::J2CPP_METHOD_NAME(13),
		java::net::DatagramSocket::J2CPP_METHOD_SIGNATURE(13), 
		jint >
	(get_jobject());
}

jint java::net::DatagramSocket::getSoTimeout()
{
	return call_method<
		java::net::DatagramSocket::J2CPP_CLASS_NAME,
		java::net::DatagramSocket::J2CPP_METHOD_NAME(14),
		java::net::DatagramSocket::J2CPP_METHOD_SIGNATURE(14), 
		jint >
	(get_jobject());
}

void java::net::DatagramSocket::receive(local_ref< java::net::DatagramPacket > const &a0)
{
	return call_method<
		java::net::DatagramSocket::J2CPP_CLASS_NAME,
		java::net::DatagramSocket::J2CPP_METHOD_NAME(15),
		java::net::DatagramSocket::J2CPP_METHOD_SIGNATURE(15), 
		void >
	(get_jobject(), a0);
}

void java::net::DatagramSocket::send(local_ref< java::net::DatagramPacket > const &a0)
{
	return call_method<
		java::net::DatagramSocket::J2CPP_CLASS_NAME,
		java::net::DatagramSocket::J2CPP_METHOD_NAME(16),
		java::net::DatagramSocket::J2CPP_METHOD_SIGNATURE(16), 
		void >
	(get_jobject(), a0);
}

void java::net::DatagramSocket::setSendBufferSize(jint a0)
{
	return call_method<
		java::net::DatagramSocket::J2CPP_CLASS_NAME,
		java::net::DatagramSocket::J2CPP_METHOD_NAME(17),
		java::net::DatagramSocket::J2CPP_METHOD_SIGNATURE(17), 
		void >
	(get_jobject(), a0);
}

void java::net::DatagramSocket::setReceiveBufferSize(jint a0)
{
	return call_method<
		java::net::DatagramSocket::J2CPP_CLASS_NAME,
		java::net::DatagramSocket::J2CPP_METHOD_NAME(18),
		java::net::DatagramSocket::J2CPP_METHOD_SIGNATURE(18), 
		void >
	(get_jobject(), a0);
}

void java::net::DatagramSocket::setSoTimeout(jint a0)
{
	return call_method<
		java::net::DatagramSocket::J2CPP_CLASS_NAME,
		java::net::DatagramSocket::J2CPP_METHOD_NAME(19),
		java::net::DatagramSocket::J2CPP_METHOD_SIGNATURE(19), 
		void >
	(get_jobject(), a0);
}

void java::net::DatagramSocket::setDatagramSocketImplFactory(local_ref< java::net::DatagramSocketImplFactory > const &a0)
{
	return call_static_method<
		java::net::DatagramSocket::J2CPP_CLASS_NAME,
		java::net::DatagramSocket::J2CPP_METHOD_NAME(20),
		java::net::DatagramSocket::J2CPP_METHOD_SIGNATURE(20), 
		void >
	(a0);
}

void java::net::DatagramSocket::bind(local_ref< java::net::SocketAddress > const &a0)
{
	return call_method<
		java::net::DatagramSocket::J2CPP_CLASS_NAME,
		java::net::DatagramSocket::J2CPP_METHOD_NAME(21),
		java::net::DatagramSocket::J2CPP_METHOD_SIGNATURE(21), 
		void >
	(get_jobject(), a0);
}

void java::net::DatagramSocket::connect(local_ref< java::net::SocketAddress > const &a0)
{
	return call_method<
		java::net::DatagramSocket::J2CPP_CLASS_NAME,
		java::net::DatagramSocket::J2CPP_METHOD_NAME(22),
		java::net::DatagramSocket::J2CPP_METHOD_SIGNATURE(22), 
		void >
	(get_jobject(), a0);
}

jboolean java::net::DatagramSocket::isBound()
{
	return call_method<
		java::net::DatagramSocket::J2CPP_CLASS_NAME,
		java::net::DatagramSocket::J2CPP_METHOD_NAME(23),
		java::net::DatagramSocket::J2CPP_METHOD_SIGNATURE(23), 
		jboolean >
	(get_jobject());
}

jboolean java::net::DatagramSocket::isConnected()
{
	return call_method<
		java::net::DatagramSocket::J2CPP_CLASS_NAME,
		java::net::DatagramSocket::J2CPP_METHOD_NAME(24),
		java::net::DatagramSocket::J2CPP_METHOD_SIGNATURE(24), 
		jboolean >
	(get_jobject());
}

local_ref< java::net::SocketAddress > java::net::DatagramSocket::getRemoteSocketAddress()
{
	return call_method<
		java::net::DatagramSocket::J2CPP_CLASS_NAME,
		java::net::DatagramSocket::J2CPP_METHOD_NAME(25),
		java::net::DatagramSocket::J2CPP_METHOD_SIGNATURE(25), 
		local_ref< java::net::SocketAddress > >
	(get_jobject());
}

local_ref< java::net::SocketAddress > java::net::DatagramSocket::getLocalSocketAddress()
{
	return call_method<
		java::net::DatagramSocket::J2CPP_CLASS_NAME,
		java::net::DatagramSocket::J2CPP_METHOD_NAME(26),
		java::net::DatagramSocket::J2CPP_METHOD_SIGNATURE(26), 
		local_ref< java::net::SocketAddress > >
	(get_jobject());
}

void java::net::DatagramSocket::setReuseAddress(jboolean a0)
{
	return call_method<
		java::net::DatagramSocket::J2CPP_CLASS_NAME,
		java::net::DatagramSocket::J2CPP_METHOD_NAME(27),
		java::net::DatagramSocket::J2CPP_METHOD_SIGNATURE(27), 
		void >
	(get_jobject(), a0);
}

jboolean java::net::DatagramSocket::getReuseAddress()
{
	return call_method<
		java::net::DatagramSocket::J2CPP_CLASS_NAME,
		java::net::DatagramSocket::J2CPP_METHOD_NAME(28),
		java::net::DatagramSocket::J2CPP_METHOD_SIGNATURE(28), 
		jboolean >
	(get_jobject());
}

void java::net::DatagramSocket::setBroadcast(jboolean a0)
{
	return call_method<
		java::net::DatagramSocket::J2CPP_CLASS_NAME,
		java::net::DatagramSocket::J2CPP_METHOD_NAME(29),
		java::net::DatagramSocket::J2CPP_METHOD_SIGNATURE(29), 
		void >
	(get_jobject(), a0);
}

jboolean java::net::DatagramSocket::getBroadcast()
{
	return call_method<
		java::net::DatagramSocket::J2CPP_CLASS_NAME,
		java::net::DatagramSocket::J2CPP_METHOD_NAME(30),
		java::net::DatagramSocket::J2CPP_METHOD_SIGNATURE(30), 
		jboolean >
	(get_jobject());
}

void java::net::DatagramSocket::setTrafficClass(jint a0)
{
	return call_method<
		java::net::DatagramSocket::J2CPP_CLASS_NAME,
		java::net::DatagramSocket::J2CPP_METHOD_NAME(31),
		java::net::DatagramSocket::J2CPP_METHOD_SIGNATURE(31), 
		void >
	(get_jobject(), a0);
}

jint java::net::DatagramSocket::getTrafficClass()
{
	return call_method<
		java::net::DatagramSocket::J2CPP_CLASS_NAME,
		java::net::DatagramSocket::J2CPP_METHOD_NAME(32),
		java::net::DatagramSocket::J2CPP_METHOD_SIGNATURE(32), 
		jint >
	(get_jobject());
}

jboolean java::net::DatagramSocket::isClosed()
{
	return call_method<
		java::net::DatagramSocket::J2CPP_CLASS_NAME,
		java::net::DatagramSocket::J2CPP_METHOD_NAME(33),
		java::net::DatagramSocket::J2CPP_METHOD_SIGNATURE(33), 
		jboolean >
	(get_jobject());
}

local_ref< java::nio::channels::DatagramChannel > java::net::DatagramSocket::getChannel()
{
	return call_method<
		java::net::DatagramSocket::J2CPP_CLASS_NAME,
		java::net::DatagramSocket::J2CPP_METHOD_NAME(34),
		java::net::DatagramSocket::J2CPP_METHOD_SIGNATURE(34), 
		local_ref< java::nio::channels::DatagramChannel > >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(java::net::DatagramSocket,"java/net/DatagramSocket")
J2CPP_DEFINE_METHOD(java::net::DatagramSocket,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::net::DatagramSocket,1,"<init>","(I)V")
J2CPP_DEFINE_METHOD(java::net::DatagramSocket,2,"<init>","(ILjava/net/InetAddress;)V")
J2CPP_DEFINE_METHOD(java::net::DatagramSocket,3,"<init>","(Ljava/net/DatagramSocketImpl;)V")
J2CPP_DEFINE_METHOD(java::net::DatagramSocket,4,"<init>","(Ljava/net/SocketAddress;)V")
J2CPP_DEFINE_METHOD(java::net::DatagramSocket,5,"close","()V")
J2CPP_DEFINE_METHOD(java::net::DatagramSocket,6,"connect","(Ljava/net/InetAddress;I)V")
J2CPP_DEFINE_METHOD(java::net::DatagramSocket,7,"disconnect","()V")
J2CPP_DEFINE_METHOD(java::net::DatagramSocket,8,"getInetAddress","()Ljava/net/InetAddress;")
J2CPP_DEFINE_METHOD(java::net::DatagramSocket,9,"getLocalAddress","()Ljava/net/InetAddress;")
J2CPP_DEFINE_METHOD(java::net::DatagramSocket,10,"getLocalPort","()I")
J2CPP_DEFINE_METHOD(java::net::DatagramSocket,11,"getPort","()I")
J2CPP_DEFINE_METHOD(java::net::DatagramSocket,12,"getReceiveBufferSize","()I")
J2CPP_DEFINE_METHOD(java::net::DatagramSocket,13,"getSendBufferSize","()I")
J2CPP_DEFINE_METHOD(java::net::DatagramSocket,14,"getSoTimeout","()I")
J2CPP_DEFINE_METHOD(java::net::DatagramSocket,15,"receive","(Ljava/net/DatagramPacket;)V")
J2CPP_DEFINE_METHOD(java::net::DatagramSocket,16,"send","(Ljava/net/DatagramPacket;)V")
J2CPP_DEFINE_METHOD(java::net::DatagramSocket,17,"setSendBufferSize","(I)V")
J2CPP_DEFINE_METHOD(java::net::DatagramSocket,18,"setReceiveBufferSize","(I)V")
J2CPP_DEFINE_METHOD(java::net::DatagramSocket,19,"setSoTimeout","(I)V")
J2CPP_DEFINE_METHOD(java::net::DatagramSocket,20,"setDatagramSocketImplFactory","(Ljava/net/DatagramSocketImplFactory;)V")
J2CPP_DEFINE_METHOD(java::net::DatagramSocket,21,"bind","(Ljava/net/SocketAddress;)V")
J2CPP_DEFINE_METHOD(java::net::DatagramSocket,22,"connect","(Ljava/net/SocketAddress;)V")
J2CPP_DEFINE_METHOD(java::net::DatagramSocket,23,"isBound","()Z")
J2CPP_DEFINE_METHOD(java::net::DatagramSocket,24,"isConnected","()Z")
J2CPP_DEFINE_METHOD(java::net::DatagramSocket,25,"getRemoteSocketAddress","()Ljava/net/SocketAddress;")
J2CPP_DEFINE_METHOD(java::net::DatagramSocket,26,"getLocalSocketAddress","()Ljava/net/SocketAddress;")
J2CPP_DEFINE_METHOD(java::net::DatagramSocket,27,"setReuseAddress","(Z)V")
J2CPP_DEFINE_METHOD(java::net::DatagramSocket,28,"getReuseAddress","()Z")
J2CPP_DEFINE_METHOD(java::net::DatagramSocket,29,"setBroadcast","(Z)V")
J2CPP_DEFINE_METHOD(java::net::DatagramSocket,30,"getBroadcast","()Z")
J2CPP_DEFINE_METHOD(java::net::DatagramSocket,31,"setTrafficClass","(I)V")
J2CPP_DEFINE_METHOD(java::net::DatagramSocket,32,"getTrafficClass","()I")
J2CPP_DEFINE_METHOD(java::net::DatagramSocket,33,"isClosed","()Z")
J2CPP_DEFINE_METHOD(java::net::DatagramSocket,34,"getChannel","()Ljava/nio/channels/DatagramChannel;")

} //namespace j2cpp

#endif //J2CPP_JAVA_NET_DATAGRAMSOCKET_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
