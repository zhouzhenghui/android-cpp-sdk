/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.security.cert.X509CRL
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_CERT_X509CRL_HPP_DECL
#define J2CPP_JAVA_SECURITY_CERT_X509CRL_HPP_DECL


namespace j2cpp { namespace javax { namespace security { namespace auth { namespace x500 { class X500Principal; } } } } }
namespace j2cpp { namespace java { namespace math { class BigInteger; } } }
namespace j2cpp { namespace java { namespace util { class Set; } } }
namespace j2cpp { namespace java { namespace util { class Date; } } }
namespace j2cpp { namespace java { namespace security { namespace cert { class X509Extension; } } } }
namespace j2cpp { namespace java { namespace security { namespace cert { class X509CRLEntry; } } } }
namespace j2cpp { namespace java { namespace security { namespace cert { class CRL; } } } }
namespace j2cpp { namespace java { namespace security { namespace cert { class X509Certificate; } } } }
namespace j2cpp { namespace java { namespace security { class PublicKey; } } }
namespace j2cpp { namespace java { namespace security { class Principal; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/math/BigInteger.hpp>
#include <java/security/Principal.hpp>
#include <java/security/PublicKey.hpp>
#include <java/security/cert/CRL.hpp>
#include <java/security/cert/X509CRLEntry.hpp>
#include <java/security/cert/X509Certificate.hpp>
#include <java/security/cert/X509Extension.hpp>
#include <java/util/Date.hpp>
#include <java/util/Set.hpp>
#include <javax/security/auth/x500/X500Principal.hpp>


namespace j2cpp {

namespace java { namespace security { namespace cert {

	class X509CRL;
	class X509CRL
		: public object<X509CRL>
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

		explicit X509CRL(jobject jobj)
		: object<X509CRL>(jobj)
		{
		}

		operator local_ref<java::security::cert::CRL>() const;
		operator local_ref<java::security::cert::X509Extension>() const;


