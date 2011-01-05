/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: javax.crypto.NoSuchPaddingException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_CRYPTO_NOSUCHPADDINGEXCEPTION_HPP_DECL
#define J2CPP_JAVAX_CRYPTO_NOSUCHPADDINGEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }
namespace j2cpp { namespace java { namespace lang { class Exception; } } }
namespace j2cpp { namespace java { namespace security { class GeneralSecurityException; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>
#include <java/security/GeneralSecurityException.hpp>


namespace j2cpp {

namespace javax { namespace crypto {

	class NoSuchPaddingException;
	class NoSuchPaddingException
		: public object<NoSuchPaddingException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit NoSuchPaddingException(jobject jobj)
		: object<NoSuchPaddingException>(jobj)
		{
		}

		operator local_ref<java::io::Serializable>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::Throwable>() const;
		operator local_ref<java::lang::Exception>() const;
		operator local_ref<java::security::GeneralSecurityException>() const;


		NoSuchPaddingException(local_ref< java::lang::String > const&);
		NoSuchPaddingException();
	}; //class NoSuchPaddingException

} //namespace crypto
} //namespace javax

} //namespace j2cpp

#endif //J2CPP_JAVAX_CRYPTO_NOSUCHPADDINGEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_CRYPTO_NOSUCHPADDINGEXCEPTION_HPP_IMPL
#define J2CPP_JAVAX_CRYPTO_NOSUCHPADDINGEXCEPTION_HPP_IMPL

namespace j2cpp {



javax::crypto::NoSuchPaddingException::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}

javax::crypto::NoSuchPaddingException::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

javax::crypto::NoSuchPaddingException::operator local_ref<java::lang::Throwable>() const
{
	return local_ref<java::lang::Throwable>(get_jobject());
}

javax::crypto::NoSuchPaddingException::operator local_ref<java::lang::Exception>() const
{
	return local_ref<java::lang::Exception>(get_jobject());
}

javax::crypto::NoSuchPaddingException::operator local_ref<java::security::GeneralSecurityException>() const
{
	return local_ref<java::security::GeneralSecurityException>(get_jobject());
}


javax::crypto::NoSuchPaddingException::NoSuchPaddingException(local_ref< java::lang::String > const &a0)
: object<javax::crypto::NoSuchPaddingException>(
	call_new_object<
		javax::crypto::NoSuchPaddingException::J2CPP_CLASS_NAME,
		javax::crypto::NoSuchPaddingException::J2CPP_METHOD_NAME(0),
		javax::crypto::NoSuchPaddingException::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}



javax::crypto::NoSuchPaddingException::NoSuchPaddingException()
: object<javax::crypto::NoSuchPaddingException>(
	call_new_object<
		javax::crypto::NoSuchPaddingException::J2CPP_CLASS_NAME,
		javax::crypto::NoSuchPaddingException::J2CPP_METHOD_NAME(1),
		javax::crypto::NoSuchPaddingException::J2CPP_METHOD_SIGNATURE(1)
	>()
)
{
}



J2CPP_DEFINE_CLASS(javax::crypto::NoSuchPaddingException,"javax/crypto/NoSuchPaddingException")
J2CPP_DEFINE_METHOD(javax::crypto::NoSuchPaddingException,0,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(javax::crypto::NoSuchPaddingException,1,"<init>","()V")

} //namespace j2cpp

#endif //J2CPP_JAVAX_CRYPTO_NOSUCHPADDINGEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
