/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: javax.security.auth.SubjectDomainCombiner
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_SECURITY_AUTH_SUBJECTDOMAINCOMBINER_HPP_DECL
#define J2CPP_JAVAX_SECURITY_AUTH_SUBJECTDOMAINCOMBINER_HPP_DECL


namespace j2cpp { namespace java { namespace security { class ProtectionDomain; } } }
namespace j2cpp { namespace java { namespace security { class DomainCombiner; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace javax { namespace security { namespace auth { class Subject; } } } }


#include <java/lang/Object.hpp>
#include <java/security/DomainCombiner.hpp>
#include <java/security/ProtectionDomain.hpp>
#include <javax/security/auth/Subject.hpp>


namespace j2cpp {

namespace javax { namespace security { namespace auth {

	class SubjectDomainCombiner;
	class SubjectDomainCombiner
		: public object<SubjectDomainCombiner>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit SubjectDomainCombiner(jobject jobj)
		: object<SubjectDomainCombiner>(jobj)
		{
		}

		operator local_ref<java::security::DomainCombiner>() const;
		operator local_ref<java::lang::Object>() const;


		SubjectDomainCombiner(local_ref< javax::security::auth::Subject > const&);
		local_ref< javax::security::auth::Subject > getSubject();
		local_ref< array< local_ref< java::security::ProtectionDomain >, 1> > combine(local_ref< array< local_ref< java::security::ProtectionDomain >, 1> >  const&, local_ref< array< local_ref< java::security::ProtectionDomain >, 1> >  const&);
	}; //class SubjectDomainCombiner

} //namespace auth
} //namespace security
} //namespace javax

} //namespace j2cpp

#endif //J2CPP_JAVAX_SECURITY_AUTH_SUBJECTDOMAINCOMBINER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_SECURITY_AUTH_SUBJECTDOMAINCOMBINER_HPP_IMPL
#define J2CPP_JAVAX_SECURITY_AUTH_SUBJECTDOMAINCOMBINER_HPP_IMPL

namespace j2cpp {



javax::security::auth::SubjectDomainCombiner::operator local_ref<java::security::DomainCombiner>() const
{
	return local_ref<java::security::DomainCombiner>(get_jobject());
}

javax::security::auth::SubjectDomainCombiner::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


javax::security::auth::SubjectDomainCombiner::SubjectDomainCombiner(local_ref< javax::security::auth::Subject > const &a0)
: object<javax::security::auth::SubjectDomainCombiner>(
	call_new_object<
		javax::security::auth::SubjectDomainCombiner::J2CPP_CLASS_NAME,
		javax::security::auth::SubjectDomainCombiner::J2CPP_METHOD_NAME(0),
		javax::security::auth::SubjectDomainCombiner::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}


local_ref< javax::security::auth::Subject > javax::security::auth::SubjectDomainCombiner::getSubject()
{
	return call_method<
		javax::security::auth::SubjectDomainCombiner::J2CPP_CLASS_NAME,
		javax::security::auth::SubjectDomainCombiner::J2CPP_METHOD_NAME(1),
		javax::security::auth::SubjectDomainCombiner::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< javax::security::auth::Subject >
	>(get_jobject());
}

local_ref< array< local_ref< java::security::ProtectionDomain >, 1> > javax::security::auth::SubjectDomainCombiner::combine(local_ref< array< local_ref< java::security::ProtectionDomain >, 1> > const &a0, local_ref< array< local_ref< java::security::ProtectionDomain >, 1> > const &a1)
{
	return call_method<
		javax::security::auth::SubjectDomainCombiner::J2CPP_CLASS_NAME,
		javax::security::auth::SubjectDomainCombiner::J2CPP_METHOD_NAME(2),
		javax::security::auth::SubjectDomainCombiner::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< array< local_ref< java::security::ProtectionDomain >, 1> >
	>(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(javax::security::auth::SubjectDomainCombiner,"javax/security/auth/SubjectDomainCombiner")
J2CPP_DEFINE_METHOD(javax::security::auth::SubjectDomainCombiner,0,"<init>","(Ljavax/security/auth/Subject;)V")
J2CPP_DEFINE_METHOD(javax::security::auth::SubjectDomainCombiner,1,"getSubject","()Ljavax/security/auth/Subject;")
J2CPP_DEFINE_METHOD(javax::security::auth::SubjectDomainCombiner,2,"combine","([java.security.ProtectionDomain[java.security.ProtectionDomain)[java.security.ProtectionDomain")

} //namespace j2cpp

#endif //J2CPP_JAVAX_SECURITY_AUTH_SUBJECTDOMAINCOMBINER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