		jboolean equals(local_ref< java::lang::Object >  const&);
		jint hashCode();
		local_ref< array<jbyte,1> > getEncoded();
		void verify(local_ref< java::security::PublicKey >  const&);
		void verify(local_ref< java::security::PublicKey >  const&, local_ref< java::lang::String >  const&);
		jint getVersion();
		local_ref< java::security::Principal > getIssuerDN();
		local_ref< javax::security::auth::x500::X500Principal > getIssuerX500Principal();
		local_ref< java::util::Date > getThisUpdate();
		local_ref< java::util::Date > getNextUpdate();
		local_ref< java::security::cert::X509CRLEntry > getRevokedCertificate(local_ref< java::math::BigInteger >  const&);
		local_ref< java::security::cert::X509CRLEntry > getRevokedCertificate(local_ref< java::security::cert::X509Certificate >  const&);
		local_ref< java::util::Set > getRevokedCertificates();
		local_ref< array<jbyte,1> > getTBSCertList();
		local_ref< array<jbyte,1> > getSignature();
		local_ref< java::lang::String > getSigAlgName();
		local_ref< java::lang::String > getSigAlgOID();
		local_ref< array<jbyte,1> > getSigAlgParams();
	}; //class X509CRL

} //namespace cert
} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_CERT_X509CRL_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_CERT_X509CRL_HPP_IMPL
#define J2CPP_JAVA_SECURITY_CERT_X509CRL_HPP_IMPL

namespace j2cpp {



java::security::cert::X509CRL::operator local_ref<java::security::cert::CRL>() const
{
	return local_ref<java::security::cert::CRL>(get_jobject());
}

java::security::cert::X509CRL::operator local_ref<java::security::cert::X509Extension>() const
{
	return local_ref<java::security::cert::X509Extension>(get_jobject());
}


jboolean java::security::cert::X509CRL::equals(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::security::cert::X509CRL::J2CPP_CLASS_NAME,
		java::security::cert::X509CRL::J2CPP_METHOD_NAME(1),
		java::security::cert::X509CRL::J2CPP_METHOD_SIGNATURE(1), 
		jboolean >
	(get_jobject(), a0);
}

jint java::security::cert::X509CRL::hashCode()
{
	return call_method<
		java::security::cert::X509CRL::J2CPP_CLASS_NAME,
		java::security::cert::X509CRL::J2CPP_METHOD_NAME(2),
		java::security::cert::X509CRL::J2CPP_METHOD_SIGNATURE(2), 
		jint >
	(get_jobject());
}

local_ref< array<jbyte,1> > java::security::cert::X509CRL::getEncoded()
{
	return call_method<
		java::security::cert::X509CRL::J2CPP_CLASS_NAME,
		java::security::cert::X509CRL::J2CPP_METHOD_NAME(3),
		java::security::cert::X509CRL::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< array<jbyte,1> > >
	(get_jobject());
}

void java::security::cert::X509CRL::verify(local_ref< java::security::PublicKey > const &a0)
{
	return call_method<
		java::security::cert::X509CRL::J2CPP_CLASS_NAME,
		java::security::cert::X509CRL::J2CPP_METHOD_NAME(4),
		java::security::cert::X509CRL::J2CPP_METHOD_SIGNATURE(4), 
		void >
	(get_jobject(), a0);
}

void java::security::cert::X509CRL::verify(local_ref< java::security::PublicKey > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		java::security::cert::X509CRL::J2CPP_CLASS_NAME,
		java::security::cert::X509CRL::J2CPP_METHOD_NAME(5),
		java::security::cert::X509CRL::J2CPP_METHOD_SIGNATURE(5), 
		void >
	(get_jobject(), a0, a1);
}

jint java::security::cert::X509CRL::getVersion()
{
	return call_method<
		java::security::cert::X509CRL::J2CPP_CLASS_NAME,
		java::security::cert::X509CRL::J2CPP_METHOD_NAME(6),
		java::security::cert::X509CRL::J2CPP_METHOD_SIGNATURE(6), 
		jint >
	(get_jobject());
}

local_ref< java::security::Principal > java::security::cert::X509CRL::getIssuerDN()
{
	return call_method<
		java::security::cert::X509CRL::J2CPP_CLASS_NAME,
		java::security::cert::X509CRL::J2CPP_METHOD_NAME(7),
		java::security::cert::X509CRL::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::security::Principal > >
	(get_jobject());
}

local_ref< javax::security::auth::x500::X500Principal > java::security::cert::X509CRL::getIssuerX500Principal()
{
	return call_method<
		java::security::cert::X509CRL::J2CPP_CLASS_NAME,
		java::security::cert::X509CRL::J2CPP_METHOD_NAME(8),
		java::security::cert::X509CRL::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< javax::security::auth::x500::X500Principal > >
	(get_jobject());
}

local_ref< java::util::Date > java::security::cert::X509CRL::getThisUpdate()
{
	return call_method<
		java::security::cert::X509CRL::J2CPP_CLASS_NAME,
		java::security::cert::X509CRL::J2CPP_METHOD_NAME(9),
		java::security::cert::X509CRL::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< java::util::Date > >
	(get_jobject());
}

local_ref< java::util::Date > java::security::cert::X509CRL::getNextUpdate()
{
	return call_method<
		java::security::cert::X509CRL::J2CPP_CLASS_NAME,
		java::security::cert::X509CRL::J2CPP_METHOD_NAME(10),
		java::security::cert::X509CRL::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< java::util::Date > >
	(get_jobject());
}

local_ref< java::security::cert::X509CRLEntry > java::security::cert::X509CRL::getRevokedCertificate(local_ref< java::math::BigInteger > const &a0)
{
	return call_method<
		java::security::cert::X509CRL::J2CPP_CLASS_NAME,
		java::security::cert::X509CRL::J2CPP_METHOD_NAME(11),
		java::security::cert::X509CRL::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< java::security::cert::X509CRLEntry > >
	(get_jobject(), a0);
}

local_ref< java::security::cert::X509CRLEntry > java::security::cert::X509CRL::getRevokedCertificate(local_ref< java::security::cert::X509Certificate > const &a0)
{
	return call_method<
		java::security::cert::X509CRL::J2CPP_CLASS_NAME,
		java::security::cert::X509CRL::J2CPP_METHOD_NAME(12),
		java::security::cert::X509CRL::J2CPP_METHOD_SIGNATURE(12), 
		local_ref< java::security::cert::X509CRLEntry > >
	(get_jobject(), a0);
}

local_ref< java::util::Set > java::security::cert::X509CRL::getRevokedCertificates()
{
	return call_method<
		java::security::cert::X509CRL::J2CPP_CLASS_NAME,
		java::security::cert::X509CRL::J2CPP_METHOD_NAME(13),
		java::security::cert::X509CRL::J2CPP_METHOD_SIGNATURE(13), 
		local_ref< java::util::Set > >
	(get_jobject());
}

local_ref< array<jbyte,1> > java::security::cert::X509CRL::getTBSCertList()
{
	return call_method<
		java::security::cert::X509CRL::J2CPP_CLASS_NAME,
		java::security::cert::X509CRL::J2CPP_METHOD_NAME(14),
		java::security::cert::X509CRL::J2CPP_METHOD_SIGNATURE(14), 
		local_ref< array<jbyte,1> > >
	(get_jobject());
}

local_ref< array<jbyte,1> > java::security::cert::X509CRL::getSignature()
{
	return call_method<
		java::security::cert::X509CRL::J2CPP_CLASS_NAME,
		java::security::cert::X509CRL::J2CPP_METHOD_NAME(15),
		java::security::cert::X509CRL::J2CPP_METHOD_SIGNATURE(15), 
		local_ref< array<jbyte,1> > >
	(get_jobject());
}

local_ref< java::lang::String > java::security::cert::X509CRL::getSigAlgName()
{
	return call_method<
		java::security::cert::X509CRL::J2CPP_CLASS_NAME,
		java::security::cert::X509CRL::J2CPP_METHOD_NAME(16),
		java::security::cert::X509CRL::J2CPP_METHOD_SIGNATURE(16), 
		local_ref< java::lang::String > >
	(get_jobject());
}

local_ref< java::lang::String > java::security::cert::X509CRL::getSigAlgOID()
{
	return call_method<
		java::security::cert::X509CRL::J2CPP_CLASS_NAME,
		java::security::cert::X509CRL::J2CPP_METHOD_NAME(17),
		java::security::cert::X509CRL::J2CPP_METHOD_SIGNATURE(17), 
		local_ref< java::lang::String > >
	(get_jobject());
}

local_ref< array<jbyte,1> > java::security::cert::X509CRL::getSigAlgParams()
{
	return call_method<
		java::security::cert::X509CRL::J2CPP_CLASS_NAME,
		java::security::cert::X509CRL::J2CPP_METHOD_NAME(18),
		java::security::cert::X509CRL::J2CPP_METHOD_SIGNATURE(18), 
		local_ref< array<jbyte,1> > >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(java::security::cert::X509CRL,"java/security/cert/X509CRL")
J2CPP_DEFINE_METHOD(java::security::cert::X509CRL,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::security::cert::X509CRL,1,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::security::cert::X509CRL,2,"hashCode","()I")
J2CPP_DEFINE_METHOD(java::security::cert::X509CRL,3,"getEncoded","()[B")
J2CPP_DEFINE_METHOD(java::security::cert::X509CRL,4,"verify","(Ljava/security/PublicKey;)V")
J2CPP_DEFINE_METHOD(java::security::cert::X509CRL,5,"verify","(Ljava/security/PublicKey;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::security::cert::X509CRL,6,"getVersion","()I")
J2CPP_DEFINE_METHOD(java::security::cert::X509CRL,7,"getIssuerDN","()Ljava/security/Principal;")
J2CPP_DEFINE_METHOD(java::security::cert::X509CRL,8,"getIssuerX500Principal","()Ljavax/security/auth/x500/X500Principal;")
J2CPP_DEFINE_METHOD(java::security::cert::X509CRL,9,"getThisUpdate","()Ljava/util/Date;")
J2CPP_DEFINE_METHOD(java::security::cert::X509CRL,10,"getNextUpdate","()Ljava/util/Date;")
J2CPP_DEFINE_METHOD(java::security::cert::X509CRL,11,"getRevokedCertificate","(Ljava/math/BigInteger;)Ljava/security/cert/X509CRLEntry;")
J2CPP_DEFINE_METHOD(java::security::cert::X509CRL,12,"getRevokedCertificate","(Ljava/security/cert/X509Certificate;)Ljava/security/cert/X509CRLEntry;")
J2CPP_DEFINE_METHOD(java::security::cert::X509CRL,13,"getRevokedCertificates","()Ljava/util/Set;")
J2CPP_DEFINE_METHOD(java::security::cert::X509CRL,14,"getTBSCertList","()[B")
J2CPP_DEFINE_METHOD(java::security::cert::X509CRL,15,"getSignature","()[B")
J2CPP_DEFINE_METHOD(java::security::cert::X509CRL,16,"getSigAlgName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::security::cert::X509CRL,17,"getSigAlgOID","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::security::cert::X509CRL,18,"getSigAlgParams","()[B")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_CERT_X509CRL_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
