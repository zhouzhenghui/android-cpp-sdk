/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.net.MulticastSocket
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_MULTICASTSOCKET_HPP_DECL
#define J2CPP_JAVA_NET_MULTICASTSOCKET_HPP_DECL


namespace j2cpp { namespace java { namespace net { class InetAddress; } } }
namespace j2cpp { namespace java { namespace net { class DatagramPacket; } } }
namespace j2cpp { namespace java { namespace net { class SocketAddress; } } }
namespace j2cpp { namespace java { namespace net { class NetworkInterface; } } }
namespace j2cpp { namespace java { namespace net { class DatagramSocket; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/net/DatagramPacket.hpp>
#include <java/net/DatagramSocket.hpp>
#include <java/net/InetAddress.hpp>
#include <java/net/NetworkInterface.hpp>
#include <java/net/SocketAddress.hpp>


namespace j2cpp {

namespace java { namespace net {

	class MulticastSocket;
	class MulticastSocket
		: public object<MulticastSocket>
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

		explicit MulticastSocket(jobject jobj)
		: object<MulticastSocket>(jobj)
		{
		}

		operator local_ref<java::net::DatagramSocket>() const;
		operator local_ref<java::lang::Object>() const;


		MulticastSocket();
		MulticastSocket(jint);
		MulticastSocket(local_ref< java::net::SocketAddress > const&);
		local_ref< java::net::InetAddress > getInterface();
		local_ref< java::net::NetworkInterface > getNetworkInterface();
		jint getTimeToLive();
		jbyte getTTL();
		void joinGroup(local_ref< java::net::InetAddress >  const&);
		void joinGroup(local_ref< java::net::SocketAddress >  const&, local_ref< java::net::NetworkInterface >  const&);
		void leaveGroup(local_ref< java::net::InetAddress >  const&);
		void leaveGroup(local_ref< java::net::SocketAddress >  const&, local_ref< java::net::NetworkInterface >  const&);
		void send(local_ref< java::net::DatagramPacket >  const&, jbyte);
		void setInterface(local_ref< java::net::InetAddress >  const&);
		void setNetworkInterface(local_ref< java::net::NetworkInterface >  const&);
		void setTimeToLive(jint);
		void setTTL(jbyte);
		jboolean getLoopbackMode();
		void setLoopbackMode(jboolean);
	}; //class MulticastSocket

} //namespace net
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_NET_MULTICASTSOCKET_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_MULTICASTSOCKET_HPP_IMPL
#define J2CPP_JAVA_NET_MULTICASTSOCKET_HPP_IMPL

namespace j2cpp {



java::net::MulticastSocket::operator local_ref<java::net::DatagramSocket>() const
{
	return local_ref<java::net::DatagramSocket>(get_jobject());
}

java::net::MulticastSocket::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


java::net::MulticastSocket::MulticastSocket()
: object<java::net::MulticastSocket>(
	call_new_object<
		java::net::MulticastSocket::J2CPP_CLASS_NAME,
		java::net::MulticastSocket::J2CPP_METHOD_NAME(0),
		java::net::MulticastSocket::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



java::net::MulticastSocket::MulticastSocket(jint a0)
: object<java::net::MulticastSocket>(
	call_new_object<
		java::net::MulticastSocket::J2CPP_CLASS_NAME,
		java::net::MulticastSocket::J2CPP_METHOD_NAME(1),
		java::net::MulticastSocket::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}



java::net::MulticastSocket::MulticastSocket(local_ref< java::net::SocketAddress > const &a0)
: object<java::net::MulticastSocket>(
	call_new_object<
		java::net::MulticastSocket::J2CPP_CLASS_NAME,
		java::net::MulticastSocket::J2CPP_METHOD_NAME(2),
		java::net::MulticastSocket::J2CPP_METHOD_SIGNATURE(2)
	>(a0)
)
{
}


local_ref< java::net::InetAddress > java::net::MulticastSocket::getInterface()
{
	return call_method<
		java::net::MulticastSocket::J2CPP_CLASS_NAME,
		java::net::MulticastSocket::J2CPP_METHOD_NAME(3),
		java::net::MulticastSocket::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::net::InetAddress >
	>(get_jobject());
}

local_ref< java::net::NetworkInterface > java::net::MulticastSocket::getNetworkInterface()
{
	return call_method<
		java::net::MulticastSocket::J2CPP_CLASS_NAME,
		java::net::MulticastSocket::J2CPP_METHOD_NAME(4),
		java::net::MulticastSocket::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::net::NetworkInterface >
	>(get_jobject());
}

jint java::net::MulticastSocket::getTimeToLive()
{
	return call_method<
		java::net::MulticastSocket::J2CPP_CLASS_NAME,
		java::net::MulticastSocket::J2CPP_METHOD_NAME(5),
		java::net::MulticastSocket::J2CPP_METHOD_SIGNATURE(5), 
		jint
	>(get_jobject());
}

jbyte java::net::MulticastSocket::getTTL()
{
	return call_method<
		java::net::MulticastSocket::J2CPP_CLASS_NAME,
		java::net::MulticastSocket::J2CPP_METHOD_NAME(6),
		java::net::MulticastSocket::J2CPP_METHOD_SIGNATURE(6), 
		jbyte
	>(get_jobject());
}

void java::net::MulticastSocket::joinGroup(local_ref< java::net::InetAddress > const &a0)
{
	return call_method<
		java::net::MulticastSocket::J2CPP_CLASS_NAME,
		java::net::MulticastSocket::J2CPP_METHOD_NAME(7),
		java::net::MulticastSocket::J2CPP_METHOD_SIGNATURE(7), 
		void
	>(get_jobject(), a0);
}

void java::net::MulticastSocket::joinGroup(local_ref< java::net::SocketAddress > const &a0, local_ref< java::net::NetworkInterface > const &a1)
{
	return call_method<
		java::net::MulticastSocket::J2CPP_CLASS_NAME,
		java::net::MulticastSocket::J2CPP_METHOD_NAME(8),
		java::net::MulticastSocket::J2CPP_METHOD_SIGNATURE(8), 
		void
	>(get_jobject(), a0, a1);
}

void java::net::MulticastSocket::leaveGroup(local_ref< java::net::InetAddress > const &a0)
{
	return call_method<
		java::net::MulticastSocket::J2CPP_CLASS_NAME,
		java::net::MulticastSocket::J2CPP_METHOD_NAME(9),
		java::net::MulticastSocket::J2CPP_METHOD_SIGNATURE(9), 
		void
	>(get_jobject(), a0);
}

void java::net::MulticastSocket::leaveGroup(local_ref< java::net::SocketAddress > const &a0, local_ref< java::net::NetworkInterface > const &a1)
{
	return call_method<
		java::net::MulticastSocket::J2CPP_CLASS_NAME,
		java::net::MulticastSocket::J2CPP_METHOD_NAME(10),
		java::net::MulticastSocket::J2CPP_METHOD_SIGNATURE(10), 
		void
	>(get_jobject(), a0, a1);
}

void java::net::MulticastSocket::send(local_ref< java::net::DatagramPacket > const &a0, jbyte a1)
{
	return call_method<
		java::net::MulticastSocket::J2CPP_CLASS_NAME,
		java::net::MulticastSocket::J2CPP_METHOD_NAME(11),
		java::net::MulticastSocket::J2CPP_METHOD_SIGNATURE(11), 
		void
	>(get_jobject(), a0, a1);
}

void java::net::MulticastSocket::setInterface(local_ref< java::net::InetAddress > const &a0)
{
	return call_method<
		java::net::MulticastSocket::J2CPP_CLASS_NAME,
		java::net::MulticastSocket::J2CPP_METHOD_NAME(12),
		java::net::MulticastSocket::J2CPP_METHOD_SIGNATURE(12), 
		void
	>(get_jobject(), a0);
}

void java::net::MulticastSocket::setNetworkInterface(local_ref< java::net::NetworkInterface > const &a0)
{
	return call_method<
		java::net::MulticastSocket::J2CPP_CLASS_NAME,
		java::net::MulticastSocket::J2CPP_METHOD_NAME(13),
		java::net::MulticastSocket::J2CPP_METHOD_SIGNATURE(13), 
		void
	>(get_jobject(), a0);
}

void java::net::MulticastSocket::setTimeToLive(jint a0)
{
	return call_method<
		java::net::MulticastSocket::J2CPP_CLASS_NAME,
		java::net::MulticastSocket::J2CPP_METHOD_NAME(14),
		java::net::MulticastSocket::J2CPP_METHOD_SIGNATURE(14), 
		void
	>(get_jobject(), a0);
}

void java::net::MulticastSocket::setTTL(jbyte a0)
{
	return call_method<
		java::net::MulticastSocket::J2CPP_CLASS_NAME,
		java::net::MulticastSocket::J2CPP_METHOD_NAME(15),
		java::net::MulticastSocket::J2CPP_METHOD_SIGNATURE(15), 
		void
	>(get_jobject(), a0);
}

jboolean java::net::MulticastSocket::getLoopbackMode()
{
	return call_method<
		java::net::MulticastSocket::J2CPP_CLASS_NAME,
		java::net::MulticastSocket::J2CPP_METHOD_NAME(16),
		java::net::MulticastSocket::J2CPP_METHOD_SIGNATURE(16), 
		jboolean
	>(get_jobject());
}

void java::net::MulticastSocket::setLoopbackMode(jboolean a0)
{
	return call_method<
		java::net::MulticastSocket::J2CPP_CLASS_NAME,
		java::net::MulticastSocket::J2CPP_METHOD_NAME(17),
		java::net::MulticastSocket::J2CPP_METHOD_SIGNATURE(17), 
		void
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(java::net::MulticastSocket,"java/net/MulticastSocket")
J2CPP_DEFINE_METHOD(java::net::MulticastSocket,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::net::MulticastSocket,1,"<init>","(I)V")
J2CPP_DEFINE_METHOD(java::net::MulticastSocket,2,"<init>","(Ljava/net/SocketAddress;)V")
J2CPP_DEFINE_METHOD(java::net::MulticastSocket,3,"getInterface","()Ljava/net/InetAddress;")
J2CPP_DEFINE_METHOD(java::net::MulticastSocket,4,"getNetworkInterface","()Ljava/net/NetworkInterface;")
J2CPP_DEFINE_METHOD(java::net::MulticastSocket,5,"getTimeToLive","()I")
J2CPP_DEFINE_METHOD(java::net::MulticastSocket,6,"getTTL","()B")
J2CPP_DEFINE_METHOD(java::net::MulticastSocket,7,"joinGroup","(Ljava/net/InetAddress;)V")
J2CPP_DEFINE_METHOD(java::net::MulticastSocket,8,"joinGroup","(Ljava/net/SocketAddress;Ljava/net/NetworkInterface;)V")
J2CPP_DEFINE_METHOD(java::net::MulticastSocket,9,"leaveGroup","(Ljava/net/InetAddress;)V")
J2CPP_DEFINE_METHOD(java::net::MulticastSocket,10,"leaveGroup","(Ljava/net/SocketAddress;Ljava/net/NetworkInterface;)V")
J2CPP_DEFINE_METHOD(java::net::MulticastSocket,11,"send","(Ljava/net/DatagramPacket;B)V")
J2CPP_DEFINE_METHOD(java::net::MulticastSocket,12,"setInterface","(Ljava/net/InetAddress;)V")
J2CPP_DEFINE_METHOD(java::net::MulticastSocket,13,"setNetworkInterface","(Ljava/net/NetworkInterface;)V")
J2CPP_DEFINE_METHOD(java::net::MulticastSocket,14,"setTimeToLive","(I)V")
J2CPP_DEFINE_METHOD(java::net::MulticastSocket,15,"setTTL","(B)V")
J2CPP_DEFINE_METHOD(java::net::MulticastSocket,16,"getLoopbackMode","()Z")
J2CPP_DEFINE_METHOD(java::net::MulticastSocket,17,"setLoopbackMode","(Z)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_NET_MULTICASTSOCKET_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
