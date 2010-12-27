/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.impl.cookie.BasicCommentHandler
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_COOKIE_BASICCOMMENTHANDLER_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_COOKIE_BASICCOMMENTHANDLER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace cookie { class SetCookie; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace impl { namespace cookie { class AbstractCookieAttributeHandler; } } } } } }


#include <java/lang/String.hpp>
#include <org/apache/http/cookie/SetCookie.hpp>
#include <org/apache/http/impl/cookie/AbstractCookieAttributeHandler.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl { namespace cookie {

	class BasicCommentHandler;
	class BasicCommentHandler
		: public cpp_object<BasicCommentHandler>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit BasicCommentHandler(jobject jobj)
		: cpp_object<BasicCommentHandler>(jobj)
		{
		}

		operator local_ref<org::apache::http::impl::cookie::AbstractCookieAttributeHandler>() const;


		BasicCommentHandler();
		void parse(local_ref< org::apache::http::cookie::SetCookie > const&, local_ref< java::lang::String > const&);
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



org::apache::http::impl::cookie::BasicCommentHandler::operator local_ref<org::apache::http::impl::cookie::AbstractCookieAttributeHandler>() const
{
	return local_ref<org::apache::http::impl::cookie::AbstractCookieAttributeHandler>(get_jtype());
}


org::apache::http::impl::cookie::BasicCommentHandler::BasicCommentHandler()
: cpp_object<org::apache::http::impl::cookie::BasicCommentHandler>(
	environment::get().get_jenv()->NewObject(
		get_class<org::apache::http::impl::cookie::BasicCommentHandler::J2CPP_CLASS_NAME>(),
		get_method_id<org::apache::http::impl::cookie::BasicCommentHandler::J2CPP_CLASS_NAME, org::apache::http::impl::cookie::BasicCommentHandler::J2CPP_METHOD_NAME(0), org::apache::http::impl::cookie::BasicCommentHandler::J2CPP_METHOD_SIGNATURE(0), false>()
	)
)
{
}


void org::apache::http::impl::cookie::BasicCommentHandler::parse(local_ref< org::apache::http::cookie::SetCookie > const &a0, local_ref< java::lang::String > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(org::apache::http::impl::cookie::BasicCommentHandler,"org/apache/http/impl/cookie/BasicCommentHandler")
J2CPP_DEFINE_METHOD(org::apache::http::impl::cookie::BasicCommentHandler,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::cookie::BasicCommentHandler,1,"parse","(Lorg/apache/http/cookie/SetCookie;Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_COOKIE_BASICCOMMENTHANDLER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
