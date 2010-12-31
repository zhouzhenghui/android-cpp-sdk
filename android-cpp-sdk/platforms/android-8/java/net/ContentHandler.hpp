/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.net.ContentHandler
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_CONTENTHANDLER_HPP_DECL
#define J2CPP_JAVA_NET_CONTENTHANDLER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Class; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace net { class URLConnection; } } }


#include <java/lang/Class.hpp>
#include <java/lang/Object.hpp>
#include <java/net/URLConnection.hpp>


namespace j2cpp {

namespace java { namespace net {

	class ContentHandler;
	class ContentHandler
		: public object<ContentHandler>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit ContentHandler(jobject jobj)
		: object<ContentHandler>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		ContentHandler();
		local_ref< java::lang::Object > getContent(local_ref< java::net::URLConnection >  const&);
		local_ref< java::lang::Object > getContent(local_ref< java::net::URLConnection >  const&, local_ref< array< local_ref< java::lang::Class >, 1> >  const&);
	}; //class ContentHandler

} //namespace net
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_NET_CONTENTHANDLER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_CONTENTHANDLER_HPP_IMPL
#define J2CPP_JAVA_NET_CONTENTHANDLER_HPP_IMPL

namespace j2cpp {



java::net::ContentHandler::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


java::net::ContentHandler::ContentHandler()
: object<java::net::ContentHandler>(
	call_new_object<
		java::net::ContentHandler::J2CPP_CLASS_NAME,
		java::net::ContentHandler::J2CPP_METHOD_NAME(0),
		java::net::ContentHandler::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}


local_ref< java::lang::Object > java::net::ContentHandler::getContent(local_ref< java::net::URLConnection > const &a0)
{
	return call_method<
		java::net::ContentHandler::J2CPP_CLASS_NAME,
		java::net::ContentHandler::J2CPP_METHOD_NAME(1),
		java::net::ContentHandler::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::Object > >
	(get_jobject(), a0);
}

local_ref< java::lang::Object > java::net::ContentHandler::getContent(local_ref< java::net::URLConnection > const &a0, local_ref< array< local_ref< java::lang::Class >, 1> > const &a1)
{
	return call_method<
		java::net::ContentHandler::J2CPP_CLASS_NAME,
		java::net::ContentHandler::J2CPP_METHOD_NAME(2),
		java::net::ContentHandler::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::Object > >
	(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(java::net::ContentHandler,"java/net/ContentHandler")
J2CPP_DEFINE_METHOD(java::net::ContentHandler,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::net::ContentHandler,1,"getContent","(Ljava/net/URLConnection;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::net::ContentHandler,2,"getContent","(Ljava/net/URLConnection;[java.lang.Class)Ljava/lang/Object;")

} //namespace j2cpp

#endif //J2CPP_JAVA_NET_CONTENTHANDLER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
