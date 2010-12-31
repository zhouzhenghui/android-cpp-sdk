/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.impl.auth.NTLMEngineException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_AUTH_NTLMENGINEEXCEPTION_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_AUTH_NTLMENGINEEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace auth { class AuthenticationException; } } } } }


#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>
#include <org/apache/http/auth/AuthenticationException.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl { namespace auth {

	class NTLMEngineException;
	class NTLMEngineException
		: public object<NTLMEngineException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit NTLMEngineException(jobject jobj)
		: object<NTLMEngineException>(jobj)
		{
		}

		operator local_ref<org::apache::http::auth::AuthenticationException>() const;


		NTLMEngineException();
		NTLMEngineException(local_ref< java::lang::String > const&);
		NTLMEngineException(local_ref< java::lang::String > const&, local_ref< java::lang::Throwable > const&);
	}; //class NTLMEngineException

} //namespace auth
} //namespace impl
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_AUTH_NTLMENGINEEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_AUTH_NTLMENGINEEXCEPTION_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_AUTH_NTLMENGINEEXCEPTION_HPP_IMPL

namespace j2cpp {



org::apache::http::impl::auth::NTLMEngineException::operator local_ref<org::apache::http::auth::AuthenticationException>() const
{
	return local_ref<org::apache::http::auth::AuthenticationException>(get_jobject());
}


org::apache::http::impl::auth::NTLMEngineException::NTLMEngineException()
: object<org::apache::http::impl::auth::NTLMEngineException>(
	call_new_object<
		org::apache::http::impl::auth::NTLMEngineException::J2CPP_CLASS_NAME,
		org::apache::http::impl::auth::NTLMEngineException::J2CPP_METHOD_NAME(0),
		org::apache::http::impl::auth::NTLMEngineException::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}



org::apache::http::impl::auth::NTLMEngineException::NTLMEngineException(local_ref< java::lang::String > const &a0)
: object<org::apache::http::impl::auth::NTLMEngineException>(
	call_new_object<
		org::apache::http::impl::auth::NTLMEngineException::J2CPP_CLASS_NAME,
		org::apache::http::impl::auth::NTLMEngineException::J2CPP_METHOD_NAME(1),
		org::apache::http::impl::auth::NTLMEngineException::J2CPP_METHOD_SIGNATURE(1)>
	(a0)
)
{
}



org::apache::http::impl::auth::NTLMEngineException::NTLMEngineException(local_ref< java::lang::String > const &a0, local_ref< java::lang::Throwable > const &a1)
: object<org::apache::http::impl::auth::NTLMEngineException>(
	call_new_object<
		org::apache::http::impl::auth::NTLMEngineException::J2CPP_CLASS_NAME,
		org::apache::http::impl::auth::NTLMEngineException::J2CPP_METHOD_NAME(2),
		org::apache::http::impl::auth::NTLMEngineException::J2CPP_METHOD_SIGNATURE(2)>
	(a0, a1)
)
{
}



J2CPP_DEFINE_CLASS(org::apache::http::impl::auth::NTLMEngineException,"org/apache/http/impl/auth/NTLMEngineException")
J2CPP_DEFINE_METHOD(org::apache::http::impl::auth::NTLMEngineException,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::auth::NTLMEngineException,1,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::auth::NTLMEngineException,2,"<init>","(Ljava/lang/String;Ljava/lang/Throwable;)V")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_AUTH_NTLMENGINEEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
