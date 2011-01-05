/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: javax.net.ssl.SSLSessionBindingEvent
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_NET_SSL_SSLSESSIONBINDINGEVENT_HPP_DECL
#define J2CPP_JAVAX_NET_SSL_SSLSESSIONBINDINGEVENT_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class EventObject; } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace javax { namespace net { namespace ssl { class SSLSession; } } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/EventObject.hpp>
#include <javax/net/ssl/SSLSession.hpp>


namespace j2cpp {

namespace javax { namespace net { namespace ssl {

	class SSLSessionBindingEvent;
	class SSLSessionBindingEvent
		: public object<SSLSessionBindingEvent>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit SSLSessionBindingEvent(jobject jobj)
		: object<SSLSessionBindingEvent>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::util::EventObject>() const;
		operator local_ref<java::io::Serializable>() const;


		SSLSessionBindingEvent(local_ref< javax::net::ssl::SSLSession > const&, local_ref< java::lang::String > const&);
		local_ref< java::lang::String > getName();
		local_ref< javax::net::ssl::SSLSession > getSession();
	}; //class SSLSessionBindingEvent

} //namespace ssl
} //namespace net
} //namespace javax

} //namespace j2cpp

#endif //J2CPP_JAVAX_NET_SSL_SSLSESSIONBINDINGEVENT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_NET_SSL_SSLSESSIONBINDINGEVENT_HPP_IMPL
#define J2CPP_JAVAX_NET_SSL_SSLSESSIONBINDINGEVENT_HPP_IMPL

namespace j2cpp {



javax::net::ssl::SSLSessionBindingEvent::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

javax::net::ssl::SSLSessionBindingEvent::operator local_ref<java::util::EventObject>() const
{
	return local_ref<java::util::EventObject>(get_jobject());
}

javax::net::ssl::SSLSessionBindingEvent::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}


javax::net::ssl::SSLSessionBindingEvent::SSLSessionBindingEvent(local_ref< javax::net::ssl::SSLSession > const &a0, local_ref< java::lang::String > const &a1)
: object<javax::net::ssl::SSLSessionBindingEvent>(
	call_new_object<
		javax::net::ssl::SSLSessionBindingEvent::J2CPP_CLASS_NAME,
		javax::net::ssl::SSLSessionBindingEvent::J2CPP_METHOD_NAME(0),
		javax::net::ssl::SSLSessionBindingEvent::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1)
)
{
}


local_ref< java::lang::String > javax::net::ssl::SSLSessionBindingEvent::getName()
{
	return call_method<
		javax::net::ssl::SSLSessionBindingEvent::J2CPP_CLASS_NAME,
		javax::net::ssl::SSLSessionBindingEvent::J2CPP_METHOD_NAME(1),
		javax::net::ssl::SSLSessionBindingEvent::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< javax::net::ssl::SSLSession > javax::net::ssl::SSLSessionBindingEvent::getSession()
{
	return call_method<
		javax::net::ssl::SSLSessionBindingEvent::J2CPP_CLASS_NAME,
		javax::net::ssl::SSLSessionBindingEvent::J2CPP_METHOD_NAME(2),
		javax::net::ssl::SSLSessionBindingEvent::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< javax::net::ssl::SSLSession >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(javax::net::ssl::SSLSessionBindingEvent,"javax/net/ssl/SSLSessionBindingEvent")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLSessionBindingEvent,0,"<init>","(Ljavax/net/ssl/SSLSession;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLSessionBindingEvent,1,"getName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLSessionBindingEvent,2,"getSession","()Ljavax/net/ssl/SSLSession;")

} //namespace j2cpp

#endif //J2CPP_JAVAX_NET_SSL_SSLSESSIONBINDINGEVENT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
