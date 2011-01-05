/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.impl.cookie.BasicCommentHandler
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_COOKIE_BASICCOMMENTHANDLER_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_COOKIE_BASICCOMMENTHANDLER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace impl { namespace cookie { class AbstractCookieAttributeHandler; } } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace cookie { class SetCookie; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace cookie { class CookieAttributeHandler; } } } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/apache/http/cookie/CookieAttributeHandler.hpp>
#include <org/apache/http/cookie/SetCookie.hpp>
#include <org/apache/http/impl/cookie/AbstractCookieAttributeHandler.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl { namespace cookie {

	class BasicCommentHandler;
	class BasicCommentHandler
		: public object<BasicCommentHandler>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit BasicCommentHandler(jobject jobj)
		: object<BasicCommentHandler>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::apache::http::impl::cookie::AbstractCookieAttributeHandler>() const;
		operator local_ref<org::apache::http::cookie::CookieAttributeHandler>() const;


		BasicCommentHandler();
		void parse(local_ref< org::apache::http::cookie::SetCookie >  const&, local_ref< java::lang::String >  const&);
	}; //class BasicCommentHandler

} //namespace cookie
} //namespace impl
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_COOKIE_BASICCOMMENTHANDLER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_COOKIE_BASICCOMMENTHANDLER_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_COOKIE_BASICCOMMENTHANDLER_HPP_IMPL

namespace j2cpp {



org::apache::http::impl::cookie::BasicCommentHandler::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::apache::http::impl::cookie::BasicCommentHandler::operator local_ref<org::apache::http::impl::cookie::AbstractCookieAttributeHandler>() const
{
	return local_ref<org::apache::http::impl::cookie::AbstractCookieAttributeHandler>(get_jobject());
}

org::apache::http::impl::cookie::BasicCommentHandler::operator local_ref<org::apache::http::cookie::CookieAttributeHandler>() const
{
	return local_ref<org::apache::http::cookie::CookieAttributeHandler>(get_jobject());
}


org::apache::http::impl::cookie::BasicCommentHandler::BasicCommentHandler()
: object<org::apache::http::impl::cookie::BasicCommentHandler>(
	call_new_object<
		org::apache::http::impl::cookie::BasicCommentHandler::J2CPP_CLASS_NAME,
		org::apache::http::impl::cookie::BasicCommentHandler::J2CPP_METHOD_NAME(0),
		org::apache::http::impl::cookie::BasicCommentHandler::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


void org::apache::http::impl::cookie::BasicCommentHandler::parse(local_ref< org::apache::http::cookie::SetCookie > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		org::apache::http::impl::cookie::BasicCommentHandler::J2CPP_CLASS_NAME,
		org::apache::http::impl::cookie::BasicCommentHandler::J2CPP_METHOD_NAME(1),
		org::apache::http::impl::cookie::BasicCommentHandler::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(org::apache::http::impl::cookie::BasicCommentHandler,"org/apache/http/impl/cookie/BasicCommentHandler")
J2CPP_DEFINE_METHOD(org::apache::http::impl::cookie::BasicCommentHandler,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::cookie::BasicCommentHandler,1,"parse","(Lorg/apache/http/cookie/SetCookie;Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_COOKIE_BASICCOMMENTHANDLER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
